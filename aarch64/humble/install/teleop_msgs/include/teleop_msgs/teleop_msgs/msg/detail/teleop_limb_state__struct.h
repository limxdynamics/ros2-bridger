// NOLINT: This file starts with a BOM since it contain non-ASCII characters
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

/// Struct defined in msg/TeleopLimbState in the package teleop_msgs.
/**
  * 会话中单个肢体的决策状态。
  * 作为 TeleopSessionState.limbs 的元素使用。
 */
typedef struct teleop_msgs__msg__TeleopLimbState
{
  /// 肢体名。与 TeleopTarget.name 取值一致。
  rosidl_runtime_c__String name;
  /// 该肢体本周期是否处于跟随
  bool following;
  /// 该侧末端是否允许无极开合。
  /// 门控由发布方负责，扳机行程到开合程度的映射由接收方负责。
  bool ee_closure_enabled;
  /// 该侧末端当前手势索引。
  /// 循环切换与持久化由发布方负责，下发对应手势由接收方负责。
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
