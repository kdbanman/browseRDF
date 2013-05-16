#  a part of browseRDF (http://www.github.com/kdbanman/browseRDF)
#
# Copyright (c) 2013 All Rights Reserved, Kirby Banman
#
# This code is subject to the GPLv3 license.

import sys
import os

import tulip
import tulipgui

import model
import view
import controller 

# mute all stderr unless requested by 'errors' parameter.
# this is at the beginning because if the sterr stream is muted anywhere else,
# the muting doesn't work at all.
ARG = sys.argv
if not (len(ARG) == 2 and ARG[1] == 'debug'):
  r,w = os.pipe()
  os.close(sys.stderr.fileno())
  os.dup2(w, sys.stderr.fileno())

mod = model.Model()
vw = view.View()
cont = controller.Controller()


exploring = True
showLabels = False
nbrClicked = []


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
        vw.newFrontier(tlpGraph, showLabels)
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


if len(ARG) == 1 or len(ARG) == 2 or len(ARG) == 2 and ARG[1] == 'debug':

  if len(ARG) == 1 or ARG[1] == "debug":
    uri = "http://dbpedia.org/data/Albert_Einstein"
    #uri = "http://rdf.freebase.com/ns/en.germany"
    #uri = "http://xmlns.com/foaf/spec/index.rdf"
    #uri = "http://purl.org/dc/elements/1.1/"
    #uri = "IT_Vocabulary.rdf"
  else:
    uri = ARG[1]
  
  try:
    rdfGraph = mod.getGraph(uri)
    tlpGraph = cont.triplesToTulip(rdfGraph)
    vw.newFrontier(tlpGraph, showLabels)
    arrangeViews()
  except:
    print "ERROR:  RDF not returned from:\n\t" + uri
    sys.exit(1)



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

  userInput = raw_input().lower()
  if userInput == "q" or userInput == "quit":
    tulipgui.tlp.closeAllViews()
    sys.exit(0)

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
