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
include plugins/glyph/CMakeFiles/GlowSphere-3.8.0.dir/depend.make

# Include the progress variables for this target.
include plugins/glyph/CMakeFiles/GlowSphere-3.8.0.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/glyph/CMakeFiles/GlowSphere-3.8.0.dir/flags.make

plugins/glyph/CMakeFiles/GlowSphere-3.8.0.dir/glowsphere.cpp.o: plugins/glyph/CMakeFiles/GlowSphere-3.8.0.dir/flags.make
plugins/glyph/CMakeFiles/GlowSphere-3.8.0.dir/glowsphere.cpp.o: ../plugins/glyph/glowsphere.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/kdbanman/browseRDF/tulip-3.8.0-src/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/glyph/CMakeFiles/GlowSphere-3.8.0.dir/glowsphere.cpp.o"
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/glyph && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/GlowSphere-3.8.0.dir/glowsphere.cpp.o -c /home/kdbanman/browseRDF/tulip-3.8.0-src/plugins/glyph/glowsphere.cpp

plugins/glyph/CMakeFiles/GlowSphere-3.8.0.dir/glowsphere.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GlowSphere-3.8.0.dir/glowsphere.cpp.i"
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/glyph && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/kdbanman/browseRDF/tulip-3.8.0-src/plugins/glyph/glowsphere.cpp > CMakeFiles/GlowSphere-3.8.0.dir/glowsphere.cpp.i

plugins/glyph/CMakeFiles/GlowSphere-3.8.0.dir/glowsphere.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GlowSphere-3.8.0.dir/glowsphere.cpp.s"
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/glyph && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/kdbanman/browseRDF/tulip-3.8.0-src/plugins/glyph/glowsphere.cpp -o CMakeFiles/GlowSphere-3.8.0.dir/glowsphere.cpp.s

plugins/glyph/CMakeFiles/GlowSphere-3.8.0.dir/glowsphere.cpp.o.requires:
.PHONY : plugins/glyph/CMakeFiles/GlowSphere-3.8.0.dir/glowsphere.cpp.o.requires

plugins/glyph/CMakeFiles/GlowSphere-3.8.0.dir/glowsphere.cpp.o.provides: plugins/glyph/CMakeFiles/GlowSphere-3.8.0.dir/glowsphere.cpp.o.requires
	$(MAKE) -f plugins/glyph/CMakeFiles/GlowSphere-3.8.0.dir/build.make plugins/glyph/CMakeFiles/GlowSphere-3.8.0.dir/glowsphere.cpp.o.provides.build
.PHONY : plugins/glyph/CMakeFiles/GlowSphere-3.8.0.dir/glowsphere.cpp.o.provides

plugins/glyph/CMakeFiles/GlowSphere-3.8.0.dir/glowsphere.cpp.o.provides.build: plugins/glyph/CMakeFiles/GlowSphere-3.8.0.dir/glowsphere.cpp.o

# Object files for target GlowSphere-3.8.0
GlowSphere__3_8_0_OBJECTS = \
"CMakeFiles/GlowSphere-3.8.0.dir/glowsphere.cpp.o"

# External object files for target GlowSphere-3.8.0
GlowSphere__3_8_0_EXTERNAL_OBJECTS =

plugins/glyph/libGlowSphere-3.8.0.so: plugins/glyph/CMakeFiles/GlowSphere-3.8.0.dir/glowsphere.cpp.o
plugins/glyph/libGlowSphere-3.8.0.so: library/tulip/src/libtulip-3.8.so
plugins/glyph/libGlowSphere-3.8.0.so: library/tulip-ogl/src/libtulip-ogl-3.8.so
plugins/glyph/libGlowSphere-3.8.0.so: library/tulip/src/libtulip-3.8.so
plugins/glyph/libGlowSphere-3.8.0.so: thirdparty/gzstream/libgzstream.so
plugins/glyph/libGlowSphere-3.8.0.so: /usr/lib/x86_64-linux-gnu/libz.so
plugins/glyph/libGlowSphere-3.8.0.so: thirdparty/libqhull/libqhull.a
plugins/glyph/libGlowSphere-3.8.0.so: thirdparty/ftgl/libftgl.so
plugins/glyph/libGlowSphere-3.8.0.so: /usr/lib/x86_64-linux-gnu/libGLEW.so
plugins/glyph/libGlowSphere-3.8.0.so: /usr/lib/x86_64-linux-gnu/libGLU.so
plugins/glyph/libGlowSphere-3.8.0.so: /usr/lib/x86_64-linux-gnu/libGL.so
plugins/glyph/libGlowSphere-3.8.0.so: /usr/lib/x86_64-linux-gnu/libxml2.so
plugins/glyph/libGlowSphere-3.8.0.so: /usr/lib/x86_64-linux-gnu/libjpeg.so
plugins/glyph/libGlowSphere-3.8.0.so: /usr/lib/x86_64-linux-gnu/libpng.so
plugins/glyph/libGlowSphere-3.8.0.so: /usr/lib/x86_64-linux-gnu/libfreetype.so
plugins/glyph/libGlowSphere-3.8.0.so: plugins/glyph/CMakeFiles/GlowSphere-3.8.0.dir/build.make
plugins/glyph/libGlowSphere-3.8.0.so: plugins/glyph/CMakeFiles/GlowSphere-3.8.0.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library libGlowSphere-3.8.0.so"
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/glyph && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/GlowSphere-3.8.0.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/glyph/CMakeFiles/GlowSphere-3.8.0.dir/build: plugins/glyph/libGlowSphere-3.8.0.so
.PHONY : plugins/glyph/CMakeFiles/GlowSphere-3.8.0.dir/build

plugins/glyph/CMakeFiles/GlowSphere-3.8.0.dir/requires: plugins/glyph/CMakeFiles/GlowSphere-3.8.0.dir/glowsphere.cpp.o.requires
.PHONY : plugins/glyph/CMakeFiles/GlowSphere-3.8.0.dir/requires

plugins/glyph/CMakeFiles/GlowSphere-3.8.0.dir/clean:
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/glyph && $(CMAKE_COMMAND) -P CMakeFiles/GlowSphere-3.8.0.dir/cmake_clean.cmake
.PHONY : plugins/glyph/CMakeFiles/GlowSphere-3.8.0.dir/clean

plugins/glyph/CMakeFiles/GlowSphere-3.8.0.dir/depend:
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kdbanman/browseRDF/tulip-3.8.0-src /home/kdbanman/browseRDF/tulip-3.8.0-src/plugins/glyph /home/kdbanman/browseRDF/tulip-3.8.0-src/build /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/glyph /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/glyph/CMakeFiles/GlowSphere-3.8.0.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/glyph/CMakeFiles/GlowSphere-3.8.0.dir/depend

