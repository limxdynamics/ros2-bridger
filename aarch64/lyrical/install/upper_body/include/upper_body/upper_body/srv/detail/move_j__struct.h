// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from upper_body:srv/moveJ.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "upper_body/srv/move_j.h"


#ifndef UPPER_BODY__SRV__DETAIL__MOVE_J__STRUCT_H_
#define UPPER_BODY__SRV__DETAIL__MOVE_J__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'joints'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/moveJ in the package upper_body.
typedef struct upper_body__srv__moveJ_Request
{
  /// unit: rad
  rosidl_runtime_c__float__Sequence joints;
  /// unit: rad/s
  float speed;
} upper_body__srv__moveJ_Request;

// Struct for a sequence of upper_body__srv__moveJ_Request.
typedef struct upper_body__srv__moveJ_Request__Sequence
{
  upper_body__srv__moveJ_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} upper_body__srv__moveJ_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/moveJ in the package upper_body.
typedef struct upper_body__srv__moveJ_Response
{
  int32_t status;
} upper_body__srv__moveJ_Response;

// Struct for a sequence of upper_body__srv__moveJ_Response.
typedef struct upper_body__srv__moveJ_Response__Sequence
{
  upper_body__srv__moveJ_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} upper_body__srv__moveJ_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  upper_body__srv__moveJ_Event__request__MAX_SIZE = 1
};
// response
enum
{
  upper_body__srv__moveJ_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/moveJ in the package upper_body.
typedef struct upper_body__srv__moveJ_Event
{
  service_msgs__msg__ServiceEventInfo info;
  upper_body__srv__moveJ_Request__Sequence request;
  upper_body__srv__moveJ_Response__Sequence response;
} upper_body__srv__moveJ_Event;

// Struct for a sequence of upper_body__srv__moveJ_Event.
typedef struct upper_body__srv__moveJ_Event__Sequence
{
  upper_body__srv__moveJ_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} upper_body__srv__moveJ_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UPPER_BODY__SRV__DETAIL__MOVE_J__STRUCT_H_
