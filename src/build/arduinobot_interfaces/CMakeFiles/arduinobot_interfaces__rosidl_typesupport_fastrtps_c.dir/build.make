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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/marcos/arduinobot_ws/src/arduinobot_interfaces

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/marcos/arduinobot_ws/src/build/arduinobot_interfaces

# Include any dependencies generated for this target.
include CMakeFiles/arduinobot_interfaces__rosidl_typesupport_fastrtps_c.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/arduinobot_interfaces__rosidl_typesupport_fastrtps_c.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/arduinobot_interfaces__rosidl_typesupport_fastrtps_c.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/arduinobot_interfaces__rosidl_typesupport_fastrtps_c.dir/flags.make

rosidl_typesupport_fastrtps_c/arduinobot_interfaces/srv/detail/euler_to_quaternion__rosidl_typesupport_fastrtps_c.h: /opt/ros/humble/lib/rosidl_typesupport_fastrtps_c/rosidl_typesupport_fastrtps_c
rosidl_typesupport_fastrtps_c/arduinobot_interfaces/srv/detail/euler_to_quaternion__rosidl_typesupport_fastrtps_c.h: /opt/ros/humble/local/lib/python3.10/dist-packages/rosidl_typesupport_fastrtps_c/__init__.py
rosidl_typesupport_fastrtps_c/arduinobot_interfaces/srv/detail/euler_to_quaternion__rosidl_typesupport_fastrtps_c.h: /opt/ros/humble/share/rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
rosidl_typesupport_fastrtps_c/arduinobot_interfaces/srv/detail/euler_to_quaternion__rosidl_typesupport_fastrtps_c.h: /opt/ros/humble/share/rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
rosidl_typesupport_fastrtps_c/arduinobot_interfaces/srv/detail/euler_to_quaternion__rosidl_typesupport_fastrtps_c.h: /opt/ros/humble/share/rosidl_typesupport_fastrtps_c/resource/msg__rosidl_typesupport_fastrtps_c.h.em
rosidl_typesupport_fastrtps_c/arduinobot_interfaces/srv/detail/euler_to_quaternion__rosidl_typesupport_fastrtps_c.h: /opt/ros/humble/share/rosidl_typesupport_fastrtps_c/resource/msg__type_support_c.cpp.em
rosidl_typesupport_fastrtps_c/arduinobot_interfaces/srv/detail/euler_to_quaternion__rosidl_typesupport_fastrtps_c.h: /opt/ros/humble/share/rosidl_typesupport_fastrtps_c/resource/srv__rosidl_typesupport_fastrtps_c.h.em
rosidl_typesupport_fastrtps_c/arduinobot_interfaces/srv/detail/euler_to_quaternion__rosidl_typesupport_fastrtps_c.h: /opt/ros/humble/share/rosidl_typesupport_fastrtps_c/resource/srv__type_support_c.cpp.em
rosidl_typesupport_fastrtps_c/arduinobot_interfaces/srv/detail/euler_to_quaternion__rosidl_typesupport_fastrtps_c.h: rosidl_adapter/arduinobot_interfaces/srv/EulerToQuaternion.idl
rosidl_typesupport_fastrtps_c/arduinobot_interfaces/srv/detail/euler_to_quaternion__rosidl_typesupport_fastrtps_c.h: rosidl_adapter/arduinobot_interfaces/srv/QuaternionToEuler.idl
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/marcos/arduinobot_ws/src/build/arduinobot_interfaces/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating C type support for eProsima Fast-RTPS"
	/usr/bin/python3 /opt/ros/humble/lib/rosidl_typesupport_fastrtps_c/rosidl_typesupport_fastrtps_c --generator-arguments-file /home/marcos/arduinobot_ws/src/build/arduinobot_interfaces/rosidl_typesupport_fastrtps_c__arguments.json

rosidl_typesupport_fastrtps_c/arduinobot_interfaces/srv/detail/euler_to_quaternion__type_support_c.cpp: rosidl_typesupport_fastrtps_c/arduinobot_interfaces/srv/detail/euler_to_quaternion__rosidl_typesupport_fastrtps_c.h
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_typesupport_fastrtps_c/arduinobot_interfaces/srv/detail/euler_to_quaternion__type_support_c.cpp

rosidl_typesupport_fastrtps_c/arduinobot_interfaces/srv/detail/quaternion_to_euler__rosidl_typesupport_fastrtps_c.h: rosidl_typesupport_fastrtps_c/arduinobot_interfaces/srv/detail/euler_to_quaternion__rosidl_typesupport_fastrtps_c.h
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_typesupport_fastrtps_c/arduinobot_interfaces/srv/detail/quaternion_to_euler__rosidl_typesupport_fastrtps_c.h

