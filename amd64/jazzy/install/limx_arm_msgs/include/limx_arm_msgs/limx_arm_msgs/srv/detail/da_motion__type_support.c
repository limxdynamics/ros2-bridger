// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from limx_arm_msgs:srv/DA_motion.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "limx_arm_msgs/srv/detail/da_motion__rosidl_typesupport_introspection_c.h"
#include "limx_arm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "limx_arm_msgs/srv/detail/da_motion__functions.h"
#include "limx_arm_msgs/srv/detail/da_motion__struct.h"


// Include directives for member types
// Member `functionName`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__DA_motion_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  limx_arm_msgs__srv__DA_motion_Request__init(message_memory);
}

void limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__DA_motion_Request_fini_function(void * message_memory)
{
  limx_arm_msgs__srv__DA_motion_Request__fini(message_memory);
}

size_t limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__size_function__DA_motion_Request__left_arm_pos(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__get_const_function__DA_motion_Request__left_arm_pos(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__get_function__DA_motion_Request__left_arm_pos(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__fetch_function__DA_motion_Request__left_arm_pos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__get_const_function__DA_motion_Request__left_arm_pos(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__assign_function__DA_motion_Request__left_arm_pos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__get_function__DA_motion_Request__left_arm_pos(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__size_function__DA_motion_Request__right_arm_pos(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__get_const_function__DA_motion_Request__right_arm_pos(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__get_function__DA_motion_Request__right_arm_pos(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__fetch_function__DA_motion_Request__right_arm_pos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__get_const_function__DA_motion_Request__right_arm_pos(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__assign_function__DA_motion_Request__right_arm_pos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__get_function__DA_motion_Request__right_arm_pos(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__size_function__DA_motion_Request__left_arm_joints(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__get_const_function__DA_motion_Request__left_arm_joints(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__get_function__DA_motion_Request__left_arm_joints(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__fetch_function__DA_motion_Request__left_arm_joints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__get_const_function__DA_motion_Request__left_arm_joints(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__assign_function__DA_motion_Request__left_arm_joints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__get_function__DA_motion_Request__left_arm_joints(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__size_function__DA_motion_Request__right_arm_joints(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__get_const_function__DA_motion_Request__right_arm_joints(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__get_function__DA_motion_Request__right_arm_joints(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__fetch_function__DA_motion_Request__right_arm_joints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__get_const_function__DA_motion_Request__right_arm_joints(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__assign_function__DA_motion_Request__right_arm_joints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__get_function__DA_motion_Request__right_arm_joints(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__size_function__DA_motion_Request__headPos(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__get_const_function__DA_motion_Request__headPos(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__get_function__DA_motion_Request__headPos(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__fetch_function__DA_motion_Request__headPos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__get_const_function__DA_motion_Request__headPos(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__assign_function__DA_motion_Request__headPos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__get_function__DA_motion_Request__headPos(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__DA_motion_Request_message_member_array[7] = {
  {
    "functionName",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(limx_arm_msgs__srv__DA_motion_Request, functionName),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left_arm_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(limx_arm_msgs__srv__DA_motion_Request, left_arm_pos),  // bytes offset in struct
    NULL,  // default value
    limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__size_function__DA_motion_Request__left_arm_pos,  // size() function pointer
    limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__get_const_function__DA_motion_Request__left_arm_pos,  // get_const(index) function pointer
    limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__get_function__DA_motion_Request__left_arm_pos,  // get(index) function pointer
    limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__fetch_function__DA_motion_Request__left_arm_pos,  // fetch(index, &value) function pointer
    limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__assign_function__DA_motion_Request__left_arm_pos,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
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
    offsetof(limx_arm_msgs__srv__DA_motion_Request, right_arm_pos),  // bytes offset in struct
    NULL,  // default value
    limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__size_function__DA_motion_Request__right_arm_pos,  // size() function pointer
    limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__get_const_function__DA_motion_Request__right_arm_pos,  // get_const(index) function pointer
    limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__get_function__DA_motion_Request__right_arm_pos,  // get(index) function pointer
    limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__fetch_function__DA_motion_Request__right_arm_pos,  // fetch(index, &value) function pointer
    limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__assign_function__DA_motion_Request__right_arm_pos,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
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
    offsetof(limx_arm_msgs__srv__DA_motion_Request, speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left_arm_joints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(limx_arm_msgs__srv__DA_motion_Request, left_arm_joints),  // bytes offset in struct
    NULL,  // default value
    limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__size_function__DA_motion_Request__left_arm_joints,  // size() function pointer
    limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__get_const_function__DA_motion_Request__left_arm_joints,  // get_const(index) function pointer
    limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__get_function__DA_motion_Request__left_arm_joints,  // get(index) function pointer
    limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__fetch_function__DA_motion_Request__left_arm_joints,  // fetch(index, &value) function pointer
    limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__assign_function__DA_motion_Request__left_arm_joints,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right_arm_joints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(limx_arm_msgs__srv__DA_motion_Request, right_arm_joints),  // bytes offset in struct
    NULL,  // default value
    limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__size_function__DA_motion_Request__right_arm_joints,  // size() function pointer
    limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__get_const_function__DA_motion_Request__right_arm_joints,  // get_const(index) function pointer
    limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__get_function__DA_motion_Request__right_arm_joints,  // get(index) function pointer
    limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__fetch_function__DA_motion_Request__right_arm_joints,  // fetch(index, &value) function pointer
    limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__assign_function__DA_motion_Request__right_arm_joints,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "headPos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(limx_arm_msgs__srv__DA_motion_Request, headPos),  // bytes offset in struct
    NULL,  // default value
    limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__size_function__DA_motion_Request__headPos,  // size() function pointer
    limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__get_const_function__DA_motion_Request__headPos,  // get_const(index) function pointer
    limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__get_function__DA_motion_Request__headPos,  // get(index) function pointer
    limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__fetch_function__DA_motion_Request__headPos,  // fetch(index, &value) function pointer
    limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__assign_function__DA_motion_Request__headPos,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__DA_motion_Request_message_members = {
  "limx_arm_msgs__srv",  // message namespace
  "DA_motion_Request",  // message name
  7,  // number of fields
  sizeof(limx_arm_msgs__srv__DA_motion_Request),
  false,  // has_any_key_member_
  limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__DA_motion_Request_message_member_array,  // message members
  limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__DA_motion_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__DA_motion_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__DA_motion_Request_message_type_support_handle = {
  0,
  &limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__DA_motion_Request_message_members,
  get_message_typesupport_handle_function,
  &limx_arm_msgs__srv__DA_motion_Request__get_type_hash,
  &limx_arm_msgs__srv__DA_motion_Request__get_type_description,
  &limx_arm_msgs__srv__DA_motion_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_limx_arm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, limx_arm_msgs, srv, DA_motion_Request)() {
  if (!limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__DA_motion_Request_message_type_support_handle.typesupport_identifier) {
    limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__DA_motion_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__DA_motion_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "limx_arm_msgs/srv/detail/da_motion__rosidl_typesupport_introspection_c.h"
// already included above
// #include "limx_arm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "limx_arm_msgs/srv/detail/da_motion__functions.h"
// already included above
// #include "limx_arm_msgs/srv/detail/da_motion__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void limx_arm_msgs__srv__DA_motion_Response__rosidl_typesupport_introspection_c__DA_motion_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  limx_arm_msgs__srv__DA_motion_Response__init(message_memory);
}

void limx_arm_msgs__srv__DA_motion_Response__rosidl_typesupport_introspection_c__DA_motion_Response_fini_function(void * message_memory)
{
  limx_arm_msgs__srv__DA_motion_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember limx_arm_msgs__srv__DA_motion_Response__rosidl_typesupport_introspection_c__DA_motion_Response_message_member_array[1] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(limx_arm_msgs__srv__DA_motion_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers limx_arm_msgs__srv__DA_motion_Response__rosidl_typesupport_introspection_c__DA_motion_Response_message_members = {
  "limx_arm_msgs__srv",  // message namespace
  "DA_motion_Response",  // message name
  1,  // number of fields
  sizeof(limx_arm_msgs__srv__DA_motion_Response),
  false,  // has_any_key_member_
  limx_arm_msgs__srv__DA_motion_Response__rosidl_typesupport_introspection_c__DA_motion_Response_message_member_array,  // message members
  limx_arm_msgs__srv__DA_motion_Response__rosidl_typesupport_introspection_c__DA_motion_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  limx_arm_msgs__srv__DA_motion_Response__rosidl_typesupport_introspection_c__DA_motion_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t limx_arm_msgs__srv__DA_motion_Response__rosidl_typesupport_introspection_c__DA_motion_Response_message_type_support_handle = {
  0,
  &limx_arm_msgs__srv__DA_motion_Response__rosidl_typesupport_introspection_c__DA_motion_Response_message_members,
  get_message_typesupport_handle_function,
  &limx_arm_msgs__srv__DA_motion_Response__get_type_hash,
  &limx_arm_msgs__srv__DA_motion_Response__get_type_description,
  &limx_arm_msgs__srv__DA_motion_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_limx_arm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, limx_arm_msgs, srv, DA_motion_Response)() {
  if (!limx_arm_msgs__srv__DA_motion_Response__rosidl_typesupport_introspection_c__DA_motion_Response_message_type_support_handle.typesupport_identifier) {
    limx_arm_msgs__srv__DA_motion_Response__rosidl_typesupport_introspection_c__DA_motion_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &limx_arm_msgs__srv__DA_motion_Response__rosidl_typesupport_introspection_c__DA_motion_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "limx_arm_msgs/srv/detail/da_motion__rosidl_typesupport_introspection_c.h"
// already included above
// #include "limx_arm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "limx_arm_msgs/srv/detail/da_motion__functions.h"
// already included above
// #include "limx_arm_msgs/srv/detail/da_motion__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "limx_arm_msgs/srv/da_motion.h"
// Member `request`
// Member `response`
// already included above
// #include "limx_arm_msgs/srv/detail/da_motion__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void limx_arm_msgs__srv__DA_motion_Event__rosidl_typesupport_introspection_c__DA_motion_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  limx_arm_msgs__srv__DA_motion_Event__init(message_memory);
}

void limx_arm_msgs__srv__DA_motion_Event__rosidl_typesupport_introspection_c__DA_motion_Event_fini_function(void * message_memory)
{
  limx_arm_msgs__srv__DA_motion_Event__fini(message_memory);
}

size_t limx_arm_msgs__srv__DA_motion_Event__rosidl_typesupport_introspection_c__size_function__DA_motion_Event__request(
  const void * untyped_member)
{
  const limx_arm_msgs__srv__DA_motion_Request__Sequence * member =
    (const limx_arm_msgs__srv__DA_motion_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * limx_arm_msgs__srv__DA_motion_Event__rosidl_typesupport_introspection_c__get_const_function__DA_motion_Event__request(
  const void * untyped_member, size_t index)
{
  const limx_arm_msgs__srv__DA_motion_Request__Sequence * member =
    (const limx_arm_msgs__srv__DA_motion_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * limx_arm_msgs__srv__DA_motion_Event__rosidl_typesupport_introspection_c__get_function__DA_motion_Event__request(
  void * untyped_member, size_t index)
{
  limx_arm_msgs__srv__DA_motion_Request__Sequence * member =
    (limx_arm_msgs__srv__DA_motion_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void limx_arm_msgs__srv__DA_motion_Event__rosidl_typesupport_introspection_c__fetch_function__DA_motion_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const limx_arm_msgs__srv__DA_motion_Request * item =
    ((const limx_arm_msgs__srv__DA_motion_Request *)
    limx_arm_msgs__srv__DA_motion_Event__rosidl_typesupport_introspection_c__get_const_function__DA_motion_Event__request(untyped_member, index));
  limx_arm_msgs__srv__DA_motion_Request * value =
    (limx_arm_msgs__srv__DA_motion_Request *)(untyped_value);
  *value = *item;
}

void limx_arm_msgs__srv__DA_motion_Event__rosidl_typesupport_introspection_c__assign_function__DA_motion_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  limx_arm_msgs__srv__DA_motion_Request * item =
    ((limx_arm_msgs__srv__DA_motion_Request *)
    limx_arm_msgs__srv__DA_motion_Event__rosidl_typesupport_introspection_c__get_function__DA_motion_Event__request(untyped_member, index));
  const limx_arm_msgs__srv__DA_motion_Request * value =
    (const limx_arm_msgs__srv__DA_motion_Request *)(untyped_value);
  *item = *value;
}

bool limx_arm_msgs__srv__DA_motion_Event__rosidl_typesupport_introspection_c__resize_function__DA_motion_Event__request(
  void * untyped_member, size_t size)
{
  limx_arm_msgs__srv__DA_motion_Request__Sequence * member =
    (limx_arm_msgs__srv__DA_motion_Request__Sequence *)(untyped_member);
  limx_arm_msgs__srv__DA_motion_Request__Sequence__fini(member);
  return limx_arm_msgs__srv__DA_motion_Request__Sequence__init(member, size);
}

size_t limx_arm_msgs__srv__DA_motion_Event__rosidl_typesupport_introspection_c__size_function__DA_motion_Event__response(
  const void * untyped_member)
{
  const limx_arm_msgs__srv__DA_motion_Response__Sequence * member =
    (const limx_arm_msgs__srv__DA_motion_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * limx_arm_msgs__srv__DA_motion_Event__rosidl_typesupport_introspection_c__get_const_function__DA_motion_Event__response(
  const void * untyped_member, size_t index)
{
  const limx_arm_msgs__srv__DA_motion_Response__Sequence * member =
    (const limx_arm_msgs__srv__DA_motion_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * limx_arm_msgs__srv__DA_motion_Event__rosidl_typesupport_introspection_c__get_function__DA_motion_Event__response(
  void * untyped_member, size_t index)
{
  limx_arm_msgs__srv__DA_motion_Response__Sequence * member =
    (limx_arm_msgs__srv__DA_motion_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void limx_arm_msgs__srv__DA_motion_Event__rosidl_typesupport_introspection_c__fetch_function__DA_motion_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const limx_arm_msgs__srv__DA_motion_Response * item =
    ((const limx_arm_msgs__srv__DA_motion_Response *)
    limx_arm_msgs__srv__DA_motion_Event__rosidl_typesupport_introspection_c__get_const_function__DA_motion_Event__response(untyped_member, index));
  limx_arm_msgs__srv__DA_motion_Response * value =
    (limx_arm_msgs__srv__DA_motion_Response *)(untyped_value);
  *value = *item;
}

void limx_arm_msgs__srv__DA_motion_Event__rosidl_typesupport_introspection_c__assign_function__DA_motion_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  limx_arm_msgs__srv__DA_motion_Response * item =
    ((limx_arm_msgs__srv__DA_motion_Response *)
    limx_arm_msgs__srv__DA_motion_Event__rosidl_typesupport_introspection_c__get_function__DA_motion_Event__response(untyped_member, index));
  const limx_arm_msgs__srv__DA_motion_Response * value =
    (const limx_arm_msgs__srv__DA_motion_Response *)(untyped_value);
  *item = *value;
}

bool limx_arm_msgs__srv__DA_motion_Event__rosidl_typesupport_introspection_c__resize_function__DA_motion_Event__response(
  void * untyped_member, size_t size)
{
  limx_arm_msgs__srv__DA_motion_Response__Sequence * member =
    (limx_arm_msgs__srv__DA_motion_Response__Sequence *)(untyped_member);
  limx_arm_msgs__srv__DA_motion_Response__Sequence__fini(member);
  return limx_arm_msgs__srv__DA_motion_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember limx_arm_msgs__srv__DA_motion_Event__rosidl_typesupport_introspection_c__DA_motion_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(limx_arm_msgs__srv__DA_motion_Event, info),  // bytes offset in struct
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
    offsetof(limx_arm_msgs__srv__DA_motion_Event, request),  // bytes offset in struct
    NULL,  // default value
    limx_arm_msgs__srv__DA_motion_Event__rosidl_typesupport_introspection_c__size_function__DA_motion_Event__request,  // size() function pointer
    limx_arm_msgs__srv__DA_motion_Event__rosidl_typesupport_introspection_c__get_const_function__DA_motion_Event__request,  // get_const(index) function pointer
    limx_arm_msgs__srv__DA_motion_Event__rosidl_typesupport_introspection_c__get_function__DA_motion_Event__request,  // get(index) function pointer
    limx_arm_msgs__srv__DA_motion_Event__rosidl_typesupport_introspection_c__fetch_function__DA_motion_Event__request,  // fetch(index, &value) function pointer
    limx_arm_msgs__srv__DA_motion_Event__rosidl_typesupport_introspection_c__assign_function__DA_motion_Event__request,  // assign(index, value) function pointer
    limx_arm_msgs__srv__DA_motion_Event__rosidl_typesupport_introspection_c__resize_function__DA_motion_Event__request  // resize(index) function pointer
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
    offsetof(limx_arm_msgs__srv__DA_motion_Event, response),  // bytes offset in struct
    NULL,  // default value
    limx_arm_msgs__srv__DA_motion_Event__rosidl_typesupport_introspection_c__size_function__DA_motion_Event__response,  // size() function pointer
    limx_arm_msgs__srv__DA_motion_Event__rosidl_typesupport_introspection_c__get_const_function__DA_motion_Event__response,  // get_const(index) function pointer
    limx_arm_msgs__srv__DA_motion_Event__rosidl_typesupport_introspection_c__get_function__DA_motion_Event__response,  // get(index) function pointer
    limx_arm_msgs__srv__DA_motion_Event__rosidl_typesupport_introspection_c__fetch_function__DA_motion_Event__response,  // fetch(index, &value) function pointer
    limx_arm_msgs__srv__DA_motion_Event__rosidl_typesupport_introspection_c__assign_function__DA_motion_Event__response,  // assign(index, value) function pointer
    limx_arm_msgs__srv__DA_motion_Event__rosidl_typesupport_introspection_c__resize_function__DA_motion_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers limx_arm_msgs__srv__DA_motion_Event__rosidl_typesupport_introspection_c__DA_motion_Event_message_members = {
  "limx_arm_msgs__srv",  // message namespace
  "DA_motion_Event",  // message name
  3,  // number of fields
  sizeof(limx_arm_msgs__srv__DA_motion_Event),
  false,  // has_any_key_member_
  limx_arm_msgs__srv__DA_motion_Event__rosidl_typesupport_introspection_c__DA_motion_Event_message_member_array,  // message members
  limx_arm_msgs__srv__DA_motion_Event__rosidl_typesupport_introspection_c__DA_motion_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  limx_arm_msgs__srv__DA_motion_Event__rosidl_typesupport_introspection_c__DA_motion_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t limx_arm_msgs__srv__DA_motion_Event__rosidl_typesupport_introspection_c__DA_motion_Event_message_type_support_handle = {
  0,
  &limx_arm_msgs__srv__DA_motion_Event__rosidl_typesupport_introspection_c__DA_motion_Event_message_members,
  get_message_typesupport_handle_function,
  &limx_arm_msgs__srv__DA_motion_Event__get_type_hash,
  &limx_arm_msgs__srv__DA_motion_Event__get_type_description,
  &limx_arm_msgs__srv__DA_motion_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_limx_arm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, limx_arm_msgs, srv, DA_motion_Event)() {
  limx_arm_msgs__srv__DA_motion_Event__rosidl_typesupport_introspection_c__DA_motion_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  limx_arm_msgs__srv__DA_motion_Event__rosidl_typesupport_introspection_c__DA_motion_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, limx_arm_msgs, srv, DA_motion_Request)();
  limx_arm_msgs__srv__DA_motion_Event__rosidl_typesupport_introspection_c__DA_motion_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, limx_arm_msgs, srv, DA_motion_Response)();
  if (!limx_arm_msgs__srv__DA_motion_Event__rosidl_typesupport_introspection_c__DA_motion_Event_message_type_support_handle.typesupport_identifier) {
    limx_arm_msgs__srv__DA_motion_Event__rosidl_typesupport_introspection_c__DA_motion_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &limx_arm_msgs__srv__DA_motion_Event__rosidl_typesupport_introspection_c__DA_motion_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "limx_arm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "limx_arm_msgs/srv/detail/da_motion__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers limx_arm_msgs__srv__detail__da_motion__rosidl_typesupport_introspection_c__DA_motion_service_members = {
  "limx_arm_msgs__srv",  // service namespace
  "DA_motion",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // limx_arm_msgs__srv__detail__da_motion__rosidl_typesupport_introspection_c__DA_motion_Request_message_type_support_handle,
  NULL,  // response message
  // limx_arm_msgs__srv__detail__da_motion__rosidl_typesupport_introspection_c__DA_motion_Response_message_type_support_handle
  NULL  // event_message
  // limx_arm_msgs__srv__detail__da_motion__rosidl_typesupport_introspection_c__DA_motion_Response_message_type_support_handle
};


static rosidl_service_type_support_t limx_arm_msgs__srv__detail__da_motion__rosidl_typesupport_introspection_c__DA_motion_service_type_support_handle = {
  0,
  &limx_arm_msgs__srv__detail__da_motion__rosidl_typesupport_introspection_c__DA_motion_service_members,
  get_service_typesupport_handle_function,
  &limx_arm_msgs__srv__DA_motion_Request__rosidl_typesupport_introspection_c__DA_motion_Request_message_type_support_handle,
  &limx_arm_msgs__srv__DA_motion_Response__rosidl_typesupport_introspection_c__DA_motion_Response_message_type_support_handle,
  &limx_arm_msgs__srv__DA_motion_Event__rosidl_typesupport_introspection_c__DA_motion_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    limx_arm_msgs,
    srv,
    DA_motion
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    limx_arm_msgs,
    srv,
    DA_motion
  ),
  &limx_arm_msgs__srv__DA_motion__get_type_hash,
  &limx_arm_msgs__srv__DA_motion__get_type_description,
  &limx_arm_msgs__srv__DA_motion__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, limx_arm_msgs, srv, DA_motion_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, limx_arm_msgs, srv, DA_motion_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, limx_arm_msgs, srv, DA_motion_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_limx_arm_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, limx_arm_msgs, srv, DA_motion)(void) {
  if (!limx_arm_msgs__srv__detail__da_motion__rosidl_typesupport_introspection_c__DA_motion_service_type_support_handle.typesupport_identifier) {
    limx_arm_msgs__srv__detail__da_motion__rosidl_typesupport_introspection_c__DA_motion_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)limx_arm_msgs__srv__detail__da_motion__rosidl_typesupport_introspection_c__DA_motion_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, limx_arm_msgs, srv, DA_motion_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, limx_arm_msgs, srv, DA_motion_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, limx_arm_msgs, srv, DA_motion_Event)()->data;
  }

  return &limx_arm_msgs__srv__detail__da_motion__rosidl_typesupport_introspection_c__DA_motion_service_type_support_handle;
}
