# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.24

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2022.3.3\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2022.3.3\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\YGS_Tu\Desktop\code\c\qt1218

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\YGS_Tu\Desktop\code\c\qt1218\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/qt1218.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/qt1218.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/qt1218.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/qt1218.dir/flags.make

CMakeFiles/qt1218.dir/qt1218_autogen/mocs_compilation.cpp.obj: CMakeFiles/qt1218.dir/flags.make
CMakeFiles/qt1218.dir/qt1218_autogen/mocs_compilation.cpp.obj: CMakeFiles/qt1218.dir/includes_CXX.rsp
CMakeFiles/qt1218.dir/qt1218_autogen/mocs_compilation.cpp.obj: qt1218_autogen/mocs_compilation.cpp
CMakeFiles/qt1218.dir/qt1218_autogen/mocs_compilation.cpp.obj: CMakeFiles/qt1218.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\YGS_Tu\Desktop\code\c\qt1218\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/qt1218.dir/qt1218_autogen/mocs_compilation.cpp.obj"
	C:\Qt\Qt5.14.2\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/qt1218.dir/qt1218_autogen/mocs_compilation.cpp.obj -MF CMakeFiles\qt1218.dir\qt1218_autogen\mocs_compilation.cpp.obj.d -o CMakeFiles\qt1218.dir\qt1218_autogen\mocs_compilation.cpp.obj -c C:\Users\YGS_Tu\Desktop\code\c\qt1218\cmake-build-debug\qt1218_autogen\mocs_compilation.cpp

CMakeFiles/qt1218.dir/qt1218_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qt1218.dir/qt1218_autogen/mocs_compilation.cpp.i"
	C:\Qt\Qt5.14.2\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\YGS_Tu\Desktop\code\c\qt1218\cmake-build-debug\qt1218_autogen\mocs_compilation.cpp > CMakeFiles\qt1218.dir\qt1218_autogen\mocs_compilation.cpp.i

CMakeFiles/qt1218.dir/qt1218_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qt1218.dir/qt1218_autogen/mocs_compilation.cpp.s"
	C:\Qt\Qt5.14.2\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\YGS_Tu\Desktop\code\c\qt1218\cmake-build-debug\qt1218_autogen\mocs_compilation.cpp -o CMakeFiles\qt1218.dir\qt1218_autogen\mocs_compilation.cpp.s

CMakeFiles/qt1218.dir/main.cpp.obj: CMakeFiles/qt1218.dir/flags.make
CMakeFiles/qt1218.dir/main.cpp.obj: CMakeFiles/qt1218.dir/includes_CXX.rsp
CMakeFiles/qt1218.dir/main.cpp.obj: C:/Users/YGS_Tu/Desktop/code/c/qt1218/main.cpp
CMakeFiles/qt1218.dir/main.cpp.obj: CMakeFiles/qt1218.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\YGS_Tu\Desktop\code\c\qt1218\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/qt1218.dir/main.cpp.obj"
	C:\Qt\Qt5.14.2\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/qt1218.dir/main.cpp.obj -MF CMakeFiles\qt1218.dir\main.cpp.obj.d -o CMakeFiles\qt1218.dir\main.cpp.obj -c C:\Users\YGS_Tu\Desktop\code\c\qt1218\main.cpp

CMakeFiles/qt1218.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qt1218.dir/main.cpp.i"
	C:\Qt\Qt5.14.2\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\YGS_Tu\Desktop\code\c\qt1218\main.cpp > CMakeFiles\qt1218.dir\main.cpp.i

CMakeFiles/qt1218.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qt1218.dir/main.cpp.s"
	C:\Qt\Qt5.14.2\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\YGS_Tu\Desktop\code\c\qt1218\main.cpp -o CMakeFiles\qt1218.dir\main.cpp.s

CMakeFiles/qt1218.dir/func/datapage.cpp.obj: CMakeFiles/qt1218.dir/flags.make
CMakeFiles/qt1218.dir/func/datapage.cpp.obj: CMakeFiles/qt1218.dir/includes_CXX.rsp
CMakeFiles/qt1218.dir/func/datapage.cpp.obj: C:/Users/YGS_Tu/Desktop/code/c/qt1218/func/datapage.cpp
CMakeFiles/qt1218.dir/func/datapage.cpp.obj: CMakeFiles/qt1218.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\YGS_Tu\Desktop\code\c\qt1218\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/qt1218.dir/func/datapage.cpp.obj"
	C:\Qt\Qt5.14.2\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/qt1218.dir/func/datapage.cpp.obj -MF CMakeFiles\qt1218.dir\func\datapage.cpp.obj.d -o CMakeFiles\qt1218.dir\func\datapage.cpp.obj -c C:\Users\YGS_Tu\Desktop\code\c\qt1218\func\datapage.cpp

