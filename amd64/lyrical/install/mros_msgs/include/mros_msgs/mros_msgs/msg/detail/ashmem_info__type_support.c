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

void mros_msgs__msg__AshmemInfo__rosidl_typesupport_introspection_c__AshmemInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mros_msgs__msg__AshmemInfo__init(message_memory);
}

void mros_msgs__msg__AshmemInfo__rosidl_typesupport_introspection_c__AshmemInfo_fini_function(void * message_memory)
{
  mros_msgs__msg__AshmemInfo__fini(message_memory);
}

size_t mros_msgs__msg__AshmemInfo__rosidl_typesupport_introspection_c__size_function__AshmemInfo__identity(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * mros_msgs__msg__AshmemInfo__rosidl_typesupport_introspection_c__get_const_function__AshmemInfo__identity(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mros_msgs__msg__AshmemInfo__rosidl_typesupport_introspection_c__get_function__AshmemInfo__identity(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void mros_msgs__msg__AshmemInfo__rosidl_typesupport_introspection_c__fetch_function__AshmemInfo__identity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    mros_msgs__msg__AshmemInfo__rosidl_typesupport_introspection_c__get_const_function__AshmemInfo__identity(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void mros_msgs__msg__AshmemInfo__rosidl_typesupport_introspection_c__assign_function__AshmemInfo__identity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    mros_msgs__msg__AshmemInfo__rosidl_typesupport_introspection_c__get_function__AshmemInfo__identity(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool mros_msgs__msg__AshmemInfo__rosidl_typesupport_introspection_c__resize_function__AshmemInfo__identity(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mros_msgs__msg__AshmemInfo__rosidl_typesupport_introspection_c__AshmemInfo_message_member_array[9] = {
  {
    "topic_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mros_msgs__msg__AshmemInfo, topic_id),  // bytes offset in struct
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
    "topic_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mros_msgs__msg__AshmemInfo, topic_name),  // bytes offset in struct
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
    "message_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mros_msgs__msg__AshmemInfo, message_type),  // bytes offset in struct
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
    "message_md5sum",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mros_msgs__msg__AshmemInfo, message_md5sum),  // bytes offset in struct
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
    "message_definition",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mros_msgs__msg__AshmemInfo, message_definition),  // bytes offset in struct
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
    "shm_seed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mros_msgs__msg__AshmemInfo, shm_seed),  // bytes offset in struct
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
    "shm_size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mros_msgs__msg__AshmemInfo, shm_size),  // bytes offset in struct
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
    "msg_size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mros_msgs__msg__AshmemInfo, msg_size),  // bytes offset in struct
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
    "identity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mros_msgs__msg__AshmemInfo, identity),  // bytes offset in struct
    NULL,  // default value
    mros_msgs__msg__AshmemInfo__rosidl_typesupport_introspection_c__size_function__AshmemInfo__identity,  // size() function pointer
    mros_msgs__msg__AshmemInfo__rosidl_typesupport_introspection_c__get_const_function__AshmemInfo__identity,  // get_const(index) function pointer
    mros_msgs__msg__AshmemInfo__rosidl_typesupport_introspection_c__get_function__AshmemInfo__identity,  // get(index) function pointer
    mros_msgs__msg__AshmemInfo__rosidl_typesupport_introspection_c__fetch_function__AshmemInfo__identity,  // fetch(index, &value) function pointer
    mros_msgs__msg__AshmemInfo__rosidl_typesupport_introspection_c__assign_function__AshmemInfo__identity,  // assign(index, value) function pointer
    mros_msgs__msg__AshmemInfo__rosidl_typesupport_introspection_c__resize_function__AshmemInfo__identity,  // resize(index) function pointer
    false  // is_rosidl_buffer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mros_msgs__msg__AshmemInfo__rosidl_typesupport_introspection_c__AshmemInfo_message_members = {
  "mros_msgs__msg",  // message namespace
  "AshmemInfo",  // message name
  9,  // number of fields
  sizeof(mros_msgs__msg__AshmemInfo),
  false,  // has_any_key_member_
  mros_msgs__msg__AshmemInfo__rosidl_typesupport_introspection_c__AshmemInfo_message_member_array,  // message members
  mros_msgs__msg__AshmemInfo__rosidl_typesupport_introspection_c__AshmemInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  mros_msgs__msg__AshmemInfo__rosidl_typesupport_introspection_c__AshmemInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mros_msgs__msg__AshmemInfo__rosidl_typesupport_introspection_c__AshmemInfo_message_type_support_handle = {
  0,
  &mros_msgs__msg__AshmemInfo__rosidl_typesupport_introspection_c__AshmemInfo_message_members,
  get_message_typesupport_handle_function,
  &mros_msgs__msg__AshmemInfo__get_type_hash,
  &mros_msgs__msg__AshmemInfo__get_type_description,
  &mros_msgs__msg__AshmemInfo__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mros_msgs, msg, AshmemInfo)() {
  if (!mros_msgs__msg__AshmemInfo__rosidl_typesupport_introspection_c__AshmemInfo_message_type_support_handle.typesupport_identifier) {
    mros_msgs__msg__AshmemInfo__rosidl_typesupport_introspection_c__AshmemInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mros_msgs__msg__AshmemInfo__rosidl_typesupport_introspection_c__AshmemInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
