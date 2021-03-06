FIND_PACKAGE( Qt4 REQUIRED )
INCLUDE( ${QT_USE_FILE} )

INCLUDE("${PROJECT_SOURCE_DIR}/${TulipUseFile}")

set(tulip_UI
    ../designer/Tulip.ui
    ../designer/AppStartUp.ui
    ../designer/InfoDialog.ui
    ../designer/PreferenceDialog.ui
    ../designer/ChooseControllerDialog.ui)

set(tulip_MOC
    ../include/AppStartUp.h
    ../include/InfoDialog.h
    ../include/TulipApp.h
    ../include/PreferenceDialog.h
    ../include/ChooseControllerDialog.h)

set(tulip_SRCS 
    TulipApp.cpp
    InfoDialog.cpp
    AppStartUp.cpp
    PreferenceDialog.cpp
    ChooseControllerDialog.cpp
    main.cpp)

SET(tulip_RCC
    ../designer/TulipResource.qrc
)

TULIP_QT4_WRAP_UI_IN_INCLUDE(tulip_UI_SRCS ${tulip_UI})
TULIP_QT4_WRAP_CPP(tulip_MOC_SRCS ${tulip_MOC} OPTIONS "-DQT_MINOR_REL=${QT_VERSION_MINOR}")
QT4_ADD_RESOURCES(tulip_RCC_SRCS ${tulip_RCC})

INCLUDE_DIRECTORIES(../include/ ${TulipBuildInclude} ${TulipQtBuildInclude} ${PROJECT_BINARY_DIR}/library/tulip-qt/include/tulip ${PROJECT_BINARY_DIR}/software/tulip/include ${TulipInclude} ${TulipQtInclude} ${TulipOGLInclude} ${TulipPluginsManagerInclude})
INCLUDE_DIRECTORIES(${CMAKE_SOURCE_DIR}/software/crash_handling)

SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DQT_MINOR_REL=${QT_VERSION_MINOR}")

IF(WIN32)
  ADD_EXECUTABLE( tulip TulipLauncher.cpp)
  SET_TARGET_PROPERTIES(tulip PROPERTIES INSTALL_RPATH ${TulipLibInstallDir})
  IF(NOT MSVC)
    TARGET_LINK_LIBRARIES( tulip -mwindows )
  ENDIF()
  TARGET_LINK_LIBRARIES( tulip ${QT_LIBRARIES} )
ENDIF(WIN32)

ADD_EXECUTABLE( tulip_need_restart TulipNeedRestart.cpp)
SET_TARGET_PROPERTIES(tulip_need_restart PROPERTIES INSTALL_RPATH ${TulipLibInstallDir})
TARGET_LINK_LIBRARIES( tulip_need_restart ${QT_LIBRARIES} ${LibTulipName} ${LibTulipOglName} ${LibTulipQtName})

ADD_EXECUTABLE( tulip_app ${tulip_UI_SRCS} ${tulip_MOC_SRCS} ${tulip_SRCS} ${tulip_RCC_SRCS})
SET_TARGET_PROPERTIES(tulip_app PROPERTIES INSTALL_RPATH ${TulipLibInstallDir})
IF(WIN32 AND NOT ${CMAKE_GENERATOR} MATCHES "Visual Studio" AND NOT ${CMAKE_GENERATOR} MATCHES "NMake Makefiles")
  TARGET_LINK_LIBRARIES( tulip_app -mwindows )
ENDIF()

ADD_DEPENDENCIES(tulip_need_restart tulip_app)

TARGET_LINK_LIBRARIES( tulip_app ${FREETYPE_LIBRARY} )
TARGET_LINK_LIBRARIES( tulip_app ${GZStreamLibrary} )
TARGET_LINK_LIBRARIES( tulip_app ${QT_LIBRARIES} )
IF(QT_VERSION_MINOR LESS 7)
  TARGET_LINK_LIBRARIES( tulip_app ${QT_QTASSISTANT_LIBRARY})
  TARGET_LINK_LIBRARIES( tulip_app ${QT_QTASSISTANTCLIENT_LIBRARY} )
