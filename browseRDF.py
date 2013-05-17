#  a part of browseRDF (http://www.github.com/kdbanman/browseRDF)
#
# Copyright (c) 2013 All Rights Reserved, Kirby Banman
#
# This code is subject to the GPLv3 license.

import sys

import tulip
import tulipgui
import tulipogl

import model
import controller 

mod = model.Model()
cont = controller.Controller()


exploring = True
showLabels = False
nbrClicked = []


def newFrontier(newGraph, labels):

  # "graph" is a tlp.Graph()
  # newFrontier creates a new window with the contents of a freshly
  # dereferenced uri.  It's meant to be called after the controller has
  # converted a retrieved rdflib graph into a tulip graph.

  view = tulipgui.tlp.addNodeLinkDiagramView(newGraph)

  params = view.getRenderingParameters()
  params.setViewEdgeLabel(labels)
  params.setViewNodeLabel(labels)
  params.setEdgeSizeInterpolate(True)
  params.setViewArrow(True)
  params.setLabelsDensity(0)
  params.setLabelScaled(False)
  params.setNodesLabelStencil(0)
  params.setMinSizeOfLabel(15)

  view.setRenderingParameters(params)

def updateViews():
  for v in tulipgui.tlp.getOpenedViews():
    v.draw()

def arrangeViews():
  i = 0
  for sub in cont._parent.getSubGraphs():
    views = tulipgui.tlp.getViewsOfGraph(sub)
    if len(views) != 0:
      scale = 150
      views[0].setPos(i%800, (i/800)*scale)
      i += scale

class SelectObserver(tulip.tlp.PropertyObserver):
  '''
  The program's flow is controlled by observation of tulip nodes, the following
  observer object controls the communication between the browser's components
  '''
  def afterSetNodeValue(self, viewSelection, node):

    # make sure parent graph isn't keeping around old state.
    for sub in cont._parent.getSubGraphs():
      if len(tulipgui.tlp.getViewsOfGraph(sub)) == 0:
        for n in sub.getNodes():
          if cont.isURI(n):
            try:
              cont._parentURIs[cont.getContent(n)] -= 1
            except:
              print "content not found in URI list.\n"
        cont._parent.delSubGraph(sub)

    if cont.isURI(node) and exploring:
      uri = cont.getContent(node)

      try:
        rdfGraph = mod.getGraph(uri)
        tlpGraph = cont.triplesToTulip(rdfGraph)
        newFrontier(tlpGraph, showLabels)
        arrangeViews()
      except:
        print "RDF document not returned from " + uri

    elif not exploring:
      toSearch = []
      searched = set()
      toSearch.append(node)
      searched.add(node)

      for n in toSearch:
        for nbr in cont._parent.getInOutNodes(n):
          if nbr not in searched:
            if cont.clicked[n]:
              toSearch.append(nbr)
              searched.add(nbr)
        cont.clicked[n] = True
        nbrClicked.append(n)
    
    updateViews()



class NbrObserver(tulip.tlp.PropertyObserver):
  def afterSetNodeValue(self, clicked, node):
    if clicked[node]:
      cont.viewColor[node] = tulip.tlp.Color(255,204,0)


selObs = SelectObserver()
cont.viewSelection.addPropertyObserver(selObs)

nbrObs = NbrObserver()
cont.clicked.addPropertyObserver(nbrObs)


def hide():
  for v in tulipgui.tlp.getOpenedViews():
    v.setVisible(False)
  
def show():
  for v in tulipgui.tlp.getOpenedViews():
    v.setVisible(True)
  arrangeViews()

def displayLabels(show):
  for v in tulipgui.tlp.getOpenedViews():
    params = v.getRenderingParameters()
    params.setViewEdgeLabel(show)
    params.setViewNodeLabel(show)
    v.setRenderingParameters(params)

def labels():
  global showLabels
  showLabels = not showLabels
  displayLabels(showLabels)
  updateViews()

def mode():

  global exploring
  global nbrClicked

  exploring = not exploring

  if exploring:
    cont.restoreColors(nbrClicked)
    updateViews()

    nbrClicked = []

    print "You are now in Exploration mode.  With the blue selection tool, click"
    print "on any of the URI nodes (the blue ones) to explore them."
    print "\nIf the URI node does not return RDF, a warning will be displayed."
    print "\nCall browseRDF.mode() to switch to Neighbor Visualization mode." 
    print "\nCall browseRDF.labels() to switch labels on or off."
  else:
    print "You are now in Neighbor Visualization mode.  With the blue selection"
    print "tool, click on any node to perform a stepwize breadth-first search."
    print "The searched nodes will be colored yellow as you click."
    print "\nCall browseRDF.mode() to switch to Exploration mode."
    print "\nCall browseRDF.labels() to switch labels on or off."


def explore(uri=None ):
  if not uri:
    #uri = "http://dbpedia.org/data/Albert_Einstein"
    #uri = "http://rdf.freebase.com/ns/en.germany"
    #uri = "http://xmlns.com/foaf/spec/index.rdf"
    #uri = "http://purl.org/dc/elements/1.1/"
    #uri = "IT_Vocabulary.rdf"
  
  try:
    rdfGraph = mod.getGraph(uri)
  except:
    print "ERROR:  RDF not returned from:\n\t" + uri
    
  try:
    tlpGraph = cont.triplesToTulip(rdfGraph)
  except:
    print "ERROR:  RDF not tranlated into tlp.Graph() from:\n\t" + uri
  	  
  try:
    newFrontier(tlpGraph, showLabels)
    arrangeViews()
  except:
    print "ERROR:  View of graph not created from:\n\t" + uri


def main(graph):
  print "Welcome to browseRDF.\n"

  global exploring
  
  cont.bindToMain(graph)
  explore()
  exploring = False
  mode()
