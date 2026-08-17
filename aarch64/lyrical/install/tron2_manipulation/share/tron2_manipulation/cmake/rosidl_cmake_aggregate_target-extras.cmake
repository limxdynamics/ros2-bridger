# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target tron2_manipulation::tron2_manipulation
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${tron2_manipulation_TARGETS}.
if(tron2_manipulation_TARGETS AND NOT TARGET tron2_manipulation::tron2_manipulation)
  add_library(tron2_manipulation::tron2_manipulation INTERFACE IMPORTED)
  set_target_properties(tron2_manipulation::tron2_manipulation PROPERTIES
    INTERFACE_LINK_LIBRARIES "${tron2_manipulation_TARGETS}")
endif()
