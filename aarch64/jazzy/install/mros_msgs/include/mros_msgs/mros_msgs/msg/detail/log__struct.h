// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mros_msgs:msg/Log.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mros_msgs/msg/log.h"


#ifndef MROS_MSGS__MSG__DETAIL__LOG__STRUCT_H_
#define MROS_MSGS__MSG__DETAIL__LOG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'DEBUG'.
/**
  * debug level
 */
enum
{
  mros_msgs__msg__Log__DEBUG = 1
};

/// Constant 'INFO'.
/**
  * general level
 */
enum
{
  mros_msgs__msg__Log__INFO = 2
};

/// Constant 'WARN'.
/**
  * warning level
 */
enum
{
  mros_msgs__msg__Log__WARN = 4
};

/// Constant 'ERROR'.
/**
  * error level
 */
enum
{
  mros_msgs__msg__Log__ERROR = 8
};

/// Constant 'FATAL'.
/**
  * fatal/critical level
 */
enum
{
  mros_msgs__msg__Log__FATAL = 16
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'name'
// Member 'msg'
// Member 'file'
// Member 'function'
// Member 'topics'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Log in the package mros_msgs.
/**
  * Severity level constants
 */
typedef struct mros_msgs__msg__Log
{
  /// Fields
  std_msgs__msg__Header header;
  uint8_t level;
  /// name of the node
  rosidl_runtime_c__String name;
  /// message
  rosidl_runtime_c__String msg;
  /// file the message came from
  rosidl_runtime_c__String file;
  /// function the message came from
  rosidl_runtime_c__String function;
  /// line the message came from
  uint32_t line;
  /// topic names that the node publishes
  rosidl_runtime_c__String__Sequence topics;
  /// Process id
  uint64_t pid;
  /// Thread id
  uint64_t tid;
} mros_msgs__msg__Log;

// Struct for a sequence of mros_msgs__msg__Log.
typedef struct mros_msgs__msg__Log__Sequence
{
  mros_msgs__msg__Log * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mros_msgs__msg__Log__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MROS_MSGS__MSG__DETAIL__LOG__STRUCT_H_
