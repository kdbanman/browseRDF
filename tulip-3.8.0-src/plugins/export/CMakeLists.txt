INCLUDE_DIRECTORIES(${TulipInclude} ${TulipBuildInclude} ${TulipOGLInclude} ${TulipQtInclude})

##----------------------------------------------------------------------------------------------------------------------------
SET(GMLExport_SRCS
    GMLExport.cpp
)

ADD_LIBRARY(GMLExport-${TulipVersion} SHARED ${GMLExport_SRCS})
TARGET_LINK_LIBRARIES(GMLExport-${TulipVersion} ${LibTulipName})

##----------------------------------------------------------------------------------------------------------------------------
INSTALL(TARGETS 
	GMLExport-${TulipVersion}	
  DESTINATION ${TulipPluginsInstallDir}
  COMPONENT tulip_plugins)
