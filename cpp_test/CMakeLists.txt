cmake_minimum_required(VERSION 3.5)
project(cpp_test)

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(example_interfaces REQUIRED)

add_executable(node_cpp_ilk src/ilk_deneme.cpp)
ament_target_dependencies(node_cpp_ilk rclcpp)

add_executable(pub_den_cpp_00 src/pub_den_cpp_00.cpp)
ament_target_dependencies(pub_den_cpp_00 rclcpp example_interfaces)

add_executable(sub_den_cpp_00 src/sub_den_cpp_00.cpp)
ament_target_dependencies(sub_den_cpp_00 rclcpp example_interfaces)

add_executable(sub_den_cpp_01 src/sub_den_cpp_01.cpp)
ament_target_dependencies(sub_den_cpp_01 rclcpp example_interfaces)

install(TARGETS 
  node_cpp_ilk
  pub_den_cpp_00
  sub_den_cpp_00
  sub_den_cpp_01
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()
