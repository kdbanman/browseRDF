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
include plugins/metric/CMakeFiles/LeafMetric-3.8.0.dir/depend.make

# Include the progress variables for this target.
include plugins/metric/CMakeFiles/LeafMetric-3.8.0.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/metric/CMakeFiles/LeafMetric-3.8.0.dir/flags.make

plugins/metric/CMakeFiles/LeafMetric-3.8.0.dir/LeafMetric.cpp.o: plugins/metric/CMakeFiles/LeafMetric-3.8.0.dir/flags.make
plugins/metric/CMakeFiles/LeafMetric-3.8.0.dir/LeafMetric.cpp.o: ../plugins/metric/LeafMetric.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/kdbanman/browseRDF/tulip-3.8.0-src/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/metric/CMakeFiles/LeafMetric-3.8.0.dir/LeafMetric.cpp.o"
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/metric && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/LeafMetric-3.8.0.dir/LeafMetric.cpp.o -c /home/kdbanman/browseRDF/tulip-3.8.0-src/plugins/metric/LeafMetric.cpp

plugins/metric/CMakeFiles/LeafMetric-3.8.0.dir/LeafMetric.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LeafMetric-3.8.0.dir/LeafMetric.cpp.i"
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/metric && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/kdbanman/browseRDF/tulip-3.8.0-src/plugins/metric/LeafMetric.cpp > CMakeFiles/LeafMetric-3.8.0.dir/LeafMetric.cpp.i

plugins/metric/CMakeFiles/LeafMetric-3.8.0.dir/LeafMetric.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LeafMetric-3.8.0.dir/LeafMetric.cpp.s"
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/metric && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/kdbanman/browseRDF/tulip-3.8.0-src/plugins/metric/LeafMetric.cpp -o CMakeFiles/LeafMetric-3.8.0.dir/LeafMetric.cpp.s

plugins/metric/CMakeFiles/LeafMetric-3.8.0.dir/LeafMetric.cpp.o.requires:
.PHONY : plugins/metric/CMakeFiles/LeafMetric-3.8.0.dir/LeafMetric.cpp.o.requires

plugins/metric/CMakeFiles/LeafMetric-3.8.0.dir/LeafMetric.cpp.o.provides: plugins/metric/CMakeFiles/LeafMetric-3.8.0.dir/LeafMetric.cpp.o.requires
	$(MAKE) -f plugins/metric/CMakeFiles/LeafMetric-3.8.0.dir/build.make plugins/metric/CMakeFiles/LeafMetric-3.8.0.dir/LeafMetric.cpp.o.provides.build
.PHONY : plugins/metric/CMakeFiles/LeafMetric-3.8.0.dir/LeafMetric.cpp.o.provides

plugins/metric/CMakeFiles/LeafMetric-3.8.0.dir/LeafMetric.cpp.o.provides.build: plugins/metric/CMakeFiles/LeafMetric-3.8.0.dir/LeafMetric.cpp.o

# Object files for target LeafMetric-3.8.0
LeafMetric__3_8_0_OBJECTS = \
"CMakeFiles/LeafMetric-3.8.0.dir/LeafMetric.cpp.o"

# External object files for target LeafMetric-3.8.0
LeafMetric__3_8_0_EXTERNAL_OBJECTS =

plugins/metric/libLeafMetric-3.8.0.so: plugins/metric/CMakeFiles/LeafMetric-3.8.0.dir/LeafMetric.cpp.o
plugins/metric/libLeafMetric-3.8.0.so: library/tulip/src/libtulip-3.8.so
plugins/metric/libLeafMetric-3.8.0.so: thirdparty/gzstream/libgzstream.so
plugins/metric/libLeafMetric-3.8.0.so: /usr/lib/x86_64-linux-gnu/libz.so
plugins/metric/libLeafMetric-3.8.0.so: thirdparty/libqhull/libqhull.a
plugins/metric/libLeafMetric-3.8.0.so: plugins/metric/CMakeFiles/LeafMetric-3.8.0.dir/build.make
plugins/metric/libLeafMetric-3.8.0.so: plugins/metric/CMakeFiles/LeafMetric-3.8.0.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library libLeafMetric-3.8.0.so"
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/metric && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LeafMetric-3.8.0.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/metric/CMakeFiles/LeafMetric-3.8.0.dir/build: plugins/metric/libLeafMetric-3.8.0.so
.PHONY : plugins/metric/CMakeFiles/LeafMetric-3.8.0.dir/build

plugins/metric/CMakeFiles/LeafMetric-3.8.0.dir/requires: plugins/metric/CMakeFiles/LeafMetric-3.8.0.dir/LeafMetric.cpp.o.requires
.PHONY : plugins/metric/CMakeFiles/LeafMetric-3.8.0.dir/requires

plugins/metric/CMakeFiles/LeafMetric-3.8.0.dir/clean:
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/metric && $(CMAKE_COMMAND) -P CMakeFiles/LeafMetric-3.8.0.dir/cmake_clean.cmake
.PHONY : plugins/metric/CMakeFiles/LeafMetric-3.8.0.dir/clean

plugins/metric/CMakeFiles/LeafMetric-3.8.0.dir/depend:
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kdbanman/browseRDF/tulip-3.8.0-src /home/kdbanman/browseRDF/tulip-3.8.0-src/plugins/metric /home/kdbanman/browseRDF/tulip-3.8.0-src/build /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/metric /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/metric/CMakeFiles/LeafMetric-3.8.0.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/metric/CMakeFiles/LeafMetric-3.8.0.dir/depend

