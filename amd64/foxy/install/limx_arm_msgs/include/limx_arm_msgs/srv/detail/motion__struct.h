// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from limx_arm_msgs:srv/motion.idl
// generated code does not contain a copyright notice

#ifndef LIMX_ARM_MSGS__SRV__DETAIL__MOTION__STRUCT_H_
#define LIMX_ARM_MSGS__SRV__DETAIL__MOTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/motion in the package limx_arm_msgs.
typedef struct limx_arm_msgs__srv__motion_Request
{
  float left_arm_pos[7];
  float right_arm_pos[7];
  float duration_time;
} limx_arm_msgs__srv__motion_Request;

// Struct for a sequence of limx_arm_msgs__srv__motion_Request.
typedef struct limx_arm_msgs__srv__motion_Request__Sequence
{
  limx_arm_msgs__srv__motion_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} limx_arm_msgs__srv__motion_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/motion in the package limx_arm_msgs.
typedef struct limx_arm_msgs__srv__motion_Response
{
  int32_t status;
} limx_arm_msgs__srv__motion_Response;

// Struct for a sequence of limx_arm_msgs__srv__motion_Response.
typedef struct limx_arm_msgs__srv__motion_Response__Sequence
{
  limx_arm_msgs__srv__motion_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} limx_arm_msgs__srv__motion_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LIMX_ARM_MSGS__SRV__DETAIL__MOTION__STRUCT_H_
