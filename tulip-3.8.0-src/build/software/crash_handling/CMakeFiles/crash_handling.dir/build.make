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
include software/crash_handling/CMakeFiles/crash_handling.dir/depend.make

# Include the progress variables for this target.
include software/crash_handling/CMakeFiles/crash_handling.dir/progress.make

# Include the compile flags for this target's objects.
include software/crash_handling/CMakeFiles/crash_handling.dir/flags.make

software/crash_handling/CMakeFiles/crash_handling.dir/CrashHandling.cpp.o: software/crash_handling/CMakeFiles/crash_handling.dir/flags.make
software/crash_handling/CMakeFiles/crash_handling.dir/CrashHandling.cpp.o: ../software/crash_handling/CrashHandling.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/kdbanman/Desktop/tulip-3.8.0-src/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object software/crash_handling/CMakeFiles/crash_handling.dir/CrashHandling.cpp.o"
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/software/crash_handling && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/crash_handling.dir/CrashHandling.cpp.o -c /home/kdbanman/Desktop/tulip-3.8.0-src/software/crash_handling/CrashHandling.cpp

software/crash_handling/CMakeFiles/crash_handling.dir/CrashHandling.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/crash_handling.dir/CrashHandling.cpp.i"
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/software/crash_handling && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/kdbanman/Desktop/tulip-3.8.0-src/software/crash_handling/CrashHandling.cpp > CMakeFiles/crash_handling.dir/CrashHandling.cpp.i

software/crash_handling/CMakeFiles/crash_handling.dir/CrashHandling.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/crash_handling.dir/CrashHandling.cpp.s"
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/software/crash_handling && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/kdbanman/Desktop/tulip-3.8.0-src/software/crash_handling/CrashHandling.cpp -o CMakeFiles/crash_handling.dir/CrashHandling.cpp.s

software/crash_handling/CMakeFiles/crash_handling.dir/CrashHandling.cpp.o.requires:
.PHONY : software/crash_handling/CMakeFiles/crash_handling.dir/CrashHandling.cpp.o.requires

software/crash_handling/CMakeFiles/crash_handling.dir/CrashHandling.cpp.o.provides: software/crash_handling/CMakeFiles/crash_handling.dir/CrashHandling.cpp.o.requires
	$(MAKE) -f software/crash_handling/CMakeFiles/crash_handling.dir/build.make software/crash_handling/CMakeFiles/crash_handling.dir/CrashHandling.cpp.o.provides.build
.PHONY : software/crash_handling/CMakeFiles/crash_handling.dir/CrashHandling.cpp.o.provides

software/crash_handling/CMakeFiles/crash_handling.dir/CrashHandling.cpp.o.provides.build: software/crash_handling/CMakeFiles/crash_handling.dir/CrashHandling.cpp.o

software/crash_handling/CMakeFiles/crash_handling.dir/StackWalker.cpp.o: software/crash_handling/CMakeFiles/crash_handling.dir/flags.make
software/crash_handling/CMakeFiles/crash_handling.dir/StackWalker.cpp.o: ../software/crash_handling/StackWalker.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/kdbanman/Desktop/tulip-3.8.0-src/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object software/crash_handling/CMakeFiles/crash_handling.dir/StackWalker.cpp.o"
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/software/crash_handling && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/crash_handling.dir/StackWalker.cpp.o -c /home/kdbanman/Desktop/tulip-3.8.0-src/software/crash_handling/StackWalker.cpp

software/crash_handling/CMakeFiles/crash_handling.dir/StackWalker.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/crash_handling.dir/StackWalker.cpp.i"
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/software/crash_handling && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/kdbanman/Desktop/tulip-3.8.0-src/software/crash_handling/StackWalker.cpp > CMakeFiles/crash_handling.dir/StackWalker.cpp.i

software/crash_handling/CMakeFiles/crash_handling.dir/StackWalker.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/crash_handling.dir/StackWalker.cpp.s"
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/software/crash_handling && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/kdbanman/Desktop/tulip-3.8.0-src/software/crash_handling/StackWalker.cpp -o CMakeFiles/crash_handling.dir/StackWalker.cpp.s

software/crash_handling/CMakeFiles/crash_handling.dir/StackWalker.cpp.o.requires:
.PHONY : software/crash_handling/CMakeFiles/crash_handling.dir/StackWalker.cpp.o.requires

software/crash_handling/CMakeFiles/crash_handling.dir/StackWalker.cpp.o.provides: software/crash_handling/CMakeFiles/crash_handling.dir/StackWalker.cpp.o.requires
	$(MAKE) -f software/crash_handling/CMakeFiles/crash_handling.dir/build.make software/crash_handling/CMakeFiles/crash_handling.dir/StackWalker.cpp.o.provides.build
.PHONY : software/crash_handling/CMakeFiles/crash_handling.dir/StackWalker.cpp.o.provides

software/crash_handling/CMakeFiles/crash_handling.dir/StackWalker.cpp.o.provides.build: software/crash_handling/CMakeFiles/crash_handling.dir/StackWalker.cpp.o

