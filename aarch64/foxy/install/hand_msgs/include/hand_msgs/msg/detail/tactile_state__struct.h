// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hand_msgs:msg/TactileState.idl
// generated code does not contain a copyright notice

#ifndef HAND_MSGS__MSG__DETAIL__TACTILE_STATE__STRUCT_H_
#define HAND_MSGS__MSG__DETAIL__TACTILE_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'names'
#include "rosidl_runtime_c/string.h"
// Member 'normal_force'
// Member 'tangential_force'
// Member 'direction_angle'
// Member 'approximate_value'
// Member 'tactile_state'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/TactileState in the package hand_msgs.
typedef struct hand_msgs__msg__TactileState
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String__Sequence names;
  rosidl_runtime_c__float__Sequence normal_force;
  rosidl_runtime_c__float__Sequence tangential_force;
  rosidl_runtime_c__float__Sequence direction_angle;
  rosidl_runtime_c__uint32__Sequence approximate_value;
  rosidl_runtime_c__uint16__Sequence tactile_state;
} hand_msgs__msg__TactileState;

// Struct for a sequence of hand_msgs__msg__TactileState.
typedef struct hand_msgs__msg__TactileState__Sequence
{
  hand_msgs__msg__TactileState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hand_msgs__msg__TactileState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HAND_MSGS__MSG__DETAIL__TACTILE_STATE__STRUCT_H_
