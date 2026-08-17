# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target controller_msgs::controller_msgs
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${controller_msgs_TARGETS}.
if(controller_msgs_TARGETS AND NOT TARGET controller_msgs::controller_msgs)
  add_library(controller_msgs::controller_msgs INTERFACE IMPORTED)
  set_target_properties(controller_msgs::controller_msgs PROPERTIES
    INTERFACE_LINK_LIBRARIES "${controller_msgs_TARGETS}")
endif()
