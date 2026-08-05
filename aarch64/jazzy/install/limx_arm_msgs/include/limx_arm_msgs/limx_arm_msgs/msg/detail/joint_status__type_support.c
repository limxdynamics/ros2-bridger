// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from limx_arm_msgs:msg/JointStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "limx_arm_msgs/msg/detail/joint_status__rosidl_typesupport_introspection_c.h"
#include "limx_arm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "limx_arm_msgs/msg/detail/joint_status__functions.h"
#include "limx_arm_msgs/msg/detail/joint_status__struct.h"


// Include directives for member types
// Member `deviceid`
// Member `error`
// Member `log_path`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__JointStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  limx_arm_msgs__msg__JointStatus__init(message_memory);
}

void limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__JointStatus_fini_function(void * message_memory)
{
  limx_arm_msgs__msg__JointStatus__fini(message_memory);
}

size_t limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__size_function__JointStatus__enable(
  const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__get_const_function__JointStatus__enable(
  const void * untyped_member, size_t index)
{
  const int32_t * member =
    (const int32_t *)(untyped_member);
  return &member[index];
}

void * limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__get_function__JointStatus__enable(
  void * untyped_member, size_t index)
{
  int32_t * member =
    (int32_t *)(untyped_member);
  return &member[index];
}

void limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__fetch_function__JointStatus__enable(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__get_const_function__JointStatus__enable(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__assign_function__JointStatus__enable(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__get_function__JointStatus__enable(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

size_t limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__size_function__JointStatus__error(
  const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__get_const_function__JointStatus__error(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String * member =
    (const rosidl_runtime_c__String *)(untyped_member);
  return &member[index];
}

void * limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__get_function__JointStatus__error(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String * member =
    (rosidl_runtime_c__String *)(untyped_member);
  return &member[index];
}

void limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__fetch_function__JointStatus__error(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__get_const_function__JointStatus__error(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__assign_function__JointStatus__error(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__get_function__JointStatus__error(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

size_t limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__size_function__JointStatus__zero(
  const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__get_const_function__JointStatus__zero(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__get_function__JointStatus__zero(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__fetch_function__JointStatus__zero(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__get_const_function__JointStatus__zero(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__assign_function__JointStatus__zero(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__get_function__JointStatus__zero(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__size_function__JointStatus__limit_min(
  const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__get_const_function__JointStatus__limit_min(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__get_function__JointStatus__limit_min(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__fetch_function__JointStatus__limit_min(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__get_const_function__JointStatus__limit_min(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__assign_function__JointStatus__limit_min(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__get_function__JointStatus__limit_min(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__size_function__JointStatus__limit_max(
  const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__get_const_function__JointStatus__limit_max(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__get_function__JointStatus__limit_max(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__fetch_function__JointStatus__limit_max(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__get_const_function__JointStatus__limit_max(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__assign_function__JointStatus__limit_max(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__get_function__JointStatus__limit_max(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__size_function__JointStatus__tool_size(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__get_const_function__JointStatus__tool_size(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__get_function__JointStatus__tool_size(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__fetch_function__JointStatus__tool_size(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__get_const_function__JointStatus__tool_size(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__assign_function__JointStatus__tool_size(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__get_function__JointStatus__tool_size(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__JointStatus_message_member_array[13] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(limx_arm_msgs__msg__JointStatus, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "deviceid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(limx_arm_msgs__msg__JointStatus, deviceid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "run_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(limx_arm_msgs__msg__JointStatus, run_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "enable",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(limx_arm_msgs__msg__JointStatus, enable),  // bytes offset in struct
    NULL,  // default value
    limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__size_function__JointStatus__enable,  // size() function pointer
    limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__get_const_function__JointStatus__enable,  // get_const(index) function pointer
    limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__get_function__JointStatus__enable,  // get(index) function pointer
    limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__fetch_function__JointStatus__enable,  // fetch(index, &value) function pointer
    limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__assign_function__JointStatus__enable,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(limx_arm_msgs__msg__JointStatus, error),  // bytes offset in struct
    NULL,  // default value
    limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__size_function__JointStatus__error,  // size() function pointer
    limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__get_const_function__JointStatus__error,  // get_const(index) function pointer
    limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__get_function__JointStatus__error,  // get(index) function pointer
    limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__fetch_function__JointStatus__error,  // fetch(index, &value) function pointer
    limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__assign_function__JointStatus__error,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "zero",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(limx_arm_msgs__msg__JointStatus, zero),  // bytes offset in struct
    NULL,  // default value
    limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__size_function__JointStatus__zero,  // size() function pointer
    limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__get_const_function__JointStatus__zero,  // get_const(index) function pointer
    limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__get_function__JointStatus__zero,  // get(index) function pointer
    limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__fetch_function__JointStatus__zero,  // fetch(index, &value) function pointer
    limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__assign_function__JointStatus__zero,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "limit_min",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(limx_arm_msgs__msg__JointStatus, limit_min),  // bytes offset in struct
    NULL,  // default value
    limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__size_function__JointStatus__limit_min,  // size() function pointer
    limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__get_const_function__JointStatus__limit_min,  // get_const(index) function pointer
    limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__get_function__JointStatus__limit_min,  // get(index) function pointer
    limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__fetch_function__JointStatus__limit_min,  // fetch(index, &value) function pointer
    limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__assign_function__JointStatus__limit_min,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "limit_max",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(limx_arm_msgs__msg__JointStatus, limit_max),  // bytes offset in struct
    NULL,  // default value
    limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__size_function__JointStatus__limit_max,  // size() function pointer
    limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__get_const_function__JointStatus__limit_max,  // get_const(index) function pointer
    limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__get_function__JointStatus__limit_max,  // get(index) function pointer
    limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__fetch_function__JointStatus__limit_max,  // fetch(index, &value) function pointer
    limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__assign_function__JointStatus__limit_max,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tool_size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(limx_arm_msgs__msg__JointStatus, tool_size),  // bytes offset in struct
    NULL,  // default value
    limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__size_function__JointStatus__tool_size,  // size() function pointer
    limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__get_const_function__JointStatus__tool_size,  // get_const(index) function pointer
    limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__get_function__JointStatus__tool_size,  // get(index) function pointer
    limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__fetch_function__JointStatus__tool_size,  // fetch(index, &value) function pointer
    limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__assign_function__JointStatus__tool_size,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(limx_arm_msgs__msg__JointStatus, mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(limx_arm_msgs__msg__JointStatus, state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "play_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(limx_arm_msgs__msg__JointStatus, play_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "log_path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(limx_arm_msgs__msg__JointStatus, log_path),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__JointStatus_message_members = {
  "limx_arm_msgs__msg",  // message namespace
  "JointStatus",  // message name
  13,  // number of fields
  sizeof(limx_arm_msgs__msg__JointStatus),
  false,  // has_any_key_member_
  limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__JointStatus_message_member_array,  // message members
  limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__JointStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__JointStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__JointStatus_message_type_support_handle = {
  0,
  &limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__JointStatus_message_members,
  get_message_typesupport_handle_function,
  &limx_arm_msgs__msg__JointStatus__get_type_hash,
  &limx_arm_msgs__msg__JointStatus__get_type_description,
  &limx_arm_msgs__msg__JointStatus__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_limx_arm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, limx_arm_msgs, msg, JointStatus)() {
  if (!limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__JointStatus_message_type_support_handle.typesupport_identifier) {
    limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__JointStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &limx_arm_msgs__msg__JointStatus__rosidl_typesupport_introspection_c__JointStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
