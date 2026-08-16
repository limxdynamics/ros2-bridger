// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from std_srvs:srv/GetStringArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "std_srvs/srv/get_string_array.h"


#ifndef STD_SRVS__SRV__DETAIL__GET_STRING_ARRAY__STRUCT_H_
#define STD_SRVS__SRV__DETAIL__GET_STRING_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetStringArray in the package std_srvs.
typedef struct std_srvs__srv__GetStringArray_Request
{
  uint8_t structure_needs_at_least_one_member;
} std_srvs__srv__GetStringArray_Request;

// Struct for a sequence of std_srvs__srv__GetStringArray_Request.
typedef struct std_srvs__srv__GetStringArray_Request__Sequence
{
  std_srvs__srv__GetStringArray_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_srvs__srv__GetStringArray_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'data'
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetStringArray in the package std_srvs.
typedef struct std_srvs__srv__GetStringArray_Response
{
  rosidl_runtime_c__String__Sequence data;
  /// indicate successful run of triggered service
  bool success;
  /// informational, e.g. for error messages
  rosidl_runtime_c__String message;
} std_srvs__srv__GetStringArray_Response;

// Struct for a sequence of std_srvs__srv__GetStringArray_Response.
typedef struct std_srvs__srv__GetStringArray_Response__Sequence
{
  std_srvs__srv__GetStringArray_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_srvs__srv__GetStringArray_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  std_srvs__srv__GetStringArray_Event__request__MAX_SIZE = 1
};
// response
enum
{
  std_srvs__srv__GetStringArray_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GetStringArray in the package std_srvs.
typedef struct std_srvs__srv__GetStringArray_Event
{
  service_msgs__msg__ServiceEventInfo info;
  std_srvs__srv__GetStringArray_Request__Sequence request;
  std_srvs__srv__GetStringArray_Response__Sequence response;
} std_srvs__srv__GetStringArray_Event;

// Struct for a sequence of std_srvs__srv__GetStringArray_Event.
typedef struct std_srvs__srv__GetStringArray_Event__Sequence
{
  std_srvs__srv__GetStringArray_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_srvs__srv__GetStringArray_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STD_SRVS__SRV__DETAIL__GET_STRING_ARRAY__STRUCT_H_
