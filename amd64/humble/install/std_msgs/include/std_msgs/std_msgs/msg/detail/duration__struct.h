// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from std_msgs:msg/Duration.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__DETAIL__DURATION__STRUCT_H_
#define STD_MSGS__MSG__DETAIL__DURATION__STRUCT_H_

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
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in msg/Duration in the package std_msgs.
typedef struct std_msgs__msg__Duration
{
  builtin_interfaces__msg__Duration data;
} std_msgs__msg__Duration;

// Struct for a sequence of std_msgs__msg__Duration.
typedef struct std_msgs__msg__Duration__Sequence
{
  std_msgs__msg__Duration * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_msgs__msg__Duration__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STD_MSGS__MSG__DETAIL__DURATION__STRUCT_H_