CMakeFiles/qt1218.dir/func/datapage.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qt1218.dir/func/datapage.cpp.i"
	C:\Qt\Qt5.14.2\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\YGS_Tu\Desktop\code\c\qt1218\func\datapage.cpp > CMakeFiles\qt1218.dir\func\datapage.cpp.i

CMakeFiles/qt1218.dir/func/datapage.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qt1218.dir/func/datapage.cpp.s"
	C:\Qt\Qt5.14.2\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\YGS_Tu\Desktop\code\c\qt1218\func\datapage.cpp -o CMakeFiles\qt1218.dir\func\datapage.cpp.s

CMakeFiles/qt1218.dir/func/homepage.cpp.obj: CMakeFiles/qt1218.dir/flags.make
CMakeFiles/qt1218.dir/func/homepage.cpp.obj: CMakeFiles/qt1218.dir/includes_CXX.rsp
CMakeFiles/qt1218.dir/func/homepage.cpp.obj: C:/Users/YGS_Tu/Desktop/code/c/qt1218/func/homepage.cpp
CMakeFiles/qt1218.dir/func/homepage.cpp.obj: CMakeFiles/qt1218.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\YGS_Tu\Desktop\code\c\qt1218\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/qt1218.dir/func/homepage.cpp.obj"
	C:\Qt\Qt5.14.2\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/qt1218.dir/func/homepage.cpp.obj -MF CMakeFiles\qt1218.dir\func\homepage.cpp.obj.d -o CMakeFiles\qt1218.dir\func\homepage.cpp.obj -c C:\Users\YGS_Tu\Desktop\code\c\qt1218\func\homepage.cpp

CMakeFiles/qt1218.dir/func/homepage.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qt1218.dir/func/homepage.cpp.i"
	C:\Qt\Qt5.14.2\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\YGS_Tu\Desktop\code\c\qt1218\func\homepage.cpp > CMakeFiles\qt1218.dir\func\homepage.cpp.i

CMakeFiles/qt1218.dir/func/homepage.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qt1218.dir/func/homepage.cpp.s"
	C:\Qt\Qt5.14.2\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\YGS_Tu\Desktop\code\c\qt1218\func\homepage.cpp -o CMakeFiles\qt1218.dir\func\homepage.cpp.s

CMakeFiles/qt1218.dir/func/searchpage.cpp.obj: CMakeFiles/qt1218.dir/flags.make
CMakeFiles/qt1218.dir/func/searchpage.cpp.obj: CMakeFiles/qt1218.dir/includes_CXX.rsp
CMakeFiles/qt1218.dir/func/searchpage.cpp.obj: C:/Users/YGS_Tu/Desktop/code/c/qt1218/func/searchpage.cpp
CMakeFiles/qt1218.dir/func/searchpage.cpp.obj: CMakeFiles/qt1218.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\YGS_Tu\Desktop\code\c\qt1218\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/qt1218.dir/func/searchpage.cpp.obj"
	C:\Qt\Qt5.14.2\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/qt1218.dir/func/searchpage.cpp.obj -MF CMakeFiles\qt1218.dir\func\searchpage.cpp.obj.d -o CMakeFiles\qt1218.dir\func\searchpage.cpp.obj -c C:\Users\YGS_Tu\Desktop\code\c\qt1218\func\searchpage.cpp

CMakeFiles/qt1218.dir/func/searchpage.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qt1218.dir/func/searchpage.cpp.i"
	C:\Qt\Qt5.14.2\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\YGS_Tu\Desktop\code\c\qt1218\func\searchpage.cpp > CMakeFiles\qt1218.dir\func\searchpage.cpp.i

CMakeFiles/qt1218.dir/func/searchpage.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qt1218.dir/func/searchpage.cpp.s"
	C:\Qt\Qt5.14.2\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\YGS_Tu\Desktop\code\c\qt1218\func\searchpage.cpp -o CMakeFiles\qt1218.dir\func\searchpage.cpp.s

CMakeFiles/qt1218.dir/func/syspage.cpp.obj: CMakeFiles/qt1218.dir/flags.make
CMakeFiles/qt1218.dir/func/syspage.cpp.obj: CMakeFiles/qt1218.dir/includes_CXX.rsp
CMakeFiles/qt1218.dir/func/syspage.cpp.obj: C:/Users/YGS_Tu/Desktop/code/c/qt1218/func/syspage.cpp
CMakeFiles/qt1218.dir/func/syspage.cpp.obj: CMakeFiles/qt1218.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\YGS_Tu\Desktop\code\c\qt1218\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/qt1218.dir/func/syspage.cpp.obj"
	C:\Qt\Qt5.14.2\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/qt1218.dir/func/syspage.cpp.obj -MF CMakeFiles\qt1218.dir\func\syspage.cpp.obj.d -o CMakeFiles\qt1218.dir\func\syspage.cpp.obj -c C:\Users\YGS_Tu\Desktop\code\c\qt1218\func\syspage.cpp

