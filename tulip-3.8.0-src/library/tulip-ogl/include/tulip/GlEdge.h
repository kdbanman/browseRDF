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
#ifndef Tulip_GLEDGE_H
#define Tulip_GLEDGE_H

#ifndef DOXYGEN_NOTFOR_DEVEL
#include <tulip/OpenGlConfigManager.h>

#include <tulip/PropertyTypes.h>

#include <tulip/GlComplexeEntity.h>
#include <tulip/EdgeExtremityGlyph.h>

namespace tlp {

struct OcclusionTest;
class TextRenderer;
class GlLabel;

/**
 * Class to represent an edge of a graph
 */
class TLP_GL_SCOPE GlEdge : public GlComplexeEntity {

public:

  /**
   * Build an edge with the id : id
   * id must be the id of the edge in graph
   */
  GlEdge(unsigned int id);

  /**
   * Virtual function to accept GlSceneVisitor on this class
   */
  virtual void acceptVisitor(GlSceneVisitor *visitor);

  /**
   * Return the edge bounding box
   */
  virtual BoundingBox getBoundingBox(GlGraphInputData* data);

  /**
   * Draw the edge with level of detail : lod and Camera : camera
   */
  virtual void draw(float lod,GlGraphInputData *data,Camera* camera);

  /**
   * Draw the label of the edge if drawEdgesLabel is true and if label selection is equal to drawSelect
   * Use TextRenderer : renderer to draw the label
   */
  void drawLabel(bool drawSelect,OcclusionTest* test,GlGraphInputData* data, float lod);

  /**
   * Draw the label of the edge if drawEdgesLabel is true
   * Use TextRenderer : renderer to draw the label
   */
  void drawLabel(OcclusionTest* test,GlGraphInputData* data);

  /**
   * Draw the label of the edge if drawEdgesLabel is true
   * Use TextRenderer : renderer to draw the label
   */
  void drawLabel(OcclusionTest* test,GlGraphInputData* data, float lod, Camera *camera=NULL);

  /**
   * Deprecate function : see others drawLabel functions
   */
  virtual _DEPRECATED void drawLabel(OcclusionTest *test, TextRenderer*, GlGraphInputData* data) {
    drawLabel(test,data);
  }

  /**
   * This function is used by the engine to get line coordinates of the edge
   */
  void getVertices(GlGraphInputData *data,std::vector<Coord> &linesCoordsArray);

  /**
   * This function is used by the engine to get line colors of the edge
   */
  void getColors(GlGraphInputData *data,const Coord *vertices,unsigned int numberOfVertices,std::vector<Color> &linesColorsArray);
  /**
   * This function is used by the engine to get line colors of the edge
   */
  void getColors(GlGraphInputData *data,const std::vector<Coord> &vertices,std::vector<Color> &linesColorsArray);

  /**
   * Compute the edge size
   */
  void getEdgeSize(GlGraphInputData *data,edge e,const Size &srcSize, const Size &tgtSize,const float maxSrcSize,const float maxTgtSize,Size &edgeSize);

  /**
   * This function must be called before each graph rendering
   * This function clears previously compute edgeWidthLod
   * FIXME remove the unused bool (was named orthoProjection) ?
   */
  static void clearEdgeWidthLodSystem(bool) {
    haveToComputeEdgeWidthBaseLod=true;
  }

  unsigned int id;

private :

  static GlLabel *label;
  static bool haveToComputeEdgeWidthBaseLod;
  static bool orthoProjection;
  static float edgeWidthBaseLod;

  /**
   * Draw the Edge : this function is used by draw function
   */
  void drawEdge(const Coord &srcNodePos, const Coord &tgtNodePos,
                const Coord &startPoint, const Coord &endPoint, const LineType::RealType &bends,
                const Color &startColor, const Color &endColor, const Coord &lookDir, bool colorInterpolate, const Color &borderColor,
                const Size &size, int shape, bool edge3D, float lod,
                const std::string &textureName, const float outlineWidth, bool polylines3DAreBicolored);

  /**
   * Function used to compute bounding box for edge extremity.
   */
  BoundingBox eeGlyphBoundingBox(const Coord& anchor, const Coord& tgt, float glyphNrm,
                                 const Matrix<float, 4>& transformation, const Matrix<float, 4>& size);

  /**
   * Compute the edge colors and store these colors in srcCol and tgtCol
   * \param data : input data used to compute edge colors
   */
  void getEdgeColor(GlGraphInputData *data,const edge &e,const node &source,const node &target, bool selected,Color &srcCol, Color &tgtCol);



  /**
   * Compute width lod of edge
   * This lod is used to know if the edge is render in polygon mode or line mode
   */
  float getEdgeWidthLod(const Coord &edgeCoord,const Size &edgeSize,Camera *camera);

  /**
   * Compute edge anchor
   */
  void getEdgeAnchor(GlGraphInputData *data,const node &source,const node &target,const LineType::RealType &bends,const Coord &srcCoord,const Coord &tgtCoord,const Size &srcSize,const Size &tgtSize, Coord &srcAnchor, Coord &tgtAnchor);

  /**
   * Thgis function is used to render edge arrows
   */
  void displayArrow(GlGraphInputData *data,const edge &e,const node &source,const Size &sizeRatio,float edgeSize,const Color &color,float maxSize,bool selected,float selectionOutlineSize,
                    int srcEdgeGlyph,int tgtEdgeGlyph,size_t numberOfBends,const Coord &anchor,const Coord &tgtCoord,
                    const Coord &srcAnchor,const Coord &tgtAnchor,Coord &lineAnchor);

};

}

#endif // DOXYGEN_NOTFOR_DEVEL

#endif // Tulip_GLEDGE_H
