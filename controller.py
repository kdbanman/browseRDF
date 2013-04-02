#  a part of browseRDF (http://www.github.com/kdbanman/browseRDF)
#
# copyright (c) 2013 all rights reserved, Kirby Banman
#
# this code is subject to the GPLv3 license.

from tulip import *

import rdflib

class Controller():
  '''
  class for managing data flow between view and model with a tulip graph and a
  PyQt toolbar
  '''
  # container for both aggregate and frontier graphs
  _parent = tlp.newGraph()

  # layout property for nice display
  viewLayout = _parent.getLayoutProperty("viewLayout")
  # shape and color will differentiate between uris and literals
  viewShape = _parent.getIntegerProperty("viewShape")
  viewColor = _parent.getColorProperty("viewColor")
  # nodes will be labelled by their uris (namespaced for predicates, empty for literals)
  viewLabel = _parent.getStringProperty("viewLabel")

  uriShape = tlp.NodeShape.Circle
  uriColor = tlp.Color(40,80,190)

  litShape = tlp.NodeShape.Square
  litColor = tlp.Color(30,170,170)

  # selection property to observe for exploration/saving
  viewSelection = _parent.getBooleanProperty("viewSelection")
  # each node needs to know its uri or literal, and which one of those it is
  content = _parent.getStringProperty("content")
  uriLiteral = _parent.getStringProperty("uriLiteral")
  # each node needs a property that will trigger aggregation
  aggregate = _parent.getBooleanProperty("aggregate")



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
  

  def fill(self, rdflibTerm, tulipNode):
    if type(rdflibTerm) == rdflib.URIRef:
      self.uriLiteral[tulipNode] = "URI"
      self.viewColor[tulipNode] = self.uriColor
      self.viewShape[tulipNode] = self.uriShape
    else:
      self.uriLiteral[tulipNode] = "Literal"
      self.viewColor[tulipNode] = self.litColor
      self.viewShape[tulipNode] = self.litShape



  def triplesToTulip(self, rdflibGraph):
    '''
    converts an rdflib.Graph() of triples into a Tulip (sub)graph for display
    by the view class.  the uri exploration path of the graph is known by the
    graph so that shortest path to aggregate can be calculated.
    '''
    frontGraph = self._parent.addSubGraph()
    # to check if node is already in graph by building a set for constant-time membership checks
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

        self.fill(s, sNode)

      if newO:
        oNode = frontGraph.addNode()
        self.content[oNode] = oContent

        nodeDict[oContent] = oNode

        self.fill(o, oNode)
       
      # connect the nodes by their predicate
      pEdge = frontGraph.addEdge(sNode, oNode)
      self.content[pEdge] = p.encode("UTF-8")
      
    self.forceLayout(frontGraph)

    return frontGraph


  def forceLayout(self, graph):
    params = tlp.getDefaultPluginParameters("FM^3 (OGDF)", graph)
    graph.applyLayoutAlgorithm("FM^3 (OGDF)", self.viewLayout, params)
