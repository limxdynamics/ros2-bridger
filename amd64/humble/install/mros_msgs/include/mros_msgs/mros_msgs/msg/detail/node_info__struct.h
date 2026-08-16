// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mros_msgs:msg/NodeInfo.idl
// generated code does not contain a copyright notice

#ifndef MROS_MSGS__MSG__DETAIL__NODE_INFO__STRUCT_H_
#define MROS_MSGS__MSG__DETAIL__NODE_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'node_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/NodeInfo in the package mros_msgs.
typedef struct mros_msgs__msg__NodeInfo
{
  rosidl_runtime_c__String node_name;
} mros_msgs__msg__NodeInfo;

// Struct for a sequence of mros_msgs__msg__NodeInfo.
typedef struct mros_msgs__msg__NodeInfo__Sequence
{
  mros_msgs__msg__NodeInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mros_msgs__msg__NodeInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MROS_MSGS__MSG__DETAIL__NODE_INFO__STRUCT_H_
