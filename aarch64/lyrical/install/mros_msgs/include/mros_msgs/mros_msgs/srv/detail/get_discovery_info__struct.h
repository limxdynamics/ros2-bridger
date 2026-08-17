// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mros_msgs:srv/GetDiscoveryInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mros_msgs/srv/get_discovery_info.h"


#ifndef MROS_MSGS__SRV__DETAIL__GET_DISCOVERY_INFO__STRUCT_H_
#define MROS_MSGS__SRV__DETAIL__GET_DISCOVERY_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetDiscoveryInfo in the package mros_msgs.
typedef struct mros_msgs__srv__GetDiscoveryInfo_Request
{
  uint8_t structure_needs_at_least_one_member;
} mros_msgs__srv__GetDiscoveryInfo_Request;

// Struct for a sequence of mros_msgs__srv__GetDiscoveryInfo_Request.
typedef struct mros_msgs__srv__GetDiscoveryInfo_Request__Sequence
{
  mros_msgs__srv__GetDiscoveryInfo_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mros_msgs__srv__GetDiscoveryInfo_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'nodes'
#include "mros_msgs/msg/detail/node_info__struct.h"
// Member 'subscribers'
// Member 'publishers'
// Member 'services'
#include "mros_msgs/msg/detail/topic_info__struct.h"

/// Struct defined in srv/GetDiscoveryInfo in the package mros_msgs.
typedef struct mros_msgs__srv__GetDiscoveryInfo_Response
{
  mros_msgs__msg__NodeInfo__Sequence nodes;
  mros_msgs__msg__TopicInfo__Sequence subscribers;
  mros_msgs__msg__TopicInfo__Sequence publishers;
  mros_msgs__msg__TopicInfo__Sequence services;
} mros_msgs__srv__GetDiscoveryInfo_Response;

// Struct for a sequence of mros_msgs__srv__GetDiscoveryInfo_Response.
typedef struct mros_msgs__srv__GetDiscoveryInfo_Response__Sequence
{
  mros_msgs__srv__GetDiscoveryInfo_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mros_msgs__srv__GetDiscoveryInfo_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  mros_msgs__srv__GetDiscoveryInfo_Event__request__MAX_SIZE = 1
};
// response
enum
{
  mros_msgs__srv__GetDiscoveryInfo_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GetDiscoveryInfo in the package mros_msgs.
typedef struct mros_msgs__srv__GetDiscoveryInfo_Event
{
  service_msgs__msg__ServiceEventInfo info;
  mros_msgs__srv__GetDiscoveryInfo_Request__Sequence request;
  mros_msgs__srv__GetDiscoveryInfo_Response__Sequence response;
} mros_msgs__srv__GetDiscoveryInfo_Event;

// Struct for a sequence of mros_msgs__srv__GetDiscoveryInfo_Event.
typedef struct mros_msgs__srv__GetDiscoveryInfo_Event__Sequence
{
  mros_msgs__srv__GetDiscoveryInfo_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mros_msgs__srv__GetDiscoveryInfo_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MROS_MSGS__SRV__DETAIL__GET_DISCOVERY_INFO__STRUCT_H_