rosidl_typesupport_fastrtps_c/arduinobot_interfaces/srv/detail/quaternion_to_euler__type_support_c.cpp: rosidl_typesupport_fastrtps_c/arduinobot_interfaces/srv/detail/euler_to_quaternion__rosidl_typesupport_fastrtps_c.h
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_typesupport_fastrtps_c/arduinobot_interfaces/srv/detail/quaternion_to_euler__type_support_c.cpp

CMakeFiles/arduinobot_interfaces__rosidl_typesupport_fastrtps_c.dir/rosidl_typesupport_fastrtps_c/arduinobot_interfaces/srv/detail/euler_to_quaternion__type_support_c.cpp.o: CMakeFiles/arduinobot_interfaces__rosidl_typesupport_fastrtps_c.dir/flags.make
CMakeFiles/arduinobot_interfaces__rosidl_typesupport_fastrtps_c.dir/rosidl_typesupport_fastrtps_c/arduinobot_interfaces/srv/detail/euler_to_quaternion__type_support_c.cpp.o: rosidl_typesupport_fastrtps_c/arduinobot_interfaces/srv/detail/euler_to_quaternion__type_support_c.cpp
CMakeFiles/arduinobot_interfaces__rosidl_typesupport_fastrtps_c.dir/rosidl_typesupport_fastrtps_c/arduinobot_interfaces/srv/detail/euler_to_quaternion__type_support_c.cpp.o: CMakeFiles/arduinobot_interfaces__rosidl_typesupport_fastrtps_c.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/marcos/arduinobot_ws/src/build/arduinobot_interfaces/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/arduinobot_interfaces__rosidl_typesupport_fastrtps_c.dir/rosidl_typesupport_fastrtps_c/arduinobot_interfaces/srv/detail/euler_to_quaternion__type_support_c.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/arduinobot_interfaces__rosidl_typesupport_fastrtps_c.dir/rosidl_typesupport_fastrtps_c/arduinobot_interfaces/srv/detail/euler_to_quaternion__type_support_c.cpp.o -MF CMakeFiles/arduinobot_interfaces__rosidl_typesupport_fastrtps_c.dir/rosidl_typesupport_fastrtps_c/arduinobot_interfaces/srv/detail/euler_to_quaternion__type_support_c.cpp.o.d -o CMakeFiles/arduinobot_interfaces__rosidl_typesupport_fastrtps_c.dir/rosidl_typesupport_fastrtps_c/arduinobot_interfaces/srv/detail/euler_to_quaternion__type_support_c.cpp.o -c /home/marcos/arduinobot_ws/src/build/arduinobot_interfaces/rosidl_typesupport_fastrtps_c/arduinobot_interfaces/srv/detail/euler_to_quaternion__type_support_c.cpp

CMakeFiles/arduinobot_interfaces__rosidl_typesupport_fastrtps_c.dir/rosidl_typesupport_fastrtps_c/arduinobot_interfaces/srv/detail/euler_to_quaternion__type_support_c.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/arduinobot_interfaces__rosidl_typesupport_fastrtps_c.dir/rosidl_typesupport_fastrtps_c/arduinobot_interfaces/srv/detail/euler_to_quaternion__type_support_c.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/marcos/arduinobot_ws/src/build/arduinobot_interfaces/rosidl_typesupport_fastrtps_c/arduinobot_interfaces/srv/detail/euler_to_quaternion__type_support_c.cpp > CMakeFiles/arduinobot_interfaces__rosidl_typesupport_fastrtps_c.dir/rosidl_typesupport_fastrtps_c/arduinobot_interfaces/srv/detail/euler_to_quaternion__type_support_c.cpp.i

CMakeFiles/arduinobot_interfaces__rosidl_typesupport_fastrtps_c.dir/rosidl_typesupport_fastrtps_c/arduinobot_interfaces/srv/detail/euler_to_quaternion__type_support_c.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/arduinobot_interfaces__rosidl_typesupport_fastrtps_c.dir/rosidl_typesupport_fastrtps_c/arduinobot_interfaces/srv/detail/euler_to_quaternion__type_support_c.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/marcos/arduinobot_ws/src/build/arduinobot_interfaces/rosidl_typesupport_fastrtps_c/arduinobot_interfaces/srv/detail/euler_to_quaternion__type_support_c.cpp -o CMakeFiles/arduinobot_interfaces__rosidl_typesupport_fastrtps_c.dir/rosidl_typesupport_fastrtps_c/arduinobot_interfaces/srv/detail/euler_to_quaternion__type_support_c.cpp.s

