# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.2

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

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/storassa/tinyb

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/storassa/tinyb/build

# Include any dependencies generated for this target.
include examples/CMakeFiles/notifications.dir/depend.make

# Include the progress variables for this target.
include examples/CMakeFiles/notifications.dir/progress.make

# Include the compile flags for this target's objects.
include examples/CMakeFiles/notifications.dir/flags.make

examples/CMakeFiles/notifications.dir/notifications.cpp.o: examples/CMakeFiles/notifications.dir/flags.make
examples/CMakeFiles/notifications.dir/notifications.cpp.o: ../examples/notifications.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/storassa/tinyb/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object examples/CMakeFiles/notifications.dir/notifications.cpp.o"
	cd /home/storassa/tinyb/build/examples && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/notifications.dir/notifications.cpp.o -c /home/storassa/tinyb/examples/notifications.cpp

examples/CMakeFiles/notifications.dir/notifications.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/notifications.dir/notifications.cpp.i"
	cd /home/storassa/tinyb/build/examples && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/storassa/tinyb/examples/notifications.cpp > CMakeFiles/notifications.dir/notifications.cpp.i

examples/CMakeFiles/notifications.dir/notifications.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/notifications.dir/notifications.cpp.s"
	cd /home/storassa/tinyb/build/examples && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/storassa/tinyb/examples/notifications.cpp -o CMakeFiles/notifications.dir/notifications.cpp.s

examples/CMakeFiles/notifications.dir/notifications.cpp.o.requires:
.PHONY : examples/CMakeFiles/notifications.dir/notifications.cpp.o.requires

examples/CMakeFiles/notifications.dir/notifications.cpp.o.provides: examples/CMakeFiles/notifications.dir/notifications.cpp.o.requires
	$(MAKE) -f examples/CMakeFiles/notifications.dir/build.make examples/CMakeFiles/notifications.dir/notifications.cpp.o.provides.build
.PHONY : examples/CMakeFiles/notifications.dir/notifications.cpp.o.provides

examples/CMakeFiles/notifications.dir/notifications.cpp.o.provides.build: examples/CMakeFiles/notifications.dir/notifications.cpp.o

# Object files for target notifications
notifications_OBJECTS = \
"CMakeFiles/notifications.dir/notifications.cpp.o"

# External object files for target notifications
notifications_EXTERNAL_OBJECTS =

examples/notifications: examples/CMakeFiles/notifications.dir/notifications.cpp.o
examples/notifications: examples/CMakeFiles/notifications.dir/build.make
examples/notifications: src/libtinyb.so.0.5.0.0.5.0.0.5.0
examples/notifications: examples/CMakeFiles/notifications.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable notifications"
	cd /home/storassa/tinyb/build/examples && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/notifications.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
examples/CMakeFiles/notifications.dir/build: examples/notifications
.PHONY : examples/CMakeFiles/notifications.dir/build

examples/CMakeFiles/notifications.dir/requires: examples/CMakeFiles/notifications.dir/notifications.cpp.o.requires
.PHONY : examples/CMakeFiles/notifications.dir/requires

examples/CMakeFiles/notifications.dir/clean:
	cd /home/storassa/tinyb/build/examples && $(CMAKE_COMMAND) -P CMakeFiles/notifications.dir/cmake_clean.cmake
.PHONY : examples/CMakeFiles/notifications.dir/clean

examples/CMakeFiles/notifications.dir/depend:
	cd /home/storassa/tinyb/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/storassa/tinyb /home/storassa/tinyb/examples /home/storassa/tinyb/build /home/storassa/tinyb/build/examples /home/storassa/tinyb/build/examples/CMakeFiles/notifications.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : examples/CMakeFiles/notifications.dir/depend

