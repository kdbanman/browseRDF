file(MAKE_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/tulip)

INSTALL(FILES
	tulip/ThreadedComputeProperty.h
	tulip/TulipTableWidget.h 
	tulip/GlMainWidget.h 
	tulip/TabWidget.h 
	tulip/PropertyDialog.h  
	tulip/CopyPropertyDialog.h 
	tulip/RenderingParametersDialog.h 
	tulip/LayerManagerWidget.h 
	tulip/AugmentedDisplayDialog.h 
	tulip/GridOptionsWidget.h 
	tulip/GlMainView.h 
	tulip/NodeLinkDiagramComponent.h 
	tulip/InteractorManager.h 
	tulip/Interactor.h 
	tulip/InteractorChainOfResponsibility.h 
	tulip/InteractorComponent.h 
	tulip/ForegroundEntity.h 
	tulip/MouseSelector.h 
	tulip/MouseBoxZoomer.h 
	tulip/MouseEdgeBuilder.h 
	tulip/MouseInteractors.h 
	tulip/MouseNodeBuilder.h 
	tulip/MouseSelectionEditor.h 
	tulip/MouseEdgeSelector.h 
	tulip/MouseEdgeBendEditor.h 
	tulip/MouseShowElementInfos.h 
	tulip/PropertyWidget.h 
	tulip/ElementPropertiesWidgetUI.h 
	tulip/ElementPropertiesWidget.h 
	tulip/FindSelectionWidget.h 
	tulip/SGHierarchyWidget.h 
	tulip/GWOverviewWidget.h 
	tulip/TlpQtTools.h 
	tulip/SGHierarchyWidgetPlugin.h 
	tulip/GlMainWidgetPlugin.h 
	tulip/ElementPropertiesWidgetPlugin.h 
	tulip/GWOverviewWidgetPlugin.h 
	tulip/PropertyWidgetPlugin.h 
	tulip/QtProgress.h 
        tulip/PluginProgressWidget.h
	tulip/Controller.h 
	tulip/ControllerAlgorithmTools.h
    tulip/ControllerViewsTools.h
    tulip/ControllerViewsManager.h
	tulip/MainController.h 
	tulip/ControllerPluginsManager.h 
	tulip/View.h 
	tulip/AbstractView.h 
	tulip/GraphPropertiesSelectionWidget.h 
	tulip/ItemsListWidget.h 
	tulip/StringsListSelectionWidget.h 
	tulip/ViewPluginsManager.h 
	tulip/ColorScaleConfigDialog.h 
  tulip/ColorScaleWidget.h
	tulip/StringsListSelectionWidgetInterface.h 
	tulip/SimpleStringsListSelectionWidget.h 
	tulip/DoubleStringsListSelectionWidget.h 
  tulip/QGlBufferManager.h
	tulip/QGlPixelBufferManager.h
	tulip/GlCompositeHierarchyManager.h
	tulip/BaseGraphicsViewComponentMacro.h
    tulip/QtOpenGlErrorViewer.h
    tulip/CSVContentHandler.h
    tulip/CSVGraphImport.h
    tulip/CSVGraphMappingConfigurationWidget.h
    tulip/CSVImportConfigurationWidget.h    
    tulip/CSVParser.h    
    tulip/CSVParserConfigurationWidget.h
    tulip/CSVImportWizard.h
    tulip/QtGlSceneZoomAndPanAnimator.h
    tulip/Morphing.h
    tulip/GraphPropertiesTableWidget.h
  tulip/TextEditDialog.h
  tulip/SmallMultiplesView.h
  tulip/SmallMultiplesNavigatorComponent.h
  tulip/GlOffscreenRenderer.h
  tulip/SnapshotDialog.h
  tulip/PropertyCreationDialog.h
  tulip/TulipSettings.h
  tulip/ColorButton.h
  tulip/CoordWidget.h
  tulip/SizeWidget.h
  tulip/FileNameEditorWidget.h        
  tulip/TlpNetworkAccess.h        
DESTINATION ${TulipIncludeInstallDir}/tulip/
COMPONENT libtulip_qt_dev
)

IF(QT_VERSION_MINOR GREATER 3)
INSTALL(FILES
        tulip/BaseGraphicsViewComponent.h
	tulip/GlMainWidgetGraphicsView.h
	tulip/GlMainWidgetItem.h
	tulip/TabWidgetHidableMenuGraphicsProxy.h	
	tulip/GraphicsWidgetBase.h
DESTINATION ${TulipIncludeInstallDir}/tulip/
COMPONENT libtulip_qt_dev
)
ENDIF(QT_VERSION_MINOR GREATER 3)
