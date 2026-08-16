// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from teleop_msgs:msg/TeleopTarget.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "teleop_msgs/msg/teleop_target.h"


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
/**
  * 数据可信度。接收方据此决定跟随、降级还是忽略。
  * 非法，接收方必须忽略
 */
enum
{
  teleop_msgs__msg__TeleopTarget__VALIDITY_INVALID = 0
};

/// Constant 'VALIDITY_VALID'.
/**
  * 新鲜可用
 */
enum
{
  teleop_msgs__msg__TeleopTarget__VALIDITY_VALID = 1
};

/// Constant 'VALIDITY_STALE'.
/**
  * 有数据但已超期
 */
enum
{
  teleop_msgs__msg__TeleopTarget__VALIDITY_STALE = 2
};

/// Constant 'VALIDITY_EXTRAPOLATED'.
/**
  * 由外推得到，非实测
 */
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

/// Struct defined in msg/TeleopTarget in the package teleop_msgs.
/**
  * 遥操作中的单个跟踪目标（末端、头、躯干、足等）。
  * 作为 TeleopIntentFrame.targets 的元素使用。
 */
typedef struct teleop_msgs__msg__TeleopTarget
{
  /// 目标名。约定值：left_hand / right_hand / head / torso / base /
  /// left_foot / right_foot / left_wrist / right_wrist。
  /// 新增跟踪目标只需约定新名字，不需要改本消息。
  rosidl_runtime_c__String name;
  /// 目标位姿。参考系由 TeleopIntentFrame.reference_frame 指定。
  geometry_msgs__msg__Pose pose;
  uint8_t validity;
  /// 该目标数据的采集时刻。与帧组装时刻（header.stamp）可能不同，
  /// 接收方据此判断单个目标的新鲜度。
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
