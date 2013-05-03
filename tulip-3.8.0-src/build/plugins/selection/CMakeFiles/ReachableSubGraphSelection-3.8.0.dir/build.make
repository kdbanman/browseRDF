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
include plugins/selection/CMakeFiles/ReachableSubGraphSelection-3.8.0.dir/depend.make

# Include the progress variables for this target.
include plugins/selection/CMakeFiles/ReachableSubGraphSelection-3.8.0.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/selection/CMakeFiles/ReachableSubGraphSelection-3.8.0.dir/flags.make

plugins/selection/CMakeFiles/ReachableSubGraphSelection-3.8.0.dir/ReachableSubGraphSelection.cpp.o: plugins/selection/CMakeFiles/ReachableSubGraphSelection-3.8.0.dir/flags.make
plugins/selection/CMakeFiles/ReachableSubGraphSelection-3.8.0.dir/ReachableSubGraphSelection.cpp.o: ../plugins/selection/ReachableSubGraphSelection.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/kdbanman/browseRDF/tulip-3.8.0-src/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/selection/CMakeFiles/ReachableSubGraphSelection-3.8.0.dir/ReachableSubGraphSelection.cpp.o"
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/selection && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/ReachableSubGraphSelection-3.8.0.dir/ReachableSubGraphSelection.cpp.o -c /home/kdbanman/browseRDF/tulip-3.8.0-src/plugins/selection/ReachableSubGraphSelection.cpp

plugins/selection/CMakeFiles/ReachableSubGraphSelection-3.8.0.dir/ReachableSubGraphSelection.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ReachableSubGraphSelection-3.8.0.dir/ReachableSubGraphSelection.cpp.i"
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/selection && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/kdbanman/browseRDF/tulip-3.8.0-src/plugins/selection/ReachableSubGraphSelection.cpp > CMakeFiles/ReachableSubGraphSelection-3.8.0.dir/ReachableSubGraphSelection.cpp.i

plugins/selection/CMakeFiles/ReachableSubGraphSelection-3.8.0.dir/ReachableSubGraphSelection.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ReachableSubGraphSelection-3.8.0.dir/ReachableSubGraphSelection.cpp.s"
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/selection && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/kdbanman/browseRDF/tulip-3.8.0-src/plugins/selection/ReachableSubGraphSelection.cpp -o CMakeFiles/ReachableSubGraphSelection-3.8.0.dir/ReachableSubGraphSelection.cpp.s

plugins/selection/CMakeFiles/ReachableSubGraphSelection-3.8.0.dir/ReachableSubGraphSelection.cpp.o.requires:
.PHONY : plugins/selection/CMakeFiles/ReachableSubGraphSelection-3.8.0.dir/ReachableSubGraphSelection.cpp.o.requires

plugins/selection/CMakeFiles/ReachableSubGraphSelection-3.8.0.dir/ReachableSubGraphSelection.cpp.o.provides: plugins/selection/CMakeFiles/ReachableSubGraphSelection-3.8.0.dir/ReachableSubGraphSelection.cpp.o.requires
	$(MAKE) -f plugins/selection/CMakeFiles/ReachableSubGraphSelection-3.8.0.dir/build.make plugins/selection/CMakeFiles/ReachableSubGraphSelection-3.8.0.dir/ReachableSubGraphSelection.cpp.o.provides.build
.PHONY : plugins/selection/CMakeFiles/ReachableSubGraphSelection-3.8.0.dir/ReachableSubGraphSelection.cpp.o.provides

plugins/selection/CMakeFiles/ReachableSubGraphSelection-3.8.0.dir/ReachableSubGraphSelection.cpp.o.provides.build: plugins/selection/CMakeFiles/ReachableSubGraphSelection-3.8.0.dir/ReachableSubGraphSelection.cpp.o

# Object files for target ReachableSubGraphSelection-3.8.0
ReachableSubGraphSelection__3_8_0_OBJECTS = \
"CMakeFiles/ReachableSubGraphSelection-3.8.0.dir/ReachableSubGraphSelection.cpp.o"

# External object files for target ReachableSubGraphSelection-3.8.0
ReachableSubGraphSelection__3_8_0_EXTERNAL_OBJECTS =

plugins/selection/libReachableSubGraphSelection-3.8.0.so: plugins/selection/CMakeFiles/ReachableSubGraphSelection-3.8.0.dir/ReachableSubGraphSelection.cpp.o
plugins/selection/libReachableSubGraphSelection-3.8.0.so: library/tulip/src/libtulip-3.8.so
plugins/selection/libReachableSubGraphSelection-3.8.0.so: thirdparty/gzstream/libgzstream.so
plugins/selection/libReachableSubGraphSelection-3.8.0.so: /usr/lib/x86_64-linux-gnu/libz.so
plugins/selection/libReachableSubGraphSelection-3.8.0.so: thirdparty/libqhull/libqhull.a
plugins/selection/libReachableSubGraphSelection-3.8.0.so: plugins/selection/CMakeFiles/ReachableSubGraphSelection-3.8.0.dir/build.make
plugins/selection/libReachableSubGraphSelection-3.8.0.so: plugins/selection/CMakeFiles/ReachableSubGraphSelection-3.8.0.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library libReachableSubGraphSelection-3.8.0.so"
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/selection && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ReachableSubGraphSelection-3.8.0.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/selection/CMakeFiles/ReachableSubGraphSelection-3.8.0.dir/build: plugins/selection/libReachableSubGraphSelection-3.8.0.so
.PHONY : plugins/selection/CMakeFiles/ReachableSubGraphSelection-3.8.0.dir/build

plugins/selection/CMakeFiles/ReachableSubGraphSelection-3.8.0.dir/requires: plugins/selection/CMakeFiles/ReachableSubGraphSelection-3.8.0.dir/ReachableSubGraphSelection.cpp.o.requires
.PHONY : plugins/selection/CMakeFiles/ReachableSubGraphSelection-3.8.0.dir/requires

plugins/selection/CMakeFiles/ReachableSubGraphSelection-3.8.0.dir/clean:
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/selection && $(CMAKE_COMMAND) -P CMakeFiles/ReachableSubGraphSelection-3.8.0.dir/cmake_clean.cmake
.PHONY : plugins/selection/CMakeFiles/ReachableSubGraphSelection-3.8.0.dir/clean

plugins/selection/CMakeFiles/ReachableSubGraphSelection-3.8.0.dir/depend:
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kdbanman/browseRDF/tulip-3.8.0-src /home/kdbanman/browseRDF/tulip-3.8.0-src/plugins/selection /home/kdbanman/browseRDF/tulip-3.8.0-src/build /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/selection /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/selection/CMakeFiles/ReachableSubGraphSelection-3.8.0.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/selection/CMakeFiles/ReachableSubGraphSelection-3.8.0.dir/depend

