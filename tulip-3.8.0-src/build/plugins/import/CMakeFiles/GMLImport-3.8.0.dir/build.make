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
include plugins/import/CMakeFiles/GMLImport-3.8.0.dir/depend.make

# Include the progress variables for this target.
include plugins/import/CMakeFiles/GMLImport-3.8.0.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/import/CMakeFiles/GMLImport-3.8.0.dir/flags.make

plugins/import/CMakeFiles/GMLImport-3.8.0.dir/GMLImport.cpp.o: plugins/import/CMakeFiles/GMLImport-3.8.0.dir/flags.make
plugins/import/CMakeFiles/GMLImport-3.8.0.dir/GMLImport.cpp.o: ../plugins/import/GMLImport.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/kirbybanman/browseRDF/tulip-3.8.0-src/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/import/CMakeFiles/GMLImport-3.8.0.dir/GMLImport.cpp.o"
	cd /home/kirbybanman/browseRDF/tulip-3.8.0-src/build/plugins/import && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/GMLImport-3.8.0.dir/GMLImport.cpp.o -c /home/kirbybanman/browseRDF/tulip-3.8.0-src/plugins/import/GMLImport.cpp

plugins/import/CMakeFiles/GMLImport-3.8.0.dir/GMLImport.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GMLImport-3.8.0.dir/GMLImport.cpp.i"
	cd /home/kirbybanman/browseRDF/tulip-3.8.0-src/build/plugins/import && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/kirbybanman/browseRDF/tulip-3.8.0-src/plugins/import/GMLImport.cpp > CMakeFiles/GMLImport-3.8.0.dir/GMLImport.cpp.i

plugins/import/CMakeFiles/GMLImport-3.8.0.dir/GMLImport.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GMLImport-3.8.0.dir/GMLImport.cpp.s"
	cd /home/kirbybanman/browseRDF/tulip-3.8.0-src/build/plugins/import && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/kirbybanman/browseRDF/tulip-3.8.0-src/plugins/import/GMLImport.cpp -o CMakeFiles/GMLImport-3.8.0.dir/GMLImport.cpp.s

plugins/import/CMakeFiles/GMLImport-3.8.0.dir/GMLImport.cpp.o.requires:
.PHONY : plugins/import/CMakeFiles/GMLImport-3.8.0.dir/GMLImport.cpp.o.requires

plugins/import/CMakeFiles/GMLImport-3.8.0.dir/GMLImport.cpp.o.provides: plugins/import/CMakeFiles/GMLImport-3.8.0.dir/GMLImport.cpp.o.requires
	$(MAKE) -f plugins/import/CMakeFiles/GMLImport-3.8.0.dir/build.make plugins/import/CMakeFiles/GMLImport-3.8.0.dir/GMLImport.cpp.o.provides.build
.PHONY : plugins/import/CMakeFiles/GMLImport-3.8.0.dir/GMLImport.cpp.o.provides

plugins/import/CMakeFiles/GMLImport-3.8.0.dir/GMLImport.cpp.o.provides.build: plugins/import/CMakeFiles/GMLImport-3.8.0.dir/GMLImport.cpp.o

# Object files for target GMLImport-3.8.0
GMLImport__3_8_0_OBJECTS = \
"CMakeFiles/GMLImport-3.8.0.dir/GMLImport.cpp.o"

# External object files for target GMLImport-3.8.0
GMLImport__3_8_0_EXTERNAL_OBJECTS =

plugins/import/libGMLImport-3.8.0.so: plugins/import/CMakeFiles/GMLImport-3.8.0.dir/GMLImport.cpp.o
plugins/import/libGMLImport-3.8.0.so: library/tulip/src/libtulip-3.8.so
plugins/import/libGMLImport-3.8.0.so: thirdparty/gzstream/libgzstream.so
plugins/import/libGMLImport-3.8.0.so: /usr/lib/x86_64-linux-gnu/libz.so
plugins/import/libGMLImport-3.8.0.so: thirdparty/libqhull/libqhull.a
plugins/import/libGMLImport-3.8.0.so: plugins/import/CMakeFiles/GMLImport-3.8.0.dir/build.make
plugins/import/libGMLImport-3.8.0.so: plugins/import/CMakeFiles/GMLImport-3.8.0.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library libGMLImport-3.8.0.so"
	cd /home/kirbybanman/browseRDF/tulip-3.8.0-src/build/plugins/import && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/GMLImport-3.8.0.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/import/CMakeFiles/GMLImport-3.8.0.dir/build: plugins/import/libGMLImport-3.8.0.so
.PHONY : plugins/import/CMakeFiles/GMLImport-3.8.0.dir/build

plugins/import/CMakeFiles/GMLImport-3.8.0.dir/requires: plugins/import/CMakeFiles/GMLImport-3.8.0.dir/GMLImport.cpp.o.requires
.PHONY : plugins/import/CMakeFiles/GMLImport-3.8.0.dir/requires

plugins/import/CMakeFiles/GMLImport-3.8.0.dir/clean:
	cd /home/kirbybanman/browseRDF/tulip-3.8.0-src/build/plugins/import && $(CMAKE_COMMAND) -P CMakeFiles/GMLImport-3.8.0.dir/cmake_clean.cmake
.PHONY : plugins/import/CMakeFiles/GMLImport-3.8.0.dir/clean

plugins/import/CMakeFiles/GMLImport-3.8.0.dir/depend:
	cd /home/kirbybanman/browseRDF/tulip-3.8.0-src/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kirbybanman/browseRDF/tulip-3.8.0-src /home/kirbybanman/browseRDF/tulip-3.8.0-src/plugins/import /home/kirbybanman/browseRDF/tulip-3.8.0-src/build /home/kirbybanman/browseRDF/tulip-3.8.0-src/build/plugins/import /home/kirbybanman/browseRDF/tulip-3.8.0-src/build/plugins/import/CMakeFiles/GMLImport-3.8.0.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/import/CMakeFiles/GMLImport-3.8.0.dir/depend

