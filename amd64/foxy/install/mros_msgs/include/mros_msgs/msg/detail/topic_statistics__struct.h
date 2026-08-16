// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mros_msgs:msg/TopicStatistics.idl
// generated code does not contain a copyright notice

#ifndef MROS_MSGS__MSG__DETAIL__TOPIC_STATISTICS__STRUCT_H_
#define MROS_MSGS__MSG__DETAIL__TOPIC_STATISTICS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'node'
#include "rosidl_runtime_c/string.h"
// Member 'subscribers'
// Member 'publishers'
#include "mros_msgs/msg/detail/topic_info__struct.h"

// Struct defined in msg/TopicStatistics in the package mros_msgs.
typedef struct mros_msgs__msg__TopicStatistics
{
  rosidl_runtime_c__String node;
  mros_msgs__msg__TopicInfo__Sequence subscribers;
  mros_msgs__msg__TopicInfo__Sequence publishers;
} mros_msgs__msg__TopicStatistics;

// Struct for a sequence of mros_msgs__msg__TopicStatistics.
typedef struct mros_msgs__msg__TopicStatistics__Sequence
{
  mros_msgs__msg__TopicStatistics * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mros_msgs__msg__TopicStatistics__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MROS_MSGS__MSG__DETAIL__TOPIC_STATISTICS__STRUCT_H_
