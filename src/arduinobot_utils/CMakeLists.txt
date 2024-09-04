cmake_minimum_required(VERSION 3.8)
project(arduinobot_utils)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED) 
find_package(ament_cmake_python REQUIRED) 
find_package(rclpy REQUIRED) 
find_package(arduinobot_interfaces REQUIRED) 
# find_package(<dependency> REQUIRED)

ament_python_install_package(${PROJECT_NAME})

install(PROGRAMS
  ${PROJECT_NAME}/angle_conversion.py 
  DESTINATION lib/${PROJECT_NAME} 
)


ament_package()
