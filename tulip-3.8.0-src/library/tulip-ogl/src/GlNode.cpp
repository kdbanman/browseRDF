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
#include <tulip/OpenGlConfigManager.h>

#include <tulip/GlNode.h>

#include <tulip/Coord.h>
#include <tulip/LayoutProperty.h>
#include <tulip/DoubleProperty.h>
#include <tulip/StringProperty.h>
#include <tulip/BooleanProperty.h>
#include <tulip/SizeProperty.h>
#include <tulip/IntegerProperty.h>
#include <tulip/ColorProperty.h>
#include <tulip/PreferenceManager.h>

#include <tulip/GlTools.h>
#include <tulip/GlyphManager.h>
#include <tulip/GlDisplayListManager.h>
#include <tulip/OcclusionTest.h>
#include <tulip/GlTLPFeedBackBuilder.h>
#include <tulip/GlSceneVisitor.h>
#include <tulip/GlGraphRenderingParameters.h>
#include <tulip/GlTextureManager.h>
#include <tulip/GlVertexArrayManager.h>
#include <tulip/GlLabel.h>

#include <iostream>

//====================================================
tlp::GlLabel* tlp::GlNode::label=0;
tlp::GlBox* tlp::GlNode::selectionBox=0;

using namespace std;

namespace tlp {

GlNode::GlNode(unsigned int id):id(id) {
  if(!label)
    label=new GlLabel();

  if(!selectionBox) {
    selectionBox=new GlBox(Coord(0,0,0),Size(1,1,1),Color(0,0,255,255),Color(0,255,0,255),false,true);
    selectionBox->setOutlineSize(3);
  }
}

BoundingBox GlNode::getBoundingBox(GlGraphInputData* data) {
  node n=node(id);

  if(data->getElementRotation()->getNodeValue(n)==0) {
    BoundingBox box;
    box.expand(data->getElementLayout()->getNodeValue(n)-data->getElementSize()->getNodeValue(n)/2.f);
    box.expand(data->getElementLayout()->getNodeValue(n)+data->getElementSize()->getNodeValue(n)/2.f);
    assert(box.isValid());
    return box;
  }
  else {
    float cosAngle=static_cast<float>(cos(data->getElementRotation()->getNodeValue(n)/180.*M_PI));
    float sinAngle=static_cast<float>(sin(data->getElementRotation()->getNodeValue(n)/180.*M_PI));
    Coord tmp1(data->getElementSize()->getNodeValue(n)/2.f);
    Coord tmp2(tmp1[0] ,-tmp1[1], tmp1[2]);
    Coord tmp3(-tmp1[0],-tmp1[1],-tmp1[2]);
    Coord tmp4(-tmp1[0], tmp1[1],-tmp1[2]);
    tmp1=Coord(tmp1[0]*cosAngle-tmp1[1]*sinAngle,tmp1[0]*sinAngle+tmp1[1]*cosAngle,tmp1[2]);
    tmp2=Coord(tmp2[0]*cosAngle-tmp2[1]*sinAngle,tmp2[0]*sinAngle+tmp2[1]*cosAngle,tmp2[2]);
    tmp3=Coord(tmp3[0]*cosAngle-tmp3[1]*sinAngle,tmp3[0]*sinAngle+tmp3[1]*cosAngle,tmp3[2]);
    tmp4=Coord(tmp4[0]*cosAngle-tmp4[1]*sinAngle,tmp4[0]*sinAngle+tmp4[1]*cosAngle,tmp4[2]);
    BoundingBox bb;
    bb.expand(data->getElementLayout()->getNodeValue(n)+tmp1);
    bb.expand(data->getElementLayout()->getNodeValue(n)+tmp2);
    bb.expand(data->getElementLayout()->getNodeValue(n)+tmp3);
    bb.expand(data->getElementLayout()->getNodeValue(n)+tmp4);
    return bb;
  }
}

void GlNode::acceptVisitor(GlSceneVisitor *visitor) {
  visitor->visit(this);
}

void GlNode::draw(float lod,GlGraphInputData* data,Camera*) {
  const Color& colorSelect2=data->parameters->getSelectionColor();

  glEnable(GL_CULL_FACE);

  node n=node(id);

  if (data->getElementSelected()->getNodeValue(n)) {
    glDisable(GL_DEPTH_TEST);

    if(data->getGraph()->isMetaNode(n)) {
      glStencilFunc(GL_LEQUAL,data->parameters->getSelectedMetaNodesStencil(),0xFFFF);
    }
    else {
      glStencilFunc(GL_LEQUAL,data->parameters->getSelectedNodesStencil(),0xFFFF);
    }
  }
  else {
    glEnable(GL_DEPTH_TEST);

    if(data->getGraph()->isMetaNode(n)) {
      glStencilFunc(GL_LEQUAL,data->parameters->getMetaNodesStencil(),0xFFFF);
    }
    else {
      glStencilFunc(GL_LEQUAL,data->parameters->getNodesStencil(),0xFFFF);
    }
  }

  const Coord &nodeCoord = data->getElementLayout()->getNodeValue(n);

  const Size &nodeSize = data->getElementSize()->getNodeValue(n);

  const Color& fillColor = data->getElementColor()->getNodeValue(n);

  const Color& strokeColor = data->getElementBorderColor()->getNodeValue(n);

  const Color& textColor = data->getElementLabelColor()->getNodeValue(n);

  GlTextureManager::getInst().setAnimationFrame(data->getElementAnimationFrame()->getNodeValue(n));

  if(data->parameters->getFeedbackRender()) {
    glPassThrough(TLP_FB_COLOR_INFO);
    glPassThrough(fillColor[0]);
    glPassThrough(fillColor[1]);
    glPassThrough(fillColor[2]);
    glPassThrough(fillColor[3]);
    glPassThrough(strokeColor[0]);
    glPassThrough(strokeColor[1]);
    glPassThrough(strokeColor[2]);
    glPassThrough(strokeColor[3]);
    glPassThrough(textColor[0]);
    glPassThrough(textColor[1]);
    glPassThrough(textColor[2]);
    glPassThrough(textColor[3]);

    glPassThrough(TLP_FB_BEGIN_NODE);
    glPassThrough(static_cast<float>(id)); //id of the node for the feed back mode
  }

  bool selected = data->getElementSelected()->getNodeValue(n);

  if (lod < data->parameters->getPointModeLOD()) { //less than four pixel on screen, we use points instead of glyphs
    if (lod < 1) lod = 1;

    int size= static_cast<int>(sqrt(lod));

    if(data->getGlVertexArrayManager()->renderingIsBegin()) {
      if(size<2)
        data->getGlVertexArrayManager()->activatePointNodeDisplay(this,true,selected);
      else
        data->getGlVertexArrayManager()->activatePointNodeDisplay(this,false,selected);
    }
    else {
      if(size>2)
        size=2;

      const Color& color = selected ? colorSelect2 : fillColor;

      OpenGlConfigManager::getInst().activateLineAndPointAntiAliasing();
      glDisable(GL_LIGHTING);
      setColor(color);
      glPointSize(static_cast<float>(size));
      glBegin(GL_POINTS);
      glVertex3f(nodeCoord[0], nodeCoord[1], nodeCoord[2]+nodeSize[2]/2.f);
      glEnd();
      glEnable(GL_LIGHTING);
      OpenGlConfigManager::getInst().desactivateLineAndPointAntiAliasing();
    }

    return;

  }

  //draw a glyph or make recursive call for meta nodes
  glPushMatrix();
  glTranslatef(nodeCoord[0], nodeCoord[1], nodeCoord[2]);
  glRotatef(static_cast<float>(data->getElementRotation()->getNodeValue(n)), 0.f, 0.f, 1.f);

  // If node size in z is equal to 0 we have to scale with FLT_EPSILON to preserve normal
  // (because if we do a scale of (x,y,0) and if we have a normal like (0,0,1) the new normal after scale will be (0,0,0) and we will have light problem)
  if(nodeSize[2]==0)
    glScalef(nodeSize[0], nodeSize[1],FLT_EPSILON);
  else
    glScalef(nodeSize[0], nodeSize[1],nodeSize[2]);

  data->glyphs.get(data->getElementShape()->getNodeValue(n))->draw(n,lod);

  if (selected) {
    OpenGlConfigManager::getInst().activateLineAndPointAntiAliasing();
    selectionBox->setStencil(data->parameters->getSelectedNodesStencil()-1);
    selectionBox->setOutlineColor(colorSelect2);
    selectionBox->draw(10,NULL);
    OpenGlConfigManager::getInst().desactivateLineAndPointAntiAliasing();
  }

  glPopMatrix();

  if (selected) {
    glStencilFunc(GL_LEQUAL,data->parameters->getNodesStencil(),0xFFFF);
  }

  GlTextureManager::getInst().setAnimationFrame(0);

  if(data->parameters->getFeedbackRender()) {
    glPassThrough(TLP_FB_END_NODE);
  }
}

void GlNode::drawLabel(bool drawSelect,OcclusionTest* test,GlGraphInputData* data,float lod) {
  node n=node(id);
  bool selected=data->getElementSelected()->getNodeValue(n);

  if(drawSelect!=selected)
    return;

  drawLabel(test,data,lod);
}

void GlNode::drawLabel(OcclusionTest* test,GlGraphInputData* data) {
  GlNode::drawLabel(test,data,1000.);
}

void GlNode::drawLabel(OcclusionTest* test,GlGraphInputData* data,float lod, Camera *camera) {

  node n=node(id);

  // If glyph can't render label : return
  if(data->glyphs.get(data->getElementShape()->getNodeValue(n))->renderLabel())
    return;

  // node is selected
  bool selected=data->getElementSelected()->getNodeValue(n);
  // Color of the label : selected or not
  const Color& fontColor = selected ? data->parameters->getSelectionColor() :data->getElementLabelColor()->getNodeValue(n);

  // If we have transparent label : return
  if(fontColor.getA()==0)
    return;

  // Node text
  const string &tmp = data->getElementLabel()->getNodeValue(n);

  if (tmp.length() < 1)
    return;

  if(!data->getGraph()->isMetaNode(n)) {
    if(selected) label->setStencil(data->parameters->getSelectedNodesStencil());
    else label->setStencil(data->parameters->getNodesLabelStencil());
  }
  else {
    if(selected) label->setStencil(data->parameters->getSelectedMetaNodesStencil());
    else label->setStencil(data->parameters->getMetaNodesLabelStencil());
  }

  int fontSize=data->getElementFontSize()->getNodeValue(n);

  if(fontSize<=0)
    return;

  if(selected)
    fontSize+=2;

  const Coord &nodeCoord = data->getElementLayout()->getNodeValue(n);
  const Size  &nodeSize  = data->getElementSize()->getNodeValue(n);
  int labelPos = data->getElementLabelPosition()->getNodeValue(n);


  BoundingBox includeBB;
  data->glyphs.get(data->getElementShape()->getNodeValue(n))->getTextBoundingBox(includeBB,n);
  Coord centerBB(includeBB.center());
  Vec3f sizeBB = includeBB[1]-includeBB[0];

  label->setFontNameSizeAndColor(data->getElementFont()->getNodeValue(n),fontSize,fontColor);
  label->setOutlineColor(fontColor);
  label->setText(tmp);
  label->setTranslationAfterRotation(centerBB*nodeSize);
  label->setSize(Size(nodeSize[0]*sizeBB[0],nodeSize[1]*sizeBB[1],0));
  label->setSizeForOutAlign(Size(nodeSize[0],nodeSize[1],0));
  label->rotate(0,0,static_cast<float>(data->getElementRotation()->getNodeValue(n)));
  label->setAlignment(labelPos);
  label->setScaleToSize(data->parameters->isLabelScaled());
  label->setUseLODOptimisation(true,this->getBoundingBox(data));
  label->setLabelsDensity(data->parameters->getLabelsDensity());
  label->setUseMinMaxSize(true);
  label->setMinSize(data->parameters->getMinSizeOfLabel());
  label->setMaxSize(data->parameters->getMaxSizeOfLabel());
  label->setOcclusionTester(test);
  label->setBillboarded(data->parameters->getLabelsAreBillboarded());

  if(includeBB[1][2]!=0 && !data->parameters->getLabelsAreBillboarded())
    label->setPosition(Coord(nodeCoord[0],nodeCoord[1],nodeCoord[2]+nodeSize[2]/2.f));
  else
    label->setPosition(Coord(nodeCoord[0],nodeCoord[1],nodeCoord[2]));

  label->drawWithStencil(lod,camera);
}

void GlNode::getPointAndColor(GlGraphInputData *inputData,std::vector<Coord> &pointsCoordsArray,std::vector<Color> &pointsColorsArray) {
  node n=node(id);
  const Coord &nodeCoord = inputData->getElementLayout()->getNodeValue(n);
  const Color& fillColor = inputData->getElementColor()->getNodeValue(n);
  pointsCoordsArray.push_back(nodeCoord);
  pointsColorsArray.push_back(fillColor);
}

void GlNode::getColor(GlGraphInputData *inputData,std::vector<Color> &pointsColorsArray) {
  node n=node(id);
  const Color& fillColor = inputData->getElementColor()->getNodeValue(n);
  pointsColorsArray.push_back(fillColor);
}
}
