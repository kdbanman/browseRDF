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
include thirdparty/gzstream/CMakeFiles/gzstream.dir/depend.make

# Include the progress variables for this target.
include thirdparty/gzstream/CMakeFiles/gzstream.dir/progress.make

# Include the compile flags for this target's objects.
include thirdparty/gzstream/CMakeFiles/gzstream.dir/flags.make

thirdparty/gzstream/CMakeFiles/gzstream.dir/gzstream.cpp.o: thirdparty/gzstream/CMakeFiles/gzstream.dir/flags.make
thirdparty/gzstream/CMakeFiles/gzstream.dir/gzstream.cpp.o: ../thirdparty/gzstream/gzstream.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/kdbanman/Desktop/tulip-3.8.0-src/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object thirdparty/gzstream/CMakeFiles/gzstream.dir/gzstream.cpp.o"
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/thirdparty/gzstream && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/gzstream.dir/gzstream.cpp.o -c /home/kdbanman/Desktop/tulip-3.8.0-src/thirdparty/gzstream/gzstream.cpp

thirdparty/gzstream/CMakeFiles/gzstream.dir/gzstream.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gzstream.dir/gzstream.cpp.i"
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/thirdparty/gzstream && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/kdbanman/Desktop/tulip-3.8.0-src/thirdparty/gzstream/gzstream.cpp > CMakeFiles/gzstream.dir/gzstream.cpp.i

thirdparty/gzstream/CMakeFiles/gzstream.dir/gzstream.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gzstream.dir/gzstream.cpp.s"
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/thirdparty/gzstream && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/kdbanman/Desktop/tulip-3.8.0-src/thirdparty/gzstream/gzstream.cpp -o CMakeFiles/gzstream.dir/gzstream.cpp.s

thirdparty/gzstream/CMakeFiles/gzstream.dir/gzstream.cpp.o.requires:
.PHONY : thirdparty/gzstream/CMakeFiles/gzstream.dir/gzstream.cpp.o.requires

thirdparty/gzstream/CMakeFiles/gzstream.dir/gzstream.cpp.o.provides: thirdparty/gzstream/CMakeFiles/gzstream.dir/gzstream.cpp.o.requires
	$(MAKE) -f thirdparty/gzstream/CMakeFiles/gzstream.dir/build.make thirdparty/gzstream/CMakeFiles/gzstream.dir/gzstream.cpp.o.provides.build
.PHONY : thirdparty/gzstream/CMakeFiles/gzstream.dir/gzstream.cpp.o.provides

thirdparty/gzstream/CMakeFiles/gzstream.dir/gzstream.cpp.o.provides.build: thirdparty/gzstream/CMakeFiles/gzstream.dir/gzstream.cpp.o

# Object files for target gzstream
gzstream_OBJECTS = \
"CMakeFiles/gzstream.dir/gzstream.cpp.o"

# External object files for target gzstream
gzstream_EXTERNAL_OBJECTS =

thirdparty/gzstream/libgzstream.so: thirdparty/gzstream/CMakeFiles/gzstream.dir/gzstream.cpp.o
thirdparty/gzstream/libgzstream.so: /usr/lib/x86_64-linux-gnu/libz.so
thirdparty/gzstream/libgzstream.so: thirdparty/gzstream/CMakeFiles/gzstream.dir/build.make
thirdparty/gzstream/libgzstream.so: thirdparty/gzstream/CMakeFiles/gzstream.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library libgzstream.so"
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/thirdparty/gzstream && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gzstream.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
thirdparty/gzstream/CMakeFiles/gzstream.dir/build: thirdparty/gzstream/libgzstream.so
.PHONY : thirdparty/gzstream/CMakeFiles/gzstream.dir/build

thirdparty/gzstream/CMakeFiles/gzstream.dir/requires: thirdparty/gzstream/CMakeFiles/gzstream.dir/gzstream.cpp.o.requires
.PHONY : thirdparty/gzstream/CMakeFiles/gzstream.dir/requires

thirdparty/gzstream/CMakeFiles/gzstream.dir/clean:
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/thirdparty/gzstream && $(CMAKE_COMMAND) -P CMakeFiles/gzstream.dir/cmake_clean.cmake
.PHONY : thirdparty/gzstream/CMakeFiles/gzstream.dir/clean

thirdparty/gzstream/CMakeFiles/gzstream.dir/depend:
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kdbanman/Desktop/tulip-3.8.0-src /home/kdbanman/Desktop/tulip-3.8.0-src/thirdparty/gzstream /home/kdbanman/Desktop/tulip-3.8.0-src/build /home/kdbanman/Desktop/tulip-3.8.0-src/build/thirdparty/gzstream /home/kdbanman/Desktop/tulip-3.8.0-src/build/thirdparty/gzstream/CMakeFiles/gzstream.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : thirdparty/gzstream/CMakeFiles/gzstream.dir/depend
