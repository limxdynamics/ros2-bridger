// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from teleop_msgs:msg/TeleopMsg.idl
// generated code does not contain a copyright notice

#ifndef TELEOP_MSGS__MSG__DETAIL__TELEOP_MSG__STRUCT_H_
#define TELEOP_MSGS__MSG__DETAIL__TELEOP_MSG__STRUCT_H_

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
// Member 'world'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'anchors'
#include "teleop_msgs/msg/detail/key_point__struct.h"
// Member 'joint_cmd'
#include "controller_msgs/msg/detail/joint_cmd__struct.h"

// Struct defined in msg/TeleopMsg in the package teleop_msgs.
typedef struct teleop_msgs__msg__TeleopMsg
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Pose world;
  teleop_msgs__msg__KeyPoint__Sequence anchors;
  controller_msgs__msg__JointCmd joint_cmd;
} teleop_msgs__msg__TeleopMsg;

// Struct for a sequence of teleop_msgs__msg__TeleopMsg.
typedef struct teleop_msgs__msg__TeleopMsg__Sequence
{
  teleop_msgs__msg__TeleopMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} teleop_msgs__msg__TeleopMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TELEOP_MSGS__MSG__DETAIL__TELEOP_MSG__STRUCT_H_
