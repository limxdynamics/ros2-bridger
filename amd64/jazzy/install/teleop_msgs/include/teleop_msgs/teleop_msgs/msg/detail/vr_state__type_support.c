// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from teleop_msgs:msg/VRState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "teleop_msgs/msg/detail/vr_state__rosidl_typesupport_introspection_c.h"
#include "teleop_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "teleop_msgs/msg/detail/vr_state__functions.h"
#include "teleop_msgs/msg/detail/vr_state__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__VRState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  teleop_msgs__msg__VRState__init(message_memory);
}

void teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__VRState_fini_function(void * message_memory)
{
  teleop_msgs__msg__VRState__fini(message_memory);
}

size_t teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__size_function__VRState__eyePose(
  const void * untyped_member)
{
  (void)untyped_member;
  return 16;
}

const void * teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__get_const_function__VRState__eyePose(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__get_function__VRState__eyePose(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__fetch_function__VRState__eyePose(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__get_const_function__VRState__eyePose(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__assign_function__VRState__eyePose(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__get_function__VRState__eyePose(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__size_function__VRState__l(
  const void * untyped_member)
{
  (void)untyped_member;
  return 16;
}

const void * teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__get_const_function__VRState__l(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__get_function__VRState__l(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__fetch_function__VRState__l(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__get_const_function__VRState__l(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__assign_function__VRState__l(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__get_function__VRState__l(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__size_function__VRState__r(
  const void * untyped_member)
{
  (void)untyped_member;
  return 16;
}

const void * teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__get_const_function__VRState__r(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__get_function__VRState__r(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__fetch_function__VRState__r(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__get_const_function__VRState__r(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__assign_function__VRState__r(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__get_function__VRState__r(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__size_function__VRState__leftJS(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__get_const_function__VRState__leftJS(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__get_function__VRState__leftJS(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__fetch_function__VRState__leftJS(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__get_const_function__VRState__leftJS(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__assign_function__VRState__leftJS(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__get_function__VRState__leftJS(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__size_function__VRState__rightJS(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__get_const_function__VRState__rightJS(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__get_function__VRState__rightJS(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__fetch_function__VRState__rightJS(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__get_const_function__VRState__rightJS(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__assign_function__VRState__rightJS(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__get_function__VRState__rightJS(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__VRState_message_member_array[20] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(teleop_msgs__msg__VRState, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "eyePose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    16,  // array size
    false,  // is upper bound
    offsetof(teleop_msgs__msg__VRState, eyePose),  // bytes offset in struct
    NULL,  // default value
    teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__size_function__VRState__eyePose,  // size() function pointer
    teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__get_const_function__VRState__eyePose,  // get_const(index) function pointer
    teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__get_function__VRState__eyePose,  // get(index) function pointer
    teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__fetch_function__VRState__eyePose,  // fetch(index, &value) function pointer
    teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__assign_function__VRState__eyePose,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "l",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    16,  // array size
    false,  // is upper bound
    offsetof(teleop_msgs__msg__VRState, l),  // bytes offset in struct
    NULL,  // default value
    teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__size_function__VRState__l,  // size() function pointer
    teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__get_const_function__VRState__l,  // get_const(index) function pointer
    teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__get_function__VRState__l,  // get(index) function pointer
    teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__fetch_function__VRState__l,  // fetch(index, &value) function pointer
    teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__assign_function__VRState__l,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "r",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    16,  // array size
    false,  // is upper bound
    offsetof(teleop_msgs__msg__VRState, r),  // bytes offset in struct
    NULL,  // default value
    teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__size_function__VRState__r,  // size() function pointer
    teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__get_const_function__VRState__r,  // get_const(index) function pointer
    teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__get_function__VRState__r,  // get(index) function pointer
    teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__fetch_function__VRState__r,  // fetch(index, &value) function pointer
    teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__assign_function__VRState__r,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "leftJS",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(teleop_msgs__msg__VRState, leftJS),  // bytes offset in struct
    NULL,  // default value
    teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__size_function__VRState__leftJS,  // size() function pointer
    teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__get_const_function__VRState__leftJS,  // get_const(index) function pointer
    teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__get_function__VRState__leftJS,  // get(index) function pointer
    teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__fetch_function__VRState__leftJS,  // fetch(index, &value) function pointer
    teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__assign_function__VRState__leftJS,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "leftTrig",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(teleop_msgs__msg__VRState, leftTrig),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "leftGrip",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(teleop_msgs__msg__VRState, leftGrip),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "LThU",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(teleop_msgs__msg__VRState, LThU),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "LTr",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(teleop_msgs__msg__VRState, LTr),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "LG",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(teleop_msgs__msg__VRState, LG),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "X",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(teleop_msgs__msg__VRState, X),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "Y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(teleop_msgs__msg__VRState, Y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rightJS",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(teleop_msgs__msg__VRState, rightJS),  // bytes offset in struct
    NULL,  // default value
    teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__size_function__VRState__rightJS,  // size() function pointer
    teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__get_const_function__VRState__rightJS,  // get_const(index) function pointer
    teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__get_function__VRState__rightJS,  // get(index) function pointer
    teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__fetch_function__VRState__rightJS,  // fetch(index, &value) function pointer
    teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__assign_function__VRState__rightJS,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rightTrig",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(teleop_msgs__msg__VRState, rightTrig),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rightGrip",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(teleop_msgs__msg__VRState, rightGrip),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "RThU",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(teleop_msgs__msg__VRState, RThU),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "RTr",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(teleop_msgs__msg__VRState, RTr),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "RG",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(teleop_msgs__msg__VRState, RG),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "A",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(teleop_msgs__msg__VRState, A),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "B",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(teleop_msgs__msg__VRState, B),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__VRState_message_members = {
  "teleop_msgs__msg",  // message namespace
  "VRState",  // message name
  20,  // number of fields
  sizeof(teleop_msgs__msg__VRState),
  false,  // has_any_key_member_
  teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__VRState_message_member_array,  // message members
  teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__VRState_init_function,  // function to initialize message memory (memory has to be allocated)
  teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__VRState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__VRState_message_type_support_handle = {
  0,
  &teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__VRState_message_members,
  get_message_typesupport_handle_function,
  &teleop_msgs__msg__VRState__get_type_hash,
  &teleop_msgs__msg__VRState__get_type_description,
  &teleop_msgs__msg__VRState__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_teleop_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, teleop_msgs, msg, VRState)() {
  teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__VRState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__VRState_message_type_support_handle.typesupport_identifier) {
    teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__VRState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &teleop_msgs__msg__VRState__rosidl_typesupport_introspection_c__VRState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
