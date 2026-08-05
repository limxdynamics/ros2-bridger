// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from teleop_msgs:msg/VRState.idl
// generated code does not contain a copyright notice

#ifndef TELEOP_MSGS__MSG__DETAIL__VR_STATE__STRUCT_H_
#define TELEOP_MSGS__MSG__DETAIL__VR_STATE__STRUCT_H_

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

// Struct defined in msg/VRState in the package teleop_msgs.
typedef struct teleop_msgs__msg__VRState
{
  std_msgs__msg__Header header;
  float eyePose[16];
  float l[16];
  float r[16];
  float leftJS[2];
  float leftTrig;
  float leftGrip;
  bool LThU;
  bool LTr;
  bool LG;
  bool X;
  bool Y;
  float rightJS[2];
  float rightTrig;
  float rightGrip;
  bool RThU;
  bool RTr;
  bool RG;
  bool A;
  bool B;
} teleop_msgs__msg__VRState;

// Struct for a sequence of teleop_msgs__msg__VRState.
typedef struct teleop_msgs__msg__VRState__Sequence
{
  teleop_msgs__msg__VRState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} teleop_msgs__msg__VRState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TELEOP_MSGS__MSG__DETAIL__VR_STATE__STRUCT_H_
