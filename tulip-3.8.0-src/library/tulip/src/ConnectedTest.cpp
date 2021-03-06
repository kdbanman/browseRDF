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
#include <list>
#include <tulip/Graph.h>
#include <tulip/ConnectedTest.h>
#include <tulip/MutableContainer.h>
#include <tulip/ForEach.h>

using namespace std;
using namespace tlp;
//=================================================================
ConnectedTest * ConnectedTest::instance=NULL;
//=================================================================
bool ConnectedTest::isConnected(const tlp::Graph*const graph) {
  if (instance==NULL)
    instance=new ConnectedTest();

  return instance->compute(graph);
}
//=================================================================
void ConnectedTest::makeConnected(Graph *graph, vector<edge> &addedEdges) {
  //  cerr << __PRETTY_FUNCTION__ << " : " << graph->getAttribute<string>("name") << endl;
  if (instance==NULL)
    instance=new ConnectedTest();

  graph->removeGraphObserver(instance);
  instance->resultsBuffer.erase((unsigned long)graph);
  vector<node> toLink;
  instance->connect(graph, toLink);

  for (unsigned int i = 1; i < toLink.size(); ++i)
    addedEdges.push_back(graph->addEdge(toLink[i-1], toLink[i]));

  assert(ConnectedTest::isConnected(graph));
}
//=================================================================
unsigned int ConnectedTest::numberOfConnectedComponents(const tlp::Graph* const graph) {
  if (graph->numberOfNodes()==0) return 0u;

  if (instance==NULL)
    instance=new ConnectedTest();

  graph->removeGraphObserver(instance);
  vector<node> toLink;
  instance->connect(graph, toLink);
  unsigned int result;

  if (!toLink.empty())
    result =  toLink.size();
  else
    result = 1u;

  instance->resultsBuffer[(unsigned long)graph] = (result == 1u);
  graph->addGraphObserver(instance);
  return result;
}
//======================================================================
void ConnectedTest::computeConnectedComponents(Graph *graph, std::vector<std::set<node> >& components) {
  MutableContainer<bool> visited;
  visited.setAll(false);
  // do a bfs traversal for each node
  node curNode;
  forEach(curNode, graph->getNodes()) {
    // check if curNode has been already visited
    if (!visited.get(curNode.id)) {
      // add a new component
      components.push_back(std::set<node>());
      std::set<node>& component = components.back();
      // and initialize it with current node
      component.insert(curNode);
      // do a bfs traversal this node
      list<node> nodesToVisit;
      visited.set(curNode.id, true);
      nodesToVisit.push_front(curNode);

      while(!nodesToVisit.empty()) {
        curNode = nodesToVisit.front();
        nodesToVisit.pop_front();
        // loop on all neighbours
        Iterator<node> *itn = graph->getInOutNodes(curNode);

        while(itn->hasNext()) {
          node neighbour = itn->next();

          // check if neighbour has been visited
          if (!visited.get(neighbour.id)) {
            // mark neighbour as already visited
            visited.set(neighbour.id, true);
            // insert it in current component
            component.insert(neighbour);
            // push it for further deeper exploration
            nodesToVisit.push_back(neighbour);
          }
        }

        delete itn;
      }
    }
  }
}

//=================================================================
void connectedTest(const Graph * const graph, node n,
                   MutableContainer<bool> &visited,
                   unsigned int &count) {

  unsigned int i = 0;
  vector<node> next_roots;
  next_roots.push_back(n);
  visited.set(n.id,true);
  count++;

  while(i < next_roots.size()) {
    node r = next_roots[i];
    Iterator<node> * itn = graph->getInOutNodes(r);

    while(itn->hasNext()) {
      node n = itn->next();

      if(!visited.get(n.id)) {
        visited.set(n.id,true);
        next_roots.push_back(n);
        count++;
      }
    }

    delete itn;
    i++;
  }
}
//=================================================================
ConnectedTest::ConnectedTest() {}
//=================================================================
bool ConnectedTest::compute(const tlp::Graph* const graph) {
  if (resultsBuffer.find((unsigned long)graph)!=resultsBuffer.end())
    return resultsBuffer[(unsigned long)graph];

  if (graph->numberOfNodes()==0) return true;

  MutableContainer<bool> visited;
  visited.setAll(false);
  unsigned int count = 0;
  connectedTest(graph, graph->getOneNode(), visited, count);
  bool result = (count == graph->numberOfNodes());
  resultsBuffer[(unsigned long)graph]=result;
  graph->addGraphObserver(this);
  return result;
}
//=================================================================
void ConnectedTest::connect(const tlp::Graph* const graph, vector< node >& toLink) {
  if (resultsBuffer.find((unsigned long)graph)!=resultsBuffer.end()) {
    if (resultsBuffer[(unsigned long)graph])
      return;
  }

  if (graph->numberOfNodes()==0) return;

  MutableContainer<bool> visited;
  visited.setAll(false);
  unsigned int count = 0;
  Iterator<node> *itN = graph->getNodes();

  while(itN->hasNext()) {
    node n = itN->next();

    if (!visited.get(n.id)) {
      toLink.push_back(n);
      connectedTest(graph, n, visited, count);
    }
  }

  delete itN;
}
//=================================================================
void ConnectedTest::addEdge(Graph *graph,const edge) {
  if (resultsBuffer.find((unsigned long)graph)!=resultsBuffer.end())
    if (resultsBuffer[(unsigned long)graph]) return;

  graph->removeGraphObserver(this);
  resultsBuffer.erase((unsigned long)graph);
}
//=================================================================
void ConnectedTest::delEdge(Graph *graph,const edge) {
  //  cerr << __PRETTY_FUNCTION__ << endl;
  if (resultsBuffer.find((unsigned long)graph)!=resultsBuffer.end())
    if (!resultsBuffer[(unsigned long)graph]) return;

  graph->removeGraphObserver(this);
  resultsBuffer.erase((unsigned long)graph);
}
//=================================================================
void ConnectedTest::reverseEdge(Graph *,const edge) {
}
//=================================================================
void ConnectedTest::addNode(Graph *graph,const node) {
  resultsBuffer[(unsigned long)graph]=false;
}
//=================================================================
void ConnectedTest::delNode(Graph *graph,const node) {
  graph->removeGraphObserver(this);
  resultsBuffer.erase((unsigned long)graph);
}
//=================================================================
void ConnectedTest::destroy(Graph *graph) {
  //  cerr << __PRETTY_FUNCTION__ << endl;
  graph->removeGraphObserver(this);
  resultsBuffer.erase((unsigned long)graph);
}
//=================================================================

