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

# Utility rule file for touchTulipOglPythonCMakeLists.

# Include the progress variables for this target.
include library/tulip-python/tulip-ogl/CMakeFiles/touchTulipOglPythonCMakeLists.dir/progress.make

library/tulip-python/tulip-ogl/CMakeFiles/touchTulipOglPythonCMakeLists: library/tulip-python/tulip-ogl/tulipogl.so
	$(CMAKE_COMMAND) -E cmake_progress_report /home/kdbanman/Desktop/tulip-3.8.0-src/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "touching CMakeLists.txt for Tulip OpenGL Python Bindings (force configure before next build to keep source files list updated)"
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-python/tulip-ogl && /usr/bin/cmake -E touch /home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-python/tulip-ogl/CMakeLists.txt

touchTulipOglPythonCMakeLists: library/tulip-python/tulip-ogl/CMakeFiles/touchTulipOglPythonCMakeLists
touchTulipOglPythonCMakeLists: library/tulip-python/tulip-ogl/CMakeFiles/touchTulipOglPythonCMakeLists.dir/build.make
.PHONY : touchTulipOglPythonCMakeLists

# Rule to build all files generated by this target.
library/tulip-python/tulip-ogl/CMakeFiles/touchTulipOglPythonCMakeLists.dir/build: touchTulipOglPythonCMakeLists
.PHONY : library/tulip-python/tulip-ogl/CMakeFiles/touchTulipOglPythonCMakeLists.dir/build

library/tulip-python/tulip-ogl/CMakeFiles/touchTulipOglPythonCMakeLists.dir/clean:
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-python/tulip-ogl && $(CMAKE_COMMAND) -P CMakeFiles/touchTulipOglPythonCMakeLists.dir/cmake_clean.cmake
.PHONY : library/tulip-python/tulip-ogl/CMakeFiles/touchTulipOglPythonCMakeLists.dir/clean

library/tulip-python/tulip-ogl/CMakeFiles/touchTulipOglPythonCMakeLists.dir/depend:
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kdbanman/Desktop/tulip-3.8.0-src /home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-python/tulip-ogl /home/kdbanman/Desktop/tulip-3.8.0-src/build /home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-python/tulip-ogl /home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-python/tulip-ogl/CMakeFiles/touchTulipOglPythonCMakeLists.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : library/tulip-python/tulip-ogl/CMakeFiles/touchTulipOglPythonCMakeLists.dir/depend

