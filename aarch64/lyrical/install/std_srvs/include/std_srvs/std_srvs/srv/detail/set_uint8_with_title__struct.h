// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from std_srvs:srv/SetUint8WithTitle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "std_srvs/srv/set_uint8_with_title.h"


#ifndef STD_SRVS__SRV__DETAIL__SET_UINT8_WITH_TITLE__STRUCT_H_
#define STD_SRVS__SRV__DETAIL__SET_UINT8_WITH_TITLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'title'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetUint8WithTitle in the package std_srvs.
typedef struct std_srvs__srv__SetUint8WithTitle_Request
{
  rosidl_runtime_c__String title;
  uint8_t data;
} std_srvs__srv__SetUint8WithTitle_Request;

// Struct for a sequence of std_srvs__srv__SetUint8WithTitle_Request.
typedef struct std_srvs__srv__SetUint8WithTitle_Request__Sequence
{
  std_srvs__srv__SetUint8WithTitle_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_srvs__srv__SetUint8WithTitle_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetUint8WithTitle in the package std_srvs.
typedef struct std_srvs__srv__SetUint8WithTitle_Response
{
  /// indicate successful run of triggered service
  bool success;
  /// informational, e.g. for error messages
  rosidl_runtime_c__String message;
} std_srvs__srv__SetUint8WithTitle_Response;

// Struct for a sequence of std_srvs__srv__SetUint8WithTitle_Response.
typedef struct std_srvs__srv__SetUint8WithTitle_Response__Sequence
{
  std_srvs__srv__SetUint8WithTitle_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_srvs__srv__SetUint8WithTitle_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  std_srvs__srv__SetUint8WithTitle_Event__request__MAX_SIZE = 1
};
// response
enum
{
  std_srvs__srv__SetUint8WithTitle_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetUint8WithTitle in the package std_srvs.
typedef struct std_srvs__srv__SetUint8WithTitle_Event
{
  service_msgs__msg__ServiceEventInfo info;
  std_srvs__srv__SetUint8WithTitle_Request__Sequence request;
  std_srvs__srv__SetUint8WithTitle_Response__Sequence response;
} std_srvs__srv__SetUint8WithTitle_Event;

// Struct for a sequence of std_srvs__srv__SetUint8WithTitle_Event.
typedef struct std_srvs__srv__SetUint8WithTitle_Event__Sequence
{
  std_srvs__srv__SetUint8WithTitle_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_srvs__srv__SetUint8WithTitle_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STD_SRVS__SRV__DETAIL__SET_UINT8_WITH_TITLE__STRUCT_H_
