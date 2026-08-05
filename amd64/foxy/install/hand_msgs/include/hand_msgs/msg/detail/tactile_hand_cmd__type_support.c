// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from hand_msgs:msg/TactileHandCmd.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "hand_msgs/msg/detail/tactile_hand_cmd__rosidl_typesupport_introspection_c.h"
#include "hand_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "hand_msgs/msg/detail/tactile_hand_cmd__functions.h"
#include "hand_msgs/msg/detail/tactile_hand_cmd__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `hand_type`
#include "rosidl_runtime_c/string_functions.h"
// Member `hand_cmd`
#include "hand_msgs/msg/hand_msg.h"
// Member `hand_cmd`
#include "hand_msgs/msg/detail/hand_msg__rosidl_typesupport_introspection_c.h"
// Member `hand_tactile_cmd`
#include "hand_msgs/msg/tactile_cmd.h"
// Member `hand_tactile_cmd`
#include "hand_msgs/msg/detail/tactile_cmd__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TactileHandCmd__rosidl_typesupport_introspection_c__TactileHandCmd_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hand_msgs__msg__TactileHandCmd__init(message_memory);
}

void TactileHandCmd__rosidl_typesupport_introspection_c__TactileHandCmd_fini_function(void * message_memory)
{
  hand_msgs__msg__TactileHandCmd__fini(message_memory);
}

size_t TactileHandCmd__rosidl_typesupport_introspection_c__size_function__HandMsg__hand_cmd(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * TactileHandCmd__rosidl_typesupport_introspection_c__get_const_function__HandMsg__hand_cmd(
  const void * untyped_member, size_t index)
{
  const hand_msgs__msg__HandMsg ** member =
    (const hand_msgs__msg__HandMsg **)(untyped_member);
  return &(*member)[index];
}

void * TactileHandCmd__rosidl_typesupport_introspection_c__get_function__HandMsg__hand_cmd(
  void * untyped_member, size_t index)
{
  hand_msgs__msg__HandMsg ** member =
    (hand_msgs__msg__HandMsg **)(untyped_member);
  return &(*member)[index];
}

size_t TactileHandCmd__rosidl_typesupport_introspection_c__size_function__TactileCmd__hand_tactile_cmd(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * TactileHandCmd__rosidl_typesupport_introspection_c__get_const_function__TactileCmd__hand_tactile_cmd(
  const void * untyped_member, size_t index)
{
  const hand_msgs__msg__TactileCmd ** member =
    (const hand_msgs__msg__TactileCmd **)(untyped_member);
  return &(*member)[index];
}

void * TactileHandCmd__rosidl_typesupport_introspection_c__get_function__TactileCmd__hand_tactile_cmd(
  void * untyped_member, size_t index)
{
  hand_msgs__msg__TactileCmd ** member =
    (hand_msgs__msg__TactileCmd **)(untyped_member);
  return &(*member)[index];
}

static rosidl_typesupport_introspection_c__MessageMember TactileHandCmd__rosidl_typesupport_introspection_c__TactileHandCmd_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hand_msgs__msg__TactileHandCmd, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "hand_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hand_msgs__msg__TactileHandCmd, hand_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ctrl_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(hand_msgs__msg__TactileHandCmd, ctrl_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "hand_cmd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(hand_msgs__msg__TactileHandCmd, hand_cmd),  // bytes offset in struct
    NULL,  // default value
    TactileHandCmd__rosidl_typesupport_introspection_c__size_function__HandMsg__hand_cmd,  // size() function pointer
    TactileHandCmd__rosidl_typesupport_introspection_c__get_const_function__HandMsg__hand_cmd,  // get_const(index) function pointer
    TactileHandCmd__rosidl_typesupport_introspection_c__get_function__HandMsg__hand_cmd,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "hand_tactile_cmd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(hand_msgs__msg__TactileHandCmd, hand_tactile_cmd),  // bytes offset in struct
    NULL,  // default value
    TactileHandCmd__rosidl_typesupport_introspection_c__size_function__TactileCmd__hand_tactile_cmd,  // size() function pointer
    TactileHandCmd__rosidl_typesupport_introspection_c__get_const_function__TactileCmd__hand_tactile_cmd,  // get_const(index) function pointer
    TactileHandCmd__rosidl_typesupport_introspection_c__get_function__TactileCmd__hand_tactile_cmd,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TactileHandCmd__rosidl_typesupport_introspection_c__TactileHandCmd_message_members = {
  "hand_msgs__msg",  // message namespace
  "TactileHandCmd",  // message name
  5,  // number of fields
  sizeof(hand_msgs__msg__TactileHandCmd),
  TactileHandCmd__rosidl_typesupport_introspection_c__TactileHandCmd_message_member_array,  // message members
  TactileHandCmd__rosidl_typesupport_introspection_c__TactileHandCmd_init_function,  // function to initialize message memory (memory has to be allocated)
  TactileHandCmd__rosidl_typesupport_introspection_c__TactileHandCmd_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TactileHandCmd__rosidl_typesupport_introspection_c__TactileHandCmd_message_type_support_handle = {
  0,
  &TactileHandCmd__rosidl_typesupport_introspection_c__TactileHandCmd_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hand_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hand_msgs, msg, TactileHandCmd)() {
  TactileHandCmd__rosidl_typesupport_introspection_c__TactileHandCmd_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  TactileHandCmd__rosidl_typesupport_introspection_c__TactileHandCmd_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hand_msgs, msg, HandMsg)();
  TactileHandCmd__rosidl_typesupport_introspection_c__TactileHandCmd_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hand_msgs, msg, TactileCmd)();
  if (!TactileHandCmd__rosidl_typesupport_introspection_c__TactileHandCmd_message_type_support_handle.typesupport_identifier) {
    TactileHandCmd__rosidl_typesupport_introspection_c__TactileHandCmd_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TactileHandCmd__rosidl_typesupport_introspection_c__TactileHandCmd_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
