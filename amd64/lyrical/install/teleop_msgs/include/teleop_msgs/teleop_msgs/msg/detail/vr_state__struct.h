// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from teleop_msgs:msg/VRState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "teleop_msgs/msg/vr_state.h"


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

/// Struct defined in msg/VRState in the package teleop_msgs.
typedef struct teleop_msgs__msg__VRState
{
  std_msgs__msg__Header header;
  /// 眼镜位置姿态矩阵 4x4
  float eyePose[16];
  /// 左手柄姿态矩阵 4x4
  float l[16];
  /// 右手柄姿态矩阵 4x4
  float r[16];
  /// 左摇杆
  float leftJS[2];
  /// 左扳机
  float leftTrig;
  /// 左 Grip 键
  float leftGrip;
  /// 左拇指（布尔值）
  bool LThU;
  /// 左扳机（布尔值）
  bool LTr;
  /// 左 Grip 键（布尔值）
  bool LG;
  /// X 键
  bool X;
  /// Y 键
  bool Y;
  /// 右摇杆
  float rightJS[2];
  /// 右扳机
  float rightTrig;
  /// 右 Grip 键
  float rightGrip;
  /// 右拇指（布尔值）
  bool RThU;
  /// 右扳机（布尔值）
  bool RTr;
  /// 右 Grip 键（布尔值）
  bool RG;
  /// A 键
  bool A;
  /// B 键
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
