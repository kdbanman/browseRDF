SET(HAS_TULIP_QT_PYTHON_BINDINGS FALSE CACHE INTERNAL "")

IF(PYTHONINTERP_FOUND)
IF(PYTHONLIBS_FOUND)
IF(SIP_OK)

FIND_PACKAGE(Qt4 REQUIRED)
SET(PyQt4_DIR ${CMAKE_CURRENT_SOURCE_DIR})
MARK_AS_ADVANCED(PyQt4_DIR)
FIND_PACKAGE(PyQt4)

IF(PYQT4_FOUND)
IF(${SIP_VERSION_STR} VERSION_EQUAL ${PYQT4_SIP_VER})

SET(TULIP_QT_SIP_FILES
  AbstractView.sip
  Controller.sip
  ControllerViewsManager.sip
  ForegroundEntity.sip
  GlMainView.sip
  GlMainWidget.sip
  InteractorChainOfResponsibility.sip
  InteractorComponent.sip
  Interactor.sip
  InteractorManager.sip
  MainController.sip
  Module.sip
  MouseInteractors.sip
  NodeLinkDiagramComponent.sip
  View.sip
)

IF(EXISTS ${PYQT4_SIP_DIR})

SET(HAS_TULIP_QT_PYTHON_BINDINGS TRUE CACHE INTERNAL "")

# Extract specific arguments to pass to sip when using PyQt
STRING(REGEX MATCHALL "[0-9A-Za-z_-]+" PYQT_SIP_ARGS ${PYQT4_SIP_FLAGS})

# First, generate tulip properties bindings based on template SIP files
# Then, generate a SIP build file and parse its content to retrieve source files list
EXECUTE_PROCESS(COMMAND ${SIP_EXE} ${PYQT_SIP_ARGS} -I ${PYQT4_SIP_DIR} -b ${CMAKE_CURRENT_BINARY_DIR}/tulipqt.sbf ${CMAKE_CURRENT_SOURCE_DIR}/Module.sip)
FILE(READ ${CMAKE_CURRENT_BINARY_DIR}/tulipqt.sbf TULIP_QT_SBF)
STRING(REGEX MATCHALL "[0-9A-Za-z_]*\\.cpp" TULIP_QT_PYTHON_BINDINGS_SRC ${TULIP_QT_SBF})

