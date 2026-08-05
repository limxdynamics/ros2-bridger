// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from teleop_msgs:msg/TeleopMsg.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "teleop_msgs/msg/detail/teleop_msg__struct.hpp"
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

void TeleopMsg_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) teleop_msgs::msg::TeleopMsg(_init);
}

void TeleopMsg_fini_function(void * message_memory)
{
  auto typed_message = static_cast<teleop_msgs::msg::TeleopMsg *>(message_memory);
  typed_message->~TeleopMsg();
}

size_t size_function__TeleopMsg__anchors(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<teleop_msgs::msg::KeyPoint> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TeleopMsg__anchors(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<teleop_msgs::msg::KeyPoint> *>(untyped_member);
  return &member[index];
}

void * get_function__TeleopMsg__anchors(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<teleop_msgs::msg::KeyPoint> *>(untyped_member);
  return &member[index];
}

void fetch_function__TeleopMsg__anchors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const teleop_msgs::msg::KeyPoint *>(
    get_const_function__TeleopMsg__anchors(untyped_member, index));
  auto & value = *reinterpret_cast<teleop_msgs::msg::KeyPoint *>(untyped_value);
  value = item;
}

void assign_function__TeleopMsg__anchors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<teleop_msgs::msg::KeyPoint *>(
    get_function__TeleopMsg__anchors(untyped_member, index));
  const auto & value = *reinterpret_cast<const teleop_msgs::msg::KeyPoint *>(untyped_value);
  item = value;
}

void resize_function__TeleopMsg__anchors(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<teleop_msgs::msg::KeyPoint> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TeleopMsg_message_member_array[4] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(teleop_msgs::msg::TeleopMsg, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "world",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(teleop_msgs::msg::TeleopMsg, world),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "anchors",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<teleop_msgs::msg::KeyPoint>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(teleop_msgs::msg::TeleopMsg, anchors),  // bytes offset in struct
    nullptr,  // default value
    size_function__TeleopMsg__anchors,  // size() function pointer
    get_const_function__TeleopMsg__anchors,  // get_const(index) function pointer
    get_function__TeleopMsg__anchors,  // get(index) function pointer
    fetch_function__TeleopMsg__anchors,  // fetch(index, &value) function pointer
    assign_function__TeleopMsg__anchors,  // assign(index, value) function pointer
    resize_function__TeleopMsg__anchors  // resize(index) function pointer
  },
  {
    "joint_cmd",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<controller_msgs::msg::JointCmd>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(teleop_msgs::msg::TeleopMsg, joint_cmd),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TeleopMsg_message_members = {
  "teleop_msgs::msg",  // message namespace
  "TeleopMsg",  // message name
  4,  // number of fields
  sizeof(teleop_msgs::msg::TeleopMsg),
  TeleopMsg_message_member_array,  // message members
  TeleopMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  TeleopMsg_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TeleopMsg_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TeleopMsg_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace teleop_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<teleop_msgs::msg::TeleopMsg>()
{
  return &::teleop_msgs::msg::rosidl_typesupport_introspection_cpp::TeleopMsg_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, teleop_msgs, msg, TeleopMsg)() {
  return &::teleop_msgs::msg::rosidl_typesupport_introspection_cpp::TeleopMsg_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
