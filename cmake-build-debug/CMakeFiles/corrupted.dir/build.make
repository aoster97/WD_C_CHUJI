# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.22.3/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.22.3/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/aochenwen/Desktop/计算机基础笔记/WD_C

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/aochenwen/Desktop/计算机基础笔记/WD_C/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/corrupted.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/corrupted.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/corrupted.dir/flags.make

CMakeFiles/corrupted.dir/corrupted.c.o: CMakeFiles/corrupted.dir/flags.make
CMakeFiles/corrupted.dir/corrupted.c.o: ../corrupted.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/aochenwen/Desktop/计算机基础笔记/WD_C/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/corrupted.dir/corrupted.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/corrupted.dir/corrupted.c.o -c /Users/aochenwen/Desktop/计算机基础笔记/WD_C/corrupted.c

CMakeFiles/corrupted.dir/corrupted.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/corrupted.dir/corrupted.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/aochenwen/Desktop/计算机基础笔记/WD_C/corrupted.c > CMakeFiles/corrupted.dir/corrupted.c.i

CMakeFiles/corrupted.dir/corrupted.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/corrupted.dir/corrupted.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/aochenwen/Desktop/计算机基础笔记/WD_C/corrupted.c -o CMakeFiles/corrupted.dir/corrupted.c.s

# Object files for target corrupted
corrupted_OBJECTS = \
"CMakeFiles/corrupted.dir/corrupted.c.o"

# External object files for target corrupted
corrupted_EXTERNAL_OBJECTS =

../output/corrupted: CMakeFiles/corrupted.dir/corrupted.c.o
../output/corrupted: CMakeFiles/corrupted.dir/build.make
../output/corrupted: CMakeFiles/corrupted.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/aochenwen/Desktop/计算机基础笔记/WD_C/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable ../output/corrupted"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/corrupted.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/corrupted.dir/build: ../output/corrupted
.PHONY : CMakeFiles/corrupted.dir/build

CMakeFiles/corrupted.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/corrupted.dir/cmake_clean.cmake
.PHONY : CMakeFiles/corrupted.dir/clean

CMakeFiles/corrupted.dir/depend:
	cd /Users/aochenwen/Desktop/计算机基础笔记/WD_C/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/aochenwen/Desktop/计算机基础笔记/WD_C /Users/aochenwen/Desktop/计算机基础笔记/WD_C /Users/aochenwen/Desktop/计算机基础笔记/WD_C/cmake-build-debug /Users/aochenwen/Desktop/计算机基础笔记/WD_C/cmake-build-debug /Users/aochenwen/Desktop/计算机基础笔记/WD_C/cmake-build-debug/CMakeFiles/corrupted.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/corrupted.dir/depend

