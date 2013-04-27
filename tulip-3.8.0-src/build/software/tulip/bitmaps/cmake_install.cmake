# Install script for directory: /home/kdbanman/Desktop/tulip-3.8.0-src/software/tulip/bitmaps

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

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "tulip")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/tulip/bitmaps" TYPE FILE FILES
    "/home/kdbanman/Desktop/tulip-3.8.0-src/software/tulip/bitmaps/headerlogo.bmp"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/software/tulip/bitmaps/logo32x32.bmp"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/software/tulip/bitmaps/logo.bmp"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/software/tulip/bitmaps/logo32x32.ico"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/software/tulip/bitmaps/welcomelogo.bmp"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/software/tulip/bitmaps/logotulip.jpg"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/software/tulip/bitmaps/logolabri.jpg"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/software/tulip/bitmaps/tex_back.png"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "tulip")

IF(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  INCLUDE("/home/kdbanman/Desktop/tulip-3.8.0-src/build/software/tulip/bitmaps/colorscales/cmake_install.cmake")

ENDIF(NOT CMAKE_INSTALL_LOCAL_ONLY)

