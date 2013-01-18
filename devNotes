#browseRDF
development notes

###problem statement
there is no browser that allows users to explore, scrutinize, and aggregate linked data.

###requirements
#####need to have
- graph-based UI, showing nodes and edges as subjects/objects and predicates, respectively
- initialized with a seed URI returning RDF data
- base graph (initial window) showing aggregated RDF
- recursively explore nodes with subwindows showing returned RDF graphs
- select data in subwindows, triggering aggregation on the base graph
#####nice to have
- visualized parameters for relatedness heuristic
- show/hide namespaced URI labels
- save base graph as .tlp

###architecture
- toolbar indicating interaction mode and other options
- communicator handling HTTP communication
- translator converting RDF documents to tlp.Graph() structures
- window/subgraph manager #TODO
- formatter handling graph layout, and labels
