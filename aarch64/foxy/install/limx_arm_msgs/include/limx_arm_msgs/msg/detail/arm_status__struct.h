// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from limx_arm_msgs:msg/arm_status.idl
// generated code does not contain a copyright notice

#ifndef LIMX_ARM_MSGS__MSG__DETAIL__ARM_STATUS__STRUCT_H_
#define LIMX_ARM_MSGS__MSG__DETAIL__ARM_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'left_joints'
// Member 'right_joints'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/arm_status in the package limx_arm_msgs.
typedef struct limx_arm_msgs__msg__arm_status
{
  rosidl_runtime_c__double__Sequence left_joints;
  rosidl_runtime_c__double__Sequence right_joints;
  double left_endEffector[7];
  double right_endEffector[7];
  int32_t ik_statu;
} limx_arm_msgs__msg__arm_status;

// Struct for a sequence of limx_arm_msgs__msg__arm_status.
typedef struct limx_arm_msgs__msg__arm_status__Sequence
{
  limx_arm_msgs__msg__arm_status * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} limx_arm_msgs__msg__arm_status__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LIMX_ARM_MSGS__MSG__DETAIL__ARM_STATUS__STRUCT_H_
