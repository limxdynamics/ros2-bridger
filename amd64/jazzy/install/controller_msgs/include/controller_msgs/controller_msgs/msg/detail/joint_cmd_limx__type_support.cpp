// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from controller_msgs:msg/JointCmdLimx.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "controller_msgs/msg/detail/joint_cmd_limx__functions.h"
#include "controller_msgs/msg/detail/joint_cmd_limx__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace controller_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void JointCmdLimx_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) controller_msgs::msg::JointCmdLimx(_init);
}

void JointCmdLimx_fini_function(void * message_memory)
{
  auto typed_message = static_cast<controller_msgs::msg::JointCmdLimx *>(message_memory);
  typed_message->~JointCmdLimx();
}

size_t size_function__JointCmdLimx__names(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__JointCmdLimx__names(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__JointCmdLimx__names(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__JointCmdLimx__names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__JointCmdLimx__names(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__JointCmdLimx__names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__JointCmdLimx__names(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__JointCmdLimx__names(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__JointCmdLimx__q(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__JointCmdLimx__q(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__JointCmdLimx__q(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__JointCmdLimx__q(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__JointCmdLimx__q(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__JointCmdLimx__q(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__JointCmdLimx__q(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__JointCmdLimx__q(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__JointCmdLimx__v(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__JointCmdLimx__v(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__JointCmdLimx__v(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__JointCmdLimx__v(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__JointCmdLimx__v(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__JointCmdLimx__v(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__JointCmdLimx__v(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__JointCmdLimx__v(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__JointCmdLimx__tau(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__JointCmdLimx__tau(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__JointCmdLimx__tau(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__JointCmdLimx__tau(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__JointCmdLimx__tau(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__JointCmdLimx__tau(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__JointCmdLimx__tau(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__JointCmdLimx__tau(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__JointCmdLimx__kp(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__JointCmdLimx__kp(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__JointCmdLimx__kp(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__JointCmdLimx__kp(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__JointCmdLimx__kp(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__JointCmdLimx__kp(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__JointCmdLimx__kp(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__JointCmdLimx__kp(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__JointCmdLimx__kd(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__JointCmdLimx__kd(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__JointCmdLimx__kd(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__JointCmdLimx__kd(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__JointCmdLimx__kd(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__JointCmdLimx__kd(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__JointCmdLimx__kd(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__JointCmdLimx__kd(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__JointCmdLimx__mode(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__JointCmdLimx__mode(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__JointCmdLimx__mode(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__JointCmdLimx__mode(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__JointCmdLimx__mode(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__JointCmdLimx__mode(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__JointCmdLimx__mode(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__JointCmdLimx__mode(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__JointCmdLimx__parallel_solver_mode(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__JointCmdLimx__parallel_solver_mode(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__JointCmdLimx__parallel_solver_mode(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__JointCmdLimx__parallel_solver_mode(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__JointCmdLimx__parallel_solver_mode(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__JointCmdLimx__parallel_solver_mode(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__JointCmdLimx__parallel_solver_mode(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__JointCmdLimx__parallel_solver_mode(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember JointCmdLimx_message_member_array[10] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_msgs::msg::JointCmdLimx, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "names",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_msgs::msg::JointCmdLimx, names),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointCmdLimx__names,  // size() function pointer
    get_const_function__JointCmdLimx__names,  // get_const(index) function pointer
    get_function__JointCmdLimx__names,  // get(index) function pointer
    fetch_function__JointCmdLimx__names,  // fetch(index, &value) function pointer
    assign_function__JointCmdLimx__names,  // assign(index, value) function pointer
    resize_function__JointCmdLimx__names  // resize(index) function pointer
  },
  {
    "q",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_msgs::msg::JointCmdLimx, q),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointCmdLimx__q,  // size() function pointer
    get_const_function__JointCmdLimx__q,  // get_const(index) function pointer
    get_function__JointCmdLimx__q,  // get(index) function pointer
    fetch_function__JointCmdLimx__q,  // fetch(index, &value) function pointer
    assign_function__JointCmdLimx__q,  // assign(index, value) function pointer
    resize_function__JointCmdLimx__q  // resize(index) function pointer
  },
  {
    "v",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_msgs::msg::JointCmdLimx, v),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointCmdLimx__v,  // size() function pointer
    get_const_function__JointCmdLimx__v,  // get_const(index) function pointer
    get_function__JointCmdLimx__v,  // get(index) function pointer
    fetch_function__JointCmdLimx__v,  // fetch(index, &value) function pointer
    assign_function__JointCmdLimx__v,  // assign(index, value) function pointer
    resize_function__JointCmdLimx__v  // resize(index) function pointer
  },
  {
    "tau",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_msgs::msg::JointCmdLimx, tau),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointCmdLimx__tau,  // size() function pointer
    get_const_function__JointCmdLimx__tau,  // get_const(index) function pointer
    get_function__JointCmdLimx__tau,  // get(index) function pointer
    fetch_function__JointCmdLimx__tau,  // fetch(index, &value) function pointer
    assign_function__JointCmdLimx__tau,  // assign(index, value) function pointer
    resize_function__JointCmdLimx__tau  // resize(index) function pointer
  },
  {
    "kp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_msgs::msg::JointCmdLimx, kp),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointCmdLimx__kp,  // size() function pointer
    get_const_function__JointCmdLimx__kp,  // get_const(index) function pointer
    get_function__JointCmdLimx__kp,  // get(index) function pointer
    fetch_function__JointCmdLimx__kp,  // fetch(index, &value) function pointer
    assign_function__JointCmdLimx__kp,  // assign(index, value) function pointer
    resize_function__JointCmdLimx__kp  // resize(index) function pointer
  },
  {
    "kd",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_msgs::msg::JointCmdLimx, kd),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointCmdLimx__kd,  // size() function pointer
    get_const_function__JointCmdLimx__kd,  // get_const(index) function pointer
    get_function__JointCmdLimx__kd,  // get(index) function pointer
    fetch_function__JointCmdLimx__kd,  // fetch(index, &value) function pointer
    assign_function__JointCmdLimx__kd,  // assign(index, value) function pointer
    resize_function__JointCmdLimx__kd  // resize(index) function pointer
  },
  {
    "mode",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_msgs::msg::JointCmdLimx, mode),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointCmdLimx__mode,  // size() function pointer
    get_const_function__JointCmdLimx__mode,  // get_const(index) function pointer
    get_function__JointCmdLimx__mode,  // get(index) function pointer
    fetch_function__JointCmdLimx__mode,  // fetch(index, &value) function pointer
    assign_function__JointCmdLimx__mode,  // assign(index, value) function pointer
    resize_function__JointCmdLimx__mode  // resize(index) function pointer
  },
  {
    "na",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_msgs::msg::JointCmdLimx, na),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "parallel_solver_mode",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_msgs::msg::JointCmdLimx, parallel_solver_mode),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointCmdLimx__parallel_solver_mode,  // size() function pointer
    get_const_function__JointCmdLimx__parallel_solver_mode,  // get_const(index) function pointer
    get_function__JointCmdLimx__parallel_solver_mode,  // get(index) function pointer
    fetch_function__JointCmdLimx__parallel_solver_mode,  // fetch(index, &value) function pointer
    assign_function__JointCmdLimx__parallel_solver_mode,  // assign(index, value) function pointer
    resize_function__JointCmdLimx__parallel_solver_mode  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers JointCmdLimx_message_members = {
  "controller_msgs::msg",  // message namespace
  "JointCmdLimx",  // message name
  10,  // number of fields
  sizeof(controller_msgs::msg::JointCmdLimx),
  false,  // has_any_key_member_
  JointCmdLimx_message_member_array,  // message members
  JointCmdLimx_init_function,  // function to initialize message memory (memory has to be allocated)
  JointCmdLimx_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t JointCmdLimx_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &JointCmdLimx_message_members,
  get_message_typesupport_handle_function,
  &controller_msgs__msg__JointCmdLimx__get_type_hash,
  &controller_msgs__msg__JointCmdLimx__get_type_description,
  &controller_msgs__msg__JointCmdLimx__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace controller_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<controller_msgs::msg::JointCmdLimx>()
{
  return &::controller_msgs::msg::rosidl_typesupport_introspection_cpp::JointCmdLimx_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, controller_msgs, msg, JointCmdLimx)() {
  return &::controller_msgs::msg::rosidl_typesupport_introspection_cpp::JointCmdLimx_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
