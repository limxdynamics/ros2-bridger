// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from controller_msgs:msg/JointCmdNew.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "controller_msgs/msg/detail/joint_cmd_new__rosidl_typesupport_introspection_c.h"
#include "controller_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "controller_msgs/msg/detail/joint_cmd_new__functions.h"
#include "controller_msgs/msg/detail/joint_cmd_new__struct.h"
#include "rosidl_buffer/c_helpers.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `names`
#include "rosidl_runtime_c/string_functions.h"
// Member `q`
// Member `v`
// Member `tau`
// Member `kp`
// Member `kd`
// Member `mode`
// Member `parallel_solve_required`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__JointCmdNew_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  controller_msgs__msg__JointCmdNew__init(message_memory);
}

void controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__JointCmdNew_fini_function(void * message_memory)
{
  controller_msgs__msg__JointCmdNew__fini(message_memory);
}

size_t controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__size_function__JointCmdNew__names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__get_const_function__JointCmdNew__names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__get_function__JointCmdNew__names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__fetch_function__JointCmdNew__names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__get_const_function__JointCmdNew__names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__assign_function__JointCmdNew__names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__get_function__JointCmdNew__names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__resize_function__JointCmdNew__names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__size_function__JointCmdNew__q(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__get_const_function__JointCmdNew__q(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__get_function__JointCmdNew__q(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__fetch_function__JointCmdNew__q(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__get_const_function__JointCmdNew__q(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__assign_function__JointCmdNew__q(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__get_function__JointCmdNew__q(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__resize_function__JointCmdNew__q(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__size_function__JointCmdNew__v(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__get_const_function__JointCmdNew__v(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__get_function__JointCmdNew__v(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__fetch_function__JointCmdNew__v(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__get_const_function__JointCmdNew__v(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__assign_function__JointCmdNew__v(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__get_function__JointCmdNew__v(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__resize_function__JointCmdNew__v(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__size_function__JointCmdNew__tau(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__get_const_function__JointCmdNew__tau(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__get_function__JointCmdNew__tau(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__fetch_function__JointCmdNew__tau(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__get_const_function__JointCmdNew__tau(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__assign_function__JointCmdNew__tau(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__get_function__JointCmdNew__tau(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__resize_function__JointCmdNew__tau(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__size_function__JointCmdNew__kp(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__get_const_function__JointCmdNew__kp(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__get_function__JointCmdNew__kp(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__fetch_function__JointCmdNew__kp(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__get_const_function__JointCmdNew__kp(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__assign_function__JointCmdNew__kp(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__get_function__JointCmdNew__kp(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__resize_function__JointCmdNew__kp(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__size_function__JointCmdNew__kd(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__get_const_function__JointCmdNew__kd(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__get_function__JointCmdNew__kd(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__fetch_function__JointCmdNew__kd(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__get_const_function__JointCmdNew__kd(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__assign_function__JointCmdNew__kd(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__get_function__JointCmdNew__kd(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__resize_function__JointCmdNew__kd(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__size_function__JointCmdNew__mode(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  if (member->is_rosidl_buffer) {
    rosidl_buffer_uint8_throw_if_not_cpu((const void *)member->data);
  }
  return member->size;
}

const void * controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__get_const_function__JointCmdNew__mode(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  if (member->is_rosidl_buffer) {
    rosidl_buffer_uint8_throw_if_not_cpu((const void *)member->data);
  }
  return &member->data[index];
}

void * controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__get_function__JointCmdNew__mode(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  if (member->is_rosidl_buffer) {
    rosidl_buffer_uint8_throw_if_not_cpu((const void *)member->data);
  }
  return &member->data[index];
}

void controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__fetch_function__JointCmdNew__mode(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__get_const_function__JointCmdNew__mode(untyped_member, index));
  uint8_t * value = (uint8_t *)(untyped_value);
  *value = *item;
}

void controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__assign_function__JointCmdNew__mode(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__get_function__JointCmdNew__mode(untyped_member, index));
  const uint8_t * value = (const uint8_t *)(untyped_value);
  *item = *value;
}

bool controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__resize_function__JointCmdNew__mode(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  if (member->is_rosidl_buffer) {
    rosidl_buffer_uint8_throw_if_not_cpu((const void *)member->data);
  }
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__size_function__JointCmdNew__parallel_solve_required(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__get_const_function__JointCmdNew__parallel_solve_required(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__get_function__JointCmdNew__parallel_solve_required(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__fetch_function__JointCmdNew__parallel_solve_required(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__get_const_function__JointCmdNew__parallel_solve_required(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__assign_function__JointCmdNew__parallel_solve_required(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__get_function__JointCmdNew__parallel_solve_required(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__resize_function__JointCmdNew__parallel_solve_required(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__JointCmdNew_message_member_array[10] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_msgs__msg__JointCmdNew, header),  // bytes offset in struct
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
    "names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_msgs__msg__JointCmdNew, names),  // bytes offset in struct
    NULL,  // default value
    controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__size_function__JointCmdNew__names,  // size() function pointer
    controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__get_const_function__JointCmdNew__names,  // get_const(index) function pointer
    controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__get_function__JointCmdNew__names,  // get(index) function pointer
    controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__fetch_function__JointCmdNew__names,  // fetch(index, &value) function pointer
    controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__assign_function__JointCmdNew__names,  // assign(index, value) function pointer
    controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__resize_function__JointCmdNew__names,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "q",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_msgs__msg__JointCmdNew, q),  // bytes offset in struct
    NULL,  // default value
    controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__size_function__JointCmdNew__q,  // size() function pointer
    controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__get_const_function__JointCmdNew__q,  // get_const(index) function pointer
    controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__get_function__JointCmdNew__q,  // get(index) function pointer
    controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__fetch_function__JointCmdNew__q,  // fetch(index, &value) function pointer
    controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__assign_function__JointCmdNew__q,  // assign(index, value) function pointer
    controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__resize_function__JointCmdNew__q,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "v",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_msgs__msg__JointCmdNew, v),  // bytes offset in struct
    NULL,  // default value
    controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__size_function__JointCmdNew__v,  // size() function pointer
    controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__get_const_function__JointCmdNew__v,  // get_const(index) function pointer
    controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__get_function__JointCmdNew__v,  // get(index) function pointer
    controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__fetch_function__JointCmdNew__v,  // fetch(index, &value) function pointer
    controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__assign_function__JointCmdNew__v,  // assign(index, value) function pointer
    controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__resize_function__JointCmdNew__v,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "tau",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_msgs__msg__JointCmdNew, tau),  // bytes offset in struct
    NULL,  // default value
    controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__size_function__JointCmdNew__tau,  // size() function pointer
    controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__get_const_function__JointCmdNew__tau,  // get_const(index) function pointer
    controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__get_function__JointCmdNew__tau,  // get(index) function pointer
    controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__fetch_function__JointCmdNew__tau,  // fetch(index, &value) function pointer
    controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__assign_function__JointCmdNew__tau,  // assign(index, value) function pointer
    controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__resize_function__JointCmdNew__tau,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "kp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_msgs__msg__JointCmdNew, kp),  // bytes offset in struct
    NULL,  // default value
    controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__size_function__JointCmdNew__kp,  // size() function pointer
    controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__get_const_function__JointCmdNew__kp,  // get_const(index) function pointer
    controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__get_function__JointCmdNew__kp,  // get(index) function pointer
    controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__fetch_function__JointCmdNew__kp,  // fetch(index, &value) function pointer
    controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__assign_function__JointCmdNew__kp,  // assign(index, value) function pointer
    controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__resize_function__JointCmdNew__kp,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "kd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_msgs__msg__JointCmdNew, kd),  // bytes offset in struct
    NULL,  // default value
    controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__size_function__JointCmdNew__kd,  // size() function pointer
    controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__get_const_function__JointCmdNew__kd,  // get_const(index) function pointer
    controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__get_function__JointCmdNew__kd,  // get(index) function pointer
    controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__fetch_function__JointCmdNew__kd,  // fetch(index, &value) function pointer
    controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__assign_function__JointCmdNew__kd,  // assign(index, value) function pointer
    controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__resize_function__JointCmdNew__kd,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_msgs__msg__JointCmdNew, mode),  // bytes offset in struct
    NULL,  // default value
    controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__size_function__JointCmdNew__mode,  // size() function pointer
    controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__get_const_function__JointCmdNew__mode,  // get_const(index) function pointer
    controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__get_function__JointCmdNew__mode,  // get(index) function pointer
    controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__fetch_function__JointCmdNew__mode,  // fetch(index, &value) function pointer
    controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__assign_function__JointCmdNew__mode,  // assign(index, value) function pointer
    controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__resize_function__JointCmdNew__mode,  // resize(index) function pointer
    true  // is_rosidl_buffer
  },
  {
    "na",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_msgs__msg__JointCmdNew, na),  // bytes offset in struct
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
    "parallel_solve_required",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_msgs__msg__JointCmdNew, parallel_solve_required),  // bytes offset in struct
    NULL,  // default value
    controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__size_function__JointCmdNew__parallel_solve_required,  // size() function pointer
    controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__get_const_function__JointCmdNew__parallel_solve_required,  // get_const(index) function pointer
    controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__get_function__JointCmdNew__parallel_solve_required,  // get(index) function pointer
    controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__fetch_function__JointCmdNew__parallel_solve_required,  // fetch(index, &value) function pointer
    controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__assign_function__JointCmdNew__parallel_solve_required,  // assign(index, value) function pointer
    controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__resize_function__JointCmdNew__parallel_solve_required,  // resize(index) function pointer
    false  // is_rosidl_buffer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__JointCmdNew_message_members = {
  "controller_msgs__msg",  // message namespace
  "JointCmdNew",  // message name
  10,  // number of fields
  sizeof(controller_msgs__msg__JointCmdNew),
  false,  // has_any_key_member_
  controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__JointCmdNew_message_member_array,  // message members
  controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__JointCmdNew_init_function,  // function to initialize message memory (memory has to be allocated)
  controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__JointCmdNew_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__JointCmdNew_message_type_support_handle = {
  0,
  &controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__JointCmdNew_message_members,
  get_message_typesupport_handle_function,
  &controller_msgs__msg__JointCmdNew__get_type_hash,
  &controller_msgs__msg__JointCmdNew__get_type_description,
  &controller_msgs__msg__JointCmdNew__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_controller_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_msgs, msg, JointCmdNew)() {
  controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__JointCmdNew_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__JointCmdNew_message_type_support_handle.typesupport_identifier) {
    controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__JointCmdNew_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &controller_msgs__msg__JointCmdNew__rosidl_typesupport_introspection_c__JointCmdNew_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
