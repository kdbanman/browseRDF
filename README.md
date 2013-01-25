browseRDF
=========

a graph-based RDF data browser using
- [Tulip 3.8.0](http://tulip.labri.fr/TulipDrupal/), a graph analysis and visualization 
library
- [PyQt v4](http://www.riverbankcomputing.com/software/pyqt/intro), a set of Python 
bindings to the Qt application framework
- [rdflib](https://github.com/RDFLib/rdflib), an RDF library for Python

##development notes

###problem statement
there is no browser that allows users to explore, scrutinize, and aggregate linked data.

###requirements

######need to have
- graph-based UI, showing nodes and edges as subjects/objects and predicates, respectively
- initialized with a seed URI returning RDF data
- base graph (initial window) showing aggregated RDF
- recursively explore nodes with subwindows showing returned RDF graphs
- select data in subwindows, triggering aggregation on the base graph
- seletively display values of literals when the arise

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

######major components/data structures
- controller
    - toolbar interface for
        - choosing interaction mode: explore or select
        - displaying literal value (maybe that's the default for either mode?)
        - quitting
        - (eventually) choosing view parameters
        - (eventually) saving rdf-xml file
    - observer object making function calls to the model based on event type
        - calls to model
            - selection
            - exploration
        - calls to view
            - display literal value

- model
    - main graph, containing
        - aggregated (selected) nodes
        - frontier (under exploration) nodes
    - communicator handling HTTP URI dereferencing
    - translator converting RDF documents to tlp.Graph() structures
        - upon tranlation, calling the view is necessary to begin visualization
    - subgraph manager (maybe this is over-abstraction?)

- view
    - window manager for tracking and placing exploration windows
    - formatter handling visual properties
        - layout
        - colorization
        - node sizing
        - edge weighting
        - labels
    - observer object to trigger frontier cleanup in the event of window closure
    

###questions motivating the TODO
- in the event of a node click, is the logic and function call to be within the observer
object?
- is it appropriate to manage the main graph structure with rdflib?
    - if so, each node will have a tulip representation for the view, and an rdflib representation for the model
    - it seems like manipulating an rdf structure with rdflib makes sense, but it may be just as natural within tulip (rdflib functioning solely as a translator, in that case)
    - what do we do in the (inevitable) event that a node is discovered in more than one exploration window at once?
        - perhaps the answer is to treat the frontier nodes and the aggregated nodes identically, and visualize the phenomenon with size or color
