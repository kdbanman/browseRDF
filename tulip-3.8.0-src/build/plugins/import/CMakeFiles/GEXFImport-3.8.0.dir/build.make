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
include plugins/import/CMakeFiles/GEXFImport-3.8.0.dir/depend.make

# Include the progress variables for this target.
include plugins/import/CMakeFiles/GEXFImport-3.8.0.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/import/CMakeFiles/GEXFImport-3.8.0.dir/flags.make

plugins/import/CMakeFiles/GEXFImport-3.8.0.dir/GEXFImport.cpp.o: plugins/import/CMakeFiles/GEXFImport-3.8.0.dir/flags.make
plugins/import/CMakeFiles/GEXFImport-3.8.0.dir/GEXFImport.cpp.o: ../plugins/import/GEXFImport.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/kdbanman/Desktop/tulip-3.8.0-src/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/import/CMakeFiles/GEXFImport-3.8.0.dir/GEXFImport.cpp.o"
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/plugins/import && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/GEXFImport-3.8.0.dir/GEXFImport.cpp.o -c /home/kdbanman/Desktop/tulip-3.8.0-src/plugins/import/GEXFImport.cpp

plugins/import/CMakeFiles/GEXFImport-3.8.0.dir/GEXFImport.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GEXFImport-3.8.0.dir/GEXFImport.cpp.i"
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/plugins/import && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/kdbanman/Desktop/tulip-3.8.0-src/plugins/import/GEXFImport.cpp > CMakeFiles/GEXFImport-3.8.0.dir/GEXFImport.cpp.i

plugins/import/CMakeFiles/GEXFImport-3.8.0.dir/GEXFImport.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GEXFImport-3.8.0.dir/GEXFImport.cpp.s"
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/plugins/import && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/kdbanman/Desktop/tulip-3.8.0-src/plugins/import/GEXFImport.cpp -o CMakeFiles/GEXFImport-3.8.0.dir/GEXFImport.cpp.s

plugins/import/CMakeFiles/GEXFImport-3.8.0.dir/GEXFImport.cpp.o.requires:
.PHONY : plugins/import/CMakeFiles/GEXFImport-3.8.0.dir/GEXFImport.cpp.o.requires

plugins/import/CMakeFiles/GEXFImport-3.8.0.dir/GEXFImport.cpp.o.provides: plugins/import/CMakeFiles/GEXFImport-3.8.0.dir/GEXFImport.cpp.o.requires
	$(MAKE) -f plugins/import/CMakeFiles/GEXFImport-3.8.0.dir/build.make plugins/import/CMakeFiles/GEXFImport-3.8.0.dir/GEXFImport.cpp.o.provides.build
.PHONY : plugins/import/CMakeFiles/GEXFImport-3.8.0.dir/GEXFImport.cpp.o.provides

plugins/import/CMakeFiles/GEXFImport-3.8.0.dir/GEXFImport.cpp.o.provides.build: plugins/import/CMakeFiles/GEXFImport-3.8.0.dir/GEXFImport.cpp.o

# Object files for target GEXFImport-3.8.0
GEXFImport__3_8_0_OBJECTS = \
"CMakeFiles/GEXFImport-3.8.0.dir/GEXFImport.cpp.o"

# External object files for target GEXFImport-3.8.0
GEXFImport__3_8_0_EXTERNAL_OBJECTS =

plugins/import/libGEXFImport-3.8.0.so: plugins/import/CMakeFiles/GEXFImport-3.8.0.dir/GEXFImport.cpp.o
plugins/import/libGEXFImport-3.8.0.so: library/tulip/src/libtulip-3.8.so
plugins/import/libGEXFImport-3.8.0.so: /usr/lib/x86_64-linux-gnu/libQtCore.so
plugins/import/libGEXFImport-3.8.0.so: thirdparty/gzstream/libgzstream.so
plugins/import/libGEXFImport-3.8.0.so: /usr/lib/x86_64-linux-gnu/libz.so
plugins/import/libGEXFImport-3.8.0.so: thirdparty/libqhull/libqhull.a
plugins/import/libGEXFImport-3.8.0.so: plugins/import/CMakeFiles/GEXFImport-3.8.0.dir/build.make
plugins/import/libGEXFImport-3.8.0.so: plugins/import/CMakeFiles/GEXFImport-3.8.0.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library libGEXFImport-3.8.0.so"
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/plugins/import && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/GEXFImport-3.8.0.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/import/CMakeFiles/GEXFImport-3.8.0.dir/build: plugins/import/libGEXFImport-3.8.0.so
.PHONY : plugins/import/CMakeFiles/GEXFImport-3.8.0.dir/build

plugins/import/CMakeFiles/GEXFImport-3.8.0.dir/requires: plugins/import/CMakeFiles/GEXFImport-3.8.0.dir/GEXFImport.cpp.o.requires
.PHONY : plugins/import/CMakeFiles/GEXFImport-3.8.0.dir/requires

plugins/import/CMakeFiles/GEXFImport-3.8.0.dir/clean:
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/plugins/import && $(CMAKE_COMMAND) -P CMakeFiles/GEXFImport-3.8.0.dir/cmake_clean.cmake
.PHONY : plugins/import/CMakeFiles/GEXFImport-3.8.0.dir/clean

plugins/import/CMakeFiles/GEXFImport-3.8.0.dir/depend:
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kdbanman/Desktop/tulip-3.8.0-src /home/kdbanman/Desktop/tulip-3.8.0-src/plugins/import /home/kdbanman/Desktop/tulip-3.8.0-src/build /home/kdbanman/Desktop/tulip-3.8.0-src/build/plugins/import /home/kdbanman/Desktop/tulip-3.8.0-src/build/plugins/import/CMakeFiles/GEXFImport-3.8.0.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/import/CMakeFiles/GEXFImport-3.8.0.dir/depend

