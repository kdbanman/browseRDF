# Install script for directory: /home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "/usr/local")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

# Install shared libraries without execute permission?
IF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  SET(CMAKE_INSTALL_SO_NO_EXE "1")
ENDIF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "libtulip_ogl_dev")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/tulip" TYPE FILE FILES
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/Camera.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlComposite.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlGraphComposite.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlGrid.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlEntity.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlGraphRenderingParameters.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlGraphStaticData.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlCircle.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlCylinder.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlLabel.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlRect.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlRectTextured.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/Gl2DRect.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlAbstractPolygon.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlPolygon.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlRegularPolygon.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlTriangle.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlHexagon.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlPentagon.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlComplexPolygon.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlSphere.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlLayer.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlLODCalculator.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlLODSceneVisitor.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlBox.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlScene.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlTextureManager.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/Glyph.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlSimpleEntity.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlComplexeEntity.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlSelectSceneVisitor.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlSceneVisitor.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlFeedBackRecorder.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlFeedBackBuilder.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlGraphInputData.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlTLPFeedBackBuilder.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlyphManager.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlNode.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlMetaNode.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlEdge.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlDisplayListManager.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlConvexHull.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlConvexGraphHull.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlSceneObserver.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlLine.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlCurve.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlQuad.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlPolyQuad.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlAxis.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlQuantitativeAxis.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlNominativeAxis.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlProgressBar.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlXMLTools.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlBoundingBoxSceneVisitor.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlLines.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlColorScale.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlMetaNodeRenderer.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlMetaNodeTrueRenderer.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlTools.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlBezierCurve.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlCatmullRomCurve.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/EdgeExtremityGlyph.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/EdgeExtremityGlyphManager.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/OcclusionTest.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/Curves.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlShaderProgram.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlOpenUniformCubicBSpline.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlCubicBSplineInterpolation.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/OpenGlConfigManager.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/OpenGlErrorViewer.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/AbstractGlCurve.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlCPULODCalculator.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlQuadTreeLODCalculator.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlSceneZoomAndPan.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/ParametricCurves.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlVertexArrayManager.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlVertexArrayVisitor.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-ogl/include/tulip/TextRenderer.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "libtulip_ogl_dev")

