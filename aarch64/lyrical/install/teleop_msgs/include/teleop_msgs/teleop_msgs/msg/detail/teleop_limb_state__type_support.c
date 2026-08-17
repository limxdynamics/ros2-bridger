// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from teleop_msgs:msg/TeleopLimbState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "teleop_msgs/msg/detail/teleop_limb_state__rosidl_typesupport_introspection_c.h"
#include "teleop_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "teleop_msgs/msg/detail/teleop_limb_state__functions.h"
#include "teleop_msgs/msg/detail/teleop_limb_state__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void teleop_msgs__msg__TeleopLimbState__rosidl_typesupport_introspection_c__TeleopLimbState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  teleop_msgs__msg__TeleopLimbState__init(message_memory);
}

void teleop_msgs__msg__TeleopLimbState__rosidl_typesupport_introspection_c__TeleopLimbState_fini_function(void * message_memory)
{
  teleop_msgs__msg__TeleopLimbState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember teleop_msgs__msg__TeleopLimbState__rosidl_typesupport_introspection_c__TeleopLimbState_message_member_array[4] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(teleop_msgs__msg__TeleopLimbState, name),  // bytes offset in struct
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
    "following",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(teleop_msgs__msg__TeleopLimbState, following),  // bytes offset in struct
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
    "ee_closure_enabled",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(teleop_msgs__msg__TeleopLimbState, ee_closure_enabled),  // bytes offset in struct
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
    "ee_gesture_index",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(teleop_msgs__msg__TeleopLimbState, ee_gesture_index),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers teleop_msgs__msg__TeleopLimbState__rosidl_typesupport_introspection_c__TeleopLimbState_message_members = {
  "teleop_msgs__msg",  // message namespace
  "TeleopLimbState",  // message name
  4,  // number of fields
  sizeof(teleop_msgs__msg__TeleopLimbState),
  false,  // has_any_key_member_
  teleop_msgs__msg__TeleopLimbState__rosidl_typesupport_introspection_c__TeleopLimbState_message_member_array,  // message members
  teleop_msgs__msg__TeleopLimbState__rosidl_typesupport_introspection_c__TeleopLimbState_init_function,  // function to initialize message memory (memory has to be allocated)
  teleop_msgs__msg__TeleopLimbState__rosidl_typesupport_introspection_c__TeleopLimbState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t teleop_msgs__msg__TeleopLimbState__rosidl_typesupport_introspection_c__TeleopLimbState_message_type_support_handle = {
  0,
  &teleop_msgs__msg__TeleopLimbState__rosidl_typesupport_introspection_c__TeleopLimbState_message_members,
  get_message_typesupport_handle_function,
  &teleop_msgs__msg__TeleopLimbState__get_type_hash,
  &teleop_msgs__msg__TeleopLimbState__get_type_description,
  &teleop_msgs__msg__TeleopLimbState__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_teleop_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, teleop_msgs, msg, TeleopLimbState)() {
  if (!teleop_msgs__msg__TeleopLimbState__rosidl_typesupport_introspection_c__TeleopLimbState_message_type_support_handle.typesupport_identifier) {
    teleop_msgs__msg__TeleopLimbState__rosidl_typesupport_introspection_c__TeleopLimbState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &teleop_msgs__msg__TeleopLimbState__rosidl_typesupport_introspection_c__TeleopLimbState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
