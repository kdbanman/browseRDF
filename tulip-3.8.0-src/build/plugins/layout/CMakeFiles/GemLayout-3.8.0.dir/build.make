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
include plugins/layout/CMakeFiles/GemLayout-3.8.0.dir/depend.make

# Include the progress variables for this target.
include plugins/layout/CMakeFiles/GemLayout-3.8.0.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/layout/CMakeFiles/GemLayout-3.8.0.dir/flags.make

plugins/layout/CMakeFiles/GemLayout-3.8.0.dir/GEMLayout.cpp.o: plugins/layout/CMakeFiles/GemLayout-3.8.0.dir/flags.make
plugins/layout/CMakeFiles/GemLayout-3.8.0.dir/GEMLayout.cpp.o: ../plugins/layout/GEMLayout.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/kdbanman/browseRDF/tulip-3.8.0-src/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/layout/CMakeFiles/GemLayout-3.8.0.dir/GEMLayout.cpp.o"
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/layout && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/GemLayout-3.8.0.dir/GEMLayout.cpp.o -c /home/kdbanman/browseRDF/tulip-3.8.0-src/plugins/layout/GEMLayout.cpp

plugins/layout/CMakeFiles/GemLayout-3.8.0.dir/GEMLayout.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GemLayout-3.8.0.dir/GEMLayout.cpp.i"
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/layout && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/kdbanman/browseRDF/tulip-3.8.0-src/plugins/layout/GEMLayout.cpp > CMakeFiles/GemLayout-3.8.0.dir/GEMLayout.cpp.i

plugins/layout/CMakeFiles/GemLayout-3.8.0.dir/GEMLayout.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GemLayout-3.8.0.dir/GEMLayout.cpp.s"
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/layout && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/kdbanman/browseRDF/tulip-3.8.0-src/plugins/layout/GEMLayout.cpp -o CMakeFiles/GemLayout-3.8.0.dir/GEMLayout.cpp.s

plugins/layout/CMakeFiles/GemLayout-3.8.0.dir/GEMLayout.cpp.o.requires:
.PHONY : plugins/layout/CMakeFiles/GemLayout-3.8.0.dir/GEMLayout.cpp.o.requires

plugins/layout/CMakeFiles/GemLayout-3.8.0.dir/GEMLayout.cpp.o.provides: plugins/layout/CMakeFiles/GemLayout-3.8.0.dir/GEMLayout.cpp.o.requires
	$(MAKE) -f plugins/layout/CMakeFiles/GemLayout-3.8.0.dir/build.make plugins/layout/CMakeFiles/GemLayout-3.8.0.dir/GEMLayout.cpp.o.provides.build
.PHONY : plugins/layout/CMakeFiles/GemLayout-3.8.0.dir/GEMLayout.cpp.o.provides

plugins/layout/CMakeFiles/GemLayout-3.8.0.dir/GEMLayout.cpp.o.provides.build: plugins/layout/CMakeFiles/GemLayout-3.8.0.dir/GEMLayout.cpp.o

# Object files for target GemLayout-3.8.0
GemLayout__3_8_0_OBJECTS = \
"CMakeFiles/GemLayout-3.8.0.dir/GEMLayout.cpp.o"

# External object files for target GemLayout-3.8.0
GemLayout__3_8_0_EXTERNAL_OBJECTS =

plugins/layout/libGemLayout-3.8.0.so: plugins/layout/CMakeFiles/GemLayout-3.8.0.dir/GEMLayout.cpp.o
plugins/layout/libGemLayout-3.8.0.so: library/tulip/src/libtulip-3.8.so
plugins/layout/libGemLayout-3.8.0.so: thirdparty/gzstream/libgzstream.so
plugins/layout/libGemLayout-3.8.0.so: /usr/lib/x86_64-linux-gnu/libz.so
plugins/layout/libGemLayout-3.8.0.so: thirdparty/libqhull/libqhull.a
plugins/layout/libGemLayout-3.8.0.so: plugins/layout/CMakeFiles/GemLayout-3.8.0.dir/build.make
plugins/layout/libGemLayout-3.8.0.so: plugins/layout/CMakeFiles/GemLayout-3.8.0.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library libGemLayout-3.8.0.so"
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/layout && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/GemLayout-3.8.0.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/layout/CMakeFiles/GemLayout-3.8.0.dir/build: plugins/layout/libGemLayout-3.8.0.so
.PHONY : plugins/layout/CMakeFiles/GemLayout-3.8.0.dir/build

plugins/layout/CMakeFiles/GemLayout-3.8.0.dir/requires: plugins/layout/CMakeFiles/GemLayout-3.8.0.dir/GEMLayout.cpp.o.requires
.PHONY : plugins/layout/CMakeFiles/GemLayout-3.8.0.dir/requires

plugins/layout/CMakeFiles/GemLayout-3.8.0.dir/clean:
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/layout && $(CMAKE_COMMAND) -P CMakeFiles/GemLayout-3.8.0.dir/cmake_clean.cmake
.PHONY : plugins/layout/CMakeFiles/GemLayout-3.8.0.dir/clean

plugins/layout/CMakeFiles/GemLayout-3.8.0.dir/depend:
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kdbanman/browseRDF/tulip-3.8.0-src /home/kdbanman/browseRDF/tulip-3.8.0-src/plugins/layout /home/kdbanman/browseRDF/tulip-3.8.0-src/build /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/layout /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/layout/CMakeFiles/GemLayout-3.8.0.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/layout/CMakeFiles/GemLayout-3.8.0.dir/depend

