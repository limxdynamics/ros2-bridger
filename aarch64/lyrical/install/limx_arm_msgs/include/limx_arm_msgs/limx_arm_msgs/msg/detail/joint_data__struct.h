// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from limx_arm_msgs:msg/JointData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "limx_arm_msgs/msg/joint_data.h"


#ifndef LIMX_ARM_MSGS__MSG__DETAIL__JOINT_DATA__STRUCT_H_
#define LIMX_ARM_MSGS__MSG__DETAIL__JOINT_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'deviceid'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/JointData in the package limx_arm_msgs.
typedef struct limx_arm_msgs__msg__JointData
{
  int64_t stamp;
  rosidl_runtime_c__String deviceid;
  float angle[6];
  float velocity[6];
  float current[6];
} limx_arm_msgs__msg__JointData;

// Struct for a sequence of limx_arm_msgs__msg__JointData.
typedef struct limx_arm_msgs__msg__JointData__Sequence
{
  limx_arm_msgs__msg__JointData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} limx_arm_msgs__msg__JointData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LIMX_ARM_MSGS__MSG__DETAIL__JOINT_DATA__STRUCT_H_
