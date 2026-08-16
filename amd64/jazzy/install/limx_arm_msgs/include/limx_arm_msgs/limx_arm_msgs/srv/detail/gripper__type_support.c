// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from limx_arm_msgs:srv/gripper.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "limx_arm_msgs/srv/detail/gripper__rosidl_typesupport_introspection_c.h"
#include "limx_arm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "limx_arm_msgs/srv/detail/gripper__functions.h"
#include "limx_arm_msgs/srv/detail/gripper__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void limx_arm_msgs__srv__gripper_Request__rosidl_typesupport_introspection_c__gripper_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  limx_arm_msgs__srv__gripper_Request__init(message_memory);
}

void limx_arm_msgs__srv__gripper_Request__rosidl_typesupport_introspection_c__gripper_Request_fini_function(void * message_memory)
{
  limx_arm_msgs__srv__gripper_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember limx_arm_msgs__srv__gripper_Request__rosidl_typesupport_introspection_c__gripper_Request_message_member_array[3] = {
  {
    "initial",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(limx_arm_msgs__srv__gripper_Request, initial),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dis",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(limx_arm_msgs__srv__gripper_Request, dis),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "force",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(limx_arm_msgs__srv__gripper_Request, force),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers limx_arm_msgs__srv__gripper_Request__rosidl_typesupport_introspection_c__gripper_Request_message_members = {
  "limx_arm_msgs__srv",  // message namespace
  "gripper_Request",  // message name
  3,  // number of fields
  sizeof(limx_arm_msgs__srv__gripper_Request),
  false,  // has_any_key_member_
  limx_arm_msgs__srv__gripper_Request__rosidl_typesupport_introspection_c__gripper_Request_message_member_array,  // message members
  limx_arm_msgs__srv__gripper_Request__rosidl_typesupport_introspection_c__gripper_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  limx_arm_msgs__srv__gripper_Request__rosidl_typesupport_introspection_c__gripper_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t limx_arm_msgs__srv__gripper_Request__rosidl_typesupport_introspection_c__gripper_Request_message_type_support_handle = {
  0,
  &limx_arm_msgs__srv__gripper_Request__rosidl_typesupport_introspection_c__gripper_Request_message_members,
  get_message_typesupport_handle_function,
  &limx_arm_msgs__srv__gripper_Request__get_type_hash,
  &limx_arm_msgs__srv__gripper_Request__get_type_description,
  &limx_arm_msgs__srv__gripper_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_limx_arm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, limx_arm_msgs, srv, gripper_Request)() {
  if (!limx_arm_msgs__srv__gripper_Request__rosidl_typesupport_introspection_c__gripper_Request_message_type_support_handle.typesupport_identifier) {
    limx_arm_msgs__srv__gripper_Request__rosidl_typesupport_introspection_c__gripper_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &limx_arm_msgs__srv__gripper_Request__rosidl_typesupport_introspection_c__gripper_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "limx_arm_msgs/srv/detail/gripper__rosidl_typesupport_introspection_c.h"
// already included above
// #include "limx_arm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "limx_arm_msgs/srv/detail/gripper__functions.h"
// already included above
// #include "limx_arm_msgs/srv/detail/gripper__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void limx_arm_msgs__srv__gripper_Response__rosidl_typesupport_introspection_c__gripper_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  limx_arm_msgs__srv__gripper_Response__init(message_memory);
}

void limx_arm_msgs__srv__gripper_Response__rosidl_typesupport_introspection_c__gripper_Response_fini_function(void * message_memory)
{
  limx_arm_msgs__srv__gripper_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember limx_arm_msgs__srv__gripper_Response__rosidl_typesupport_introspection_c__gripper_Response_message_member_array[1] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(limx_arm_msgs__srv__gripper_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers limx_arm_msgs__srv__gripper_Response__rosidl_typesupport_introspection_c__gripper_Response_message_members = {
  "limx_arm_msgs__srv",  // message namespace
  "gripper_Response",  // message name
  1,  // number of fields
  sizeof(limx_arm_msgs__srv__gripper_Response),
  false,  // has_any_key_member_
  limx_arm_msgs__srv__gripper_Response__rosidl_typesupport_introspection_c__gripper_Response_message_member_array,  // message members
  limx_arm_msgs__srv__gripper_Response__rosidl_typesupport_introspection_c__gripper_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  limx_arm_msgs__srv__gripper_Response__rosidl_typesupport_introspection_c__gripper_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t limx_arm_msgs__srv__gripper_Response__rosidl_typesupport_introspection_c__gripper_Response_message_type_support_handle = {
  0,
  &limx_arm_msgs__srv__gripper_Response__rosidl_typesupport_introspection_c__gripper_Response_message_members,
  get_message_typesupport_handle_function,
  &limx_arm_msgs__srv__gripper_Response__get_type_hash,
  &limx_arm_msgs__srv__gripper_Response__get_type_description,
  &limx_arm_msgs__srv__gripper_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_limx_arm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, limx_arm_msgs, srv, gripper_Response)() {
  if (!limx_arm_msgs__srv__gripper_Response__rosidl_typesupport_introspection_c__gripper_Response_message_type_support_handle.typesupport_identifier) {
    limx_arm_msgs__srv__gripper_Response__rosidl_typesupport_introspection_c__gripper_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &limx_arm_msgs__srv__gripper_Response__rosidl_typesupport_introspection_c__gripper_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "limx_arm_msgs/srv/detail/gripper__rosidl_typesupport_introspection_c.h"
// already included above
// #include "limx_arm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "limx_arm_msgs/srv/detail/gripper__functions.h"
// already included above
// #include "limx_arm_msgs/srv/detail/gripper__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "limx_arm_msgs/srv/gripper.h"
// Member `request`
// Member `response`
// already included above
// #include "limx_arm_msgs/srv/detail/gripper__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void limx_arm_msgs__srv__gripper_Event__rosidl_typesupport_introspection_c__gripper_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  limx_arm_msgs__srv__gripper_Event__init(message_memory);
}

void limx_arm_msgs__srv__gripper_Event__rosidl_typesupport_introspection_c__gripper_Event_fini_function(void * message_memory)
{
  limx_arm_msgs__srv__gripper_Event__fini(message_memory);
}

size_t limx_arm_msgs__srv__gripper_Event__rosidl_typesupport_introspection_c__size_function__gripper_Event__request(
  const void * untyped_member)
{
  const limx_arm_msgs__srv__gripper_Request__Sequence * member =
    (const limx_arm_msgs__srv__gripper_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * limx_arm_msgs__srv__gripper_Event__rosidl_typesupport_introspection_c__get_const_function__gripper_Event__request(
  const void * untyped_member, size_t index)
{
  const limx_arm_msgs__srv__gripper_Request__Sequence * member =
    (const limx_arm_msgs__srv__gripper_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * limx_arm_msgs__srv__gripper_Event__rosidl_typesupport_introspection_c__get_function__gripper_Event__request(
  void * untyped_member, size_t index)
{
  limx_arm_msgs__srv__gripper_Request__Sequence * member =
    (limx_arm_msgs__srv__gripper_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void limx_arm_msgs__srv__gripper_Event__rosidl_typesupport_introspection_c__fetch_function__gripper_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const limx_arm_msgs__srv__gripper_Request * item =
    ((const limx_arm_msgs__srv__gripper_Request *)
    limx_arm_msgs__srv__gripper_Event__rosidl_typesupport_introspection_c__get_const_function__gripper_Event__request(untyped_member, index));
  limx_arm_msgs__srv__gripper_Request * value =
    (limx_arm_msgs__srv__gripper_Request *)(untyped_value);
  *value = *item;
}

void limx_arm_msgs__srv__gripper_Event__rosidl_typesupport_introspection_c__assign_function__gripper_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  limx_arm_msgs__srv__gripper_Request * item =
    ((limx_arm_msgs__srv__gripper_Request *)
    limx_arm_msgs__srv__gripper_Event__rosidl_typesupport_introspection_c__get_function__gripper_Event__request(untyped_member, index));
  const limx_arm_msgs__srv__gripper_Request * value =
    (const limx_arm_msgs__srv__gripper_Request *)(untyped_value);
  *item = *value;
}

bool limx_arm_msgs__srv__gripper_Event__rosidl_typesupport_introspection_c__resize_function__gripper_Event__request(
  void * untyped_member, size_t size)
{
  limx_arm_msgs__srv__gripper_Request__Sequence * member =
    (limx_arm_msgs__srv__gripper_Request__Sequence *)(untyped_member);
  limx_arm_msgs__srv__gripper_Request__Sequence__fini(member);
  return limx_arm_msgs__srv__gripper_Request__Sequence__init(member, size);
}

size_t limx_arm_msgs__srv__gripper_Event__rosidl_typesupport_introspection_c__size_function__gripper_Event__response(
  const void * untyped_member)
{
  const limx_arm_msgs__srv__gripper_Response__Sequence * member =
    (const limx_arm_msgs__srv__gripper_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * limx_arm_msgs__srv__gripper_Event__rosidl_typesupport_introspection_c__get_const_function__gripper_Event__response(
  const void * untyped_member, size_t index)
{
  const limx_arm_msgs__srv__gripper_Response__Sequence * member =
    (const limx_arm_msgs__srv__gripper_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * limx_arm_msgs__srv__gripper_Event__rosidl_typesupport_introspection_c__get_function__gripper_Event__response(
  void * untyped_member, size_t index)
{
  limx_arm_msgs__srv__gripper_Response__Sequence * member =
    (limx_arm_msgs__srv__gripper_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void limx_arm_msgs__srv__gripper_Event__rosidl_typesupport_introspection_c__fetch_function__gripper_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const limx_arm_msgs__srv__gripper_Response * item =
    ((const limx_arm_msgs__srv__gripper_Response *)
    limx_arm_msgs__srv__gripper_Event__rosidl_typesupport_introspection_c__get_const_function__gripper_Event__response(untyped_member, index));
  limx_arm_msgs__srv__gripper_Response * value =
    (limx_arm_msgs__srv__gripper_Response *)(untyped_value);
  *value = *item;
}

void limx_arm_msgs__srv__gripper_Event__rosidl_typesupport_introspection_c__assign_function__gripper_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  limx_arm_msgs__srv__gripper_Response * item =
    ((limx_arm_msgs__srv__gripper_Response *)
    limx_arm_msgs__srv__gripper_Event__rosidl_typesupport_introspection_c__get_function__gripper_Event__response(untyped_member, index));
  const limx_arm_msgs__srv__gripper_Response * value =
    (const limx_arm_msgs__srv__gripper_Response *)(untyped_value);
  *item = *value;
}

bool limx_arm_msgs__srv__gripper_Event__rosidl_typesupport_introspection_c__resize_function__gripper_Event__response(
  void * untyped_member, size_t size)
{
  limx_arm_msgs__srv__gripper_Response__Sequence * member =
    (limx_arm_msgs__srv__gripper_Response__Sequence *)(untyped_member);
  limx_arm_msgs__srv__gripper_Response__Sequence__fini(member);
  return limx_arm_msgs__srv__gripper_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember limx_arm_msgs__srv__gripper_Event__rosidl_typesupport_introspection_c__gripper_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(limx_arm_msgs__srv__gripper_Event, info),  // bytes offset in struct
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
    offsetof(limx_arm_msgs__srv__gripper_Event, request),  // bytes offset in struct
    NULL,  // default value
    limx_arm_msgs__srv__gripper_Event__rosidl_typesupport_introspection_c__size_function__gripper_Event__request,  // size() function pointer
    limx_arm_msgs__srv__gripper_Event__rosidl_typesupport_introspection_c__get_const_function__gripper_Event__request,  // get_const(index) function pointer
    limx_arm_msgs__srv__gripper_Event__rosidl_typesupport_introspection_c__get_function__gripper_Event__request,  // get(index) function pointer
    limx_arm_msgs__srv__gripper_Event__rosidl_typesupport_introspection_c__fetch_function__gripper_Event__request,  // fetch(index, &value) function pointer
    limx_arm_msgs__srv__gripper_Event__rosidl_typesupport_introspection_c__assign_function__gripper_Event__request,  // assign(index, value) function pointer
    limx_arm_msgs__srv__gripper_Event__rosidl_typesupport_introspection_c__resize_function__gripper_Event__request  // resize(index) function pointer
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
    offsetof(limx_arm_msgs__srv__gripper_Event, response),  // bytes offset in struct
    NULL,  // default value
    limx_arm_msgs__srv__gripper_Event__rosidl_typesupport_introspection_c__size_function__gripper_Event__response,  // size() function pointer
    limx_arm_msgs__srv__gripper_Event__rosidl_typesupport_introspection_c__get_const_function__gripper_Event__response,  // get_const(index) function pointer
    limx_arm_msgs__srv__gripper_Event__rosidl_typesupport_introspection_c__get_function__gripper_Event__response,  // get(index) function pointer
    limx_arm_msgs__srv__gripper_Event__rosidl_typesupport_introspection_c__fetch_function__gripper_Event__response,  // fetch(index, &value) function pointer
    limx_arm_msgs__srv__gripper_Event__rosidl_typesupport_introspection_c__assign_function__gripper_Event__response,  // assign(index, value) function pointer
    limx_arm_msgs__srv__gripper_Event__rosidl_typesupport_introspection_c__resize_function__gripper_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers limx_arm_msgs__srv__gripper_Event__rosidl_typesupport_introspection_c__gripper_Event_message_members = {
  "limx_arm_msgs__srv",  // message namespace
  "gripper_Event",  // message name
  3,  // number of fields
  sizeof(limx_arm_msgs__srv__gripper_Event),
  false,  // has_any_key_member_
  limx_arm_msgs__srv__gripper_Event__rosidl_typesupport_introspection_c__gripper_Event_message_member_array,  // message members
  limx_arm_msgs__srv__gripper_Event__rosidl_typesupport_introspection_c__gripper_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  limx_arm_msgs__srv__gripper_Event__rosidl_typesupport_introspection_c__gripper_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t limx_arm_msgs__srv__gripper_Event__rosidl_typesupport_introspection_c__gripper_Event_message_type_support_handle = {
  0,
  &limx_arm_msgs__srv__gripper_Event__rosidl_typesupport_introspection_c__gripper_Event_message_members,
  get_message_typesupport_handle_function,
  &limx_arm_msgs__srv__gripper_Event__get_type_hash,
  &limx_arm_msgs__srv__gripper_Event__get_type_description,
  &limx_arm_msgs__srv__gripper_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_limx_arm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, limx_arm_msgs, srv, gripper_Event)() {
  limx_arm_msgs__srv__gripper_Event__rosidl_typesupport_introspection_c__gripper_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  limx_arm_msgs__srv__gripper_Event__rosidl_typesupport_introspection_c__gripper_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, limx_arm_msgs, srv, gripper_Request)();
  limx_arm_msgs__srv__gripper_Event__rosidl_typesupport_introspection_c__gripper_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, limx_arm_msgs, srv, gripper_Response)();
  if (!limx_arm_msgs__srv__gripper_Event__rosidl_typesupport_introspection_c__gripper_Event_message_type_support_handle.typesupport_identifier) {
    limx_arm_msgs__srv__gripper_Event__rosidl_typesupport_introspection_c__gripper_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &limx_arm_msgs__srv__gripper_Event__rosidl_typesupport_introspection_c__gripper_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "limx_arm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "limx_arm_msgs/srv/detail/gripper__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers limx_arm_msgs__srv__detail__gripper__rosidl_typesupport_introspection_c__gripper_service_members = {
  "limx_arm_msgs__srv",  // service namespace
  "gripper",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // limx_arm_msgs__srv__detail__gripper__rosidl_typesupport_introspection_c__gripper_Request_message_type_support_handle,
  NULL,  // response message
  // limx_arm_msgs__srv__detail__gripper__rosidl_typesupport_introspection_c__gripper_Response_message_type_support_handle
  NULL  // event_message
  // limx_arm_msgs__srv__detail__gripper__rosidl_typesupport_introspection_c__gripper_Response_message_type_support_handle
};


static rosidl_service_type_support_t limx_arm_msgs__srv__detail__gripper__rosidl_typesupport_introspection_c__gripper_service_type_support_handle = {
  0,
  &limx_arm_msgs__srv__detail__gripper__rosidl_typesupport_introspection_c__gripper_service_members,
  get_service_typesupport_handle_function,
  &limx_arm_msgs__srv__gripper_Request__rosidl_typesupport_introspection_c__gripper_Request_message_type_support_handle,
  &limx_arm_msgs__srv__gripper_Response__rosidl_typesupport_introspection_c__gripper_Response_message_type_support_handle,
  &limx_arm_msgs__srv__gripper_Event__rosidl_typesupport_introspection_c__gripper_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    limx_arm_msgs,
    srv,
    gripper
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    limx_arm_msgs,
    srv,
    gripper
  ),
  &limx_arm_msgs__srv__gripper__get_type_hash,
  &limx_arm_msgs__srv__gripper__get_type_description,
  &limx_arm_msgs__srv__gripper__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, limx_arm_msgs, srv, gripper_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, limx_arm_msgs, srv, gripper_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, limx_arm_msgs, srv, gripper_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_limx_arm_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, limx_arm_msgs, srv, gripper)(void) {
  if (!limx_arm_msgs__srv__detail__gripper__rosidl_typesupport_introspection_c__gripper_service_type_support_handle.typesupport_identifier) {
    limx_arm_msgs__srv__detail__gripper__rosidl_typesupport_introspection_c__gripper_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)limx_arm_msgs__srv__detail__gripper__rosidl_typesupport_introspection_c__gripper_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, limx_arm_msgs, srv, gripper_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, limx_arm_msgs, srv, gripper_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, limx_arm_msgs, srv, gripper_Event)()->data;
  }

  return &limx_arm_msgs__srv__detail__gripper__rosidl_typesupport_introspection_c__gripper_service_type_support_handle;
}
