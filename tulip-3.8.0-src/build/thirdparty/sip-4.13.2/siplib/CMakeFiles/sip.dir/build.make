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
include thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/depend.make

# Include the progress variables for this target.
include thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/progress.make

# Include the compile flags for this target's objects.
include thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/flags.make

thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/apiversions.c.o: thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/flags.make
thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/apiversions.c.o: ../thirdparty/sip-4.13.2/siplib/apiversions.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/kdbanman/Desktop/tulip-3.8.0-src/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/apiversions.c.o"
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/thirdparty/sip-4.13.2/siplib && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/sip.dir/apiversions.c.o   -c /home/kdbanman/Desktop/tulip-3.8.0-src/thirdparty/sip-4.13.2/siplib/apiversions.c

thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/apiversions.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/sip.dir/apiversions.c.i"
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/thirdparty/sip-4.13.2/siplib && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /home/kdbanman/Desktop/tulip-3.8.0-src/thirdparty/sip-4.13.2/siplib/apiversions.c > CMakeFiles/sip.dir/apiversions.c.i

thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/apiversions.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/sip.dir/apiversions.c.s"
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/thirdparty/sip-4.13.2/siplib && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /home/kdbanman/Desktop/tulip-3.8.0-src/thirdparty/sip-4.13.2/siplib/apiversions.c -o CMakeFiles/sip.dir/apiversions.c.s

thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/apiversions.c.o.requires:
.PHONY : thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/apiversions.c.o.requires

thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/apiversions.c.o.provides: thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/apiversions.c.o.requires
	$(MAKE) -f thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/build.make thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/apiversions.c.o.provides.build
.PHONY : thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/apiversions.c.o.provides

thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/apiversions.c.o.provides.build: thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/apiversions.c.o

thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/bool.cpp.o: thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/flags.make
thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/bool.cpp.o: ../thirdparty/sip-4.13.2/siplib/bool.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/kdbanman/Desktop/tulip-3.8.0-src/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/bool.cpp.o"
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/thirdparty/sip-4.13.2/siplib && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/sip.dir/bool.cpp.o -c /home/kdbanman/Desktop/tulip-3.8.0-src/thirdparty/sip-4.13.2/siplib/bool.cpp

thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/bool.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sip.dir/bool.cpp.i"
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/thirdparty/sip-4.13.2/siplib && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/kdbanman/Desktop/tulip-3.8.0-src/thirdparty/sip-4.13.2/siplib/bool.cpp > CMakeFiles/sip.dir/bool.cpp.i

thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/bool.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sip.dir/bool.cpp.s"
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/thirdparty/sip-4.13.2/siplib && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/kdbanman/Desktop/tulip-3.8.0-src/thirdparty/sip-4.13.2/siplib/bool.cpp -o CMakeFiles/sip.dir/bool.cpp.s

thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/bool.cpp.o.requires:
.PHONY : thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/bool.cpp.o.requires

thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/bool.cpp.o.provides: thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/bool.cpp.o.requires
	$(MAKE) -f thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/build.make thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/bool.cpp.o.provides.build
.PHONY : thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/bool.cpp.o.provides

thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/bool.cpp.o.provides.build: thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/bool.cpp.o

thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/descriptors.c.o: thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/flags.make
thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/descriptors.c.o: ../thirdparty/sip-4.13.2/siplib/descriptors.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/kdbanman/Desktop/tulip-3.8.0-src/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/descriptors.c.o"
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/thirdparty/sip-4.13.2/siplib && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/sip.dir/descriptors.c.o   -c /home/kdbanman/Desktop/tulip-3.8.0-src/thirdparty/sip-4.13.2/siplib/descriptors.c

thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/descriptors.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/sip.dir/descriptors.c.i"
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/thirdparty/sip-4.13.2/siplib && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /home/kdbanman/Desktop/tulip-3.8.0-src/thirdparty/sip-4.13.2/siplib/descriptors.c > CMakeFiles/sip.dir/descriptors.c.i

thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/descriptors.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/sip.dir/descriptors.c.s"
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/thirdparty/sip-4.13.2/siplib && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /home/kdbanman/Desktop/tulip-3.8.0-src/thirdparty/sip-4.13.2/siplib/descriptors.c -o CMakeFiles/sip.dir/descriptors.c.s

thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/descriptors.c.o.requires:
.PHONY : thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/descriptors.c.o.requires

thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/descriptors.c.o.provides: thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/descriptors.c.o.requires
	$(MAKE) -f thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/build.make thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/descriptors.c.o.provides.build
.PHONY : thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/descriptors.c.o.provides

thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/descriptors.c.o.provides.build: thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/descriptors.c.o

thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/objmap.c.o: thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/flags.make
thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/objmap.c.o: ../thirdparty/sip-4.13.2/siplib/objmap.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/kdbanman/Desktop/tulip-3.8.0-src/build/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/objmap.c.o"
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/thirdparty/sip-4.13.2/siplib && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/sip.dir/objmap.c.o   -c /home/kdbanman/Desktop/tulip-3.8.0-src/thirdparty/sip-4.13.2/siplib/objmap.c

thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/objmap.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/sip.dir/objmap.c.i"
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/thirdparty/sip-4.13.2/siplib && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /home/kdbanman/Desktop/tulip-3.8.0-src/thirdparty/sip-4.13.2/siplib/objmap.c > CMakeFiles/sip.dir/objmap.c.i

thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/objmap.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/sip.dir/objmap.c.s"
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/thirdparty/sip-4.13.2/siplib && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /home/kdbanman/Desktop/tulip-3.8.0-src/thirdparty/sip-4.13.2/siplib/objmap.c -o CMakeFiles/sip.dir/objmap.c.s

thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/objmap.c.o.requires:
.PHONY : thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/objmap.c.o.requires

thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/objmap.c.o.provides: thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/objmap.c.o.requires
	$(MAKE) -f thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/build.make thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/objmap.c.o.provides.build
.PHONY : thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/objmap.c.o.provides

thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/objmap.c.o.provides.build: thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/objmap.c.o

thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/qtlib.c.o: thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/flags.make
thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/qtlib.c.o: ../thirdparty/sip-4.13.2/siplib/qtlib.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/kdbanman/Desktop/tulip-3.8.0-src/build/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/qtlib.c.o"
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/thirdparty/sip-4.13.2/siplib && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/sip.dir/qtlib.c.o   -c /home/kdbanman/Desktop/tulip-3.8.0-src/thirdparty/sip-4.13.2/siplib/qtlib.c

thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/qtlib.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/sip.dir/qtlib.c.i"
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/thirdparty/sip-4.13.2/siplib && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /home/kdbanman/Desktop/tulip-3.8.0-src/thirdparty/sip-4.13.2/siplib/qtlib.c > CMakeFiles/sip.dir/qtlib.c.i

thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/qtlib.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/sip.dir/qtlib.c.s"
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/thirdparty/sip-4.13.2/siplib && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /home/kdbanman/Desktop/tulip-3.8.0-src/thirdparty/sip-4.13.2/siplib/qtlib.c -o CMakeFiles/sip.dir/qtlib.c.s

thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/qtlib.c.o.requires:
.PHONY : thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/qtlib.c.o.requires

thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/qtlib.c.o.provides: thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/qtlib.c.o.requires
	$(MAKE) -f thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/build.make thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/qtlib.c.o.provides.build
.PHONY : thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/qtlib.c.o.provides

thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/qtlib.c.o.provides.build: thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/qtlib.c.o

thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/siplib.c.o: thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/flags.make
thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/siplib.c.o: ../thirdparty/sip-4.13.2/siplib/siplib.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/kdbanman/Desktop/tulip-3.8.0-src/build/CMakeFiles $(CMAKE_PROGRESS_6)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/siplib.c.o"
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/thirdparty/sip-4.13.2/siplib && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/sip.dir/siplib.c.o   -c /home/kdbanman/Desktop/tulip-3.8.0-src/thirdparty/sip-4.13.2/siplib/siplib.c

thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/siplib.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/sip.dir/siplib.c.i"
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/thirdparty/sip-4.13.2/siplib && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /home/kdbanman/Desktop/tulip-3.8.0-src/thirdparty/sip-4.13.2/siplib/siplib.c > CMakeFiles/sip.dir/siplib.c.i

thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/siplib.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/sip.dir/siplib.c.s"
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/thirdparty/sip-4.13.2/siplib && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /home/kdbanman/Desktop/tulip-3.8.0-src/thirdparty/sip-4.13.2/siplib/siplib.c -o CMakeFiles/sip.dir/siplib.c.s

thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/siplib.c.o.requires:
.PHONY : thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/siplib.c.o.requires

thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/siplib.c.o.provides: thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/siplib.c.o.requires
	$(MAKE) -f thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/build.make thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/siplib.c.o.provides.build
.PHONY : thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/siplib.c.o.provides

thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/siplib.c.o.provides.build: thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/siplib.c.o

thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/threads.c.o: thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/flags.make
thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/threads.c.o: ../thirdparty/sip-4.13.2/siplib/threads.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/kdbanman/Desktop/tulip-3.8.0-src/build/CMakeFiles $(CMAKE_PROGRESS_7)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/threads.c.o"
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/thirdparty/sip-4.13.2/siplib && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/sip.dir/threads.c.o   -c /home/kdbanman/Desktop/tulip-3.8.0-src/thirdparty/sip-4.13.2/siplib/threads.c

thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/threads.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/sip.dir/threads.c.i"
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/thirdparty/sip-4.13.2/siplib && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /home/kdbanman/Desktop/tulip-3.8.0-src/thirdparty/sip-4.13.2/siplib/threads.c > CMakeFiles/sip.dir/threads.c.i

thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/threads.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/sip.dir/threads.c.s"
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/thirdparty/sip-4.13.2/siplib && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /home/kdbanman/Desktop/tulip-3.8.0-src/thirdparty/sip-4.13.2/siplib/threads.c -o CMakeFiles/sip.dir/threads.c.s

thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/threads.c.o.requires:
.PHONY : thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/threads.c.o.requires

thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/threads.c.o.provides: thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/threads.c.o.requires
	$(MAKE) -f thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/build.make thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/threads.c.o.provides.build
.PHONY : thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/threads.c.o.provides

thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/threads.c.o.provides.build: thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/threads.c.o

thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/voidptr.c.o: thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/flags.make
thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/voidptr.c.o: ../thirdparty/sip-4.13.2/siplib/voidptr.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/kdbanman/Desktop/tulip-3.8.0-src/build/CMakeFiles $(CMAKE_PROGRESS_8)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/voidptr.c.o"
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/thirdparty/sip-4.13.2/siplib && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/sip.dir/voidptr.c.o   -c /home/kdbanman/Desktop/tulip-3.8.0-src/thirdparty/sip-4.13.2/siplib/voidptr.c

thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/voidptr.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/sip.dir/voidptr.c.i"
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/thirdparty/sip-4.13.2/siplib && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /home/kdbanman/Desktop/tulip-3.8.0-src/thirdparty/sip-4.13.2/siplib/voidptr.c > CMakeFiles/sip.dir/voidptr.c.i

thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/voidptr.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/sip.dir/voidptr.c.s"
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/thirdparty/sip-4.13.2/siplib && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /home/kdbanman/Desktop/tulip-3.8.0-src/thirdparty/sip-4.13.2/siplib/voidptr.c -o CMakeFiles/sip.dir/voidptr.c.s

thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/voidptr.c.o.requires:
.PHONY : thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/voidptr.c.o.requires

thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/voidptr.c.o.provides: thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/voidptr.c.o.requires
	$(MAKE) -f thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/build.make thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/voidptr.c.o.provides.build
.PHONY : thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/voidptr.c.o.provides

thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/voidptr.c.o.provides.build: thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/voidptr.c.o

