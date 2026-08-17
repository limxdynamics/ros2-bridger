// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from limx_arm_msgs:srv/gripper.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "limx_arm_msgs/srv/gripper.h"


#ifndef LIMX_ARM_MSGS__SRV__DETAIL__GRIPPER__STRUCT_H_
#define LIMX_ARM_MSGS__SRV__DETAIL__GRIPPER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/gripper in the package limx_arm_msgs.
typedef struct limx_arm_msgs__srv__gripper_Request
{
  bool initial;
  int32_t dis;
  int32_t force;
} limx_arm_msgs__srv__gripper_Request;

// Struct for a sequence of limx_arm_msgs__srv__gripper_Request.
typedef struct limx_arm_msgs__srv__gripper_Request__Sequence
{
  limx_arm_msgs__srv__gripper_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} limx_arm_msgs__srv__gripper_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/gripper in the package limx_arm_msgs.
typedef struct limx_arm_msgs__srv__gripper_Response
{
  int32_t status;
} limx_arm_msgs__srv__gripper_Response;

// Struct for a sequence of limx_arm_msgs__srv__gripper_Response.
typedef struct limx_arm_msgs__srv__gripper_Response__Sequence
{
  limx_arm_msgs__srv__gripper_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} limx_arm_msgs__srv__gripper_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  limx_arm_msgs__srv__gripper_Event__request__MAX_SIZE = 1
};
// response
enum
{
  limx_arm_msgs__srv__gripper_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/gripper in the package limx_arm_msgs.
typedef struct limx_arm_msgs__srv__gripper_Event
{
  service_msgs__msg__ServiceEventInfo info;
  limx_arm_msgs__srv__gripper_Request__Sequence request;
  limx_arm_msgs__srv__gripper_Response__Sequence response;
} limx_arm_msgs__srv__gripper_Event;

// Struct for a sequence of limx_arm_msgs__srv__gripper_Event.
typedef struct limx_arm_msgs__srv__gripper_Event__Sequence
{
  limx_arm_msgs__srv__gripper_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} limx_arm_msgs__srv__gripper_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LIMX_ARM_MSGS__SRV__DETAIL__GRIPPER__STRUCT_H_
