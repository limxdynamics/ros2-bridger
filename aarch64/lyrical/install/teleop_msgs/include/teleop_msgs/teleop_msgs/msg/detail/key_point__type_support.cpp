// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from teleop_msgs:msg/KeyPoint.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "teleop_msgs/msg/detail/key_point__functions.h"
#include "teleop_msgs/msg/detail/key_point__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace teleop_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void KeyPoint_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) teleop_msgs::msg::KeyPoint(_init);
}

void KeyPoint_fini_function(void * message_memory)
{
  auto typed_message = static_cast<teleop_msgs::msg::KeyPoint *>(message_memory);
  typed_message->~KeyPoint();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember KeyPoint_message_member_array[2] = {
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(teleop_msgs::msg::KeyPoint, name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "pose",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(teleop_msgs::msg::KeyPoint, pose),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr,  // resize(index) function pointer
    false  // is_rosidl_buffer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers KeyPoint_message_members = {
  "teleop_msgs::msg",  // message namespace
  "KeyPoint",  // message name
  2,  // number of fields
  sizeof(teleop_msgs::msg::KeyPoint),
  false,  // has_any_key_member_
  KeyPoint_message_member_array,  // message members
  KeyPoint_init_function,  // function to initialize message memory (memory has to be allocated)
  KeyPoint_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t KeyPoint_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &KeyPoint_message_members,
  get_message_typesupport_handle_function,
  &teleop_msgs__msg__KeyPoint__get_type_hash,
  &teleop_msgs__msg__KeyPoint__get_type_description,
  &teleop_msgs__msg__KeyPoint__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace teleop_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<teleop_msgs::msg::KeyPoint>()
{
  return &::teleop_msgs::msg::rosidl_typesupport_introspection_cpp::KeyPoint_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, teleop_msgs, msg, KeyPoint)() {
  return &::teleop_msgs::msg::rosidl_typesupport_introspection_cpp::KeyPoint_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
