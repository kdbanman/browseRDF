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


def explore(uri=None, exploring=True):
  if not uri:
    uri = "http://dbpedia.org/data/Albert_Einstein"
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
  except Exception as e:
	 print "ERROR:  View of graph not created from:\n\t" + uri

  '''
  userInput = ""
  while True:
    display = ["\n" for x in xrange(0,50)]
    display.append(("EXPLORATION" if exploring else "NEIGHBOR VISUALIZATION") + " mode.\n")
    
    if exploring:
      display.append("With the blue selection tool, click on the URI nodes to explore them.\n")
      display.append("V for neighbor visualization mode.")
    else:
      display.append("With the blue selection tool, click on any node to visualize its neigbours.\n")
      display.append("E for recursive exploration mode.")
    display.append("L to toggle labels\nQ to quit.")
  
    for s in display:
      print s
  
    userInput = input().lower()
    if userInput == "q" or userInput == "quit":
      tulipgui.tlp.closeAllViews()
      print "\n\n IMPORTANT:"
      print "\tStart a new Tulip session with CTRL + N or File -> New"
      print "\tif you wish to continue using Tulip or browseRDF."
  
    elif userInput[0] == "l" and userInput in "labels":
      showLabels = not showLabels
      displayLabels(showLabels)
  
    elif userInput[0] == "e" and userInput in "exploration" and not exploring:
    
      hide()
      cont.restoreColors(nbrClicked)
      show()
      arrangeViews()
  
      nbrClicked = []
      exploring = True
  
    elif userInput[0] == "v" and userInput in "visualization" and exploring:
      exploring = False
   '''

def main(graph):
	cont.bindToMain(graph)
	explore()
