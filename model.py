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
  
  # class variable for browser's data history
  _history = rdflib.Graph()

  def getGraph(self, uri):
    '''
    checks that a uri returns rdf, adds the data to history, and returns
    the document as an rdflib graph
    '''
    subGraph = rdflib.Graph()
    try:
      subGraph.load(uri)
      print uri + " loaded into model - " + str(len(subGraph)) + " triples"
    except:
      print "the following uri did not return a valid rdf document:"
      print uri
      return -1

    #TODO: merge subGraph with _history,  _history += subGraph didn't work...

    return subGraph
    
  def serialize(self, uris):
    '''
    looks through the entire browsing history for all uris, builds a graph
    containing them and all of their predicates, and serializes it as rdf-xml.
    prints an error to terminal if a uri is not found in the history.
    '''
    #TODO: for uri in list, query for triples with all other uris ( O(n^2) )


