// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from hand_msgs:msg/TactileCmd.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "hand_msgs/msg/detail/tactile_cmd__rosidl_typesupport_introspection_c.h"
#include "hand_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "hand_msgs/msg/detail/tactile_cmd__functions.h"
#include "hand_msgs/msg/detail/tactile_cmd__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `names`
#include "rosidl_runtime_c/string_functions.h"
// Member `tactile_switch`
// Member `channel_reset`
// Member `calibration_trigger`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__TactileCmd_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hand_msgs__msg__TactileCmd__init(message_memory);
}

void hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__TactileCmd_fini_function(void * message_memory)
{
  hand_msgs__msg__TactileCmd__fini(message_memory);
}

size_t hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__size_function__TactileCmd__names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__get_const_function__TactileCmd__names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__get_function__TactileCmd__names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__fetch_function__TactileCmd__names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__get_const_function__TactileCmd__names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__assign_function__TactileCmd__names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__get_function__TactileCmd__names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__resize_function__TactileCmd__names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__size_function__TactileCmd__tactile_switch(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__get_const_function__TactileCmd__tactile_switch(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__get_function__TactileCmd__tactile_switch(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__fetch_function__TactileCmd__tactile_switch(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__get_const_function__TactileCmd__tactile_switch(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__assign_function__TactileCmd__tactile_switch(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__get_function__TactileCmd__tactile_switch(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__resize_function__TactileCmd__tactile_switch(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

size_t hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__size_function__TactileCmd__channel_reset(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__get_const_function__TactileCmd__channel_reset(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__get_function__TactileCmd__channel_reset(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__fetch_function__TactileCmd__channel_reset(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__get_const_function__TactileCmd__channel_reset(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__assign_function__TactileCmd__channel_reset(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__get_function__TactileCmd__channel_reset(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__resize_function__TactileCmd__channel_reset(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

size_t hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__size_function__TactileCmd__calibration_trigger(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__get_const_function__TactileCmd__calibration_trigger(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__get_function__TactileCmd__calibration_trigger(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__fetch_function__TactileCmd__calibration_trigger(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__get_const_function__TactileCmd__calibration_trigger(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__assign_function__TactileCmd__calibration_trigger(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__get_function__TactileCmd__calibration_trigger(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__resize_function__TactileCmd__calibration_trigger(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__TactileCmd_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hand_msgs__msg__TactileCmd, header),  // bytes offset in struct
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
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hand_msgs__msg__TactileCmd, names),  // bytes offset in struct
    NULL,  // default value
    hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__size_function__TactileCmd__names,  // size() function pointer
    hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__get_const_function__TactileCmd__names,  // get_const(index) function pointer
    hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__get_function__TactileCmd__names,  // get(index) function pointer
    hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__fetch_function__TactileCmd__names,  // fetch(index, &value) function pointer
    hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__assign_function__TactileCmd__names,  // assign(index, value) function pointer
    hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__resize_function__TactileCmd__names  // resize(index) function pointer
  },
  {
    "tactile_switch",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hand_msgs__msg__TactileCmd, tactile_switch),  // bytes offset in struct
    NULL,  // default value
    hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__size_function__TactileCmd__tactile_switch,  // size() function pointer
    hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__get_const_function__TactileCmd__tactile_switch,  // get_const(index) function pointer
    hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__get_function__TactileCmd__tactile_switch,  // get(index) function pointer
    hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__fetch_function__TactileCmd__tactile_switch,  // fetch(index, &value) function pointer
    hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__assign_function__TactileCmd__tactile_switch,  // assign(index, value) function pointer
    hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__resize_function__TactileCmd__tactile_switch  // resize(index) function pointer
  },
  {
    "channel_reset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hand_msgs__msg__TactileCmd, channel_reset),  // bytes offset in struct
    NULL,  // default value
    hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__size_function__TactileCmd__channel_reset,  // size() function pointer
    hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__get_const_function__TactileCmd__channel_reset,  // get_const(index) function pointer
    hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__get_function__TactileCmd__channel_reset,  // get(index) function pointer
    hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__fetch_function__TactileCmd__channel_reset,  // fetch(index, &value) function pointer
    hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__assign_function__TactileCmd__channel_reset,  // assign(index, value) function pointer
    hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__resize_function__TactileCmd__channel_reset  // resize(index) function pointer
  },
  {
    "calibration_trigger",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hand_msgs__msg__TactileCmd, calibration_trigger),  // bytes offset in struct
    NULL,  // default value
    hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__size_function__TactileCmd__calibration_trigger,  // size() function pointer
    hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__get_const_function__TactileCmd__calibration_trigger,  // get_const(index) function pointer
    hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__get_function__TactileCmd__calibration_trigger,  // get(index) function pointer
    hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__fetch_function__TactileCmd__calibration_trigger,  // fetch(index, &value) function pointer
    hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__assign_function__TactileCmd__calibration_trigger,  // assign(index, value) function pointer
    hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__resize_function__TactileCmd__calibration_trigger  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__TactileCmd_message_members = {
  "hand_msgs__msg",  // message namespace
  "TactileCmd",  // message name
  5,  // number of fields
  sizeof(hand_msgs__msg__TactileCmd),
  false,  // has_any_key_member_
  hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__TactileCmd_message_member_array,  // message members
  hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__TactileCmd_init_function,  // function to initialize message memory (memory has to be allocated)
  hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__TactileCmd_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__TactileCmd_message_type_support_handle = {
  0,
  &hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__TactileCmd_message_members,
  get_message_typesupport_handle_function,
  &hand_msgs__msg__TactileCmd__get_type_hash,
  &hand_msgs__msg__TactileCmd__get_type_description,
  &hand_msgs__msg__TactileCmd__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hand_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hand_msgs, msg, TactileCmd)() {
  hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__TactileCmd_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__TactileCmd_message_type_support_handle.typesupport_identifier) {
    hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__TactileCmd_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hand_msgs__msg__TactileCmd__rosidl_typesupport_introspection_c__TactileCmd_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
