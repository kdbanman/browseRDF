browseRDF
=========

a graph-based RDF data browser using
1. [Tulip 3.8.0](http://tulip.labri.fr/TulipDrupal/), a graph analysis and visualization 
library
1. [PyQt v4](http://www.riverbankcomputing.com/software/pyqt/intro), a set of Python 
bindings to the Qt application framework
1. [rdflib](https://github.com/RDFLib/rdflib), an RDF library for Python

##development notes

###problem
there is no browser that allows users to explore, scrutinize, and aggregate linked data.

###requirements

######need to have
1. graph-based UI, showing nodes and edges as subjects/objects and predicates, respectively
1. initialized with a seed URI returning RDF data
1. base graph (initial window) showing aggregated RDF
1. recursively explore nodes with subwindows showing returned RDF graphs
1. select data in subwindows, triggering aggregation on the base graph
1. seletively display values of literals when the arise

######nice to have
1. visualized parameters for relatedness heuristic
    1. egde weighting/coloring for common or important predicates
    1. node colorizing and sizing for rediscovery, relatedness, etc.
1. show/hide namespaced URI labels
1. save base graph as rdf-xml file

###architecture

######MVC architecture
1. model managed by rdflib
1. view managed by Tulip
1. controller managed by PyQt

######major components/data structures
1. controller
    1. toolbar interface
        1. choosing interaction mode: explore or select
        1. displaying literal value (maybe that's the default for either mode?)
        1. quitting
        1. (eventually) choosing view parameters
        1. (eventually) saving rdf-xml file
    1. observer object making function calls to the model based on event type
        1. calls to model
            1. selection
            1. exploration
        1. calls to view
            1. display literal value

1. model
    1. main graph, containing
        1. aggregated (selected) nodes
        1. frontier (under exploration) nodes
    1. communicator handling HTTP URI dereferencing
    1. translator converting RDF documents to tlp.Graph() structures
        1. upon tranlation, calling the view is necessary to begin visualization
    1. subgraph manager (maybe this is over-abstraction?)

1. view
    1. window manager for tracking and placing exploration windows
    1. formatter handling visual properties
        1. layout
        1. colorization
        1. node sizing
        1. edge weighting
        1. labels
    1. observer object to trigger frontier cleanup in the event of window closure
    

###questions motivating the TODO
1. in the event of a node click, is the logic and function call to be within the observer
object?
1. is it appropriate to manage the main graph structure with rdflib?
    1. if so, each node will have a tulip representation for the view, and an rdflib representation for the model
    1. it seems like manipulating an rdf structure with rdflib makes sense, but it may be just as natural within tulip (rdflib functioning solely as a translator, in that case)
    1. what do we do in the (inevitable) event that a node is discovered in more than one exploration window at once?
        1. perhaps the answer is to treat the frontier nodes and the aggregated nodes identically, and visualize the phenomenon with size or color
