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
include plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/depend.make

# Include the progress variables for this target.
include plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/flags.make

plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/DatasetTools.cpp.o: plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/flags.make
plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/DatasetTools.cpp.o: ../plugins/layout/DatasetTools.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/kdbanman/browseRDF/tulip-3.8.0-src/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/DatasetTools.cpp.o"
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/layout && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/ImprovedWalker-3.8.0.dir/DatasetTools.cpp.o -c /home/kdbanman/browseRDF/tulip-3.8.0-src/plugins/layout/DatasetTools.cpp

plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/DatasetTools.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ImprovedWalker-3.8.0.dir/DatasetTools.cpp.i"
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/layout && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/kdbanman/browseRDF/tulip-3.8.0-src/plugins/layout/DatasetTools.cpp > CMakeFiles/ImprovedWalker-3.8.0.dir/DatasetTools.cpp.i

plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/DatasetTools.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ImprovedWalker-3.8.0.dir/DatasetTools.cpp.s"
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/layout && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/kdbanman/browseRDF/tulip-3.8.0-src/plugins/layout/DatasetTools.cpp -o CMakeFiles/ImprovedWalker-3.8.0.dir/DatasetTools.cpp.s

plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/DatasetTools.cpp.o.requires:
.PHONY : plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/DatasetTools.cpp.o.requires

plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/DatasetTools.cpp.o.provides: plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/DatasetTools.cpp.o.requires
	$(MAKE) -f plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/build.make plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/DatasetTools.cpp.o.provides.build
.PHONY : plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/DatasetTools.cpp.o.provides

plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/DatasetTools.cpp.o.provides.build: plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/DatasetTools.cpp.o

plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/EdgeTools.cpp.o: plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/flags.make
plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/EdgeTools.cpp.o: ../plugins/layout/EdgeTools.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/kdbanman/browseRDF/tulip-3.8.0-src/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/EdgeTools.cpp.o"
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/layout && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/ImprovedWalker-3.8.0.dir/EdgeTools.cpp.o -c /home/kdbanman/browseRDF/tulip-3.8.0-src/plugins/layout/EdgeTools.cpp

plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/EdgeTools.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ImprovedWalker-3.8.0.dir/EdgeTools.cpp.i"
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/layout && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/kdbanman/browseRDF/tulip-3.8.0-src/plugins/layout/EdgeTools.cpp > CMakeFiles/ImprovedWalker-3.8.0.dir/EdgeTools.cpp.i

plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/EdgeTools.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ImprovedWalker-3.8.0.dir/EdgeTools.cpp.s"
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/layout && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/kdbanman/browseRDF/tulip-3.8.0-src/plugins/layout/EdgeTools.cpp -o CMakeFiles/ImprovedWalker-3.8.0.dir/EdgeTools.cpp.s

plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/EdgeTools.cpp.o.requires:
.PHONY : plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/EdgeTools.cpp.o.requires

plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/EdgeTools.cpp.o.provides: plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/EdgeTools.cpp.o.requires
	$(MAKE) -f plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/build.make plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/EdgeTools.cpp.o.provides.build
.PHONY : plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/EdgeTools.cpp.o.provides

plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/EdgeTools.cpp.o.provides.build: plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/EdgeTools.cpp.o

plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/ImprovedWalker.cpp.o: plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/flags.make
plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/ImprovedWalker.cpp.o: ../plugins/layout/ImprovedWalker.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/kdbanman/browseRDF/tulip-3.8.0-src/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/ImprovedWalker.cpp.o"
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/layout && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/ImprovedWalker-3.8.0.dir/ImprovedWalker.cpp.o -c /home/kdbanman/browseRDF/tulip-3.8.0-src/plugins/layout/ImprovedWalker.cpp

plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/ImprovedWalker.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ImprovedWalker-3.8.0.dir/ImprovedWalker.cpp.i"
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/layout && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/kdbanman/browseRDF/tulip-3.8.0-src/plugins/layout/ImprovedWalker.cpp > CMakeFiles/ImprovedWalker-3.8.0.dir/ImprovedWalker.cpp.i

plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/ImprovedWalker.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ImprovedWalker-3.8.0.dir/ImprovedWalker.cpp.s"
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/layout && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/kdbanman/browseRDF/tulip-3.8.0-src/plugins/layout/ImprovedWalker.cpp -o CMakeFiles/ImprovedWalker-3.8.0.dir/ImprovedWalker.cpp.s

plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/ImprovedWalker.cpp.o.requires:
.PHONY : plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/ImprovedWalker.cpp.o.requires

plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/ImprovedWalker.cpp.o.provides: plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/ImprovedWalker.cpp.o.requires
	$(MAKE) -f plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/build.make plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/ImprovedWalker.cpp.o.provides.build
.PHONY : plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/ImprovedWalker.cpp.o.provides

plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/ImprovedWalker.cpp.o.provides.build: plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/ImprovedWalker.cpp.o

plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableCoord.cpp.o: plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/flags.make
plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableCoord.cpp.o: ../plugins/layout/OrientableCoord.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/kdbanman/browseRDF/tulip-3.8.0-src/build/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableCoord.cpp.o"
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/layout && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableCoord.cpp.o -c /home/kdbanman/browseRDF/tulip-3.8.0-src/plugins/layout/OrientableCoord.cpp

plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableCoord.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableCoord.cpp.i"
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/layout && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/kdbanman/browseRDF/tulip-3.8.0-src/plugins/layout/OrientableCoord.cpp > CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableCoord.cpp.i

plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableCoord.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableCoord.cpp.s"
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/layout && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/kdbanman/browseRDF/tulip-3.8.0-src/plugins/layout/OrientableCoord.cpp -o CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableCoord.cpp.s

plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableCoord.cpp.o.requires:
.PHONY : plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableCoord.cpp.o.requires

plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableCoord.cpp.o.provides: plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableCoord.cpp.o.requires
	$(MAKE) -f plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/build.make plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableCoord.cpp.o.provides.build
.PHONY : plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableCoord.cpp.o.provides

plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableCoord.cpp.o.provides.build: plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableCoord.cpp.o

plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableLayout.cpp.o: plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/flags.make
plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableLayout.cpp.o: ../plugins/layout/OrientableLayout.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/kdbanman/browseRDF/tulip-3.8.0-src/build/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableLayout.cpp.o"
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/layout && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableLayout.cpp.o -c /home/kdbanman/browseRDF/tulip-3.8.0-src/plugins/layout/OrientableLayout.cpp

plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableLayout.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableLayout.cpp.i"
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/layout && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/kdbanman/browseRDF/tulip-3.8.0-src/plugins/layout/OrientableLayout.cpp > CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableLayout.cpp.i

plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableLayout.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableLayout.cpp.s"
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/layout && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/kdbanman/browseRDF/tulip-3.8.0-src/plugins/layout/OrientableLayout.cpp -o CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableLayout.cpp.s

plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableLayout.cpp.o.requires:
.PHONY : plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableLayout.cpp.o.requires

plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableLayout.cpp.o.provides: plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableLayout.cpp.o.requires
	$(MAKE) -f plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/build.make plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableLayout.cpp.o.provides.build
.PHONY : plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableLayout.cpp.o.provides

plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableLayout.cpp.o.provides.build: plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableLayout.cpp.o

plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableSize.cpp.o: plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/flags.make
plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableSize.cpp.o: ../plugins/layout/OrientableSize.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/kdbanman/browseRDF/tulip-3.8.0-src/build/CMakeFiles $(CMAKE_PROGRESS_6)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableSize.cpp.o"
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/layout && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableSize.cpp.o -c /home/kdbanman/browseRDF/tulip-3.8.0-src/plugins/layout/OrientableSize.cpp

plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableSize.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableSize.cpp.i"
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/layout && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/kdbanman/browseRDF/tulip-3.8.0-src/plugins/layout/OrientableSize.cpp > CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableSize.cpp.i

plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableSize.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableSize.cpp.s"
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/layout && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/kdbanman/browseRDF/tulip-3.8.0-src/plugins/layout/OrientableSize.cpp -o CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableSize.cpp.s

plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableSize.cpp.o.requires:
.PHONY : plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableSize.cpp.o.requires

plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableSize.cpp.o.provides: plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableSize.cpp.o.requires
	$(MAKE) -f plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/build.make plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableSize.cpp.o.provides.build
.PHONY : plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableSize.cpp.o.provides

plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableSize.cpp.o.provides.build: plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableSize.cpp.o

plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableSizeProxy.cpp.o: plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/flags.make
plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableSizeProxy.cpp.o: ../plugins/layout/OrientableSizeProxy.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/kdbanman/browseRDF/tulip-3.8.0-src/build/CMakeFiles $(CMAKE_PROGRESS_7)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableSizeProxy.cpp.o"
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/layout && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableSizeProxy.cpp.o -c /home/kdbanman/browseRDF/tulip-3.8.0-src/plugins/layout/OrientableSizeProxy.cpp

plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableSizeProxy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableSizeProxy.cpp.i"
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/layout && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/kdbanman/browseRDF/tulip-3.8.0-src/plugins/layout/OrientableSizeProxy.cpp > CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableSizeProxy.cpp.i

plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableSizeProxy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableSizeProxy.cpp.s"
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/layout && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/kdbanman/browseRDF/tulip-3.8.0-src/plugins/layout/OrientableSizeProxy.cpp -o CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableSizeProxy.cpp.s

plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableSizeProxy.cpp.o.requires:
.PHONY : plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableSizeProxy.cpp.o.requires

plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableSizeProxy.cpp.o.provides: plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableSizeProxy.cpp.o.requires
	$(MAKE) -f plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/build.make plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableSizeProxy.cpp.o.provides.build
.PHONY : plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableSizeProxy.cpp.o.provides

plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableSizeProxy.cpp.o.provides.build: plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableSizeProxy.cpp.o

plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/Orientation.cpp.o: plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/flags.make
plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/Orientation.cpp.o: ../plugins/layout/Orientation.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/kdbanman/browseRDF/tulip-3.8.0-src/build/CMakeFiles $(CMAKE_PROGRESS_8)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/Orientation.cpp.o"
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/layout && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/ImprovedWalker-3.8.0.dir/Orientation.cpp.o -c /home/kdbanman/browseRDF/tulip-3.8.0-src/plugins/layout/Orientation.cpp

plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/Orientation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ImprovedWalker-3.8.0.dir/Orientation.cpp.i"
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/layout && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/kdbanman/browseRDF/tulip-3.8.0-src/plugins/layout/Orientation.cpp > CMakeFiles/ImprovedWalker-3.8.0.dir/Orientation.cpp.i

plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/Orientation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ImprovedWalker-3.8.0.dir/Orientation.cpp.s"
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/layout && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/kdbanman/browseRDF/tulip-3.8.0-src/plugins/layout/Orientation.cpp -o CMakeFiles/ImprovedWalker-3.8.0.dir/Orientation.cpp.s

plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/Orientation.cpp.o.requires:
.PHONY : plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/Orientation.cpp.o.requires

plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/Orientation.cpp.o.provides: plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/Orientation.cpp.o.requires
	$(MAKE) -f plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/build.make plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/Orientation.cpp.o.provides.build
.PHONY : plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/Orientation.cpp.o.provides

plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/Orientation.cpp.o.provides.build: plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/Orientation.cpp.o

# Object files for target ImprovedWalker-3.8.0
ImprovedWalker__3_8_0_OBJECTS = \
"CMakeFiles/ImprovedWalker-3.8.0.dir/DatasetTools.cpp.o" \
"CMakeFiles/ImprovedWalker-3.8.0.dir/EdgeTools.cpp.o" \
"CMakeFiles/ImprovedWalker-3.8.0.dir/ImprovedWalker.cpp.o" \
"CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableCoord.cpp.o" \
"CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableLayout.cpp.o" \
"CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableSize.cpp.o" \
"CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableSizeProxy.cpp.o" \
"CMakeFiles/ImprovedWalker-3.8.0.dir/Orientation.cpp.o"

# External object files for target ImprovedWalker-3.8.0
ImprovedWalker__3_8_0_EXTERNAL_OBJECTS =

plugins/layout/libImprovedWalker-3.8.0.so: plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/DatasetTools.cpp.o
plugins/layout/libImprovedWalker-3.8.0.so: plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/EdgeTools.cpp.o
plugins/layout/libImprovedWalker-3.8.0.so: plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/ImprovedWalker.cpp.o
plugins/layout/libImprovedWalker-3.8.0.so: plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableCoord.cpp.o
plugins/layout/libImprovedWalker-3.8.0.so: plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableLayout.cpp.o
plugins/layout/libImprovedWalker-3.8.0.so: plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableSize.cpp.o
plugins/layout/libImprovedWalker-3.8.0.so: plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableSizeProxy.cpp.o
plugins/layout/libImprovedWalker-3.8.0.so: plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/Orientation.cpp.o
plugins/layout/libImprovedWalker-3.8.0.so: library/tulip/src/libtulip-3.8.so
plugins/layout/libImprovedWalker-3.8.0.so: thirdparty/gzstream/libgzstream.so
plugins/layout/libImprovedWalker-3.8.0.so: /usr/lib/x86_64-linux-gnu/libz.so
plugins/layout/libImprovedWalker-3.8.0.so: thirdparty/libqhull/libqhull.a
plugins/layout/libImprovedWalker-3.8.0.so: plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/build.make
plugins/layout/libImprovedWalker-3.8.0.so: plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library libImprovedWalker-3.8.0.so"
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/layout && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ImprovedWalker-3.8.0.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/build: plugins/layout/libImprovedWalker-3.8.0.so
.PHONY : plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/build

plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/requires: plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/DatasetTools.cpp.o.requires
plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/requires: plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/EdgeTools.cpp.o.requires
plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/requires: plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/ImprovedWalker.cpp.o.requires
plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/requires: plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableCoord.cpp.o.requires
plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/requires: plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableLayout.cpp.o.requires
plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/requires: plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableSize.cpp.o.requires
plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/requires: plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/OrientableSizeProxy.cpp.o.requires
plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/requires: plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/Orientation.cpp.o.requires
.PHONY : plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/requires

plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/clean:
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/layout && $(CMAKE_COMMAND) -P CMakeFiles/ImprovedWalker-3.8.0.dir/cmake_clean.cmake
.PHONY : plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/clean

plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/depend:
	cd /home/kdbanman/browseRDF/tulip-3.8.0-src/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kdbanman/browseRDF/tulip-3.8.0-src /home/kdbanman/browseRDF/tulip-3.8.0-src/plugins/layout /home/kdbanman/browseRDF/tulip-3.8.0-src/build /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/layout /home/kdbanman/browseRDF/tulip-3.8.0-src/build/plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/layout/CMakeFiles/ImprovedWalker-3.8.0.dir/depend

