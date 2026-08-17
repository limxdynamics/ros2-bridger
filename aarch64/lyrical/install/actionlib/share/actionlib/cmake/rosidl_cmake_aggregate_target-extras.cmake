# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target actionlib::actionlib
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${actionlib_TARGETS}.
if(actionlib_TARGETS AND NOT TARGET actionlib::actionlib)
  add_library(actionlib::actionlib INTERFACE IMPORTED)
  set_target_properties(actionlib::actionlib PROPERTIES
    INTERFACE_LINK_LIBRARIES "${actionlib_TARGETS}")
endif()
