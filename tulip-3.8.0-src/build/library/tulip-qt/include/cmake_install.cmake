# Install script for directory: /home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include

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

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "libtulip_qt_dev")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/tulip" TYPE FILE FILES
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/ThreadedComputeProperty.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/TulipTableWidget.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/GlMainWidget.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/TabWidget.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/PropertyDialog.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/CopyPropertyDialog.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/RenderingParametersDialog.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/LayerManagerWidget.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/AugmentedDisplayDialog.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/GridOptionsWidget.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/GlMainView.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/NodeLinkDiagramComponent.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/InteractorManager.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/Interactor.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/InteractorChainOfResponsibility.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/InteractorComponent.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/ForegroundEntity.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/MouseSelector.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/MouseBoxZoomer.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/MouseEdgeBuilder.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/MouseInteractors.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/MouseNodeBuilder.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/MouseSelectionEditor.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/MouseEdgeSelector.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/MouseEdgeBendEditor.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/MouseShowElementInfos.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/PropertyWidget.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/ElementPropertiesWidgetUI.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/ElementPropertiesWidget.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/FindSelectionWidget.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/SGHierarchyWidget.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/GWOverviewWidget.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/TlpQtTools.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/SGHierarchyWidgetPlugin.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/GlMainWidgetPlugin.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/ElementPropertiesWidgetPlugin.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/GWOverviewWidgetPlugin.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/PropertyWidgetPlugin.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/QtProgress.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/PluginProgressWidget.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/Controller.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/ControllerAlgorithmTools.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/ControllerViewsTools.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/ControllerViewsManager.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/MainController.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/ControllerPluginsManager.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/View.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/AbstractView.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/GraphPropertiesSelectionWidget.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/ItemsListWidget.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/StringsListSelectionWidget.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/ViewPluginsManager.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/ColorScaleConfigDialog.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/ColorScaleWidget.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/StringsListSelectionWidgetInterface.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/SimpleStringsListSelectionWidget.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/DoubleStringsListSelectionWidget.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/QGlBufferManager.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/QGlPixelBufferManager.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/GlCompositeHierarchyManager.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/BaseGraphicsViewComponentMacro.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/QtOpenGlErrorViewer.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/CSVContentHandler.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/CSVGraphImport.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/CSVGraphMappingConfigurationWidget.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/CSVImportConfigurationWidget.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/CSVParser.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/CSVParserConfigurationWidget.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/CSVImportWizard.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/QtGlSceneZoomAndPanAnimator.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/Morphing.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/GraphPropertiesTableWidget.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/TextEditDialog.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/SmallMultiplesView.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/SmallMultiplesNavigatorComponent.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/GlOffscreenRenderer.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/SnapshotDialog.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/PropertyCreationDialog.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/TulipSettings.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/ColorButton.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/CoordWidget.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/SizeWidget.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/FileNameEditorWidget.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/TlpNetworkAccess.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "libtulip_qt_dev")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "libtulip_qt_dev")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/tulip" TYPE FILE FILES
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/BaseGraphicsViewComponent.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/GlMainWidgetGraphicsView.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/GlMainWidgetItem.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/TabWidgetHidableMenuGraphicsProxy.h"
    "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/GraphicsWidgetBase.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "libtulip_qt_dev")

