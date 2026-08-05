// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from limx_arm_msgs:msg/ServoCmd.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "limx_arm_msgs/msg/detail/servo_cmd__rosidl_typesupport_introspection_c.h"
#include "limx_arm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "limx_arm_msgs/msg/detail/servo_cmd__functions.h"
#include "limx_arm_msgs/msg/detail/servo_cmd__struct.h"


// Include directives for member types
// Member `functionName`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void limx_arm_msgs__msg__ServoCmd__rosidl_typesupport_introspection_c__ServoCmd_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  limx_arm_msgs__msg__ServoCmd__init(message_memory);
}

void limx_arm_msgs__msg__ServoCmd__rosidl_typesupport_introspection_c__ServoCmd_fini_function(void * message_memory)
{
  limx_arm_msgs__msg__ServoCmd__fini(message_memory);
}

size_t limx_arm_msgs__msg__ServoCmd__rosidl_typesupport_introspection_c__size_function__ServoCmd__left_arm_pos(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * limx_arm_msgs__msg__ServoCmd__rosidl_typesupport_introspection_c__get_const_function__ServoCmd__left_arm_pos(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * limx_arm_msgs__msg__ServoCmd__rosidl_typesupport_introspection_c__get_function__ServoCmd__left_arm_pos(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void limx_arm_msgs__msg__ServoCmd__rosidl_typesupport_introspection_c__fetch_function__ServoCmd__left_arm_pos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    limx_arm_msgs__msg__ServoCmd__rosidl_typesupport_introspection_c__get_const_function__ServoCmd__left_arm_pos(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void limx_arm_msgs__msg__ServoCmd__rosidl_typesupport_introspection_c__assign_function__ServoCmd__left_arm_pos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    limx_arm_msgs__msg__ServoCmd__rosidl_typesupport_introspection_c__get_function__ServoCmd__left_arm_pos(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t limx_arm_msgs__msg__ServoCmd__rosidl_typesupport_introspection_c__size_function__ServoCmd__right_arm_pos(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * limx_arm_msgs__msg__ServoCmd__rosidl_typesupport_introspection_c__get_const_function__ServoCmd__right_arm_pos(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * limx_arm_msgs__msg__ServoCmd__rosidl_typesupport_introspection_c__get_function__ServoCmd__right_arm_pos(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void limx_arm_msgs__msg__ServoCmd__rosidl_typesupport_introspection_c__fetch_function__ServoCmd__right_arm_pos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    limx_arm_msgs__msg__ServoCmd__rosidl_typesupport_introspection_c__get_const_function__ServoCmd__right_arm_pos(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void limx_arm_msgs__msg__ServoCmd__rosidl_typesupport_introspection_c__assign_function__ServoCmd__right_arm_pos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    limx_arm_msgs__msg__ServoCmd__rosidl_typesupport_introspection_c__get_function__ServoCmd__right_arm_pos(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember limx_arm_msgs__msg__ServoCmd__rosidl_typesupport_introspection_c__ServoCmd_message_member_array[3] = {
  {
    "functionName",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(limx_arm_msgs__msg__ServoCmd, functionName),  // bytes offset in struct
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
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(limx_arm_msgs__msg__ServoCmd, left_arm_pos),  // bytes offset in struct
    NULL,  // default value
    limx_arm_msgs__msg__ServoCmd__rosidl_typesupport_introspection_c__size_function__ServoCmd__left_arm_pos,  // size() function pointer
    limx_arm_msgs__msg__ServoCmd__rosidl_typesupport_introspection_c__get_const_function__ServoCmd__left_arm_pos,  // get_const(index) function pointer
    limx_arm_msgs__msg__ServoCmd__rosidl_typesupport_introspection_c__get_function__ServoCmd__left_arm_pos,  // get(index) function pointer
    limx_arm_msgs__msg__ServoCmd__rosidl_typesupport_introspection_c__fetch_function__ServoCmd__left_arm_pos,  // fetch(index, &value) function pointer
    limx_arm_msgs__msg__ServoCmd__rosidl_typesupport_introspection_c__assign_function__ServoCmd__left_arm_pos,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right_arm_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(limx_arm_msgs__msg__ServoCmd, right_arm_pos),  // bytes offset in struct
    NULL,  // default value
    limx_arm_msgs__msg__ServoCmd__rosidl_typesupport_introspection_c__size_function__ServoCmd__right_arm_pos,  // size() function pointer
    limx_arm_msgs__msg__ServoCmd__rosidl_typesupport_introspection_c__get_const_function__ServoCmd__right_arm_pos,  // get_const(index) function pointer
    limx_arm_msgs__msg__ServoCmd__rosidl_typesupport_introspection_c__get_function__ServoCmd__right_arm_pos,  // get(index) function pointer
    limx_arm_msgs__msg__ServoCmd__rosidl_typesupport_introspection_c__fetch_function__ServoCmd__right_arm_pos,  // fetch(index, &value) function pointer
    limx_arm_msgs__msg__ServoCmd__rosidl_typesupport_introspection_c__assign_function__ServoCmd__right_arm_pos,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers limx_arm_msgs__msg__ServoCmd__rosidl_typesupport_introspection_c__ServoCmd_message_members = {
  "limx_arm_msgs__msg",  // message namespace
  "ServoCmd",  // message name
  3,  // number of fields
  sizeof(limx_arm_msgs__msg__ServoCmd),
  limx_arm_msgs__msg__ServoCmd__rosidl_typesupport_introspection_c__ServoCmd_message_member_array,  // message members
  limx_arm_msgs__msg__ServoCmd__rosidl_typesupport_introspection_c__ServoCmd_init_function,  // function to initialize message memory (memory has to be allocated)
  limx_arm_msgs__msg__ServoCmd__rosidl_typesupport_introspection_c__ServoCmd_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t limx_arm_msgs__msg__ServoCmd__rosidl_typesupport_introspection_c__ServoCmd_message_type_support_handle = {
  0,
  &limx_arm_msgs__msg__ServoCmd__rosidl_typesupport_introspection_c__ServoCmd_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_limx_arm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, limx_arm_msgs, msg, ServoCmd)() {
  if (!limx_arm_msgs__msg__ServoCmd__rosidl_typesupport_introspection_c__ServoCmd_message_type_support_handle.typesupport_identifier) {
    limx_arm_msgs__msg__ServoCmd__rosidl_typesupport_introspection_c__ServoCmd_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &limx_arm_msgs__msg__ServoCmd__rosidl_typesupport_introspection_c__ServoCmd_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
