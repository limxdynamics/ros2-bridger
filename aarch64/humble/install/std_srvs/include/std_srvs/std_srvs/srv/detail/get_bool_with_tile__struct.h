// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from std_srvs:srv/GetBoolWithTile.idl
// generated code does not contain a copyright notice

#ifndef STD_SRVS__SRV__DETAIL__GET_BOOL_WITH_TILE__STRUCT_H_
#define STD_SRVS__SRV__DETAIL__GET_BOOL_WITH_TILE__STRUCT_H_

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

/// Struct defined in srv/GetBoolWithTile in the package std_srvs.
typedef struct std_srvs__srv__GetBoolWithTile_Request
{
  rosidl_runtime_c__String title;
} std_srvs__srv__GetBoolWithTile_Request;

// Struct for a sequence of std_srvs__srv__GetBoolWithTile_Request.
typedef struct std_srvs__srv__GetBoolWithTile_Request__Sequence
{
  std_srvs__srv__GetBoolWithTile_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_srvs__srv__GetBoolWithTile_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetBoolWithTile in the package std_srvs.
typedef struct std_srvs__srv__GetBoolWithTile_Response
{
  /// e.g. for hardware enabling / disabling
  bool data;
  /// indicate successful run of triggered service
  bool success;
  /// informational, e.g. for error messages
  rosidl_runtime_c__String message;
} std_srvs__srv__GetBoolWithTile_Response;

// Struct for a sequence of std_srvs__srv__GetBoolWithTile_Response.
typedef struct std_srvs__srv__GetBoolWithTile_Response__Sequence
{
  std_srvs__srv__GetBoolWithTile_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_srvs__srv__GetBoolWithTile_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STD_SRVS__SRV__DETAIL__GET_BOOL_WITH_TILE__STRUCT_H_
