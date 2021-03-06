## -----------------------------------------------------------------------------------------------
## ***********************************************************************************************
## -----------------------------------------------------------------------------------------------
##
## Options for cmake (use -D):
## CMAKE_INSTALL_PREFIX=directory_where_tulip_will_be_installed
## NO_DEPRECATE=1 disable display of deprecated warning
##
## -----------------------------------------------------------------------------------------------
## ***********************************************************************************************
## -----------------------------------------------------------------------------------------------

PROJECT(tulip)

CMAKE_MINIMUM_REQUIRED(VERSION 2.6)

SET(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_SOURCE_DIR})

IF(CMAKE_COMPILER_IS_GNUCXX) #visual studio does not recognize these options
   SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Wunused")
ENDIF()

IF(WIN32)
	IF(NOT MSVC) #visual studio does not recognize these options 
		
		# Dynamic ling against libstdc++ on win32/MinGW 
		# The second test is for the case where ccache is used (CMAKE_CXX_COMPILER_ARG1 contains the path to the g++ compiler)
		IF (CMAKE_COMPILER_IS_GNUCXX OR "${CMAKE_CXX_COMPILER_ARG1}" MATCHES ".*[g][+][+].*")
			EXECUTE_PROCESS(COMMAND ${CMAKE_CXX_COMPILER} ${CMAKE_CXX_COMPILER_ARG1} -dumpversion
							OUTPUT_VARIABLE GCXX_VERSION)
							
			IF(GCXX_VERSION VERSION_GREATER 4.0)
		
				SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Wl,-subsystem,console")
				SET(CMAKE_MODULE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Wl,-subsystem,console")
				SET(CMAKE_SHARED_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Wl,-subsystem,console")

				#GCC 4.4 use double dashes and gcc 4.6 single dashes for this option
				IF(GCXX_VERSION VERSION_LESS 4.6)
					SET(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} --shared-libgcc -Wl,--allow-multiple-definition")
					SET(CMAKE_MODULE_LINKER_FLAGS "${CMAKE_MODULE_LINKER_FLAGS} --shared-libgcc  -Wl,--allow-multiple-definition")
					SET(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} --shared-libgcc  -Wl,--allow-multiple-definition")
				ELSE()
					SET(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -shared-libgcc -Wl,--allow-multiple-definition")
					SET(CMAKE_MODULE_LINKER_FLAGS "${CMAKE_MODULE_LINKER_FLAGS} -shared-libgcc  -Wl,--allow-multiple-definition")
					SET(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} -shared-libgcc  -Wl,--allow-multiple-definition")
				ENDIF()
	  
			ENDIF()
			
			IF(GCXX_VERSION VERSION_GREATER 4.5 OR GCXX_VERSION VERSION_EQUAL 4.5)
				#mingw 4.4.0 cannot link the tulip core library as it does not have exceptions symbols correctly defined (MinGW bug #2836185)
				SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -D_GLIBCXX_DLL")	
			ENDIF()
			SET(CMAKE_CXX_STANDARD_LIBRARIES "${CMAKE_CXX_STANDARD_LIBRARIES} -lstdc++")
	ENDIF()
 ENDIF()
ENDIF()

## -----------------------------------------------------------------------------------------------
## build type detection
IF(CMAKE_BUILD_TYPE MATCHES "[Dd][Ee][Bb][Uu][Gg]")
   SET(CMAKE_DEBUG_MODE TRUE)
ELSE(CMAKE_BUILD_TYPE MATCHES "[Dd][Ee][Bb][Uu][Gg]")
   SET(CMAKE_DEBUG_MODE FALSE)
ENDIF(CMAKE_BUILD_TYPE MATCHES "[Dd][Ee][Bb][Uu][Gg]")
## -----------------------------------------------------------------------------------------------
## Tulip version numbers
## TulipVersion : Ma.Mi.Re
## TulipMMVersion : Ma.Mi
## -----------------------------------------------------------------------------------------------
SET(TulipMajorVersion 3)
SET(TulipMinorVersion 8)
SET(TulipReleaseVersion 0)
SET(TulipVersionSeparator .)
IF(MSVC) #specific options for Visual Studio
	IF(${CMAKE_GENERATOR} MATCHES "Visual Studio 9") #visual studio 2008 needs boost
		find_package(BOOST REQUIRED)
		include_directories(${Boost_INCLUDE_DIRS})
		include_directories(${Boost_INCLUDE_DIRS}/boost/tr1)
	ENDIF()
   SET(TulipVersionSeparator _)
ENDIF()
SET(TulipVersion "${TulipMajorVersion}${TulipVersionSeparator}${TulipMinorVersion}${TulipVersionSeparator}${TulipReleaseVersion}")
SET(TulipMMVersion "${TulipMajorVersion}${TulipVersionSeparator}${TulipMinorVersion}")
SET(TulipIntVersion "${TulipMajorVersion}${TulipMinorVersion}${TulipReleaseVersion}")

## -----------------------------------------------------------------------------------------------
## Lib names
## -----------------------------------------------------------------------------------------------
SET(LibTulipName "tulip-${TulipMMVersion}")
SET(LibTulipOglName "tulip-ogl-${TulipMMVersion}")
SET(LibTulipQtName "tulip-qt4-${TulipMMVersion}")
SET(LibTulipOGDFName "tulip-ogdf-${TulipMMVersion}")
SET(LibTulipPluginsManagerName "tulip-pluginsmanager-${TulipMMVersion}")
SET(LibStlPythonName "stlpython")
SET(LibTulipPythonName "tulippython")
SET(LibTulipOglPythonName "tulipoglpython")
SET(LibTulipQtPythonName "tulipqtpython")

## -----------------------------------------------------------------------------------------------
## Special compilation mode when building Ubuntu packages through a PPA
## -----------------------------------------------------------------------------------------------

SET(UBUNTU_PPA_BUILD OFF CACHE INTERNAL "")


## -----------------------------------------------------------------------------------------------
## Find need packages
## -----------------------------------------------------------------------------------------------
FIND_PACKAGE(Freetype REQUIRED)
FIND_PACKAGE(Qt4 4.6.0 REQUIRED)
INCLUDE(${QT_USE_FILE})
IF(DEFINED CMAKE_VERSION)
  SET(HAVE_QT4_GET_MOC_FLAGS TRUE)
ELSE(DEFINED CMAKE_VERSION)
  MACRO (QT4_GET_MOC_FLAGS _moc_flags)
     SET(${_moc_flags})
     GET_DIRECTORY_PROPERTY(_inc_DIRS INCLUDE_DIRECTORIES)

     FOREACH(_current ${_inc_DIRS})
        SET(${_moc_flags} ${${_moc_flags}} "-I${_current}")
     ENDFOREACH(_current ${_inc_DIRS})

     GET_DIRECTORY_PROPERTY(_defines COMPILE_DEFINITIONS)
     FOREACH(_current ${_defines})
        SET(${_moc_flags} ${${_moc_flags}} "-D${_current}")
     ENDFOREACH(_current ${_defines})

     IF(Q_WS_WIN)
       SET(${_moc_flags} ${${_moc_flags}} -DWIN32)
     ENDIF(Q_WS_WIN)

  ENDMACRO(QT4_GET_MOC_FLAGS)
ENDIF(DEFINED CMAKE_VERSION)
FIND_PACKAGE(OpenGL REQUIRED)
FIND_PACKAGE(JPEG REQUIRED)
IF(JPEG_FOUND)
   SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DHAVE_LIBJPEG")
ENDIF(JPEG_FOUND)
FIND_PACKAGE(PNG REQUIRED)
IF(PNG_FOUND)
   SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DHAVE_LIBPNG")
ENDIF(PNG_FOUND)

INCLUDE(FindGLEW.cmake)
IF(NOT GLEW_FOUND)
   message(FATAL_ERROR "Cannot find the GLEW library (required)")
ENDIF(NOT GLEW_FOUND)
INCLUDE(FindXML2.cmake)
IF(NOT LIBXML2_FOUND)
   message(FATAL_ERROR "Cannot find the XML2 library (required)")
ENDIF(NOT LIBXML2_FOUND)

## -----------------------------------------------------------------------------------------------
## OpenMP
## -----------------------------------------------------------------------------------------------

FIND_PACKAGE (Threads)
FIND_PACKAGE(OpenMP QUIET)
IF(OPENMP_FOUND)
   SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} ${OpenMP_CXX_FLAGS}")
   SET(OPENMP_CXX_FLAGS "${OpenMP_CXX_FLAGS}")
   IF(WIN32)
	  IF(MSVC)
		SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /openmp")
		SET(OPENMP_CXX_FLAGS "/openmp")
	  ELSE()
		SET(CMAKE_CXX_STANDARD_LIBRARIES "${CMAKE_CXX_STANDARD_LIBRARIES} -lgomp ${CMAKE_THREAD_LIBS_INIT}")
		SET(OPENMP_LIBRARIES "-lgomp -lpthread")
	  ENDIF()
   ENDIF()
ELSE(OPENMP_FOUND)
  IF(WIN32)
   STRING(COMPARE NOTEQUAL "${OpenMP_C_FLAGS}" "" OMP_CFLAGS)
   IF(OMP_CFLAGS)
      ## HACK: do not know why OpenMP_CXX_FLAGS
      ## is not set when running on window ?
      SET(CMAKE_CXX_FLAGS_RELEASES "${CMAKE_CXX_FLAGS_RELEASE} ${OpenMP_C_FLAGS}")
      SET(OPENMP_CXX_FLAGS "${OpenMP_C_FLAGS}")
      SET(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} ${OpenMP_C_FLAGS}")
      SET(OPENMP_LINKER_FLAGS "${OpenMP_C_FLAGS}")
      SET(CMAKE_CXX_STANDARD_LIBRARIES "${CMAKE_CXX_STANDARD_LIBRARIES} -lgomp -lpthread")
      SET(OPENMP_LIBRARIES "-lgomp -lpthread")
      SET(OPENMP_FOUND TRUE)
   ELSE(OMP_CFLAGS)
      MESSAGE("OpenMP not found: multithreaded code will not be used")
   ENDIF(OMP_CFLAGS)
  ELSE(WIN32)
    MESSAGE("OpenMP not found: multithreaded code will not be used")
  ENDIF(WIN32)
ENDIF(OPENMP_FOUND)

## -----------------------------------------------------------------------------------------------
## Python (not required)
## -----------------------------------------------------------------------------------------------

# Try to find Python (interpreter and library) in the first place
# If Python is present, try to find if SIP and its dev tools are installed on the host system.
# If not, compile the SIP version located in thirdparty.

FIND_PACKAGE(PythonInterp)

IF(PYTHONINTERP_FOUND)
    EXECUTE_PROCESS(COMMAND ${PYTHON_EXECUTABLE} --version
                    ERROR_VARIABLE PYTHON_VERSION_RAW)
    STRING(REPLACE "\n" "" PYTHON_VERSION_RAW "${PYTHON_VERSION_RAW}")
    STRING(REGEX MATCH "[0-9]\\.[0-9]"
           PYTHON_VERSION "${PYTHON_VERSION_RAW}")

    # Find the Python library with the same version as the interpreter
    # Starting Python 3.2, the library is suffixed by mu, also handle that case
    SET(Python_ADDITIONAL_VERSIONS ${PYTHON_VERSION}mu ${PYTHON_VERSION})
    FIND_PACKAGE(PythonLibs)

    IF(PYTHONLIBS_FOUND)
        SET(COMPILE_TULIP_QT_PYTHON_BINDINGS OFF CACHE BOOL "Enable the compilation of tulip-qt Python bindings (requires PyQt4, experimental and not documented)")
        SET(SIP_OK FALSE CACHE INTERNAL "")
        FIND_PACKAGE(SIP)
        SET(SIP_OK ${SIP_FOUND})
        IF (SIP_OK)
            SET(SIP_EXE "${SIP_EXECUTABLE}")
            SET(SYSTEM_SIP TRUE)
        ELSE(SIP_OK)
            SET(SIP_LIB sip)
            SET(SYSTEM_SIP FALSE)
            TRY_COMPILE(SIP_OK ${CMAKE_CURRENT_BINARY_DIR}/thirdparty/sip-4.13.2/sipgen ${CMAKE_CURRENT_SOURCE_DIR}/thirdparty/sip-4.13.2/sipgen sip CMAKE_FLAGS -DCMAKE_OSX_ARCHITECTURES=${CMAKE_OSX_ARCHITECTURES})
            IF(SIP_OK)
                SET(SIP_VERSION_STR "4.13.2")
                IF(WIN32 AND EXISTS "${CMAKE_CURRENT_BINARY_DIR}/thirdparty/sip-4.13.2/sipgen/Debug/sip.exe")
                    SET(SIP_EXE ${CMAKE_CURRENT_BINARY_DIR}/thirdparty/sip-4.13.2/sipgen/Debug/sip.exe)
                ELSE()
                    SET(SIP_EXE ${CMAKE_CURRENT_BINARY_DIR}/thirdparty/sip-4.13.2/sipgen/sip)
                ENDIF()
                SET(SIP_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/thirdparty/sip-4.13.2/siplib)
            ENDIF(SIP_OK)
        ENDIF(SIP_OK)
        SET(Sphinx_DIR ${CMAKE_CURRENT_SOURCE_DIR}/docs/python)
        MARK_AS_ADVANCED(Sphinx_DIR)
        FIND_PACKAGE(Sphinx)
    ENDIF(PYTHONLIBS_FOUND)
ENDIF(PYTHONINTERP_FOUND)

## -----------------------------------------------------------------------------------------------
## Include file paths
## -----------------------------------------------------------------------------------------------
SET(GZStreamInclude ${PROJECT_SOURCE_DIR}/thirdparty/gzstream)
SET(GZStreamLibrary gzstream)
SET(OGDFInclude ${PROJECT_SOURCE_DIR}/thirdparty/OGDF)
SET(OGDFLibrary OGDF)
IF(UBUNTU_PPA_BUILD)
  FIND_PACKAGE(FTGL)  
  SET(FTGLInclude ${FTGL_INCLUDE_DIR})
ELSE()
  SET(FTGLInclude ${PROJECT_SOURCE_DIR}/thirdparty/ftgl)
ENDIF()
SET(QHULLInclude ${PROJECT_SOURCE_DIR}/thirdparty/)

SET(TulipInclude ${PROJECT_SOURCE_DIR}/library/tulip/include)
SET(TulipBuildInclude ${PROJECT_BINARY_DIR}/library/tulip/include)
SET(TulipOGLInclude ${PROJECT_SOURCE_DIR}/library/tulip-ogl/include)
SET(TulipOGDFInclude ${PROJECT_SOURCE_DIR}/library/tulip-ogdf)
SET(TulipQtInclude ${PROJECT_SOURCE_DIR}/library/tulip-qt/include)
SET(TulipQtBuildInclude ${PROJECT_BINARY_DIR}/library/tulip-qt/include)
SET(TulipPluginsManagerInclude ${PROJECT_SOURCE_DIR}/software/plugins-manager/include)

## -----------------------------------------------------------------------------------------------
## Install paths
## -----------------------------------------------------------------------------------------------
IF(APPLE)
SET(TulipAppleContentsDir Tulip-${TulipVersion}.app/Contents)
SET(TulipBinInstallDir ${TulipAppleContentsDir}/MacOS)
SET(TulipLibInstallDir ${TulipAppleContentsDir}/Frameworks)
SET(TulipIncludeInstallDir ${TulipAppleContentsDir}/include)
SET(TulipShareInstallDir ${TulipAppleContentsDir}/share/tulip)
SET(TulipPluginsInstallDir ${TulipAppleContentsDir}/lib/tulip)
SET(TulipBitmapInstallDir ${TulipShareInstallDir}/bitmaps)
SET(TulipAppleResourcesDir ${TulipAppleContentsDir}/Resources)
ELSE()
SET(TulipLibInstallDir lib)
SET(TulipPluginsInstallDir ${TulipLibInstallDir}/tulip)
SET(TulipBinInstallDir bin)
SET(TulipIncludeInstallDir include)
SET(TulipShareInstallDir share/tulip)
SET(TulipBitmapInstallDir ${TulipShareInstallDir}/bitmaps)
ENDIF()

## -----------------------------------------------------------------------------------------------
## Set UseTulip file name
## -----------------------------------------------------------------------------------------------
SET(TulipUseFile UseTulip.cmake)

## -----------------------------------------------------------------------------------------------
## Disable deprecated compilation output
## -----------------------------------------------------------------------------------------------
if (DEFINED NO_DEPRECATED)
   SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-deprecated")
endif (DEFINED NO_DEPRECATED)

## -----------------------------------------------------------------------------------------------
## Disable process to make MainController plugin (for developpers)
## -----------------------------------------------------------------------------------------------
SET(TULIP_USE_MAIN_CONTROLLER ON CACHE BOOL "Link Main controller plugin")
IF(NOT TULIP_USE_MAIN_CONTROLLER)
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DWITHOUT_MAIN_CONTROLLER")
ENDIF(NOT TULIP_USE_MAIN_CONTROLLER)

## -----------------------------------------------------------------------------------------------
## Disable process to make MainController plugin (for developpers)
## -----------------------------------------------------------------------------------------------
SET(TULIP_USE_QT_PICTURE_OUTPUT ON CACHE BOOL "Use Qt picture output")
IF(NOT TULIP_USE_QT_PICTURE_OUTPUT)
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DWITHOUT_QT_PICTURE_OUTPUT")
ENDIF(NOT TULIP_USE_QT_PICTURE_OUTPUT)

## -----------------------------------------------------------------------------------------------
## Enable process to make generation of plugins informations for server (for developpers)
## -----------------------------------------------------------------------------------------------
SET(TULIP_SERVER_GENERATION OFF CACHE BOOL "Enable process to make generation of plugins informations for server (for developpers)")

## -----------------------------------------------------------------------------------------------
## Define NDEBUG when we are in release mode
## -----------------------------------------------------------------------------------------------
SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -DNDEBUG")

## -----------------------------------------------------------------------------------------------
## Windows, Apple and Linux
## -----------------------------------------------------------------------------------------------
EXEC_PROGRAM(uname OUTPUT_VARIABLE UNAME_OUT)
STRING(COMPARE EQUAL "${UNAME_OUT}" "Linux" LINUX)
IF(NOT LINUX)
  STRING(COMPARE EQUAL "${UNAME_OUT}" "GNU/kFreeBSD" LINUX)
ENDIF(NOT LINUX)
IF(LINUX)
   SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -D_LINUX")
   SET(shared_lib_suffix "so")
ENDIF(LINUX)

IF(WIN32)
   SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -D_WIN32 -DQT_ASSISTANT='\"assistant\"'")
   SET(shared_lib_suffix "dll")
   IF(MSVC)
          #tells VS to use multiple threads to compile
      SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /MP")
          #makes VS define M_PI
      SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -D_USE_MATH_DEFINES")
          #prevents VS to define min and max macros (name clash with std::min and std::max)
          SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DNOMINMAX")

          #SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /arch:SSE2")
          #SET(CMAKE_CXX_LINK_FLAGS "${CMAKE_CXX_LINK_FLAGS} /NODEFAULTLIB:MSVCRT")
          #SET(CMAKE_CXX_LINK_FLAGS "${CMAKE_CXX_LINK_FLAGS} /MACHINE:X86")

          #allows for link time optimization
          #SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /GL")
          #link time optimization
          #SET(CMAKE_SHARED_LINK_FLAGS "${CMAKE_CXX_LINK_FLAGS} /LTCG")
   ENDIF()
ENDIF(WIN32)
IF(APPLE)
   SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -D__APPLE__ -DQT_ASSISTANT='\"Assistant\"'")
   SET(shared_lib_suffix "dylib")
ENDIF(APPLE)
IF(LINUX)
   SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DQT_ASSISTANT='\"assistant\"'")
ENDIF(LINUX)

## -----------------------------------------------------------------------------------------------
## Enable memory checks (disable openmp)
## -----------------------------------------------------------------------------------------------
IF(LINUX)
  OPTION(CHECK_MEMORY "Overload new and delete operators to check for memory leaks (This option can't be enabled along with OpenMP debugging)" OFF)
  IF(CHECK_MEMORY)
    SET(CHECK_MEMORY_FLAGS "-include ${CMAKE_SOURCE_DIR}/library/tulip/include/tulip/MemoryChecker.h")
  ENDIF(CHECK_MEMORY)
ENDIF(LINUX)

## -----------------------------------------------------------------------------------------------
## Enable debugging of OpenMP
## -----------------------------------------------------------------------------------------------
IF(OPENMP_FOUND AND CMAKE_DEBUG_MODE AND NOT CHECK_MEMORY)
  SET(DEBUG_OPENMP OFF CACHE BOOL "Do you want to enable OpenMP in Debug mode ? [OFF|ON]")
  IF(DEBUG_OPENMP)
    SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} ${OPENMP_CXX_FLAGS}")
    SET(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} ${OPENMP_LINKER_FLAGS}")
    SET(CMAKE_CXX_STANDARD_LIBRARIES "${CMAKE_CXX_STANDARD_LIBRARIES} ${OPENMP_LIBRARIES}")
  ENDIF(DEBUG_OPENMP)
ENDIF(OPENMP_FOUND AND CMAKE_DEBUG_MODE AND NOT CHECK_MEMORY)

## -----------------------------------------------------------------------------------------------
## Enable output of rendering time
## only if OpenMP is enabled
## -----------------------------------------------------------------------------------------------
IF(OPENMP_FOUND AND ((NOT CMAKE_DEBUG_MODE) OR DEBUG_OPENMP))
  SET(ENABLE_RENDERING_TIME_DISPLAY OFF CACHE BOOL "Do you want to enable the rendering time display ? [OFF|ON]")
ENDIF(OPENMP_FOUND AND ((NOT CMAKE_DEBUG_MODE) OR DEBUG_OPENMP))

## -----------------------------------------------------------------------------------------------
## Builds the unit tests
## -----------------------------------------------------------------------------------------------
SET(BUILD_TESTS OFF CACHE BOOL "Do you want to build the tests ? [OFF|ON]")

## -----------------------------------------------------------------------------------------------
## Check 64 bits
## -----------------------------------------------------------------------------------------------
EXEC_PROGRAM(uname ARGS "-m" OUTPUT_VARIABLE UNAME_OUT)
STRING(COMPARE EQUAL "${UNAME_OUT}" "x86_64" I64)
IF(NOT I64)
  STRING(COMPARE EQUAL "${UNAME_OUT}" "ia64" I64)
ENDIF(NOT I64)
IF(NOT I64)
  STRING(COMPARE EQUAL "${UNAME_OUT}" "Power Macintosh" MACPPC)
ENDIF(NOT I64)
IF(I64)
  SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DI64")
ENDIF(I64)
IF(MACPPC)
  SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DMACPPC")
ENDIF(MACPPC)

## -----------------------------------------------------------------------------------------------
## Create library/tulip/include/tulip/TulipRelease.h base on TulipRelease.h.in
## -----------------------------------------------------------------------------------------------
IF( NOT MSVC)
SET(TulipBuildIsRelease 0)
STRING(COMPARE EQUAL "${CMAKE_BUILD_TYPE}" "Release" rel_build)
IF(${rel_build})
  SET(TulipBuildIsRelease 1)
ELSE()
  STRING(COMPARE EQUAL "${CMAKE_BUILD_TYPE}" "RelWithDebInfo" rel_build)
  IF(${rel_build})
    SET(TulipBuildIsRelease 1)
  ENDIF()
ENDIF()
ENDIF()

CONFIGURE_FILE("library/tulip/include/tulip/TulipRelease.h.in" "library/tulip/include/tulip/TulipRelease.h")

## -----------------------------------------------------------------------------------------------
## Include macro definitions
## -----------------------------------------------------------------------------------------------
INCLUDE(CMakeMacros.cmake)

## -----------------------------------------------------------------------------------------------
## Sub dir (no comment)
## -----------------------------------------------------------------------------------------------
IF(BUILD_TESTS)
   SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fprofile-arcs -ftest-coverage")
   SET(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -fprofile-arcs -ftest-coverage")
   SET(CMAKE_MODULE_LINKER_FLAGS "${CMAKE_MODULE_LINKER_FLAGS} -fprofile-arcs -ftest-coverage")
   SET(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} -fprofile-arcs -ftest-coverage")
  INCLUDE(CTest)
  ADD_SUBDIRECTORY(unit_test)
ENDIF()

ADD_SUBDIRECTORY(thirdparty)
ADD_SUBDIRECTORY(library)
ADD_SUBDIRECTORY(software)
ADD_SUBDIRECTORY(plugins)
ADD_SUBDIRECTORY(textures)
ADD_SUBDIRECTORY(externalplugins)

ADD_SUBDIRECTORY(docs)

## -----------------------------------------------------------------------------------------------
## Set var to create tulip-config script
## -----------------------------------------------------------------------------------------------
SET(prefix "${CMAKE_INSTALL_PREFIX}")
SET(exec_prefix "\${prefix}")
SET(includedir "\${prefix}/${TulipIncludeInstallDir}")
SET(libdir "\${prefix}/${TulipLibInstallDir}")
SET(libversion "${TulipMMVersion}")
SET(VERSION "${TulipVersion}")
SET(WIN_VERSION "${TulipMajorVersion}.${TulipMinorVersion}")
SET(QT_CPPFLAGS "-DQT_MINOR_REL=${QT_VERSION_MINOR}")

IF("${OPENGL_INCLUDE_DIR}" STRGREATER "")
SET(GL_INCLUDES "-I${OPENGL_INCLUDE_DIR}")
ENDIF("${OPENGL_INCLUDE_DIR}" STRGREATER "")

IF(WIN32)
SET(GL_LDFLAGS "-l${OPENGL_gl_LIBRARY} -l${OPENGL_glu_LIBRARY} ${GLEW_LIBRARY}")
ELSE(WIN32)
SET(GL_LDFLAGS "${OPENGL_gl_LIBRARY} ${OPENGL_glu_LIBRARY} ${GLEW_LIBRARY}")
ENDIF(WIN32)

SET(QT_LDFLAGS "${QT_QTCORE_LIBRARY_RELEASE} ${QT_QTGUI_LIBRARY_RELEASE} ${QT_QTOPENGL_LIBRARY_RELEASE} ${QT_QTXML_LIBRARY_RELEASE} ${QT_QTNETWORK_LIBRARY_RELEASE} ${QT_QTWEBKIT_LIBRARY_RELEASE}")

# on MACOSX QT_INCLUDE_DIR=QT_HEADERS_DIR;QT_CORE_INCLUDE_DIR
IF(QT_USE_FRAMEWORKS)
SET(QT_INCLUDES "-I${QT_HEADERS_DIR}")
ELSE(QT_USE_FRAMEWORKS)
SET(QT_INCLUDES "-I${QT_INCLUDE_DIR}")
ENDIF(QT_USE_FRAMEWORKS)

CONFIGURE_FILE("tulip-config.in" "tulip-config" @ONLY)

## -----------------------------------------------------------------------------------------------
## Installation of files
## -----------------------------------------------------------------------------------------------
INSTALL(PROGRAMS ${PROJECT_BINARY_DIR}/tulip-config
        DESTINATION ${TulipBinInstallDir}
	COMPONENT libtulip_dev)
INSTALL(FILES FindTULIP3.cmake 
        DESTINATION ${TulipShareInstallDir} COMPONENT libtulip_dev)
INSTALL(FILES FindGLEW.cmake 
        DESTINATION ${TulipShareInstallDir} COMPONENT libtulip_dev)
INSTALL(FILES FindXML2.cmake 
        DESTINATION ${TulipShareInstallDir} COMPONENT libtulip_dev)

IF(UBUNTU_PPA_BUILD)
INSTALL(FILES FindTULIP3.cmake 
        DESTINATION share/cmake-${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION}/Modules
	COMPONENT libtulip_dev)
INSTALL(FILES tulip.desktop 
        DESTINATION share/applications
	COMPONENT tulip)
INSTALL(FILES TulipIcon.png 
        DESTINATION share/pixmaps
	COMPONENT tulip)
ENDIF()



## -----------------------------------------------------------------------------------------------
## Script for linux Tulip bundle building
IF(LINUX)
CONFIGURE_FILE("make_tulip_linux_bundle.sh.in" "make_tulip_linux_bundle.sh" @ONLY)
ENDIF(LINUX)

## -----------------------------------------------------------------------------------------------
## CPack packaging directives
## -----------------------------------------------------------------------------------------------

# You can create your own installer by creating a setting the CPACK_CUSTOM_INSTALLER to true.
# If this variable is not set, directives in the CPackInstaller.cmake file will be used to set the project licence, maintainer etc.
# When making your own installer, please be sure to set at least all the variables present in the CPackInstaller.cmake file.
# Consult CPack documentation for additional information.

IF(NOT CPACK_CUSTOM_INSTALLER)
  SET(LIBS_GROUP_NAME "Libraries")
  SET(HEADERS_GROUP_NAME "Headers")
  SET(SOFTWARE_GROUP_NAME "Runtime")
  SET(PLUGINS_GROUP_NAME "Plugins")
  SET(EXTRAS_GROUP_NAME "Extras")
  SET(THIRDPARTY_GROUP_NAME "Third party")
ELSE()
  # In case a custom installer is set, all the base tulip software components will be in the same group.
  SET(LIBS_GROUP_NAME "Tulip software")
  SET(HEADERS_GROUP_NAME "Tulip software")
  SET(SOFTWARE_GROUP_NAME "Tulip software")
  SET(PLUGINS_GROUP_NAME "Tulip software")
  SET(EXTRAS_GROUP_NAME "Tulip software")
  SET(THIRDPARTY_GROUP_NAME "Tulip software")
ENDIF()

# Defines specific software components from tulip.
INCLUDE(CPackComponents.cmake)

# Include external plugins configuration file.
# Note: this is done before setting group names variables. User can set the CPACK_CUSTOM_INSTALLER to true and setup its own installer in this file.
  FILE(GLOB CM_FILES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR}/externalplugins ${CMAKE_CURRENT_SOURCE_DIR}/externalplugins/*/ExternalPlugins.cmake)  
  FOREACH(CM_FILE ${CM_FILES})
	INCLUDE(${CMAKE_CURRENT_SOURCE_DIR}/externalplugins/${CM_FILES})
  ENDFOREACH(CM_FILE)

IF(NOT CPACK_CUSTOM_INSTALLER)
  INCLUDE(CPackInstaller.cmake)
ENDIF()

SET(ENABLE_DPUT_TARGET OFF CACHE INTERNAL "")

INCLUDE(CPack)
IF(LINUX AND ENABLE_DPUT_TARGET)
INCLUDE(UploadPPA.cmake)
ENDIF()
