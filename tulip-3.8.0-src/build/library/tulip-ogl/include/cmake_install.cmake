# Install script for directory: /home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include

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
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/Camera.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlComposite.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlGraphComposite.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlGrid.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlEntity.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlGraphRenderingParameters.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlGraphStaticData.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlCircle.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlCylinder.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlLabel.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlRect.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlRectTextured.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/Gl2DRect.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlAbstractPolygon.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlPolygon.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlRegularPolygon.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlTriangle.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlHexagon.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlPentagon.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlComplexPolygon.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlSphere.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlLayer.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlLODCalculator.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlLODSceneVisitor.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlBox.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlScene.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlTextureManager.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/Glyph.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlSimpleEntity.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlComplexeEntity.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlSelectSceneVisitor.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlSceneVisitor.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlFeedBackRecorder.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlFeedBackBuilder.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlGraphInputData.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlTLPFeedBackBuilder.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlyphManager.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlNode.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlMetaNode.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlEdge.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlDisplayListManager.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlConvexHull.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlConvexGraphHull.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlSceneObserver.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlLine.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlCurve.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlQuad.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlPolyQuad.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlAxis.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlQuantitativeAxis.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlNominativeAxis.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlProgressBar.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlXMLTools.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlBoundingBoxSceneVisitor.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlLines.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlColorScale.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlMetaNodeRenderer.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlMetaNodeTrueRenderer.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlTools.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlBezierCurve.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlCatmullRomCurve.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/EdgeExtremityGlyph.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/EdgeExtremityGlyphManager.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/OcclusionTest.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/Curves.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlShaderProgram.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlOpenUniformCubicBSpline.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlCubicBSplineInterpolation.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/OpenGlConfigManager.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/OpenGlErrorViewer.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/AbstractGlCurve.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlCPULODCalculator.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlQuadTreeLODCalculator.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlSceneZoomAndPan.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/ParametricCurves.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlVertexArrayManager.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/GlVertexArrayVisitor.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogl/include/tulip/TextRenderer.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "libtulip_ogl_dev")

