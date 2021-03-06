browseRDF
=========

a graph-based RDF data browser using
- [Tulip 3.8.0](http://tulip.labri.fr/TulipDrupal/), a graph analysis and visualization 
library
bindings to the Qt application framework
- [rdflib](https://github.com/RDFLib/rdflib), an RDF library for Python

##development notes

###problem
there is no browser that allows users to explore, scrutinize, and aggregate linked data.

###requirements

######need to have
- graph-based UI, showing nodes and edges as subjects/objects and predicates, respectively
- initialized with two persistent UI components
    - blank initial window for aggregated RDF
    - toolbar for changing interaction mode and entering URIs
- recursively explore chosen nodes and new URIs with subwindows showing returned RDF graphs
- select data in subwindows, triggering aggregation on the base graph
    - shortest path to aggregated nodes inherently selected, unless the aggregation is empty or disconnected
- seletively display values of literals when they arise

######nice to have
- visualized parameters for relatedness heuristic
    - egde weighting/coloring for common or important predicates
    - node colorizing and sizing for rediscovery, relatedness, etc.
- show/hide namespaced URI labels
- save base graph as rdf-xml file

###architecture

######MVC architecture
- model managed by rdflib
- view/controller managed by Tulip
    - the plan to use PyQt is no good - both tulip uses Qt and there is a conflict

######library choices
- [Tulip 3.8.0](http://tulip.labri.fr/TulipDrupal/), a graph analysis and visualization library
    - extensive python scripting API that is very well documented
    - tulipgui library for creation of standalone GUIs
    - not without bugs, but 3.8 is more stable than 4.x
        - 4.x do not support standalone gui applications
    - alternatives are [Gephi](https://gephi.org/)
        - great for non-programmatic visualization, and is better maintained than Tulip
        - no scripting API to tap into and no library for standalone GUIs
    - and [Graphvis](http://www.graphviz.org/)
        - much older and more mature than Tulip, with better research documentation
        - documentation of scripting APIs not nearly as comprehensive as Tulip
- [rdflib](https://github.com/RDFLib/rdflib), an RDF library for Python
    - no real alternatives for python

######major components/data structures
**controller**

- toolbar interface
    - now that tulip nodes will be used for the toolbar, command line input will be used for URI entry
        - since the point of this browser is to explore linked data, a single
          seed per session is reasonable
        - a single seed also makes for a single graph to serialize into a single
          document in the end.  much simpler.
    - choose interaction mode: explore or select/aggregate
        - nodes forming the recursive exploration path are included in the aggregate to make it connected
        - all connecting edges between newly aggregated nodes are aggregated as well
        - interaction with a literal in either mode displays its value (in a popup?  on terminal?)
    - quit
    - (eventually) save rdf-xml file
- observer object that does function calls to the other components based on event type
    - calls to model
        - exploration
            - URI string passed to model for dereferencing rdf document
        - (eventually) pass list of aggregated uris for serialization
- observer object that adds to aggregate graph in the event that the aggregate boolean property is set to true for a node or an edge
- parent tulip graph containing aggregate and all frontier graphs as subgraphs
    - each node and edge needs two string properties
        - content, for keeping track of the URI or literal that it represents
        - uriLiteral, so it knows whether its content is a URI or a literal value
    - each node and edge needs a boolean property
        - aggregated, to trigger the aggregate activity
    - for the purposes of maintaining consistency in node/edge properties, it seems
      easiest to keep frontier graphs as subgraphs of the parent, since node/edge properties can be dereferenced ubiquitously that way
        - the parent consequently holds all browsing history.
- translation function for converting RDF documents to tlp.Graph() structures
    - upon translation, calling the view is necessary to begin visualization

**model**

- history graph, containing all triples ever explored
- communication function for handling HTTP URI dereferencing

**view**

- window manager for tracking and placing exploration windows
- formatter handling visual properties
    - layout
    - colorization
    - node sizing
    - edge weighting
    - labels
    

