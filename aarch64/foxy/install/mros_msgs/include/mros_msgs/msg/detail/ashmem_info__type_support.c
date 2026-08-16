// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mros_msgs:msg/AshmemInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mros_msgs/msg/detail/ashmem_info__rosidl_typesupport_introspection_c.h"
#include "mros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mros_msgs/msg/detail/ashmem_info__functions.h"
#include "mros_msgs/msg/detail/ashmem_info__struct.h"


// Include directives for member types
// Member `topic_name`
// Member `message_type`
// Member `message_md5sum`
// Member `message_definition`
// Member `identity`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void AshmemInfo__rosidl_typesupport_introspection_c__AshmemInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mros_msgs__msg__AshmemInfo__init(message_memory);
}

void AshmemInfo__rosidl_typesupport_introspection_c__AshmemInfo_fini_function(void * message_memory)
{
  mros_msgs__msg__AshmemInfo__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember AshmemInfo__rosidl_typesupport_introspection_c__AshmemInfo_message_member_array[9] = {
  {
    "topic_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mros_msgs__msg__AshmemInfo, topic_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "topic_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mros_msgs__msg__AshmemInfo, topic_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mros_msgs__msg__AshmemInfo, message_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message_md5sum",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mros_msgs__msg__AshmemInfo, message_md5sum),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message_definition",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mros_msgs__msg__AshmemInfo, message_definition),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "shm_seed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mros_msgs__msg__AshmemInfo, shm_seed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "shm_size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mros_msgs__msg__AshmemInfo, shm_size),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "msg_size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mros_msgs__msg__AshmemInfo, msg_size),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "identity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mros_msgs__msg__AshmemInfo, identity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AshmemInfo__rosidl_typesupport_introspection_c__AshmemInfo_message_members = {
  "mros_msgs__msg",  // message namespace
  "AshmemInfo",  // message name
  9,  // number of fields
  sizeof(mros_msgs__msg__AshmemInfo),
  AshmemInfo__rosidl_typesupport_introspection_c__AshmemInfo_message_member_array,  // message members
  AshmemInfo__rosidl_typesupport_introspection_c__AshmemInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  AshmemInfo__rosidl_typesupport_introspection_c__AshmemInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AshmemInfo__rosidl_typesupport_introspection_c__AshmemInfo_message_type_support_handle = {
  0,
  &AshmemInfo__rosidl_typesupport_introspection_c__AshmemInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mros_msgs, msg, AshmemInfo)() {
  if (!AshmemInfo__rosidl_typesupport_introspection_c__AshmemInfo_message_type_support_handle.typesupport_identifier) {
    AshmemInfo__rosidl_typesupport_introspection_c__AshmemInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AshmemInfo__rosidl_typesupport_introspection_c__AshmemInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
