#  a part of browseRDF (http://www.github.com/kdbanman/browseRDF)
#
# Copyright (c) 2013 All Rights Reserved, Kirby Banman
#
# This code is subject to the GPLv3 license.

import sys

import tulip

import model
import view
import controller 

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

if len(sys.argv) == 2 and sys.argv[1] == 'debug':
  uri = "http://dbpedia.org/resource/Albert_Einstein"
  rdfGraph = mod.getGraph(uri)
  print rdfGraph
  tlpGraph = cont.triplesToTulip(rdfGraph)
  vw.newFrontier(tlpGraph)
