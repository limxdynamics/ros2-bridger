// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from teleop_msgs:msg/TeleopMsg.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "teleop_msgs/msg/detail/teleop_msg__rosidl_typesupport_introspection_c.h"
#include "teleop_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "teleop_msgs/msg/detail/teleop_msg__functions.h"
#include "teleop_msgs/msg/detail/teleop_msg__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `world`
#include "geometry_msgs/msg/pose.h"
// Member `world`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `anchors`
#include "teleop_msgs/msg/key_point.h"
// Member `anchors`
#include "teleop_msgs/msg/detail/key_point__rosidl_typesupport_introspection_c.h"
// Member `joint_cmd`
#include "controller_msgs/msg/joint_cmd.h"
// Member `joint_cmd`
#include "controller_msgs/msg/detail/joint_cmd__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void teleop_msgs__msg__TeleopMsg__rosidl_typesupport_introspection_c__TeleopMsg_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  teleop_msgs__msg__TeleopMsg__init(message_memory);
}

void teleop_msgs__msg__TeleopMsg__rosidl_typesupport_introspection_c__TeleopMsg_fini_function(void * message_memory)
{
  teleop_msgs__msg__TeleopMsg__fini(message_memory);
}

size_t teleop_msgs__msg__TeleopMsg__rosidl_typesupport_introspection_c__size_function__TeleopMsg__anchors(
  const void * untyped_member)
{
  const teleop_msgs__msg__KeyPoint__Sequence * member =
    (const teleop_msgs__msg__KeyPoint__Sequence *)(untyped_member);
  return member->size;
}

const void * teleop_msgs__msg__TeleopMsg__rosidl_typesupport_introspection_c__get_const_function__TeleopMsg__anchors(
  const void * untyped_member, size_t index)
{
  const teleop_msgs__msg__KeyPoint__Sequence * member =
    (const teleop_msgs__msg__KeyPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * teleop_msgs__msg__TeleopMsg__rosidl_typesupport_introspection_c__get_function__TeleopMsg__anchors(
  void * untyped_member, size_t index)
{
  teleop_msgs__msg__KeyPoint__Sequence * member =
    (teleop_msgs__msg__KeyPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void teleop_msgs__msg__TeleopMsg__rosidl_typesupport_introspection_c__fetch_function__TeleopMsg__anchors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const teleop_msgs__msg__KeyPoint * item =
    ((const teleop_msgs__msg__KeyPoint *)
    teleop_msgs__msg__TeleopMsg__rosidl_typesupport_introspection_c__get_const_function__TeleopMsg__anchors(untyped_member, index));
  teleop_msgs__msg__KeyPoint * value =
    (teleop_msgs__msg__KeyPoint *)(untyped_value);
  *value = *item;
}

void teleop_msgs__msg__TeleopMsg__rosidl_typesupport_introspection_c__assign_function__TeleopMsg__anchors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  teleop_msgs__msg__KeyPoint * item =
    ((teleop_msgs__msg__KeyPoint *)
    teleop_msgs__msg__TeleopMsg__rosidl_typesupport_introspection_c__get_function__TeleopMsg__anchors(untyped_member, index));
  const teleop_msgs__msg__KeyPoint * value =
    (const teleop_msgs__msg__KeyPoint *)(untyped_value);
  *item = *value;
}

bool teleop_msgs__msg__TeleopMsg__rosidl_typesupport_introspection_c__resize_function__TeleopMsg__anchors(
  void * untyped_member, size_t size)
{
  teleop_msgs__msg__KeyPoint__Sequence * member =
    (teleop_msgs__msg__KeyPoint__Sequence *)(untyped_member);
  teleop_msgs__msg__KeyPoint__Sequence__fini(member);
  return teleop_msgs__msg__KeyPoint__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember teleop_msgs__msg__TeleopMsg__rosidl_typesupport_introspection_c__TeleopMsg_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(teleop_msgs__msg__TeleopMsg, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "world",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(teleop_msgs__msg__TeleopMsg, world),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "anchors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(teleop_msgs__msg__TeleopMsg, anchors),  // bytes offset in struct
    NULL,  // default value
    teleop_msgs__msg__TeleopMsg__rosidl_typesupport_introspection_c__size_function__TeleopMsg__anchors,  // size() function pointer
    teleop_msgs__msg__TeleopMsg__rosidl_typesupport_introspection_c__get_const_function__TeleopMsg__anchors,  // get_const(index) function pointer
    teleop_msgs__msg__TeleopMsg__rosidl_typesupport_introspection_c__get_function__TeleopMsg__anchors,  // get(index) function pointer
    teleop_msgs__msg__TeleopMsg__rosidl_typesupport_introspection_c__fetch_function__TeleopMsg__anchors,  // fetch(index, &value) function pointer
    teleop_msgs__msg__TeleopMsg__rosidl_typesupport_introspection_c__assign_function__TeleopMsg__anchors,  // assign(index, value) function pointer
    teleop_msgs__msg__TeleopMsg__rosidl_typesupport_introspection_c__resize_function__TeleopMsg__anchors  // resize(index) function pointer
  },
  {
    "joint_cmd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(teleop_msgs__msg__TeleopMsg, joint_cmd),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers teleop_msgs__msg__TeleopMsg__rosidl_typesupport_introspection_c__TeleopMsg_message_members = {
  "teleop_msgs__msg",  // message namespace
  "TeleopMsg",  // message name
  4,  // number of fields
  sizeof(teleop_msgs__msg__TeleopMsg),
  false,  // has_any_key_member_
  teleop_msgs__msg__TeleopMsg__rosidl_typesupport_introspection_c__TeleopMsg_message_member_array,  // message members
  teleop_msgs__msg__TeleopMsg__rosidl_typesupport_introspection_c__TeleopMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  teleop_msgs__msg__TeleopMsg__rosidl_typesupport_introspection_c__TeleopMsg_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t teleop_msgs__msg__TeleopMsg__rosidl_typesupport_introspection_c__TeleopMsg_message_type_support_handle = {
  0,
  &teleop_msgs__msg__TeleopMsg__rosidl_typesupport_introspection_c__TeleopMsg_message_members,
  get_message_typesupport_handle_function,
  &teleop_msgs__msg__TeleopMsg__get_type_hash,
  &teleop_msgs__msg__TeleopMsg__get_type_description,
  &teleop_msgs__msg__TeleopMsg__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_teleop_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, teleop_msgs, msg, TeleopMsg)() {
  teleop_msgs__msg__TeleopMsg__rosidl_typesupport_introspection_c__TeleopMsg_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  teleop_msgs__msg__TeleopMsg__rosidl_typesupport_introspection_c__TeleopMsg_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  teleop_msgs__msg__TeleopMsg__rosidl_typesupport_introspection_c__TeleopMsg_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, teleop_msgs, msg, KeyPoint)();
  teleop_msgs__msg__TeleopMsg__rosidl_typesupport_introspection_c__TeleopMsg_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_msgs, msg, JointCmd)();
  if (!teleop_msgs__msg__TeleopMsg__rosidl_typesupport_introspection_c__TeleopMsg_message_type_support_handle.typesupport_identifier) {
    teleop_msgs__msg__TeleopMsg__rosidl_typesupport_introspection_c__TeleopMsg_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &teleop_msgs__msg__TeleopMsg__rosidl_typesupport_introspection_c__TeleopMsg_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
