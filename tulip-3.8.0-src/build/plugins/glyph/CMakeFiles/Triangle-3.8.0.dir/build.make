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
CMAKE_SOURCE_DIR = /home/kirbybanman/browseRDF/tulip-3.8.0-src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kirbybanman/browseRDF/tulip-3.8.0-src/build

# Include any dependencies generated for this target.
include plugins/glyph/CMakeFiles/Triangle-3.8.0.dir/depend.make

# Include the progress variables for this target.
include plugins/glyph/CMakeFiles/Triangle-3.8.0.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/glyph/CMakeFiles/Triangle-3.8.0.dir/flags.make

plugins/glyph/CMakeFiles/Triangle-3.8.0.dir/triangle.cpp.o: plugins/glyph/CMakeFiles/Triangle-3.8.0.dir/flags.make
plugins/glyph/CMakeFiles/Triangle-3.8.0.dir/triangle.cpp.o: ../plugins/glyph/triangle.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/kirbybanman/browseRDF/tulip-3.8.0-src/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/glyph/CMakeFiles/Triangle-3.8.0.dir/triangle.cpp.o"
	cd /home/kirbybanman/browseRDF/tulip-3.8.0-src/build/plugins/glyph && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Triangle-3.8.0.dir/triangle.cpp.o -c /home/kirbybanman/browseRDF/tulip-3.8.0-src/plugins/glyph/triangle.cpp

plugins/glyph/CMakeFiles/Triangle-3.8.0.dir/triangle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Triangle-3.8.0.dir/triangle.cpp.i"
	cd /home/kirbybanman/browseRDF/tulip-3.8.0-src/build/plugins/glyph && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/kirbybanman/browseRDF/tulip-3.8.0-src/plugins/glyph/triangle.cpp > CMakeFiles/Triangle-3.8.0.dir/triangle.cpp.i

plugins/glyph/CMakeFiles/Triangle-3.8.0.dir/triangle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Triangle-3.8.0.dir/triangle.cpp.s"
	cd /home/kirbybanman/browseRDF/tulip-3.8.0-src/build/plugins/glyph && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/kirbybanman/browseRDF/tulip-3.8.0-src/plugins/glyph/triangle.cpp -o CMakeFiles/Triangle-3.8.0.dir/triangle.cpp.s

plugins/glyph/CMakeFiles/Triangle-3.8.0.dir/triangle.cpp.o.requires:
.PHONY : plugins/glyph/CMakeFiles/Triangle-3.8.0.dir/triangle.cpp.o.requires

plugins/glyph/CMakeFiles/Triangle-3.8.0.dir/triangle.cpp.o.provides: plugins/glyph/CMakeFiles/Triangle-3.8.0.dir/triangle.cpp.o.requires
	$(MAKE) -f plugins/glyph/CMakeFiles/Triangle-3.8.0.dir/build.make plugins/glyph/CMakeFiles/Triangle-3.8.0.dir/triangle.cpp.o.provides.build
.PHONY : plugins/glyph/CMakeFiles/Triangle-3.8.0.dir/triangle.cpp.o.provides

plugins/glyph/CMakeFiles/Triangle-3.8.0.dir/triangle.cpp.o.provides.build: plugins/glyph/CMakeFiles/Triangle-3.8.0.dir/triangle.cpp.o

# Object files for target Triangle-3.8.0
Triangle__3_8_0_OBJECTS = \
"CMakeFiles/Triangle-3.8.0.dir/triangle.cpp.o"

# External object files for target Triangle-3.8.0
Triangle__3_8_0_EXTERNAL_OBJECTS =

plugins/glyph/libTriangle-3.8.0.so: plugins/glyph/CMakeFiles/Triangle-3.8.0.dir/triangle.cpp.o
plugins/glyph/libTriangle-3.8.0.so: library/tulip/src/libtulip-3.8.so
plugins/glyph/libTriangle-3.8.0.so: library/tulip-ogl/src/libtulip-ogl-3.8.so
plugins/glyph/libTriangle-3.8.0.so: library/tulip/src/libtulip-3.8.so
plugins/glyph/libTriangle-3.8.0.so: thirdparty/gzstream/libgzstream.so
plugins/glyph/libTriangle-3.8.0.so: /usr/lib/x86_64-linux-gnu/libz.so
plugins/glyph/libTriangle-3.8.0.so: thirdparty/libqhull/libqhull.a
plugins/glyph/libTriangle-3.8.0.so: thirdparty/ftgl/libftgl.so
plugins/glyph/libTriangle-3.8.0.so: /usr/lib/x86_64-linux-gnu/libGLEW.so
plugins/glyph/libTriangle-3.8.0.so: /usr/lib/x86_64-linux-gnu/libGLU.so
plugins/glyph/libTriangle-3.8.0.so: /usr/lib/x86_64-linux-gnu/libGL.so
plugins/glyph/libTriangle-3.8.0.so: /usr/lib/x86_64-linux-gnu/libxml2.so
plugins/glyph/libTriangle-3.8.0.so: /usr/lib/x86_64-linux-gnu/libjpeg.so
plugins/glyph/libTriangle-3.8.0.so: /usr/lib/x86_64-linux-gnu/libpng.so
plugins/glyph/libTriangle-3.8.0.so: /usr/lib/x86_64-linux-gnu/libfreetype.so
plugins/glyph/libTriangle-3.8.0.so: plugins/glyph/CMakeFiles/Triangle-3.8.0.dir/build.make
plugins/glyph/libTriangle-3.8.0.so: plugins/glyph/CMakeFiles/Triangle-3.8.0.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library libTriangle-3.8.0.so"
	cd /home/kirbybanman/browseRDF/tulip-3.8.0-src/build/plugins/glyph && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Triangle-3.8.0.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/glyph/CMakeFiles/Triangle-3.8.0.dir/build: plugins/glyph/libTriangle-3.8.0.so
.PHONY : plugins/glyph/CMakeFiles/Triangle-3.8.0.dir/build

plugins/glyph/CMakeFiles/Triangle-3.8.0.dir/requires: plugins/glyph/CMakeFiles/Triangle-3.8.0.dir/triangle.cpp.o.requires
.PHONY : plugins/glyph/CMakeFiles/Triangle-3.8.0.dir/requires

plugins/glyph/CMakeFiles/Triangle-3.8.0.dir/clean:
	cd /home/kirbybanman/browseRDF/tulip-3.8.0-src/build/plugins/glyph && $(CMAKE_COMMAND) -P CMakeFiles/Triangle-3.8.0.dir/cmake_clean.cmake
.PHONY : plugins/glyph/CMakeFiles/Triangle-3.8.0.dir/clean

plugins/glyph/CMakeFiles/Triangle-3.8.0.dir/depend:
	cd /home/kirbybanman/browseRDF/tulip-3.8.0-src/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kirbybanman/browseRDF/tulip-3.8.0-src /home/kirbybanman/browseRDF/tulip-3.8.0-src/plugins/glyph /home/kirbybanman/browseRDF/tulip-3.8.0-src/build /home/kirbybanman/browseRDF/tulip-3.8.0-src/build/plugins/glyph /home/kirbybanman/browseRDF/tulip-3.8.0-src/build/plugins/glyph/CMakeFiles/Triangle-3.8.0.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/glyph/CMakeFiles/Triangle-3.8.0.dir/depend

