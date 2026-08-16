// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from upper_body:srv/moveJ.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "upper_body/srv/detail/move_j__rosidl_typesupport_introspection_c.h"
#include "upper_body/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "upper_body/srv/detail/move_j__functions.h"
#include "upper_body/srv/detail/move_j__struct.h"


// Include directives for member types
// Member `joints`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void upper_body__srv__moveJ_Request__rosidl_typesupport_introspection_c__moveJ_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  upper_body__srv__moveJ_Request__init(message_memory);
}

void upper_body__srv__moveJ_Request__rosidl_typesupport_introspection_c__moveJ_Request_fini_function(void * message_memory)
{
  upper_body__srv__moveJ_Request__fini(message_memory);
}

size_t upper_body__srv__moveJ_Request__rosidl_typesupport_introspection_c__size_function__moveJ_Request__joints(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * upper_body__srv__moveJ_Request__rosidl_typesupport_introspection_c__get_const_function__moveJ_Request__joints(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * upper_body__srv__moveJ_Request__rosidl_typesupport_introspection_c__get_function__moveJ_Request__joints(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void upper_body__srv__moveJ_Request__rosidl_typesupport_introspection_c__fetch_function__moveJ_Request__joints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    upper_body__srv__moveJ_Request__rosidl_typesupport_introspection_c__get_const_function__moveJ_Request__joints(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void upper_body__srv__moveJ_Request__rosidl_typesupport_introspection_c__assign_function__moveJ_Request__joints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    upper_body__srv__moveJ_Request__rosidl_typesupport_introspection_c__get_function__moveJ_Request__joints(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool upper_body__srv__moveJ_Request__rosidl_typesupport_introspection_c__resize_function__moveJ_Request__joints(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember upper_body__srv__moveJ_Request__rosidl_typesupport_introspection_c__moveJ_Request_message_member_array[2] = {
  {
    "joints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(upper_body__srv__moveJ_Request, joints),  // bytes offset in struct
    NULL,  // default value
    upper_body__srv__moveJ_Request__rosidl_typesupport_introspection_c__size_function__moveJ_Request__joints,  // size() function pointer
    upper_body__srv__moveJ_Request__rosidl_typesupport_introspection_c__get_const_function__moveJ_Request__joints,  // get_const(index) function pointer
    upper_body__srv__moveJ_Request__rosidl_typesupport_introspection_c__get_function__moveJ_Request__joints,  // get(index) function pointer
    upper_body__srv__moveJ_Request__rosidl_typesupport_introspection_c__fetch_function__moveJ_Request__joints,  // fetch(index, &value) function pointer
    upper_body__srv__moveJ_Request__rosidl_typesupport_introspection_c__assign_function__moveJ_Request__joints,  // assign(index, value) function pointer
    upper_body__srv__moveJ_Request__rosidl_typesupport_introspection_c__resize_function__moveJ_Request__joints  // resize(index) function pointer
  },
  {
    "speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(upper_body__srv__moveJ_Request, speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers upper_body__srv__moveJ_Request__rosidl_typesupport_introspection_c__moveJ_Request_message_members = {
  "upper_body__srv",  // message namespace
  "moveJ_Request",  // message name
  2,  // number of fields
  sizeof(upper_body__srv__moveJ_Request),
  false,  // has_any_key_member_
  upper_body__srv__moveJ_Request__rosidl_typesupport_introspection_c__moveJ_Request_message_member_array,  // message members
  upper_body__srv__moveJ_Request__rosidl_typesupport_introspection_c__moveJ_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  upper_body__srv__moveJ_Request__rosidl_typesupport_introspection_c__moveJ_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t upper_body__srv__moveJ_Request__rosidl_typesupport_introspection_c__moveJ_Request_message_type_support_handle = {
  0,
  &upper_body__srv__moveJ_Request__rosidl_typesupport_introspection_c__moveJ_Request_message_members,
  get_message_typesupport_handle_function,
  &upper_body__srv__moveJ_Request__get_type_hash,
  &upper_body__srv__moveJ_Request__get_type_description,
  &upper_body__srv__moveJ_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_upper_body
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, upper_body, srv, moveJ_Request)() {
  if (!upper_body__srv__moveJ_Request__rosidl_typesupport_introspection_c__moveJ_Request_message_type_support_handle.typesupport_identifier) {
    upper_body__srv__moveJ_Request__rosidl_typesupport_introspection_c__moveJ_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &upper_body__srv__moveJ_Request__rosidl_typesupport_introspection_c__moveJ_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "upper_body/srv/detail/move_j__rosidl_typesupport_introspection_c.h"
// already included above
// #include "upper_body/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "upper_body/srv/detail/move_j__functions.h"
// already included above
// #include "upper_body/srv/detail/move_j__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void upper_body__srv__moveJ_Response__rosidl_typesupport_introspection_c__moveJ_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  upper_body__srv__moveJ_Response__init(message_memory);
}

void upper_body__srv__moveJ_Response__rosidl_typesupport_introspection_c__moveJ_Response_fini_function(void * message_memory)
{
  upper_body__srv__moveJ_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember upper_body__srv__moveJ_Response__rosidl_typesupport_introspection_c__moveJ_Response_message_member_array[1] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(upper_body__srv__moveJ_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers upper_body__srv__moveJ_Response__rosidl_typesupport_introspection_c__moveJ_Response_message_members = {
  "upper_body__srv",  // message namespace
  "moveJ_Response",  // message name
  1,  // number of fields
  sizeof(upper_body__srv__moveJ_Response),
  false,  // has_any_key_member_
  upper_body__srv__moveJ_Response__rosidl_typesupport_introspection_c__moveJ_Response_message_member_array,  // message members
  upper_body__srv__moveJ_Response__rosidl_typesupport_introspection_c__moveJ_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  upper_body__srv__moveJ_Response__rosidl_typesupport_introspection_c__moveJ_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t upper_body__srv__moveJ_Response__rosidl_typesupport_introspection_c__moveJ_Response_message_type_support_handle = {
  0,
  &upper_body__srv__moveJ_Response__rosidl_typesupport_introspection_c__moveJ_Response_message_members,
  get_message_typesupport_handle_function,
  &upper_body__srv__moveJ_Response__get_type_hash,
  &upper_body__srv__moveJ_Response__get_type_description,
  &upper_body__srv__moveJ_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_upper_body
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, upper_body, srv, moveJ_Response)() {
  if (!upper_body__srv__moveJ_Response__rosidl_typesupport_introspection_c__moveJ_Response_message_type_support_handle.typesupport_identifier) {
    upper_body__srv__moveJ_Response__rosidl_typesupport_introspection_c__moveJ_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &upper_body__srv__moveJ_Response__rosidl_typesupport_introspection_c__moveJ_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "upper_body/srv/detail/move_j__rosidl_typesupport_introspection_c.h"
// already included above
// #include "upper_body/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "upper_body/srv/detail/move_j__functions.h"
// already included above
// #include "upper_body/srv/detail/move_j__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "upper_body/srv/move_j.h"
// Member `request`
// Member `response`
// already included above
// #include "upper_body/srv/detail/move_j__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void upper_body__srv__moveJ_Event__rosidl_typesupport_introspection_c__moveJ_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  upper_body__srv__moveJ_Event__init(message_memory);
}

void upper_body__srv__moveJ_Event__rosidl_typesupport_introspection_c__moveJ_Event_fini_function(void * message_memory)
{
  upper_body__srv__moveJ_Event__fini(message_memory);
}

size_t upper_body__srv__moveJ_Event__rosidl_typesupport_introspection_c__size_function__moveJ_Event__request(
  const void * untyped_member)
{
  const upper_body__srv__moveJ_Request__Sequence * member =
    (const upper_body__srv__moveJ_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * upper_body__srv__moveJ_Event__rosidl_typesupport_introspection_c__get_const_function__moveJ_Event__request(
  const void * untyped_member, size_t index)
{
  const upper_body__srv__moveJ_Request__Sequence * member =
    (const upper_body__srv__moveJ_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * upper_body__srv__moveJ_Event__rosidl_typesupport_introspection_c__get_function__moveJ_Event__request(
  void * untyped_member, size_t index)
{
  upper_body__srv__moveJ_Request__Sequence * member =
    (upper_body__srv__moveJ_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void upper_body__srv__moveJ_Event__rosidl_typesupport_introspection_c__fetch_function__moveJ_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const upper_body__srv__moveJ_Request * item =
    ((const upper_body__srv__moveJ_Request *)
    upper_body__srv__moveJ_Event__rosidl_typesupport_introspection_c__get_const_function__moveJ_Event__request(untyped_member, index));
  upper_body__srv__moveJ_Request * value =
    (upper_body__srv__moveJ_Request *)(untyped_value);
  *value = *item;
}

void upper_body__srv__moveJ_Event__rosidl_typesupport_introspection_c__assign_function__moveJ_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  upper_body__srv__moveJ_Request * item =
    ((upper_body__srv__moveJ_Request *)
    upper_body__srv__moveJ_Event__rosidl_typesupport_introspection_c__get_function__moveJ_Event__request(untyped_member, index));
  const upper_body__srv__moveJ_Request * value =
    (const upper_body__srv__moveJ_Request *)(untyped_value);
  *item = *value;
}

bool upper_body__srv__moveJ_Event__rosidl_typesupport_introspection_c__resize_function__moveJ_Event__request(
  void * untyped_member, size_t size)
{
  upper_body__srv__moveJ_Request__Sequence * member =
    (upper_body__srv__moveJ_Request__Sequence *)(untyped_member);
  upper_body__srv__moveJ_Request__Sequence__fini(member);
  return upper_body__srv__moveJ_Request__Sequence__init(member, size);
}

size_t upper_body__srv__moveJ_Event__rosidl_typesupport_introspection_c__size_function__moveJ_Event__response(
  const void * untyped_member)
{
  const upper_body__srv__moveJ_Response__Sequence * member =
    (const upper_body__srv__moveJ_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * upper_body__srv__moveJ_Event__rosidl_typesupport_introspection_c__get_const_function__moveJ_Event__response(
  const void * untyped_member, size_t index)
{
  const upper_body__srv__moveJ_Response__Sequence * member =
    (const upper_body__srv__moveJ_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * upper_body__srv__moveJ_Event__rosidl_typesupport_introspection_c__get_function__moveJ_Event__response(
  void * untyped_member, size_t index)
{
  upper_body__srv__moveJ_Response__Sequence * member =
    (upper_body__srv__moveJ_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void upper_body__srv__moveJ_Event__rosidl_typesupport_introspection_c__fetch_function__moveJ_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const upper_body__srv__moveJ_Response * item =
    ((const upper_body__srv__moveJ_Response *)
    upper_body__srv__moveJ_Event__rosidl_typesupport_introspection_c__get_const_function__moveJ_Event__response(untyped_member, index));
  upper_body__srv__moveJ_Response * value =
    (upper_body__srv__moveJ_Response *)(untyped_value);
  *value = *item;
}

void upper_body__srv__moveJ_Event__rosidl_typesupport_introspection_c__assign_function__moveJ_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  upper_body__srv__moveJ_Response * item =
    ((upper_body__srv__moveJ_Response *)
    upper_body__srv__moveJ_Event__rosidl_typesupport_introspection_c__get_function__moveJ_Event__response(untyped_member, index));
  const upper_body__srv__moveJ_Response * value =
    (const upper_body__srv__moveJ_Response *)(untyped_value);
  *item = *value;
}

bool upper_body__srv__moveJ_Event__rosidl_typesupport_introspection_c__resize_function__moveJ_Event__response(
  void * untyped_member, size_t size)
{
  upper_body__srv__moveJ_Response__Sequence * member =
    (upper_body__srv__moveJ_Response__Sequence *)(untyped_member);
  upper_body__srv__moveJ_Response__Sequence__fini(member);
  return upper_body__srv__moveJ_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember upper_body__srv__moveJ_Event__rosidl_typesupport_introspection_c__moveJ_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(upper_body__srv__moveJ_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
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
    offsetof(upper_body__srv__moveJ_Event, request),  // bytes offset in struct
    NULL,  // default value
    upper_body__srv__moveJ_Event__rosidl_typesupport_introspection_c__size_function__moveJ_Event__request,  // size() function pointer
    upper_body__srv__moveJ_Event__rosidl_typesupport_introspection_c__get_const_function__moveJ_Event__request,  // get_const(index) function pointer
    upper_body__srv__moveJ_Event__rosidl_typesupport_introspection_c__get_function__moveJ_Event__request,  // get(index) function pointer
    upper_body__srv__moveJ_Event__rosidl_typesupport_introspection_c__fetch_function__moveJ_Event__request,  // fetch(index, &value) function pointer
    upper_body__srv__moveJ_Event__rosidl_typesupport_introspection_c__assign_function__moveJ_Event__request,  // assign(index, value) function pointer
    upper_body__srv__moveJ_Event__rosidl_typesupport_introspection_c__resize_function__moveJ_Event__request  // resize(index) function pointer
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
    offsetof(upper_body__srv__moveJ_Event, response),  // bytes offset in struct
    NULL,  // default value
    upper_body__srv__moveJ_Event__rosidl_typesupport_introspection_c__size_function__moveJ_Event__response,  // size() function pointer
    upper_body__srv__moveJ_Event__rosidl_typesupport_introspection_c__get_const_function__moveJ_Event__response,  // get_const(index) function pointer
    upper_body__srv__moveJ_Event__rosidl_typesupport_introspection_c__get_function__moveJ_Event__response,  // get(index) function pointer
    upper_body__srv__moveJ_Event__rosidl_typesupport_introspection_c__fetch_function__moveJ_Event__response,  // fetch(index, &value) function pointer
    upper_body__srv__moveJ_Event__rosidl_typesupport_introspection_c__assign_function__moveJ_Event__response,  // assign(index, value) function pointer
    upper_body__srv__moveJ_Event__rosidl_typesupport_introspection_c__resize_function__moveJ_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers upper_body__srv__moveJ_Event__rosidl_typesupport_introspection_c__moveJ_Event_message_members = {
  "upper_body__srv",  // message namespace
  "moveJ_Event",  // message name
  3,  // number of fields
  sizeof(upper_body__srv__moveJ_Event),
  false,  // has_any_key_member_
  upper_body__srv__moveJ_Event__rosidl_typesupport_introspection_c__moveJ_Event_message_member_array,  // message members
  upper_body__srv__moveJ_Event__rosidl_typesupport_introspection_c__moveJ_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  upper_body__srv__moveJ_Event__rosidl_typesupport_introspection_c__moveJ_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t upper_body__srv__moveJ_Event__rosidl_typesupport_introspection_c__moveJ_Event_message_type_support_handle = {
  0,
  &upper_body__srv__moveJ_Event__rosidl_typesupport_introspection_c__moveJ_Event_message_members,
  get_message_typesupport_handle_function,
  &upper_body__srv__moveJ_Event__get_type_hash,
  &upper_body__srv__moveJ_Event__get_type_description,
  &upper_body__srv__moveJ_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_upper_body
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, upper_body, srv, moveJ_Event)() {
  upper_body__srv__moveJ_Event__rosidl_typesupport_introspection_c__moveJ_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  upper_body__srv__moveJ_Event__rosidl_typesupport_introspection_c__moveJ_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, upper_body, srv, moveJ_Request)();
  upper_body__srv__moveJ_Event__rosidl_typesupport_introspection_c__moveJ_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, upper_body, srv, moveJ_Response)();
  if (!upper_body__srv__moveJ_Event__rosidl_typesupport_introspection_c__moveJ_Event_message_type_support_handle.typesupport_identifier) {
    upper_body__srv__moveJ_Event__rosidl_typesupport_introspection_c__moveJ_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &upper_body__srv__moveJ_Event__rosidl_typesupport_introspection_c__moveJ_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "upper_body/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "upper_body/srv/detail/move_j__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers upper_body__srv__detail__move_j__rosidl_typesupport_introspection_c__moveJ_service_members = {
  "upper_body__srv",  // service namespace
  "moveJ",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // upper_body__srv__detail__move_j__rosidl_typesupport_introspection_c__moveJ_Request_message_type_support_handle,
  NULL,  // response message
  // upper_body__srv__detail__move_j__rosidl_typesupport_introspection_c__moveJ_Response_message_type_support_handle
  NULL  // event_message
  // upper_body__srv__detail__move_j__rosidl_typesupport_introspection_c__moveJ_Response_message_type_support_handle
};


static rosidl_service_type_support_t upper_body__srv__detail__move_j__rosidl_typesupport_introspection_c__moveJ_service_type_support_handle = {
  0,
  &upper_body__srv__detail__move_j__rosidl_typesupport_introspection_c__moveJ_service_members,
  get_service_typesupport_handle_function,
  &upper_body__srv__moveJ_Request__rosidl_typesupport_introspection_c__moveJ_Request_message_type_support_handle,
  &upper_body__srv__moveJ_Response__rosidl_typesupport_introspection_c__moveJ_Response_message_type_support_handle,
  &upper_body__srv__moveJ_Event__rosidl_typesupport_introspection_c__moveJ_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    upper_body,
    srv,
    moveJ
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    upper_body,
    srv,
    moveJ
  ),
  &upper_body__srv__moveJ__get_type_hash,
  &upper_body__srv__moveJ__get_type_description,
  &upper_body__srv__moveJ__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, upper_body, srv, moveJ_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, upper_body, srv, moveJ_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, upper_body, srv, moveJ_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_upper_body
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, upper_body, srv, moveJ)(void) {
  if (!upper_body__srv__detail__move_j__rosidl_typesupport_introspection_c__moveJ_service_type_support_handle.typesupport_identifier) {
    upper_body__srv__detail__move_j__rosidl_typesupport_introspection_c__moveJ_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)upper_body__srv__detail__move_j__rosidl_typesupport_introspection_c__moveJ_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, upper_body, srv, moveJ_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, upper_body, srv, moveJ_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, upper_body, srv, moveJ_Event)()->data;
  }

  return &upper_body__srv__detail__move_j__rosidl_typesupport_introspection_c__moveJ_service_type_support_handle;
}
