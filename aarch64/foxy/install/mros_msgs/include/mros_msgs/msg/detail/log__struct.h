// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mros_msgs:msg/Log.idl
// generated code does not contain a copyright notice

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
enum
{
  mros_msgs__msg__Log__DEBUG = 1
};

/// Constant 'INFO'.
enum
{
  mros_msgs__msg__Log__INFO = 2
};

/// Constant 'WARN'.
enum
{
  mros_msgs__msg__Log__WARN = 4
};

/// Constant 'ERROR'.
enum
{
  mros_msgs__msg__Log__ERROR = 8
};

/// Constant 'FATAL'.
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

// Struct defined in msg/Log in the package mros_msgs.
typedef struct mros_msgs__msg__Log
{
  std_msgs__msg__Header header;
  uint8_t level;
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String msg;
  rosidl_runtime_c__String file;
  rosidl_runtime_c__String function;
  uint32_t line;
  rosidl_runtime_c__String__Sequence topics;
  uint64_t pid;
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
