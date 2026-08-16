// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from teleop_msgs:msg/TeleopSessionState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "teleop_msgs/msg/detail/teleop_session_state__rosidl_typesupport_introspection_c.h"
#include "teleop_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "teleop_msgs/msg/detail/teleop_session_state__functions.h"
#include "teleop_msgs/msg/detail/teleop_session_state__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `mode`
// Member `fault_detail`
#include "rosidl_runtime_c/string_functions.h"
// Member `limbs`
#include "teleop_msgs/msg/teleop_limb_state.h"
// Member `limbs`
#include "teleop_msgs/msg/detail/teleop_limb_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TeleopSessionState__rosidl_typesupport_introspection_c__TeleopSessionState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  teleop_msgs__msg__TeleopSessionState__init(message_memory);
}

void TeleopSessionState__rosidl_typesupport_introspection_c__TeleopSessionState_fini_function(void * message_memory)
{
  teleop_msgs__msg__TeleopSessionState__fini(message_memory);
}

size_t TeleopSessionState__rosidl_typesupport_introspection_c__size_function__TeleopLimbState__limbs(
  const void * untyped_member)
{
  const teleop_msgs__msg__TeleopLimbState__Sequence * member =
    (const teleop_msgs__msg__TeleopLimbState__Sequence *)(untyped_member);
  return member->size;
}

const void * TeleopSessionState__rosidl_typesupport_introspection_c__get_const_function__TeleopLimbState__limbs(
  const void * untyped_member, size_t index)
{
  const teleop_msgs__msg__TeleopLimbState__Sequence * member =
    (const teleop_msgs__msg__TeleopLimbState__Sequence *)(untyped_member);
  return &member->data[index];
}

void * TeleopSessionState__rosidl_typesupport_introspection_c__get_function__TeleopLimbState__limbs(
  void * untyped_member, size_t index)
{
  teleop_msgs__msg__TeleopLimbState__Sequence * member =
    (teleop_msgs__msg__TeleopLimbState__Sequence *)(untyped_member);
  return &member->data[index];
}

bool TeleopSessionState__rosidl_typesupport_introspection_c__resize_function__TeleopLimbState__limbs(
  void * untyped_member, size_t size)
{
  teleop_msgs__msg__TeleopLimbState__Sequence * member =
    (teleop_msgs__msg__TeleopLimbState__Sequence *)(untyped_member);
  teleop_msgs__msg__TeleopLimbState__Sequence__fini(member);
  return teleop_msgs__msg__TeleopLimbState__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember TeleopSessionState__rosidl_typesupport_introspection_c__TeleopSessionState_message_member_array[9] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(teleop_msgs__msg__TeleopSessionState, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "schema_version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(teleop_msgs__msg__TeleopSessionState, schema_version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "session_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(teleop_msgs__msg__TeleopSessionState, session_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(teleop_msgs__msg__TeleopSessionState, mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "limbs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(teleop_msgs__msg__TeleopSessionState, limbs),  // bytes offset in struct
    NULL,  // default value
    TeleopSessionState__rosidl_typesupport_introspection_c__size_function__TeleopLimbState__limbs,  // size() function pointer
    TeleopSessionState__rosidl_typesupport_introspection_c__get_const_function__TeleopLimbState__limbs,  // get_const(index) function pointer
    TeleopSessionState__rosidl_typesupport_introspection_c__get_function__TeleopLimbState__limbs,  // get(index) function pointer
    TeleopSessionState__rosidl_typesupport_introspection_c__resize_function__TeleopLimbState__limbs  // resize(index) function pointer
  },
  {
    "reanchor_epoch",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(teleop_msgs__msg__TeleopSessionState, reanchor_epoch),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "retarget_required",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(teleop_msgs__msg__TeleopSessionState, retarget_required),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fault_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(teleop_msgs__msg__TeleopSessionState, fault_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fault_detail",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(teleop_msgs__msg__TeleopSessionState, fault_detail),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TeleopSessionState__rosidl_typesupport_introspection_c__TeleopSessionState_message_members = {
  "teleop_msgs__msg",  // message namespace
  "TeleopSessionState",  // message name
  9,  // number of fields
  sizeof(teleop_msgs__msg__TeleopSessionState),
  TeleopSessionState__rosidl_typesupport_introspection_c__TeleopSessionState_message_member_array,  // message members
  TeleopSessionState__rosidl_typesupport_introspection_c__TeleopSessionState_init_function,  // function to initialize message memory (memory has to be allocated)
  TeleopSessionState__rosidl_typesupport_introspection_c__TeleopSessionState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TeleopSessionState__rosidl_typesupport_introspection_c__TeleopSessionState_message_type_support_handle = {
  0,
  &TeleopSessionState__rosidl_typesupport_introspection_c__TeleopSessionState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_teleop_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, teleop_msgs, msg, TeleopSessionState)() {
  TeleopSessionState__rosidl_typesupport_introspection_c__TeleopSessionState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  TeleopSessionState__rosidl_typesupport_introspection_c__TeleopSessionState_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, teleop_msgs, msg, TeleopLimbState)();
  if (!TeleopSessionState__rosidl_typesupport_introspection_c__TeleopSessionState_message_type_support_handle.typesupport_identifier) {
    TeleopSessionState__rosidl_typesupport_introspection_c__TeleopSessionState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TeleopSessionState__rosidl_typesupport_introspection_c__TeleopSessionState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
