// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from limx_arm_msgs:msg/arm_status.idl
// generated code does not contain a copyright notice

#include "limx_arm_msgs/msg/detail/arm_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
const rosidl_type_hash_t *
limx_arm_msgs__msg__arm_status__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2c, 0x30, 0x47, 0x22, 0x6d, 0xcd, 0x7d, 0x41,
      0xf4, 0xec, 0x77, 0xb4, 0x53, 0x27, 0x82, 0x30,
      0xf3, 0xe6, 0x28, 0xed, 0x87, 0x7c, 0x44, 0xa6,
      0xd4, 0xaa, 0xfa, 0x39, 0x54, 0x9a, 0xf4, 0x20,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char limx_arm_msgs__msg__arm_status__TYPE_NAME[] = "limx_arm_msgs/msg/arm_status";

// Define type names, field names, and default values
static char limx_arm_msgs__msg__arm_status__FIELD_NAME__left_joints[] = "left_joints";
static char limx_arm_msgs__msg__arm_status__FIELD_NAME__right_joints[] = "right_joints";
static char limx_arm_msgs__msg__arm_status__FIELD_NAME__left_endEffector[] = "left_endEffector";
static char limx_arm_msgs__msg__arm_status__FIELD_NAME__right_endEffector[] = "right_endEffector";
static char limx_arm_msgs__msg__arm_status__FIELD_NAME__ik_statu[] = "ik_statu";

static rosidl_runtime_c__type_description__Field limx_arm_msgs__msg__arm_status__FIELDS[] = {
  {
    {limx_arm_msgs__msg__arm_status__FIELD_NAME__left_joints, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {limx_arm_msgs__msg__arm_status__FIELD_NAME__right_joints, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {limx_arm_msgs__msg__arm_status__FIELD_NAME__left_endEffector, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_ARRAY,
      7,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {limx_arm_msgs__msg__arm_status__FIELD_NAME__right_endEffector, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_ARRAY,
      7,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {limx_arm_msgs__msg__arm_status__FIELD_NAME__ik_statu, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
limx_arm_msgs__msg__arm_status__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {limx_arm_msgs__msg__arm_status__TYPE_NAME, 28, 28},
      {limx_arm_msgs__msg__arm_status__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64[] left_joints\n"
  "float64[] right_joints\n"
  "float64[7] left_endEffector \n"
  "float64[7] right_endEffector\n"
  "int32 ik_statu";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
limx_arm_msgs__msg__arm_status__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {limx_arm_msgs__msg__arm_status__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 118, 118},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
limx_arm_msgs__msg__arm_status__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *limx_arm_msgs__msg__arm_status__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
