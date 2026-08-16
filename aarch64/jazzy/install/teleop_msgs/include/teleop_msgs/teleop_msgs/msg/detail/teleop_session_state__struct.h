// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from teleop_msgs:msg/TeleopSessionState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "teleop_msgs/msg/teleop_session_state.h"


#ifndef TELEOP_MSGS__MSG__DETAIL__TELEOP_SESSION_STATE__STRUCT_H_
#define TELEOP_MSGS__MSG__DETAIL__TELEOP_SESSION_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'SCHEMA_VERSION'.
enum
{
  teleop_msgs__msg__TeleopSessionState__SCHEMA_VERSION = 1
};

/// Constant 'SESSION_INACTIVE'.
/**
  * 未进入遥操作
 */
enum
{
  teleop_msgs__msg__TeleopSessionState__SESSION_INACTIVE = 0
};

/// Constant 'SESSION_ACTIVE'.
/**
  * 遥操作激活
 */
enum
{
  teleop_msgs__msg__TeleopSessionState__SESSION_ACTIVE = 1
};

/// Constant 'SESSION_HOMING'.
/**
  * 回初始姿态流程中，接收方应暂停输出目标
 */
enum
{
  teleop_msgs__msg__TeleopSessionState__SESSION_HOMING = 2
};

/// Constant 'SESSION_FAULT'.
/**
  * 故障
 */
enum
{
  teleop_msgs__msg__TeleopSessionState__SESSION_FAULT = 3
};

/// Constant 'FAULT_NONE'.
enum
{
  teleop_msgs__msg__TeleopSessionState__FAULT_NONE = 0
};

/// Constant 'FAULT_INPUT_TIMEOUT'.
/**
  * 上游输入超时
 */
enum
{
  teleop_msgs__msg__TeleopSessionState__FAULT_INPUT_TIMEOUT = 1
};

/// Constant 'FAULT_TARGET_JUMP'.
/**
  * 目标跳变被拦截
 */
enum
{
  teleop_msgs__msg__TeleopSessionState__FAULT_TARGET_JUMP = 2
};

/// Constant 'FAULT_OUTPUT'.
/**
  * 下发失败
 */
enum
{
  teleop_msgs__msg__TeleopSessionState__FAULT_OUTPUT = 3
};

/// Constant 'FAULT_INTERNAL'.
/**
  * 决策层内部错误
 */
enum
{
  teleop_msgs__msg__TeleopSessionState__FAULT_INTERNAL = 4
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'mode'
// Member 'fault_detail'
#include "rosidl_runtime_c/string.h"
// Member 'limbs'
#include "teleop_msgs/msg/detail/teleop_limb_state__struct.h"

/// Struct defined in msg/TeleopSessionState in the package teleop_msgs.
/**
  * 遥操作会话状态。由决策层单向广播，全系统唯一权威，其余模块只读。
  * 接收方不得维护本状态的副本，也不得自行修改跟随状态。
 */
typedef struct teleop_msgs__msg__TeleopSessionState
{
  std_msgs__msg__Header header;
  uint16_t schema_version;
  uint8_t session_state;
  /// 当前遥操作模式名，由产品定义。用字符串以便新增模式不改本消息。
  rosidl_runtime_c__String mode;
  /// 逐肢体决策。肢体缺席时按不跟随处理。
  teleop_msgs__msg__TeleopLimbState__Sequence limbs;
  /// 重锚计数，单调递增。数值发生变化即要求接收方用当前输入与末端反馈
  /// 重新建立锚点。用计数而非布尔边沿，因为收发双方不同频，边沿会丢。
  uint32_t reanchor_epoch;
  /// 是否仍需要接收方计算全身重定向。纯性能提示，接收方可以忽略。
  bool retarget_required;
  uint8_t fault_code;
  /// 故障详情，供日志与诊断使用，不参与控制判定
  rosidl_runtime_c__String fault_detail;
} teleop_msgs__msg__TeleopSessionState;

// Struct for a sequence of teleop_msgs__msg__TeleopSessionState.
typedef struct teleop_msgs__msg__TeleopSessionState__Sequence
{
  teleop_msgs__msg__TeleopSessionState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} teleop_msgs__msg__TeleopSessionState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TELEOP_MSGS__MSG__DETAIL__TELEOP_SESSION_STATE__STRUCT_H_
