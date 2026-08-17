// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from limx_arm_msgs:msg/ServoCmd.idl
// generated code does not contain a copyright notice

#include "limx_arm_msgs/msg/detail/servo_cmd__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
const rosidl_type_hash_t *
limx_arm_msgs__msg__ServoCmd__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6f, 0xee, 0x37, 0x5a, 0xf3, 0x0a, 0x77, 0x62,
      0x00, 0xfc, 0x0e, 0xe6, 0x5e, 0xd3, 0xf5, 0x25,
      0xd4, 0xab, 0x90, 0x3a, 0x9f, 0x86, 0x16, 0x8d,
      0x1a, 0xd6, 0x39, 0xa3, 0x9d, 0xd5, 0x62, 0xe2,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char limx_arm_msgs__msg__ServoCmd__TYPE_NAME[] = "limx_arm_msgs/msg/ServoCmd";

// Define type names, field names, and default values
static char limx_arm_msgs__msg__ServoCmd__FIELD_NAME__functionName[] = "functionName";
static char limx_arm_msgs__msg__ServoCmd__FIELD_NAME__left_arm_pos[] = "left_arm_pos";
static char limx_arm_msgs__msg__ServoCmd__FIELD_NAME__right_arm_pos[] = "right_arm_pos";

static rosidl_runtime_c__type_description__Field limx_arm_msgs__msg__ServoCmd__FIELDS[] = {
  {
    {limx_arm_msgs__msg__ServoCmd__FIELD_NAME__functionName, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {limx_arm_msgs__msg__ServoCmd__FIELD_NAME__left_arm_pos, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      7,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {limx_arm_msgs__msg__ServoCmd__FIELD_NAME__right_arm_pos, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      7,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
limx_arm_msgs__msg__ServoCmd__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {limx_arm_msgs__msg__ServoCmd__TYPE_NAME, 26, 26},
      {limx_arm_msgs__msg__ServoCmd__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string functionName #servoL SetHeadPos\n"
  "float32[7] left_arm_pos # [px py pz Qx Qy Qz Qw] #servoL\n"
  "float32[7] right_arm_pos # [px py pz Qx Qy Qz Qw] #servoL";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
limx_arm_msgs__msg__ServoCmd__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {limx_arm_msgs__msg__ServoCmd__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 154, 154},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
limx_arm_msgs__msg__ServoCmd__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *limx_arm_msgs__msg__ServoCmd__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
