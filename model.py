#  a part of browseRDF (http://www.github.com/kdbanman/browseRDF)
#
# Copyright (c) 2013 All Rights Reserved, Kirby Banman
#
# This code is subject to the GPLv3 license.

import rdflib

class Model():
  '''
  class for retrieving new rdf, maintaining browsing history, and serializing
  aggregated graphs
  '''
  def getGraph(self, uri):
    '''
    checks that a uri returns rdf, adds the data to history, and returns
    the document as an rdflib graph
    '''
    subGraph = rdflib.Graph()
    try:
      subGraph.load(uri)
    except:
      return -1

    return subGraph
    
