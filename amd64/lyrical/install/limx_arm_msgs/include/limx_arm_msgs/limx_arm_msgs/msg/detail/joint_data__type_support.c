// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from limx_arm_msgs:msg/JointData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "limx_arm_msgs/msg/detail/joint_data__rosidl_typesupport_introspection_c.h"
#include "limx_arm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "limx_arm_msgs/msg/detail/joint_data__functions.h"
#include "limx_arm_msgs/msg/detail/joint_data__struct.h"


// Include directives for member types
// Member `deviceid`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void limx_arm_msgs__msg__JointData__rosidl_typesupport_introspection_c__JointData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  limx_arm_msgs__msg__JointData__init(message_memory);
}

void limx_arm_msgs__msg__JointData__rosidl_typesupport_introspection_c__JointData_fini_function(void * message_memory)
{
  limx_arm_msgs__msg__JointData__fini(message_memory);
}

size_t limx_arm_msgs__msg__JointData__rosidl_typesupport_introspection_c__size_function__JointData__angle(
  const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * limx_arm_msgs__msg__JointData__rosidl_typesupport_introspection_c__get_const_function__JointData__angle(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * limx_arm_msgs__msg__JointData__rosidl_typesupport_introspection_c__get_function__JointData__angle(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void limx_arm_msgs__msg__JointData__rosidl_typesupport_introspection_c__fetch_function__JointData__angle(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    limx_arm_msgs__msg__JointData__rosidl_typesupport_introspection_c__get_const_function__JointData__angle(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void limx_arm_msgs__msg__JointData__rosidl_typesupport_introspection_c__assign_function__JointData__angle(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    limx_arm_msgs__msg__JointData__rosidl_typesupport_introspection_c__get_function__JointData__angle(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t limx_arm_msgs__msg__JointData__rosidl_typesupport_introspection_c__size_function__JointData__velocity(
  const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * limx_arm_msgs__msg__JointData__rosidl_typesupport_introspection_c__get_const_function__JointData__velocity(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * limx_arm_msgs__msg__JointData__rosidl_typesupport_introspection_c__get_function__JointData__velocity(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void limx_arm_msgs__msg__JointData__rosidl_typesupport_introspection_c__fetch_function__JointData__velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    limx_arm_msgs__msg__JointData__rosidl_typesupport_introspection_c__get_const_function__JointData__velocity(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void limx_arm_msgs__msg__JointData__rosidl_typesupport_introspection_c__assign_function__JointData__velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    limx_arm_msgs__msg__JointData__rosidl_typesupport_introspection_c__get_function__JointData__velocity(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t limx_arm_msgs__msg__JointData__rosidl_typesupport_introspection_c__size_function__JointData__current(
  const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * limx_arm_msgs__msg__JointData__rosidl_typesupport_introspection_c__get_const_function__JointData__current(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * limx_arm_msgs__msg__JointData__rosidl_typesupport_introspection_c__get_function__JointData__current(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void limx_arm_msgs__msg__JointData__rosidl_typesupport_introspection_c__fetch_function__JointData__current(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    limx_arm_msgs__msg__JointData__rosidl_typesupport_introspection_c__get_const_function__JointData__current(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void limx_arm_msgs__msg__JointData__rosidl_typesupport_introspection_c__assign_function__JointData__current(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    limx_arm_msgs__msg__JointData__rosidl_typesupport_introspection_c__get_function__JointData__current(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember limx_arm_msgs__msg__JointData__rosidl_typesupport_introspection_c__JointData_message_member_array[5] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(limx_arm_msgs__msg__JointData, stamp),  // bytes offset in struct
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
    "deviceid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(limx_arm_msgs__msg__JointData, deviceid),  // bytes offset in struct
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
    "angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(limx_arm_msgs__msg__JointData, angle),  // bytes offset in struct
    NULL,  // default value
    limx_arm_msgs__msg__JointData__rosidl_typesupport_introspection_c__size_function__JointData__angle,  // size() function pointer
    limx_arm_msgs__msg__JointData__rosidl_typesupport_introspection_c__get_const_function__JointData__angle,  // get_const(index) function pointer
    limx_arm_msgs__msg__JointData__rosidl_typesupport_introspection_c__get_function__JointData__angle,  // get(index) function pointer
    limx_arm_msgs__msg__JointData__rosidl_typesupport_introspection_c__fetch_function__JointData__angle,  // fetch(index, &value) function pointer
    limx_arm_msgs__msg__JointData__rosidl_typesupport_introspection_c__assign_function__JointData__angle,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(limx_arm_msgs__msg__JointData, velocity),  // bytes offset in struct
    NULL,  // default value
    limx_arm_msgs__msg__JointData__rosidl_typesupport_introspection_c__size_function__JointData__velocity,  // size() function pointer
    limx_arm_msgs__msg__JointData__rosidl_typesupport_introspection_c__get_const_function__JointData__velocity,  // get_const(index) function pointer
    limx_arm_msgs__msg__JointData__rosidl_typesupport_introspection_c__get_function__JointData__velocity,  // get(index) function pointer
    limx_arm_msgs__msg__JointData__rosidl_typesupport_introspection_c__fetch_function__JointData__velocity,  // fetch(index, &value) function pointer
    limx_arm_msgs__msg__JointData__rosidl_typesupport_introspection_c__assign_function__JointData__velocity,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "current",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(limx_arm_msgs__msg__JointData, current),  // bytes offset in struct
    NULL,  // default value
    limx_arm_msgs__msg__JointData__rosidl_typesupport_introspection_c__size_function__JointData__current,  // size() function pointer
    limx_arm_msgs__msg__JointData__rosidl_typesupport_introspection_c__get_const_function__JointData__current,  // get_const(index) function pointer
    limx_arm_msgs__msg__JointData__rosidl_typesupport_introspection_c__get_function__JointData__current,  // get(index) function pointer
    limx_arm_msgs__msg__JointData__rosidl_typesupport_introspection_c__fetch_function__JointData__current,  // fetch(index, &value) function pointer
    limx_arm_msgs__msg__JointData__rosidl_typesupport_introspection_c__assign_function__JointData__current,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers limx_arm_msgs__msg__JointData__rosidl_typesupport_introspection_c__JointData_message_members = {
  "limx_arm_msgs__msg",  // message namespace
  "JointData",  // message name
  5,  // number of fields
  sizeof(limx_arm_msgs__msg__JointData),
  false,  // has_any_key_member_
  limx_arm_msgs__msg__JointData__rosidl_typesupport_introspection_c__JointData_message_member_array,  // message members
  limx_arm_msgs__msg__JointData__rosidl_typesupport_introspection_c__JointData_init_function,  // function to initialize message memory (memory has to be allocated)
  limx_arm_msgs__msg__JointData__rosidl_typesupport_introspection_c__JointData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t limx_arm_msgs__msg__JointData__rosidl_typesupport_introspection_c__JointData_message_type_support_handle = {
  0,
  &limx_arm_msgs__msg__JointData__rosidl_typesupport_introspection_c__JointData_message_members,
  get_message_typesupport_handle_function,
  &limx_arm_msgs__msg__JointData__get_type_hash,
  &limx_arm_msgs__msg__JointData__get_type_description,
  &limx_arm_msgs__msg__JointData__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_limx_arm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, limx_arm_msgs, msg, JointData)() {
  if (!limx_arm_msgs__msg__JointData__rosidl_typesupport_introspection_c__JointData_message_type_support_handle.typesupport_identifier) {
    limx_arm_msgs__msg__JointData__rosidl_typesupport_introspection_c__JointData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &limx_arm_msgs__msg__JointData__rosidl_typesupport_introspection_c__JointData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
