// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from limx_arm_msgs:srv/DA_motion.idl
// generated code does not contain a copyright notice

#ifndef LIMX_ARM_MSGS__SRV__DETAIL__DA_MOTION__STRUCT_H_
#define LIMX_ARM_MSGS__SRV__DETAIL__DA_MOTION__STRUCT_H_

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

/// Struct defined in srv/DA_motion in the package limx_arm_msgs.
typedef struct limx_arm_msgs__srv__DA_motion_Request
{
  rosidl_runtime_c__String functionName;
  float left_arm_pos[7];
  float right_arm_pos[7];
  float speed;
  float left_arm_joints[7];
  float right_arm_joints[7];
  float headPos[2];
} limx_arm_msgs__srv__DA_motion_Request;

// Struct for a sequence of limx_arm_msgs__srv__DA_motion_Request.
typedef struct limx_arm_msgs__srv__DA_motion_Request__Sequence
{
  limx_arm_msgs__srv__DA_motion_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} limx_arm_msgs__srv__DA_motion_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/DA_motion in the package limx_arm_msgs.
typedef struct limx_arm_msgs__srv__DA_motion_Response
{
  int32_t status;
} limx_arm_msgs__srv__DA_motion_Response;

// Struct for a sequence of limx_arm_msgs__srv__DA_motion_Response.
typedef struct limx_arm_msgs__srv__DA_motion_Response__Sequence
{
  limx_arm_msgs__srv__DA_motion_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} limx_arm_msgs__srv__DA_motion_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LIMX_ARM_MSGS__SRV__DETAIL__DA_MOTION__STRUCT_H_
