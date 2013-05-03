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
include plugins/clustering/CMakeFiles/QuotientClustering-3.8.0.dir/depend.make

# Include the progress variables for this target.
include plugins/clustering/CMakeFiles/QuotientClustering-3.8.0.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/clustering/CMakeFiles/QuotientClustering-3.8.0.dir/flags.make

plugins/clustering/CMakeFiles/QuotientClustering-3.8.0.dir/QuotientClustering.cpp.o: plugins/clustering/CMakeFiles/QuotientClustering-3.8.0.dir/flags.make
plugins/clustering/CMakeFiles/QuotientClustering-3.8.0.dir/QuotientClustering.cpp.o: ../plugins/clustering/QuotientClustering.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/kdbanman/browseRDF/tulip-3.8.0-src/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/clustering/CMakeFiles/QuotientClustering-3.8.0.dir/QuotientClustering.cpp.o"
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/clustering && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/QuotientClustering-3.8.0.dir/QuotientClustering.cpp.o -c /home/kdbanman/browseRDF/tulip-3.8.0-src/plugins/clustering/QuotientClustering.cpp

plugins/clustering/CMakeFiles/QuotientClustering-3.8.0.dir/QuotientClustering.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/QuotientClustering-3.8.0.dir/QuotientClustering.cpp.i"
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/clustering && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/kdbanman/browseRDF/tulip-3.8.0-src/plugins/clustering/QuotientClustering.cpp > CMakeFiles/QuotientClustering-3.8.0.dir/QuotientClustering.cpp.i

plugins/clustering/CMakeFiles/QuotientClustering-3.8.0.dir/QuotientClustering.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/QuotientClustering-3.8.0.dir/QuotientClustering.cpp.s"
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/clustering && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/kdbanman/browseRDF/tulip-3.8.0-src/plugins/clustering/QuotientClustering.cpp -o CMakeFiles/QuotientClustering-3.8.0.dir/QuotientClustering.cpp.s

plugins/clustering/CMakeFiles/QuotientClustering-3.8.0.dir/QuotientClustering.cpp.o.requires:
.PHONY : plugins/clustering/CMakeFiles/QuotientClustering-3.8.0.dir/QuotientClustering.cpp.o.requires

plugins/clustering/CMakeFiles/QuotientClustering-3.8.0.dir/QuotientClustering.cpp.o.provides: plugins/clustering/CMakeFiles/QuotientClustering-3.8.0.dir/QuotientClustering.cpp.o.requires
	$(MAKE) -f plugins/clustering/CMakeFiles/QuotientClustering-3.8.0.dir/build.make plugins/clustering/CMakeFiles/QuotientClustering-3.8.0.dir/QuotientClustering.cpp.o.provides.build
.PHONY : plugins/clustering/CMakeFiles/QuotientClustering-3.8.0.dir/QuotientClustering.cpp.o.provides

plugins/clustering/CMakeFiles/QuotientClustering-3.8.0.dir/QuotientClustering.cpp.o.provides.build: plugins/clustering/CMakeFiles/QuotientClustering-3.8.0.dir/QuotientClustering.cpp.o

# Object files for target QuotientClustering-3.8.0
QuotientClustering__3_8_0_OBJECTS = \
"CMakeFiles/QuotientClustering-3.8.0.dir/QuotientClustering.cpp.o"

# External object files for target QuotientClustering-3.8.0
QuotientClustering__3_8_0_EXTERNAL_OBJECTS =

plugins/clustering/libQuotientClustering-3.8.0.so: plugins/clustering/CMakeFiles/QuotientClustering-3.8.0.dir/QuotientClustering.cpp.o
plugins/clustering/libQuotientClustering-3.8.0.so: library/tulip/src/libtulip-3.8.so
plugins/clustering/libQuotientClustering-3.8.0.so: thirdparty/gzstream/libgzstream.so
plugins/clustering/libQuotientClustering-3.8.0.so: /usr/lib/x86_64-linux-gnu/libz.so
plugins/clustering/libQuotientClustering-3.8.0.so: thirdparty/libqhull/libqhull.a
plugins/clustering/libQuotientClustering-3.8.0.so: plugins/clustering/CMakeFiles/QuotientClustering-3.8.0.dir/build.make
plugins/clustering/libQuotientClustering-3.8.0.so: plugins/clustering/CMakeFiles/QuotientClustering-3.8.0.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library libQuotientClustering-3.8.0.so"
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/clustering && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/QuotientClustering-3.8.0.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/clustering/CMakeFiles/QuotientClustering-3.8.0.dir/build: plugins/clustering/libQuotientClustering-3.8.0.so
.PHONY : plugins/clustering/CMakeFiles/QuotientClustering-3.8.0.dir/build

plugins/clustering/CMakeFiles/QuotientClustering-3.8.0.dir/requires: plugins/clustering/CMakeFiles/QuotientClustering-3.8.0.dir/QuotientClustering.cpp.o.requires
.PHONY : plugins/clustering/CMakeFiles/QuotientClustering-3.8.0.dir/requires

plugins/clustering/CMakeFiles/QuotientClustering-3.8.0.dir/clean:
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/clustering && $(CMAKE_COMMAND) -P CMakeFiles/QuotientClustering-3.8.0.dir/cmake_clean.cmake
.PHONY : plugins/clustering/CMakeFiles/QuotientClustering-3.8.0.dir/clean

plugins/clustering/CMakeFiles/QuotientClustering-3.8.0.dir/depend:
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kdbanman/browseRDF/tulip-3.8.0-src /home/kdbanman/browseRDF/tulip-3.8.0-src/plugins/clustering /home/kdbanman/browseRDF/tulip-3.8.0-src/build /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/clustering /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/clustering/CMakeFiles/QuotientClustering-3.8.0.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/clustering/CMakeFiles/QuotientClustering-3.8.0.dir/depend

