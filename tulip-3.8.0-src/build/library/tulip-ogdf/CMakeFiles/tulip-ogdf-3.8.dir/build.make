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
include library/tulip-ogdf/CMakeFiles/tulip-ogdf-3.8.dir/depend.make

# Include the progress variables for this target.
include library/tulip-ogdf/CMakeFiles/tulip-ogdf-3.8.dir/progress.make

# Include the compile flags for this target's objects.
include library/tulip-ogdf/CMakeFiles/tulip-ogdf-3.8.dir/flags.make

library/tulip-ogdf/CMakeFiles/tulip-ogdf-3.8.dir/TulipToOGDF.cpp.o: library/tulip-ogdf/CMakeFiles/tulip-ogdf-3.8.dir/flags.make
library/tulip-ogdf/CMakeFiles/tulip-ogdf-3.8.dir/TulipToOGDF.cpp.o: ../library/tulip-ogdf/TulipToOGDF.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/kdbanman/Desktop/tulip-3.8.0-src/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object library/tulip-ogdf/CMakeFiles/tulip-ogdf-3.8.dir/TulipToOGDF.cpp.o"
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-ogdf && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/tulip-ogdf-3.8.dir/TulipToOGDF.cpp.o -c /home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogdf/TulipToOGDF.cpp

library/tulip-ogdf/CMakeFiles/tulip-ogdf-3.8.dir/TulipToOGDF.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tulip-ogdf-3.8.dir/TulipToOGDF.cpp.i"
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-ogdf && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogdf/TulipToOGDF.cpp > CMakeFiles/tulip-ogdf-3.8.dir/TulipToOGDF.cpp.i

library/tulip-ogdf/CMakeFiles/tulip-ogdf-3.8.dir/TulipToOGDF.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tulip-ogdf-3.8.dir/TulipToOGDF.cpp.s"
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-ogdf && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogdf/TulipToOGDF.cpp -o CMakeFiles/tulip-ogdf-3.8.dir/TulipToOGDF.cpp.s

library/tulip-ogdf/CMakeFiles/tulip-ogdf-3.8.dir/TulipToOGDF.cpp.o.requires:
.PHONY : library/tulip-ogdf/CMakeFiles/tulip-ogdf-3.8.dir/TulipToOGDF.cpp.o.requires

library/tulip-ogdf/CMakeFiles/tulip-ogdf-3.8.dir/TulipToOGDF.cpp.o.provides: library/tulip-ogdf/CMakeFiles/tulip-ogdf-3.8.dir/TulipToOGDF.cpp.o.requires
	$(MAKE) -f library/tulip-ogdf/CMakeFiles/tulip-ogdf-3.8.dir/build.make library/tulip-ogdf/CMakeFiles/tulip-ogdf-3.8.dir/TulipToOGDF.cpp.o.provides.build
.PHONY : library/tulip-ogdf/CMakeFiles/tulip-ogdf-3.8.dir/TulipToOGDF.cpp.o.provides

library/tulip-ogdf/CMakeFiles/tulip-ogdf-3.8.dir/TulipToOGDF.cpp.o.provides.build: library/tulip-ogdf/CMakeFiles/tulip-ogdf-3.8.dir/TulipToOGDF.cpp.o

library/tulip-ogdf/CMakeFiles/tulip-ogdf-3.8.dir/OGDFLayoutPluginBase.cpp.o: library/tulip-ogdf/CMakeFiles/tulip-ogdf-3.8.dir/flags.make
library/tulip-ogdf/CMakeFiles/tulip-ogdf-3.8.dir/OGDFLayoutPluginBase.cpp.o: ../library/tulip-ogdf/OGDFLayoutPluginBase.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/kdbanman/Desktop/tulip-3.8.0-src/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object library/tulip-ogdf/CMakeFiles/tulip-ogdf-3.8.dir/OGDFLayoutPluginBase.cpp.o"
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-ogdf && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/tulip-ogdf-3.8.dir/OGDFLayoutPluginBase.cpp.o -c /home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogdf/OGDFLayoutPluginBase.cpp

library/tulip-ogdf/CMakeFiles/tulip-ogdf-3.8.dir/OGDFLayoutPluginBase.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tulip-ogdf-3.8.dir/OGDFLayoutPluginBase.cpp.i"
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-ogdf && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogdf/OGDFLayoutPluginBase.cpp > CMakeFiles/tulip-ogdf-3.8.dir/OGDFLayoutPluginBase.cpp.i

library/tulip-ogdf/CMakeFiles/tulip-ogdf-3.8.dir/OGDFLayoutPluginBase.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tulip-ogdf-3.8.dir/OGDFLayoutPluginBase.cpp.s"
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-ogdf && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogdf/OGDFLayoutPluginBase.cpp -o CMakeFiles/tulip-ogdf-3.8.dir/OGDFLayoutPluginBase.cpp.s