../thirdparty/sip-4.13.2/siplib/sip.h: ../thirdparty/sip-4.13.2/siplib/sip.h.in
../thirdparty/sip-4.13.2/siplib/sip.h: ../thirdparty/sip-4.13.2/siplib/siplib.c.in
	$(CMAKE_COMMAND) -E cmake_progress_report /home/kdbanman/Desktop/tulip-3.8.0-src/build/CMakeFiles $(CMAKE_PROGRESS_9)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating ../../../../thirdparty/sip-4.13.2/siplib/sip.h, ../../../../thirdparty/sip-4.13.2/siplib/siplib.c"
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/thirdparty/sip-4.13.2 && /usr/bin/python /home/kdbanman/Desktop/tulip-3.8.0-src/thirdparty/sip-4.13.2/siplib/../configure.py -b /home/kdbanman/Desktop/tulip-3.8.0-src/build/thirdparty/sip-4.13.2/siplib/../sipgen -e /home/kdbanman/Desktop/tulip-3.8.0-src/thirdparty/sip-4.13.2/siplib/../siplib -d /home/kdbanman/Desktop/tulip-3.8.0-src/build/thirdparty/sip-4.13.2/siplib/../siplib

../thirdparty/sip-4.13.2/siplib/siplib.c: ../thirdparty/sip-4.13.2/siplib/sip.h

# Object files for target sip
sip_OBJECTS = \
"CMakeFiles/sip.dir/apiversions.c.o" \
"CMakeFiles/sip.dir/bool.cpp.o" \
"CMakeFiles/sip.dir/descriptors.c.o" \
"CMakeFiles/sip.dir/objmap.c.o" \
"CMakeFiles/sip.dir/qtlib.c.o" \
"CMakeFiles/sip.dir/siplib.c.o" \
"CMakeFiles/sip.dir/threads.c.o" \
"CMakeFiles/sip.dir/voidptr.c.o"

# External object files for target sip
sip_EXTERNAL_OBJECTS =

thirdparty/sip-4.13.2/siplib/sip.so: thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/apiversions.c.o
thirdparty/sip-4.13.2/siplib/sip.so: thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/bool.cpp.o
thirdparty/sip-4.13.2/siplib/sip.so: thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/descriptors.c.o
thirdparty/sip-4.13.2/siplib/sip.so: thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/objmap.c.o
thirdparty/sip-4.13.2/siplib/sip.so: thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/qtlib.c.o
thirdparty/sip-4.13.2/siplib/sip.so: thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/siplib.c.o
thirdparty/sip-4.13.2/siplib/sip.so: thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/threads.c.o
thirdparty/sip-4.13.2/siplib/sip.so: thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/voidptr.c.o
thirdparty/sip-4.13.2/siplib/sip.so: /usr/lib/libpython2.7.so
thirdparty/sip-4.13.2/siplib/sip.so: thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/build.make
thirdparty/sip-4.13.2/siplib/sip.so: thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library sip.so"
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/thirdparty/sip-4.13.2/siplib && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sip.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/build: thirdparty/sip-4.13.2/siplib/sip.so
.PHONY : thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/build

thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/requires: thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/apiversions.c.o.requires
thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/requires: thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/bool.cpp.o.requires
thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/requires: thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/descriptors.c.o.requires
thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/requires: thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/objmap.c.o.requires
thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/requires: thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/qtlib.c.o.requires
thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/requires: thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/siplib.c.o.requires
thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/requires: thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/threads.c.o.requires
thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/requires: thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/voidptr.c.o.requires
.PHONY : thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/requires

thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/clean:
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build/thirdparty/sip-4.13.2/siplib && $(CMAKE_COMMAND) -P CMakeFiles/sip.dir/cmake_clean.cmake
.PHONY : thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/clean

thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/depend: ../thirdparty/sip-4.13.2/siplib/sip.h
thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/depend: ../thirdparty/sip-4.13.2/siplib/siplib.c
	cd /home/kdbanman/Desktop/tulip-3.8.0-src/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kdbanman/Desktop/tulip-3.8.0-src /home/kdbanman/Desktop/tulip-3.8.0-src/thirdparty/sip-4.13.2/siplib /home/kdbanman/Desktop/tulip-3.8.0-src/build /home/kdbanman/Desktop/tulip-3.8.0-src/build/thirdparty/sip-4.13.2/siplib /home/kdbanman/Desktop/tulip-3.8.0-src/build/thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : thirdparty/sip-4.13.2/siplib/CMakeFiles/sip.dir/depend
