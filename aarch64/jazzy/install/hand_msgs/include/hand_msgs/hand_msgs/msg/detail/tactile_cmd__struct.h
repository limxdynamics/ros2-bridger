// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hand_msgs:msg/TactileCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hand_msgs/msg/tactile_cmd.h"


#ifndef HAND_MSGS__MSG__DETAIL__TACTILE_CMD__STRUCT_H_
#define HAND_MSGS__MSG__DETAIL__TACTILE_CMD__STRUCT_H_

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
// Member 'tactile_switch'
// Member 'channel_reset'
// Member 'calibration_trigger'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/TactileCmd in the package hand_msgs.
typedef struct hand_msgs__msg__TactileCmd
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String__Sequence names;
  /// 触觉开关 (true=开启 false=关闭)
  rosidl_runtime_c__boolean__Sequence tactile_switch;
  /// 通道复位 (true触发, 执行时手指不可受力)
  rosidl_runtime_c__boolean__Sequence channel_reset;
  /// 参数校准 (true触发, 执行约10s内数据不可用, 手指不可受力)
  rosidl_runtime_c__boolean__Sequence calibration_trigger;
} hand_msgs__msg__TactileCmd;

// Struct for a sequence of hand_msgs__msg__TactileCmd.
typedef struct hand_msgs__msg__TactileCmd__Sequence
{
  hand_msgs__msg__TactileCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hand_msgs__msg__TactileCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HAND_MSGS__MSG__DETAIL__TACTILE_CMD__STRUCT_H_
