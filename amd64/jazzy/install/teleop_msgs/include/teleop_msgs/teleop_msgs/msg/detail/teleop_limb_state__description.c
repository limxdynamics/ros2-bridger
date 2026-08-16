// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from teleop_msgs:msg/TeleopLimbState.idl
// generated code does not contain a copyright notice

#include "teleop_msgs/msg/detail/teleop_limb_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_teleop_msgs
const rosidl_type_hash_t *
teleop_msgs__msg__TeleopLimbState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4c, 0x6d, 0x94, 0xf4, 0x13, 0x5a, 0xd9, 0x99,
      0xf8, 0xcb, 0xea, 0x5b, 0x64, 0xe9, 0x05, 0x84,
      0xfd, 0xef, 0xe6, 0x58, 0xc9, 0x5c, 0x62, 0x45,
      0x4e, 0x8e, 0x69, 0x14, 0xc4, 0x65, 0x7c, 0x52,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char teleop_msgs__msg__TeleopLimbState__TYPE_NAME[] = "teleop_msgs/msg/TeleopLimbState";

// Define type names, field names, and default values
static char teleop_msgs__msg__TeleopLimbState__FIELD_NAME__name[] = "name";
static char teleop_msgs__msg__TeleopLimbState__FIELD_NAME__following[] = "following";
static char teleop_msgs__msg__TeleopLimbState__FIELD_NAME__ee_closure_enabled[] = "ee_closure_enabled";
static char teleop_msgs__msg__TeleopLimbState__FIELD_NAME__ee_gesture_index[] = "ee_gesture_index";

static rosidl_runtime_c__type_description__Field teleop_msgs__msg__TeleopLimbState__FIELDS[] = {
  {
    {teleop_msgs__msg__TeleopLimbState__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {teleop_msgs__msg__TeleopLimbState__FIELD_NAME__following, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {teleop_msgs__msg__TeleopLimbState__FIELD_NAME__ee_closure_enabled, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {teleop_msgs__msg__TeleopLimbState__FIELD_NAME__ee_gesture_index, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
teleop_msgs__msg__TeleopLimbState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {teleop_msgs__msg__TeleopLimbState__TYPE_NAME, 31, 31},
      {teleop_msgs__msg__TeleopLimbState__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# \\xe4\\xbc\\x9a\\xe8\\xaf\\x9d\\xe4\\xb8\\xad\\xe5\\x8d\\x95\\xe4\\xb8\\xaa\\xe8\\x82\\xa2\\xe4\\xbd\\x93\\xe7\\x9a\\x84\\xe5\\x86\\xb3\\xe7\\xad\\x96\\xe7\\x8a\\xb6\\xe6\\x80\\x81\\xe3\\x80\\x82\n"
  "# \\xe4\\xbd\\x9c\\xe4\\xb8\\xba TeleopSessionState.limbs \\xe7\\x9a\\x84\\xe5\\x85\\x83\\xe7\\xb4\\xa0\\xe4\\xbd\\xbf\\xe7\\x94\\xa8\\xe3\\x80\\x82\n"
  "\n"
  "# \\xe8\\x82\\xa2\\xe4\\xbd\\x93\\xe5\\x90\\x8d\\xe3\\x80\\x82\\xe4\\xb8\\x8e TeleopTarget.name \\xe5\\x8f\\x96\\xe5\\x80\\xbc\\xe4\\xb8\\x80\\xe8\\x87\\xb4\\xe3\\x80\\x82\n"
  "string name\n"
  "\n"
  "# \\xe8\\xaf\\xa5\\xe8\\x82\\xa2\\xe4\\xbd\\x93\\xe6\\x9c\\xac\\xe5\\x91\\xa8\\xe6\\x9c\\x9f\\xe6\\x98\\xaf\\xe5\\x90\\xa6\\xe5\\xa4\\x84\\xe4\\xba\\x8e\\xe8\\xb7\\x9f\\xe9\\x9a\\x8f\n"
  "bool following\n"
  "\n"
  "# \\xe8\\xaf\\xa5\\xe4\\xbe\\xa7\\xe6\\x9c\\xab\\xe7\\xab\\xaf\\xe6\\x98\\xaf\\xe5\\x90\\xa6\\xe5\\x85\\x81\\xe8\\xae\\xb8\\xe6\\x97\\xa0\\xe6\\x9e\\x81\\xe5\\xbc\\x80\\xe5\\x90\\x88\\xe3\\x80\\x82\n"
  "# \\xe9\\x97\\xa8\\xe6\\x8e\\xa7\\xe7\\x94\\xb1\\xe5\\x8f\\x91\\xe5\\xb8\\x83\\xe6\\x96\\xb9\\xe8\\xb4\\x9f\\xe8\\xb4\\xa3\\xef\\xbc\\x8c\\xe6\\x89\\xb3\\xe6\\x9c\\xba\\xe8\\xa1\\x8c\\xe7\\xa8\\x8b\\xe5\\x88\\xb0\\xe5\\xbc\\x80\\xe5\\x90\\x88\\xe7\\xa8\\x8b\\xe5\\xba\\xa6\\xe7\\x9a\\x84\\xe6\\x98\\xa0\\xe5\\xb0\\x84\\xe7\\x94\\xb1\\xe6\\x8e\\xa5\\xe6\\x94\\xb6\\xe6\\x96\\xb9\\xe8\\xb4\\x9f\\xe8\\xb4\\xa3\\xe3\\x80\\x82\n"
  "bool ee_closure_enabled\n"
  "\n"
  "# \\xe8\\xaf\\xa5\\xe4\\xbe\\xa7\\xe6\\x9c\\xab\\xe7\\xab\\xaf\\xe5\\xbd\\x93\\xe5\\x89\\x8d\\xe6\\x89\\x8b\\xe5\\x8a\\xbf\\xe7\\xb4\\xa2\\xe5\\xbc\\x95\\xe3\\x80\\x82\n"
  "# \\xe5\\xbe\\xaa\\xe7\\x8e\\xaf\\xe5\\x88\\x87\\xe6\\x8d\\xa2\\xe4\\xb8\\x8e\\xe6\\x8c\\x81\\xe4\\xb9\\x85\\xe5\\x8c\\x96\\xe7\\x94\\xb1\\xe5\\x8f\\x91\\xe5\\xb8\\x83\\xe6\\x96\\xb9\\xe8\\xb4\\x9f\\xe8\\xb4\\xa3\\xef\\xbc\\x8c\\xe4\\xb8\\x8b\\xe5\\x8f\\x91\\xe5\\xaf\\xb9\\xe5\\xba\\x94\\xe6\\x89\\x8b\\xe5\\x8a\\xbf\\xe7\\x94\\xb1\\xe6\\x8e\\xa5\\xe6\\x94\\xb6\\xe6\\x96\\xb9\\xe8\\xb4\\x9f\\xe8\\xb4\\xa3\\xe3\\x80\\x82\n"
  "uint8 ee_gesture_index";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
teleop_msgs__msg__TeleopLimbState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {teleop_msgs__msg__TeleopLimbState__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 270, 270},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
teleop_msgs__msg__TeleopLimbState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *teleop_msgs__msg__TeleopLimbState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
