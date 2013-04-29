# Install script for directory: /home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include

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
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/ThreadedComputeProperty.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/TulipTableWidget.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/GlMainWidget.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/TabWidget.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/PropertyDialog.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/CopyPropertyDialog.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/RenderingParametersDialog.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/LayerManagerWidget.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/AugmentedDisplayDialog.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/GridOptionsWidget.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/GlMainView.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/NodeLinkDiagramComponent.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/InteractorManager.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/Interactor.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/InteractorChainOfResponsibility.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/InteractorComponent.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/ForegroundEntity.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/MouseSelector.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/MouseBoxZoomer.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/MouseEdgeBuilder.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/MouseInteractors.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/MouseNodeBuilder.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/MouseSelectionEditor.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/MouseEdgeSelector.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/MouseEdgeBendEditor.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/MouseShowElementInfos.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/PropertyWidget.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/ElementPropertiesWidgetUI.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/ElementPropertiesWidget.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/FindSelectionWidget.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/SGHierarchyWidget.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/GWOverviewWidget.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/TlpQtTools.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/SGHierarchyWidgetPlugin.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/GlMainWidgetPlugin.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/ElementPropertiesWidgetPlugin.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/GWOverviewWidgetPlugin.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/PropertyWidgetPlugin.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/QtProgress.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/PluginProgressWidget.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/Controller.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/ControllerAlgorithmTools.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/ControllerViewsTools.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/ControllerViewsManager.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/MainController.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/ControllerPluginsManager.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/View.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/AbstractView.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/GraphPropertiesSelectionWidget.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/ItemsListWidget.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/StringsListSelectionWidget.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/ViewPluginsManager.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/ColorScaleConfigDialog.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/ColorScaleWidget.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/StringsListSelectionWidgetInterface.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/SimpleStringsListSelectionWidget.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/DoubleStringsListSelectionWidget.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/QGlBufferManager.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/QGlPixelBufferManager.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/GlCompositeHierarchyManager.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/BaseGraphicsViewComponentMacro.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/QtOpenGlErrorViewer.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/CSVContentHandler.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/CSVGraphImport.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/CSVGraphMappingConfigurationWidget.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/CSVImportConfigurationWidget.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/CSVParser.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/CSVParserConfigurationWidget.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/CSVImportWizard.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/QtGlSceneZoomAndPanAnimator.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/Morphing.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/GraphPropertiesTableWidget.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/TextEditDialog.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/SmallMultiplesView.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/SmallMultiplesNavigatorComponent.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/GlOffscreenRenderer.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/SnapshotDialog.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/PropertyCreationDialog.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/TulipSettings.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/ColorButton.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/CoordWidget.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/SizeWidget.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/FileNameEditorWidget.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/TlpNetworkAccess.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "libtulip_qt_dev")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "libtulip_qt_dev")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/tulip" TYPE FILE FILES
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/BaseGraphicsViewComponent.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/GlMainWidgetGraphicsView.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/GlMainWidgetItem.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/TabWidgetHidableMenuGraphicsProxy.h"
    "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-qt/include/tulip/GraphicsWidgetBase.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "libtulip_qt_dev")

