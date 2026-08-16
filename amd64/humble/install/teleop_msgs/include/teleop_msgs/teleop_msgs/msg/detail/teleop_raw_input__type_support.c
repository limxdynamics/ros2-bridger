// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from teleop_msgs:msg/TeleopRawInput.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "teleop_msgs/msg/detail/teleop_raw_input__rosidl_typesupport_introspection_c.h"
#include "teleop_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "teleop_msgs/msg/detail/teleop_raw_input__functions.h"
#include "teleop_msgs/msg/detail/teleop_raw_input__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void teleop_msgs__msg__TeleopRawInput__rosidl_typesupport_introspection_c__TeleopRawInput_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  teleop_msgs__msg__TeleopRawInput__init(message_memory);
}

void teleop_msgs__msg__TeleopRawInput__rosidl_typesupport_introspection_c__TeleopRawInput_fini_function(void * message_memory)
{
  teleop_msgs__msg__TeleopRawInput__fini(message_memory);
}

size_t teleop_msgs__msg__TeleopRawInput__rosidl_typesupport_introspection_c__size_function__TeleopRawInput__left_stick(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * teleop_msgs__msg__TeleopRawInput__rosidl_typesupport_introspection_c__get_const_function__TeleopRawInput__left_stick(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * teleop_msgs__msg__TeleopRawInput__rosidl_typesupport_introspection_c__get_function__TeleopRawInput__left_stick(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void teleop_msgs__msg__TeleopRawInput__rosidl_typesupport_introspection_c__fetch_function__TeleopRawInput__left_stick(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    teleop_msgs__msg__TeleopRawInput__rosidl_typesupport_introspection_c__get_const_function__TeleopRawInput__left_stick(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void teleop_msgs__msg__TeleopRawInput__rosidl_typesupport_introspection_c__assign_function__TeleopRawInput__left_stick(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    teleop_msgs__msg__TeleopRawInput__rosidl_typesupport_introspection_c__get_function__TeleopRawInput__left_stick(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t teleop_msgs__msg__TeleopRawInput__rosidl_typesupport_introspection_c__size_function__TeleopRawInput__right_stick(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * teleop_msgs__msg__TeleopRawInput__rosidl_typesupport_introspection_c__get_const_function__TeleopRawInput__right_stick(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * teleop_msgs__msg__TeleopRawInput__rosidl_typesupport_introspection_c__get_function__TeleopRawInput__right_stick(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void teleop_msgs__msg__TeleopRawInput__rosidl_typesupport_introspection_c__fetch_function__TeleopRawInput__right_stick(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    teleop_msgs__msg__TeleopRawInput__rosidl_typesupport_introspection_c__get_const_function__TeleopRawInput__right_stick(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void teleop_msgs__msg__TeleopRawInput__rosidl_typesupport_introspection_c__assign_function__TeleopRawInput__right_stick(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    teleop_msgs__msg__TeleopRawInput__rosidl_typesupport_introspection_c__get_function__TeleopRawInput__right_stick(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember teleop_msgs__msg__TeleopRawInput__rosidl_typesupport_introspection_c__TeleopRawInput_message_member_array[8] = {
  {
    "left_trigger",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(teleop_msgs__msg__TeleopRawInput, left_trigger),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right_trigger",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(teleop_msgs__msg__TeleopRawInput, right_trigger),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left_grip",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(teleop_msgs__msg__TeleopRawInput, left_grip),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right_grip",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(teleop_msgs__msg__TeleopRawInput, right_grip),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left_stick",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(teleop_msgs__msg__TeleopRawInput, left_stick),  // bytes offset in struct
    NULL,  // default value
    teleop_msgs__msg__TeleopRawInput__rosidl_typesupport_introspection_c__size_function__TeleopRawInput__left_stick,  // size() function pointer
    teleop_msgs__msg__TeleopRawInput__rosidl_typesupport_introspection_c__get_const_function__TeleopRawInput__left_stick,  // get_const(index) function pointer
    teleop_msgs__msg__TeleopRawInput__rosidl_typesupport_introspection_c__get_function__TeleopRawInput__left_stick,  // get(index) function pointer
    teleop_msgs__msg__TeleopRawInput__rosidl_typesupport_introspection_c__fetch_function__TeleopRawInput__left_stick,  // fetch(index, &value) function pointer
    teleop_msgs__msg__TeleopRawInput__rosidl_typesupport_introspection_c__assign_function__TeleopRawInput__left_stick,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right_stick",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(teleop_msgs__msg__TeleopRawInput, right_stick),  // bytes offset in struct
    NULL,  // default value
    teleop_msgs__msg__TeleopRawInput__rosidl_typesupport_introspection_c__size_function__TeleopRawInput__right_stick,  // size() function pointer
    teleop_msgs__msg__TeleopRawInput__rosidl_typesupport_introspection_c__get_const_function__TeleopRawInput__right_stick,  // get_const(index) function pointer
    teleop_msgs__msg__TeleopRawInput__rosidl_typesupport_introspection_c__get_function__TeleopRawInput__right_stick,  // get(index) function pointer
    teleop_msgs__msg__TeleopRawInput__rosidl_typesupport_introspection_c__fetch_function__TeleopRawInput__right_stick,  // fetch(index, &value) function pointer
    teleop_msgs__msg__TeleopRawInput__rosidl_typesupport_introspection_c__assign_function__TeleopRawInput__right_stick,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "buttons",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(teleop_msgs__msg__TeleopRawInput, buttons),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "buttons_valid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(teleop_msgs__msg__TeleopRawInput, buttons_valid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers teleop_msgs__msg__TeleopRawInput__rosidl_typesupport_introspection_c__TeleopRawInput_message_members = {
  "teleop_msgs__msg",  // message namespace
  "TeleopRawInput",  // message name
  8,  // number of fields
  sizeof(teleop_msgs__msg__TeleopRawInput),
  teleop_msgs__msg__TeleopRawInput__rosidl_typesupport_introspection_c__TeleopRawInput_message_member_array,  // message members
  teleop_msgs__msg__TeleopRawInput__rosidl_typesupport_introspection_c__TeleopRawInput_init_function,  // function to initialize message memory (memory has to be allocated)
  teleop_msgs__msg__TeleopRawInput__rosidl_typesupport_introspection_c__TeleopRawInput_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t teleop_msgs__msg__TeleopRawInput__rosidl_typesupport_introspection_c__TeleopRawInput_message_type_support_handle = {
  0,
  &teleop_msgs__msg__TeleopRawInput__rosidl_typesupport_introspection_c__TeleopRawInput_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_teleop_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, teleop_msgs, msg, TeleopRawInput)() {
  if (!teleop_msgs__msg__TeleopRawInput__rosidl_typesupport_introspection_c__TeleopRawInput_message_type_support_handle.typesupport_identifier) {
    teleop_msgs__msg__TeleopRawInput__rosidl_typesupport_introspection_c__TeleopRawInput_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &teleop_msgs__msg__TeleopRawInput__rosidl_typesupport_introspection_c__TeleopRawInput_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
