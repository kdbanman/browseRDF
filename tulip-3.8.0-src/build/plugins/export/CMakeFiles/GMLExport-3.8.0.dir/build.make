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
include plugins/export/CMakeFiles/GMLExport-3.8.0.dir/depend.make

# Include the progress variables for this target.
include plugins/export/CMakeFiles/GMLExport-3.8.0.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/export/CMakeFiles/GMLExport-3.8.0.dir/flags.make

plugins/export/CMakeFiles/GMLExport-3.8.0.dir/GMLExport.cpp.o: plugins/export/CMakeFiles/GMLExport-3.8.0.dir/flags.make
plugins/export/CMakeFiles/GMLExport-3.8.0.dir/GMLExport.cpp.o: ../plugins/export/GMLExport.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/kdbanman/browseRDF/tulip-3.8.0-src/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/export/CMakeFiles/GMLExport-3.8.0.dir/GMLExport.cpp.o"
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/export && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/GMLExport-3.8.0.dir/GMLExport.cpp.o -c /home/kdbanman/browseRDF/tulip-3.8.0-src/plugins/export/GMLExport.cpp

plugins/export/CMakeFiles/GMLExport-3.8.0.dir/GMLExport.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GMLExport-3.8.0.dir/GMLExport.cpp.i"
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/export && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/kdbanman/browseRDF/tulip-3.8.0-src/plugins/export/GMLExport.cpp > CMakeFiles/GMLExport-3.8.0.dir/GMLExport.cpp.i

plugins/export/CMakeFiles/GMLExport-3.8.0.dir/GMLExport.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GMLExport-3.8.0.dir/GMLExport.cpp.s"
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/export && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/kdbanman/browseRDF/tulip-3.8.0-src/plugins/export/GMLExport.cpp -o CMakeFiles/GMLExport-3.8.0.dir/GMLExport.cpp.s

plugins/export/CMakeFiles/GMLExport-3.8.0.dir/GMLExport.cpp.o.requires:
.PHONY : plugins/export/CMakeFiles/GMLExport-3.8.0.dir/GMLExport.cpp.o.requires

plugins/export/CMakeFiles/GMLExport-3.8.0.dir/GMLExport.cpp.o.provides: plugins/export/CMakeFiles/GMLExport-3.8.0.dir/GMLExport.cpp.o.requires
	$(MAKE) -f plugins/export/CMakeFiles/GMLExport-3.8.0.dir/build.make plugins/export/CMakeFiles/GMLExport-3.8.0.dir/GMLExport.cpp.o.provides.build
.PHONY : plugins/export/CMakeFiles/GMLExport-3.8.0.dir/GMLExport.cpp.o.provides

plugins/export/CMakeFiles/GMLExport-3.8.0.dir/GMLExport.cpp.o.provides.build: plugins/export/CMakeFiles/GMLExport-3.8.0.dir/GMLExport.cpp.o

# Object files for target GMLExport-3.8.0
GMLExport__3_8_0_OBJECTS = \
"CMakeFiles/GMLExport-3.8.0.dir/GMLExport.cpp.o"

# External object files for target GMLExport-3.8.0
GMLExport__3_8_0_EXTERNAL_OBJECTS =

plugins/export/libGMLExport-3.8.0.so: plugins/export/CMakeFiles/GMLExport-3.8.0.dir/GMLExport.cpp.o
plugins/export/libGMLExport-3.8.0.so: library/tulip/src/libtulip-3.8.so
plugins/export/libGMLExport-3.8.0.so: thirdparty/gzstream/libgzstream.so
plugins/export/libGMLExport-3.8.0.so: /usr/lib/x86_64-linux-gnu/libz.so
plugins/export/libGMLExport-3.8.0.so: thirdparty/libqhull/libqhull.a
plugins/export/libGMLExport-3.8.0.so: plugins/export/CMakeFiles/GMLExport-3.8.0.dir/build.make
plugins/export/libGMLExport-3.8.0.so: plugins/export/CMakeFiles/GMLExport-3.8.0.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library libGMLExport-3.8.0.so"
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/export && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/GMLExport-3.8.0.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/export/CMakeFiles/GMLExport-3.8.0.dir/build: plugins/export/libGMLExport-3.8.0.so
.PHONY : plugins/export/CMakeFiles/GMLExport-3.8.0.dir/build

plugins/export/CMakeFiles/GMLExport-3.8.0.dir/requires: plugins/export/CMakeFiles/GMLExport-3.8.0.dir/GMLExport.cpp.o.requires
.PHONY : plugins/export/CMakeFiles/GMLExport-3.8.0.dir/requires

plugins/export/CMakeFiles/GMLExport-3.8.0.dir/clean:
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/export && $(CMAKE_COMMAND) -P CMakeFiles/GMLExport-3.8.0.dir/cmake_clean.cmake
.PHONY : plugins/export/CMakeFiles/GMLExport-3.8.0.dir/clean

plugins/export/CMakeFiles/GMLExport-3.8.0.dir/depend:
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kdbanman/browseRDF/tulip-3.8.0-src /home/kdbanman/browseRDF/tulip-3.8.0-src/plugins/export /home/kdbanman/browseRDF/tulip-3.8.0-src/build /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/export /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/export/CMakeFiles/GMLExport-3.8.0.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/export/CMakeFiles/GMLExport-3.8.0.dir/depend

