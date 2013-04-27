# Install script for directory: /home/kdbanman/Desktop/tulip-3.8.0-src/software/tulip/bitmaps/colorscales

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/tulip/bitmaps/colorscales" TYPE FILE FILES
    "/home/kdbanman/Desktop/tulip-3.8.0-src/software/tulip/bitmaps/colorscales/BlackPink.png"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/software/tulip/bitmaps/colorscales/BiologicalHeatMap.png"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/software/tulip/bitmaps/colorscales/GreenRed.png"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/software/tulip/bitmaps/colorscales/RedYellow.png"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/software/tulip/bitmaps/colorscales/Temperature.png"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/software/tulip/bitmaps/colorscales/OrangeBlue.png"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/software/tulip/bitmaps/colorscales/MentheGrenadine.png"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/software/tulip/bitmaps/colorscales/BrownCyan.png"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/software/tulip/bitmaps/colorscales/BlueGreenYellow.png"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/software/tulip/bitmaps/colorscales/Rainbow.png"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/software/tulip/bitmaps/colorscales/Brown.png"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/software/tulip/bitmaps/colorscales/Blue.png"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/software/tulip/bitmaps/colorscales/RedBlue.png"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/software/tulip/bitmaps/colorscales/BlackRedYellowWhite.png"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/software/tulip/bitmaps/colorscales/CMYK.png"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/software/tulip/bitmaps/colorscales/Red.png"
    "/home/kdbanman/Desktop/tulip-3.8.0-src/software/tulip/bitmaps/colorscales/Pink.png"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "tulip")

