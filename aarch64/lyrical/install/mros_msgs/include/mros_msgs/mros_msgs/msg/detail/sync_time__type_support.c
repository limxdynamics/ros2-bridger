// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mros_msgs:msg/SyncTime.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mros_msgs/msg/detail/sync_time__rosidl_typesupport_introspection_c.h"
#include "mros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mros_msgs/msg/detail/sync_time__functions.h"
#include "mros_msgs/msg/detail/sync_time__struct.h"


// Include directives for member types
// Member `data`
#include "builtin_interfaces/msg/time.h"
// Member `data`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mros_msgs__msg__SyncTime__rosidl_typesupport_introspection_c__SyncTime_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mros_msgs__msg__SyncTime__init(message_memory);
}

void mros_msgs__msg__SyncTime__rosidl_typesupport_introspection_c__SyncTime_fini_function(void * message_memory)
{
  mros_msgs__msg__SyncTime__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mros_msgs__msg__SyncTime__rosidl_typesupport_introspection_c__SyncTime_message_member_array[2] = {
  {
    "tick",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mros_msgs__msg__SyncTime, tick),  // bytes offset in struct
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
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mros_msgs__msg__SyncTime, data),  // bytes offset in struct
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

static const rosidl_typesupport_introspection_c__MessageMembers mros_msgs__msg__SyncTime__rosidl_typesupport_introspection_c__SyncTime_message_members = {
  "mros_msgs__msg",  // message namespace
  "SyncTime",  // message name
  2,  // number of fields
  sizeof(mros_msgs__msg__SyncTime),
  false,  // has_any_key_member_
  mros_msgs__msg__SyncTime__rosidl_typesupport_introspection_c__SyncTime_message_member_array,  // message members
  mros_msgs__msg__SyncTime__rosidl_typesupport_introspection_c__SyncTime_init_function,  // function to initialize message memory (memory has to be allocated)
  mros_msgs__msg__SyncTime__rosidl_typesupport_introspection_c__SyncTime_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mros_msgs__msg__SyncTime__rosidl_typesupport_introspection_c__SyncTime_message_type_support_handle = {
  0,
  &mros_msgs__msg__SyncTime__rosidl_typesupport_introspection_c__SyncTime_message_members,
  get_message_typesupport_handle_function,
  &mros_msgs__msg__SyncTime__get_type_hash,
  &mros_msgs__msg__SyncTime__get_type_description,
  &mros_msgs__msg__SyncTime__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mros_msgs, msg, SyncTime)() {
  mros_msgs__msg__SyncTime__rosidl_typesupport_introspection_c__SyncTime_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!mros_msgs__msg__SyncTime__rosidl_typesupport_introspection_c__SyncTime_message_type_support_handle.typesupport_identifier) {
    mros_msgs__msg__SyncTime__rosidl_typesupport_introspection_c__SyncTime_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mros_msgs__msg__SyncTime__rosidl_typesupport_introspection_c__SyncTime_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
