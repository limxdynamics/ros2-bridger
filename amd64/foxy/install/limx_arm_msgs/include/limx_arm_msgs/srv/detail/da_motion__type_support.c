// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from limx_arm_msgs:srv/DA_motion.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "limx_arm_msgs/srv/detail/da_motion__rosidl_typesupport_introspection_c.h"
#include "limx_arm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "limx_arm_msgs/srv/detail/da_motion__functions.h"
#include "limx_arm_msgs/srv/detail/da_motion__struct.h"


// Include directives for member types
// Member `functionName`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DA_motion_Request__rosidl_typesupport_introspection_c__DA_motion_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  limx_arm_msgs__srv__DA_motion_Request__init(message_memory);
}

void DA_motion_Request__rosidl_typesupport_introspection_c__DA_motion_Request_fini_function(void * message_memory)
{
  limx_arm_msgs__srv__DA_motion_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DA_motion_Request__rosidl_typesupport_introspection_c__DA_motion_Request_message_member_array[7] = {
  {
    "functionName",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(limx_arm_msgs__srv__DA_motion_Request, functionName),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left_arm_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(limx_arm_msgs__srv__DA_motion_Request, left_arm_pos),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right_arm_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(limx_arm_msgs__srv__DA_motion_Request, right_arm_pos),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(limx_arm_msgs__srv__DA_motion_Request, speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left_arm_joints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(limx_arm_msgs__srv__DA_motion_Request, left_arm_joints),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right_arm_joints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(limx_arm_msgs__srv__DA_motion_Request, right_arm_joints),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "headPos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(limx_arm_msgs__srv__DA_motion_Request, headPos),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DA_motion_Request__rosidl_typesupport_introspection_c__DA_motion_Request_message_members = {
  "limx_arm_msgs__srv",  // message namespace
  "DA_motion_Request",  // message name
  7,  // number of fields
  sizeof(limx_arm_msgs__srv__DA_motion_Request),
  DA_motion_Request__rosidl_typesupport_introspection_c__DA_motion_Request_message_member_array,  // message members
  DA_motion_Request__rosidl_typesupport_introspection_c__DA_motion_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  DA_motion_Request__rosidl_typesupport_introspection_c__DA_motion_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DA_motion_Request__rosidl_typesupport_introspection_c__DA_motion_Request_message_type_support_handle = {
  0,
  &DA_motion_Request__rosidl_typesupport_introspection_c__DA_motion_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_limx_arm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, limx_arm_msgs, srv, DA_motion_Request)() {
  if (!DA_motion_Request__rosidl_typesupport_introspection_c__DA_motion_Request_message_type_support_handle.typesupport_identifier) {
    DA_motion_Request__rosidl_typesupport_introspection_c__DA_motion_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DA_motion_Request__rosidl_typesupport_introspection_c__DA_motion_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "limx_arm_msgs/srv/detail/da_motion__rosidl_typesupport_introspection_c.h"
// already included above
// #include "limx_arm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "limx_arm_msgs/srv/detail/da_motion__functions.h"
// already included above
// #include "limx_arm_msgs/srv/detail/da_motion__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void DA_motion_Response__rosidl_typesupport_introspection_c__DA_motion_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  limx_arm_msgs__srv__DA_motion_Response__init(message_memory);
}

void DA_motion_Response__rosidl_typesupport_introspection_c__DA_motion_Response_fini_function(void * message_memory)
{
  limx_arm_msgs__srv__DA_motion_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DA_motion_Response__rosidl_typesupport_introspection_c__DA_motion_Response_message_member_array[1] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(limx_arm_msgs__srv__DA_motion_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DA_motion_Response__rosidl_typesupport_introspection_c__DA_motion_Response_message_members = {
  "limx_arm_msgs__srv",  // message namespace
  "DA_motion_Response",  // message name
  1,  // number of fields
  sizeof(limx_arm_msgs__srv__DA_motion_Response),
  DA_motion_Response__rosidl_typesupport_introspection_c__DA_motion_Response_message_member_array,  // message members
  DA_motion_Response__rosidl_typesupport_introspection_c__DA_motion_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  DA_motion_Response__rosidl_typesupport_introspection_c__DA_motion_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DA_motion_Response__rosidl_typesupport_introspection_c__DA_motion_Response_message_type_support_handle = {
  0,
  &DA_motion_Response__rosidl_typesupport_introspection_c__DA_motion_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_limx_arm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, limx_arm_msgs, srv, DA_motion_Response)() {
  if (!DA_motion_Response__rosidl_typesupport_introspection_c__DA_motion_Response_message_type_support_handle.typesupport_identifier) {
    DA_motion_Response__rosidl_typesupport_introspection_c__DA_motion_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DA_motion_Response__rosidl_typesupport_introspection_c__DA_motion_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "limx_arm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "limx_arm_msgs/srv/detail/da_motion__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers limx_arm_msgs__srv__detail__da_motion__rosidl_typesupport_introspection_c__DA_motion_service_members = {
  "limx_arm_msgs__srv",  // service namespace
  "DA_motion",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // limx_arm_msgs__srv__detail__da_motion__rosidl_typesupport_introspection_c__DA_motion_Request_message_type_support_handle,
  NULL  // response message
  // limx_arm_msgs__srv__detail__da_motion__rosidl_typesupport_introspection_c__DA_motion_Response_message_type_support_handle
};

static rosidl_service_type_support_t limx_arm_msgs__srv__detail__da_motion__rosidl_typesupport_introspection_c__DA_motion_service_type_support_handle = {
  0,
  &limx_arm_msgs__srv__detail__da_motion__rosidl_typesupport_introspection_c__DA_motion_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, limx_arm_msgs, srv, DA_motion_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, limx_arm_msgs, srv, DA_motion_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_limx_arm_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, limx_arm_msgs, srv, DA_motion)() {
  if (!limx_arm_msgs__srv__detail__da_motion__rosidl_typesupport_introspection_c__DA_motion_service_type_support_handle.typesupport_identifier) {
    limx_arm_msgs__srv__detail__da_motion__rosidl_typesupport_introspection_c__DA_motion_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)limx_arm_msgs__srv__detail__da_motion__rosidl_typesupport_introspection_c__DA_motion_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, limx_arm_msgs, srv, DA_motion_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, limx_arm_msgs, srv, DA_motion_Response)()->data;
  }

  return &limx_arm_msgs__srv__detail__da_motion__rosidl_typesupport_introspection_c__DA_motion_service_type_support_handle;
}
