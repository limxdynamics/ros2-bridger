// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from limx_arm_msgs:msg/ServoCmd.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "limx_arm_msgs/msg/detail/servo_cmd__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace limx_arm_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ServoCmd_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) limx_arm_msgs::msg::ServoCmd(_init);
}

void ServoCmd_fini_function(void * message_memory)
{
  auto typed_message = static_cast<limx_arm_msgs::msg::ServoCmd *>(message_memory);
  typed_message->~ServoCmd();
}

size_t size_function__ServoCmd__left_arm_pos(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__ServoCmd__left_arm_pos(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__ServoCmd__left_arm_pos(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 7> *>(untyped_member);
  return &member[index];
}

size_t size_function__ServoCmd__right_arm_pos(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__ServoCmd__right_arm_pos(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__ServoCmd__right_arm_pos(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 7> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ServoCmd_message_member_array[3] = {
  {
    "functionName",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(limx_arm_msgs::msg::ServoCmd, functionName),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "left_arm_pos",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(limx_arm_msgs::msg::ServoCmd, left_arm_pos),  // bytes offset in struct
    nullptr,  // default value
    size_function__ServoCmd__left_arm_pos,  // size() function pointer
    get_const_function__ServoCmd__left_arm_pos,  // get_const(index) function pointer
    get_function__ServoCmd__left_arm_pos,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "right_arm_pos",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(limx_arm_msgs::msg::ServoCmd, right_arm_pos),  // bytes offset in struct
    nullptr,  // default value
    size_function__ServoCmd__right_arm_pos,  // size() function pointer
    get_const_function__ServoCmd__right_arm_pos,  // get_const(index) function pointer
    get_function__ServoCmd__right_arm_pos,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ServoCmd_message_members = {
  "limx_arm_msgs::msg",  // message namespace
  "ServoCmd",  // message name
  3,  // number of fields
  sizeof(limx_arm_msgs::msg::ServoCmd),
  ServoCmd_message_member_array,  // message members
  ServoCmd_init_function,  // function to initialize message memory (memory has to be allocated)
  ServoCmd_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ServoCmd_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ServoCmd_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace limx_arm_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<limx_arm_msgs::msg::ServoCmd>()
{
  return &::limx_arm_msgs::msg::rosidl_typesupport_introspection_cpp::ServoCmd_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, limx_arm_msgs, msg, ServoCmd)() {
  return &::limx_arm_msgs::msg::rosidl_typesupport_introspection_cpp::ServoCmd_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
