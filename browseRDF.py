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


uriColor = tulip.tlp.Color(40,80,190)
litColor = tulip.tlp.Color(30,170,170)

propScale = tulip.tlp.ColorScale([])
propScale.setColorAtPos(0, tulip.tlp.Color(0,0,255))
propScale.setColorAtPos(5, tulip.tlp.Color(255,0,0))

def uriLitColorize():
  print "fuck you"

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
          if cont.isURI(node):
            try:
              cont._parentURIs.remove(cont.getContent(node))
            except:
              print "content not found in URI list.\n"
        cont._parent.delSubGraph(sub)
        print "Window was closed, associated RDF data removed from model.\n"
    print len(cont._parentURIs)

    if cont.isURI(node) and exploring:
      uri = cont.getContent(node)

      try:
        rdfGraph = mod.getGraph(uri)
        tlpGraph = cont.triplesToTulip(rdfGraph)
        vw.newFrontier(tlpGraph)
      except:
        print "RDF document not returned from " + uri

    elif not exploring:
      print node



selObs = SelectObserver()
cont.viewSelection.addPropertyObserver(selObs)

if len(ARG) == 2 and ARG[1] == 'debug' or len(ARG) == 3 and ARG[1] == 'debug' and ARG[2] == 'errors':
  #uri = "http://dbpedia.org/data/Albert_Einstein"
  #uri = "http://rdf.freebase.com/ns/en.germany"
  #uri = "http://xmlns.com/foaf/spec/index.rdf"
  uri = "http://purl.org/dc/elements/1.1/"
  
  rdfGraph = mod.getGraph(uri)
  tlpGraph = cont.triplesToTulip(rdfGraph)
  vw.newFrontier(tlpGraph)


userInput = ""
while userInput.lower() != "q" or userInput.lower() != "quit":
  display = []
  display.append("\n\nCurrently in " + ("exploration" if exploring else "selection") + " mode.\n")
  
  if exploring:
    display.append("With the crosshair tool, click on the URI nodes (blue circles) to explore them.\n")
  else:
    display.append("With the crosshair tool, click on the nodes to visualize their neigbours.\n")

  display.append("Enter E for exploration mode, S for selection mode, Q to quit.  ")

  for s in display:
    print s

  userInput = raw_input()

# when selection mode is enabled, clear the numClicked property on each node