software/crash_handling/CMakeFiles/crash_handling.dir/UnixSignalInterposer.cpp.o: software/crash_handling/CMakeFiles/crash_handling.dir/flags.make
software/crash_handling/CMakeFiles/crash_handling.dir/UnixSignalInterposer.cpp.o: ../software/crash_handling/UnixSignalInterposer.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/kdbanman/Desktop/tulip-3.8.0-src/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object software/crash_handling/CMakeFiles/crash_handling.dir/UnixSignalInterposer.cpp.o"
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/software/crash_handling && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/crash_handling.dir/UnixSignalInterposer.cpp.o -c /home/kdbanman/Desktop/tulip-3.8.0-src/software/crash_handling/UnixSignalInterposer.cpp

software/crash_handling/CMakeFiles/crash_handling.dir/UnixSignalInterposer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/crash_handling.dir/UnixSignalInterposer.cpp.i"
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/software/crash_handling && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/kdbanman/Desktop/tulip-3.8.0-src/software/crash_handling/UnixSignalInterposer.cpp > CMakeFiles/crash_handling.dir/UnixSignalInterposer.cpp.i

software/crash_handling/CMakeFiles/crash_handling.dir/UnixSignalInterposer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/crash_handling.dir/UnixSignalInterposer.cpp.s"
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/software/crash_handling && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/kdbanman/Desktop/tulip-3.8.0-src/software/crash_handling/UnixSignalInterposer.cpp -o CMakeFiles/crash_handling.dir/UnixSignalInterposer.cpp.s

software/crash_handling/CMakeFiles/crash_handling.dir/UnixSignalInterposer.cpp.o.requires:
.PHONY : software/crash_handling/CMakeFiles/crash_handling.dir/UnixSignalInterposer.cpp.o.requires

software/crash_handling/CMakeFiles/crash_handling.dir/UnixSignalInterposer.cpp.o.provides: software/crash_handling/CMakeFiles/crash_handling.dir/UnixSignalInterposer.cpp.o.requires
	$(MAKE) -f software/crash_handling/CMakeFiles/crash_handling.dir/build.make software/crash_handling/CMakeFiles/crash_handling.dir/UnixSignalInterposer.cpp.o.provides.build
.PHONY : software/crash_handling/CMakeFiles/crash_handling.dir/UnixSignalInterposer.cpp.o.provides

software/crash_handling/CMakeFiles/crash_handling.dir/UnixSignalInterposer.cpp.o.provides.build: software/crash_handling/CMakeFiles/crash_handling.dir/UnixSignalInterposer.cpp.o

# Object files for target crash_handling
crash_handling_OBJECTS = \
"CMakeFiles/crash_handling.dir/CrashHandling.cpp.o" \
"CMakeFiles/crash_handling.dir/StackWalker.cpp.o" \
"CMakeFiles/crash_handling.dir/UnixSignalInterposer.cpp.o"

# External object files for target crash_handling
crash_handling_EXTERNAL_OBJECTS =

software/crash_handling/libcrash_handling.a: software/crash_handling/CMakeFiles/crash_handling.dir/CrashHandling.cpp.o
software/crash_handling/libcrash_handling.a: software/crash_handling/CMakeFiles/crash_handling.dir/StackWalker.cpp.o
software/crash_handling/libcrash_handling.a: software/crash_handling/CMakeFiles/crash_handling.dir/UnixSignalInterposer.cpp.o
software/crash_handling/libcrash_handling.a: software/crash_handling/CMakeFiles/crash_handling.dir/build.make
software/crash_handling/libcrash_handling.a: software/crash_handling/CMakeFiles/crash_handling.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX static library libcrash_handling.a"
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/software/crash_handling && $(CMAKE_COMMAND) -P CMakeFiles/crash_handling.dir/cmake_clean_target.cmake
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/software/crash_handling && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/crash_handling.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
software/crash_handling/CMakeFiles/crash_handling.dir/build: software/crash_handling/libcrash_handling.a
.PHONY : software/crash_handling/CMakeFiles/crash_handling.dir/build

software/crash_handling/CMakeFiles/crash_handling.dir/requires: software/crash_handling/CMakeFiles/crash_handling.dir/CrashHandling.cpp.o.requires
software/crash_handling/CMakeFiles/crash_handling.dir/requires: software/crash_handling/CMakeFiles/crash_handling.dir/StackWalker.cpp.o.requires
software/crash_handling/CMakeFiles/crash_handling.dir/requires: software/crash_handling/CMakeFiles/crash_handling.dir/UnixSignalInterposer.cpp.o.requires
.PHONY : software/crash_handling/CMakeFiles/crash_handling.dir/requires

software/crash_handling/CMakeFiles/crash_handling.dir/clean:
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/software/crash_handling && $(CMAKE_COMMAND) -P CMakeFiles/crash_handling.dir/cmake_clean.cmake
.PHONY : software/crash_handling/CMakeFiles/crash_handling.dir/clean

software/crash_handling/CMakeFiles/crash_handling.dir/depend:
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kdbanman/Desktop/tulip-3.8.0-src /home/kdbanman/Desktop/tulip-3.8.0-src/software/crash_handling /home/kdbanman/Desktop/tulip-3.8.0-src/build /home/kdbanman/Desktop/tulip-3.8.0-src/build/software/crash_handling /home/kdbanman/Desktop/tulip-3.8.0-src/build/software/crash_handling/CMakeFiles/crash_handling.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : software/crash_handling/CMakeFiles/crash_handling.dir/depend
