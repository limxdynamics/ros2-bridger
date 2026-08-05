// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from limx_arm_msgs:msg/JointStatus.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "limx_arm_msgs/msg/detail/joint_status__struct.hpp"
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

void JointStatus_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) limx_arm_msgs::msg::JointStatus(_init);
}

void JointStatus_fini_function(void * message_memory)
{
  auto typed_message = static_cast<limx_arm_msgs::msg::JointStatus *>(message_memory);
  typed_message->~JointStatus();
}

size_t size_function__JointStatus__enable(const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * get_const_function__JointStatus__enable(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int32_t, 6> *>(untyped_member);
  return &member[index];
}

void * get_function__JointStatus__enable(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int32_t, 6> *>(untyped_member);
  return &member[index];
}

void fetch_function__JointStatus__enable(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__JointStatus__enable(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__JointStatus__enable(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__JointStatus__enable(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

size_t size_function__JointStatus__error(const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * get_const_function__JointStatus__error(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<std::string, 6> *>(untyped_member);
  return &member[index];
}

void * get_function__JointStatus__error(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<std::string, 6> *>(untyped_member);
  return &member[index];
}

void fetch_function__JointStatus__error(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__JointStatus__error(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__JointStatus__error(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__JointStatus__error(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

size_t size_function__JointStatus__zero(const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * get_const_function__JointStatus__zero(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 6> *>(untyped_member);
  return &member[index];
}

void * get_function__JointStatus__zero(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 6> *>(untyped_member);
  return &member[index];
}

void fetch_function__JointStatus__zero(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__JointStatus__zero(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__JointStatus__zero(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__JointStatus__zero(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__JointStatus__limit_min(const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * get_const_function__JointStatus__limit_min(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 6> *>(untyped_member);
  return &member[index];
}

void * get_function__JointStatus__limit_min(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 6> *>(untyped_member);
  return &member[index];
}

void fetch_function__JointStatus__limit_min(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__JointStatus__limit_min(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__JointStatus__limit_min(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__JointStatus__limit_min(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__JointStatus__limit_max(const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * get_const_function__JointStatus__limit_max(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 6> *>(untyped_member);
  return &member[index];
}

void * get_function__JointStatus__limit_max(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 6> *>(untyped_member);
  return &member[index];
}

void fetch_function__JointStatus__limit_max(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__JointStatus__limit_max(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__JointStatus__limit_max(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__JointStatus__limit_max(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__JointStatus__tool_size(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__JointStatus__tool_size(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__JointStatus__tool_size(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__JointStatus__tool_size(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__JointStatus__tool_size(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__JointStatus__tool_size(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__JointStatus__tool_size(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember JointStatus_message_member_array[13] = {
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(limx_arm_msgs::msg::JointStatus, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "deviceid",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(limx_arm_msgs::msg::JointStatus, deviceid),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "run_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(limx_arm_msgs::msg::JointStatus, run_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "enable",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(limx_arm_msgs::msg::JointStatus, enable),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointStatus__enable,  // size() function pointer
    get_const_function__JointStatus__enable,  // get_const(index) function pointer
    get_function__JointStatus__enable,  // get(index) function pointer
    fetch_function__JointStatus__enable,  // fetch(index, &value) function pointer
    assign_function__JointStatus__enable,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "error",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(limx_arm_msgs::msg::JointStatus, error),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointStatus__error,  // size() function pointer
    get_const_function__JointStatus__error,  // get_const(index) function pointer
    get_function__JointStatus__error,  // get(index) function pointer
    fetch_function__JointStatus__error,  // fetch(index, &value) function pointer
    assign_function__JointStatus__error,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "zero",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(limx_arm_msgs::msg::JointStatus, zero),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointStatus__zero,  // size() function pointer
    get_const_function__JointStatus__zero,  // get_const(index) function pointer
    get_function__JointStatus__zero,  // get(index) function pointer
    fetch_function__JointStatus__zero,  // fetch(index, &value) function pointer
    assign_function__JointStatus__zero,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "limit_min",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(limx_arm_msgs::msg::JointStatus, limit_min),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointStatus__limit_min,  // size() function pointer
    get_const_function__JointStatus__limit_min,  // get_const(index) function pointer
    get_function__JointStatus__limit_min,  // get(index) function pointer
    fetch_function__JointStatus__limit_min,  // fetch(index, &value) function pointer
    assign_function__JointStatus__limit_min,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "limit_max",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(limx_arm_msgs::msg::JointStatus, limit_max),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointStatus__limit_max,  // size() function pointer
    get_const_function__JointStatus__limit_max,  // get_const(index) function pointer
    get_function__JointStatus__limit_max,  // get(index) function pointer
    fetch_function__JointStatus__limit_max,  // fetch(index, &value) function pointer
    assign_function__JointStatus__limit_max,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tool_size",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(limx_arm_msgs::msg::JointStatus, tool_size),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointStatus__tool_size,  // size() function pointer
    get_const_function__JointStatus__tool_size,  // get_const(index) function pointer
    get_function__JointStatus__tool_size,  // get(index) function pointer
    fetch_function__JointStatus__tool_size,  // fetch(index, &value) function pointer
    assign_function__JointStatus__tool_size,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "mode",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(limx_arm_msgs::msg::JointStatus, mode),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(limx_arm_msgs::msg::JointStatus, state),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "play_state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(limx_arm_msgs::msg::JointStatus, play_state),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "log_path",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(limx_arm_msgs::msg::JointStatus, log_path),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers JointStatus_message_members = {
  "limx_arm_msgs::msg",  // message namespace
  "JointStatus",  // message name
  13,  // number of fields
  sizeof(limx_arm_msgs::msg::JointStatus),
  JointStatus_message_member_array,  // message members
  JointStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  JointStatus_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t JointStatus_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &JointStatus_message_members,
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
get_message_type_support_handle<limx_arm_msgs::msg::JointStatus>()
{
  return &::limx_arm_msgs::msg::rosidl_typesupport_introspection_cpp::JointStatus_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, limx_arm_msgs, msg, JointStatus)() {
  return &::limx_arm_msgs::msg::rosidl_typesupport_introspection_cpp::JointStatus_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
