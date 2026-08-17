# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target limx_arm_msgs::limx_arm_msgs
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${limx_arm_msgs_TARGETS}.
if(limx_arm_msgs_TARGETS AND NOT TARGET limx_arm_msgs::limx_arm_msgs)
  add_library(limx_arm_msgs::limx_arm_msgs INTERFACE IMPORTED)
  set_target_properties(limx_arm_msgs::limx_arm_msgs PROPERTIES
    INTERFACE_LINK_LIBRARIES "${limx_arm_msgs_TARGETS}")
endif()
