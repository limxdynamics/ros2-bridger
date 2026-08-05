// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from hand_msgs:msg/TactileState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "hand_msgs/msg/detail/tactile_state__rosidl_typesupport_introspection_c.h"
#include "hand_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "hand_msgs/msg/detail/tactile_state__functions.h"
#include "hand_msgs/msg/detail/tactile_state__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `names`
#include "rosidl_runtime_c/string_functions.h"
// Member `normal_force`
// Member `tangential_force`
// Member `direction_angle`
// Member `approximate_value`
// Member `tactile_state`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__TactileState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hand_msgs__msg__TactileState__init(message_memory);
}

void hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__TactileState_fini_function(void * message_memory)
{
  hand_msgs__msg__TactileState__fini(message_memory);
}

size_t hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__size_function__TactileState__names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__get_const_function__TactileState__names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__get_function__TactileState__names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__fetch_function__TactileState__names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__get_const_function__TactileState__names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__assign_function__TactileState__names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__get_function__TactileState__names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__resize_function__TactileState__names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__size_function__TactileState__normal_force(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__get_const_function__TactileState__normal_force(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__get_function__TactileState__normal_force(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__fetch_function__TactileState__normal_force(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__get_const_function__TactileState__normal_force(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__assign_function__TactileState__normal_force(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__get_function__TactileState__normal_force(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__resize_function__TactileState__normal_force(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__size_function__TactileState__tangential_force(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__get_const_function__TactileState__tangential_force(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__get_function__TactileState__tangential_force(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__fetch_function__TactileState__tangential_force(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__get_const_function__TactileState__tangential_force(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__assign_function__TactileState__tangential_force(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__get_function__TactileState__tangential_force(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__resize_function__TactileState__tangential_force(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__size_function__TactileState__direction_angle(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__get_const_function__TactileState__direction_angle(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__get_function__TactileState__direction_angle(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__fetch_function__TactileState__direction_angle(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__get_const_function__TactileState__direction_angle(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__assign_function__TactileState__direction_angle(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__get_function__TactileState__direction_angle(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__resize_function__TactileState__direction_angle(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__size_function__TactileState__approximate_value(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__get_const_function__TactileState__approximate_value(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__get_function__TactileState__approximate_value(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__fetch_function__TactileState__approximate_value(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__get_const_function__TactileState__approximate_value(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__assign_function__TactileState__approximate_value(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__get_function__TactileState__approximate_value(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__resize_function__TactileState__approximate_value(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

size_t hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__size_function__TactileState__tactile_state(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint16__Sequence * member =
    (const rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  return member->size;
}

const void * hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__get_const_function__TactileState__tactile_state(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint16__Sequence * member =
    (const rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  return &member->data[index];
}

void * hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__get_function__TactileState__tactile_state(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint16__Sequence * member =
    (rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  return &member->data[index];
}

void hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__fetch_function__TactileState__tactile_state(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint16_t * item =
    ((const uint16_t *)
    hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__get_const_function__TactileState__tactile_state(untyped_member, index));
  uint16_t * value =
    (uint16_t *)(untyped_value);
  *value = *item;
}

void hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__assign_function__TactileState__tactile_state(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint16_t * item =
    ((uint16_t *)
    hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__get_function__TactileState__tactile_state(untyped_member, index));
  const uint16_t * value =
    (const uint16_t *)(untyped_value);
  *item = *value;
}

bool hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__resize_function__TactileState__tactile_state(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint16__Sequence * member =
    (rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  rosidl_runtime_c__uint16__Sequence__fini(member);
  return rosidl_runtime_c__uint16__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__TactileState_message_member_array[7] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hand_msgs__msg__TactileState, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hand_msgs__msg__TactileState, names),  // bytes offset in struct
    NULL,  // default value
    hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__size_function__TactileState__names,  // size() function pointer
    hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__get_const_function__TactileState__names,  // get_const(index) function pointer
    hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__get_function__TactileState__names,  // get(index) function pointer
    hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__fetch_function__TactileState__names,  // fetch(index, &value) function pointer
    hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__assign_function__TactileState__names,  // assign(index, value) function pointer
    hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__resize_function__TactileState__names  // resize(index) function pointer
  },
  {
    "normal_force",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hand_msgs__msg__TactileState, normal_force),  // bytes offset in struct
    NULL,  // default value
    hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__size_function__TactileState__normal_force,  // size() function pointer
    hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__get_const_function__TactileState__normal_force,  // get_const(index) function pointer
    hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__get_function__TactileState__normal_force,  // get(index) function pointer
    hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__fetch_function__TactileState__normal_force,  // fetch(index, &value) function pointer
    hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__assign_function__TactileState__normal_force,  // assign(index, value) function pointer
    hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__resize_function__TactileState__normal_force  // resize(index) function pointer
  },
  {
    "tangential_force",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hand_msgs__msg__TactileState, tangential_force),  // bytes offset in struct
    NULL,  // default value
    hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__size_function__TactileState__tangential_force,  // size() function pointer
    hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__get_const_function__TactileState__tangential_force,  // get_const(index) function pointer
    hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__get_function__TactileState__tangential_force,  // get(index) function pointer
    hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__fetch_function__TactileState__tangential_force,  // fetch(index, &value) function pointer
    hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__assign_function__TactileState__tangential_force,  // assign(index, value) function pointer
    hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__resize_function__TactileState__tangential_force  // resize(index) function pointer
  },
  {
    "direction_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hand_msgs__msg__TactileState, direction_angle),  // bytes offset in struct
    NULL,  // default value
    hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__size_function__TactileState__direction_angle,  // size() function pointer
    hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__get_const_function__TactileState__direction_angle,  // get_const(index) function pointer
    hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__get_function__TactileState__direction_angle,  // get(index) function pointer
    hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__fetch_function__TactileState__direction_angle,  // fetch(index, &value) function pointer
    hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__assign_function__TactileState__direction_angle,  // assign(index, value) function pointer
    hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__resize_function__TactileState__direction_angle  // resize(index) function pointer
  },
  {
    "approximate_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hand_msgs__msg__TactileState, approximate_value),  // bytes offset in struct
    NULL,  // default value
    hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__size_function__TactileState__approximate_value,  // size() function pointer
    hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__get_const_function__TactileState__approximate_value,  // get_const(index) function pointer
    hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__get_function__TactileState__approximate_value,  // get(index) function pointer
    hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__fetch_function__TactileState__approximate_value,  // fetch(index, &value) function pointer
    hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__assign_function__TactileState__approximate_value,  // assign(index, value) function pointer
    hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__resize_function__TactileState__approximate_value  // resize(index) function pointer
  },
  {
    "tactile_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hand_msgs__msg__TactileState, tactile_state),  // bytes offset in struct
    NULL,  // default value
    hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__size_function__TactileState__tactile_state,  // size() function pointer
    hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__get_const_function__TactileState__tactile_state,  // get_const(index) function pointer
    hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__get_function__TactileState__tactile_state,  // get(index) function pointer
    hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__fetch_function__TactileState__tactile_state,  // fetch(index, &value) function pointer
    hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__assign_function__TactileState__tactile_state,  // assign(index, value) function pointer
    hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__resize_function__TactileState__tactile_state  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__TactileState_message_members = {
  "hand_msgs__msg",  // message namespace
  "TactileState",  // message name
  7,  // number of fields
  sizeof(hand_msgs__msg__TactileState),
  hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__TactileState_message_member_array,  // message members
  hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__TactileState_init_function,  // function to initialize message memory (memory has to be allocated)
  hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__TactileState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__TactileState_message_type_support_handle = {
  0,
  &hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__TactileState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hand_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hand_msgs, msg, TactileState)() {
  hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__TactileState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__TactileState_message_type_support_handle.typesupport_identifier) {
    hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__TactileState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hand_msgs__msg__TactileState__rosidl_typesupport_introspection_c__TactileState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
