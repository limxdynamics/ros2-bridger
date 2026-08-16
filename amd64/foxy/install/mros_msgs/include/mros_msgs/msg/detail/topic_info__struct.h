// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mros_msgs:msg/TopicInfo.idl
// generated code does not contain a copyright notice

#ifndef MROS_MSGS__MSG__DETAIL__TOPIC_INFO__STRUCT_H_
#define MROS_MSGS__MSG__DETAIL__TOPIC_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ID_PUBLISHER'.
enum
{
  mros_msgs__msg__TopicInfo__ID_PUBLISHER = 0ul
};

/// Constant 'ID_SUBSCRIBER'.
enum
{
  mros_msgs__msg__TopicInfo__ID_SUBSCRIBER = 1ul
};

/// Constant 'ID_SERVICE_SERVER'.
enum
{
  mros_msgs__msg__TopicInfo__ID_SERVICE_SERVER = 2ul
};

/// Constant 'ID_SERVICE_CLIENT'.
enum
{
  mros_msgs__msg__TopicInfo__ID_SERVICE_CLIENT = 4ul
};

/// Constant 'ID_MROSTOPIC_REQUEST'.
enum
{
  mros_msgs__msg__TopicInfo__ID_MROSTOPIC_REQUEST = 6ul
};

/// Constant 'ID_REMOVE_PUBLISHER'.
enum
{
  mros_msgs__msg__TopicInfo__ID_REMOVE_PUBLISHER = 7ul
};

/// Constant 'ID_REMOVE_SUBSCRIBER'.
enum
{
  mros_msgs__msg__TopicInfo__ID_REMOVE_SUBSCRIBER = 8ul
};

/// Constant 'ID_REMOVE_SERVICE_SERVER'.
enum
{
  mros_msgs__msg__TopicInfo__ID_REMOVE_SERVICE_SERVER = 9ul
};

/// Constant 'ID_REMOVE_SERVICE_CLIENT'.
enum
{
  mros_msgs__msg__TopicInfo__ID_REMOVE_SERVICE_CLIENT = 11ul
};

/// Constant 'ID_MROSSERVICE_REQUEST'.
enum
{
  mros_msgs__msg__TopicInfo__ID_MROSSERVICE_REQUEST = 13ul
};

/// Constant 'ID_LOG'.
enum
{
  mros_msgs__msg__TopicInfo__ID_LOG = 14ul
};

/// Constant 'ID_TIME'.
enum
{
  mros_msgs__msg__TopicInfo__ID_TIME = 15ul
};

/// Constant 'ID_NEGOTIATED'.
enum
{
  mros_msgs__msg__TopicInfo__ID_NEGOTIATED = 16ul
};

/// Constant 'ID_SESSION_ID'.
enum
{
  mros_msgs__msg__TopicInfo__ID_SESSION_ID = 17ul
};

/// Constant 'ID_ASHMEM_INFO'.
enum
{
  mros_msgs__msg__TopicInfo__ID_ASHMEM_INFO = 18ul
};

/// Constant 'ID_DIAG'.
enum
{
  mros_msgs__msg__TopicInfo__ID_DIAG = 19ul
};

// Include directives for member types
// Member 'topic_name'
// Member 'message_type'
// Member 'md5sum'
// Member 'node'
// Member 'definition'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/TopicInfo in the package mros_msgs.
typedef struct mros_msgs__msg__TopicInfo
{
  uint32_t topic_id;
  rosidl_runtime_c__String topic_name;
  rosidl_runtime_c__String message_type;
  rosidl_runtime_c__String md5sum;
  int32_t buffer_size;
  bool negotiated;
  rosidl_runtime_c__String node;
  rosidl_runtime_c__String definition;
  bool latch;
  bool reliable;
  int32_t queue_size;
  int32_t enabled;
} mros_msgs__msg__TopicInfo;

// Struct for a sequence of mros_msgs__msg__TopicInfo.
typedef struct mros_msgs__msg__TopicInfo__Sequence
{
  mros_msgs__msg__TopicInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mros_msgs__msg__TopicInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MROS_MSGS__MSG__DETAIL__TOPIC_INFO__STRUCT_H_
