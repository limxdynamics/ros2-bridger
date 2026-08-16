// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from teleop_msgs:msg/TeleopLimbState.idl
// generated code does not contain a copyright notice

#ifndef TELEOP_MSGS__MSG__DETAIL__TELEOP_LIMB_STATE__STRUCT_H_
#define TELEOP_MSGS__MSG__DETAIL__TELEOP_LIMB_STATE__STRUCT_H_

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

// Struct defined in msg/TeleopLimbState in the package teleop_msgs.
typedef struct teleop_msgs__msg__TeleopLimbState
{
  rosidl_runtime_c__String name;
  bool following;
  bool ee_closure_enabled;
  uint8_t ee_gesture_index;
} teleop_msgs__msg__TeleopLimbState;

// Struct for a sequence of teleop_msgs__msg__TeleopLimbState.
typedef struct teleop_msgs__msg__TeleopLimbState__Sequence
{
  teleop_msgs__msg__TeleopLimbState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} teleop_msgs__msg__TeleopLimbState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TELEOP_MSGS__MSG__DETAIL__TELEOP_LIMB_STATE__STRUCT_H_
