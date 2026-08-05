// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from limx_arm_msgs:msg/JointStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "limx_arm_msgs/msg/joint_status.h"


#ifndef LIMX_ARM_MSGS__MSG__DETAIL__JOINT_STATUS__STRUCT_H_
#define LIMX_ARM_MSGS__MSG__DETAIL__JOINT_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'MODE_ANGLE'.
/**
  * 01位置控制，03速度模式，04电流模式
 */
enum
{
  limx_arm_msgs__msg__JointStatus__MODE_ANGLE = 1l
};

/// Constant 'MODE_VELOCITY'.
enum
{
  limx_arm_msgs__msg__JointStatus__MODE_VELOCITY = 3l
};

/// Constant 'MODE_CURRENT'.
enum
{
  limx_arm_msgs__msg__JointStatus__MODE_CURRENT = 4l
};

/// Constant 'STATE_IDLE'.
enum
{
  limx_arm_msgs__msg__JointStatus__STATE_IDLE = 1l
};

/// Constant 'STATE_STARTED'.
enum
{
  limx_arm_msgs__msg__JointStatus__STATE_STARTED = 2l
};

/// Constant 'STATE_PAUSED'.
enum
{
  limx_arm_msgs__msg__JointStatus__STATE_PAUSED = 3l
};

/// Constant 'STATE_RESUMED'.
enum
{
  limx_arm_msgs__msg__JointStatus__STATE_RESUMED = 4l
};

/// Constant 'STATE_STOPED'.
enum
{
  limx_arm_msgs__msg__JointStatus__STATE_STOPED = 5l
};

/// Constant 'STATE_SHUTDOWN'.
enum
{
  limx_arm_msgs__msg__JointStatus__STATE_SHUTDOWN = 6l
};

/// Constant 'PLAY_STATE_IDLE'.
enum
{
  limx_arm_msgs__msg__JointStatus__PLAY_STATE_IDLE = 0l
};

/// Constant 'PLAY_STATE_STARTED'.
enum
{
  limx_arm_msgs__msg__JointStatus__PLAY_STATE_STARTED = 1l
};

/// Constant 'PLAY_STATE_FAILED'.
enum
{
  limx_arm_msgs__msg__JointStatus__PLAY_STATE_FAILED = 2l
};

/// Constant 'PLAY_STATE_FINISHED'.
enum
{
  limx_arm_msgs__msg__JointStatus__PLAY_STATE_FINISHED = 3l
};

// Include directives for member types
// Member 'deviceid'
// Member 'error'
// Member 'log_path'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/JointStatus in the package limx_arm_msgs.
typedef struct limx_arm_msgs__msg__JointStatus
{
  int64_t stamp;
  rosidl_runtime_c__String deviceid;
  int64_t run_time;
  int32_t enable[6];
  rosidl_runtime_c__String error[6];
  float zero[6];
  float limit_min[6];
  float limit_max[6];
  float tool_size[3];
  int32_t mode;
  int32_t state;
  int32_t play_state;
  rosidl_runtime_c__String log_path;
} limx_arm_msgs__msg__JointStatus;

// Struct for a sequence of limx_arm_msgs__msg__JointStatus.
typedef struct limx_arm_msgs__msg__JointStatus__Sequence
{
  limx_arm_msgs__msg__JointStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} limx_arm_msgs__msg__JointStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LIMX_ARM_MSGS__MSG__DETAIL__JOINT_STATUS__STRUCT_H_