library/tulip-ogdf/CMakeFiles/tulip-ogdf-3.8.dir/OGDFLayoutPluginBase.cpp.o.requires:
.PHONY : library/tulip-ogdf/CMakeFiles/tulip-ogdf-3.8.dir/OGDFLayoutPluginBase.cpp.o.requires

library/tulip-ogdf/CMakeFiles/tulip-ogdf-3.8.dir/OGDFLayoutPluginBase.cpp.o.provides: library/tulip-ogdf/CMakeFiles/tulip-ogdf-3.8.dir/OGDFLayoutPluginBase.cpp.o.requires
	$(MAKE) -f library/tulip-ogdf/CMakeFiles/tulip-ogdf-3.8.dir/build.make library/tulip-ogdf/CMakeFiles/tulip-ogdf-3.8.dir/OGDFLayoutPluginBase.cpp.o.provides.build
.PHONY : library/tulip-ogdf/CMakeFiles/tulip-ogdf-3.8.dir/OGDFLayoutPluginBase.cpp.o.provides

library/tulip-ogdf/CMakeFiles/tulip-ogdf-3.8.dir/OGDFLayoutPluginBase.cpp.o.provides.build: library/tulip-ogdf/CMakeFiles/tulip-ogdf-3.8.dir/OGDFLayoutPluginBase.cpp.o

# Object files for target tulip-ogdf-3.8
tulip__ogdf__3_8_OBJECTS = \
"CMakeFiles/tulip-ogdf-3.8.dir/TulipToOGDF.cpp.o" \
"CMakeFiles/tulip-ogdf-3.8.dir/OGDFLayoutPluginBase.cpp.o"

# External object files for target tulip-ogdf-3.8
tulip__ogdf__3_8_EXTERNAL_OBJECTS =

library/tulip-ogdf/libtulip-ogdf-3.8.so: library/tulip-ogdf/CMakeFiles/tulip-ogdf-3.8.dir/TulipToOGDF.cpp.o
library/tulip-ogdf/libtulip-ogdf-3.8.so: library/tulip-ogdf/CMakeFiles/tulip-ogdf-3.8.dir/OGDFLayoutPluginBase.cpp.o
library/tulip-ogdf/libtulip-ogdf-3.8.so: library/tulip/src/libtulip-3.8.so
library/tulip-ogdf/libtulip-ogdf-3.8.so: thirdparty/OGDF/libOGDF.so
library/tulip-ogdf/libtulip-ogdf-3.8.so: thirdparty/gzstream/libgzstream.so
library/tulip-ogdf/libtulip-ogdf-3.8.so: /usr/lib/x86_64-linux-gnu/libz.so
library/tulip-ogdf/libtulip-ogdf-3.8.so: thirdparty/libqhull/libqhull.a
library/tulip-ogdf/libtulip-ogdf-3.8.so: library/tulip-ogdf/CMakeFiles/tulip-ogdf-3.8.dir/build.make
library/tulip-ogdf/libtulip-ogdf-3.8.so: library/tulip-ogdf/CMakeFiles/tulip-ogdf-3.8.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library libtulip-ogdf-3.8.so"
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-ogdf && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tulip-ogdf-3.8.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
library/tulip-ogdf/CMakeFiles/tulip-ogdf-3.8.dir/build: library/tulip-ogdf/libtulip-ogdf-3.8.so
.PHONY : library/tulip-ogdf/CMakeFiles/tulip-ogdf-3.8.dir/build

library/tulip-ogdf/CMakeFiles/tulip-ogdf-3.8.dir/requires: library/tulip-ogdf/CMakeFiles/tulip-ogdf-3.8.dir/TulipToOGDF.cpp.o.requires
library/tulip-ogdf/CMakeFiles/tulip-ogdf-3.8.dir/requires: library/tulip-ogdf/CMakeFiles/tulip-ogdf-3.8.dir/OGDFLayoutPluginBase.cpp.o.requires
.PHONY : library/tulip-ogdf/CMakeFiles/tulip-ogdf-3.8.dir/requires

library/tulip-ogdf/CMakeFiles/tulip-ogdf-3.8.dir/clean:
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-ogdf && $(CMAKE_COMMAND) -P CMakeFiles/tulip-ogdf-3.8.dir/cmake_clean.cmake
.PHONY : library/tulip-ogdf/CMakeFiles/tulip-ogdf-3.8.dir/clean

library/tulip-ogdf/CMakeFiles/tulip-ogdf-3.8.dir/depend:
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kdbanman/Desktop/tulip-3.8.0-src /home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-ogdf /home/kdbanman/Desktop/tulip-3.8.0-src/build /home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-ogdf /home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-ogdf/CMakeFiles/tulip-ogdf-3.8.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : library/tulip-ogdf/CMakeFiles/tulip-ogdf-3.8.dir/depend

