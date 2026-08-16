// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from std_msgs:msg/DurationArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "std_msgs/msg/detail/duration_array__rosidl_typesupport_introspection_c.h"
#include "std_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "std_msgs/msg/detail/duration_array__functions.h"
#include "std_msgs/msg/detail/duration_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `data`
#include "std_msgs/msg/duration.h"
// Member `data`
#include "std_msgs/msg/detail/duration__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DurationArray__rosidl_typesupport_introspection_c__DurationArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  std_msgs__msg__DurationArray__init(message_memory);
}

void DurationArray__rosidl_typesupport_introspection_c__DurationArray_fini_function(void * message_memory)
{
  std_msgs__msg__DurationArray__fini(message_memory);
}

size_t DurationArray__rosidl_typesupport_introspection_c__size_function__Duration__data(
  const void * untyped_member)
{
  const std_msgs__msg__Duration__Sequence * member =
    (const std_msgs__msg__Duration__Sequence *)(untyped_member);
  return member->size;
}

const void * DurationArray__rosidl_typesupport_introspection_c__get_const_function__Duration__data(
  const void * untyped_member, size_t index)
{
  const std_msgs__msg__Duration__Sequence * member =
    (const std_msgs__msg__Duration__Sequence *)(untyped_member);
  return &member->data[index];
}

void * DurationArray__rosidl_typesupport_introspection_c__get_function__Duration__data(
  void * untyped_member, size_t index)
{
  std_msgs__msg__Duration__Sequence * member =
    (std_msgs__msg__Duration__Sequence *)(untyped_member);
  return &member->data[index];
}

bool DurationArray__rosidl_typesupport_introspection_c__resize_function__Duration__data(
  void * untyped_member, size_t size)
{
  std_msgs__msg__Duration__Sequence * member =
    (std_msgs__msg__Duration__Sequence *)(untyped_member);
  std_msgs__msg__Duration__Sequence__fini(member);
  return std_msgs__msg__Duration__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember DurationArray__rosidl_typesupport_introspection_c__DurationArray_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(std_msgs__msg__DurationArray, header),  // bytes offset in struct
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
    offsetof(std_msgs__msg__DurationArray, data),  // bytes offset in struct
    NULL,  // default value
    DurationArray__rosidl_typesupport_introspection_c__size_function__Duration__data,  // size() function pointer
    DurationArray__rosidl_typesupport_introspection_c__get_const_function__Duration__data,  // get_const(index) function pointer
    DurationArray__rosidl_typesupport_introspection_c__get_function__Duration__data,  // get(index) function pointer
    DurationArray__rosidl_typesupport_introspection_c__resize_function__Duration__data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DurationArray__rosidl_typesupport_introspection_c__DurationArray_message_members = {
  "std_msgs__msg",  // message namespace
  "DurationArray",  // message name
  2,  // number of fields
  sizeof(std_msgs__msg__DurationArray),
  DurationArray__rosidl_typesupport_introspection_c__DurationArray_message_member_array,  // message members
  DurationArray__rosidl_typesupport_introspection_c__DurationArray_init_function,  // function to initialize message memory (memory has to be allocated)
  DurationArray__rosidl_typesupport_introspection_c__DurationArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DurationArray__rosidl_typesupport_introspection_c__DurationArray_message_type_support_handle = {
  0,
  &DurationArray__rosidl_typesupport_introspection_c__DurationArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_std_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, DurationArray)() {
  DurationArray__rosidl_typesupport_introspection_c__DurationArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  DurationArray__rosidl_typesupport_introspection_c__DurationArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Duration)();
  if (!DurationArray__rosidl_typesupport_introspection_c__DurationArray_message_type_support_handle.typesupport_identifier) {
    DurationArray__rosidl_typesupport_introspection_c__DurationArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DurationArray__rosidl_typesupport_introspection_c__DurationArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