ENDIF(QT_VERSION_MINOR LESS 7)
TARGET_LINK_LIBRARIES( tulip_app ${QT_QTOPENGL_LIBRARY} )
TARGET_LINK_LIBRARIES( tulip_app ${OPENGL_glu_LIBRARY} )
TARGET_LINK_LIBRARIES( tulip_app ${OPENGL_gl_LIBRARY} )
TARGET_LINK_LIBRARIES( tulip_app ${LIBXML2_LIBRARIES} )
TARGET_LINK_LIBRARIES( tulip_app ${JPEG_LIBRARY})
TARGET_LINK_LIBRARIES( tulip_app ${CMAKE_DL_LIBS})
TARGET_LINK_LIBRARIES( tulip_app ${LibTulipPluginsManagerName})
TARGET_LINK_LIBRARIES( tulip_app ${QT_QTXML_LIBRARY} )
TARGET_LINK_LIBRARIES( tulip_app ${LibTulipName})
TARGET_LINK_LIBRARIES( tulip_app ${LibTulipOglName})
TARGET_LINK_LIBRARIES( tulip_app ${LibTulipQtName})
TARGET_LINK_LIBRARIES( tulip_app crash_handling)

IF(WIN32)
  IF(${CMAKE_GENERATOR} MATCHES "Visual Studio") #if generating for visual studio, we assume the compiler will be vc++
    INSTALL(PROGRAMS ${CMAKE_CURRENT_BINARY_DIR}/\${BUILD_TYPE}/tulip.exe
            DESTINATION "${TulipBinInstallDir}"
            COMPONENT tulip)
    INSTALL(PROGRAMS ${CMAKE_CURRENT_BINARY_DIR}/\${BUILD_TYPE}/tulip_app.exe
            DESTINATION "${TulipBinInstallDir}"
            COMPONENT tulip)
  ELSE()
    INSTALL(PROGRAMS ${CMAKE_CURRENT_BINARY_DIR}/tulip.exe
            DESTINATION "${TulipBinInstallDir}"
            COMPONENT tulip)
    INSTALL(PROGRAMS ${CMAKE_CURRENT_BINARY_DIR}/tulip_app.exe
            DESTINATION "${TulipBinInstallDir}"
            COMPONENT tulip)
    IF(HAVE_BFD)
        # don't need to link against libintl when using MinGW 4.4
	IF(GCXX_VERSION VERSION_GREATER 4.5 OR GCXX_VERSION VERSION_EQUAL 4.5)
		FIND_LIBRARY_GLOB(INTL_INSTALL_PATH "libintl*.dll")
		INSTALL_EXTERNAL_LIB(INTL_INSTALL_PATH tulip)
		FIND_LIBRARY_GLOB(ICONV_INSTALL_PATH "libiconv*.dll")
		INSTALL_EXTERNAL_LIB(ICONV_INSTALL_PATH tulip)
	ENDIF()	
     ENDIF(HAVE_BFD)
  ENDIF()
ELSE(WIN32)
  INSTALL(PROGRAMS
    ${CMAKE_CURRENT_SOURCE_DIR}/tulip.sh
    DESTINATION ${TulipBinInstallDir}
    RENAME tulip
    COMPONENT tulip)
  INSTALL(PROGRAMS
    ${CMAKE_CURRENT_BINARY_DIR}/tulip_app
    DESTINATION ${TulipBinInstallDir}
    COMPONENT tulip)
  INSTALL(PROGRAMS
    ${CMAKE_CURRENT_BINARY_DIR}/tulip_need_restart
    DESTINATION ${TulipBinInstallDir}
    COMPONENT tulip)
ENDIF(WIN32)

#Copy QtAssistant apps
IF(APPLE)
  FIND_LIBRARY_GLOB(QTASSISTANT_INSTALL_PATH "QtAssistant.framework/QtAssistant")
  IF(QTASSISTANT_INSTALL_PATH)
    INSTALL_EXTERNAL_LIB(QTASSISTANT_INSTALL_PATH tulip)
  ENDIF()
  INSTALL(DIRECTORY "/Developer/Applications/Qt/Assistant.app" DESTINATION ${TulipAppleContentsDir} USE_SOURCE_PERMISSIONS COMPONENT tulip OPTIONAL)
ELSEIF(WIN32)
  INSTALL(FILES ${QT_BINARY_DIR}/assistant.exe DESTINATION "${TulipBinInstallDir}" COMPONENT tulip)
  #the sqldriver is needed to show the documentation
  #because the docs/tulip.qhc generated file is an embedded sql database
  INSTALL(FILES ${QT_PLUGINS_DIR}/sqldrivers/qsqlite4.dll DESTINATION "${TulipBinInstallDir}/sqldrivers" COMPONENT tulip)
ENDIF()


