# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/macbook/Documents/GitHub/GroupAssignment0

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/macbook/Documents/GitHub/GroupAssignment0/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/GroupAssignment0.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/GroupAssignment0.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/GroupAssignment0.dir/flags.make

CMakeFiles/GroupAssignment0.dir/Group_Assignment_0/maincpp.cpp.o: CMakeFiles/GroupAssignment0.dir/flags.make
CMakeFiles/GroupAssignment0.dir/Group_Assignment_0/maincpp.cpp.o: ../Group\ Assignment\ 0/maincpp.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/macbook/Documents/GitHub/GroupAssignment0/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/GroupAssignment0.dir/Group_Assignment_0/maincpp.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GroupAssignment0.dir/Group_Assignment_0/maincpp.cpp.o -c "/Users/macbook/Documents/GitHub/GroupAssignment0/Group Assignment 0/maincpp.cpp"

CMakeFiles/GroupAssignment0.dir/Group_Assignment_0/maincpp.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GroupAssignment0.dir/Group_Assignment_0/maincpp.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/macbook/Documents/GitHub/GroupAssignment0/Group Assignment 0/maincpp.cpp" > CMakeFiles/GroupAssignment0.dir/Group_Assignment_0/maincpp.cpp.i

CMakeFiles/GroupAssignment0.dir/Group_Assignment_0/maincpp.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GroupAssignment0.dir/Group_Assignment_0/maincpp.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/macbook/Documents/GitHub/GroupAssignment0/Group Assignment 0/maincpp.cpp" -o CMakeFiles/GroupAssignment0.dir/Group_Assignment_0/maincpp.cpp.s

CMakeFiles/GroupAssignment0.dir/Group_Assignment_0/maincpp.cpp.o.requires:

.PHONY : CMakeFiles/GroupAssignment0.dir/Group_Assignment_0/maincpp.cpp.o.requires

CMakeFiles/GroupAssignment0.dir/Group_Assignment_0/maincpp.cpp.o.provides: CMakeFiles/GroupAssignment0.dir/Group_Assignment_0/maincpp.cpp.o.requires
	$(MAKE) -f CMakeFiles/GroupAssignment0.dir/build.make CMakeFiles/GroupAssignment0.dir/Group_Assignment_0/maincpp.cpp.o.provides.build
.PHONY : CMakeFiles/GroupAssignment0.dir/Group_Assignment_0/maincpp.cpp.o.provides

CMakeFiles/GroupAssignment0.dir/Group_Assignment_0/maincpp.cpp.o.provides.build: CMakeFiles/GroupAssignment0.dir/Group_Assignment_0/maincpp.cpp.o


# Object files for target GroupAssignment0
GroupAssignment0_OBJECTS = \
"CMakeFiles/GroupAssignment0.dir/Group_Assignment_0/maincpp.cpp.o"

# External object files for target GroupAssignment0
GroupAssignment0_EXTERNAL_OBJECTS =

GroupAssignment0: CMakeFiles/GroupAssignment0.dir/Group_Assignment_0/maincpp.cpp.o
GroupAssignment0: CMakeFiles/GroupAssignment0.dir/build.make
GroupAssignment0: CMakeFiles/GroupAssignment0.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/macbook/Documents/GitHub/GroupAssignment0/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable GroupAssignment0"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/GroupAssignment0.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/GroupAssignment0.dir/build: GroupAssignment0

.PHONY : CMakeFiles/GroupAssignment0.dir/build

CMakeFiles/GroupAssignment0.dir/requires: CMakeFiles/GroupAssignment0.dir/Group_Assignment_0/maincpp.cpp.o.requires

.PHONY : CMakeFiles/GroupAssignment0.dir/requires

CMakeFiles/GroupAssignment0.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/GroupAssignment0.dir/cmake_clean.cmake
.PHONY : CMakeFiles/GroupAssignment0.dir/clean

CMakeFiles/GroupAssignment0.dir/depend:
	cd /Users/macbook/Documents/GitHub/GroupAssignment0/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/macbook/Documents/GitHub/GroupAssignment0 /Users/macbook/Documents/GitHub/GroupAssignment0 /Users/macbook/Documents/GitHub/GroupAssignment0/cmake-build-debug /Users/macbook/Documents/GitHub/GroupAssignment0/cmake-build-debug /Users/macbook/Documents/GitHub/GroupAssignment0/cmake-build-debug/CMakeFiles/GroupAssignment0.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/GroupAssignment0.dir/depend

