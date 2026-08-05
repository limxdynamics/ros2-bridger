// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from teleop_msgs:msg/KeyPoint.idl
// generated code does not contain a copyright notice

#ifndef TELEOP_MSGS__MSG__DETAIL__KEY_POINT__STRUCT_H_
#define TELEOP_MSGS__MSG__DETAIL__KEY_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/KeyPoint in the package teleop_msgs.
typedef struct teleop_msgs__msg__KeyPoint
{
  rosidl_runtime_c__String name;
  geometry_msgs__msg__Pose pose;
} teleop_msgs__msg__KeyPoint;

// Struct for a sequence of teleop_msgs__msg__KeyPoint.
typedef struct teleop_msgs__msg__KeyPoint__Sequence
{
  teleop_msgs__msg__KeyPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} teleop_msgs__msg__KeyPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TELEOP_MSGS__MSG__DETAIL__KEY_POINT__STRUCT_H_