CMakeFiles/qt1218.dir/func/syspage.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qt1218.dir/func/syspage.cpp.i"
	C:\Qt\Qt5.14.2\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\YGS_Tu\Desktop\code\c\qt1218\func\syspage.cpp > CMakeFiles\qt1218.dir\func\syspage.cpp.i

CMakeFiles/qt1218.dir/func/syspage.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qt1218.dir/func/syspage.cpp.s"
	C:\Qt\Qt5.14.2\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\YGS_Tu\Desktop\code\c\qt1218\func\syspage.cpp -o CMakeFiles\qt1218.dir\func\syspage.cpp.s

CMakeFiles/qt1218.dir/inf/connectThread.cpp.obj: CMakeFiles/qt1218.dir/flags.make
CMakeFiles/qt1218.dir/inf/connectThread.cpp.obj: CMakeFiles/qt1218.dir/includes_CXX.rsp
CMakeFiles/qt1218.dir/inf/connectThread.cpp.obj: C:/Users/YGS_Tu/Desktop/code/c/qt1218/inf/connectThread.cpp
CMakeFiles/qt1218.dir/inf/connectThread.cpp.obj: CMakeFiles/qt1218.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\YGS_Tu\Desktop\code\c\qt1218\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/qt1218.dir/inf/connectThread.cpp.obj"
	C:\Qt\Qt5.14.2\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/qt1218.dir/inf/connectThread.cpp.obj -MF CMakeFiles\qt1218.dir\inf\connectThread.cpp.obj.d -o CMakeFiles\qt1218.dir\inf\connectThread.cpp.obj -c C:\Users\YGS_Tu\Desktop\code\c\qt1218\inf\connectThread.cpp

CMakeFiles/qt1218.dir/inf/connectThread.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qt1218.dir/inf/connectThread.cpp.i"
	C:\Qt\Qt5.14.2\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\YGS_Tu\Desktop\code\c\qt1218\inf\connectThread.cpp > CMakeFiles\qt1218.dir\inf\connectThread.cpp.i

CMakeFiles/qt1218.dir/inf/connectThread.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qt1218.dir/inf/connectThread.cpp.s"
	C:\Qt\Qt5.14.2\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\YGS_Tu\Desktop\code\c\qt1218\inf\connectThread.cpp -o CMakeFiles\qt1218.dir\inf\connectThread.cpp.s

CMakeFiles/qt1218.dir/inf/searchThread.cpp.obj: CMakeFiles/qt1218.dir/flags.make
CMakeFiles/qt1218.dir/inf/searchThread.cpp.obj: CMakeFiles/qt1218.dir/includes_CXX.rsp
CMakeFiles/qt1218.dir/inf/searchThread.cpp.obj: C:/Users/YGS_Tu/Desktop/code/c/qt1218/inf/searchThread.cpp
CMakeFiles/qt1218.dir/inf/searchThread.cpp.obj: CMakeFiles/qt1218.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\YGS_Tu\Desktop\code\c\qt1218\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/qt1218.dir/inf/searchThread.cpp.obj"
	C:\Qt\Qt5.14.2\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/qt1218.dir/inf/searchThread.cpp.obj -MF CMakeFiles\qt1218.dir\inf\searchThread.cpp.obj.d -o CMakeFiles\qt1218.dir\inf\searchThread.cpp.obj -c C:\Users\YGS_Tu\Desktop\code\c\qt1218\inf\searchThread.cpp

CMakeFiles/qt1218.dir/inf/searchThread.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qt1218.dir/inf/searchThread.cpp.i"
	C:\Qt\Qt5.14.2\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\YGS_Tu\Desktop\code\c\qt1218\inf\searchThread.cpp > CMakeFiles\qt1218.dir\inf\searchThread.cpp.i

CMakeFiles/qt1218.dir/inf/searchThread.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qt1218.dir/inf/searchThread.cpp.s"
	C:\Qt\Qt5.14.2\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\YGS_Tu\Desktop\code\c\qt1218\inf\searchThread.cpp -o CMakeFiles\qt1218.dir\inf\searchThread.cpp.s

