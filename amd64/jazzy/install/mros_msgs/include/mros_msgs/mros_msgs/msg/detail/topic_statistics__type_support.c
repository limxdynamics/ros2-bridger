// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mros_msgs:msg/TopicStatistics.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mros_msgs/msg/detail/topic_statistics__rosidl_typesupport_introspection_c.h"
#include "mros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mros_msgs/msg/detail/topic_statistics__functions.h"
#include "mros_msgs/msg/detail/topic_statistics__struct.h"


// Include directives for member types
// Member `node`
#include "rosidl_runtime_c/string_functions.h"
// Member `subscribers`
// Member `publishers`
#include "mros_msgs/msg/topic_info.h"
// Member `subscribers`
// Member `publishers`
#include "mros_msgs/msg/detail/topic_info__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mros_msgs__msg__TopicStatistics__rosidl_typesupport_introspection_c__TopicStatistics_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mros_msgs__msg__TopicStatistics__init(message_memory);
}

void mros_msgs__msg__TopicStatistics__rosidl_typesupport_introspection_c__TopicStatistics_fini_function(void * message_memory)
{
  mros_msgs__msg__TopicStatistics__fini(message_memory);
}

size_t mros_msgs__msg__TopicStatistics__rosidl_typesupport_introspection_c__size_function__TopicStatistics__subscribers(
  const void * untyped_member)
{
  const mros_msgs__msg__TopicInfo__Sequence * member =
    (const mros_msgs__msg__TopicInfo__Sequence *)(untyped_member);
  return member->size;
}

