// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tron2_manipulation:srv/arm_move.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tron2_manipulation/srv/detail/arm_move__rosidl_typesupport_introspection_c.h"
#include "tron2_manipulation/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tron2_manipulation/srv/detail/arm_move__functions.h"
#include "tron2_manipulation/srv/detail/arm_move__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void arm_move_Request__rosidl_typesupport_introspection_c__arm_move_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tron2_manipulation__srv__arm_move_Request__init(message_memory);
}

void arm_move_Request__rosidl_typesupport_introspection_c__arm_move_Request_fini_function(void * message_memory)
{
  tron2_manipulation__srv__arm_move_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember arm_move_Request__rosidl_typesupport_introspection_c__arm_move_Request_message_member_array[3] = {
  {
    "left_arm_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(tron2_manipulation__srv__arm_move_Request, left_arm_pos),  // bytes offset in struct
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
    offsetof(tron2_manipulation__srv__arm_move_Request, right_arm_pos),  // bytes offset in struct
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
    offsetof(tron2_manipulation__srv__arm_move_Request, speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers arm_move_Request__rosidl_typesupport_introspection_c__arm_move_Request_message_members = {
  "tron2_manipulation__srv",  // message namespace
  "arm_move_Request",  // message name
  3,  // number of fields
  sizeof(tron2_manipulation__srv__arm_move_Request),
  arm_move_Request__rosidl_typesupport_introspection_c__arm_move_Request_message_member_array,  // message members
  arm_move_Request__rosidl_typesupport_introspection_c__arm_move_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  arm_move_Request__rosidl_typesupport_introspection_c__arm_move_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t arm_move_Request__rosidl_typesupport_introspection_c__arm_move_Request_message_type_support_handle = {
  0,
  &arm_move_Request__rosidl_typesupport_introspection_c__arm_move_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tron2_manipulation
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tron2_manipulation, srv, arm_move_Request)() {
  if (!arm_move_Request__rosidl_typesupport_introspection_c__arm_move_Request_message_type_support_handle.typesupport_identifier) {
    arm_move_Request__rosidl_typesupport_introspection_c__arm_move_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &arm_move_Request__rosidl_typesupport_introspection_c__arm_move_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tron2_manipulation/srv/detail/arm_move__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tron2_manipulation/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tron2_manipulation/srv/detail/arm_move__functions.h"
// already included above
// #include "tron2_manipulation/srv/detail/arm_move__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void arm_move_Response__rosidl_typesupport_introspection_c__arm_move_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tron2_manipulation__srv__arm_move_Response__init(message_memory);
}

void arm_move_Response__rosidl_typesupport_introspection_c__arm_move_Response_fini_function(void * message_memory)
{
  tron2_manipulation__srv__arm_move_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember arm_move_Response__rosidl_typesupport_introspection_c__arm_move_Response_message_member_array[1] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tron2_manipulation__srv__arm_move_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers arm_move_Response__rosidl_typesupport_introspection_c__arm_move_Response_message_members = {
  "tron2_manipulation__srv",  // message namespace
  "arm_move_Response",  // message name
  1,  // number of fields
  sizeof(tron2_manipulation__srv__arm_move_Response),
  arm_move_Response__rosidl_typesupport_introspection_c__arm_move_Response_message_member_array,  // message members
  arm_move_Response__rosidl_typesupport_introspection_c__arm_move_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  arm_move_Response__rosidl_typesupport_introspection_c__arm_move_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t arm_move_Response__rosidl_typesupport_introspection_c__arm_move_Response_message_type_support_handle = {
  0,
  &arm_move_Response__rosidl_typesupport_introspection_c__arm_move_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tron2_manipulation
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tron2_manipulation, srv, arm_move_Response)() {
  if (!arm_move_Response__rosidl_typesupport_introspection_c__arm_move_Response_message_type_support_handle.typesupport_identifier) {
    arm_move_Response__rosidl_typesupport_introspection_c__arm_move_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &arm_move_Response__rosidl_typesupport_introspection_c__arm_move_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "tron2_manipulation/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "tron2_manipulation/srv/detail/arm_move__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers tron2_manipulation__srv__detail__arm_move__rosidl_typesupport_introspection_c__arm_move_service_members = {
  "tron2_manipulation__srv",  // service namespace
  "arm_move",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // tron2_manipulation__srv__detail__arm_move__rosidl_typesupport_introspection_c__arm_move_Request_message_type_support_handle,
  NULL  // response message
  // tron2_manipulation__srv__detail__arm_move__rosidl_typesupport_introspection_c__arm_move_Response_message_type_support_handle
};

static rosidl_service_type_support_t tron2_manipulation__srv__detail__arm_move__rosidl_typesupport_introspection_c__arm_move_service_type_support_handle = {
  0,
  &tron2_manipulation__srv__detail__arm_move__rosidl_typesupport_introspection_c__arm_move_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tron2_manipulation, srv, arm_move_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tron2_manipulation, srv, arm_move_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tron2_manipulation
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tron2_manipulation, srv, arm_move)() {
  if (!tron2_manipulation__srv__detail__arm_move__rosidl_typesupport_introspection_c__arm_move_service_type_support_handle.typesupport_identifier) {
    tron2_manipulation__srv__detail__arm_move__rosidl_typesupport_introspection_c__arm_move_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)tron2_manipulation__srv__detail__arm_move__rosidl_typesupport_introspection_c__arm_move_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tron2_manipulation, srv, arm_move_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tron2_manipulation, srv, arm_move_Response)()->data;
  }

  return &tron2_manipulation__srv__detail__arm_move__rosidl_typesupport_introspection_c__arm_move_service_type_support_handle;
}