CMakeFiles/qt1218.dir/inf/test.cpp.obj: CMakeFiles/qt1218.dir/flags.make
CMakeFiles/qt1218.dir/inf/test.cpp.obj: CMakeFiles/qt1218.dir/includes_CXX.rsp
CMakeFiles/qt1218.dir/inf/test.cpp.obj: C:/Users/YGS_Tu/Desktop/code/c/qt1218/inf/test.cpp
CMakeFiles/qt1218.dir/inf/test.cpp.obj: CMakeFiles/qt1218.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\YGS_Tu\Desktop\code\c\qt1218\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/qt1218.dir/inf/test.cpp.obj"
	C:\Qt\Qt5.14.2\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/qt1218.dir/inf/test.cpp.obj -MF CMakeFiles\qt1218.dir\inf\test.cpp.obj.d -o CMakeFiles\qt1218.dir\inf\test.cpp.obj -c C:\Users\YGS_Tu\Desktop\code\c\qt1218\inf\test.cpp

CMakeFiles/qt1218.dir/inf/test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qt1218.dir/inf/test.cpp.i"
	C:\Qt\Qt5.14.2\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\YGS_Tu\Desktop\code\c\qt1218\inf\test.cpp > CMakeFiles\qt1218.dir\inf\test.cpp.i

CMakeFiles/qt1218.dir/inf/test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qt1218.dir/inf/test.cpp.s"
	C:\Qt\Qt5.14.2\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\YGS_Tu\Desktop\code\c\qt1218\inf\test.cpp -o CMakeFiles\qt1218.dir\inf\test.cpp.s

# Object files for target qt1218
qt1218_OBJECTS = \
"CMakeFiles/qt1218.dir/qt1218_autogen/mocs_compilation.cpp.obj" \
"CMakeFiles/qt1218.dir/main.cpp.obj" \
"CMakeFiles/qt1218.dir/func/datapage.cpp.obj" \
"CMakeFiles/qt1218.dir/func/homepage.cpp.obj" \
"CMakeFiles/qt1218.dir/func/searchpage.cpp.obj" \
"CMakeFiles/qt1218.dir/func/syspage.cpp.obj" \
"CMakeFiles/qt1218.dir/inf/connectThread.cpp.obj" \
"CMakeFiles/qt1218.dir/inf/searchThread.cpp.obj" \
"CMakeFiles/qt1218.dir/inf/test.cpp.obj"

# External object files for target qt1218
qt1218_EXTERNAL_OBJECTS =

qt1218.exe: CMakeFiles/qt1218.dir/qt1218_autogen/mocs_compilation.cpp.obj
qt1218.exe: CMakeFiles/qt1218.dir/main.cpp.obj
qt1218.exe: CMakeFiles/qt1218.dir/func/datapage.cpp.obj
qt1218.exe: CMakeFiles/qt1218.dir/func/homepage.cpp.obj
qt1218.exe: CMakeFiles/qt1218.dir/func/searchpage.cpp.obj
qt1218.exe: CMakeFiles/qt1218.dir/func/syspage.cpp.obj
qt1218.exe: CMakeFiles/qt1218.dir/inf/connectThread.cpp.obj
qt1218.exe: CMakeFiles/qt1218.dir/inf/searchThread.cpp.obj
qt1218.exe: CMakeFiles/qt1218.dir/inf/test.cpp.obj
qt1218.exe: CMakeFiles/qt1218.dir/build.make
qt1218.exe: C:/Qt/Qt5.14.2/5.14.2/mingw73_64/lib/libQt5Widgets.a
qt1218.exe: C:/Qt/Qt5.14.2/5.14.2/mingw73_64/lib/libQt5Gui.a
qt1218.exe: C:/Qt/Qt5.14.2/5.14.2/mingw73_64/lib/libQt5Network.a
qt1218.exe: C:/Qt/Qt5.14.2/5.14.2/mingw73_64/lib/libQt5Core.a
qt1218.exe: CMakeFiles/qt1218.dir/linklibs.rsp
qt1218.exe: CMakeFiles/qt1218.dir/objects1.rsp
qt1218.exe: CMakeFiles/qt1218.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\YGS_Tu\Desktop\code\c\qt1218\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking CXX executable qt1218.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\qt1218.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/qt1218.dir/build: qt1218.exe
.PHONY : CMakeFiles/qt1218.dir/build

CMakeFiles/qt1218.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\qt1218.dir\cmake_clean.cmake
.PHONY : CMakeFiles/qt1218.dir/clean

CMakeFiles/qt1218.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\YGS_Tu\Desktop\code\c\qt1218 C:\Users\YGS_Tu\Desktop\code\c\qt1218 C:\Users\YGS_Tu\Desktop\code\c\qt1218\cmake-build-debug C:\Users\YGS_Tu\Desktop\code\c\qt1218\cmake-build-debug C:\Users\YGS_Tu\Desktop\code\c\qt1218\cmake-build-debug\CMakeFiles\qt1218.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/qt1218.dir/depend

