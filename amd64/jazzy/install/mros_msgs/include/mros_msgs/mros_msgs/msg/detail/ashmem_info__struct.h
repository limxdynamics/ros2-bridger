// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mros_msgs:msg/AshmemInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mros_msgs/msg/ashmem_info.h"


#ifndef MROS_MSGS__MSG__DETAIL__ASHMEM_INFO__STRUCT_H_
#define MROS_MSGS__MSG__DETAIL__ASHMEM_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'topic_name'
// Member 'message_type'
// Member 'message_md5sum'
// Member 'message_definition'
// Member 'identity'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/AshmemInfo in the package mros_msgs.
typedef struct mros_msgs__msg__AshmemInfo
{
  uint32_t topic_id;
  rosidl_runtime_c__String topic_name;
  rosidl_runtime_c__String message_type;
  rosidl_runtime_c__String message_md5sum;
  rosidl_runtime_c__String message_definition;
  int32_t shm_seed;
  int32_t shm_size;
  int32_t msg_size;
  rosidl_runtime_c__String__Sequence identity;
} mros_msgs__msg__AshmemInfo;

// Struct for a sequence of mros_msgs__msg__AshmemInfo.
typedef struct mros_msgs__msg__AshmemInfo__Sequence
{
  mros_msgs__msg__AshmemInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mros_msgs__msg__AshmemInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MROS_MSGS__MSG__DETAIL__ASHMEM_INFO__STRUCT_H_
