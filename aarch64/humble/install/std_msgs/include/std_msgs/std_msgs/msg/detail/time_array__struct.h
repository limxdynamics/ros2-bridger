// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from std_msgs:msg/TimeArray.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__DETAIL__TIME_ARRAY__STRUCT_H_
#define STD_MSGS__MSG__DETAIL__TIME_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'data'
#include "std_msgs/msg/detail/time__struct.h"

/// Struct defined in msg/TimeArray in the package std_msgs.
typedef struct std_msgs__msg__TimeArray
{
  /// header info
  std_msgs__msg__Header header;
  /// array of data
  std_msgs__msg__Time__Sequence data;
} std_msgs__msg__TimeArray;

// Struct for a sequence of std_msgs__msg__TimeArray.
typedef struct std_msgs__msg__TimeArray__Sequence
{
  std_msgs__msg__TimeArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_msgs__msg__TimeArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STD_MSGS__MSG__DETAIL__TIME_ARRAY__STRUCT_H_
