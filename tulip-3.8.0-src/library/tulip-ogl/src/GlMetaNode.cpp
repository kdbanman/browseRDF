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
#include <tulip/GlMetaNode.h>

#include <tulip/OpenGlConfigManager.h>

#include <tulip/Graph.h>
#include <tulip/LayoutProperty.h>
#include <tulip/SizeProperty.h>
#include <tulip/DoubleProperty.h>
#include <tulip/IntegerProperty.h>
#include <tulip/ColorProperty.h>

#include <tulip/Glyph.h>
#include <tulip/GlCPULODCalculator.h>
#include <tulip/GlGraphInputData.h>
#include <tulip/DrawingTools.h>
#include <tulip/GlEdge.h>
#include <tulip/GlComplexeEntity.h>
#include <tulip/GlGraphRenderingParameters.h>
#include <tulip/Camera.h>
#include <tulip/GlTools.h>
#include <tulip/GlTextureManager.h>

#include <iostream>

using namespace std;

namespace tlp {

static const Color colorSelect2 = Color(255, 102, 255, 255);

void GlMetaNode::draw(float lod,GlGraphInputData* data,Camera* camera) {
  node n=node(id);

  if (data->getElementSelected()->getNodeValue(n)) {
    glStencilFunc(GL_LEQUAL,data->parameters->getSelectedMetaNodesStencil(),0xFFFF);
  }
  else {
    glStencilFunc(GL_LEQUAL,data->parameters->getMetaNodesStencil(),0xFFFF);
  }

  if(!(((data->getElementColor()->getNodeValue(n))[3]==255) && (data->parameters->getNodesStencil()==0xFFFF)))
    data->getMetaNodeRenderer()->render(n,lod,camera);

  if(lod>=20)
    GlNode::draw(lod,data,camera);
  else
    GlNode::draw(20,data,camera);
}

void GlMetaNode::drawLabel(OcclusionTest* test, GlGraphInputData* data) {
  drawLabel(test,data,0.);
}

void GlMetaNode::drawLabel(OcclusionTest* test, GlGraphInputData* data, float lod, Camera *camera) {

  node n=node(id);

  if(data->parameters->isViewNodeLabel())
    GlNode::drawLabel(test,data,lod,camera);

  if(!data->parameters->isViewMetaLabel())
    return;

  if(!data->getMetaNodeRenderer()->glMetaNodeHaveToRenderLabels())
    return;

  if(!data->parameters->isViewMetaLabel())
    return;

  if((data->getElementColor()->getNodeValue(n))[3]==255) {
    return;
  }

  Graph *metaGraph = data->getGraph()->getNodeMetaInfo(n);
  GlGraphRenderingParameters metaParameters = *data->parameters;
  GlGraphInputData metaData(metaGraph,&metaParameters);

  vector<GlNode> nodes;
  vector<GlMetaNode> metaNodes;
  vector<GlEdge> edges;

  Iterator<node> *itN=metaGraph->getNodes();
  unsigned int id;

  while (itN->hasNext()) {
    id=itN->next().id;

    if(metaData.getGraph()->isMetaNode(node(id)))
      metaNodes.push_back(GlMetaNode(id));
    else
      nodes.push_back(GlNode(id));
  }

  delete itN;

  if (metaData.parameters->isDisplayEdges()) {
    Iterator<edge> *itE=metaGraph->getEdges();

    while (itE->hasNext()) {
      edges.push_back(GlEdge(itE->next().id));
    }

    delete itE;
  }

  glPushMatrix();
  const Coord &nodeCoord = data->getElementLayout()->getNodeValue(n);
  const Size &nodeSize = data->getElementSize()->getNodeValue(n);
  glTranslatef(nodeCoord[0], nodeCoord[1], nodeCoord[2]);
  glRotatef(static_cast<float>(data->getElementRotation()->getNodeValue(n)), 0.f, 0.f, 1.f);

  BoundingBox bboxes = tlp::computeBoundingBox(metaData.getGraph(), metaData.getElementLayout(), metaData.getElementSize(), metaData.getElementRotation());

  Coord maxC(bboxes[1]);
  Coord minC(bboxes[0]);
  BoundingBox includeBoundingBox;
  data->glyphs.get(data->getElementShape()->getNodeValue(n))->getIncludeBoundingBox(includeBoundingBox,n);
  Coord includeScale(includeBoundingBox[1] - includeBoundingBox[0]);
  Coord includeTranslate(includeBoundingBox.center());
  Coord translate( (maxC+minC)/-2.f);
  double dept;

  if(includeScale[2]==0)
    dept=0;
  else
    dept=(maxC[2] - minC[2]) / includeScale[2];

  double width  = (maxC[0] - minC[0]) / includeScale[0];
  double height = (maxC[1] - minC[1]) / includeScale[1];
  Coord includeSize( bboxes[1] - bboxes[0]);

  if(nodeSize[0]/includeSize[0]<nodeSize[1]/includeSize[1]) {
    includeSize[1] *= nodeSize[0]/includeSize[0];
    includeSize[0] *= nodeSize[0]/includeSize[0];
  }
  else {
    includeSize[0]*=nodeSize[1]/includeSize[1];
    includeSize[1]*=nodeSize[1]/includeSize[1];
  }

  glScalef(includeSize[0], includeSize[1], includeSize[2]);
  glTranslatef(includeTranslate[0],includeTranslate[1],includeTranslate[2]);

  if (width<0.0001) width=1;

  if (height<0.0001) height=1;

  if (dept<0.0001) dept=1;

  Coord scale(1/static_cast<float>(width),1/static_cast<float>(height),1/static_cast<float>(dept));
  glScalef(scale[0], scale[1], scale[2]);
  glTranslatef(translate[0],translate[1],translate[2]);

  vector<Coord> objectScale, objectTranslate, objectCoord;
  Camera *activeCamera=new Camera(*camera);
  activeCamera->addObjectTransformation(nodeCoord+translate, Coord(includeSize*scale), nodeCoord);
  activeCamera->getObjectTransformation(objectTranslate, objectScale, objectCoord);

  for(vector<GlNode>::iterator it=nodes.begin(); it!=nodes.end(); ++it) {
    (*it).drawLabel(test,&metaData,1000,camera);
  }

  for(vector<GlMetaNode>::iterator it=metaNodes.begin(); it!=metaNodes.end(); ++it) {
    (*it).drawLabel(test,&metaData,1000,camera);
  }

  for(vector<GlEdge>::iterator it=edges.begin(); it!=edges.end(); ++it) {
    (*it).drawLabel(test,&metaData);
  }

  glPopMatrix();

}
}
