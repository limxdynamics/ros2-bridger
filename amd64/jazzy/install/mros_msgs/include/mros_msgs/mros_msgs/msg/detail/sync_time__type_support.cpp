// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mros_msgs:msg/SyncTime.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mros_msgs/msg/detail/sync_time__functions.h"
#include "mros_msgs/msg/detail/sync_time__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace mros_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SyncTime_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mros_msgs::msg::SyncTime(_init);
}

void SyncTime_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mros_msgs::msg::SyncTime *>(message_memory);
  typed_message->~SyncTime();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SyncTime_message_member_array[2] = {
  {
    "tick",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mros_msgs::msg::SyncTime, tick),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mros_msgs::msg::SyncTime, data),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SyncTime_message_members = {
  "mros_msgs::msg",  // message namespace
  "SyncTime",  // message name
  2,  // number of fields
  sizeof(mros_msgs::msg::SyncTime),
  false,  // has_any_key_member_
  SyncTime_message_member_array,  // message members
  SyncTime_init_function,  // function to initialize message memory (memory has to be allocated)
  SyncTime_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SyncTime_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SyncTime_message_members,
  get_message_typesupport_handle_function,
  &mros_msgs__msg__SyncTime__get_type_hash,
  &mros_msgs__msg__SyncTime__get_type_description,
  &mros_msgs__msg__SyncTime__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace mros_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mros_msgs::msg::SyncTime>()
{
  return &::mros_msgs::msg::rosidl_typesupport_introspection_cpp::SyncTime_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mros_msgs, msg, SyncTime)() {
  return &::mros_msgs::msg::rosidl_typesupport_introspection_cpp::SyncTime_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
