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
CMAKE_SOURCE_DIR = /home/kdbanman/Desktop/tulip-3.8.0-src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kdbanman/Desktop/tulip-3.8.0-src/build

# Include any dependencies generated for this target.
include plugins/clustering/CMakeFiles/EqualValueClustering-3.8.0.dir/depend.make

# Include the progress variables for this target.
include plugins/clustering/CMakeFiles/EqualValueClustering-3.8.0.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/clustering/CMakeFiles/EqualValueClustering-3.8.0.dir/flags.make

plugins/clustering/CMakeFiles/EqualValueClustering-3.8.0.dir/EqualValueClustering.cpp.o: plugins/clustering/CMakeFiles/EqualValueClustering-3.8.0.dir/flags.make
plugins/clustering/CMakeFiles/EqualValueClustering-3.8.0.dir/EqualValueClustering.cpp.o: ../plugins/clustering/EqualValueClustering.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/kdbanman/Desktop/tulip-3.8.0-src/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/clustering/CMakeFiles/EqualValueClustering-3.8.0.dir/EqualValueClustering.cpp.o"
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/plugins/clustering && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/EqualValueClustering-3.8.0.dir/EqualValueClustering.cpp.o -c /home/kdbanman/Desktop/tulip-3.8.0-src/plugins/clustering/EqualValueClustering.cpp

plugins/clustering/CMakeFiles/EqualValueClustering-3.8.0.dir/EqualValueClustering.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EqualValueClustering-3.8.0.dir/EqualValueClustering.cpp.i"
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/plugins/clustering && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/kdbanman/Desktop/tulip-3.8.0-src/plugins/clustering/EqualValueClustering.cpp > CMakeFiles/EqualValueClustering-3.8.0.dir/EqualValueClustering.cpp.i

plugins/clustering/CMakeFiles/EqualValueClustering-3.8.0.dir/EqualValueClustering.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EqualValueClustering-3.8.0.dir/EqualValueClustering.cpp.s"
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/plugins/clustering && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/kdbanman/Desktop/tulip-3.8.0-src/plugins/clustering/EqualValueClustering.cpp -o CMakeFiles/EqualValueClustering-3.8.0.dir/EqualValueClustering.cpp.s

plugins/clustering/CMakeFiles/EqualValueClustering-3.8.0.dir/EqualValueClustering.cpp.o.requires:
.PHONY : plugins/clustering/CMakeFiles/EqualValueClustering-3.8.0.dir/EqualValueClustering.cpp.o.requires

plugins/clustering/CMakeFiles/EqualValueClustering-3.8.0.dir/EqualValueClustering.cpp.o.provides: plugins/clustering/CMakeFiles/EqualValueClustering-3.8.0.dir/EqualValueClustering.cpp.o.requires
	$(MAKE) -f plugins/clustering/CMakeFiles/EqualValueClustering-3.8.0.dir/build.make plugins/clustering/CMakeFiles/EqualValueClustering-3.8.0.dir/EqualValueClustering.cpp.o.provides.build
.PHONY : plugins/clustering/CMakeFiles/EqualValueClustering-3.8.0.dir/EqualValueClustering.cpp.o.provides

plugins/clustering/CMakeFiles/EqualValueClustering-3.8.0.dir/EqualValueClustering.cpp.o.provides.build: plugins/clustering/CMakeFiles/EqualValueClustering-3.8.0.dir/EqualValueClustering.cpp.o

# Object files for target EqualValueClustering-3.8.0
EqualValueClustering__3_8_0_OBJECTS = \
"CMakeFiles/EqualValueClustering-3.8.0.dir/EqualValueClustering.cpp.o"

# External object files for target EqualValueClustering-3.8.0
EqualValueClustering__3_8_0_EXTERNAL_OBJECTS =

plugins/clustering/libEqualValueClustering-3.8.0.so: plugins/clustering/CMakeFiles/EqualValueClustering-3.8.0.dir/EqualValueClustering.cpp.o
plugins/clustering/libEqualValueClustering-3.8.0.so: library/tulip/src/libtulip-3.8.so
plugins/clustering/libEqualValueClustering-3.8.0.so: thirdparty/gzstream/libgzstream.so
plugins/clustering/libEqualValueClustering-3.8.0.so: /usr/lib/x86_64-linux-gnu/libz.so
plugins/clustering/libEqualValueClustering-3.8.0.so: thirdparty/libqhull/libqhull.a
plugins/clustering/libEqualValueClustering-3.8.0.so: plugins/clustering/CMakeFiles/EqualValueClustering-3.8.0.dir/build.make
plugins/clustering/libEqualValueClustering-3.8.0.so: plugins/clustering/CMakeFiles/EqualValueClustering-3.8.0.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library libEqualValueClustering-3.8.0.so"
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/plugins/clustering && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/EqualValueClustering-3.8.0.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/clustering/CMakeFiles/EqualValueClustering-3.8.0.dir/build: plugins/clustering/libEqualValueClustering-3.8.0.so
.PHONY : plugins/clustering/CMakeFiles/EqualValueClustering-3.8.0.dir/build

plugins/clustering/CMakeFiles/EqualValueClustering-3.8.0.dir/requires: plugins/clustering/CMakeFiles/EqualValueClustering-3.8.0.dir/EqualValueClustering.cpp.o.requires
.PHONY : plugins/clustering/CMakeFiles/EqualValueClustering-3.8.0.dir/requires

plugins/clustering/CMakeFiles/EqualValueClustering-3.8.0.dir/clean:
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/plugins/clustering && $(CMAKE_COMMAND) -P CMakeFiles/EqualValueClustering-3.8.0.dir/cmake_clean.cmake
.PHONY : plugins/clustering/CMakeFiles/EqualValueClustering-3.8.0.dir/clean

plugins/clustering/CMakeFiles/EqualValueClustering-3.8.0.dir/depend:
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kdbanman/Desktop/tulip-3.8.0-src /home/kdbanman/Desktop/tulip-3.8.0-src/plugins/clustering /home/kdbanman/Desktop/tulip-3.8.0-src/build /home/kdbanman/Desktop/tulip-3.8.0-src/build/plugins/clustering /home/kdbanman/Desktop/tulip-3.8.0-src/build/plugins/clustering/CMakeFiles/EqualValueClustering-3.8.0.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/clustering/CMakeFiles/EqualValueClustering-3.8.0.dir/depend

