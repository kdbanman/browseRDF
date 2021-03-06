/**
 *
 * This file is part of Tulip (www.tulip-software.org)
 *
 * Authors: David Auber and the Tulip development Team
 * from LaBRI, University of Bordeaux 1 and Inria Bordeaux - Sud Ouest
 *
 * Tulip is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License
 * as published by the Free Software Foundation, either version 3
 * of the License, or (at your option) any later version.
 *
 * Tulip is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 */
#include <time.h>
#include <tulip/TulipPlugin.h>
#include <tulip/StableIterator.h>

using namespace std;
using namespace tlp;



namespace {

const char * paramHelp[] = {
  // minsize
  HTML_HELP_OPEN() \
  HTML_HELP_DEF( "type", "unsigned int" ) \
  HTML_HELP_DEF( "default", "100" ) \
  HTML_HELP_BODY() \
  "This parameter defines the minimal amount of node used to build the randomized tree." \
  HTML_HELP_CLOSE(),

  // maxsize
  HTML_HELP_OPEN() \
  HTML_HELP_DEF( "type", "unsigned int" ) \
  HTML_HELP_DEF( "default", "1000" ) \
  HTML_HELP_BODY() \
  "This parameter defines the maximal amount of node used to build the randomized tree." \
  HTML_HELP_CLOSE(),

  // tree layout
  HTML_HELP_OPEN() \
  HTML_HELP_DEF( "type", "bool" ) \
  HTML_HELP_DEF( "default", "false" ) \
  HTML_HELP_BODY() \
  "This parameter indicates if the generated tree has to be drawn with a tree layout algorithm." \
  HTML_HELP_CLOSE(),
};
}

/** \addtogroup import */
/*@{*/
/// Random Tree - Import of a random tree
/** This plugin enables to create a random tree
 *
 *  User can specify the minimal/maximal numbers of nodes used to build of the tree.
 */
class RandomTree:public ImportModule {
public:
  RandomTree(AlgorithmContext context):ImportModule(context) {
    addParameter<unsigned int>("minsize",paramHelp[0],"100");
    addParameter<unsigned int>("maxsize",paramHelp[1],"1000");
    addParameter<bool>("tree layout",paramHelp[2],"false");
    addDependency<LayoutAlgorithm>("Tree Leaf", "1.0");
  }
  ~RandomTree() {
  }

  bool buildNode(node n, unsigned int sizeM) {
    if (graph->numberOfNodes()>sizeM+2) return false;

    bool result=true;
    int randNumber=rand();

    if (randNumber>RAND_MAX/2) {
      node n1,n2;
      n1=graph->addNode();
      n2=graph->addNode();
      graph->addEdge(n,n1);
      graph->addEdge(n,n2);
      result= result && buildNode(n1,sizeM);
      result= result && buildNode(n2,sizeM);
    }

    return result;
  }

  bool importGraph() {
    srand(clock());
    unsigned int minSize  = 100;
    unsigned int maxSize  = 1000;
    bool needLayout = false;

    if (dataSet!=NULL) {
      dataSet->get("minsize", minSize);
      dataSet->get("maxsize", maxSize);
      dataSet->get("tree layout", needLayout);
    }

    if (maxSize == 0) {
      if (pluginProgress)
        pluginProgress->setError(string("Error: maxsize cannot be null"));

      return false;
    }

    if (minSize > maxSize) {
      if (pluginProgress)
        pluginProgress->setError(string("Error: maxsize must be greater than minsize"));

      return false;
    }

    if (pluginProgress)
      pluginProgress->showPreview(false);

    bool ok=true;
    int i=0;

    while (ok) {
      if (pluginProgress->progress(i%100,100)!=TLP_CONTINUE) break;

      i++;
      graph->clear();
      node n=graph->addNode();
      ok = !buildNode(n,maxSize);

      if (graph->numberOfNodes()<minSize-2) ok=true;
    }

    if (pluginProgress->progress(100,100)==TLP_CANCEL)
      return false;

    if (needLayout) {
      // apply Tree Leaf
      DataSet dSet;
      string errMsg;
      LayoutProperty *layout = graph->getProperty<LayoutProperty>("viewLayout");
      return graph->applyPropertyAlgorithm("Tree Leaf", layout, errMsg,
                                           pluginProgress, &dSet);
    }

    return true;
  }
};
/*@}*/
IMPORTPLUGINOFGROUP(RandomTree,"Uniform Random Binary Tree","Auber","16/02/2001","","1.1","Graphs")
