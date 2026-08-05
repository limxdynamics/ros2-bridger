// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from hand_msgs:msg/TactileHandState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "hand_msgs/msg/detail/tactile_hand_state__rosidl_typesupport_introspection_c.h"
#include "hand_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "hand_msgs/msg/detail/tactile_hand_state__functions.h"
#include "hand_msgs/msg/detail/tactile_hand_state__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `hand_type`
#include "rosidl_runtime_c/string_functions.h"
// Member `hand_state`
#include "hand_msgs/msg/hand_msg.h"
// Member `hand_state`
#include "hand_msgs/msg/detail/hand_msg__rosidl_typesupport_introspection_c.h"
// Member `hand_tactile_state`
#include "hand_msgs/msg/tactile_state.h"
// Member `hand_tactile_state`
#include "hand_msgs/msg/detail/tactile_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TactileHandState__rosidl_typesupport_introspection_c__TactileHandState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hand_msgs__msg__TactileHandState__init(message_memory);
}

void TactileHandState__rosidl_typesupport_introspection_c__TactileHandState_fini_function(void * message_memory)
{
  hand_msgs__msg__TactileHandState__fini(message_memory);
}

size_t TactileHandState__rosidl_typesupport_introspection_c__size_function__HandMsg__hand_state(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * TactileHandState__rosidl_typesupport_introspection_c__get_const_function__HandMsg__hand_state(
  const void * untyped_member, size_t index)
{
  const hand_msgs__msg__HandMsg ** member =
    (const hand_msgs__msg__HandMsg **)(untyped_member);
  return &(*member)[index];
}

void * TactileHandState__rosidl_typesupport_introspection_c__get_function__HandMsg__hand_state(
  void * untyped_member, size_t index)
{
  hand_msgs__msg__HandMsg ** member =
    (hand_msgs__msg__HandMsg **)(untyped_member);
  return &(*member)[index];
}

size_t TactileHandState__rosidl_typesupport_introspection_c__size_function__TactileState__hand_tactile_state(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * TactileHandState__rosidl_typesupport_introspection_c__get_const_function__TactileState__hand_tactile_state(
  const void * untyped_member, size_t index)
{
  const hand_msgs__msg__TactileState ** member =
    (const hand_msgs__msg__TactileState **)(untyped_member);
  return &(*member)[index];
}

void * TactileHandState__rosidl_typesupport_introspection_c__get_function__TactileState__hand_tactile_state(
  void * untyped_member, size_t index)
{
  hand_msgs__msg__TactileState ** member =
    (hand_msgs__msg__TactileState **)(untyped_member);
  return &(*member)[index];
}

static rosidl_typesupport_introspection_c__MessageMember TactileHandState__rosidl_typesupport_introspection_c__TactileHandState_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hand_msgs__msg__TactileHandState, header),  // bytes offset in struct
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
    offsetof(hand_msgs__msg__TactileHandState, hand_type),  // bytes offset in struct
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
    offsetof(hand_msgs__msg__TactileHandState, ctrl_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "hand_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(hand_msgs__msg__TactileHandState, hand_state),  // bytes offset in struct
    NULL,  // default value
    TactileHandState__rosidl_typesupport_introspection_c__size_function__HandMsg__hand_state,  // size() function pointer
    TactileHandState__rosidl_typesupport_introspection_c__get_const_function__HandMsg__hand_state,  // get_const(index) function pointer
    TactileHandState__rosidl_typesupport_introspection_c__get_function__HandMsg__hand_state,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "hand_tactile_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(hand_msgs__msg__TactileHandState, hand_tactile_state),  // bytes offset in struct
    NULL,  // default value
    TactileHandState__rosidl_typesupport_introspection_c__size_function__TactileState__hand_tactile_state,  // size() function pointer
    TactileHandState__rosidl_typesupport_introspection_c__get_const_function__TactileState__hand_tactile_state,  // get_const(index) function pointer
    TactileHandState__rosidl_typesupport_introspection_c__get_function__TactileState__hand_tactile_state,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TactileHandState__rosidl_typesupport_introspection_c__TactileHandState_message_members = {
  "hand_msgs__msg",  // message namespace
  "TactileHandState",  // message name
  5,  // number of fields
  sizeof(hand_msgs__msg__TactileHandState),
  TactileHandState__rosidl_typesupport_introspection_c__TactileHandState_message_member_array,  // message members
  TactileHandState__rosidl_typesupport_introspection_c__TactileHandState_init_function,  // function to initialize message memory (memory has to be allocated)
  TactileHandState__rosidl_typesupport_introspection_c__TactileHandState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TactileHandState__rosidl_typesupport_introspection_c__TactileHandState_message_type_support_handle = {
  0,
  &TactileHandState__rosidl_typesupport_introspection_c__TactileHandState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hand_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hand_msgs, msg, TactileHandState)() {
  TactileHandState__rosidl_typesupport_introspection_c__TactileHandState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  TactileHandState__rosidl_typesupport_introspection_c__TactileHandState_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hand_msgs, msg, HandMsg)();
  TactileHandState__rosidl_typesupport_introspection_c__TactileHandState_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hand_msgs, msg, TactileState)();
  if (!TactileHandState__rosidl_typesupport_introspection_c__TactileHandState_message_type_support_handle.typesupport_identifier) {
    TactileHandState__rosidl_typesupport_introspection_c__TactileHandState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TactileHandState__rosidl_typesupport_introspection_c__TactileHandState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
