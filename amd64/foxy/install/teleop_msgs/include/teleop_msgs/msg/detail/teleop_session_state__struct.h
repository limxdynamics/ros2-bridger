// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from teleop_msgs:msg/TeleopSessionState.idl
// generated code does not contain a copyright notice

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
enum
{
  teleop_msgs__msg__TeleopSessionState__SESSION_INACTIVE = 0
};

/// Constant 'SESSION_ACTIVE'.
enum
{
  teleop_msgs__msg__TeleopSessionState__SESSION_ACTIVE = 1
};

/// Constant 'SESSION_HOMING'.
enum
{
  teleop_msgs__msg__TeleopSessionState__SESSION_HOMING = 2
};

/// Constant 'SESSION_FAULT'.
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
enum
{
  teleop_msgs__msg__TeleopSessionState__FAULT_INPUT_TIMEOUT = 1
};

/// Constant 'FAULT_TARGET_JUMP'.
enum
{
  teleop_msgs__msg__TeleopSessionState__FAULT_TARGET_JUMP = 2
};

/// Constant 'FAULT_OUTPUT'.
enum
{
  teleop_msgs__msg__TeleopSessionState__FAULT_OUTPUT = 3
};

/// Constant 'FAULT_INTERNAL'.
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

// Struct defined in msg/TeleopSessionState in the package teleop_msgs.
typedef struct teleop_msgs__msg__TeleopSessionState
{
  std_msgs__msg__Header header;
  uint16_t schema_version;
  uint8_t session_state;
  rosidl_runtime_c__String mode;
  teleop_msgs__msg__TeleopLimbState__Sequence limbs;
  uint32_t reanchor_epoch;
  bool retarget_required;
  uint8_t fault_code;
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
