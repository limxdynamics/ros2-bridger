// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from limx_arm_msgs:msg/JointSet.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "limx_arm_msgs/msg/detail/joint_set__rosidl_typesupport_introspection_c.h"
#include "limx_arm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "limx_arm_msgs/msg/detail/joint_set__functions.h"
#include "limx_arm_msgs/msg/detail/joint_set__struct.h"


// Include directives for member types
// Member `deviceid`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void JointSet__rosidl_typesupport_introspection_c__JointSet_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  limx_arm_msgs__msg__JointSet__init(message_memory);
}

void JointSet__rosidl_typesupport_introspection_c__JointSet_fini_function(void * message_memory)
{
  limx_arm_msgs__msg__JointSet__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember JointSet__rosidl_typesupport_introspection_c__JointSet_message_member_array[5] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(limx_arm_msgs__msg__JointSet, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "deviceid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(limx_arm_msgs__msg__JointSet, deviceid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "action",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(limx_arm_msgs__msg__JointSet, action),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(limx_arm_msgs__msg__JointSet, mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(limx_arm_msgs__msg__JointSet, data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers JointSet__rosidl_typesupport_introspection_c__JointSet_message_members = {
  "limx_arm_msgs__msg",  // message namespace
  "JointSet",  // message name
  5,  // number of fields
  sizeof(limx_arm_msgs__msg__JointSet),
  JointSet__rosidl_typesupport_introspection_c__JointSet_message_member_array,  // message members
  JointSet__rosidl_typesupport_introspection_c__JointSet_init_function,  // function to initialize message memory (memory has to be allocated)
  JointSet__rosidl_typesupport_introspection_c__JointSet_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t JointSet__rosidl_typesupport_introspection_c__JointSet_message_type_support_handle = {
  0,
  &JointSet__rosidl_typesupport_introspection_c__JointSet_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_limx_arm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, limx_arm_msgs, msg, JointSet)() {
  if (!JointSet__rosidl_typesupport_introspection_c__JointSet_message_type_support_handle.typesupport_identifier) {
    JointSet__rosidl_typesupport_introspection_c__JointSet_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &JointSet__rosidl_typesupport_introspection_c__JointSet_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
