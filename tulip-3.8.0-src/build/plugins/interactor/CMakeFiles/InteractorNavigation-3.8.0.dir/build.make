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
include plugins/interactor/CMakeFiles/InteractorNavigation-3.8.0.dir/depend.make

# Include the progress variables for this target.
include plugins/interactor/CMakeFiles/InteractorNavigation-3.8.0.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/interactor/CMakeFiles/InteractorNavigation-3.8.0.dir/flags.make

plugins/interactor/CMakeFiles/InteractorNavigation-3.8.0.dir/InteractorNavigation.cpp.o: plugins/interactor/CMakeFiles/InteractorNavigation-3.8.0.dir/flags.make
plugins/interactor/CMakeFiles/InteractorNavigation-3.8.0.dir/InteractorNavigation.cpp.o: ../plugins/interactor/InteractorNavigation.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/kdbanman/Desktop/tulip-3.8.0-src/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/interactor/CMakeFiles/InteractorNavigation-3.8.0.dir/InteractorNavigation.cpp.o"
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/plugins/interactor && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/InteractorNavigation-3.8.0.dir/InteractorNavigation.cpp.o -c /home/kdbanman/Desktop/tulip-3.8.0-src/plugins/interactor/InteractorNavigation.cpp

plugins/interactor/CMakeFiles/InteractorNavigation-3.8.0.dir/InteractorNavigation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/InteractorNavigation-3.8.0.dir/InteractorNavigation.cpp.i"
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/plugins/interactor && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/kdbanman/Desktop/tulip-3.8.0-src/plugins/interactor/InteractorNavigation.cpp > CMakeFiles/InteractorNavigation-3.8.0.dir/InteractorNavigation.cpp.i

plugins/interactor/CMakeFiles/InteractorNavigation-3.8.0.dir/InteractorNavigation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/InteractorNavigation-3.8.0.dir/InteractorNavigation.cpp.s"
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/plugins/interactor && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/kdbanman/Desktop/tulip-3.8.0-src/plugins/interactor/InteractorNavigation.cpp -o CMakeFiles/InteractorNavigation-3.8.0.dir/InteractorNavigation.cpp.s

plugins/interactor/CMakeFiles/InteractorNavigation-3.8.0.dir/InteractorNavigation.cpp.o.requires:
.PHONY : plugins/interactor/CMakeFiles/InteractorNavigation-3.8.0.dir/InteractorNavigation.cpp.o.requires

plugins/interactor/CMakeFiles/InteractorNavigation-3.8.0.dir/InteractorNavigation.cpp.o.provides: plugins/interactor/CMakeFiles/InteractorNavigation-3.8.0.dir/InteractorNavigation.cpp.o.requires
	$(MAKE) -f plugins/interactor/CMakeFiles/InteractorNavigation-3.8.0.dir/build.make plugins/interactor/CMakeFiles/InteractorNavigation-3.8.0.dir/InteractorNavigation.cpp.o.provides.build
.PHONY : plugins/interactor/CMakeFiles/InteractorNavigation-3.8.0.dir/InteractorNavigation.cpp.o.provides

plugins/interactor/CMakeFiles/InteractorNavigation-3.8.0.dir/InteractorNavigation.cpp.o.provides.build: plugins/interactor/CMakeFiles/InteractorNavigation-3.8.0.dir/InteractorNavigation.cpp.o

# Object files for target InteractorNavigation-3.8.0
InteractorNavigation__3_8_0_OBJECTS = \
"CMakeFiles/InteractorNavigation-3.8.0.dir/InteractorNavigation.cpp.o"

# External object files for target InteractorNavigation-3.8.0
InteractorNavigation__3_8_0_EXTERNAL_OBJECTS =

