// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from limx_arm_msgs:srv/desire_pos.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "limx_arm_msgs/srv/desire_pos.h"


#ifndef LIMX_ARM_MSGS__SRV__DETAIL__DESIRE_POS__STRUCT_H_
#define LIMX_ARM_MSGS__SRV__DETAIL__DESIRE_POS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/desire_pos in the package limx_arm_msgs.
typedef struct limx_arm_msgs__srv__desire_pos_Request
{
  int32_t taskNum;
  /// deg/m
  float desire_pos[6];
  bool co_control;
} limx_arm_msgs__srv__desire_pos_Request;

// Struct for a sequence of limx_arm_msgs__srv__desire_pos_Request.
typedef struct limx_arm_msgs__srv__desire_pos_Request__Sequence
{
  limx_arm_msgs__srv__desire_pos_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} limx_arm_msgs__srv__desire_pos_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/desire_pos in the package limx_arm_msgs.
typedef struct limx_arm_msgs__srv__desire_pos_Response
{
  bool status;
} limx_arm_msgs__srv__desire_pos_Response;

// Struct for a sequence of limx_arm_msgs__srv__desire_pos_Response.
typedef struct limx_arm_msgs__srv__desire_pos_Response__Sequence
{
  limx_arm_msgs__srv__desire_pos_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} limx_arm_msgs__srv__desire_pos_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  limx_arm_msgs__srv__desire_pos_Event__request__MAX_SIZE = 1
};
// response
enum
{
  limx_arm_msgs__srv__desire_pos_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/desire_pos in the package limx_arm_msgs.
typedef struct limx_arm_msgs__srv__desire_pos_Event
{
  service_msgs__msg__ServiceEventInfo info;
  limx_arm_msgs__srv__desire_pos_Request__Sequence request;
  limx_arm_msgs__srv__desire_pos_Response__Sequence response;
} limx_arm_msgs__srv__desire_pos_Event;

// Struct for a sequence of limx_arm_msgs__srv__desire_pos_Event.
typedef struct limx_arm_msgs__srv__desire_pos_Event__Sequence
{
  limx_arm_msgs__srv__desire_pos_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} limx_arm_msgs__srv__desire_pos_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LIMX_ARM_MSGS__SRV__DETAIL__DESIRE_POS__STRUCT_H_
