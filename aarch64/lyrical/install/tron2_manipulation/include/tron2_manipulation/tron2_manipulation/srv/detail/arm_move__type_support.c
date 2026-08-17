// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tron2_manipulation:srv/arm_move.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tron2_manipulation/srv/detail/arm_move__rosidl_typesupport_introspection_c.h"
#include "tron2_manipulation/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tron2_manipulation/srv/detail/arm_move__functions.h"
#include "tron2_manipulation/srv/detail/arm_move__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void tron2_manipulation__srv__arm_move_Request__rosidl_typesupport_introspection_c__arm_move_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tron2_manipulation__srv__arm_move_Request__init(message_memory);
}

void tron2_manipulation__srv__arm_move_Request__rosidl_typesupport_introspection_c__arm_move_Request_fini_function(void * message_memory)
{
  tron2_manipulation__srv__arm_move_Request__fini(message_memory);
}

size_t tron2_manipulation__srv__arm_move_Request__rosidl_typesupport_introspection_c__size_function__arm_move_Request__left_arm_pos(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * tron2_manipulation__srv__arm_move_Request__rosidl_typesupport_introspection_c__get_const_function__arm_move_Request__left_arm_pos(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * tron2_manipulation__srv__arm_move_Request__rosidl_typesupport_introspection_c__get_function__arm_move_Request__left_arm_pos(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void tron2_manipulation__srv__arm_move_Request__rosidl_typesupport_introspection_c__fetch_function__arm_move_Request__left_arm_pos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    tron2_manipulation__srv__arm_move_Request__rosidl_typesupport_introspection_c__get_const_function__arm_move_Request__left_arm_pos(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void tron2_manipulation__srv__arm_move_Request__rosidl_typesupport_introspection_c__assign_function__arm_move_Request__left_arm_pos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    tron2_manipulation__srv__arm_move_Request__rosidl_typesupport_introspection_c__get_function__arm_move_Request__left_arm_pos(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t tron2_manipulation__srv__arm_move_Request__rosidl_typesupport_introspection_c__size_function__arm_move_Request__right_arm_pos(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * tron2_manipulation__srv__arm_move_Request__rosidl_typesupport_introspection_c__get_const_function__arm_move_Request__right_arm_pos(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * tron2_manipulation__srv__arm_move_Request__rosidl_typesupport_introspection_c__get_function__arm_move_Request__right_arm_pos(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void tron2_manipulation__srv__arm_move_Request__rosidl_typesupport_introspection_c__fetch_function__arm_move_Request__right_arm_pos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    tron2_manipulation__srv__arm_move_Request__rosidl_typesupport_introspection_c__get_const_function__arm_move_Request__right_arm_pos(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void tron2_manipulation__srv__arm_move_Request__rosidl_typesupport_introspection_c__assign_function__arm_move_Request__right_arm_pos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    tron2_manipulation__srv__arm_move_Request__rosidl_typesupport_introspection_c__get_function__arm_move_Request__right_arm_pos(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember tron2_manipulation__srv__arm_move_Request__rosidl_typesupport_introspection_c__arm_move_Request_message_member_array[3] = {
  {
    "left_arm_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(tron2_manipulation__srv__arm_move_Request, left_arm_pos),  // bytes offset in struct
    NULL,  // default value
    tron2_manipulation__srv__arm_move_Request__rosidl_typesupport_introspection_c__size_function__arm_move_Request__left_arm_pos,  // size() function pointer
    tron2_manipulation__srv__arm_move_Request__rosidl_typesupport_introspection_c__get_const_function__arm_move_Request__left_arm_pos,  // get_const(index) function pointer
    tron2_manipulation__srv__arm_move_Request__rosidl_typesupport_introspection_c__get_function__arm_move_Request__left_arm_pos,  // get(index) function pointer
    tron2_manipulation__srv__arm_move_Request__rosidl_typesupport_introspection_c__fetch_function__arm_move_Request__left_arm_pos,  // fetch(index, &value) function pointer
    tron2_manipulation__srv__arm_move_Request__rosidl_typesupport_introspection_c__assign_function__arm_move_Request__left_arm_pos,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "right_arm_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(tron2_manipulation__srv__arm_move_Request, right_arm_pos),  // bytes offset in struct
    NULL,  // default value
    tron2_manipulation__srv__arm_move_Request__rosidl_typesupport_introspection_c__size_function__arm_move_Request__right_arm_pos,  // size() function pointer
    tron2_manipulation__srv__arm_move_Request__rosidl_typesupport_introspection_c__get_const_function__arm_move_Request__right_arm_pos,  // get_const(index) function pointer
    tron2_manipulation__srv__arm_move_Request__rosidl_typesupport_introspection_c__get_function__arm_move_Request__right_arm_pos,  // get(index) function pointer
    tron2_manipulation__srv__arm_move_Request__rosidl_typesupport_introspection_c__fetch_function__arm_move_Request__right_arm_pos,  // fetch(index, &value) function pointer
    tron2_manipulation__srv__arm_move_Request__rosidl_typesupport_introspection_c__assign_function__arm_move_Request__right_arm_pos,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
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
    offsetof(tron2_manipulation__srv__arm_move_Request, speed),  // bytes offset in struct
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

static const rosidl_typesupport_introspection_c__MessageMembers tron2_manipulation__srv__arm_move_Request__rosidl_typesupport_introspection_c__arm_move_Request_message_members = {
  "tron2_manipulation__srv",  // message namespace
  "arm_move_Request",  // message name
  3,  // number of fields
  sizeof(tron2_manipulation__srv__arm_move_Request),
  false,  // has_any_key_member_
  tron2_manipulation__srv__arm_move_Request__rosidl_typesupport_introspection_c__arm_move_Request_message_member_array,  // message members
  tron2_manipulation__srv__arm_move_Request__rosidl_typesupport_introspection_c__arm_move_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  tron2_manipulation__srv__arm_move_Request__rosidl_typesupport_introspection_c__arm_move_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tron2_manipulation__srv__arm_move_Request__rosidl_typesupport_introspection_c__arm_move_Request_message_type_support_handle = {
  0,
  &tron2_manipulation__srv__arm_move_Request__rosidl_typesupport_introspection_c__arm_move_Request_message_members,
  get_message_typesupport_handle_function,
  &tron2_manipulation__srv__arm_move_Request__get_type_hash,
  &tron2_manipulation__srv__arm_move_Request__get_type_description,
  &tron2_manipulation__srv__arm_move_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tron2_manipulation
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tron2_manipulation, srv, arm_move_Request)() {
  if (!tron2_manipulation__srv__arm_move_Request__rosidl_typesupport_introspection_c__arm_move_Request_message_type_support_handle.typesupport_identifier) {
    tron2_manipulation__srv__arm_move_Request__rosidl_typesupport_introspection_c__arm_move_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tron2_manipulation__srv__arm_move_Request__rosidl_typesupport_introspection_c__arm_move_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tron2_manipulation/srv/detail/arm_move__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tron2_manipulation/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tron2_manipulation/srv/detail/arm_move__functions.h"
// already included above
// #include "tron2_manipulation/srv/detail/arm_move__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void tron2_manipulation__srv__arm_move_Response__rosidl_typesupport_introspection_c__arm_move_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tron2_manipulation__srv__arm_move_Response__init(message_memory);
}

void tron2_manipulation__srv__arm_move_Response__rosidl_typesupport_introspection_c__arm_move_Response_fini_function(void * message_memory)
{
  tron2_manipulation__srv__arm_move_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember tron2_manipulation__srv__arm_move_Response__rosidl_typesupport_introspection_c__arm_move_Response_message_member_array[1] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tron2_manipulation__srv__arm_move_Response, status),  // bytes offset in struct
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

static const rosidl_typesupport_introspection_c__MessageMembers tron2_manipulation__srv__arm_move_Response__rosidl_typesupport_introspection_c__arm_move_Response_message_members = {
  "tron2_manipulation__srv",  // message namespace
  "arm_move_Response",  // message name
  1,  // number of fields
  sizeof(tron2_manipulation__srv__arm_move_Response),
  false,  // has_any_key_member_
  tron2_manipulation__srv__arm_move_Response__rosidl_typesupport_introspection_c__arm_move_Response_message_member_array,  // message members
  tron2_manipulation__srv__arm_move_Response__rosidl_typesupport_introspection_c__arm_move_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  tron2_manipulation__srv__arm_move_Response__rosidl_typesupport_introspection_c__arm_move_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tron2_manipulation__srv__arm_move_Response__rosidl_typesupport_introspection_c__arm_move_Response_message_type_support_handle = {
  0,
  &tron2_manipulation__srv__arm_move_Response__rosidl_typesupport_introspection_c__arm_move_Response_message_members,
  get_message_typesupport_handle_function,
  &tron2_manipulation__srv__arm_move_Response__get_type_hash,
  &tron2_manipulation__srv__arm_move_Response__get_type_description,
  &tron2_manipulation__srv__arm_move_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tron2_manipulation
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tron2_manipulation, srv, arm_move_Response)() {
  if (!tron2_manipulation__srv__arm_move_Response__rosidl_typesupport_introspection_c__arm_move_Response_message_type_support_handle.typesupport_identifier) {
    tron2_manipulation__srv__arm_move_Response__rosidl_typesupport_introspection_c__arm_move_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tron2_manipulation__srv__arm_move_Response__rosidl_typesupport_introspection_c__arm_move_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tron2_manipulation/srv/detail/arm_move__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tron2_manipulation/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tron2_manipulation/srv/detail/arm_move__functions.h"
// already included above
// #include "tron2_manipulation/srv/detail/arm_move__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "tron2_manipulation/srv/arm_move.h"
// Member `request`
// Member `response`
// already included above
// #include "tron2_manipulation/srv/detail/arm_move__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tron2_manipulation__srv__arm_move_Event__rosidl_typesupport_introspection_c__arm_move_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tron2_manipulation__srv__arm_move_Event__init(message_memory);
}

void tron2_manipulation__srv__arm_move_Event__rosidl_typesupport_introspection_c__arm_move_Event_fini_function(void * message_memory)
{
  tron2_manipulation__srv__arm_move_Event__fini(message_memory);
}

size_t tron2_manipulation__srv__arm_move_Event__rosidl_typesupport_introspection_c__size_function__arm_move_Event__request(
  const void * untyped_member)
{
  const tron2_manipulation__srv__arm_move_Request__Sequence * member =
    (const tron2_manipulation__srv__arm_move_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * tron2_manipulation__srv__arm_move_Event__rosidl_typesupport_introspection_c__get_const_function__arm_move_Event__request(
  const void * untyped_member, size_t index)
{
  const tron2_manipulation__srv__arm_move_Request__Sequence * member =
    (const tron2_manipulation__srv__arm_move_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tron2_manipulation__srv__arm_move_Event__rosidl_typesupport_introspection_c__get_function__arm_move_Event__request(
  void * untyped_member, size_t index)
{
  tron2_manipulation__srv__arm_move_Request__Sequence * member =
    (tron2_manipulation__srv__arm_move_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void tron2_manipulation__srv__arm_move_Event__rosidl_typesupport_introspection_c__fetch_function__arm_move_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const tron2_manipulation__srv__arm_move_Request * item =
    ((const tron2_manipulation__srv__arm_move_Request *)
    tron2_manipulation__srv__arm_move_Event__rosidl_typesupport_introspection_c__get_const_function__arm_move_Event__request(untyped_member, index));
  tron2_manipulation__srv__arm_move_Request * value =
    (tron2_manipulation__srv__arm_move_Request *)(untyped_value);
  *value = *item;
}

void tron2_manipulation__srv__arm_move_Event__rosidl_typesupport_introspection_c__assign_function__arm_move_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  tron2_manipulation__srv__arm_move_Request * item =
    ((tron2_manipulation__srv__arm_move_Request *)
    tron2_manipulation__srv__arm_move_Event__rosidl_typesupport_introspection_c__get_function__arm_move_Event__request(untyped_member, index));
  const tron2_manipulation__srv__arm_move_Request * value =
    (const tron2_manipulation__srv__arm_move_Request *)(untyped_value);
  *item = *value;
}

bool tron2_manipulation__srv__arm_move_Event__rosidl_typesupport_introspection_c__resize_function__arm_move_Event__request(
  void * untyped_member, size_t size)
{
  tron2_manipulation__srv__arm_move_Request__Sequence * member =
    (tron2_manipulation__srv__arm_move_Request__Sequence *)(untyped_member);
  tron2_manipulation__srv__arm_move_Request__Sequence__fini(member);
  return tron2_manipulation__srv__arm_move_Request__Sequence__init(member, size);
}

size_t tron2_manipulation__srv__arm_move_Event__rosidl_typesupport_introspection_c__size_function__arm_move_Event__response(
  const void * untyped_member)
{
  const tron2_manipulation__srv__arm_move_Response__Sequence * member =
    (const tron2_manipulation__srv__arm_move_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * tron2_manipulation__srv__arm_move_Event__rosidl_typesupport_introspection_c__get_const_function__arm_move_Event__response(
  const void * untyped_member, size_t index)
{
  const tron2_manipulation__srv__arm_move_Response__Sequence * member =
    (const tron2_manipulation__srv__arm_move_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tron2_manipulation__srv__arm_move_Event__rosidl_typesupport_introspection_c__get_function__arm_move_Event__response(
  void * untyped_member, size_t index)
{
  tron2_manipulation__srv__arm_move_Response__Sequence * member =
    (tron2_manipulation__srv__arm_move_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void tron2_manipulation__srv__arm_move_Event__rosidl_typesupport_introspection_c__fetch_function__arm_move_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const tron2_manipulation__srv__arm_move_Response * item =
    ((const tron2_manipulation__srv__arm_move_Response *)
    tron2_manipulation__srv__arm_move_Event__rosidl_typesupport_introspection_c__get_const_function__arm_move_Event__response(untyped_member, index));
  tron2_manipulation__srv__arm_move_Response * value =
    (tron2_manipulation__srv__arm_move_Response *)(untyped_value);
  *value = *item;
}

void tron2_manipulation__srv__arm_move_Event__rosidl_typesupport_introspection_c__assign_function__arm_move_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  tron2_manipulation__srv__arm_move_Response * item =
    ((tron2_manipulation__srv__arm_move_Response *)
    tron2_manipulation__srv__arm_move_Event__rosidl_typesupport_introspection_c__get_function__arm_move_Event__response(untyped_member, index));
  const tron2_manipulation__srv__arm_move_Response * value =
    (const tron2_manipulation__srv__arm_move_Response *)(untyped_value);
  *item = *value;
}

bool tron2_manipulation__srv__arm_move_Event__rosidl_typesupport_introspection_c__resize_function__arm_move_Event__response(
  void * untyped_member, size_t size)
{
  tron2_manipulation__srv__arm_move_Response__Sequence * member =
    (tron2_manipulation__srv__arm_move_Response__Sequence *)(untyped_member);
  tron2_manipulation__srv__arm_move_Response__Sequence__fini(member);
  return tron2_manipulation__srv__arm_move_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember tron2_manipulation__srv__arm_move_Event__rosidl_typesupport_introspection_c__arm_move_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tron2_manipulation__srv__arm_move_Event, info),  // bytes offset in struct
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
    offsetof(tron2_manipulation__srv__arm_move_Event, request),  // bytes offset in struct
    NULL,  // default value
    tron2_manipulation__srv__arm_move_Event__rosidl_typesupport_introspection_c__size_function__arm_move_Event__request,  // size() function pointer
    tron2_manipulation__srv__arm_move_Event__rosidl_typesupport_introspection_c__get_const_function__arm_move_Event__request,  // get_const(index) function pointer
    tron2_manipulation__srv__arm_move_Event__rosidl_typesupport_introspection_c__get_function__arm_move_Event__request,  // get(index) function pointer
    tron2_manipulation__srv__arm_move_Event__rosidl_typesupport_introspection_c__fetch_function__arm_move_Event__request,  // fetch(index, &value) function pointer
    tron2_manipulation__srv__arm_move_Event__rosidl_typesupport_introspection_c__assign_function__arm_move_Event__request,  // assign(index, value) function pointer
    tron2_manipulation__srv__arm_move_Event__rosidl_typesupport_introspection_c__resize_function__arm_move_Event__request,  // resize(index) function pointer
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
    offsetof(tron2_manipulation__srv__arm_move_Event, response),  // bytes offset in struct
    NULL,  // default value
    tron2_manipulation__srv__arm_move_Event__rosidl_typesupport_introspection_c__size_function__arm_move_Event__response,  // size() function pointer
    tron2_manipulation__srv__arm_move_Event__rosidl_typesupport_introspection_c__get_const_function__arm_move_Event__response,  // get_const(index) function pointer
    tron2_manipulation__srv__arm_move_Event__rosidl_typesupport_introspection_c__get_function__arm_move_Event__response,  // get(index) function pointer
    tron2_manipulation__srv__arm_move_Event__rosidl_typesupport_introspection_c__fetch_function__arm_move_Event__response,  // fetch(index, &value) function pointer
    tron2_manipulation__srv__arm_move_Event__rosidl_typesupport_introspection_c__assign_function__arm_move_Event__response,  // assign(index, value) function pointer
    tron2_manipulation__srv__arm_move_Event__rosidl_typesupport_introspection_c__resize_function__arm_move_Event__response,  // resize(index) function pointer
    false  // is_rosidl_buffer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tron2_manipulation__srv__arm_move_Event__rosidl_typesupport_introspection_c__arm_move_Event_message_members = {
  "tron2_manipulation__srv",  // message namespace
  "arm_move_Event",  // message name
  3,  // number of fields
  sizeof(tron2_manipulation__srv__arm_move_Event),
  false,  // has_any_key_member_
  tron2_manipulation__srv__arm_move_Event__rosidl_typesupport_introspection_c__arm_move_Event_message_member_array,  // message members
  tron2_manipulation__srv__arm_move_Event__rosidl_typesupport_introspection_c__arm_move_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  tron2_manipulation__srv__arm_move_Event__rosidl_typesupport_introspection_c__arm_move_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tron2_manipulation__srv__arm_move_Event__rosidl_typesupport_introspection_c__arm_move_Event_message_type_support_handle = {
  0,
  &tron2_manipulation__srv__arm_move_Event__rosidl_typesupport_introspection_c__arm_move_Event_message_members,
  get_message_typesupport_handle_function,
  &tron2_manipulation__srv__arm_move_Event__get_type_hash,
  &tron2_manipulation__srv__arm_move_Event__get_type_description,
  &tron2_manipulation__srv__arm_move_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tron2_manipulation
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tron2_manipulation, srv, arm_move_Event)() {
  tron2_manipulation__srv__arm_move_Event__rosidl_typesupport_introspection_c__arm_move_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  tron2_manipulation__srv__arm_move_Event__rosidl_typesupport_introspection_c__arm_move_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tron2_manipulation, srv, arm_move_Request)();
  tron2_manipulation__srv__arm_move_Event__rosidl_typesupport_introspection_c__arm_move_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tron2_manipulation, srv, arm_move_Response)();
  if (!tron2_manipulation__srv__arm_move_Event__rosidl_typesupport_introspection_c__arm_move_Event_message_type_support_handle.typesupport_identifier) {
    tron2_manipulation__srv__arm_move_Event__rosidl_typesupport_introspection_c__arm_move_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tron2_manipulation__srv__arm_move_Event__rosidl_typesupport_introspection_c__arm_move_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "tron2_manipulation/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "tron2_manipulation/srv/detail/arm_move__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers tron2_manipulation__srv__detail__arm_move__rosidl_typesupport_introspection_c__arm_move_service_members = {
  "tron2_manipulation__srv",  // service namespace
  "arm_move",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // tron2_manipulation__srv__detail__arm_move__rosidl_typesupport_introspection_c__arm_move_Request_message_type_support_handle,
  NULL,  // response message
  // tron2_manipulation__srv__detail__arm_move__rosidl_typesupport_introspection_c__arm_move_Response_message_type_support_handle
  NULL  // event_message
  // tron2_manipulation__srv__detail__arm_move__rosidl_typesupport_introspection_c__arm_move_Response_message_type_support_handle
};


static rosidl_service_type_support_t tron2_manipulation__srv__detail__arm_move__rosidl_typesupport_introspection_c__arm_move_service_type_support_handle = {
  0,
  &tron2_manipulation__srv__detail__arm_move__rosidl_typesupport_introspection_c__arm_move_service_members,
  get_service_typesupport_handle_function,
  &tron2_manipulation__srv__arm_move_Request__rosidl_typesupport_introspection_c__arm_move_Request_message_type_support_handle,
  &tron2_manipulation__srv__arm_move_Response__rosidl_typesupport_introspection_c__arm_move_Response_message_type_support_handle,
  &tron2_manipulation__srv__arm_move_Event__rosidl_typesupport_introspection_c__arm_move_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    tron2_manipulation,
    srv,
    arm_move
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    tron2_manipulation,
    srv,
    arm_move
  ),
  &tron2_manipulation__srv__arm_move__get_type_hash,
  &tron2_manipulation__srv__arm_move__get_type_description,
  &tron2_manipulation__srv__arm_move__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tron2_manipulation, srv, arm_move_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tron2_manipulation, srv, arm_move_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tron2_manipulation, srv, arm_move_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tron2_manipulation
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tron2_manipulation, srv, arm_move)(void) {
  if (!tron2_manipulation__srv__detail__arm_move__rosidl_typesupport_introspection_c__arm_move_service_type_support_handle.typesupport_identifier) {
    tron2_manipulation__srv__detail__arm_move__rosidl_typesupport_introspection_c__arm_move_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)tron2_manipulation__srv__detail__arm_move__rosidl_typesupport_introspection_c__arm_move_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tron2_manipulation, srv, arm_move_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tron2_manipulation, srv, arm_move_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tron2_manipulation, srv, arm_move_Event)()->data;
  }

  return &tron2_manipulation__srv__detail__arm_move__rosidl_typesupport_introspection_c__arm_move_service_type_support_handle;
}
