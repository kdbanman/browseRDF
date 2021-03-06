namespace tlp {

/**
 * That class defines all the paremters used by the GlGraph class
 * during the rendering of a graph.
 */
class GlGraphRenderingParameters {
%TypeHeaderCode
#include <tulip/GlGraphRenderingParameters.h>
%End

%Docstring
.. versionadded:: 3.8

That class holds all the rendering parameters for a Tulip OpenGL graph drawing.
%End

public:

  GlGraphRenderingParameters();

// =============================================================================================

  float getPointModeLOD() const;
%Docstring
tlp.GlGraphRenderingParameters.getPointModeLOD()

Returns the Level Of Detail threshold below which point rendering for nodes and edges
(typically when far from the camera) is activated.

:rtype: float
%End

// =============================================================================================

  void setPointModeLOD(const float pointModeLOD);
%Docstring
tlp.GlGraphRenderingParameters.setPointModeLOD(lod)

Sets the Level Of Detail threshold below which point rendering for nodes and edges
(typically when far from the camera) is activated.

:param lod: the Level Of Detail threshold value
:type lod: float
%End

// =============================================================================================

  void setAntialiasing(const bool state);
%Docstring
tlp.GlGraphRenderingParameters.setAntiAliasing(antialiasing)

Activates/desactivates antialiasing.

:param antialiasing: the antialiasing state
:type antialiasing: boolean
%End

// =============================================================================================

  bool isAntialiased() const;
%Docstring
tlp.GlGraphRenderingParameters.isAntialiased()

Returns if antialiasing rendering is activated.

:rtype: boolean
%End

// =============================================================================================

  void setViewArrow(const bool state);
%Docstring
tlp.GlGraphRenderingParameters.setViewArrow(arrow)

Activates / desactivates the displaying of arrows along the graph edges.

:param arrow: the state of the arrows rendering
:type arrow: boolean
%End


// =============================================================================================

  bool isViewArrow()const;
%Docstring
tlp.GlGraphRenderingParameters.isViewArrow()

Returns the state of the displaying of arrows along the graph edges.

:rtype: boolean
%End

// =============================================================================================

  void setViewNodeLabel(const bool state);
%Docstring
tlp.GlGraphRenderingParameters.setViewNodeLabel(nodeLabel)

Activates / desactivates the displaying of nodes labels.

:param nodeLabel: the state of the nodes labels rendering
:type nodeLabel: boolean
%End


// =============================================================================================

  bool isViewNodeLabel() const;
%Docstring
tlp.GlGraphRenderingParameters.isViewNodeLabel()

Returns the state of the displaying of nodes labels.

:rtype: boolean
%End

// =============================================================================================

  void setViewEdgeLabel(const bool state);
%Docstring
tlp.GlGraphRenderingParameters.setViewEdgeLabel(edgeLabel)

Activates / desactivates the displaying of edges labels.

:param edgeLabel: the state of the edges labels rendering
:type edgeLabel: boolean
%End

// =============================================================================================

  bool isViewEdgeLabel() const;
%Docstring
tlp.GlGraphRenderingParameters.isViewEdgeLabel()

Returns the state of the displaying of edges labels.

:rtype: boolean
%End

// =============================================================================================

  void setViewOutScreenLabel(const bool state);
%Docstring
tlp.GlGraphRenderingParameters.setViewOutScreenLabel(outScreenLabel)

Activates / desactivates the displaying of labels for elements outside the screen.

:param outScreenLabel: the state of the labels rendering for elements outside the screen.
:type outScreenLabel: boolean
%End

// =============================================================================================

  bool isViewOutScreenLabel() const;
%Docstring
tlp.GlGraphRenderingParameters.isViewOutScreenLabel()

Returns the state of the displaying of labels for elements outside the screen.

:rtype: boolean
%End

// =============================================================================================

  void setEdgeColorInterpolate(const bool state);
%Docstring
tlp.GlGraphRenderingParameters.setEdgeColorInterpolate(interpolate)

Activates / desactivates the interpolation of nodes colors along edges.

:param interpolate: the state of the edge color interpolation
:type interpolate: boolean
%End

// =============================================================================================

  bool isEdgeColorInterpolate() const;
%Docstring
tlp.GlGraphRenderingParameters.isEdgeColorInterpolate()

Returns the state of the edge color interpolation.

:rtype: boolean
%End

// =============================================================================================

  void setEdgeSizeInterpolate(const bool state);
%Docstring
tlp.GlGraphRenderingParameters.setEdgeSizeInterpolate(interpolate)

Activates / desactivates the interpolation of nodes sizes along edges.

:param interpolate: the state of the edge size interpolation
:type interpolate: boolean
%End

// =============================================================================================

  bool isEdgeSizeInterpolate() const;
%Docstring
tlp.GlGraphRenderingParameters.isEdgeSizeInterpolate()

Returns the state of the edge size interpolation.

:rtype: boolean
%End

// =============================================================================================

  void setTexturePath(const std::string& path);
%Docstring
tlp.GlGraphRenderingParameters.setTexturePath(path)

Sets the absolute path for textures loading.

:param path: the absolute path of a directory for textures loading.
:type path: string
%End

// =============================================================================================

  std::string getTexturePath() const;
%Docstring
tlp.GlGraphRenderingParameters.getTexturePath()

Returns the absolute path used for texture loading.

:rtype: string
%End

// =============================================================================================

  void setFontsPath(const std::string& path);
%Docstring
tlp.GlGraphRenderingParameters.setFontsPath(path)

Sets the absolute path for fonts loading (.ttf files).

:param path: the absolute path of a directory for fonts loading.
:type path: string
%End

// =============================================================================================

  std::string getFontsPath();
%Docstring
tlp.GlGraphRenderingParameters.getFontsPath()

Returns the absolute path used for fonts loading (.ttf files).

:rtype: string
%End

// =============================================================================================

  void setViewMetaLabel(const bool state);
%Docstring
tlp.GlGraphRenderingParameters.setViewMetaLabel(metaLabel)

Activates / desactivates the displaying of labels inside meta-nodes.

:param metaLabel: the state of the displaying of labels inside meta-nodes.
:type edgeLabel: boolean
%End

// =============================================================================================

  bool isViewMetaLabel() const;
%Docstring
tlp.GlGraphRenderingParameters.isViewMetaLabel()

Returns the state of the displaying of labels inside meta-nodes.

:rtype: boolean
%End

// =============================================================================================

  void setDisplayEdges(const bool state);
%Docstring
tlp.GlGraphRenderingParameters.setDisplayEdges(displayEdges)

Activates / desactivates the displaying of edges.

:param displayEdges: the state of the displaying of edges.
:type displayEdges: boolean
%End

// =============================================================================================

  bool isDisplayEdges() const;
%Docstring
tlp.GlGraphRenderingParameters.isDisplayEdges()

Returns the state of the displaying of edges.

:rtype: boolean
%End

// =============================================================================================

  void setDisplayNodes(const bool state);
%Docstring
tlp.GlGraphRenderingParameters.setDisplayNodes(displayNodes)

Activates / desactivates the displaying of nodes.

:param displayNodes: the state of the displaying of nodes.
:type displayNodes: boolean
%End

// =============================================================================================

  bool isDisplayNodes() const;
%Docstring
tlp.GlGraphRenderingParameters.isDisplayNodes()

Returns the state of the displaying of nodes.

:rtype: boolean
%End

// =============================================================================================

  void setDisplayMetaNodes(const bool state);
%Docstring
tlp.GlGraphRenderingParameters.setDisplayMetaNodes(displayMetaNodes)

Activates / desactivates the displaying of nodes.

:param displayMetaNodes: the state of the displaying of meta-nodes.
:type displayMetaNodes: boolean
%End

// =============================================================================================

  bool isDisplayMetaNodes() const;
%Docstring
tlp.GlGraphRenderingParameters.isDisplayMetaNodes()

Returns the state of the displaying of meta-nodes.

:rtype: boolean
%End

// =============================================================================================

  void setSelectedNodesStencil(const int stencil);
%Docstring
tlp.GlGraphRenderingParameters.setSelectedNodesStencil(stencil)

Sets the stencil value for selected nodes. The lower the value is, the more the objects will be drawn
on top of other ones. The default value is 2.

:param stencil: a value in the range [0, 255]
:type stencil: integer
%End

// =============================================================================================

  int getSelectedNodesStencil();
%Docstring
tlp.GlGraphRenderingParameters.getSelectedNodesStencil()

Returns the stencil value for selected nodes.

:rtype: integer 
%End

// =============================================================================================

  void setSelectedMetaNodesStencil(const int stencil);
%Docstring
tlp.GlGraphRenderingParameters.setSelectedMetaNodesStencil(stencil)

Sets the stencil value for selected meta-nodes. The lower the value is, the more the objects will be drawn
on top of other ones. The default value is 2.

:param stencil: a value in the range [0, 255]
:type stencil: integer
%End


// =============================================================================================

  int getSelectedMetaNodesStencil();
%Docstring
tlp.GlGraphRenderingParameters.getSelectedMetaNodesStencil()

Returns the stencil value for selected meta-nodes.

:rtype: integer 
%End

// =============================================================================================

  void setSelectedEdgesStencil(const int stencil);
%Docstring
tlp.GlGraphRenderingParameters.setSelectedEdgesStencil(stencil)

Sets the stencil value for selected edges. The lower the value is, the more the objects will be drawn
on top of other ones. The default value is 2.

:param stencil: a value in the range [0, 255]
:type stencil: integer
%End

// =============================================================================================

  int getSelectedEdgesStencil();
%Docstring
tlp.GlGraphRenderingParameters.getSelectedEdgesStencil()

Returns the stencil value for selected edges.

:rtype: integer 
%End

// =============================================================================================

  void setNodesStencil(const int stencil);
%Docstring
tlp.GlGraphRenderingParameters.setNodesStencil(stencil)

Sets the stencil value for nodes. The lower the value is, the more the objects will be drawn
on top of other ones. The default value is 255.

:param stencil: a value in the range [0, 255]
:type stencil: integer
%End

// =============================================================================================

  int getNodesStencil();
%Docstring
tlp.GlGraphRenderingParameters.getNodesStencil()

Returns the stencil value for nodes.

:rtype: integer 
%End

// =============================================================================================

  void setMetaNodesStencil(const int stencil);
%Docstring
tlp.GlGraphRenderingParameters.setMetaNodesStencil(stencil)

Sets the stencil value for meta-nodes. The lower the value is, the more the objects will be drawn
on top of other ones. The default value is 255.

:param stencil: a value in the range [0, 255]
:type stencil: integer
%End

// =============================================================================================

  int getMetaNodesStencil();
%Docstring
tlp.GlGraphRenderingParameters.getMetaNodesStencil()

Returns the stencil value for meta-nodes.

:rtype: integer 
%End

// =============================================================================================

  void setEdgesStencil(const int stencil);
%Docstring
tlp.GlGraphRenderingParameters.setEdgesStencil(stencil)

Sets the stencil value for edges. The lower the value is, the more the objects will be drawn
on top of other ones. The default value is 255.

:param stencil: a value in the range [0, 255]
:type stencil: integer
%End

// =============================================================================================

  int getEdgesStencil();
%Docstring
tlp.GlGraphRenderingParameters.getEdgesStencil()

Returns the stencil value for edges.

:rtype: integer 
%End

// =============================================================================================

  void setNodesLabelStencil(const int stencil);
%Docstring
tlp.GlGraphRenderingParameters.setNodesLabelStencil(stencil)

Sets the stencil value for nodes labels. The lower the value is, the more the objects will be drawn
on top of other ones. The default value is 255.

:param stencil: a value in the range [0, 255]
:type stencil: integer
%End

// =============================================================================================

  int getNodesLabelStencil();
%Docstring
tlp.GlGraphRenderingParameters.getNodesLabelStencil()

Returns the stencil value for nodes labels.

:rtype: integer 
%End

// =============================================================================================

  void setMetaNodesLabelStencil(const int stencil);
%Docstring
tlp.GlGraphRenderingParameters.setMetaNodesLabelsStencil(stencil)

Sets the stencil value for meta-nodes labels. The lower the value is, the more the objects will be drawn
on top of other ones. The default value is 255.

:param stencil: a value in the range [0, 255]
:type stencil: integer
%End

// =============================================================================================

  int getMetaNodesLabelStencil();
%Docstring
tlp.GlGraphRenderingParameters.getMetaNodesLabelStencil()

Returns the stencil value for meta-nodes labels.

:rtype: integer 
%End

// =============================================================================================

  void setEdgesLabelStencil(const int stencil);
%Docstring
tlp.GlGraphRenderingParameters.setEdgesLabelStencil(stencil)

Sets the stencil value for edges labels. The lower the value is, the more the objects will be drawn
on top of other ones. The default value is 255.

:param stencil: a value in the range [0, 255]
:type stencil: integer
%End


// =============================================================================================

  int getEdgesLabelStencil();
%Docstring
tlp.GlGraphRenderingParameters.getEdgesLabelStencil()

Returns the stencil value for edges labels.

:rtype: integer 
%End

// =============================================================================================

  void setElementOrdered(const bool state);
%Docstring
tlp.GlGraphRenderingParameters.setElementOrdered(elementOrdered)

Activates / desactivates the ordered rendering of graph elements according
to the values in the "viewMetric" double property.

:param elementsOrdered: the state of the ordered rendering
:type elementOrdered: boolean
%End

// =============================================================================================

  bool isElementOrdered() const;
%Docstring
tlp.GlGraphRenderingParameters.isElementOrdered()

Returns the state of the ordered rendering of graph elements.

:rtype: boolean
%End

// =============================================================================================

  void setElementOrderingProperty(tlp::DoubleProperty* property /AllowNone/);
%Docstring
tlp.GlGraphRenderingParameters.setElementOrderingProperty(property)

Defines which property should be used for the ordered rendering of graph elements.
Setting it to :const:`None` will use the "viewMetric" property if the ordering is enabled.

:param property: the property to use to order the rendering of graph elements
:type property: :class:`tulip.tlp.DoubleProperty`
%End

// =============================================================================================

  tlp::DoubleProperty* getElementOrderingProperty() const;
%Docstring
tlp.GlGraphRenderingParameters.getElementOrderingProperty()

Returns the double property used for the ordered rendering of graph elements.

:rtype: :class:`tulip.tlp.DoubleProperty`
%End

// =============================================================================================

  void setElementZOrdered(const bool state);
%Docstring
tlp.GlGraphRenderingParameters.setElementZOrdered(zOrdering)

Activates / desactivates the ordered rendering of elements according to their
distance to the camera.

:param zOrdering: the state of the z-ordered rendering
:type zOrdering: boolean
%End

// =============================================================================================

  bool isElementZOrdered() const;
%Docstring
tlp.GlGraphRenderingParameters.isElementZOrdered()

Returns the state of the z-ordered rendering.

:rtype: boolean
%End

// =============================================================================================

  void setEdge3D(const bool state);
%Docstring
tlp.GlGraphRenderingParameters.setEdge3D(edge3d)

Activates / desactivates the 3d displaying of edges instead of 2d lines.

:param edge3d: the state of the 3d edge rendering
:type edge3d: boolean
%End

// =============================================================================================

  bool isEdge3D() const;
%Docstring
tlp.GlGraphRenderingParameters.isEdge3D()

Returns the state of the 3d edge rendering.

:rtype: boolean
%End

// =============================================================================================

  void setSelectionColor(const tlp::Color &color);
%Docstring
tlp.GlGraphRenderingParameters.setSelectionColor(color)

Sets the color of selected elements.

:param color: the selection color
:type color: :class:`tulip.tlp.Color`
%End

// =============================================================================================

  tlp::Color getSelectionColor();
%Docstring
tlp.GlGraphRenderingParameters.getSelectionColor()

Returns the color of selection.

:rtype: :class:`tulip.tlp.Color`
%End

// =============================================================================================

  bool isLabelScaled();
%Docstring
tlp.GlGraphRenderingParameters.isLabelScaled()

Returns the state of the scaling of labels to nodes sizes.

:rtype: boolean
%End

// =============================================================================================

  void setLabelScaled(bool state);
%Docstring
tlp.GlGraphRenderingParameters.setLabelScaled(labelScaled)

Activates / desactivates the scaling of labels to nodes sizes.

:param labelScaled: the state of the scaling of labels to nodes sizes.
:type labelScaled: boolean
%End

// =============================================================================================

  int getLabelsDensity();
%Docstring
tlp.GlGraphRenderingParameters.getLabelsDensity()

Returns the labels density value.

:rtype: integer
%End

// =============================================================================================

  void setLabelsDensity(int density);
%Docstring
tlp.GlGraphRenderingParameters.setLabelsDensity(density)

Sets the labels density value. It must be in the range [-100, 100].
The labels are displayed according to that value :

  * -100 : no labels are displayed
  * 0 : only non overlapping labels are displayed
  * 100 : all labels are displayed

:param density: a value in the range [-100, 100]
:type density: integer
%End

// =============================================================================================

    int getMinSizeOfLabel();
%Docstring
tlp.GlGraphRenderingParameters.getMinSizeOfLabel()

Returns the minimum size of labels. That value is only used if the labels
are not scaled to nodes sizes.

:rtype: integer
%End

// =============================================================================================

  void setMinSizeOfLabel(int size);
%Docstring
tlp.GlGraphRenderingParameters.setMinSizeOfLabel(size)

Sets the minimum size of labels. That value is only used if the labels
are not scaled to nodes sizes.

:param size: the minimum size of labels
:type: integer
%End

// =============================================================================================

  int getMaxSizeOfLabel();
%Docstring
tlp.GlGraphRenderingParameters.getMaxSizeOfLabel()

Returns the maximum size of labels. That value is only used if the labels
are not scaled to nodes sizes.

:rtype: integer
%End

// =============================================================================================

  void setMaxSizeOfLabel(int size);
%Docstring
tlp.GlGraphRenderingParameters.setMaxSizeOfLabel(size)

Sets the maximum size of labels. That value is only used if the labels
are not scaled to nodes sizes.

:param size: the maximum size of labels
:type: integer
%End

// =============================================================================================

  bool getLabelsAreBillboarded();
%Docstring
tlp.GlGraphRenderingParameters.getLabelsAreBillboarded()

Returns the state of the labels billboarding (always facing the camera).

:rtype: boolean
%End

// =============================================================================================

  void setLabelsAreBillboarded(bool billboarded);
%Docstring
tlp.GlGraphRenderingParameters.setLabelsAreBillboarded(billboardLabels)

Activates / desactivates labels billboarding (always facing the camera).

:param billboardLabels: the state of labels billboarding
:type billboardLabels: boolean
%End

// =============================================================================================

  void setDisplayFilteringProperty(tlp::BooleanProperty *filteringProperty /AllowNone/);
%Docstring
tlp.GlGraphRenderingParameters.setDisplayFilteringProperty(property)

Sets the boolean property used to filter the rendering of graph elements. If sets to :const:`None`,
the filtering is desactivated. If the value for a node / edge in that property is :const:`False`,
it will not be displayed.

:param property: the boolean property used to filter the rendering of graph elements
:type property: :class:`tulip.tlp.BooleanProperty`
%End

// =============================================================================================

  tlp::BooleanProperty * getDisplayFilteringProperty() const;
%Docstring
tlp.GlGraphRenderingParameters.getDisplayFilteringProperty()

Returns the boolean property used to filter the rendering of graph elements.

:rtype: :class:`tulip.tlp.BooleanProperty`
%End

};
};

