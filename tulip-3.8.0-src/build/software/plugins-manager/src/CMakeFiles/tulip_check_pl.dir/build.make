# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/kdbanman/browseRDF/tulip-3.8.0-src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kdbanman/browseRDF/tulip-3.8.0-src/build

# Include any dependencies generated for this target.
include software/plugins-manager/src/CMakeFiles/tulip_check_pl.dir/depend.make

# Include the progress variables for this target.
include software/plugins-manager/src/CMakeFiles/tulip_check_pl.dir/progress.make

# Include the compile flags for this target's objects.
include software/plugins-manager/src/CMakeFiles/tulip_check_pl.dir/flags.make

software/plugins-manager/src/CMakeFiles/tulip_check_pl.dir/TulipCheckPluginLoad.cpp.o: software/plugins-manager/src/CMakeFiles/tulip_check_pl.dir/flags.make
software/plugins-manager/src/CMakeFiles/tulip_check_pl.dir/TulipCheckPluginLoad.cpp.o: ../software/plugins-manager/src/TulipCheckPluginLoad.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/kdbanman/browseRDF/tulip-3.8.0-src/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object software/plugins-manager/src/CMakeFiles/tulip_check_pl.dir/TulipCheckPluginLoad.cpp.o"
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build/software/plugins-manager/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/tulip_check_pl.dir/TulipCheckPluginLoad.cpp.o -c /home/kdbanman/browseRDF/tulip-3.8.0-src/software/plugins-manager/src/TulipCheckPluginLoad.cpp

software/plugins-manager/src/CMakeFiles/tulip_check_pl.dir/TulipCheckPluginLoad.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tulip_check_pl.dir/TulipCheckPluginLoad.cpp.i"
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build/software/plugins-manager/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/kdbanman/browseRDF/tulip-3.8.0-src/software/plugins-manager/src/TulipCheckPluginLoad.cpp > CMakeFiles/tulip_check_pl.dir/TulipCheckPluginLoad.cpp.i

software/plugins-manager/src/CMakeFiles/tulip_check_pl.dir/TulipCheckPluginLoad.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tulip_check_pl.dir/TulipCheckPluginLoad.cpp.s"
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build/software/plugins-manager/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/kdbanman/browseRDF/tulip-3.8.0-src/software/plugins-manager/src/TulipCheckPluginLoad.cpp -o CMakeFiles/tulip_check_pl.dir/TulipCheckPluginLoad.cpp.s

software/plugins-manager/src/CMakeFiles/tulip_check_pl.dir/TulipCheckPluginLoad.cpp.o.requires:
.PHONY : software/plugins-manager/src/CMakeFiles/tulip_check_pl.dir/TulipCheckPluginLoad.cpp.o.requires

software/plugins-manager/src/CMakeFiles/tulip_check_pl.dir/TulipCheckPluginLoad.cpp.o.provides: software/plugins-manager/src/CMakeFiles/tulip_check_pl.dir/TulipCheckPluginLoad.cpp.o.requires
	$(MAKE) -f software/plugins-manager/src/CMakeFiles/tulip_check_pl.dir/build.make software/plugins-manager/src/CMakeFiles/tulip_check_pl.dir/TulipCheckPluginLoad.cpp.o.provides.build
.PHONY : software/plugins-manager/src/CMakeFiles/tulip_check_pl.dir/TulipCheckPluginLoad.cpp.o.provides

software/plugins-manager/src/CMakeFiles/tulip_check_pl.dir/TulipCheckPluginLoad.cpp.o.provides.build: software/plugins-manager/src/CMakeFiles/tulip_check_pl.dir/TulipCheckPluginLoad.cpp.o

# Object files for target tulip_check_pl
tulip_check_pl_OBJECTS = \
"CMakeFiles/tulip_check_pl.dir/TulipCheckPluginLoad.cpp.o"

# External object files for target tulip_check_pl
tulip_check_pl_EXTERNAL_OBJECTS =

