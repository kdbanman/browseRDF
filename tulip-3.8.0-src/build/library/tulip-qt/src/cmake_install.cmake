# Install script for directory: /home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-qt/src

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

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "libtulip_qt")
  IF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtulip-qt4-3.8.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtulip-qt4-3.8.so")
    FILE(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtulip-qt4-3.8.so"
         RPATH "")
  ENDIF()
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-qt/src/libtulip-qt4-3.8.so")
  IF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtulip-qt4-3.8.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtulip-qt4-3.8.so")
    FILE(RPATH_REMOVE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtulip-qt4-3.8.so")
    IF(CMAKE_INSTALL_DO_STRIP)
      EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtulip-qt4-3.8.so")
    ENDIF(CMAKE_INSTALL_DO_STRIP)
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "libtulip_qt")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/tulip" TYPE FILE FILES
    "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-qt/src/../include/tulip/TabWidgetData.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-qt/src/../include/tulip/PropertyDialogData.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-qt/src/../include/tulip/CopyPropertyDialogData.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-qt/src/../include/tulip/FindSelectionData.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-qt/src/../include/tulip/RenderingParametersDialogData.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-qt/src/../include/tulip/LayerManagerWidgetData.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-qt/src/../include/tulip/AugmentedDisplayDialogData.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-qt/src/../include/tulip/GWOverviewWidgetData.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-qt/src/../include/tulip/GridOptionsData.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-qt/src/../include/tulip/PluginProgressWidgetData.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-qt/src/../include/tulip/ColorScaleConfigDialogData.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-qt/src/../include/tulip/SimpleStringsListSelectionWidgetData.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-qt/src/../include/tulip/DoubleStringsListSelectionWidgetData.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-qt/src/../include/tulip/ListPropertyWidgetData.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-qt/src/../include/tulip/ChooseFileNameDialogData.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-qt/src/../include/tulip/TextEditDialogData.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-qt/src/../include/tulip/QtOpenGlErrorViewerWithAskAgainDialogData.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-qt/src/../include/tulip/CSVGraphMappingConfigurationWidgetData.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-qt/src/../include/tulip/CSVImportConfigurationWidgetData.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-qt/src/../include/tulip/CSVParserConfigurationWidgetData.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-qt/src/../include/tulip/CSVImportWizardData.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-qt/src/../include/tulip/SnapshotDialogData.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-qt/src/../include/tulip/PropertyCreationDialogData.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-qt/src/../include/tulip/CoordWidgetData.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-qt/src/../include/tulip/SizeWidgetData.h"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-qt/src/../include/tulip/FileNameEditorWidgetData.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

