// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from std_srvs:srv/GetInt32Array.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "std_srvs/srv/detail/get_int32_array__rosidl_typesupport_introspection_c.h"
#include "std_srvs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "std_srvs/srv/detail/get_int32_array__functions.h"
#include "std_srvs/srv/detail/get_int32_array__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void std_srvs__srv__GetInt32Array_Request__rosidl_typesupport_introspection_c__GetInt32Array_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  std_srvs__srv__GetInt32Array_Request__init(message_memory);
}

void std_srvs__srv__GetInt32Array_Request__rosidl_typesupport_introspection_c__GetInt32Array_Request_fini_function(void * message_memory)
{
  std_srvs__srv__GetInt32Array_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember std_srvs__srv__GetInt32Array_Request__rosidl_typesupport_introspection_c__GetInt32Array_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(std_srvs__srv__GetInt32Array_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers std_srvs__srv__GetInt32Array_Request__rosidl_typesupport_introspection_c__GetInt32Array_Request_message_members = {
  "std_srvs__srv",  // message namespace
  "GetInt32Array_Request",  // message name
  1,  // number of fields
  sizeof(std_srvs__srv__GetInt32Array_Request),
  false,  // has_any_key_member_
  std_srvs__srv__GetInt32Array_Request__rosidl_typesupport_introspection_c__GetInt32Array_Request_message_member_array,  // message members
  std_srvs__srv__GetInt32Array_Request__rosidl_typesupport_introspection_c__GetInt32Array_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  std_srvs__srv__GetInt32Array_Request__rosidl_typesupport_introspection_c__GetInt32Array_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t std_srvs__srv__GetInt32Array_Request__rosidl_typesupport_introspection_c__GetInt32Array_Request_message_type_support_handle = {
  0,
  &std_srvs__srv__GetInt32Array_Request__rosidl_typesupport_introspection_c__GetInt32Array_Request_message_members,
  get_message_typesupport_handle_function,
  &std_srvs__srv__GetInt32Array_Request__get_type_hash,
  &std_srvs__srv__GetInt32Array_Request__get_type_description,
  &std_srvs__srv__GetInt32Array_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_std_srvs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_srvs, srv, GetInt32Array_Request)() {
  if (!std_srvs__srv__GetInt32Array_Request__rosidl_typesupport_introspection_c__GetInt32Array_Request_message_type_support_handle.typesupport_identifier) {
    std_srvs__srv__GetInt32Array_Request__rosidl_typesupport_introspection_c__GetInt32Array_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &std_srvs__srv__GetInt32Array_Request__rosidl_typesupport_introspection_c__GetInt32Array_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "std_srvs/srv/detail/get_int32_array__rosidl_typesupport_introspection_c.h"
// already included above
// #include "std_srvs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "std_srvs/srv/detail/get_int32_array__functions.h"
// already included above
// #include "std_srvs/srv/detail/get_int32_array__struct.h"


// Include directives for member types
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void std_srvs__srv__GetInt32Array_Response__rosidl_typesupport_introspection_c__GetInt32Array_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  std_srvs__srv__GetInt32Array_Response__init(message_memory);
}

void std_srvs__srv__GetInt32Array_Response__rosidl_typesupport_introspection_c__GetInt32Array_Response_fini_function(void * message_memory)
{
  std_srvs__srv__GetInt32Array_Response__fini(message_memory);
}

size_t std_srvs__srv__GetInt32Array_Response__rosidl_typesupport_introspection_c__size_function__GetInt32Array_Response__data(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * std_srvs__srv__GetInt32Array_Response__rosidl_typesupport_introspection_c__get_const_function__GetInt32Array_Response__data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * std_srvs__srv__GetInt32Array_Response__rosidl_typesupport_introspection_c__get_function__GetInt32Array_Response__data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void std_srvs__srv__GetInt32Array_Response__rosidl_typesupport_introspection_c__fetch_function__GetInt32Array_Response__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    std_srvs__srv__GetInt32Array_Response__rosidl_typesupport_introspection_c__get_const_function__GetInt32Array_Response__data(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void std_srvs__srv__GetInt32Array_Response__rosidl_typesupport_introspection_c__assign_function__GetInt32Array_Response__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    std_srvs__srv__GetInt32Array_Response__rosidl_typesupport_introspection_c__get_function__GetInt32Array_Response__data(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool std_srvs__srv__GetInt32Array_Response__rosidl_typesupport_introspection_c__resize_function__GetInt32Array_Response__data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember std_srvs__srv__GetInt32Array_Response__rosidl_typesupport_introspection_c__GetInt32Array_Response_message_member_array[3] = {
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(std_srvs__srv__GetInt32Array_Response, data),  // bytes offset in struct
    NULL,  // default value
    std_srvs__srv__GetInt32Array_Response__rosidl_typesupport_introspection_c__size_function__GetInt32Array_Response__data,  // size() function pointer
    std_srvs__srv__GetInt32Array_Response__rosidl_typesupport_introspection_c__get_const_function__GetInt32Array_Response__data,  // get_const(index) function pointer
    std_srvs__srv__GetInt32Array_Response__rosidl_typesupport_introspection_c__get_function__GetInt32Array_Response__data,  // get(index) function pointer
    std_srvs__srv__GetInt32Array_Response__rosidl_typesupport_introspection_c__fetch_function__GetInt32Array_Response__data,  // fetch(index, &value) function pointer
    std_srvs__srv__GetInt32Array_Response__rosidl_typesupport_introspection_c__assign_function__GetInt32Array_Response__data,  // assign(index, value) function pointer
    std_srvs__srv__GetInt32Array_Response__rosidl_typesupport_introspection_c__resize_function__GetInt32Array_Response__data,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(std_srvs__srv__GetInt32Array_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(std_srvs__srv__GetInt32Array_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers std_srvs__srv__GetInt32Array_Response__rosidl_typesupport_introspection_c__GetInt32Array_Response_message_members = {
  "std_srvs__srv",  // message namespace
  "GetInt32Array_Response",  // message name
  3,  // number of fields
  sizeof(std_srvs__srv__GetInt32Array_Response),
  false,  // has_any_key_member_
  std_srvs__srv__GetInt32Array_Response__rosidl_typesupport_introspection_c__GetInt32Array_Response_message_member_array,  // message members
  std_srvs__srv__GetInt32Array_Response__rosidl_typesupport_introspection_c__GetInt32Array_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  std_srvs__srv__GetInt32Array_Response__rosidl_typesupport_introspection_c__GetInt32Array_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t std_srvs__srv__GetInt32Array_Response__rosidl_typesupport_introspection_c__GetInt32Array_Response_message_type_support_handle = {
  0,
  &std_srvs__srv__GetInt32Array_Response__rosidl_typesupport_introspection_c__GetInt32Array_Response_message_members,
  get_message_typesupport_handle_function,
  &std_srvs__srv__GetInt32Array_Response__get_type_hash,
  &std_srvs__srv__GetInt32Array_Response__get_type_description,
  &std_srvs__srv__GetInt32Array_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_std_srvs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_srvs, srv, GetInt32Array_Response)() {
  if (!std_srvs__srv__GetInt32Array_Response__rosidl_typesupport_introspection_c__GetInt32Array_Response_message_type_support_handle.typesupport_identifier) {
    std_srvs__srv__GetInt32Array_Response__rosidl_typesupport_introspection_c__GetInt32Array_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &std_srvs__srv__GetInt32Array_Response__rosidl_typesupport_introspection_c__GetInt32Array_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "std_srvs/srv/detail/get_int32_array__rosidl_typesupport_introspection_c.h"
// already included above
// #include "std_srvs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "std_srvs/srv/detail/get_int32_array__functions.h"
// already included above
// #include "std_srvs/srv/detail/get_int32_array__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "std_srvs/srv/get_int32_array.h"
// Member `request`
// Member `response`
// already included above
// #include "std_srvs/srv/detail/get_int32_array__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void std_srvs__srv__GetInt32Array_Event__rosidl_typesupport_introspection_c__GetInt32Array_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  std_srvs__srv__GetInt32Array_Event__init(message_memory);
}

void std_srvs__srv__GetInt32Array_Event__rosidl_typesupport_introspection_c__GetInt32Array_Event_fini_function(void * message_memory)
{
  std_srvs__srv__GetInt32Array_Event__fini(message_memory);
}

size_t std_srvs__srv__GetInt32Array_Event__rosidl_typesupport_introspection_c__size_function__GetInt32Array_Event__request(
  const void * untyped_member)
{
  const std_srvs__srv__GetInt32Array_Request__Sequence * member =
    (const std_srvs__srv__GetInt32Array_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * std_srvs__srv__GetInt32Array_Event__rosidl_typesupport_introspection_c__get_const_function__GetInt32Array_Event__request(
  const void * untyped_member, size_t index)
{
  const std_srvs__srv__GetInt32Array_Request__Sequence * member =
    (const std_srvs__srv__GetInt32Array_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * std_srvs__srv__GetInt32Array_Event__rosidl_typesupport_introspection_c__get_function__GetInt32Array_Event__request(
  void * untyped_member, size_t index)
{
  std_srvs__srv__GetInt32Array_Request__Sequence * member =
    (std_srvs__srv__GetInt32Array_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void std_srvs__srv__GetInt32Array_Event__rosidl_typesupport_introspection_c__fetch_function__GetInt32Array_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const std_srvs__srv__GetInt32Array_Request * item =
    ((const std_srvs__srv__GetInt32Array_Request *)
    std_srvs__srv__GetInt32Array_Event__rosidl_typesupport_introspection_c__get_const_function__GetInt32Array_Event__request(untyped_member, index));
  std_srvs__srv__GetInt32Array_Request * value =
    (std_srvs__srv__GetInt32Array_Request *)(untyped_value);
  *value = *item;
}

void std_srvs__srv__GetInt32Array_Event__rosidl_typesupport_introspection_c__assign_function__GetInt32Array_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  std_srvs__srv__GetInt32Array_Request * item =
    ((std_srvs__srv__GetInt32Array_Request *)
    std_srvs__srv__GetInt32Array_Event__rosidl_typesupport_introspection_c__get_function__GetInt32Array_Event__request(untyped_member, index));
  const std_srvs__srv__GetInt32Array_Request * value =
    (const std_srvs__srv__GetInt32Array_Request *)(untyped_value);
  *item = *value;
}

bool std_srvs__srv__GetInt32Array_Event__rosidl_typesupport_introspection_c__resize_function__GetInt32Array_Event__request(
  void * untyped_member, size_t size)
{
  std_srvs__srv__GetInt32Array_Request__Sequence * member =
    (std_srvs__srv__GetInt32Array_Request__Sequence *)(untyped_member);
  std_srvs__srv__GetInt32Array_Request__Sequence__fini(member);
  return std_srvs__srv__GetInt32Array_Request__Sequence__init(member, size);
}

size_t std_srvs__srv__GetInt32Array_Event__rosidl_typesupport_introspection_c__size_function__GetInt32Array_Event__response(
  const void * untyped_member)
{
  const std_srvs__srv__GetInt32Array_Response__Sequence * member =
    (const std_srvs__srv__GetInt32Array_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * std_srvs__srv__GetInt32Array_Event__rosidl_typesupport_introspection_c__get_const_function__GetInt32Array_Event__response(
  const void * untyped_member, size_t index)
{
  const std_srvs__srv__GetInt32Array_Response__Sequence * member =
    (const std_srvs__srv__GetInt32Array_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * std_srvs__srv__GetInt32Array_Event__rosidl_typesupport_introspection_c__get_function__GetInt32Array_Event__response(
  void * untyped_member, size_t index)
{
  std_srvs__srv__GetInt32Array_Response__Sequence * member =
    (std_srvs__srv__GetInt32Array_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void std_srvs__srv__GetInt32Array_Event__rosidl_typesupport_introspection_c__fetch_function__GetInt32Array_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const std_srvs__srv__GetInt32Array_Response * item =
    ((const std_srvs__srv__GetInt32Array_Response *)
    std_srvs__srv__GetInt32Array_Event__rosidl_typesupport_introspection_c__get_const_function__GetInt32Array_Event__response(untyped_member, index));
  std_srvs__srv__GetInt32Array_Response * value =
    (std_srvs__srv__GetInt32Array_Response *)(untyped_value);
  *value = *item;
}

void std_srvs__srv__GetInt32Array_Event__rosidl_typesupport_introspection_c__assign_function__GetInt32Array_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  std_srvs__srv__GetInt32Array_Response * item =
    ((std_srvs__srv__GetInt32Array_Response *)
    std_srvs__srv__GetInt32Array_Event__rosidl_typesupport_introspection_c__get_function__GetInt32Array_Event__response(untyped_member, index));
  const std_srvs__srv__GetInt32Array_Response * value =
    (const std_srvs__srv__GetInt32Array_Response *)(untyped_value);
  *item = *value;
}

bool std_srvs__srv__GetInt32Array_Event__rosidl_typesupport_introspection_c__resize_function__GetInt32Array_Event__response(
  void * untyped_member, size_t size)
{
  std_srvs__srv__GetInt32Array_Response__Sequence * member =
    (std_srvs__srv__GetInt32Array_Response__Sequence *)(untyped_member);
  std_srvs__srv__GetInt32Array_Response__Sequence__fini(member);
  return std_srvs__srv__GetInt32Array_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember std_srvs__srv__GetInt32Array_Event__rosidl_typesupport_introspection_c__GetInt32Array_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(std_srvs__srv__GetInt32Array_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(std_srvs__srv__GetInt32Array_Event, request),  // bytes offset in struct
    NULL,  // default value
    std_srvs__srv__GetInt32Array_Event__rosidl_typesupport_introspection_c__size_function__GetInt32Array_Event__request,  // size() function pointer
    std_srvs__srv__GetInt32Array_Event__rosidl_typesupport_introspection_c__get_const_function__GetInt32Array_Event__request,  // get_const(index) function pointer
    std_srvs__srv__GetInt32Array_Event__rosidl_typesupport_introspection_c__get_function__GetInt32Array_Event__request,  // get(index) function pointer
    std_srvs__srv__GetInt32Array_Event__rosidl_typesupport_introspection_c__fetch_function__GetInt32Array_Event__request,  // fetch(index, &value) function pointer
    std_srvs__srv__GetInt32Array_Event__rosidl_typesupport_introspection_c__assign_function__GetInt32Array_Event__request,  // assign(index, value) function pointer
    std_srvs__srv__GetInt32Array_Event__rosidl_typesupport_introspection_c__resize_function__GetInt32Array_Event__request,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(std_srvs__srv__GetInt32Array_Event, response),  // bytes offset in struct
    NULL,  // default value
    std_srvs__srv__GetInt32Array_Event__rosidl_typesupport_introspection_c__size_function__GetInt32Array_Event__response,  // size() function pointer
    std_srvs__srv__GetInt32Array_Event__rosidl_typesupport_introspection_c__get_const_function__GetInt32Array_Event__response,  // get_const(index) function pointer
    std_srvs__srv__GetInt32Array_Event__rosidl_typesupport_introspection_c__get_function__GetInt32Array_Event__response,  // get(index) function pointer
    std_srvs__srv__GetInt32Array_Event__rosidl_typesupport_introspection_c__fetch_function__GetInt32Array_Event__response,  // fetch(index, &value) function pointer
    std_srvs__srv__GetInt32Array_Event__rosidl_typesupport_introspection_c__assign_function__GetInt32Array_Event__response,  // assign(index, value) function pointer
    std_srvs__srv__GetInt32Array_Event__rosidl_typesupport_introspection_c__resize_function__GetInt32Array_Event__response,  // resize(index) function pointer
    false  // is_rosidl_buffer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers std_srvs__srv__GetInt32Array_Event__rosidl_typesupport_introspection_c__GetInt32Array_Event_message_members = {
  "std_srvs__srv",  // message namespace
  "GetInt32Array_Event",  // message name
  3,  // number of fields
  sizeof(std_srvs__srv__GetInt32Array_Event),
  false,  // has_any_key_member_
  std_srvs__srv__GetInt32Array_Event__rosidl_typesupport_introspection_c__GetInt32Array_Event_message_member_array,  // message members
  std_srvs__srv__GetInt32Array_Event__rosidl_typesupport_introspection_c__GetInt32Array_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  std_srvs__srv__GetInt32Array_Event__rosidl_typesupport_introspection_c__GetInt32Array_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t std_srvs__srv__GetInt32Array_Event__rosidl_typesupport_introspection_c__GetInt32Array_Event_message_type_support_handle = {
  0,
  &std_srvs__srv__GetInt32Array_Event__rosidl_typesupport_introspection_c__GetInt32Array_Event_message_members,
  get_message_typesupport_handle_function,
  &std_srvs__srv__GetInt32Array_Event__get_type_hash,
  &std_srvs__srv__GetInt32Array_Event__get_type_description,
  &std_srvs__srv__GetInt32Array_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_std_srvs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_srvs, srv, GetInt32Array_Event)() {
  std_srvs__srv__GetInt32Array_Event__rosidl_typesupport_introspection_c__GetInt32Array_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  std_srvs__srv__GetInt32Array_Event__rosidl_typesupport_introspection_c__GetInt32Array_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_srvs, srv, GetInt32Array_Request)();
  std_srvs__srv__GetInt32Array_Event__rosidl_typesupport_introspection_c__GetInt32Array_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_srvs, srv, GetInt32Array_Response)();
  if (!std_srvs__srv__GetInt32Array_Event__rosidl_typesupport_introspection_c__GetInt32Array_Event_message_type_support_handle.typesupport_identifier) {
    std_srvs__srv__GetInt32Array_Event__rosidl_typesupport_introspection_c__GetInt32Array_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &std_srvs__srv__GetInt32Array_Event__rosidl_typesupport_introspection_c__GetInt32Array_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "std_srvs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "std_srvs/srv/detail/get_int32_array__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers std_srvs__srv__detail__get_int32_array__rosidl_typesupport_introspection_c__GetInt32Array_service_members = {
  "std_srvs__srv",  // service namespace
  "GetInt32Array",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // std_srvs__srv__detail__get_int32_array__rosidl_typesupport_introspection_c__GetInt32Array_Request_message_type_support_handle,
  NULL,  // response message
  // std_srvs__srv__detail__get_int32_array__rosidl_typesupport_introspection_c__GetInt32Array_Response_message_type_support_handle
  NULL  // event_message
  // std_srvs__srv__detail__get_int32_array__rosidl_typesupport_introspection_c__GetInt32Array_Response_message_type_support_handle
};


static rosidl_service_type_support_t std_srvs__srv__detail__get_int32_array__rosidl_typesupport_introspection_c__GetInt32Array_service_type_support_handle = {
  0,
  &std_srvs__srv__detail__get_int32_array__rosidl_typesupport_introspection_c__GetInt32Array_service_members,
  get_service_typesupport_handle_function,
  &std_srvs__srv__GetInt32Array_Request__rosidl_typesupport_introspection_c__GetInt32Array_Request_message_type_support_handle,
  &std_srvs__srv__GetInt32Array_Response__rosidl_typesupport_introspection_c__GetInt32Array_Response_message_type_support_handle,
  &std_srvs__srv__GetInt32Array_Event__rosidl_typesupport_introspection_c__GetInt32Array_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    std_srvs,
    srv,
    GetInt32Array
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    std_srvs,
    srv,
    GetInt32Array
  ),
  &std_srvs__srv__GetInt32Array__get_type_hash,
  &std_srvs__srv__GetInt32Array__get_type_description,
  &std_srvs__srv__GetInt32Array__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_srvs, srv, GetInt32Array_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_srvs, srv, GetInt32Array_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_srvs, srv, GetInt32Array_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_std_srvs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_srvs, srv, GetInt32Array)(void) {
  if (!std_srvs__srv__detail__get_int32_array__rosidl_typesupport_introspection_c__GetInt32Array_service_type_support_handle.typesupport_identifier) {
    std_srvs__srv__detail__get_int32_array__rosidl_typesupport_introspection_c__GetInt32Array_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)std_srvs__srv__detail__get_int32_array__rosidl_typesupport_introspection_c__GetInt32Array_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_srvs, srv, GetInt32Array_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_srvs, srv, GetInt32Array_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_srvs, srv, GetInt32Array_Event)()->data;
  }

  return &std_srvs__srv__detail__get_int32_array__rosidl_typesupport_introspection_c__GetInt32Array_service_type_support_handle;
}
