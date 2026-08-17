# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target teleop_msgs::teleop_msgs
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${teleop_msgs_TARGETS}.
if(teleop_msgs_TARGETS AND NOT TARGET teleop_msgs::teleop_msgs)
  add_library(teleop_msgs::teleop_msgs INTERFACE IMPORTED)
  set_target_properties(teleop_msgs::teleop_msgs PROPERTIES
    INTERFACE_LINK_LIBRARIES "${teleop_msgs_TARGETS}")
endif()
