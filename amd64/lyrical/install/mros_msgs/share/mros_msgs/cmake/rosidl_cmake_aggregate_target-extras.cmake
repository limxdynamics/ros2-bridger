# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target mros_msgs::mros_msgs
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${mros_msgs_TARGETS}.
if(mros_msgs_TARGETS AND NOT TARGET mros_msgs::mros_msgs)
  add_library(mros_msgs::mros_msgs INTERFACE IMPORTED)
  set_target_properties(mros_msgs::mros_msgs PROPERTIES
    INTERFACE_LINK_LIBRARIES "${mros_msgs_TARGETS}")
endif()
