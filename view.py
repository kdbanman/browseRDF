#  a part of browseRDF (http://www.github.com/kdbanman/browseRDF)
#
# Copyright (c) 2013 All Rights Reserved, Kirby Banman
#
# This code is subject to the GPLv3 license.

import tulipgui

class View():
  '''
  class for managing frontier windows and aggregate graph window.
  '''
  views = []

  def newFrontier(self, graph):
    '''
    "graph" is a tlp.Graph()
    newFrontier creates a new window with the contents of a freshly
    dereferenced uri.  It's meant to be called after the controller has
    converted a retrieved rdflib graph into a tulip graph.
    '''


    view = tulipgui.tlp.addNodeLinkDiagramView(graph)
    view.setOptionsWidgetsVisible(False)

    params = view.getRenderingParameters()
    params.setEdgeSizeInterpolate(False)
    params.setViewArrow(True)
    params.setLabelsDensity(0)
    params.setLabelScaled(False)
    params.setNodesLabelStencil(0)
    params.setMinSizeOfLabel(15)
    params.setViewEdgeLabel(True)

    view.setRenderingParameters(params)

