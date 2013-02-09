browseRDF
=========

a graph-based RDF data browser using
- [Tulip 3.8.0](http://tulip.labri.fr/TulipDrupal/), a graph analysis and visualization 
library
- [PyQt v4](http://www.riverbankcomputing.com/software/pyqt/intro), a set of Python 
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
- view managed by Tulip
- controller managed by PyQt

######library choices
- [Tulip 3.8.0](http://tulip.labri.fr/TulipDrupal/), a graph analysis and visualization 
library
    - extensive python scripting API that is very well documented
    - tulipgui library for creation of standalone GUIs
    - not without bugs, but 3.8 is more stable than 4.1
    - alternatives are [Gephi](https://gephi.org/)
        - great for non-programmatic visualization, and is better maintained than Tulip
        - no scripting API to tap into and no library for standalone GUIs
    - and [Graphvis](http://www.graphviz.org/)
        - much older and more mature than Tulip, with better research documentation
        - documentation of scripting APIs not nearly as comprehensive as Tulip
- [PyQt v4](http://www.riverbankcomputing.com/software/pyqt/intro), a set of Python 
bindings to the Qt application framework
    - extensive documentation, examples, and support
    - also used by Tulip
    - alternatives are wxPython and tkinter, but the reasons above are enough to
choose PyQt
- [rdflib](https://github.com/RDFLib/rdflib), an RDF library for Python
    - no real alternatives for python

######major components/data structures
**controller**

- toolbar interface
    - text box for entering uris (disappears after the first rdf document is retrieved)
        - since the point of this browser is to explore linked data, a single
          seed per session is reasonable
        - a single seed also makes for a single graph to serialize into a single
          document in the end.  much simpler.
    - choose interaction mode: explore or select
        - interaction with a literal in either mode displays its value
    - quit
    - (eventually) choose view parameters
    - (eventually) save rdf-xml file
        - after serialization, the user could be prompted to start a new session,
          possibly preserving history
- observer object that does function calls to the other components based on event type
    - calls to model
        - exploration
            - URI string passed to model for dereferencing rdf document
        - (eventually) pass list of aggregated uris for serialization
    - calls to view
	- update aggregate view
            - upon window closure, add newly selected nodes to aggregate, and update view
        - render frontier subgraph upon return of graph from model
        - display literal value
- parent tulip graph containing aggregate and all frontier graphs as subgraphs
    - each node and edge needs two string properties
        - content, for keeping track of the URI or literal that it represents
        - uriLiteral, so it knows whether its content is a URI or a literal value
    - for the purposes of maintaining consistency in node/edge properties, it seems
      easiest to keep frontier graphs as subgraphs of the parent
    - if nodes can be created with node edge properties (i.e. content, uriLiteral) in
      one graph, added to a different graph, and have those same properties dereferenced
      as part of the new graph, then it would be better to keep a list of frontier graphs
        - #TODO: try above
- translation function for converting RDF documents to tlp.Graph() structures
    - upon translation, calling the view is necessary to begin visualization
- observer object to trigger frontier cleanup in the event of window closure

**model**

- history graph, containing all triples ever explored
    - this is an important feature, querying this graph means we could compute relatedness
      for visualization
- communication function for handling HTTP URI dereferencing

**view**

- window manager for tracking and placing exploration windows
- formatter handling visual properties
    - layout
    - colorization
    - node sizing
    - edge weighting
    - labels
    

###questions motivating the TODO
- in the event of a node click, is the logic and function call to be within the observer
object?
- is it appropriate to manage the main graph structure with rdflib?
    - if so, each node will have a tulip representation for the view, and an rdflib representation for the model
    - it seems like manipulating an rdf structure with rdflib makes sense, but it may be just as natural within tulip (rdflib functioning solely as a translator, in that case)
    - extending the software in the future with more RDF features would be more natural if its model is maintained with rdflib
    - rdflib supports on-disk storage with triplestores
    - background crawling and processing to enhance visualization and relevancy is possible with an rdflib-managed model
    - *solution strategy*: look at exactly what data is stored using rdflib.  if it's quite minimal, and there aren't important dependencies (like namespace data), then tulip should be used to manage the model.
        - key difference:  rdflib stores its graph in triples, tulip in nodes and edges
- what do we do in the (inevitable) event that a node is discovered in more than one exploration window at once?
    - perhaps the answer is to treat the frontier nodes and the aggregated nodes identically, and visualize the phenomenon with size or color
