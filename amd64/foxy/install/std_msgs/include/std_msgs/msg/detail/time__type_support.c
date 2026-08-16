// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from std_msgs:msg/Time.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "std_msgs/msg/detail/time__rosidl_typesupport_introspection_c.h"
#include "std_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "std_msgs/msg/detail/time__functions.h"
#include "std_msgs/msg/detail/time__struct.h"


// Include directives for member types
// Member `data`
#include "builtin_interfaces/msg/time.h"
// Member `data`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Time__rosidl_typesupport_introspection_c__Time_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  std_msgs__msg__Time__init(message_memory);
}

void Time__rosidl_typesupport_introspection_c__Time_fini_function(void * message_memory)
{
  std_msgs__msg__Time__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Time__rosidl_typesupport_introspection_c__Time_message_member_array[1] = {
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(std_msgs__msg__Time, data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Time__rosidl_typesupport_introspection_c__Time_message_members = {
  "std_msgs__msg",  // message namespace
  "Time",  // message name
  1,  // number of fields
  sizeof(std_msgs__msg__Time),
  Time__rosidl_typesupport_introspection_c__Time_message_member_array,  // message members
  Time__rosidl_typesupport_introspection_c__Time_init_function,  // function to initialize message memory (memory has to be allocated)
  Time__rosidl_typesupport_introspection_c__Time_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Time__rosidl_typesupport_introspection_c__Time_message_type_support_handle = {
  0,
  &Time__rosidl_typesupport_introspection_c__Time_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_std_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Time)() {
  Time__rosidl_typesupport_introspection_c__Time_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!Time__rosidl_typesupport_introspection_c__Time_message_type_support_handle.typesupport_identifier) {
    Time__rosidl_typesupport_introspection_c__Time_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Time__rosidl_typesupport_introspection_c__Time_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