CMakeFiles/arduinobot_interfaces__rosidl_typesupport_fastrtps_c.dir/rosidl_typesupport_fastrtps_c/arduinobot_interfaces/srv/detail/quaternion_to_euler__type_support_c.cpp.o: CMakeFiles/arduinobot_interfaces__rosidl_typesupport_fastrtps_c.dir/flags.make
CMakeFiles/arduinobot_interfaces__rosidl_typesupport_fastrtps_c.dir/rosidl_typesupport_fastrtps_c/arduinobot_interfaces/srv/detail/quaternion_to_euler__type_support_c.cpp.o: rosidl_typesupport_fastrtps_c/arduinobot_interfaces/srv/detail/quaternion_to_euler__type_support_c.cpp
CMakeFiles/arduinobot_interfaces__rosidl_typesupport_fastrtps_c.dir/rosidl_typesupport_fastrtps_c/arduinobot_interfaces/srv/detail/quaternion_to_euler__type_support_c.cpp.o: CMakeFiles/arduinobot_interfaces__rosidl_typesupport_fastrtps_c.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/marcos/arduinobot_ws/src/build/arduinobot_interfaces/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/arduinobot_interfaces__rosidl_typesupport_fastrtps_c.dir/rosidl_typesupport_fastrtps_c/arduinobot_interfaces/srv/detail/quaternion_to_euler__type_support_c.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/arduinobot_interfaces__rosidl_typesupport_fastrtps_c.dir/rosidl_typesupport_fastrtps_c/arduinobot_interfaces/srv/detail/quaternion_to_euler__type_support_c.cpp.o -MF CMakeFiles/arduinobot_interfaces__rosidl_typesupport_fastrtps_c.dir/rosidl_typesupport_fastrtps_c/arduinobot_interfaces/srv/detail/quaternion_to_euler__type_support_c.cpp.o.d -o CMakeFiles/arduinobot_interfaces__rosidl_typesupport_fastrtps_c.dir/rosidl_typesupport_fastrtps_c/arduinobot_interfaces/srv/detail/quaternion_to_euler__type_support_c.cpp.o -c /home/marcos/arduinobot_ws/src/build/arduinobot_interfaces/rosidl_typesupport_fastrtps_c/arduinobot_interfaces/srv/detail/quaternion_to_euler__type_support_c.cpp

CMakeFiles/arduinobot_interfaces__rosidl_typesupport_fastrtps_c.dir/rosidl_typesupport_fastrtps_c/arduinobot_interfaces/srv/detail/quaternion_to_euler__type_support_c.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/arduinobot_interfaces__rosidl_typesupport_fastrtps_c.dir/rosidl_typesupport_fastrtps_c/arduinobot_interfaces/srv/detail/quaternion_to_euler__type_support_c.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/marcos/arduinobot_ws/src/build/arduinobot_interfaces/rosidl_typesupport_fastrtps_c/arduinobot_interfaces/srv/detail/quaternion_to_euler__type_support_c.cpp > CMakeFiles/arduinobot_interfaces__rosidl_typesupport_fastrtps_c.dir/rosidl_typesupport_fastrtps_c/arduinobot_interfaces/srv/detail/quaternion_to_euler__type_support_c.cpp.i

CMakeFiles/arduinobot_interfaces__rosidl_typesupport_fastrtps_c.dir/rosidl_typesupport_fastrtps_c/arduinobot_interfaces/srv/detail/quaternion_to_euler__type_support_c.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/arduinobot_interfaces__rosidl_typesupport_fastrtps_c.dir/rosidl_typesupport_fastrtps_c/arduinobot_interfaces/srv/detail/quaternion_to_euler__type_support_c.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/marcos/arduinobot_ws/src/build/arduinobot_interfaces/rosidl_typesupport_fastrtps_c/arduinobot_interfaces/srv/detail/quaternion_to_euler__type_support_c.cpp -o CMakeFiles/arduinobot_interfaces__rosidl_typesupport_fastrtps_c.dir/rosidl_typesupport_fastrtps_c/arduinobot_interfaces/srv/detail/quaternion_to_euler__type_support_c.cpp.s

# Object files for target arduinobot_interfaces__rosidl_typesupport_fastrtps_c
arduinobot_interfaces__rosidl_typesupport_fastrtps_c_OBJECTS = \
"CMakeFiles/arduinobot_interfaces__rosidl_typesupport_fastrtps_c.dir/rosidl_typesupport_fastrtps_c/arduinobot_interfaces/srv/detail/euler_to_quaternion__type_support_c.cpp.o" \
"CMakeFiles/arduinobot_interfaces__rosidl_typesupport_fastrtps_c.dir/rosidl_typesupport_fastrtps_c/arduinobot_interfaces/srv/detail/quaternion_to_euler__type_support_c.cpp.o"