const void * mros_msgs__msg__TopicStatistics__rosidl_typesupport_introspection_c__get_const_function__TopicStatistics__subscribers(
  const void * untyped_member, size_t index)
{
  const mros_msgs__msg__TopicInfo__Sequence * member =
    (const mros_msgs__msg__TopicInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mros_msgs__msg__TopicStatistics__rosidl_typesupport_introspection_c__get_function__TopicStatistics__subscribers(
  void * untyped_member, size_t index)
{
  mros_msgs__msg__TopicInfo__Sequence * member =
    (mros_msgs__msg__TopicInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void mros_msgs__msg__TopicStatistics__rosidl_typesupport_introspection_c__fetch_function__TopicStatistics__subscribers(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const mros_msgs__msg__TopicInfo * item =
    ((const mros_msgs__msg__TopicInfo *)
    mros_msgs__msg__TopicStatistics__rosidl_typesupport_introspection_c__get_const_function__TopicStatistics__subscribers(untyped_member, index));
  mros_msgs__msg__TopicInfo * value =
    (mros_msgs__msg__TopicInfo *)(untyped_value);
  *value = *item;
}

void mros_msgs__msg__TopicStatistics__rosidl_typesupport_introspection_c__assign_function__TopicStatistics__subscribers(
  void * untyped_member, size_t index, const void * untyped_value)
{
  mros_msgs__msg__TopicInfo * item =
    ((mros_msgs__msg__TopicInfo *)
    mros_msgs__msg__TopicStatistics__rosidl_typesupport_introspection_c__get_function__TopicStatistics__subscribers(untyped_member, index));
  const mros_msgs__msg__TopicInfo * value =
    (const mros_msgs__msg__TopicInfo *)(untyped_value);
  *item = *value;
}

bool mros_msgs__msg__TopicStatistics__rosidl_typesupport_introspection_c__resize_function__TopicStatistics__subscribers(
  void * untyped_member, size_t size)
{
  mros_msgs__msg__TopicInfo__Sequence * member =
    (mros_msgs__msg__TopicInfo__Sequence *)(untyped_member);
  mros_msgs__msg__TopicInfo__Sequence__fini(member);
  return mros_msgs__msg__TopicInfo__Sequence__init(member, size);
}

size_t mros_msgs__msg__TopicStatistics__rosidl_typesupport_introspection_c__size_function__TopicStatistics__publishers(
  const void * untyped_member)
{
  const mros_msgs__msg__TopicInfo__Sequence * member =
    (const mros_msgs__msg__TopicInfo__Sequence *)(untyped_member);
  return member->size;
}

const void * mros_msgs__msg__TopicStatistics__rosidl_typesupport_introspection_c__get_const_function__TopicStatistics__publishers(
  const void * untyped_member, size_t index)
{
  const mros_msgs__msg__TopicInfo__Sequence * member =
    (const mros_msgs__msg__TopicInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mros_msgs__msg__TopicStatistics__rosidl_typesupport_introspection_c__get_function__TopicStatistics__publishers(
  void * untyped_member, size_t index)
{
  mros_msgs__msg__TopicInfo__Sequence * member =
    (mros_msgs__msg__TopicInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void mros_msgs__msg__TopicStatistics__rosidl_typesupport_introspection_c__fetch_function__TopicStatistics__publishers(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const mros_msgs__msg__TopicInfo * item =
    ((const mros_msgs__msg__TopicInfo *)
    mros_msgs__msg__TopicStatistics__rosidl_typesupport_introspection_c__get_const_function__TopicStatistics__publishers(untyped_member, index));
  mros_msgs__msg__TopicInfo * value =
    (mros_msgs__msg__TopicInfo *)(untyped_value);
  *value = *item;
}

void mros_msgs__msg__TopicStatistics__rosidl_typesupport_introspection_c__assign_function__TopicStatistics__publishers(
  void * untyped_member, size_t index, const void * untyped_value)
{
  mros_msgs__msg__TopicInfo * item =
    ((mros_msgs__msg__TopicInfo *)
    mros_msgs__msg__TopicStatistics__rosidl_typesupport_introspection_c__get_function__TopicStatistics__publishers(untyped_member, index));
  const mros_msgs__msg__TopicInfo * value =
    (const mros_msgs__msg__TopicInfo *)(untyped_value);
  *item = *value;
}

bool mros_msgs__msg__TopicStatistics__rosidl_typesupport_introspection_c__resize_function__TopicStatistics__publishers(
  void * untyped_member, size_t size)
{
  mros_msgs__msg__TopicInfo__Sequence * member =
    (mros_msgs__msg__TopicInfo__Sequence *)(untyped_member);
  mros_msgs__msg__TopicInfo__Sequence__fini(member);
  return mros_msgs__msg__TopicInfo__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mros_msgs__msg__TopicStatistics__rosidl_typesupport_introspection_c__TopicStatistics_message_member_array[3] = {
  {
    "node",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mros_msgs__msg__TopicStatistics, node),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "subscribers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mros_msgs__msg__TopicStatistics, subscribers),  // bytes offset in struct
    NULL,  // default value
    mros_msgs__msg__TopicStatistics__rosidl_typesupport_introspection_c__size_function__TopicStatistics__subscribers,  // size() function pointer
    mros_msgs__msg__TopicStatistics__rosidl_typesupport_introspection_c__get_const_function__TopicStatistics__subscribers,  // get_const(index) function pointer
    mros_msgs__msg__TopicStatistics__rosidl_typesupport_introspection_c__get_function__TopicStatistics__subscribers,  // get(index) function pointer
    mros_msgs__msg__TopicStatistics__rosidl_typesupport_introspection_c__fetch_function__TopicStatistics__subscribers,  // fetch(index, &value) function pointer
    mros_msgs__msg__TopicStatistics__rosidl_typesupport_introspection_c__assign_function__TopicStatistics__subscribers,  // assign(index, value) function pointer
    mros_msgs__msg__TopicStatistics__rosidl_typesupport_introspection_c__resize_function__TopicStatistics__subscribers  // resize(index) function pointer
  },
  {
    "publishers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mros_msgs__msg__TopicStatistics, publishers),  // bytes offset in struct
    NULL,  // default value
    mros_msgs__msg__TopicStatistics__rosidl_typesupport_introspection_c__size_function__TopicStatistics__publishers,  // size() function pointer
    mros_msgs__msg__TopicStatistics__rosidl_typesupport_introspection_c__get_const_function__TopicStatistics__publishers,  // get_const(index) function pointer
    mros_msgs__msg__TopicStatistics__rosidl_typesupport_introspection_c__get_function__TopicStatistics__publishers,  // get(index) function pointer
    mros_msgs__msg__TopicStatistics__rosidl_typesupport_introspection_c__fetch_function__TopicStatistics__publishers,  // fetch(index, &value) function pointer
    mros_msgs__msg__TopicStatistics__rosidl_typesupport_introspection_c__assign_function__TopicStatistics__publishers,  // assign(index, value) function pointer
    mros_msgs__msg__TopicStatistics__rosidl_typesupport_introspection_c__resize_function__TopicStatistics__publishers  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mros_msgs__msg__TopicStatistics__rosidl_typesupport_introspection_c__TopicStatistics_message_members = {
  "mros_msgs__msg",  // message namespace
  "TopicStatistics",  // message name
  3,  // number of fields
  sizeof(mros_msgs__msg__TopicStatistics),
  false,  // has_any_key_member_
  mros_msgs__msg__TopicStatistics__rosidl_typesupport_introspection_c__TopicStatistics_message_member_array,  // message members
  mros_msgs__msg__TopicStatistics__rosidl_typesupport_introspection_c__TopicStatistics_init_function,  // function to initialize message memory (memory has to be allocated)
  mros_msgs__msg__TopicStatistics__rosidl_typesupport_introspection_c__TopicStatistics_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mros_msgs__msg__TopicStatistics__rosidl_typesupport_introspection_c__TopicStatistics_message_type_support_handle = {
  0,
  &mros_msgs__msg__TopicStatistics__rosidl_typesupport_introspection_c__TopicStatistics_message_members,
  get_message_typesupport_handle_function,
  &mros_msgs__msg__TopicStatistics__get_type_hash,
  &mros_msgs__msg__TopicStatistics__get_type_description,
  &mros_msgs__msg__TopicStatistics__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mros_msgs, msg, TopicStatistics)() {
  mros_msgs__msg__TopicStatistics__rosidl_typesupport_introspection_c__TopicStatistics_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mros_msgs, msg, TopicInfo)();
  mros_msgs__msg__TopicStatistics__rosidl_typesupport_introspection_c__TopicStatistics_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mros_msgs, msg, TopicInfo)();
  if (!mros_msgs__msg__TopicStatistics__rosidl_typesupport_introspection_c__TopicStatistics_message_type_support_handle.typesupport_identifier) {
    mros_msgs__msg__TopicStatistics__rosidl_typesupport_introspection_c__TopicStatistics_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mros_msgs__msg__TopicStatistics__rosidl_typesupport_introspection_c__TopicStatistics_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
