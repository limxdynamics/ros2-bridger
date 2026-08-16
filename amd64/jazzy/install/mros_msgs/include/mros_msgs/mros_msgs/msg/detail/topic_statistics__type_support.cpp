// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mros_msgs:msg/TopicStatistics.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mros_msgs/msg/detail/topic_statistics__functions.h"
#include "mros_msgs/msg/detail/topic_statistics__struct.hpp"
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

void TopicStatistics_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mros_msgs::msg::TopicStatistics(_init);
}

void TopicStatistics_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mros_msgs::msg::TopicStatistics *>(message_memory);
  typed_message->~TopicStatistics();
}

size_t size_function__TopicStatistics__subscribers(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<mros_msgs::msg::TopicInfo> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TopicStatistics__subscribers(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<mros_msgs::msg::TopicInfo> *>(untyped_member);
  return &member[index];
}

void * get_function__TopicStatistics__subscribers(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<mros_msgs::msg::TopicInfo> *>(untyped_member);
  return &member[index];
}

void fetch_function__TopicStatistics__subscribers(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const mros_msgs::msg::TopicInfo *>(
    get_const_function__TopicStatistics__subscribers(untyped_member, index));
  auto & value = *reinterpret_cast<mros_msgs::msg::TopicInfo *>(untyped_value);
  value = item;
}

void assign_function__TopicStatistics__subscribers(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<mros_msgs::msg::TopicInfo *>(
    get_function__TopicStatistics__subscribers(untyped_member, index));
  const auto & value = *reinterpret_cast<const mros_msgs::msg::TopicInfo *>(untyped_value);
  item = value;
}

void resize_function__TopicStatistics__subscribers(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<mros_msgs::msg::TopicInfo> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TopicStatistics__publishers(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<mros_msgs::msg::TopicInfo> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TopicStatistics__publishers(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<mros_msgs::msg::TopicInfo> *>(untyped_member);
  return &member[index];
}

void * get_function__TopicStatistics__publishers(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<mros_msgs::msg::TopicInfo> *>(untyped_member);
  return &member[index];
}

void fetch_function__TopicStatistics__publishers(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const mros_msgs::msg::TopicInfo *>(
    get_const_function__TopicStatistics__publishers(untyped_member, index));
  auto & value = *reinterpret_cast<mros_msgs::msg::TopicInfo *>(untyped_value);
  value = item;
}

void assign_function__TopicStatistics__publishers(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<mros_msgs::msg::TopicInfo *>(
    get_function__TopicStatistics__publishers(untyped_member, index));
  const auto & value = *reinterpret_cast<const mros_msgs::msg::TopicInfo *>(untyped_value);
  item = value;
}

void resize_function__TopicStatistics__publishers(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<mros_msgs::msg::TopicInfo> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TopicStatistics_message_member_array[3] = {
  {
    "node",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mros_msgs::msg::TopicStatistics, node),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "subscribers",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<mros_msgs::msg::TopicInfo>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mros_msgs::msg::TopicStatistics, subscribers),  // bytes offset in struct
    nullptr,  // default value
    size_function__TopicStatistics__subscribers,  // size() function pointer
    get_const_function__TopicStatistics__subscribers,  // get_const(index) function pointer
    get_function__TopicStatistics__subscribers,  // get(index) function pointer
    fetch_function__TopicStatistics__subscribers,  // fetch(index, &value) function pointer
    assign_function__TopicStatistics__subscribers,  // assign(index, value) function pointer
    resize_function__TopicStatistics__subscribers  // resize(index) function pointer
  },
  {
    "publishers",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<mros_msgs::msg::TopicInfo>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mros_msgs::msg::TopicStatistics, publishers),  // bytes offset in struct
    nullptr,  // default value
    size_function__TopicStatistics__publishers,  // size() function pointer
    get_const_function__TopicStatistics__publishers,  // get_const(index) function pointer
    get_function__TopicStatistics__publishers,  // get(index) function pointer
    fetch_function__TopicStatistics__publishers,  // fetch(index, &value) function pointer
    assign_function__TopicStatistics__publishers,  // assign(index, value) function pointer
    resize_function__TopicStatistics__publishers  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TopicStatistics_message_members = {
  "mros_msgs::msg",  // message namespace
  "TopicStatistics",  // message name
  3,  // number of fields
  sizeof(mros_msgs::msg::TopicStatistics),
  false,  // has_any_key_member_
  TopicStatistics_message_member_array,  // message members
  TopicStatistics_init_function,  // function to initialize message memory (memory has to be allocated)
  TopicStatistics_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TopicStatistics_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TopicStatistics_message_members,
  get_message_typesupport_handle_function,
  &mros_msgs__msg__TopicStatistics__get_type_hash,
  &mros_msgs__msg__TopicStatistics__get_type_description,
  &mros_msgs__msg__TopicStatistics__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace mros_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mros_msgs::msg::TopicStatistics>()
{
  return &::mros_msgs::msg::rosidl_typesupport_introspection_cpp::TopicStatistics_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mros_msgs, msg, TopicStatistics)() {
  return &::mros_msgs::msg::rosidl_typesupport_introspection_cpp::TopicStatistics_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
