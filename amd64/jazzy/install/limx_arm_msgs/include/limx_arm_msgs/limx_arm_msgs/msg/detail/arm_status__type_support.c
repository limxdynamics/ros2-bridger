// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from limx_arm_msgs:msg/arm_status.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "limx_arm_msgs/msg/detail/arm_status__rosidl_typesupport_introspection_c.h"
#include "limx_arm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "limx_arm_msgs/msg/detail/arm_status__functions.h"
#include "limx_arm_msgs/msg/detail/arm_status__struct.h"


// Include directives for member types
// Member `left_joints`
// Member `right_joints`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void limx_arm_msgs__msg__arm_status__rosidl_typesupport_introspection_c__arm_status_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  limx_arm_msgs__msg__arm_status__init(message_memory);
}

void limx_arm_msgs__msg__arm_status__rosidl_typesupport_introspection_c__arm_status_fini_function(void * message_memory)
{
  limx_arm_msgs__msg__arm_status__fini(message_memory);
}

size_t limx_arm_msgs__msg__arm_status__rosidl_typesupport_introspection_c__size_function__arm_status__left_joints(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * limx_arm_msgs__msg__arm_status__rosidl_typesupport_introspection_c__get_const_function__arm_status__left_joints(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * limx_arm_msgs__msg__arm_status__rosidl_typesupport_introspection_c__get_function__arm_status__left_joints(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void limx_arm_msgs__msg__arm_status__rosidl_typesupport_introspection_c__fetch_function__arm_status__left_joints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    limx_arm_msgs__msg__arm_status__rosidl_typesupport_introspection_c__get_const_function__arm_status__left_joints(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void limx_arm_msgs__msg__arm_status__rosidl_typesupport_introspection_c__assign_function__arm_status__left_joints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    limx_arm_msgs__msg__arm_status__rosidl_typesupport_introspection_c__get_function__arm_status__left_joints(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool limx_arm_msgs__msg__arm_status__rosidl_typesupport_introspection_c__resize_function__arm_status__left_joints(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t limx_arm_msgs__msg__arm_status__rosidl_typesupport_introspection_c__size_function__arm_status__right_joints(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * limx_arm_msgs__msg__arm_status__rosidl_typesupport_introspection_c__get_const_function__arm_status__right_joints(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * limx_arm_msgs__msg__arm_status__rosidl_typesupport_introspection_c__get_function__arm_status__right_joints(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void limx_arm_msgs__msg__arm_status__rosidl_typesupport_introspection_c__fetch_function__arm_status__right_joints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    limx_arm_msgs__msg__arm_status__rosidl_typesupport_introspection_c__get_const_function__arm_status__right_joints(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void limx_arm_msgs__msg__arm_status__rosidl_typesupport_introspection_c__assign_function__arm_status__right_joints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    limx_arm_msgs__msg__arm_status__rosidl_typesupport_introspection_c__get_function__arm_status__right_joints(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool limx_arm_msgs__msg__arm_status__rosidl_typesupport_introspection_c__resize_function__arm_status__right_joints(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t limx_arm_msgs__msg__arm_status__rosidl_typesupport_introspection_c__size_function__arm_status__left_endEffector(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * limx_arm_msgs__msg__arm_status__rosidl_typesupport_introspection_c__get_const_function__arm_status__left_endEffector(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * limx_arm_msgs__msg__arm_status__rosidl_typesupport_introspection_c__get_function__arm_status__left_endEffector(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void limx_arm_msgs__msg__arm_status__rosidl_typesupport_introspection_c__fetch_function__arm_status__left_endEffector(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    limx_arm_msgs__msg__arm_status__rosidl_typesupport_introspection_c__get_const_function__arm_status__left_endEffector(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void limx_arm_msgs__msg__arm_status__rosidl_typesupport_introspection_c__assign_function__arm_status__left_endEffector(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    limx_arm_msgs__msg__arm_status__rosidl_typesupport_introspection_c__get_function__arm_status__left_endEffector(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t limx_arm_msgs__msg__arm_status__rosidl_typesupport_introspection_c__size_function__arm_status__right_endEffector(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * limx_arm_msgs__msg__arm_status__rosidl_typesupport_introspection_c__get_const_function__arm_status__right_endEffector(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * limx_arm_msgs__msg__arm_status__rosidl_typesupport_introspection_c__get_function__arm_status__right_endEffector(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void limx_arm_msgs__msg__arm_status__rosidl_typesupport_introspection_c__fetch_function__arm_status__right_endEffector(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    limx_arm_msgs__msg__arm_status__rosidl_typesupport_introspection_c__get_const_function__arm_status__right_endEffector(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void limx_arm_msgs__msg__arm_status__rosidl_typesupport_introspection_c__assign_function__arm_status__right_endEffector(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    limx_arm_msgs__msg__arm_status__rosidl_typesupport_introspection_c__get_function__arm_status__right_endEffector(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember limx_arm_msgs__msg__arm_status__rosidl_typesupport_introspection_c__arm_status_message_member_array[5] = {
  {
    "left_joints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(limx_arm_msgs__msg__arm_status, left_joints),  // bytes offset in struct
    NULL,  // default value
    limx_arm_msgs__msg__arm_status__rosidl_typesupport_introspection_c__size_function__arm_status__left_joints,  // size() function pointer
    limx_arm_msgs__msg__arm_status__rosidl_typesupport_introspection_c__get_const_function__arm_status__left_joints,  // get_const(index) function pointer
    limx_arm_msgs__msg__arm_status__rosidl_typesupport_introspection_c__get_function__arm_status__left_joints,  // get(index) function pointer
    limx_arm_msgs__msg__arm_status__rosidl_typesupport_introspection_c__fetch_function__arm_status__left_joints,  // fetch(index, &value) function pointer
    limx_arm_msgs__msg__arm_status__rosidl_typesupport_introspection_c__assign_function__arm_status__left_joints,  // assign(index, value) function pointer
    limx_arm_msgs__msg__arm_status__rosidl_typesupport_introspection_c__resize_function__arm_status__left_joints  // resize(index) function pointer
  },
  {
    "right_joints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(limx_arm_msgs__msg__arm_status, right_joints),  // bytes offset in struct
    NULL,  // default value
    limx_arm_msgs__msg__arm_status__rosidl_typesupport_introspection_c__size_function__arm_status__right_joints,  // size() function pointer
    limx_arm_msgs__msg__arm_status__rosidl_typesupport_introspection_c__get_const_function__arm_status__right_joints,  // get_const(index) function pointer
    limx_arm_msgs__msg__arm_status__rosidl_typesupport_introspection_c__get_function__arm_status__right_joints,  // get(index) function pointer
    limx_arm_msgs__msg__arm_status__rosidl_typesupport_introspection_c__fetch_function__arm_status__right_joints,  // fetch(index, &value) function pointer
    limx_arm_msgs__msg__arm_status__rosidl_typesupport_introspection_c__assign_function__arm_status__right_joints,  // assign(index, value) function pointer
    limx_arm_msgs__msg__arm_status__rosidl_typesupport_introspection_c__resize_function__arm_status__right_joints  // resize(index) function pointer
  },
  {
    "left_endEffector",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(limx_arm_msgs__msg__arm_status, left_endEffector),  // bytes offset in struct
    NULL,  // default value
    limx_arm_msgs__msg__arm_status__rosidl_typesupport_introspection_c__size_function__arm_status__left_endEffector,  // size() function pointer
    limx_arm_msgs__msg__arm_status__rosidl_typesupport_introspection_c__get_const_function__arm_status__left_endEffector,  // get_const(index) function pointer
    limx_arm_msgs__msg__arm_status__rosidl_typesupport_introspection_c__get_function__arm_status__left_endEffector,  // get(index) function pointer
    limx_arm_msgs__msg__arm_status__rosidl_typesupport_introspection_c__fetch_function__arm_status__left_endEffector,  // fetch(index, &value) function pointer
    limx_arm_msgs__msg__arm_status__rosidl_typesupport_introspection_c__assign_function__arm_status__left_endEffector,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right_endEffector",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(limx_arm_msgs__msg__arm_status, right_endEffector),  // bytes offset in struct
    NULL,  // default value
    limx_arm_msgs__msg__arm_status__rosidl_typesupport_introspection_c__size_function__arm_status__right_endEffector,  // size() function pointer
    limx_arm_msgs__msg__arm_status__rosidl_typesupport_introspection_c__get_const_function__arm_status__right_endEffector,  // get_const(index) function pointer
    limx_arm_msgs__msg__arm_status__rosidl_typesupport_introspection_c__get_function__arm_status__right_endEffector,  // get(index) function pointer
    limx_arm_msgs__msg__arm_status__rosidl_typesupport_introspection_c__fetch_function__arm_status__right_endEffector,  // fetch(index, &value) function pointer
    limx_arm_msgs__msg__arm_status__rosidl_typesupport_introspection_c__assign_function__arm_status__right_endEffector,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ik_statu",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(limx_arm_msgs__msg__arm_status, ik_statu),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers limx_arm_msgs__msg__arm_status__rosidl_typesupport_introspection_c__arm_status_message_members = {
  "limx_arm_msgs__msg",  // message namespace
  "arm_status",  // message name
  5,  // number of fields
  sizeof(limx_arm_msgs__msg__arm_status),
  false,  // has_any_key_member_
  limx_arm_msgs__msg__arm_status__rosidl_typesupport_introspection_c__arm_status_message_member_array,  // message members
  limx_arm_msgs__msg__arm_status__rosidl_typesupport_introspection_c__arm_status_init_function,  // function to initialize message memory (memory has to be allocated)
  limx_arm_msgs__msg__arm_status__rosidl_typesupport_introspection_c__arm_status_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t limx_arm_msgs__msg__arm_status__rosidl_typesupport_introspection_c__arm_status_message_type_support_handle = {
  0,
  &limx_arm_msgs__msg__arm_status__rosidl_typesupport_introspection_c__arm_status_message_members,
  get_message_typesupport_handle_function,
  &limx_arm_msgs__msg__arm_status__get_type_hash,
  &limx_arm_msgs__msg__arm_status__get_type_description,
  &limx_arm_msgs__msg__arm_status__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_limx_arm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, limx_arm_msgs, msg, arm_status)() {
  if (!limx_arm_msgs__msg__arm_status__rosidl_typesupport_introspection_c__arm_status_message_type_support_handle.typesupport_identifier) {
    limx_arm_msgs__msg__arm_status__rosidl_typesupport_introspection_c__arm_status_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &limx_arm_msgs__msg__arm_status__rosidl_typesupport_introspection_c__arm_status_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
