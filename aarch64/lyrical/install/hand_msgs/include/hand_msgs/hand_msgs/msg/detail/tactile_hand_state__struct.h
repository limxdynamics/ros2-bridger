// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hand_msgs:msg/TactileHandState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hand_msgs/msg/tactile_hand_state.h"


#ifndef HAND_MSGS__MSG__DETAIL__TACTILE_HAND_STATE__STRUCT_H_
#define HAND_MSGS__MSG__DETAIL__TACTILE_HAND_STATE__STRUCT_H_

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
// Member 'hand_type'
#include "rosidl_runtime_c/string.h"
// Member 'hand_state'
#include "hand_msgs/msg/detail/hand_msg__struct.h"
// Member 'hand_tactile_state'
#include "hand_msgs/msg/detail/tactile_state__struct.h"

/// Struct defined in msg/TactileHandState in the package hand_msgs.
typedef struct hand_msgs__msg__TactileHandState
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String hand_type;
  uint8_t ctrl_mode[2];
  hand_msgs__msg__HandMsg hand_state[2];
  hand_msgs__msg__TactileState hand_tactile_state[2];
} hand_msgs__msg__TactileHandState;

// Struct for a sequence of hand_msgs__msg__TactileHandState.
typedef struct hand_msgs__msg__TactileHandState__Sequence
{
  hand_msgs__msg__TactileHandState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hand_msgs__msg__TactileHandState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HAND_MSGS__MSG__DETAIL__TACTILE_HAND_STATE__STRUCT_H_
