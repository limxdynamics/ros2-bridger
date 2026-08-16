// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from teleop_msgs:msg/TeleopIntentFrame.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "teleop_msgs/msg/detail/teleop_intent_frame__rosidl_typesupport_introspection_c.h"
#include "teleop_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "teleop_msgs/msg/detail/teleop_intent_frame__functions.h"
#include "teleop_msgs/msg/detail/teleop_intent_frame__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `reference_frame`
#include "rosidl_runtime_c/string_functions.h"
// Member `reference_pose`
#include "geometry_msgs/msg/pose.h"
// Member `reference_pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `targets`
#include "teleop_msgs/msg/teleop_target.h"
// Member `targets`
#include "teleop_msgs/msg/detail/teleop_target__rosidl_typesupport_introspection_c.h"
// Member `raw`
#include "teleop_msgs/msg/teleop_raw_input.h"
// Member `raw`
#include "teleop_msgs/msg/detail/teleop_raw_input__rosidl_typesupport_introspection_c.h"
// Member `retarget_joints`
#include "controller_msgs/msg/joint_cmd.h"
// Member `retarget_joints`
#include "controller_msgs/msg/detail/joint_cmd__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TeleopIntentFrame__rosidl_typesupport_introspection_c__TeleopIntentFrame_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  teleop_msgs__msg__TeleopIntentFrame__init(message_memory);
}

void TeleopIntentFrame__rosidl_typesupport_introspection_c__TeleopIntentFrame_fini_function(void * message_memory)
{
  teleop_msgs__msg__TeleopIntentFrame__fini(message_memory);
}

size_t TeleopIntentFrame__rosidl_typesupport_introspection_c__size_function__TeleopTarget__targets(
  const void * untyped_member)
{
  const teleop_msgs__msg__TeleopTarget__Sequence * member =
    (const teleop_msgs__msg__TeleopTarget__Sequence *)(untyped_member);
  return member->size;
}

const void * TeleopIntentFrame__rosidl_typesupport_introspection_c__get_const_function__TeleopTarget__targets(
  const void * untyped_member, size_t index)
{
  const teleop_msgs__msg__TeleopTarget__Sequence * member =
    (const teleop_msgs__msg__TeleopTarget__Sequence *)(untyped_member);
  return &member->data[index];
}

void * TeleopIntentFrame__rosidl_typesupport_introspection_c__get_function__TeleopTarget__targets(
  void * untyped_member, size_t index)
{
  teleop_msgs__msg__TeleopTarget__Sequence * member =
    (teleop_msgs__msg__TeleopTarget__Sequence *)(untyped_member);
  return &member->data[index];
}

bool TeleopIntentFrame__rosidl_typesupport_introspection_c__resize_function__TeleopTarget__targets(
  void * untyped_member, size_t size)
{
  teleop_msgs__msg__TeleopTarget__Sequence * member =
    (teleop_msgs__msg__TeleopTarget__Sequence *)(untyped_member);
  teleop_msgs__msg__TeleopTarget__Sequence__fini(member);
  return teleop_msgs__msg__TeleopTarget__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember TeleopIntentFrame__rosidl_typesupport_introspection_c__TeleopIntentFrame_message_member_array[12] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(teleop_msgs__msg__TeleopIntentFrame, header),  // bytes offset in struct
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
    offsetof(teleop_msgs__msg__TeleopIntentFrame, schema_version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "source",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(teleop_msgs__msg__TeleopIntentFrame, source),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "source_mask",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(teleop_msgs__msg__TeleopIntentFrame, source_mask),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reference_frame",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(teleop_msgs__msg__TeleopIntentFrame, reference_frame),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reference_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(teleop_msgs__msg__TeleopIntentFrame, reference_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "targets",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(teleop_msgs__msg__TeleopIntentFrame, targets),  // bytes offset in struct
    NULL,  // default value
    TeleopIntentFrame__rosidl_typesupport_introspection_c__size_function__TeleopTarget__targets,  // size() function pointer
    TeleopIntentFrame__rosidl_typesupport_introspection_c__get_const_function__TeleopTarget__targets,  // get_const(index) function pointer
    TeleopIntentFrame__rosidl_typesupport_introspection_c__get_function__TeleopTarget__targets,  // get(index) function pointer
    TeleopIntentFrame__rosidl_typesupport_introspection_c__resize_function__TeleopTarget__targets  // resize(index) function pointer
  },
  {
    "raw_valid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(teleop_msgs__msg__TeleopIntentFrame, raw_valid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "raw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(teleop_msgs__msg__TeleopIntentFrame, raw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "head_control_selected",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(teleop_msgs__msg__TeleopIntentFrame, head_control_selected),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "retarget_valid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(teleop_msgs__msg__TeleopIntentFrame, retarget_valid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "retarget_joints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(teleop_msgs__msg__TeleopIntentFrame, retarget_joints),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TeleopIntentFrame__rosidl_typesupport_introspection_c__TeleopIntentFrame_message_members = {
  "teleop_msgs__msg",  // message namespace
  "TeleopIntentFrame",  // message name
  12,  // number of fields
  sizeof(teleop_msgs__msg__TeleopIntentFrame),
  TeleopIntentFrame__rosidl_typesupport_introspection_c__TeleopIntentFrame_message_member_array,  // message members
  TeleopIntentFrame__rosidl_typesupport_introspection_c__TeleopIntentFrame_init_function,  // function to initialize message memory (memory has to be allocated)
  TeleopIntentFrame__rosidl_typesupport_introspection_c__TeleopIntentFrame_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TeleopIntentFrame__rosidl_typesupport_introspection_c__TeleopIntentFrame_message_type_support_handle = {
  0,
  &TeleopIntentFrame__rosidl_typesupport_introspection_c__TeleopIntentFrame_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_teleop_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, teleop_msgs, msg, TeleopIntentFrame)() {
  TeleopIntentFrame__rosidl_typesupport_introspection_c__TeleopIntentFrame_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  TeleopIntentFrame__rosidl_typesupport_introspection_c__TeleopIntentFrame_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  TeleopIntentFrame__rosidl_typesupport_introspection_c__TeleopIntentFrame_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, teleop_msgs, msg, TeleopTarget)();
  TeleopIntentFrame__rosidl_typesupport_introspection_c__TeleopIntentFrame_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, teleop_msgs, msg, TeleopRawInput)();
  TeleopIntentFrame__rosidl_typesupport_introspection_c__TeleopIntentFrame_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_msgs, msg, JointCmd)();
  if (!TeleopIntentFrame__rosidl_typesupport_introspection_c__TeleopIntentFrame_message_type_support_handle.typesupport_identifier) {
    TeleopIntentFrame__rosidl_typesupport_introspection_c__TeleopIntentFrame_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TeleopIntentFrame__rosidl_typesupport_introspection_c__TeleopIntentFrame_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
