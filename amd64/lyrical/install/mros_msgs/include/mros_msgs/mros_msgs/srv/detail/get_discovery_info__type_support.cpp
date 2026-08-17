// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mros_msgs:srv/GetDiscoveryInfo.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mros_msgs/srv/detail/get_discovery_info__functions.h"
#include "mros_msgs/srv/detail/get_discovery_info__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace mros_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetDiscoveryInfo_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mros_msgs::srv::GetDiscoveryInfo_Request(_init);
}

void GetDiscoveryInfo_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mros_msgs::srv::GetDiscoveryInfo_Request *>(message_memory);
  typed_message->~GetDiscoveryInfo_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetDiscoveryInfo_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mros_msgs::srv::GetDiscoveryInfo_Request, structure_needs_at_least_one_member),  // bytes offset in struct
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

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetDiscoveryInfo_Request_message_members = {
  "mros_msgs::srv",  // message namespace
  "GetDiscoveryInfo_Request",  // message name
  1,  // number of fields
  sizeof(mros_msgs::srv::GetDiscoveryInfo_Request),
  false,  // has_any_key_member_
  GetDiscoveryInfo_Request_message_member_array,  // message members
  GetDiscoveryInfo_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetDiscoveryInfo_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetDiscoveryInfo_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetDiscoveryInfo_Request_message_members,
  get_message_typesupport_handle_function,
  &mros_msgs__srv__GetDiscoveryInfo_Request__get_type_hash,
  &mros_msgs__srv__GetDiscoveryInfo_Request__get_type_description,
  &mros_msgs__srv__GetDiscoveryInfo_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace mros_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mros_msgs::srv::GetDiscoveryInfo_Request>()
{
  return &::mros_msgs::srv::rosidl_typesupport_introspection_cpp::GetDiscoveryInfo_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mros_msgs, srv, GetDiscoveryInfo_Request)() {
  return &::mros_msgs::srv::rosidl_typesupport_introspection_cpp::GetDiscoveryInfo_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "mros_msgs/srv/detail/get_discovery_info__functions.h"
// already included above
// #include "mros_msgs/srv/detail/get_discovery_info__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace mros_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetDiscoveryInfo_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mros_msgs::srv::GetDiscoveryInfo_Response(_init);
}

void GetDiscoveryInfo_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mros_msgs::srv::GetDiscoveryInfo_Response *>(message_memory);
  typed_message->~GetDiscoveryInfo_Response();
}

size_t size_function__GetDiscoveryInfo_Response__nodes(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<mros_msgs::msg::NodeInfo> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetDiscoveryInfo_Response__nodes(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<mros_msgs::msg::NodeInfo> *>(untyped_member);
  return &member[index];
}

void * get_function__GetDiscoveryInfo_Response__nodes(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<mros_msgs::msg::NodeInfo> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetDiscoveryInfo_Response__nodes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const mros_msgs::msg::NodeInfo *>(
    get_const_function__GetDiscoveryInfo_Response__nodes(untyped_member, index));
  auto & value = *reinterpret_cast<mros_msgs::msg::NodeInfo *>(untyped_value);
  value = item;
}

void assign_function__GetDiscoveryInfo_Response__nodes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<mros_msgs::msg::NodeInfo *>(
    get_function__GetDiscoveryInfo_Response__nodes(untyped_member, index));
  const auto & value = *reinterpret_cast<const mros_msgs::msg::NodeInfo *>(untyped_value);
  item = value;
}

