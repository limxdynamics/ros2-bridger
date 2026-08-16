// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mros_msgs:msg/NodeInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mros_msgs/msg/detail/node_info__rosidl_typesupport_introspection_c.h"
#include "mros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mros_msgs/msg/detail/node_info__functions.h"
#include "mros_msgs/msg/detail/node_info__struct.h"


// Include directives for member types
// Member `node_name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void NodeInfo__rosidl_typesupport_introspection_c__NodeInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mros_msgs__msg__NodeInfo__init(message_memory);
}

void NodeInfo__rosidl_typesupport_introspection_c__NodeInfo_fini_function(void * message_memory)
{
  mros_msgs__msg__NodeInfo__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember NodeInfo__rosidl_typesupport_introspection_c__NodeInfo_message_member_array[1] = {
  {
    "node_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mros_msgs__msg__NodeInfo, node_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers NodeInfo__rosidl_typesupport_introspection_c__NodeInfo_message_members = {
  "mros_msgs__msg",  // message namespace
  "NodeInfo",  // message name
  1,  // number of fields
  sizeof(mros_msgs__msg__NodeInfo),
  NodeInfo__rosidl_typesupport_introspection_c__NodeInfo_message_member_array,  // message members
  NodeInfo__rosidl_typesupport_introspection_c__NodeInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  NodeInfo__rosidl_typesupport_introspection_c__NodeInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t NodeInfo__rosidl_typesupport_introspection_c__NodeInfo_message_type_support_handle = {
  0,
  &NodeInfo__rosidl_typesupport_introspection_c__NodeInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mros_msgs, msg, NodeInfo)() {
  if (!NodeInfo__rosidl_typesupport_introspection_c__NodeInfo_message_type_support_handle.typesupport_identifier) {
    NodeInfo__rosidl_typesupport_introspection_c__NodeInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &NodeInfo__rosidl_typesupport_introspection_c__NodeInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
