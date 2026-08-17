# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target hand_msgs::hand_msgs
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${hand_msgs_TARGETS}.
if(hand_msgs_TARGETS AND NOT TARGET hand_msgs::hand_msgs)
  add_library(hand_msgs::hand_msgs INTERFACE IMPORTED)
  set_target_properties(hand_msgs::hand_msgs PROPERTIES
    INTERFACE_LINK_LIBRARIES "${hand_msgs_TARGETS}")
endif()