void resize_function__GetDiscoveryInfo_Response__nodes(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<mros_msgs::msg::NodeInfo> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GetDiscoveryInfo_Response__subscribers(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<mros_msgs::msg::TopicInfo> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetDiscoveryInfo_Response__subscribers(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<mros_msgs::msg::TopicInfo> *>(untyped_member);
  return &member[index];
}

void * get_function__GetDiscoveryInfo_Response__subscribers(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<mros_msgs::msg::TopicInfo> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetDiscoveryInfo_Response__subscribers(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const mros_msgs::msg::TopicInfo *>(
    get_const_function__GetDiscoveryInfo_Response__subscribers(untyped_member, index));
  auto & value = *reinterpret_cast<mros_msgs::msg::TopicInfo *>(untyped_value);
  value = item;
}

void assign_function__GetDiscoveryInfo_Response__subscribers(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<mros_msgs::msg::TopicInfo *>(
    get_function__GetDiscoveryInfo_Response__subscribers(untyped_member, index));
  const auto & value = *reinterpret_cast<const mros_msgs::msg::TopicInfo *>(untyped_value);
  item = value;
}

void resize_function__GetDiscoveryInfo_Response__subscribers(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<mros_msgs::msg::TopicInfo> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GetDiscoveryInfo_Response__publishers(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<mros_msgs::msg::TopicInfo> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetDiscoveryInfo_Response__publishers(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<mros_msgs::msg::TopicInfo> *>(untyped_member);
  return &member[index];
}

void * get_function__GetDiscoveryInfo_Response__publishers(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<mros_msgs::msg::TopicInfo> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetDiscoveryInfo_Response__publishers(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const mros_msgs::msg::TopicInfo *>(
    get_const_function__GetDiscoveryInfo_Response__publishers(untyped_member, index));
  auto & value = *reinterpret_cast<mros_msgs::msg::TopicInfo *>(untyped_value);
  value = item;
}

void assign_function__GetDiscoveryInfo_Response__publishers(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<mros_msgs::msg::TopicInfo *>(
    get_function__GetDiscoveryInfo_Response__publishers(untyped_member, index));
  const auto & value = *reinterpret_cast<const mros_msgs::msg::TopicInfo *>(untyped_value);
  item = value;
}

void resize_function__GetDiscoveryInfo_Response__publishers(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<mros_msgs::msg::TopicInfo> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GetDiscoveryInfo_Response__services(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<mros_msgs::msg::TopicInfo> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetDiscoveryInfo_Response__services(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<mros_msgs::msg::TopicInfo> *>(untyped_member);
  return &member[index];
}

void * get_function__GetDiscoveryInfo_Response__services(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<mros_msgs::msg::TopicInfo> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetDiscoveryInfo_Response__services(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const mros_msgs::msg::TopicInfo *>(
    get_const_function__GetDiscoveryInfo_Response__services(untyped_member, index));
  auto & value = *reinterpret_cast<mros_msgs::msg::TopicInfo *>(untyped_value);
  value = item;
}

void assign_function__GetDiscoveryInfo_Response__services(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<mros_msgs::msg::TopicInfo *>(
    get_function__GetDiscoveryInfo_Response__services(untyped_member, index));
  const auto & value = *reinterpret_cast<const mros_msgs::msg::TopicInfo *>(untyped_value);
  item = value;
}

void resize_function__GetDiscoveryInfo_Response__services(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<mros_msgs::msg::TopicInfo> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetDiscoveryInfo_Response_message_member_array[4] = {
  {
    "nodes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<mros_msgs::msg::NodeInfo>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mros_msgs::srv::GetDiscoveryInfo_Response, nodes),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetDiscoveryInfo_Response__nodes,  // size() function pointer
    get_const_function__GetDiscoveryInfo_Response__nodes,  // get_const(index) function pointer
    get_function__GetDiscoveryInfo_Response__nodes,  // get(index) function pointer
    fetch_function__GetDiscoveryInfo_Response__nodes,  // fetch(index, &value) function pointer
    assign_function__GetDiscoveryInfo_Response__nodes,  // assign(index, value) function pointer
    resize_function__GetDiscoveryInfo_Response__nodes,  // resize(index) function pointer
    false  // is_rosidl_buffer
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
    offsetof(mros_msgs::srv::GetDiscoveryInfo_Response, subscribers),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetDiscoveryInfo_Response__subscribers,  // size() function pointer
    get_const_function__GetDiscoveryInfo_Response__subscribers,  // get_const(index) function pointer
    get_function__GetDiscoveryInfo_Response__subscribers,  // get(index) function pointer
    fetch_function__GetDiscoveryInfo_Response__subscribers,  // fetch(index, &value) function pointer
    assign_function__GetDiscoveryInfo_Response__subscribers,  // assign(index, value) function pointer
    resize_function__GetDiscoveryInfo_Response__subscribers,  // resize(index) function pointer
    false  // is_rosidl_buffer
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
    offsetof(mros_msgs::srv::GetDiscoveryInfo_Response, publishers),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetDiscoveryInfo_Response__publishers,  // size() function pointer
    get_const_function__GetDiscoveryInfo_Response__publishers,  // get_const(index) function pointer
    get_function__GetDiscoveryInfo_Response__publishers,  // get(index) function pointer
    fetch_function__GetDiscoveryInfo_Response__publishers,  // fetch(index, &value) function pointer
    assign_function__GetDiscoveryInfo_Response__publishers,  // assign(index, value) function pointer
    resize_function__GetDiscoveryInfo_Response__publishers,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "services",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<mros_msgs::msg::TopicInfo>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mros_msgs::srv::GetDiscoveryInfo_Response, services),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetDiscoveryInfo_Response__services,  // size() function pointer
    get_const_function__GetDiscoveryInfo_Response__services,  // get_const(index) function pointer
    get_function__GetDiscoveryInfo_Response__services,  // get(index) function pointer
    fetch_function__GetDiscoveryInfo_Response__services,  // fetch(index, &value) function pointer
    assign_function__GetDiscoveryInfo_Response__services,  // assign(index, value) function pointer
    resize_function__GetDiscoveryInfo_Response__services,  // resize(index) function pointer
    false  // is_rosidl_buffer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetDiscoveryInfo_Response_message_members = {
  "mros_msgs::srv",  // message namespace
  "GetDiscoveryInfo_Response",  // message name
  4,  // number of fields
  sizeof(mros_msgs::srv::GetDiscoveryInfo_Response),
  false,  // has_any_key_member_
  GetDiscoveryInfo_Response_message_member_array,  // message members
  GetDiscoveryInfo_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetDiscoveryInfo_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetDiscoveryInfo_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetDiscoveryInfo_Response_message_members,
  get_message_typesupport_handle_function,
  &mros_msgs__srv__GetDiscoveryInfo_Response__get_type_hash,
  &mros_msgs__srv__GetDiscoveryInfo_Response__get_type_description,
  &mros_msgs__srv__GetDiscoveryInfo_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace mros_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mros_msgs::srv::GetDiscoveryInfo_Response>()
{
  return &::mros_msgs::srv::rosidl_typesupport_introspection_cpp::GetDiscoveryInfo_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mros_msgs, srv, GetDiscoveryInfo_Response)() {
  return &::mros_msgs::srv::rosidl_typesupport_introspection_cpp::GetDiscoveryInfo_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "mros_msgs/srv/detail/get_discovery_info__functions.h"
// already included above
// #include "mros_msgs/srv/detail/get_discovery_info__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace mros_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetDiscoveryInfo_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mros_msgs::srv::GetDiscoveryInfo_Event(_init);
}

void GetDiscoveryInfo_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mros_msgs::srv::GetDiscoveryInfo_Event *>(message_memory);
  typed_message->~GetDiscoveryInfo_Event();
}

size_t size_function__GetDiscoveryInfo_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<mros_msgs::srv::GetDiscoveryInfo_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetDiscoveryInfo_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<mros_msgs::srv::GetDiscoveryInfo_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__GetDiscoveryInfo_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<mros_msgs::srv::GetDiscoveryInfo_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetDiscoveryInfo_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const mros_msgs::srv::GetDiscoveryInfo_Request *>(
    get_const_function__GetDiscoveryInfo_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<mros_msgs::srv::GetDiscoveryInfo_Request *>(untyped_value);
  value = item;
}

void assign_function__GetDiscoveryInfo_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<mros_msgs::srv::GetDiscoveryInfo_Request *>(
    get_function__GetDiscoveryInfo_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const mros_msgs::srv::GetDiscoveryInfo_Request *>(untyped_value);
  item = value;
}

void resize_function__GetDiscoveryInfo_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<mros_msgs::srv::GetDiscoveryInfo_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GetDiscoveryInfo_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<mros_msgs::srv::GetDiscoveryInfo_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetDiscoveryInfo_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<mros_msgs::srv::GetDiscoveryInfo_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__GetDiscoveryInfo_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<mros_msgs::srv::GetDiscoveryInfo_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetDiscoveryInfo_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const mros_msgs::srv::GetDiscoveryInfo_Response *>(
    get_const_function__GetDiscoveryInfo_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<mros_msgs::srv::GetDiscoveryInfo_Response *>(untyped_value);
  value = item;
}

void assign_function__GetDiscoveryInfo_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<mros_msgs::srv::GetDiscoveryInfo_Response *>(
    get_function__GetDiscoveryInfo_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const mros_msgs::srv::GetDiscoveryInfo_Response *>(untyped_value);
  item = value;
}

void resize_function__GetDiscoveryInfo_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<mros_msgs::srv::GetDiscoveryInfo_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetDiscoveryInfo_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mros_msgs::srv::GetDiscoveryInfo_Event, info),  // bytes offset in struct
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
    "request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<mros_msgs::srv::GetDiscoveryInfo_Request>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(mros_msgs::srv::GetDiscoveryInfo_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetDiscoveryInfo_Event__request,  // size() function pointer
    get_const_function__GetDiscoveryInfo_Event__request,  // get_const(index) function pointer
    get_function__GetDiscoveryInfo_Event__request,  // get(index) function pointer
    fetch_function__GetDiscoveryInfo_Event__request,  // fetch(index, &value) function pointer
    assign_function__GetDiscoveryInfo_Event__request,  // assign(index, value) function pointer
    resize_function__GetDiscoveryInfo_Event__request,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<mros_msgs::srv::GetDiscoveryInfo_Response>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(mros_msgs::srv::GetDiscoveryInfo_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetDiscoveryInfo_Event__response,  // size() function pointer
    get_const_function__GetDiscoveryInfo_Event__response,  // get_const(index) function pointer
    get_function__GetDiscoveryInfo_Event__response,  // get(index) function pointer
    fetch_function__GetDiscoveryInfo_Event__response,  // fetch(index, &value) function pointer
    assign_function__GetDiscoveryInfo_Event__response,  // assign(index, value) function pointer
    resize_function__GetDiscoveryInfo_Event__response,  // resize(index) function pointer
    false  // is_rosidl_buffer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetDiscoveryInfo_Event_message_members = {
  "mros_msgs::srv",  // message namespace
  "GetDiscoveryInfo_Event",  // message name
  3,  // number of fields
  sizeof(mros_msgs::srv::GetDiscoveryInfo_Event),
  false,  // has_any_key_member_
  GetDiscoveryInfo_Event_message_member_array,  // message members
  GetDiscoveryInfo_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  GetDiscoveryInfo_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetDiscoveryInfo_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetDiscoveryInfo_Event_message_members,
  get_message_typesupport_handle_function,
  &mros_msgs__srv__GetDiscoveryInfo_Event__get_type_hash,
  &mros_msgs__srv__GetDiscoveryInfo_Event__get_type_description,
  &mros_msgs__srv__GetDiscoveryInfo_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace mros_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mros_msgs::srv::GetDiscoveryInfo_Event>()
{
  return &::mros_msgs::srv::rosidl_typesupport_introspection_cpp::GetDiscoveryInfo_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mros_msgs, srv, GetDiscoveryInfo_Event)() {
  return &::mros_msgs::srv::rosidl_typesupport_introspection_cpp::GetDiscoveryInfo_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "mros_msgs/srv/detail/get_discovery_info__functions.h"
// already included above
// #include "mros_msgs/srv/detail/get_discovery_info__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace mros_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers GetDiscoveryInfo_service_members = {
  "mros_msgs::srv",  // service namespace
  "GetDiscoveryInfo",  // service name
  // the following fields are initialized below on first access
  // see get_service_type_support_handle<mros_msgs::srv::GetDiscoveryInfo>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t GetDiscoveryInfo_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetDiscoveryInfo_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<mros_msgs::srv::GetDiscoveryInfo_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<mros_msgs::srv::GetDiscoveryInfo_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<mros_msgs::srv::GetDiscoveryInfo_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<mros_msgs::srv::GetDiscoveryInfo>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<mros_msgs::srv::GetDiscoveryInfo>,
  &mros_msgs__srv__GetDiscoveryInfo__get_type_hash,
  &mros_msgs__srv__GetDiscoveryInfo__get_type_description,
  &mros_msgs__srv__GetDiscoveryInfo__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace mros_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<mros_msgs::srv::GetDiscoveryInfo>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::mros_msgs::srv::rosidl_typesupport_introspection_cpp::GetDiscoveryInfo_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure all of the service_members are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr ||
    service_members->event_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::mros_msgs::srv::GetDiscoveryInfo_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::mros_msgs::srv::GetDiscoveryInfo_Response
      >()->data
      );
    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::mros_msgs::srv::GetDiscoveryInfo_Event
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mros_msgs, srv, GetDiscoveryInfo)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<mros_msgs::srv::GetDiscoveryInfo>();
}

#ifdef __cplusplus
}
#endif
