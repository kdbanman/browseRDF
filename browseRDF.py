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
if not (len(ARG) == 3 and ARG[1] == 'debug' and ARG[2] == 'errors'):
  r,w = os.pipe()
  os.close(sys.stderr.fileno())
  os.dup2(w, sys.stderr.fileno())

mod = model.Model()
vw = view.View()
cont = controller.Controller()


exploring = True

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
        vw.newFrontier(tlpGraph)
      except:
        print "RDF document not returned from " + uri

    elif not exploring:
      toSearch = []
      toSearch.append(node)
      cont.numClicked[node] += 1

      while len(toSearch) > 0:
        #TODO this isn't growing past 1, so BFS isn't quite right yet
        print len(toSearch)
        del toSearch[0]
        for n in toSearch:
          cont.numClicked[n] += 1
          for nbr in cont._parent.getInOutNodes(n):
            if cont.numClicked[nbr] > 0:
              toSearch.append(nbr)
            cont.numClicked[nbr] += 1


propScale = tulip.tlp.ColorScale([])
propScale.setColorAtPos(0, tulip.tlp.Color(0,0,255))
propScale.setColorAtPos(5, tulip.tlp.Color(255,0,0))

class NbrObserver(tulip.tlp.PropertyObserver):
  def afterSetNodeValue(self, numClicked, node):
    cont.viewColor[node] = propScale.getColorAtPos(cont.numClicked[node])


selObs = SelectObserver()
cont.viewSelection.addPropertyObserver(selObs)

nbrObs = NbrObserver()
cont.numClicked.addPropertyObserver(nbrObs)


if len(ARG) == 2 and ARG[1] == 'debug' or len(ARG) == 3 and ARG[1] == 'debug' and ARG[2] == 'errors':
  #uri = "http://dbpedia.org/data/Albert_Einstein"
  #uri = "http://rdf.freebase.com/ns/en.germany"
  uri = "http://xmlns.com/foaf/spec/index.rdf"
  #uri = "http://purl.org/dc/elements/1.1/"
  #uri = "IT_Vocabulary.rdf"
  
  rdfGraph = mod.getGraph(uri)
  tlpGraph = cont.triplesToTulip(rdfGraph)
  vw.newFrontier(tlpGraph)


userInput = ""
while True:
  display = ["\n" for x in xrange(0,100)]
  display.append(("EXPLORATION" if exploring else "NEIGHBOR VISUALIZATION") + " mode.\n")
  
  if exploring:
    display.append("With the blue selection tool, click on the URI nodes to explore them.\n")
  else:
    display.append("With the blue selection tool, click on any node to visualize its neigbours.\n")

  display.append("Enter E for recursive exploration mode\n      V for visualization mode\n      Q to quit.  ")

  for s in display:
    print s

  userInput = raw_input().lower()
  if userInput == "q" or userInput == "quit":
    tulipgui.tlp.closeAllViews()
    sys.exit(0)
  elif userInput[0] == "e" and userInput in "exploration" and not exploring:
    cont.restoreColors()
    exploring = True
  elif userInput[0] == "v" and userInput in "visualization" and exploring:
    cont.rememberColors()
    exploring = False