software/plugins-manager/src/tulip_check_pl: software/plugins-manager/src/CMakeFiles/tulip_check_pl.dir/TulipCheckPluginLoad.cpp.o
software/plugins-manager/src/tulip_check_pl: library/tulip/src/libtulip-3.8.so
software/plugins-manager/src/tulip_check_pl: library/tulip-qt/src/libtulip-qt4-3.8.so
software/plugins-manager/src/tulip_check_pl: software/plugins-manager/src/libtulip-pluginsmanager-3.8.a
software/plugins-manager/src/tulip_check_pl: /usr/lib/x86_64-linux-gnu/libQtOpenGL.so
software/plugins-manager/src/tulip_check_pl: /usr/lib/x86_64-linux-gnu/libQtGui.so
software/plugins-manager/src/tulip_check_pl: /usr/lib/x86_64-linux-gnu/libQtCore.so
software/plugins-manager/src/tulip_check_pl: library/tulip-ogl/src/libtulip-ogl-3.8.so
software/plugins-manager/src/tulip_check_pl: library/tulip/src/libtulip-3.8.so
software/plugins-manager/src/tulip_check_pl: thirdparty/gzstream/libgzstream.so
software/plugins-manager/src/tulip_check_pl: /usr/lib/x86_64-linux-gnu/libz.so
software/plugins-manager/src/tulip_check_pl: thirdparty/libqhull/libqhull.a
software/plugins-manager/src/tulip_check_pl: /usr/lib/x86_64-linux-gnu/libGLEW.so
software/plugins-manager/src/tulip_check_pl: thirdparty/ftgl/libftgl.so
software/plugins-manager/src/tulip_check_pl: /usr/lib/x86_64-linux-gnu/libGLU.so
software/plugins-manager/src/tulip_check_pl: /usr/lib/x86_64-linux-gnu/libGL.so
software/plugins-manager/src/tulip_check_pl: /usr/lib/x86_64-linux-gnu/libxml2.so
software/plugins-manager/src/tulip_check_pl: /usr/lib/x86_64-linux-gnu/libjpeg.so
software/plugins-manager/src/tulip_check_pl: /usr/lib/x86_64-linux-gnu/libpng.so
software/plugins-manager/src/tulip_check_pl: /usr/lib/x86_64-linux-gnu/libfreetype.so
software/plugins-manager/src/tulip_check_pl: /usr/lib/x86_64-linux-gnu/libQtNetwork.so
software/plugins-manager/src/tulip_check_pl: software/plugins-manager/src/CMakeFiles/tulip_check_pl.dir/build.make
software/plugins-manager/src/tulip_check_pl: software/plugins-manager/src/CMakeFiles/tulip_check_pl.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable tulip_check_pl"
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build/software/plugins-manager/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tulip_check_pl.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
software/plugins-manager/src/CMakeFiles/tulip_check_pl.dir/build: software/plugins-manager/src/tulip_check_pl
.PHONY : software/plugins-manager/src/CMakeFiles/tulip_check_pl.dir/build

software/plugins-manager/src/CMakeFiles/tulip_check_pl.dir/requires: software/plugins-manager/src/CMakeFiles/tulip_check_pl.dir/TulipCheckPluginLoad.cpp.o.requires
.PHONY : software/plugins-manager/src/CMakeFiles/tulip_check_pl.dir/requires

software/plugins-manager/src/CMakeFiles/tulip_check_pl.dir/clean:
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build/software/plugins-manager/src && $(CMAKE_COMMAND) -P CMakeFiles/tulip_check_pl.dir/cmake_clean.cmake
.PHONY : software/plugins-manager/src/CMakeFiles/tulip_check_pl.dir/clean

software/plugins-manager/src/CMakeFiles/tulip_check_pl.dir/depend:
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kdbanman/browseRDF/tulip-3.8.0-src /home/kdbanman/browseRDF/tulip-3.8.0-src/software/plugins-manager/src /home/kdbanman/browseRDF/tulip-3.8.0-src/build /home/kdbanman/browseRDF/tulip-3.8.0-src/build/software/plugins-manager/src /home/kdbanman/browseRDF/tulip-3.8.0-src/build/software/plugins-manager/src/CMakeFiles/tulip_check_pl.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : software/plugins-manager/src/CMakeFiles/tulip_check_pl.dir/depend

