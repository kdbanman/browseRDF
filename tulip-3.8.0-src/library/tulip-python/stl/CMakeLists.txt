IF(PYTHONLIBS_FOUND)
IF(SIP_OK)

SET(STL_SIP_FILES
    ${CMAKE_CURRENT_SOURCE_DIR}/list.sip
    ${CMAKE_CURRENT_SOURCE_DIR}/map.sip
    ${CMAKE_CURRENT_SOURCE_DIR}/Module.sip
    ${CMAKE_CURRENT_SOURCE_DIR}/pair.sip
    ${CMAKE_CURRENT_SOURCE_DIR}/set.sip
    ${CMAKE_CURRENT_SOURCE_DIR}/string.sip
    ${CMAKE_CURRENT_SOURCE_DIR}/vector.sip
    ${CMAKE_CURRENT_SOURCE_DIR}/ostream.sip
    CACHE INTERNAL ""
)

# Generate a SIP build file and parse its content to retrieve source files list
EXECUTE_PROCESS(COMMAND ${SIP_EXE} -b ${CMAKE_CURRENT_BINARY_DIR}/stl.sbf ${CMAKE_CURRENT_SOURCE_DIR}/Module.sip)
FILE(READ ${CMAKE_CURRENT_BINARY_DIR}/stl.sbf STL_SBF)
STRING(REGEX MATCHALL "[0-9A-Za-z]*\\.cpp" STL_PYTHON_BINDINGS_SRC ${STL_SBF})

ADD_CUSTOM_COMMAND(OUTPUT ${STL_PYTHON_BINDINGS_SRC}
                   COMMAND ${SIP_EXE} -I ${CMAKE_CURRENT_BINARY_DIR} -c ${CMAKE_CURRENT_BINARY_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/Module.sip 
                   COMMENT "Generating Python Bindings for stl"
                   DEPENDS ${STL_SIP_FILES})
           
DISABLE_COMPILER_WARNINGS()

# Force to use SIP and headers located in thirdparty
# instead of those installed in the system
INCLUDE_DIRECTORIES(BEFORE ${SIP_INCLUDE_DIR})

INCLUDE_DIRECTORIES(${PYTHON_INCLUDE_DIR} ${PYTHON_INCLUDE_PATH})

ADD_LIBRARY(${LibStlPythonName} SHARED ${STL_PYTHON_BINDINGS_SRC})

SET_TARGET_PROPERTIES(${LibStlPythonName} 
		      PROPERTIES OUTPUT_NAME stl PREFIX "")

IF(WIN32)
SET_TARGET_PROPERTIES(${LibStlPythonName} 
		      PROPERTIES SUFFIX ".pyd")
ELSE(WIN32)
SET_TARGET_PROPERTIES(${LibStlPythonName} 
		      PROPERTIES SUFFIX ".so")		      
ENDIF(WIN32)

TARGET_LINK_LIBRARIES(${LibStlPythonName} ${PYTHON_LIBRARY})

ADD_CUSTOM_TARGET(touchStlPythonCMakeLists ALL
                  COMMAND ${CMAKE_COMMAND} -E touch ${CMAKE_CURRENT_LIST_FILE}
                  COMMENT "touching CMakeLists.txt for Stl Python Bindings (force configure before next build to keep source files list updated)"
                  DEPENDS ${LibStlPythonName})

IF(NOT UBUNTU_PPA_BUILD)
INSTALL(TARGETS ${LibStlPythonName}
        RUNTIME DESTINATION ${TulipBinInstallDir}/python COMPONENT tulip_python
        LIBRARY DESTINATION ${TulipLibInstallDir}/python COMPONENT tulip_python
        ARCHIVE DESTINATION ${TulipLibInstallDir}/python COMPONENT tulip_python)
ELSE()
INSTALL(TARGETS ${LibStlPythonName}
        RUNTIME DESTINATION ${TulipBinInstallDir}/../lib/python${PYTHON_VERSION}/dist-packages COMPONENT tulip_python
        LIBRARY DESTINATION ${TulipLibInstallDir}/python${PYTHON_VERSION}/dist-packages COMPONENT tulip_python
        ARCHIVE DESTINATION ${TulipLibInstallDir}/python${PYTHON_VERSION}/dist-packages COMPONENT tulip_python)
ENDIF()

ENDIF(SIP_OK)
ENDIF(PYTHONLIBS_FOUND)
