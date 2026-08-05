// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from limx_arm_msgs:msg/ServoCmd.idl
// generated code does not contain a copyright notice

#ifndef LIMX_ARM_MSGS__MSG__DETAIL__SERVO_CMD__STRUCT_H_
#define LIMX_ARM_MSGS__MSG__DETAIL__SERVO_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'functionName'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ServoCmd in the package limx_arm_msgs.
typedef struct limx_arm_msgs__msg__ServoCmd
{
  /// servoL SetHeadPos
  rosidl_runtime_c__String functionName;
  /// #servoL
  float left_arm_pos[7];
  /// #servoL
  float right_arm_pos[7];
} limx_arm_msgs__msg__ServoCmd;

// Struct for a sequence of limx_arm_msgs__msg__ServoCmd.
typedef struct limx_arm_msgs__msg__ServoCmd__Sequence
{
  limx_arm_msgs__msg__ServoCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} limx_arm_msgs__msg__ServoCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LIMX_ARM_MSGS__MSG__DETAIL__SERVO_CMD__STRUCT_H_
