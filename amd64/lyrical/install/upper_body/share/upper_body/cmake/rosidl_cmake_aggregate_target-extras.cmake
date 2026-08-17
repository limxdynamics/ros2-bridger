# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target upper_body::upper_body
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${upper_body_TARGETS}.
if(upper_body_TARGETS AND NOT TARGET upper_body::upper_body)
  add_library(upper_body::upper_body INTERFACE IMPORTED)
  set_target_properties(upper_body::upper_body PROPERTIES
    INTERFACE_LINK_LIBRARIES "${upper_body_TARGETS}")
endif()
