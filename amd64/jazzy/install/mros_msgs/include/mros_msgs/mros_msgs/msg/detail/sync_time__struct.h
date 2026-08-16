// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mros_msgs:msg/SyncTime.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mros_msgs/msg/sync_time.h"


#ifndef MROS_MSGS__MSG__DETAIL__SYNC_TIME__STRUCT_H_
#define MROS_MSGS__MSG__DETAIL__SYNC_TIME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/SyncTime in the package mros_msgs.
typedef struct mros_msgs__msg__SyncTime
{
  /// milliseconds
  uint32_t tick;
  /// dds time
  builtin_interfaces__msg__Time data;
} mros_msgs__msg__SyncTime;

// Struct for a sequence of mros_msgs__msg__SyncTime.
typedef struct mros_msgs__msg__SyncTime__Sequence
{
  mros_msgs__msg__SyncTime * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mros_msgs__msg__SyncTime__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MROS_MSGS__MSG__DETAIL__SYNC_TIME__STRUCT_H_
