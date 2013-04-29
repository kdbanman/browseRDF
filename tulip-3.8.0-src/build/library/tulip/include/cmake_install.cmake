# Install script for directory: /home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include

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

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "libtulip_dev")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/tulip" TYPE FILE FILES
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/Bfs.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/Ordering.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/ConvexHull.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/Delaunay.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/tulipconf.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/GraphTools.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/tuliphash.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/Array.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/Vector.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/VectorCast.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/Matrix.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/Rectangle.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/Circle.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/SimpleTest.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/TreeTest.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/AcyclicTest.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/ConnectedTest.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/BiconnectedTest.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/TriconnectedTest.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/GraphProperty.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/LayoutProperty.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/Plugin.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/Algorithm.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/BooleanAlgorithm.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/LayoutAlgorithm.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/PluginLoader.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/Size.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/Node.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/Edge.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/Graph.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/PropertyTypes.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/Color.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/MethodFactory.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/PluginLoaderTxt.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/SizeProperty.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/ColorProperty.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/ImportModule.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/DoubleProperty.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/SizeAlgorithm.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/ColorAlgorithm.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/IntegerProperty.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/DoubleAlgorithm.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/StringProperty.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/TemplateFactory.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/Coord.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/IntegerAlgorithm.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/Observable.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/ObservableGraph.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/ObservableProperty.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/PropertyInterface.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/AbstractProperty.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/StringAlgorithm.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/TlpTools.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/PluginContext.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/BooleanProperty.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/TulipPlugin.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/ExportModule.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/Reflect.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/DataSet.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/WithParameter.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/WithDependency.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/PluginProgress.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/SimplePluginProgress.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/Iterator.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/StlIterator.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/StableIterator.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/SortIterator.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/GraphMeasure.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/ConcatIterator.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/StoredType.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/MutableContainer.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/PluginLibraryLoader.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/StlFunctions.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/ExtendedClusterOperation.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/StringCollection.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/ConsoleUtils.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/DrawingTools.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/Face.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/PlanarityTest.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/OuterPlanarTest.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/FaceIterator.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/PlanarConMap.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/GraphDecorator.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/ForEach.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/MapIterator.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/BoundingBox.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/ColorScale.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/build/library/tulip/include/tulip/TulipRelease.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/PreferenceManager.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/QuadTree.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/memorypool.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/conversioniterator.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/filteriterator.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/uniqueiterator.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/stlfilteriterator.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/vectorgraph.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/vectorgraphproperty.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/TulipException.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "libtulip_dev")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "libtulip_dev")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/tulip/cxx" TYPE FILE FILES
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/cxx/Array.cxx"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/cxx/Vector.cxx"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/cxx/Matrix.cxx"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/cxx/Circle.cxx"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/cxx/AbstractProperty.cxx"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/cxx/TemplateFactory.cxx"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/cxx/Reflect.cxx"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip/include/tulip/cxx/Graph.cxx"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "libtulip_dev")

