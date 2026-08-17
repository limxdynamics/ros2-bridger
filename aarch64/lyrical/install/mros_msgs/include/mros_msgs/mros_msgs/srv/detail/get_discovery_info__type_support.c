// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mros_msgs:srv/GetDiscoveryInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mros_msgs/srv/detail/get_discovery_info__rosidl_typesupport_introspection_c.h"
#include "mros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mros_msgs/srv/detail/get_discovery_info__functions.h"
#include "mros_msgs/srv/detail/get_discovery_info__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void mros_msgs__srv__GetDiscoveryInfo_Request__rosidl_typesupport_introspection_c__GetDiscoveryInfo_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mros_msgs__srv__GetDiscoveryInfo_Request__init(message_memory);
}

void mros_msgs__srv__GetDiscoveryInfo_Request__rosidl_typesupport_introspection_c__GetDiscoveryInfo_Request_fini_function(void * message_memory)
{
  mros_msgs__srv__GetDiscoveryInfo_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mros_msgs__srv__GetDiscoveryInfo_Request__rosidl_typesupport_introspection_c__GetDiscoveryInfo_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mros_msgs__srv__GetDiscoveryInfo_Request, structure_needs_at_least_one_member),  // bytes offset in struct
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

static const rosidl_typesupport_introspection_c__MessageMembers mros_msgs__srv__GetDiscoveryInfo_Request__rosidl_typesupport_introspection_c__GetDiscoveryInfo_Request_message_members = {
  "mros_msgs__srv",  // message namespace
  "GetDiscoveryInfo_Request",  // message name
  1,  // number of fields
  sizeof(mros_msgs__srv__GetDiscoveryInfo_Request),
  false,  // has_any_key_member_
  mros_msgs__srv__GetDiscoveryInfo_Request__rosidl_typesupport_introspection_c__GetDiscoveryInfo_Request_message_member_array,  // message members
  mros_msgs__srv__GetDiscoveryInfo_Request__rosidl_typesupport_introspection_c__GetDiscoveryInfo_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  mros_msgs__srv__GetDiscoveryInfo_Request__rosidl_typesupport_introspection_c__GetDiscoveryInfo_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mros_msgs__srv__GetDiscoveryInfo_Request__rosidl_typesupport_introspection_c__GetDiscoveryInfo_Request_message_type_support_handle = {
  0,
  &mros_msgs__srv__GetDiscoveryInfo_Request__rosidl_typesupport_introspection_c__GetDiscoveryInfo_Request_message_members,
  get_message_typesupport_handle_function,
  &mros_msgs__srv__GetDiscoveryInfo_Request__get_type_hash,
  &mros_msgs__srv__GetDiscoveryInfo_Request__get_type_description,
  &mros_msgs__srv__GetDiscoveryInfo_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mros_msgs, srv, GetDiscoveryInfo_Request)() {
  if (!mros_msgs__srv__GetDiscoveryInfo_Request__rosidl_typesupport_introspection_c__GetDiscoveryInfo_Request_message_type_support_handle.typesupport_identifier) {
    mros_msgs__srv__GetDiscoveryInfo_Request__rosidl_typesupport_introspection_c__GetDiscoveryInfo_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mros_msgs__srv__GetDiscoveryInfo_Request__rosidl_typesupport_introspection_c__GetDiscoveryInfo_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "mros_msgs/srv/detail/get_discovery_info__rosidl_typesupport_introspection_c.h"
// already included above
// #include "mros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "mros_msgs/srv/detail/get_discovery_info__functions.h"
// already included above
// #include "mros_msgs/srv/detail/get_discovery_info__struct.h"


// Include directives for member types
// Member `nodes`
#include "mros_msgs/msg/node_info.h"
// Member `nodes`
#include "mros_msgs/msg/detail/node_info__rosidl_typesupport_introspection_c.h"
// Member `subscribers`
// Member `publishers`
// Member `services`
#include "mros_msgs/msg/topic_info.h"
// Member `subscribers`
// Member `publishers`
// Member `services`
#include "mros_msgs/msg/detail/topic_info__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__GetDiscoveryInfo_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mros_msgs__srv__GetDiscoveryInfo_Response__init(message_memory);
}

void mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__GetDiscoveryInfo_Response_fini_function(void * message_memory)
{
  mros_msgs__srv__GetDiscoveryInfo_Response__fini(message_memory);
}

size_t mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__size_function__GetDiscoveryInfo_Response__nodes(
  const void * untyped_member)
{
  const mros_msgs__msg__NodeInfo__Sequence * member =
    (const mros_msgs__msg__NodeInfo__Sequence *)(untyped_member);
  return member->size;
}

const void * mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__get_const_function__GetDiscoveryInfo_Response__nodes(
  const void * untyped_member, size_t index)
{
  const mros_msgs__msg__NodeInfo__Sequence * member =
    (const mros_msgs__msg__NodeInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__get_function__GetDiscoveryInfo_Response__nodes(
  void * untyped_member, size_t index)
{
  mros_msgs__msg__NodeInfo__Sequence * member =
    (mros_msgs__msg__NodeInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__fetch_function__GetDiscoveryInfo_Response__nodes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const mros_msgs__msg__NodeInfo * item =
    ((const mros_msgs__msg__NodeInfo *)
    mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__get_const_function__GetDiscoveryInfo_Response__nodes(untyped_member, index));
  mros_msgs__msg__NodeInfo * value =
    (mros_msgs__msg__NodeInfo *)(untyped_value);
  *value = *item;
}

void mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__assign_function__GetDiscoveryInfo_Response__nodes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  mros_msgs__msg__NodeInfo * item =
    ((mros_msgs__msg__NodeInfo *)
    mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__get_function__GetDiscoveryInfo_Response__nodes(untyped_member, index));
  const mros_msgs__msg__NodeInfo * value =
    (const mros_msgs__msg__NodeInfo *)(untyped_value);
  *item = *value;
}

bool mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__resize_function__GetDiscoveryInfo_Response__nodes(
  void * untyped_member, size_t size)
{
  mros_msgs__msg__NodeInfo__Sequence * member =
    (mros_msgs__msg__NodeInfo__Sequence *)(untyped_member);
  mros_msgs__msg__NodeInfo__Sequence__fini(member);
  return mros_msgs__msg__NodeInfo__Sequence__init(member, size);
}

size_t mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__size_function__GetDiscoveryInfo_Response__subscribers(
  const void * untyped_member)
{
  const mros_msgs__msg__TopicInfo__Sequence * member =
    (const mros_msgs__msg__TopicInfo__Sequence *)(untyped_member);
  return member->size;
}

const void * mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__get_const_function__GetDiscoveryInfo_Response__subscribers(
  const void * untyped_member, size_t index)
{
  const mros_msgs__msg__TopicInfo__Sequence * member =
    (const mros_msgs__msg__TopicInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__get_function__GetDiscoveryInfo_Response__subscribers(
  void * untyped_member, size_t index)
{
  mros_msgs__msg__TopicInfo__Sequence * member =
    (mros_msgs__msg__TopicInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__fetch_function__GetDiscoveryInfo_Response__subscribers(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const mros_msgs__msg__TopicInfo * item =
    ((const mros_msgs__msg__TopicInfo *)
    mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__get_const_function__GetDiscoveryInfo_Response__subscribers(untyped_member, index));
  mros_msgs__msg__TopicInfo * value =
    (mros_msgs__msg__TopicInfo *)(untyped_value);
  *value = *item;
}

void mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__assign_function__GetDiscoveryInfo_Response__subscribers(
  void * untyped_member, size_t index, const void * untyped_value)
{
  mros_msgs__msg__TopicInfo * item =
    ((mros_msgs__msg__TopicInfo *)
    mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__get_function__GetDiscoveryInfo_Response__subscribers(untyped_member, index));
  const mros_msgs__msg__TopicInfo * value =
    (const mros_msgs__msg__TopicInfo *)(untyped_value);
  *item = *value;
}

bool mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__resize_function__GetDiscoveryInfo_Response__subscribers(
  void * untyped_member, size_t size)
{
  mros_msgs__msg__TopicInfo__Sequence * member =
    (mros_msgs__msg__TopicInfo__Sequence *)(untyped_member);
  mros_msgs__msg__TopicInfo__Sequence__fini(member);
  return mros_msgs__msg__TopicInfo__Sequence__init(member, size);
}

size_t mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__size_function__GetDiscoveryInfo_Response__publishers(
  const void * untyped_member)
{
  const mros_msgs__msg__TopicInfo__Sequence * member =
    (const mros_msgs__msg__TopicInfo__Sequence *)(untyped_member);
  return member->size;
}

const void * mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__get_const_function__GetDiscoveryInfo_Response__publishers(
  const void * untyped_member, size_t index)
{
  const mros_msgs__msg__TopicInfo__Sequence * member =
    (const mros_msgs__msg__TopicInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__get_function__GetDiscoveryInfo_Response__publishers(
  void * untyped_member, size_t index)
{
  mros_msgs__msg__TopicInfo__Sequence * member =
    (mros_msgs__msg__TopicInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__fetch_function__GetDiscoveryInfo_Response__publishers(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const mros_msgs__msg__TopicInfo * item =
    ((const mros_msgs__msg__TopicInfo *)
    mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__get_const_function__GetDiscoveryInfo_Response__publishers(untyped_member, index));
  mros_msgs__msg__TopicInfo * value =
    (mros_msgs__msg__TopicInfo *)(untyped_value);
  *value = *item;
}

void mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__assign_function__GetDiscoveryInfo_Response__publishers(
  void * untyped_member, size_t index, const void * untyped_value)
{
  mros_msgs__msg__TopicInfo * item =
    ((mros_msgs__msg__TopicInfo *)
    mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__get_function__GetDiscoveryInfo_Response__publishers(untyped_member, index));
  const mros_msgs__msg__TopicInfo * value =
    (const mros_msgs__msg__TopicInfo *)(untyped_value);
  *item = *value;
}

bool mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__resize_function__GetDiscoveryInfo_Response__publishers(
  void * untyped_member, size_t size)
{
  mros_msgs__msg__TopicInfo__Sequence * member =
    (mros_msgs__msg__TopicInfo__Sequence *)(untyped_member);
  mros_msgs__msg__TopicInfo__Sequence__fini(member);
  return mros_msgs__msg__TopicInfo__Sequence__init(member, size);
}

size_t mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__size_function__GetDiscoveryInfo_Response__services(
  const void * untyped_member)
{
  const mros_msgs__msg__TopicInfo__Sequence * member =
    (const mros_msgs__msg__TopicInfo__Sequence *)(untyped_member);
  return member->size;
}

const void * mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__get_const_function__GetDiscoveryInfo_Response__services(
  const void * untyped_member, size_t index)
{
  const mros_msgs__msg__TopicInfo__Sequence * member =
    (const mros_msgs__msg__TopicInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__get_function__GetDiscoveryInfo_Response__services(
  void * untyped_member, size_t index)
{
  mros_msgs__msg__TopicInfo__Sequence * member =
    (mros_msgs__msg__TopicInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__fetch_function__GetDiscoveryInfo_Response__services(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const mros_msgs__msg__TopicInfo * item =
    ((const mros_msgs__msg__TopicInfo *)
    mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__get_const_function__GetDiscoveryInfo_Response__services(untyped_member, index));
  mros_msgs__msg__TopicInfo * value =
    (mros_msgs__msg__TopicInfo *)(untyped_value);
  *value = *item;
}

void mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__assign_function__GetDiscoveryInfo_Response__services(
  void * untyped_member, size_t index, const void * untyped_value)
{
  mros_msgs__msg__TopicInfo * item =
    ((mros_msgs__msg__TopicInfo *)
    mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__get_function__GetDiscoveryInfo_Response__services(untyped_member, index));
  const mros_msgs__msg__TopicInfo * value =
    (const mros_msgs__msg__TopicInfo *)(untyped_value);
  *item = *value;
}

bool mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__resize_function__GetDiscoveryInfo_Response__services(
  void * untyped_member, size_t size)
{
  mros_msgs__msg__TopicInfo__Sequence * member =
    (mros_msgs__msg__TopicInfo__Sequence *)(untyped_member);
  mros_msgs__msg__TopicInfo__Sequence__fini(member);
  return mros_msgs__msg__TopicInfo__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__GetDiscoveryInfo_Response_message_member_array[4] = {
  {
    "nodes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mros_msgs__srv__GetDiscoveryInfo_Response, nodes),  // bytes offset in struct
    NULL,  // default value
    mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__size_function__GetDiscoveryInfo_Response__nodes,  // size() function pointer
    mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__get_const_function__GetDiscoveryInfo_Response__nodes,  // get_const(index) function pointer
    mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__get_function__GetDiscoveryInfo_Response__nodes,  // get(index) function pointer
    mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__fetch_function__GetDiscoveryInfo_Response__nodes,  // fetch(index, &value) function pointer
    mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__assign_function__GetDiscoveryInfo_Response__nodes,  // assign(index, value) function pointer
    mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__resize_function__GetDiscoveryInfo_Response__nodes,  // resize(index) function pointer
    false  // is_rosidl_buffer
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
    offsetof(mros_msgs__srv__GetDiscoveryInfo_Response, subscribers),  // bytes offset in struct
    NULL,  // default value
    mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__size_function__GetDiscoveryInfo_Response__subscribers,  // size() function pointer
    mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__get_const_function__GetDiscoveryInfo_Response__subscribers,  // get_const(index) function pointer
    mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__get_function__GetDiscoveryInfo_Response__subscribers,  // get(index) function pointer
    mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__fetch_function__GetDiscoveryInfo_Response__subscribers,  // fetch(index, &value) function pointer
    mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__assign_function__GetDiscoveryInfo_Response__subscribers,  // assign(index, value) function pointer
    mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__resize_function__GetDiscoveryInfo_Response__subscribers,  // resize(index) function pointer
    false  // is_rosidl_buffer
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
    offsetof(mros_msgs__srv__GetDiscoveryInfo_Response, publishers),  // bytes offset in struct
    NULL,  // default value
    mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__size_function__GetDiscoveryInfo_Response__publishers,  // size() function pointer
    mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__get_const_function__GetDiscoveryInfo_Response__publishers,  // get_const(index) function pointer
    mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__get_function__GetDiscoveryInfo_Response__publishers,  // get(index) function pointer
    mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__fetch_function__GetDiscoveryInfo_Response__publishers,  // fetch(index, &value) function pointer
    mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__assign_function__GetDiscoveryInfo_Response__publishers,  // assign(index, value) function pointer
    mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__resize_function__GetDiscoveryInfo_Response__publishers,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "services",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mros_msgs__srv__GetDiscoveryInfo_Response, services),  // bytes offset in struct
    NULL,  // default value
    mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__size_function__GetDiscoveryInfo_Response__services,  // size() function pointer
    mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__get_const_function__GetDiscoveryInfo_Response__services,  // get_const(index) function pointer
    mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__get_function__GetDiscoveryInfo_Response__services,  // get(index) function pointer
    mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__fetch_function__GetDiscoveryInfo_Response__services,  // fetch(index, &value) function pointer
    mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__assign_function__GetDiscoveryInfo_Response__services,  // assign(index, value) function pointer
    mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__resize_function__GetDiscoveryInfo_Response__services,  // resize(index) function pointer
    false  // is_rosidl_buffer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__GetDiscoveryInfo_Response_message_members = {
  "mros_msgs__srv",  // message namespace
  "GetDiscoveryInfo_Response",  // message name
  4,  // number of fields
  sizeof(mros_msgs__srv__GetDiscoveryInfo_Response),
  false,  // has_any_key_member_
  mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__GetDiscoveryInfo_Response_message_member_array,  // message members
  mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__GetDiscoveryInfo_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__GetDiscoveryInfo_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__GetDiscoveryInfo_Response_message_type_support_handle = {
  0,
  &mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__GetDiscoveryInfo_Response_message_members,
  get_message_typesupport_handle_function,
  &mros_msgs__srv__GetDiscoveryInfo_Response__get_type_hash,
  &mros_msgs__srv__GetDiscoveryInfo_Response__get_type_description,
  &mros_msgs__srv__GetDiscoveryInfo_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mros_msgs, srv, GetDiscoveryInfo_Response)() {
  mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__GetDiscoveryInfo_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mros_msgs, msg, NodeInfo)();
  mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__GetDiscoveryInfo_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mros_msgs, msg, TopicInfo)();
  mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__GetDiscoveryInfo_Response_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mros_msgs, msg, TopicInfo)();
  mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__GetDiscoveryInfo_Response_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mros_msgs, msg, TopicInfo)();
  if (!mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__GetDiscoveryInfo_Response_message_type_support_handle.typesupport_identifier) {
    mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__GetDiscoveryInfo_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__GetDiscoveryInfo_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "mros_msgs/srv/detail/get_discovery_info__rosidl_typesupport_introspection_c.h"
// already included above
// #include "mros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "mros_msgs/srv/detail/get_discovery_info__functions.h"
// already included above
// #include "mros_msgs/srv/detail/get_discovery_info__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "mros_msgs/srv/get_discovery_info.h"
// Member `request`
// Member `response`
// already included above
// #include "mros_msgs/srv/detail/get_discovery_info__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mros_msgs__srv__GetDiscoveryInfo_Event__rosidl_typesupport_introspection_c__GetDiscoveryInfo_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mros_msgs__srv__GetDiscoveryInfo_Event__init(message_memory);
}

void mros_msgs__srv__GetDiscoveryInfo_Event__rosidl_typesupport_introspection_c__GetDiscoveryInfo_Event_fini_function(void * message_memory)
{
  mros_msgs__srv__GetDiscoveryInfo_Event__fini(message_memory);
}

size_t mros_msgs__srv__GetDiscoveryInfo_Event__rosidl_typesupport_introspection_c__size_function__GetDiscoveryInfo_Event__request(
  const void * untyped_member)
{
  const mros_msgs__srv__GetDiscoveryInfo_Request__Sequence * member =
    (const mros_msgs__srv__GetDiscoveryInfo_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * mros_msgs__srv__GetDiscoveryInfo_Event__rosidl_typesupport_introspection_c__get_const_function__GetDiscoveryInfo_Event__request(
  const void * untyped_member, size_t index)
{
  const mros_msgs__srv__GetDiscoveryInfo_Request__Sequence * member =
    (const mros_msgs__srv__GetDiscoveryInfo_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mros_msgs__srv__GetDiscoveryInfo_Event__rosidl_typesupport_introspection_c__get_function__GetDiscoveryInfo_Event__request(
  void * untyped_member, size_t index)
{
  mros_msgs__srv__GetDiscoveryInfo_Request__Sequence * member =
    (mros_msgs__srv__GetDiscoveryInfo_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void mros_msgs__srv__GetDiscoveryInfo_Event__rosidl_typesupport_introspection_c__fetch_function__GetDiscoveryInfo_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const mros_msgs__srv__GetDiscoveryInfo_Request * item =
    ((const mros_msgs__srv__GetDiscoveryInfo_Request *)
    mros_msgs__srv__GetDiscoveryInfo_Event__rosidl_typesupport_introspection_c__get_const_function__GetDiscoveryInfo_Event__request(untyped_member, index));
  mros_msgs__srv__GetDiscoveryInfo_Request * value =
    (mros_msgs__srv__GetDiscoveryInfo_Request *)(untyped_value);
  *value = *item;
}

void mros_msgs__srv__GetDiscoveryInfo_Event__rosidl_typesupport_introspection_c__assign_function__GetDiscoveryInfo_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  mros_msgs__srv__GetDiscoveryInfo_Request * item =
    ((mros_msgs__srv__GetDiscoveryInfo_Request *)
    mros_msgs__srv__GetDiscoveryInfo_Event__rosidl_typesupport_introspection_c__get_function__GetDiscoveryInfo_Event__request(untyped_member, index));
  const mros_msgs__srv__GetDiscoveryInfo_Request * value =
    (const mros_msgs__srv__GetDiscoveryInfo_Request *)(untyped_value);
  *item = *value;
}

bool mros_msgs__srv__GetDiscoveryInfo_Event__rosidl_typesupport_introspection_c__resize_function__GetDiscoveryInfo_Event__request(
  void * untyped_member, size_t size)
{
  mros_msgs__srv__GetDiscoveryInfo_Request__Sequence * member =
    (mros_msgs__srv__GetDiscoveryInfo_Request__Sequence *)(untyped_member);
  mros_msgs__srv__GetDiscoveryInfo_Request__Sequence__fini(member);
  return mros_msgs__srv__GetDiscoveryInfo_Request__Sequence__init(member, size);
}

size_t mros_msgs__srv__GetDiscoveryInfo_Event__rosidl_typesupport_introspection_c__size_function__GetDiscoveryInfo_Event__response(
  const void * untyped_member)
{
  const mros_msgs__srv__GetDiscoveryInfo_Response__Sequence * member =
    (const mros_msgs__srv__GetDiscoveryInfo_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * mros_msgs__srv__GetDiscoveryInfo_Event__rosidl_typesupport_introspection_c__get_const_function__GetDiscoveryInfo_Event__response(
  const void * untyped_member, size_t index)
{
  const mros_msgs__srv__GetDiscoveryInfo_Response__Sequence * member =
    (const mros_msgs__srv__GetDiscoveryInfo_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mros_msgs__srv__GetDiscoveryInfo_Event__rosidl_typesupport_introspection_c__get_function__GetDiscoveryInfo_Event__response(
  void * untyped_member, size_t index)
{
  mros_msgs__srv__GetDiscoveryInfo_Response__Sequence * member =
    (mros_msgs__srv__GetDiscoveryInfo_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void mros_msgs__srv__GetDiscoveryInfo_Event__rosidl_typesupport_introspection_c__fetch_function__GetDiscoveryInfo_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const mros_msgs__srv__GetDiscoveryInfo_Response * item =
    ((const mros_msgs__srv__GetDiscoveryInfo_Response *)
    mros_msgs__srv__GetDiscoveryInfo_Event__rosidl_typesupport_introspection_c__get_const_function__GetDiscoveryInfo_Event__response(untyped_member, index));
  mros_msgs__srv__GetDiscoveryInfo_Response * value =
    (mros_msgs__srv__GetDiscoveryInfo_Response *)(untyped_value);
  *value = *item;
}

void mros_msgs__srv__GetDiscoveryInfo_Event__rosidl_typesupport_introspection_c__assign_function__GetDiscoveryInfo_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  mros_msgs__srv__GetDiscoveryInfo_Response * item =
    ((mros_msgs__srv__GetDiscoveryInfo_Response *)
    mros_msgs__srv__GetDiscoveryInfo_Event__rosidl_typesupport_introspection_c__get_function__GetDiscoveryInfo_Event__response(untyped_member, index));
  const mros_msgs__srv__GetDiscoveryInfo_Response * value =
    (const mros_msgs__srv__GetDiscoveryInfo_Response *)(untyped_value);
  *item = *value;
}

bool mros_msgs__srv__GetDiscoveryInfo_Event__rosidl_typesupport_introspection_c__resize_function__GetDiscoveryInfo_Event__response(
  void * untyped_member, size_t size)
{
  mros_msgs__srv__GetDiscoveryInfo_Response__Sequence * member =
    (mros_msgs__srv__GetDiscoveryInfo_Response__Sequence *)(untyped_member);
  mros_msgs__srv__GetDiscoveryInfo_Response__Sequence__fini(member);
  return mros_msgs__srv__GetDiscoveryInfo_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mros_msgs__srv__GetDiscoveryInfo_Event__rosidl_typesupport_introspection_c__GetDiscoveryInfo_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mros_msgs__srv__GetDiscoveryInfo_Event, info),  // bytes offset in struct
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
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(mros_msgs__srv__GetDiscoveryInfo_Event, request),  // bytes offset in struct
    NULL,  // default value
    mros_msgs__srv__GetDiscoveryInfo_Event__rosidl_typesupport_introspection_c__size_function__GetDiscoveryInfo_Event__request,  // size() function pointer
    mros_msgs__srv__GetDiscoveryInfo_Event__rosidl_typesupport_introspection_c__get_const_function__GetDiscoveryInfo_Event__request,  // get_const(index) function pointer
    mros_msgs__srv__GetDiscoveryInfo_Event__rosidl_typesupport_introspection_c__get_function__GetDiscoveryInfo_Event__request,  // get(index) function pointer
    mros_msgs__srv__GetDiscoveryInfo_Event__rosidl_typesupport_introspection_c__fetch_function__GetDiscoveryInfo_Event__request,  // fetch(index, &value) function pointer
    mros_msgs__srv__GetDiscoveryInfo_Event__rosidl_typesupport_introspection_c__assign_function__GetDiscoveryInfo_Event__request,  // assign(index, value) function pointer
    mros_msgs__srv__GetDiscoveryInfo_Event__rosidl_typesupport_introspection_c__resize_function__GetDiscoveryInfo_Event__request,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(mros_msgs__srv__GetDiscoveryInfo_Event, response),  // bytes offset in struct
    NULL,  // default value
    mros_msgs__srv__GetDiscoveryInfo_Event__rosidl_typesupport_introspection_c__size_function__GetDiscoveryInfo_Event__response,  // size() function pointer
    mros_msgs__srv__GetDiscoveryInfo_Event__rosidl_typesupport_introspection_c__get_const_function__GetDiscoveryInfo_Event__response,  // get_const(index) function pointer
    mros_msgs__srv__GetDiscoveryInfo_Event__rosidl_typesupport_introspection_c__get_function__GetDiscoveryInfo_Event__response,  // get(index) function pointer
    mros_msgs__srv__GetDiscoveryInfo_Event__rosidl_typesupport_introspection_c__fetch_function__GetDiscoveryInfo_Event__response,  // fetch(index, &value) function pointer
    mros_msgs__srv__GetDiscoveryInfo_Event__rosidl_typesupport_introspection_c__assign_function__GetDiscoveryInfo_Event__response,  // assign(index, value) function pointer
    mros_msgs__srv__GetDiscoveryInfo_Event__rosidl_typesupport_introspection_c__resize_function__GetDiscoveryInfo_Event__response,  // resize(index) function pointer
    false  // is_rosidl_buffer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mros_msgs__srv__GetDiscoveryInfo_Event__rosidl_typesupport_introspection_c__GetDiscoveryInfo_Event_message_members = {
  "mros_msgs__srv",  // message namespace
  "GetDiscoveryInfo_Event",  // message name
  3,  // number of fields
  sizeof(mros_msgs__srv__GetDiscoveryInfo_Event),
  false,  // has_any_key_member_
  mros_msgs__srv__GetDiscoveryInfo_Event__rosidl_typesupport_introspection_c__GetDiscoveryInfo_Event_message_member_array,  // message members
  mros_msgs__srv__GetDiscoveryInfo_Event__rosidl_typesupport_introspection_c__GetDiscoveryInfo_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  mros_msgs__srv__GetDiscoveryInfo_Event__rosidl_typesupport_introspection_c__GetDiscoveryInfo_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mros_msgs__srv__GetDiscoveryInfo_Event__rosidl_typesupport_introspection_c__GetDiscoveryInfo_Event_message_type_support_handle = {
  0,
  &mros_msgs__srv__GetDiscoveryInfo_Event__rosidl_typesupport_introspection_c__GetDiscoveryInfo_Event_message_members,
  get_message_typesupport_handle_function,
  &mros_msgs__srv__GetDiscoveryInfo_Event__get_type_hash,
  &mros_msgs__srv__GetDiscoveryInfo_Event__get_type_description,
  &mros_msgs__srv__GetDiscoveryInfo_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mros_msgs, srv, GetDiscoveryInfo_Event)() {
  mros_msgs__srv__GetDiscoveryInfo_Event__rosidl_typesupport_introspection_c__GetDiscoveryInfo_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  mros_msgs__srv__GetDiscoveryInfo_Event__rosidl_typesupport_introspection_c__GetDiscoveryInfo_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mros_msgs, srv, GetDiscoveryInfo_Request)();
  mros_msgs__srv__GetDiscoveryInfo_Event__rosidl_typesupport_introspection_c__GetDiscoveryInfo_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mros_msgs, srv, GetDiscoveryInfo_Response)();
  if (!mros_msgs__srv__GetDiscoveryInfo_Event__rosidl_typesupport_introspection_c__GetDiscoveryInfo_Event_message_type_support_handle.typesupport_identifier) {
    mros_msgs__srv__GetDiscoveryInfo_Event__rosidl_typesupport_introspection_c__GetDiscoveryInfo_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mros_msgs__srv__GetDiscoveryInfo_Event__rosidl_typesupport_introspection_c__GetDiscoveryInfo_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "mros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "mros_msgs/srv/detail/get_discovery_info__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers mros_msgs__srv__detail__get_discovery_info__rosidl_typesupport_introspection_c__GetDiscoveryInfo_service_members = {
  "mros_msgs__srv",  // service namespace
  "GetDiscoveryInfo",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // mros_msgs__srv__detail__get_discovery_info__rosidl_typesupport_introspection_c__GetDiscoveryInfo_Request_message_type_support_handle,
  NULL,  // response message
  // mros_msgs__srv__detail__get_discovery_info__rosidl_typesupport_introspection_c__GetDiscoveryInfo_Response_message_type_support_handle
  NULL  // event_message
  // mros_msgs__srv__detail__get_discovery_info__rosidl_typesupport_introspection_c__GetDiscoveryInfo_Response_message_type_support_handle
};


static rosidl_service_type_support_t mros_msgs__srv__detail__get_discovery_info__rosidl_typesupport_introspection_c__GetDiscoveryInfo_service_type_support_handle = {
  0,
  &mros_msgs__srv__detail__get_discovery_info__rosidl_typesupport_introspection_c__GetDiscoveryInfo_service_members,
  get_service_typesupport_handle_function,
  &mros_msgs__srv__GetDiscoveryInfo_Request__rosidl_typesupport_introspection_c__GetDiscoveryInfo_Request_message_type_support_handle,
  &mros_msgs__srv__GetDiscoveryInfo_Response__rosidl_typesupport_introspection_c__GetDiscoveryInfo_Response_message_type_support_handle,
  &mros_msgs__srv__GetDiscoveryInfo_Event__rosidl_typesupport_introspection_c__GetDiscoveryInfo_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    mros_msgs,
    srv,
    GetDiscoveryInfo
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    mros_msgs,
    srv,
    GetDiscoveryInfo
  ),
  &mros_msgs__srv__GetDiscoveryInfo__get_type_hash,
  &mros_msgs__srv__GetDiscoveryInfo__get_type_description,
  &mros_msgs__srv__GetDiscoveryInfo__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mros_msgs, srv, GetDiscoveryInfo_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mros_msgs, srv, GetDiscoveryInfo_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mros_msgs, srv, GetDiscoveryInfo_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mros_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mros_msgs, srv, GetDiscoveryInfo)(void) {
  if (!mros_msgs__srv__detail__get_discovery_info__rosidl_typesupport_introspection_c__GetDiscoveryInfo_service_type_support_handle.typesupport_identifier) {
    mros_msgs__srv__detail__get_discovery_info__rosidl_typesupport_introspection_c__GetDiscoveryInfo_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)mros_msgs__srv__detail__get_discovery_info__rosidl_typesupport_introspection_c__GetDiscoveryInfo_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mros_msgs, srv, GetDiscoveryInfo_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mros_msgs, srv, GetDiscoveryInfo_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mros_msgs, srv, GetDiscoveryInfo_Event)()->data;
  }

  return &mros_msgs__srv__detail__get_discovery_info__rosidl_typesupport_introspection_c__GetDiscoveryInfo_service_type_support_handle;
}