ADD_CUSTOM_COMMAND(OUTPUT ${TULIP_QT_PYTHON_BINDINGS_SRC}
  COMMAND ${SIP_EXE} ${PYQT_SIP_ARGS} -I ${PYQT4_SIP_DIR} ${PYQT4_SIP_FLAGS} -c ${CMAKE_CURRENT_BINARY_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/Module.sip
  COMMENT "Generating Python Bindings for libtulip-qt"
  DEPENDS ${TULIP_QT_SIP_FILES} ${TULIPOGL_SIP_FILES} ${TULIP_SIP_FILES} ${STL_SIP_FILES})
           
DISABLE_COMPILER_WARNINGS()

# Force to use SIP headers located in thirdparty
# instead of those installed in the system
INCLUDE_DIRECTORIES(BEFORE ${SIP_INCLUDE_DIR})

INCLUDE_DIRECTORIES(${PYTHON_INCLUDE_DIR} ${PYTHON_INCLUDE_PATH} ${QT_INCLUDE_DIR} ${QT_INCLUDE_DIR}/QtOpenGL ${TulipInclude} ${TulipOGLInclude} ${TulipQtInclude} ${TulipBuildInclude})

ADD_LIBRARY(${LibTulipQtPythonName} SHARED ${TULIP_QT_PYTHON_BINDINGS_SRC})

SET_TARGET_PROPERTIES(${LibTulipQtPythonName} PROPERTIES OUTPUT_NAME tulipqt PREFIX "")

IF(WIN32)
  SET_TARGET_PROPERTIES(${LibTulipQtPythonName} PROPERTIES SUFFIX ".pyd")
ELSE(WIN32)
  SET_TARGET_PROPERTIES(${LibTulipQtPythonName} PROPERTIES SUFFIX ".so")
ENDIF(WIN32)

TARGET_LINK_LIBRARIES(${LibTulipQtPythonName} ${LibTulipCoreName} ${LibTulipOglName} ${LibTulipGUIName} ${PYTHON_LIBRARY} ${QT_QTCORE_LIBRARY} ${QT_QTGUI_LIBRARY} ${QT_QTOPENGL_LIBRARY})

ADD_CUSTOM_TARGET(touchTulipQtPythonCMakeLists ALL
  COMMAND ${CMAKE_COMMAND} -E touch ${CMAKE_CURRENT_LIST_FILE}
  COMMENT "touching CMakeLists.txt for Tulip Qt Python Bindings (force configure before next build to keep source files list updated)"
  DEPENDS ${LibTulipQtPythonName})

INSTALL(TARGETS ${LibTulipQtPythonName}
  RUNTIME DESTINATION ${TulipBinInstallDir}/python COMPONENT tulip_python
  LIBRARY DESTINATION ${TulipLibInstallDir}/python COMPONENT tulip_python
  ARCHIVE DESTINATION ${TulipLibInstallDir}/python COMPONENT tulip_python)


ADD_CUSTOM_COMMAND(
  TARGET ${LibTulipQtPythonName}
  POST_BUILD
  COMMAND ${SIP_EXE} ${PYQT_SIP_ARGS} -I ${PYQT4_SIP_DIR} ${PYQT4_SIP_FLAGS} -a ${CMAKE_CURRENT_BINARY_DIR}/tulipqt.api ${CMAKE_CURRENT_SOURCE_DIR}/Module.sip
  COMMENT "Generating QScintilla API file for Tulip Qt Python bindings"
  VERBATIM)

INSTALL(FILES ${CMAKE_CURRENT_BINARY_DIR}/tulipqt.api DESTINATION ${TulipShareInstallDir}/apiFiles COMPONENT tulip_python)

IF(NOT UBUNTU_PPA_BUILD)
INSTALL(FILES ${CMAKE_CURRENT_SOURCE_DIR}/tulipqtplugins.py DESTINATION ${TulipLibInstallDir}/python COMPONENT tulip_python)
ELSE()
INSTALL(FILES ${CMAKE_CURRENT_SOURCE_DIR}/tulipqtplugins.py DESTINATION ${TulipLibInstallDir}/python${PYTHON_VERSION}/dist-packages COMPONENT tulip_python)
ENDIF()

ELSE(EXISTS ${PYQT4_SIP_DIR})
  MESSAGE("The directory that should contain PyQt4 SIP files (${PYQT4_SIP_DIR}) does not exist. You should check your installation of PyQt4.")
  MESSAGE("Tulip Qt Python Bindings won't be compiled.")
ENDIF(EXISTS ${PYQT4_SIP_DIR})

ELSE(${SIP_VERSION_STR} VERSION_EQUAL ${PYQT4_SIP_VER})
  MESSAGE("The SIP version used by Tulip (${SIP_VERSION_STR}) is not the same as the one used to generate the Qt Python bindings (PyQt4) installed on your system (${PYQT4_SIP_VER}).")
  MESSAGE("Tulip Qt Python Bindings won't be compiled.")
ENDIF(${SIP_VERSION_STR} VERSION_EQUAL ${PYQT4_SIP_VER})

ELSE(PYQT4_FOUND)
  MESSAGE("PyQt4 has not been found on your system.")
  MESSAGE("Tulip Qt Python Bindings won't be compiled.")
ENDIF(PYQT4_FOUND)

ENDIF(SIP_OK)
ENDIF(PYTHONLIBS_FOUND)
ENDIF(PYTHONINTERP_FOUND)
