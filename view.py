#  a part of browseRDF (http://www.github.com/kdbanman/browseRDF)
#
# Copyright (c) 2013 All Rights Reserved, Kirby Banman
#
# This code is subject to the GPLv3 license.

from tulip import *
from tulipogl import *
from tulipgui import *

class View():
  '''
  class for managing frontier windows and aggregate graph window.
  '''
  
  #TODO: newFrontier(graph)
  '''
  "graph" is of type FrontierGraph.
  newFrontier creates a new window with the contents of a freshly
  dereferenced uri.  It's meant to be called by the controller after it has
  converted the retrieved rdflib graph into a tulip graph.
  '''

  #TODO: makePretty(graph, window)
  '''
  function that applies a force-directed layout algorithm, a degree-based
  sizing algorithm, and updates the view of the graph.
  '''