# External object files for target arduinobot_interfaces__rosidl_typesupport_fastrtps_c
arduinobot_interfaces__rosidl_typesupport_fastrtps_c_EXTERNAL_OBJECTS =

libarduinobot_interfaces__rosidl_typesupport_fastrtps_c.so: CMakeFiles/arduinobot_interfaces__rosidl_typesupport_fastrtps_c.dir/rosidl_typesupport_fastrtps_c/arduinobot_interfaces/srv/detail/euler_to_quaternion__type_support_c.cpp.o
libarduinobot_interfaces__rosidl_typesupport_fastrtps_c.so: CMakeFiles/arduinobot_interfaces__rosidl_typesupport_fastrtps_c.dir/rosidl_typesupport_fastrtps_c/arduinobot_interfaces/srv/detail/quaternion_to_euler__type_support_c.cpp.o
libarduinobot_interfaces__rosidl_typesupport_fastrtps_c.so: CMakeFiles/arduinobot_interfaces__rosidl_typesupport_fastrtps_c.dir/build.make
libarduinobot_interfaces__rosidl_typesupport_fastrtps_c.so: /opt/ros/humble/lib/librosidl_typesupport_fastrtps_cpp.so
libarduinobot_interfaces__rosidl_typesupport_fastrtps_c.so: /opt/ros/humble/lib/librosidl_typesupport_fastrtps_c.so
libarduinobot_interfaces__rosidl_typesupport_fastrtps_c.so: libarduinobot_interfaces__rosidl_generator_c.so
libarduinobot_interfaces__rosidl_typesupport_fastrtps_c.so: /opt/ros/humble/lib/libfastcdr.so.1.0.24
libarduinobot_interfaces__rosidl_typesupport_fastrtps_c.so: /opt/ros/humble/lib/librmw.so
libarduinobot_interfaces__rosidl_typesupport_fastrtps_c.so: /opt/ros/humble/lib/librosidl_runtime_c.so
libarduinobot_interfaces__rosidl_typesupport_fastrtps_c.so: /opt/ros/humble/lib/librcutils.so
libarduinobot_interfaces__rosidl_typesupport_fastrtps_c.so: CMakeFiles/arduinobot_interfaces__rosidl_typesupport_fastrtps_c.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/marcos/arduinobot_ws/src/build/arduinobot_interfaces/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX shared library libarduinobot_interfaces__rosidl_typesupport_fastrtps_c.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/arduinobot_interfaces__rosidl_typesupport_fastrtps_c.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/arduinobot_interfaces__rosidl_typesupport_fastrtps_c.dir/build: libarduinobot_interfaces__rosidl_typesupport_fastrtps_c.so
.PHONY : CMakeFiles/arduinobot_interfaces__rosidl_typesupport_fastrtps_c.dir/build

CMakeFiles/arduinobot_interfaces__rosidl_typesupport_fastrtps_c.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/arduinobot_interfaces__rosidl_typesupport_fastrtps_c.dir/cmake_clean.cmake
.PHONY : CMakeFiles/arduinobot_interfaces__rosidl_typesupport_fastrtps_c.dir/clean

CMakeFiles/arduinobot_interfaces__rosidl_typesupport_fastrtps_c.dir/depend: rosidl_typesupport_fastrtps_c/arduinobot_interfaces/srv/detail/euler_to_quaternion__rosidl_typesupport_fastrtps_c.h
CMakeFiles/arduinobot_interfaces__rosidl_typesupport_fastrtps_c.dir/depend: rosidl_typesupport_fastrtps_c/arduinobot_interfaces/srv/detail/euler_to_quaternion__type_support_c.cpp
CMakeFiles/arduinobot_interfaces__rosidl_typesupport_fastrtps_c.dir/depend: rosidl_typesupport_fastrtps_c/arduinobot_interfaces/srv/detail/quaternion_to_euler__rosidl_typesupport_fastrtps_c.h
CMakeFiles/arduinobot_interfaces__rosidl_typesupport_fastrtps_c.dir/depend: rosidl_typesupport_fastrtps_c/arduinobot_interfaces/srv/detail/quaternion_to_euler__type_support_c.cpp
	cd /home/marcos/arduinobot_ws/src/build/arduinobot_interfaces && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/marcos/arduinobot_ws/src/arduinobot_interfaces /home/marcos/arduinobot_ws/src/arduinobot_interfaces /home/marcos/arduinobot_ws/src/build/arduinobot_interfaces /home/marcos/arduinobot_ws/src/build/arduinobot_interfaces /home/marcos/arduinobot_ws/src/build/arduinobot_interfaces/CMakeFiles/arduinobot_interfaces__rosidl_typesupport_fastrtps_c.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/arduinobot_interfaces__rosidl_typesupport_fastrtps_c.dir/depend