plugins/interactor/libInteractorNavigation-3.8.0.so: plugins/interactor/CMakeFiles/InteractorNavigation-3.8.0.dir/InteractorNavigation.cpp.o
plugins/interactor/libInteractorNavigation-3.8.0.so: library/tulip/src/libtulip-3.8.so
plugins/interactor/libInteractorNavigation-3.8.0.so: library/tulip-ogl/src/libtulip-ogl-3.8.so
plugins/interactor/libInteractorNavigation-3.8.0.so: library/tulip-qt/src/libtulip-qt4-3.8.so
plugins/interactor/libInteractorNavigation-3.8.0.so: library/tulip-ogl/src/libtulip-ogl-3.8.so
plugins/interactor/libInteractorNavigation-3.8.0.so: library/tulip/src/libtulip-3.8.so
plugins/interactor/libInteractorNavigation-3.8.0.so: thirdparty/gzstream/libgzstream.so
plugins/interactor/libInteractorNavigation-3.8.0.so: /usr/lib/x86_64-linux-gnu/libz.so
plugins/interactor/libInteractorNavigation-3.8.0.so: thirdparty/libqhull/libqhull.a
plugins/interactor/libInteractorNavigation-3.8.0.so: thirdparty/ftgl/libftgl.so
plugins/interactor/libInteractorNavigation-3.8.0.so: /usr/lib/x86_64-linux-gnu/libxml2.so
plugins/interactor/libInteractorNavigation-3.8.0.so: /usr/lib/x86_64-linux-gnu/libjpeg.so
plugins/interactor/libInteractorNavigation-3.8.0.so: /usr/lib/x86_64-linux-gnu/libpng.so
plugins/interactor/libInteractorNavigation-3.8.0.so: /usr/lib/x86_64-linux-gnu/libfreetype.so
plugins/interactor/libInteractorNavigation-3.8.0.so: /usr/lib/x86_64-linux-gnu/libGLEW.so
plugins/interactor/libInteractorNavigation-3.8.0.so: /usr/lib/x86_64-linux-gnu/libGLU.so
plugins/interactor/libInteractorNavigation-3.8.0.so: /usr/lib/x86_64-linux-gnu/libGL.so
plugins/interactor/libInteractorNavigation-3.8.0.so: /usr/lib/x86_64-linux-gnu/libQtOpenGL.so
plugins/interactor/libInteractorNavigation-3.8.0.so: /usr/lib/x86_64-linux-gnu/libQtGui.so
plugins/interactor/libInteractorNavigation-3.8.0.so: /usr/lib/x86_64-linux-gnu/libQtNetwork.so
plugins/interactor/libInteractorNavigation-3.8.0.so: /usr/lib/x86_64-linux-gnu/libQtCore.so
plugins/interactor/libInteractorNavigation-3.8.0.so: plugins/interactor/CMakeFiles/InteractorNavigation-3.8.0.dir/build.make
plugins/interactor/libInteractorNavigation-3.8.0.so: plugins/interactor/CMakeFiles/InteractorNavigation-3.8.0.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library libInteractorNavigation-3.8.0.so"
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/plugins/interactor && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/InteractorNavigation-3.8.0.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/interactor/CMakeFiles/InteractorNavigation-3.8.0.dir/build: plugins/interactor/libInteractorNavigation-3.8.0.so
.PHONY : plugins/interactor/CMakeFiles/InteractorNavigation-3.8.0.dir/build

plugins/interactor/CMakeFiles/InteractorNavigation-3.8.0.dir/requires: plugins/interactor/CMakeFiles/InteractorNavigation-3.8.0.dir/InteractorNavigation.cpp.o.requires
.PHONY : plugins/interactor/CMakeFiles/InteractorNavigation-3.8.0.dir/requires

plugins/interactor/CMakeFiles/InteractorNavigation-3.8.0.dir/clean:
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/plugins/interactor && $(CMAKE_COMMAND) -P CMakeFiles/InteractorNavigation-3.8.0.dir/cmake_clean.cmake
.PHONY : plugins/interactor/CMakeFiles/InteractorNavigation-3.8.0.dir/clean

plugins/interactor/CMakeFiles/InteractorNavigation-3.8.0.dir/depend:
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kdbanman/Desktop/tulip-3.8.0-src /home/kdbanman/Desktop/tulip-3.8.0-src/plugins/interactor /home/kdbanman/Desktop/tulip-3.8.0-src/build /home/kdbanman/Desktop/tulip-3.8.0-src/build/plugins/interactor /home/kdbanman/Desktop/tulip-3.8.0-src/build/plugins/interactor/CMakeFiles/InteractorNavigation-3.8.0.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/interactor/CMakeFiles/InteractorNavigation-3.8.0.dir/depend

