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
include plugins/sizes/CMakeFiles/FitToLabels-3.8.0.dir/depend.make

# Include the progress variables for this target.
include plugins/sizes/CMakeFiles/FitToLabels-3.8.0.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/sizes/CMakeFiles/FitToLabels-3.8.0.dir/flags.make

plugins/sizes/CMakeFiles/FitToLabels-3.8.0.dir/FitToLabel.cpp.o: plugins/sizes/CMakeFiles/FitToLabels-3.8.0.dir/flags.make
plugins/sizes/CMakeFiles/FitToLabels-3.8.0.dir/FitToLabel.cpp.o: ../plugins/sizes/FitToLabel.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/kdbanman/browseRDF/tulip-3.8.0-src/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/sizes/CMakeFiles/FitToLabels-3.8.0.dir/FitToLabel.cpp.o"
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/sizes && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/FitToLabels-3.8.0.dir/FitToLabel.cpp.o -c /home/kdbanman/browseRDF/tulip-3.8.0-src/plugins/sizes/FitToLabel.cpp

plugins/sizes/CMakeFiles/FitToLabels-3.8.0.dir/FitToLabel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FitToLabels-3.8.0.dir/FitToLabel.cpp.i"
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/sizes && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/kdbanman/browseRDF/tulip-3.8.0-src/plugins/sizes/FitToLabel.cpp > CMakeFiles/FitToLabels-3.8.0.dir/FitToLabel.cpp.i

plugins/sizes/CMakeFiles/FitToLabels-3.8.0.dir/FitToLabel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FitToLabels-3.8.0.dir/FitToLabel.cpp.s"
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/sizes && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/kdbanman/browseRDF/tulip-3.8.0-src/plugins/sizes/FitToLabel.cpp -o CMakeFiles/FitToLabels-3.8.0.dir/FitToLabel.cpp.s

plugins/sizes/CMakeFiles/FitToLabels-3.8.0.dir/FitToLabel.cpp.o.requires:
.PHONY : plugins/sizes/CMakeFiles/FitToLabels-3.8.0.dir/FitToLabel.cpp.o.requires

plugins/sizes/CMakeFiles/FitToLabels-3.8.0.dir/FitToLabel.cpp.o.provides: plugins/sizes/CMakeFiles/FitToLabels-3.8.0.dir/FitToLabel.cpp.o.requires
	$(MAKE) -f plugins/sizes/CMakeFiles/FitToLabels-3.8.0.dir/build.make plugins/sizes/CMakeFiles/FitToLabels-3.8.0.dir/FitToLabel.cpp.o.provides.build
.PHONY : plugins/sizes/CMakeFiles/FitToLabels-3.8.0.dir/FitToLabel.cpp.o.provides

plugins/sizes/CMakeFiles/FitToLabels-3.8.0.dir/FitToLabel.cpp.o.provides.build: plugins/sizes/CMakeFiles/FitToLabels-3.8.0.dir/FitToLabel.cpp.o

# Object files for target FitToLabels-3.8.0
FitToLabels__3_8_0_OBJECTS = \
"CMakeFiles/FitToLabels-3.8.0.dir/FitToLabel.cpp.o"

# External object files for target FitToLabels-3.8.0
FitToLabels__3_8_0_EXTERNAL_OBJECTS =

plugins/sizes/libFitToLabels-3.8.0.so: plugins/sizes/CMakeFiles/FitToLabels-3.8.0.dir/FitToLabel.cpp.o
plugins/sizes/libFitToLabels-3.8.0.so: library/tulip/src/libtulip-3.8.so
plugins/sizes/libFitToLabels-3.8.0.so: library/tulip-ogl/src/libtulip-ogl-3.8.so
plugins/sizes/libFitToLabels-3.8.0.so: library/tulip/src/libtulip-3.8.so
plugins/sizes/libFitToLabels-3.8.0.so: thirdparty/gzstream/libgzstream.so
plugins/sizes/libFitToLabels-3.8.0.so: /usr/lib/x86_64-linux-gnu/libz.so
plugins/sizes/libFitToLabels-3.8.0.so: thirdparty/libqhull/libqhull.a
plugins/sizes/libFitToLabels-3.8.0.so: thirdparty/ftgl/libftgl.so
plugins/sizes/libFitToLabels-3.8.0.so: /usr/lib/x86_64-linux-gnu/libGLEW.so
plugins/sizes/libFitToLabels-3.8.0.so: /usr/lib/x86_64-linux-gnu/libGLU.so
plugins/sizes/libFitToLabels-3.8.0.so: /usr/lib/x86_64-linux-gnu/libGL.so
plugins/sizes/libFitToLabels-3.8.0.so: /usr/lib/x86_64-linux-gnu/libxml2.so
plugins/sizes/libFitToLabels-3.8.0.so: /usr/lib/x86_64-linux-gnu/libjpeg.so
plugins/sizes/libFitToLabels-3.8.0.so: /usr/lib/x86_64-linux-gnu/libpng.so
plugins/sizes/libFitToLabels-3.8.0.so: /usr/lib/x86_64-linux-gnu/libfreetype.so
plugins/sizes/libFitToLabels-3.8.0.so: plugins/sizes/CMakeFiles/FitToLabels-3.8.0.dir/build.make
plugins/sizes/libFitToLabels-3.8.0.so: plugins/sizes/CMakeFiles/FitToLabels-3.8.0.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library libFitToLabels-3.8.0.so"
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/sizes && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/FitToLabels-3.8.0.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/sizes/CMakeFiles/FitToLabels-3.8.0.dir/build: plugins/sizes/libFitToLabels-3.8.0.so
.PHONY : plugins/sizes/CMakeFiles/FitToLabels-3.8.0.dir/build

plugins/sizes/CMakeFiles/FitToLabels-3.8.0.dir/requires: plugins/sizes/CMakeFiles/FitToLabels-3.8.0.dir/FitToLabel.cpp.o.requires
.PHONY : plugins/sizes/CMakeFiles/FitToLabels-3.8.0.dir/requires

plugins/sizes/CMakeFiles/FitToLabels-3.8.0.dir/clean:
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/sizes && $(CMAKE_COMMAND) -P CMakeFiles/FitToLabels-3.8.0.dir/cmake_clean.cmake
.PHONY : plugins/sizes/CMakeFiles/FitToLabels-3.8.0.dir/clean

plugins/sizes/CMakeFiles/FitToLabels-3.8.0.dir/depend:
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kdbanman/browseRDF/tulip-3.8.0-src /home/kdbanman/browseRDF/tulip-3.8.0-src/plugins/sizes /home/kdbanman/browseRDF/tulip-3.8.0-src/build /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/sizes /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/sizes/CMakeFiles/FitToLabels-3.8.0.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/sizes/CMakeFiles/FitToLabels-3.8.0.dir/depend

