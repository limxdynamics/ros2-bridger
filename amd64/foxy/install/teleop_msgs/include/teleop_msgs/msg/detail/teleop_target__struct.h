// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from teleop_msgs:msg/TeleopTarget.idl
// generated code does not contain a copyright notice

#ifndef TELEOP_MSGS__MSG__DETAIL__TELEOP_TARGET__STRUCT_H_
#define TELEOP_MSGS__MSG__DETAIL__TELEOP_TARGET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'VALIDITY_INVALID'.
enum
{
  teleop_msgs__msg__TeleopTarget__VALIDITY_INVALID = 0
};

/// Constant 'VALIDITY_VALID'.
enum
{
  teleop_msgs__msg__TeleopTarget__VALIDITY_VALID = 1
};

/// Constant 'VALIDITY_STALE'.
enum
{
  teleop_msgs__msg__TeleopTarget__VALIDITY_STALE = 2
};

/// Constant 'VALIDITY_EXTRAPOLATED'.
enum
{
  teleop_msgs__msg__TeleopTarget__VALIDITY_EXTRAPOLATED = 3
};

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'source_stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in msg/TeleopTarget in the package teleop_msgs.
typedef struct teleop_msgs__msg__TeleopTarget
{
  rosidl_runtime_c__String name;
  geometry_msgs__msg__Pose pose;
  uint8_t validity;
  builtin_interfaces__msg__Time source_stamp;
} teleop_msgs__msg__TeleopTarget;

// Struct for a sequence of teleop_msgs__msg__TeleopTarget.
typedef struct teleop_msgs__msg__TeleopTarget__Sequence
{
  teleop_msgs__msg__TeleopTarget * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} teleop_msgs__msg__TeleopTarget__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TELEOP_MSGS__MSG__DETAIL__TELEOP_TARGET__STRUCT_H_
