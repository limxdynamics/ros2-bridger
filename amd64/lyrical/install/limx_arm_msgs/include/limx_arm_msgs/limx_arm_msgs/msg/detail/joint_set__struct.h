// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from limx_arm_msgs:msg/JointSet.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "limx_arm_msgs/msg/joint_set.h"


#ifndef LIMX_ARM_MSGS__MSG__DETAIL__JOINT_SET__STRUCT_H_
#define LIMX_ARM_MSGS__MSG__DETAIL__JOINT_SET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'ACTION_IDLE'.
/**
  * action
 */
enum
{
  limx_arm_msgs__msg__JointSet__ACTION_IDLE = 0l
};

/// Constant 'ACTION_START'.
enum
{
  limx_arm_msgs__msg__JointSet__ACTION_START = 1l
};

/// Constant 'ACTION_PAUSE'.
enum
{
  limx_arm_msgs__msg__JointSet__ACTION_PAUSE = 2l
};

/// Constant 'ACTION_RESUME'.
enum
{
  limx_arm_msgs__msg__JointSet__ACTION_RESUME = 3l
};

/// Constant 'ACTION_STOP'.
enum
{
  limx_arm_msgs__msg__JointSet__ACTION_STOP = 4l
};

/// Constant 'ACTION_ENABLE_MOTOR'.
enum
{
  limx_arm_msgs__msg__JointSet__ACTION_ENABLE_MOTOR = 5l
};

/// Constant 'ACTION_SET_ZERO'.
enum
{
  limx_arm_msgs__msg__JointSet__ACTION_SET_ZERO = 6l
};

/// Constant 'ACTION_SET_LIMIT_MIN'.
enum
{
  limx_arm_msgs__msg__JointSet__ACTION_SET_LIMIT_MIN = 7l
};

/// Constant 'ACTION_SET_LIMIT_MAX'.
enum
{
  limx_arm_msgs__msg__JointSet__ACTION_SET_LIMIT_MAX = 8l
};

/// Constant 'ACTION_SET_POSITION'.
enum
{
  limx_arm_msgs__msg__JointSet__ACTION_SET_POSITION = 9l
};

/// Constant 'ACTION_SET_MODE'.
enum
{
  limx_arm_msgs__msg__JointSet__ACTION_SET_MODE = 10l
};

/// Constant 'ACTION_SET_TOOL_SIZE'.
enum
{
  limx_arm_msgs__msg__JointSet__ACTION_SET_TOOL_SIZE = 11l
};

/// Constant 'ACTION_START_DRAG'.
enum
{
  limx_arm_msgs__msg__JointSet__ACTION_START_DRAG = 12l
};

/// Constant 'ACTION_STOP_DRAG'.
enum
{
  limx_arm_msgs__msg__JointSet__ACTION_STOP_DRAG = 13l
};

/// Constant 'ACTION_PLAYER_START'.
enum
{
  limx_arm_msgs__msg__JointSet__ACTION_PLAYER_START = 14l
};

/// Constant 'ACTION_PLAYER_STOP'.
enum
{
  limx_arm_msgs__msg__JointSet__ACTION_PLAYER_STOP = 15l
};

/// Constant 'ACTION_SET_CARTESIAN_POSITION'.
enum
{
  limx_arm_msgs__msg__JointSet__ACTION_SET_CARTESIAN_POSITION = 16l
};

/// Constant 'MODE_ANGLE'.
/**
  * 01位置控制，03速度模式，04电流模式
 */
enum
{
  limx_arm_msgs__msg__JointSet__MODE_ANGLE = 1l
};

/// Constant 'MODE_VELOCITY'.
enum
{
  limx_arm_msgs__msg__JointSet__MODE_VELOCITY = 3l
};

/// Constant 'MODE_CURRENT'.
enum
{
  limx_arm_msgs__msg__JointSet__MODE_CURRENT = 4l
};

// Include directives for member types
// Member 'deviceid'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/JointSet in the package limx_arm_msgs.
typedef struct limx_arm_msgs__msg__JointSet
{
  int64_t stamp;
  rosidl_runtime_c__String deviceid;
  int32_t action;
  int32_t mode;
  /// data
  float data[6];
} limx_arm_msgs__msg__JointSet;

// Struct for a sequence of limx_arm_msgs__msg__JointSet.
typedef struct limx_arm_msgs__msg__JointSet__Sequence
{
  limx_arm_msgs__msg__JointSet * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} limx_arm_msgs__msg__JointSet__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LIMX_ARM_MSGS__MSG__DETAIL__JOINT_SET__STRUCT_H_
