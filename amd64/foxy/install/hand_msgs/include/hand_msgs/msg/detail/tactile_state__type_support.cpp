// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from hand_msgs:msg/TactileState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "hand_msgs/msg/detail/tactile_state__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace hand_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void TactileState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) hand_msgs::msg::TactileState(_init);
}

void TactileState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<hand_msgs::msg::TactileState *>(message_memory);
  typed_message->~TactileState();
}

size_t size_function__TactileState__names(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TactileState__names(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__TactileState__names(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void resize_function__TactileState__names(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TactileState__normal_force(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TactileState__normal_force(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__TactileState__normal_force(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__TactileState__normal_force(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TactileState__tangential_force(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TactileState__tangential_force(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__TactileState__tangential_force(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__TactileState__tangential_force(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TactileState__direction_angle(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TactileState__direction_angle(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__TactileState__direction_angle(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__TactileState__direction_angle(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TactileState__approximate_value(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TactileState__approximate_value(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__TactileState__approximate_value(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void resize_function__TactileState__approximate_value(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TactileState__tactile_state(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TactileState__tactile_state(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void * get_function__TactileState__tactile_state(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void resize_function__TactileState__tactile_state(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TactileState_message_member_array[7] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hand_msgs::msg::TactileState, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "names",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hand_msgs::msg::TactileState, names),  // bytes offset in struct
    nullptr,  // default value
    size_function__TactileState__names,  // size() function pointer
    get_const_function__TactileState__names,  // get_const(index) function pointer
    get_function__TactileState__names,  // get(index) function pointer
    resize_function__TactileState__names  // resize(index) function pointer
  },
  {
    "normal_force",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hand_msgs::msg::TactileState, normal_force),  // bytes offset in struct
    nullptr,  // default value
    size_function__TactileState__normal_force,  // size() function pointer
    get_const_function__TactileState__normal_force,  // get_const(index) function pointer
    get_function__TactileState__normal_force,  // get(index) function pointer
    resize_function__TactileState__normal_force  // resize(index) function pointer
  },
  {
    "tangential_force",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hand_msgs::msg::TactileState, tangential_force),  // bytes offset in struct
    nullptr,  // default value
    size_function__TactileState__tangential_force,  // size() function pointer
    get_const_function__TactileState__tangential_force,  // get_const(index) function pointer
    get_function__TactileState__tangential_force,  // get(index) function pointer
    resize_function__TactileState__tangential_force  // resize(index) function pointer
  },
  {
    "direction_angle",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hand_msgs::msg::TactileState, direction_angle),  // bytes offset in struct
    nullptr,  // default value
    size_function__TactileState__direction_angle,  // size() function pointer
    get_const_function__TactileState__direction_angle,  // get_const(index) function pointer
    get_function__TactileState__direction_angle,  // get(index) function pointer
    resize_function__TactileState__direction_angle  // resize(index) function pointer
  },
  {
    "approximate_value",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hand_msgs::msg::TactileState, approximate_value),  // bytes offset in struct
    nullptr,  // default value
    size_function__TactileState__approximate_value,  // size() function pointer
    get_const_function__TactileState__approximate_value,  // get_const(index) function pointer
    get_function__TactileState__approximate_value,  // get(index) function pointer
    resize_function__TactileState__approximate_value  // resize(index) function pointer
  },
  {
    "tactile_state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hand_msgs::msg::TactileState, tactile_state),  // bytes offset in struct
    nullptr,  // default value
    size_function__TactileState__tactile_state,  // size() function pointer
    get_const_function__TactileState__tactile_state,  // get_const(index) function pointer
    get_function__TactileState__tactile_state,  // get(index) function pointer
    resize_function__TactileState__tactile_state  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TactileState_message_members = {
  "hand_msgs::msg",  // message namespace
  "TactileState",  // message name
  7,  // number of fields
  sizeof(hand_msgs::msg::TactileState),
  TactileState_message_member_array,  // message members
  TactileState_init_function,  // function to initialize message memory (memory has to be allocated)
  TactileState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TactileState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TactileState_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace hand_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hand_msgs::msg::TactileState>()
{
  return &::hand_msgs::msg::rosidl_typesupport_introspection_cpp::TactileState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hand_msgs, msg, TactileState)() {
  return &::hand_msgs::msg::rosidl_typesupport_introspection_cpp::TactileState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
