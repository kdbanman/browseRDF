#  a part of browseRDF (http://www.github.com/kdbanman/browseRDF)
#
# copyright (c) 2013 all rights reserved, Kirby Banman
#
# this code is subject to the GPLv3 license.

from tulip import *

import math
import rdflib


class Controller():
  '''
  class for managing data flow between view and model with a tulip graph
  '''
  # container for both aggregate and frontier graphs
  _parent = tlp.newGraph()

  # to track uris with membership test
  _parentURIs = {}

  # layout and size properties for nice display
  viewLayout = _parent.getLayoutProperty("viewLayout")
  viewSize = _parent.getSizeProperty("viewSize")

  # shape and color will differentiate between uris and literals
  viewShape = _parent.getIntegerProperty("viewShape")
  viewColor = _parent.getColorProperty("viewColor")

  # for selection colorization
  prevColor = _parent.getColorProperty("prevColor")

  # nodes will be labelled by their uris (namespaced for predicates, empty for literals)
  viewLabel = _parent.getStringProperty("viewLabel")

  # default shape and color for uris and literals, respectively
  uriShape = tlp.NodeShape.Circle
  uriColor = tlp.Color(40,80,190)
  seenURIColor = tlp.Color(200, 25, 25)
  litShape = tlp.NodeShape.Square
  litColor = tlp.Color(30,170,170)

  # selection property to observe for exploration/saving
  viewSelection = _parent.getBooleanProperty("viewSelection")
  # each node needs to know its uri or literal, and which one of those it is
  content = _parent.getStringProperty("content")
  uriLiteral = _parent.getStringProperty("uriLiteral")

  # number of times the node has been clicked, for the selection mode colorization
  clicked = _parent.getBooleanProperty("clicked")


  def bindToMain(self, mainGraph):
    '''
    call in the very beginning from within the Python Script view inside
    Tulip's main gui, and NOWHERE else.
    '''
    _parent = mainGraph.addSubGraph()


  def rememberColor(self, node):
    self.prevColor[node] = self.viewColor[node]

  def restoreColors(self, nodes):
    self.clicked.setAllNodeValue(False)
    for node in nodes:
      self.viewColor[node] = self.prevColor[node]
    

  # for a specific node in the _parent graph, the next 3 functions get the 
  # properties of that node
  def getContent(self, node):
    try:
      return self.content[node]
    except:
      print "node not in graph"
      quit()

  def isLiteral(self, node):
    try:
      if self.uriLiteral[node] == "URI":
        return False
      elif self.uriLiteral[node] == "Literal":
        return True
      else:
        print "node does not have uriLiteral property"
        quit()
    except:
      print "node not in graph"
      quit()

  def isURI(self, node):
    return not self.isLiteral(node)
  

  def fill(self, rdflibTerm, tulipNode, rdflibGraph):
    # label to display for each node
    content = self.content[tulipNode]


    if len(content) < 80:
      self.viewLabel[tulipNode] = content
    else:
      self.viewLabel[tulipNode] = content[:77] + "..."

    # color and shape of rdf resource differs between uris and literals.
    if type(rdflibTerm) == rdflib.URIRef:

      prefixFail = False
      try:
        # split uri by namespace
        namespace, name = rdflib.namespace.split_uri(rdflibTerm)
      except:
        # don't bother prefixing if it failed
        self.viewLabel[tulipNode] = rdflibTerm.encode("UTF-8")
        prefixFail = True
  
      if not prefixFail:
        # cast from string to uri
        namespace = rdflib.URIRef(namespace)
        # get prefix from parent graph
        prefix = rdflibGraph.store.prefix(namespace)
        # test if that failed
        if prefix == None:
          # just set full uri as label
          self.viewLabel[tulipNode] = rdflibTerm.encode("UTF-8")
        else:
          # write prefixed uri as label
          self.viewLabel[tulipNode] = str(prefix) + ":" + str(name)


      # determine if the uri is currently in any other view
      newURI = content not in self._parentURIs or self._parentURIs[content] == 0
      if newURI:
        self._parentURIs[content] = 1
      else:
        self._parentURIs[content] += 1

      # color the uri red if it's rendered anywhere else
      self.viewColor[tulipNode] = (self.uriColor if newURI else self.seenURIColor)
      self.prevColor[tulipNode] = self.viewColor[tulipNode]
      self.viewShape[tulipNode] = self.uriShape

      # distinguish between uris and literals with this property
      self.uriLiteral[tulipNode] = "URI"

    else:
      self.viewColor[tulipNode] = self.litColor
      self.prevColor[tulipNode] = self.viewColor[tulipNode]
      self.viewShape[tulipNode] = self.litShape

      # distinguish between uris and literals with this property
      self.uriLiteral[tulipNode] = "Literal"


  def fillEdge(self, rdflibPred, tulipEdge, rdflibGraph):
    # namespaced predicates are for free with rdflib :)
    try:
      # split uri by namespace
      namespace, name = rdflib.namespace.split_uri(rdflibPred)
    except:
      # don't bother prefixing if it failed
      self.viewLabel[tulipEdge] = rdflibPred.encode("UTF-8")
      return

    # cast from string to uri
    namespace = rdflib.URIRef(namespace)
    # get prefix from parent graph
    prefix = rdflibGraph.store.prefix(namespace)
    # test if that failed
    if prefix == None:
      # overwrite the intended prefix with the full namespace
      prefix = namespace
 
    # write prefixed uri as label
    self.viewLabel[tulipEdge] = str(prefix + ":" + name)
      


  def triplesToTulip(self, rdflibGraph):
    '''
    converts an rdflib.Graph() of triples into a Tulip (sub)graph for display
    by the view class.
    '''

    frontGraph = self._parent.addSubGraph()
    # to check if node is already in graph by building a set for constant-time membership checks
    # this is to account for the fact that every resource is listed once in every one of its triples
    nodeDict= {}
    
    # iterate through passed graph to build tulip graph
    for s,p,o in rdflibGraph:
      sContent = s.encode("UTF-8")
      oContent = o.encode("UTF-8")

      newS = True
      newO = True
      if sContent in nodeDict:
        sNode = nodeDict[sContent]
        newS = False
      if oContent in nodeDict:
        oNode = nodeDict[oContent]
        newO = False
      
      # add nodes to subgraph if they are new
      if newS:
        sNode = frontGraph.addNode()
        self.content[sNode] = sContent

        nodeDict[sContent] = sNode

        self.fill(s, sNode, rdflibGraph)

      if newO:
        oNode = frontGraph.addNode()
        self.content[oNode] = oContent

        nodeDict[oContent] = oNode

        self.fill(o, oNode, rdflibGraph)
       
      # connect the nodes by their predicate
      pEdge = frontGraph.addEdge(sNode, oNode)
      self.fillEdge(p, pEdge, rdflibGraph)
      
    self.forceLayout(frontGraph)
    self.degreeSize(frontGraph)

    return frontGraph


  def forceLayout(self, graph):
    # apply tulip's quickest force-directed layout
    params = tlp.getDefaultPluginParameters("FM^3 (OGDF)", graph)
    params["Unit edge length"] = math.sqrt(graph.numberOfNodes())*8

    graph.applyLayoutAlgorithm("FM^3 (OGDF)", self.viewLayout, params)

  def degreeSize(self, graph):
    # get degree of each node, size accordingly
    degree = tlp.DoubleProperty(graph)
    degParams = tlp.getDefaultPluginParameters("Degree")
    graph.applyDoubleAlgorithm("Degree", degree, degParams)

    params = tlp.getDefaultPluginParameters("Metric Mapping", graph)
    params["property"] = degree
    params["min size"] = 2
    params["max size"] = 10

    graph.applySizeAlgorithm("Metric Mapping", self.viewSize, params)
