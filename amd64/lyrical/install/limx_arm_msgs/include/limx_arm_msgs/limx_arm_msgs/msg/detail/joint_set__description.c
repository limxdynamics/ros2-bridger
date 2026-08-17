// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from limx_arm_msgs:msg/JointSet.idl
// generated code does not contain a copyright notice

#include "limx_arm_msgs/msg/detail/joint_set__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
const rosidl_type_hash_t *
limx_arm_msgs__msg__JointSet__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xda, 0xea, 0x64, 0x84, 0xbb, 0x64, 0x86, 0xb9,
      0x3a, 0x3d, 0x5b, 0x47, 0x24, 0x3d, 0x90, 0x02,
      0x02, 0xb4, 0x3f, 0x89, 0xa0, 0x26, 0x49, 0x06,
      0x3e, 0x26, 0x0d, 0xa4, 0x5a, 0xa9, 0x32, 0xbd,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char limx_arm_msgs__msg__JointSet__TYPE_NAME[] = "limx_arm_msgs/msg/JointSet";

// Define type names, field names, and default values
static char limx_arm_msgs__msg__JointSet__FIELD_NAME__stamp[] = "stamp";
static char limx_arm_msgs__msg__JointSet__FIELD_NAME__deviceid[] = "deviceid";
static char limx_arm_msgs__msg__JointSet__FIELD_NAME__action[] = "action";
static char limx_arm_msgs__msg__JointSet__FIELD_NAME__mode[] = "mode";
static char limx_arm_msgs__msg__JointSet__FIELD_NAME__data[] = "data";

static rosidl_runtime_c__type_description__Field limx_arm_msgs__msg__JointSet__FIELDS[] = {
  {
    {limx_arm_msgs__msg__JointSet__FIELD_NAME__stamp, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {limx_arm_msgs__msg__JointSet__FIELD_NAME__deviceid, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {limx_arm_msgs__msg__JointSet__FIELD_NAME__action, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {limx_arm_msgs__msg__JointSet__FIELD_NAME__mode, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {limx_arm_msgs__msg__JointSet__FIELD_NAME__data, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      6,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
limx_arm_msgs__msg__JointSet__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {limx_arm_msgs__msg__JointSet__TYPE_NAME, 26, 26},
      {limx_arm_msgs__msg__JointSet__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int64 stamp\n"
  "\n"
  "string deviceid\n"
  "\n"
  "# action\n"
  "int32 ACTION_IDLE           = 0\n"
  "int32 ACTION_START          = 1\n"
  "int32 ACTION_PAUSE          = 2\n"
  "int32 ACTION_RESUME         = 3\n"
  "int32 ACTION_STOP           = 4\n"
  "int32 ACTION_ENABLE_MOTOR   = 5\n"
  "int32 ACTION_SET_ZERO       = 6\n"
  "int32 ACTION_SET_LIMIT_MIN  = 7\n"
  "int32 ACTION_SET_LIMIT_MAX  = 8\n"
  "int32 ACTION_SET_POSITION   = 9\n"
  "int32 ACTION_SET_MODE       = 10\n"
  "int32 ACTION_SET_TOOL_SIZE  = 11\n"
  "int32 ACTION_START_DRAG     = 12\n"
  "int32 ACTION_STOP_DRAG      = 13\n"
  "int32 ACTION_PLAYER_START   = 14\n"
  "int32 ACTION_PLAYER_STOP    = 15\n"
  "int32 ACTION_SET_CARTESIAN_POSITION = 16\n"
  "int32 action\n"
  "\n"
  "# 01\\xe4\\xbd\\x8d\\xe7\\xbd\\xae\\xe6\\x8e\\xa7\\xe5\\x88\\xb6\\xef\\xbc\\x8c03\\xe9\\x80\\x9f\\xe5\\xba\\xa6\\xe6\\xa8\\xa1\\xe5\\xbc\\x8f\\xef\\xbc\\x8c04\\xe7\\x94\\xb5\\xe6\\xb5\\x81\\xe6\\xa8\\xa1\\xe5\\xbc\\x8f \n"
  "int32 MODE_ANGLE    = 1\n"
  "int32 MODE_VELOCITY = 3\n"
  "int32 MODE_CURRENT  = 4\n"
  "int32 mode\n"
  "\n"
  "# data\n"
  "float32[6] data";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
limx_arm_msgs__msg__JointSet__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {limx_arm_msgs__msg__JointSet__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 743, 743},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
limx_arm_msgs__msg__JointSet__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *limx_arm_msgs__msg__JointSet__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
