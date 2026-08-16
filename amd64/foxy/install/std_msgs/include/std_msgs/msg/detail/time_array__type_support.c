// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from std_msgs:msg/TimeArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "std_msgs/msg/detail/time_array__rosidl_typesupport_introspection_c.h"
#include "std_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "std_msgs/msg/detail/time_array__functions.h"
#include "std_msgs/msg/detail/time_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `data`
#include "std_msgs/msg/time.h"
// Member `data`
#include "std_msgs/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TimeArray__rosidl_typesupport_introspection_c__TimeArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  std_msgs__msg__TimeArray__init(message_memory);
}

void TimeArray__rosidl_typesupport_introspection_c__TimeArray_fini_function(void * message_memory)
{
  std_msgs__msg__TimeArray__fini(message_memory);
}

size_t TimeArray__rosidl_typesupport_introspection_c__size_function__Time__data(
  const void * untyped_member)
{
  const std_msgs__msg__Time__Sequence * member =
    (const std_msgs__msg__Time__Sequence *)(untyped_member);
  return member->size;
}

const void * TimeArray__rosidl_typesupport_introspection_c__get_const_function__Time__data(
  const void * untyped_member, size_t index)
{
  const std_msgs__msg__Time__Sequence * member =
    (const std_msgs__msg__Time__Sequence *)(untyped_member);
  return &member->data[index];
}

void * TimeArray__rosidl_typesupport_introspection_c__get_function__Time__data(
  void * untyped_member, size_t index)
{
  std_msgs__msg__Time__Sequence * member =
    (std_msgs__msg__Time__Sequence *)(untyped_member);
  return &member->data[index];
}

bool TimeArray__rosidl_typesupport_introspection_c__resize_function__Time__data(
  void * untyped_member, size_t size)
{
  std_msgs__msg__Time__Sequence * member =
    (std_msgs__msg__Time__Sequence *)(untyped_member);
  std_msgs__msg__Time__Sequence__fini(member);
  return std_msgs__msg__Time__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember TimeArray__rosidl_typesupport_introspection_c__TimeArray_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(std_msgs__msg__TimeArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(std_msgs__msg__TimeArray, data),  // bytes offset in struct
    NULL,  // default value
    TimeArray__rosidl_typesupport_introspection_c__size_function__Time__data,  // size() function pointer
    TimeArray__rosidl_typesupport_introspection_c__get_const_function__Time__data,  // get_const(index) function pointer
    TimeArray__rosidl_typesupport_introspection_c__get_function__Time__data,  // get(index) function pointer
    TimeArray__rosidl_typesupport_introspection_c__resize_function__Time__data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TimeArray__rosidl_typesupport_introspection_c__TimeArray_message_members = {
  "std_msgs__msg",  // message namespace
  "TimeArray",  // message name
  2,  // number of fields
  sizeof(std_msgs__msg__TimeArray),
  TimeArray__rosidl_typesupport_introspection_c__TimeArray_message_member_array,  // message members
  TimeArray__rosidl_typesupport_introspection_c__TimeArray_init_function,  // function to initialize message memory (memory has to be allocated)
  TimeArray__rosidl_typesupport_introspection_c__TimeArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TimeArray__rosidl_typesupport_introspection_c__TimeArray_message_type_support_handle = {
  0,
  &TimeArray__rosidl_typesupport_introspection_c__TimeArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_std_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, TimeArray)() {
  TimeArray__rosidl_typesupport_introspection_c__TimeArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  TimeArray__rosidl_typesupport_introspection_c__TimeArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Time)();
  if (!TimeArray__rosidl_typesupport_introspection_c__TimeArray_message_type_support_handle.typesupport_identifier) {
    TimeArray__rosidl_typesupport_introspection_c__TimeArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TimeArray__rosidl_typesupport_introspection_c__TimeArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
