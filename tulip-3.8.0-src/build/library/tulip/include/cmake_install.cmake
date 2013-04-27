# Install script for directory: /home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include

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
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/Bfs.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/Ordering.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/ConvexHull.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/Delaunay.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/tulipconf.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/GraphTools.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/tuliphash.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/Array.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/Vector.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/VectorCast.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/Matrix.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/Rectangle.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/Circle.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/SimpleTest.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/TreeTest.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/AcyclicTest.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/ConnectedTest.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/BiconnectedTest.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/TriconnectedTest.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/GraphProperty.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/LayoutProperty.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/Plugin.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/Algorithm.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/BooleanAlgorithm.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/LayoutAlgorithm.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/PluginLoader.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/Size.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/Node.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/Edge.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/Graph.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/PropertyTypes.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/Color.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/MethodFactory.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/PluginLoaderTxt.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/SizeProperty.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/ColorProperty.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/ImportModule.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/DoubleProperty.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/SizeAlgorithm.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/ColorAlgorithm.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/IntegerProperty.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/DoubleAlgorithm.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/StringProperty.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/TemplateFactory.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/Coord.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/IntegerAlgorithm.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/Observable.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/ObservableGraph.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/ObservableProperty.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/PropertyInterface.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/AbstractProperty.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/StringAlgorithm.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/TlpTools.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/PluginContext.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/BooleanProperty.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/TulipPlugin.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/ExportModule.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/Reflect.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/DataSet.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/WithParameter.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/WithDependency.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/PluginProgress.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/SimplePluginProgress.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/Iterator.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/StlIterator.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/StableIterator.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/SortIterator.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/GraphMeasure.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/ConcatIterator.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/StoredType.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/MutableContainer.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/PluginLibraryLoader.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/StlFunctions.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/ExtendedClusterOperation.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/StringCollection.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/ConsoleUtils.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/DrawingTools.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/Face.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/PlanarityTest.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/OuterPlanarTest.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/FaceIterator.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/PlanarConMap.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/GraphDecorator.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/ForEach.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/MapIterator.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/BoundingBox.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/ColorScale.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip/include/tulip/TulipRelease.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/PreferenceManager.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/QuadTree.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/memorypool.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/conversioniterator.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/filteriterator.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/uniqueiterator.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/stlfilteriterator.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/vectorgraph.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/vectorgraphproperty.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/TulipException.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "libtulip_dev")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "libtulip_dev")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/tulip/cxx" TYPE FILE FILES
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/cxx/Array.cxx"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/cxx/Vector.cxx"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/cxx/Matrix.cxx"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/cxx/Circle.cxx"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/cxx/AbstractProperty.cxx"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/cxx/TemplateFactory.cxx"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/cxx/Reflect.cxx"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip/include/tulip/cxx/Graph.cxx"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "libtulip_dev")

