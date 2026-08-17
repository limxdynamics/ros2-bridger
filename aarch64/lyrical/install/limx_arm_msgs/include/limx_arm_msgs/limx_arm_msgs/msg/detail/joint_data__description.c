// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from limx_arm_msgs:msg/JointData.idl
// generated code does not contain a copyright notice

#include "limx_arm_msgs/msg/detail/joint_data__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
const rosidl_type_hash_t *
limx_arm_msgs__msg__JointData__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf2, 0x0e, 0x14, 0xb0, 0x8f, 0x5d, 0x76, 0x3c,
      0x7d, 0xea, 0x72, 0x10, 0x02, 0x5f, 0x0d, 0x0b,
      0x91, 0x4e, 0x0e, 0x74, 0xd2, 0xd7, 0xac, 0x22,
      0x0a, 0xfb, 0xf0, 0x3f, 0xbf, 0x71, 0xa3, 0x0f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char limx_arm_msgs__msg__JointData__TYPE_NAME[] = "limx_arm_msgs/msg/JointData";

// Define type names, field names, and default values
static char limx_arm_msgs__msg__JointData__FIELD_NAME__stamp[] = "stamp";
static char limx_arm_msgs__msg__JointData__FIELD_NAME__deviceid[] = "deviceid";
static char limx_arm_msgs__msg__JointData__FIELD_NAME__angle[] = "angle";
static char limx_arm_msgs__msg__JointData__FIELD_NAME__velocity[] = "velocity";
static char limx_arm_msgs__msg__JointData__FIELD_NAME__current[] = "current";

static rosidl_runtime_c__type_description__Field limx_arm_msgs__msg__JointData__FIELDS[] = {
  {
    {limx_arm_msgs__msg__JointData__FIELD_NAME__stamp, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {limx_arm_msgs__msg__JointData__FIELD_NAME__deviceid, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {limx_arm_msgs__msg__JointData__FIELD_NAME__angle, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      6,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {limx_arm_msgs__msg__JointData__FIELD_NAME__velocity, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      6,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {limx_arm_msgs__msg__JointData__FIELD_NAME__current, 7, 7},
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
limx_arm_msgs__msg__JointData__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {limx_arm_msgs__msg__JointData__TYPE_NAME, 27, 27},
      {limx_arm_msgs__msg__JointData__FIELDS, 5, 5},
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
  "float32[6] angle\n"
  "float32[6] velocity\n"
  "float32[6] current";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
limx_arm_msgs__msg__JointData__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {limx_arm_msgs__msg__JointData__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 86, 86},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
limx_arm_msgs__msg__JointData__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *limx_arm_msgs__msg__JointData__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
