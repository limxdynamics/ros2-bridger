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

void TactileState__rosidl_typesupport_introspection_c__TactileState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hand_msgs__msg__TactileState__init(message_memory);
}

void TactileState__rosidl_typesupport_introspection_c__TactileState_fini_function(void * message_memory)
{
  hand_msgs__msg__TactileState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TactileState__rosidl_typesupport_introspection_c__TactileState_message_member_array[7] = {
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
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
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
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
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
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
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
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
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
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
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
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TactileState__rosidl_typesupport_introspection_c__TactileState_message_members = {
  "hand_msgs__msg",  // message namespace
  "TactileState",  // message name
  7,  // number of fields
  sizeof(hand_msgs__msg__TactileState),
  TactileState__rosidl_typesupport_introspection_c__TactileState_message_member_array,  // message members
  TactileState__rosidl_typesupport_introspection_c__TactileState_init_function,  // function to initialize message memory (memory has to be allocated)
  TactileState__rosidl_typesupport_introspection_c__TactileState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TactileState__rosidl_typesupport_introspection_c__TactileState_message_type_support_handle = {
  0,
  &TactileState__rosidl_typesupport_introspection_c__TactileState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hand_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hand_msgs, msg, TactileState)() {
  TactileState__rosidl_typesupport_introspection_c__TactileState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!TactileState__rosidl_typesupport_introspection_c__TactileState_message_type_support_handle.typesupport_identifier) {
    TactileState__rosidl_typesupport_introspection_c__TactileState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TactileState__rosidl_typesupport_introspection_c__TactileState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
