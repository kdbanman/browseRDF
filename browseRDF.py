#  a part of browseRDF (http://www.github.com/kdbanman/browseRDF)
#
# Copyright (c) 2013 All Rights Reserved, Kirby Banman
#
# This code is subject to the GPLv3 license.

import sys
import os

import tulip

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

class SelectObserver(tulip.tlp.PropertyObserver):
  '''
  The program's flow is controlled by observation of tulip nodes, the following
  observer object controls the communication between the browser's components
  '''
  def afterSetNodeValue(self, viewSelection, node):
    if True: # TODO: this needs to be the exploration condition of the toolbar
      if cont.isURI(node):
        uri = cont.getContent(node)
        rdfGraph = mod.getGraph(uri)
        tlpGraph = cont.triplesToTulip(rdfGraph)
        vw.newFrontier(tlpGraph)


selObs = SelectObserver()
cont.viewSelection.addPropertyObserver(selObs)

if len(ARG) == 2 and ARG[1] == 'debug' or len(ARG) == 3 and ARG[1] == 'debug' and ARG[2] == 'errors':
  uri = "http://www.w3.org/1999/02/22-rdf-syntax-ns#"
  rdfGraph = mod.getGraph(uri)
  tlpGraph = cont.triplesToTulip(rdfGraph)
  vw.newFrontier(tlpGraph)

