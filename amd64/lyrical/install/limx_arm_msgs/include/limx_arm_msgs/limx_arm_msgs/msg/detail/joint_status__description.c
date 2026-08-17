// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from limx_arm_msgs:msg/JointStatus.idl
// generated code does not contain a copyright notice

#include "limx_arm_msgs/msg/detail/joint_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
const rosidl_type_hash_t *
limx_arm_msgs__msg__JointStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x01, 0xc4, 0xf6, 0x66, 0xf7, 0xfa, 0x6d, 0x0e,
      0xa1, 0x79, 0x42, 0x2a, 0x78, 0xb8, 0x3c, 0x28,
      0x6a, 0x55, 0xaf, 0xb7, 0x7c, 0x01, 0x37, 0xea,
      0x09, 0xf7, 0x6d, 0xad, 0x9c, 0x1a, 0xc6, 0x02,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char limx_arm_msgs__msg__JointStatus__TYPE_NAME[] = "limx_arm_msgs/msg/JointStatus";

// Define type names, field names, and default values
static char limx_arm_msgs__msg__JointStatus__FIELD_NAME__stamp[] = "stamp";
static char limx_arm_msgs__msg__JointStatus__FIELD_NAME__deviceid[] = "deviceid";
static char limx_arm_msgs__msg__JointStatus__FIELD_NAME__run_time[] = "run_time";
static char limx_arm_msgs__msg__JointStatus__FIELD_NAME__enable[] = "enable";
static char limx_arm_msgs__msg__JointStatus__FIELD_NAME__error[] = "error";
static char limx_arm_msgs__msg__JointStatus__FIELD_NAME__zero[] = "zero";
static char limx_arm_msgs__msg__JointStatus__FIELD_NAME__limit_min[] = "limit_min";
static char limx_arm_msgs__msg__JointStatus__FIELD_NAME__limit_max[] = "limit_max";
static char limx_arm_msgs__msg__JointStatus__FIELD_NAME__tool_size[] = "tool_size";
static char limx_arm_msgs__msg__JointStatus__FIELD_NAME__mode[] = "mode";
static char limx_arm_msgs__msg__JointStatus__FIELD_NAME__state[] = "state";
static char limx_arm_msgs__msg__JointStatus__FIELD_NAME__play_state[] = "play_state";
static char limx_arm_msgs__msg__JointStatus__FIELD_NAME__log_path[] = "log_path";

static rosidl_runtime_c__type_description__Field limx_arm_msgs__msg__JointStatus__FIELDS[] = {
  {
    {limx_arm_msgs__msg__JointStatus__FIELD_NAME__stamp, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {limx_arm_msgs__msg__JointStatus__FIELD_NAME__deviceid, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {limx_arm_msgs__msg__JointStatus__FIELD_NAME__run_time, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {limx_arm_msgs__msg__JointStatus__FIELD_NAME__enable, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32_ARRAY,
      6,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {limx_arm_msgs__msg__JointStatus__FIELD_NAME__error, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_ARRAY,
      6,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {limx_arm_msgs__msg__JointStatus__FIELD_NAME__zero, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      6,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {limx_arm_msgs__msg__JointStatus__FIELD_NAME__limit_min, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      6,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {limx_arm_msgs__msg__JointStatus__FIELD_NAME__limit_max, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      6,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {limx_arm_msgs__msg__JointStatus__FIELD_NAME__tool_size, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {limx_arm_msgs__msg__JointStatus__FIELD_NAME__mode, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {limx_arm_msgs__msg__JointStatus__FIELD_NAME__state, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {limx_arm_msgs__msg__JointStatus__FIELD_NAME__play_state, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {limx_arm_msgs__msg__JointStatus__FIELD_NAME__log_path, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
limx_arm_msgs__msg__JointStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {limx_arm_msgs__msg__JointStatus__TYPE_NAME, 29, 29},
      {limx_arm_msgs__msg__JointStatus__FIELDS, 13, 13},
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
  "int64 run_time\n"
  "\n"
  "int32[6] enable\n"
  "string[6] error\n"
  "float32[6] zero\n"
  "float32[6] limit_min\n"
  "float32[6] limit_max\n"
  "float32[3] tool_size\n"
  "\n"
  "# 01\\xe4\\xbd\\x8d\\xe7\\xbd\\xae\\xe6\\x8e\\xa7\\xe5\\x88\\xb6\\xef\\xbc\\x8c03\\xe9\\x80\\x9f\\xe5\\xba\\xa6\\xe6\\xa8\\xa1\\xe5\\xbc\\x8f\\xef\\xbc\\x8c04\\xe7\\x94\\xb5\\xe6\\xb5\\x81\\xe6\\xa8\\xa1\\xe5\\xbc\\x8f \n"
  "int32 MODE_ANGLE    = 1\n"
  "int32 MODE_VELOCITY = 3\n"
  "int32 MODE_CURRENT  = 4\n"
  "int32 mode\n"
  "\n"
  "int32 STATE_IDLE      = 1\n"
  "int32 STATE_STARTED   = 2\n"
  "int32 STATE_PAUSED    = 3\n"
  "int32 STATE_RESUMED   = 4\n"
  "int32 STATE_STOPED    = 5\n"
  "int32 STATE_SHUTDOWN  = 6\n"
  "int32 state\n"
  "\n"
  "int32 PLAY_STATE_IDLE      = 0\n"
  "int32 PLAY_STATE_STARTED   = 1\n"
  "int32 PLAY_STATE_FAILED    = 2\n"
  "int32 PLAY_STATE_FINISHED  = 3\n"
  "int32 play_state\n"
  "\n"
  "string log_path";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
limx_arm_msgs__msg__JointStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {limx_arm_msgs__msg__JointStatus__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 593, 593},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
limx_arm_msgs__msg__JointStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *limx_arm_msgs__msg__JointStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
