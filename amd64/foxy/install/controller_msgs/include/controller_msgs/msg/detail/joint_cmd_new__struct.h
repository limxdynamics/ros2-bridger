// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from controller_msgs:msg/JointCmdNew.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_MSGS__MSG__DETAIL__JOINT_CMD_NEW__STRUCT_H_
#define CONTROLLER_MSGS__MSG__DETAIL__JOINT_CMD_NEW__STRUCT_H_

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
// Member 'q'
// Member 'v'
// Member 'tau'
// Member 'kp'
// Member 'kd'
// Member 'mode'
// Member 'parallel_solve_required'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/JointCmdNew in the package controller_msgs.
typedef struct controller_msgs__msg__JointCmdNew
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String__Sequence names;
  rosidl_runtime_c__float__Sequence q;
  rosidl_runtime_c__float__Sequence v;
  rosidl_runtime_c__float__Sequence tau;
  rosidl_runtime_c__float__Sequence kp;
  rosidl_runtime_c__float__Sequence kd;
  rosidl_runtime_c__uint8__Sequence mode;
  uint32_t na;
  rosidl_runtime_c__boolean__Sequence parallel_solve_required;
} controller_msgs__msg__JointCmdNew;

// Struct for a sequence of controller_msgs__msg__JointCmdNew.
typedef struct controller_msgs__msg__JointCmdNew__Sequence
{
  controller_msgs__msg__JointCmdNew * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} controller_msgs__msg__JointCmdNew__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONTROLLER_MSGS__MSG__DETAIL__JOINT_CMD_NEW__STRUCT_H_
