// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from teleop_msgs:msg/TeleopRawInput.idl
// generated code does not contain a copyright notice

#include "teleop_msgs/msg/detail/teleop_raw_input__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_teleop_msgs
const rosidl_type_hash_t *
teleop_msgs__msg__TeleopRawInput__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa7, 0xc1, 0x77, 0xc7, 0xc8, 0x2f, 0x6f, 0xfb,
      0x32, 0x52, 0x72, 0xad, 0x4e, 0xc2, 0xa7, 0xf9,
      0x9a, 0xd4, 0xf9, 0x37, 0x39, 0xa0, 0x4e, 0x91,
      0x29, 0xa4, 0xe3, 0xc4, 0x36, 0x1d, 0xbf, 0x7c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char teleop_msgs__msg__TeleopRawInput__TYPE_NAME[] = "teleop_msgs/msg/TeleopRawInput";

// Define type names, field names, and default values
static char teleop_msgs__msg__TeleopRawInput__FIELD_NAME__left_trigger[] = "left_trigger";
static char teleop_msgs__msg__TeleopRawInput__FIELD_NAME__right_trigger[] = "right_trigger";
static char teleop_msgs__msg__TeleopRawInput__FIELD_NAME__left_grip[] = "left_grip";
static char teleop_msgs__msg__TeleopRawInput__FIELD_NAME__right_grip[] = "right_grip";
static char teleop_msgs__msg__TeleopRawInput__FIELD_NAME__left_stick[] = "left_stick";
static char teleop_msgs__msg__TeleopRawInput__FIELD_NAME__right_stick[] = "right_stick";
static char teleop_msgs__msg__TeleopRawInput__FIELD_NAME__buttons[] = "buttons";
static char teleop_msgs__msg__TeleopRawInput__FIELD_NAME__buttons_valid[] = "buttons_valid";

static rosidl_runtime_c__type_description__Field teleop_msgs__msg__TeleopRawInput__FIELDS[] = {
  {
    {teleop_msgs__msg__TeleopRawInput__FIELD_NAME__left_trigger, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {teleop_msgs__msg__TeleopRawInput__FIELD_NAME__right_trigger, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {teleop_msgs__msg__TeleopRawInput__FIELD_NAME__left_grip, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {teleop_msgs__msg__TeleopRawInput__FIELD_NAME__right_grip, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {teleop_msgs__msg__TeleopRawInput__FIELD_NAME__left_stick, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      2,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {teleop_msgs__msg__TeleopRawInput__FIELD_NAME__right_stick, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      2,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {teleop_msgs__msg__TeleopRawInput__FIELD_NAME__buttons, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {teleop_msgs__msg__TeleopRawInput__FIELD_NAME__buttons_valid, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
teleop_msgs__msg__TeleopRawInput__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {teleop_msgs__msg__TeleopRawInput__TYPE_NAME, 30, 30},
      {teleop_msgs__msg__TeleopRawInput__FIELDS, 8, 8},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# \\xe6\\x93\\x8d\\xe4\\xbd\\x9c\\xe8\\x80\\x85\\xe6\\x8e\\xa7\\xe5\\x88\\xb6\\xe5\\x99\\xa8\\xe7\\x9a\\x84\\xe5\\x8e\\x9f\\xe5\\xa7\\x8b\\xe8\\xbe\\x93\\xe5\\x85\\xa5\\xe9\\x87\\x8f\\xe3\\x80\\x82\n"
  "# \\xe5\\x8f\\x91\\xe9\\x80\\x81\\xe6\\x96\\xb9\\xe4\\xb8\\x8d\\xe8\\xa7\\xa3\\xe9\\x87\\x8a\\xe4\\xbb\\xbb\\xe4\\xbd\\x95\\xe6\\x8c\\x89\\xe9\\x94\\xae\\xe5\\x90\\xab\\xe4\\xb9\\x89\\xef\\xbc\\x8c\\xe7\\xbb\\x84\\xe5\\x90\\x88\\xe9\\x94\\xae\\xe8\\xaf\\xad\\xe4\\xb9\\x89\\xe4\\xb8\\x80\\xe5\\xbe\\x8b\\xe7\\x94\\xb1\\xe6\\x8e\\xa5\\xe6\\x94\\xb6\\xe6\\x96\\xb9\\xe8\\xa7\\xa3\\xe9\\x87\\x8a\\xe3\\x80\\x82\n"
  "\n"
  "# \\xe6\\xa8\\xa1\\xe6\\x8b\\x9f\\xe9\\x87\\x8f\\xef\\xbc\\x8c\\xe8\\x8c\\x83\\xe5\\x9b\\xb4 0.0 ~ 1.0\n"
  "float32 left_trigger\n"
  "float32 right_trigger\n"
  "float32 left_grip\n"
  "float32 right_grip\n"
  "\n"
  "# \\xe6\\x91\\x87\\xe6\\x9d\\x86\\xef\\xbc\\x8c[x, y]\\xef\\xbc\\x8c\\xe8\\x8c\\x83\\xe5\\x9b\\xb4 -1.0 ~ 1.0\n"
  "float32[2] left_stick\n"
  "float32[2] right_stick\n"
  "\n"
  "# \\xe6\\x8c\\x89\\xe9\\x94\\xae\\xe4\\xbd\\x8d\\xe6\\x8e\\xa9\\xe7\\xa0\\x81\\xe3\\x80\\x82\\xe9\\xa2\\x84\\xe7\\x95\\x99\\xe9\\xab\\x98\\xe4\\xbd\\x8d\\xef\\xbc\\x8c\\xe6\\x96\\xb0\\xe5\\xa2\\x9e\\xe6\\x8c\\x89\\xe9\\x94\\xae\\xe4\\xb8\\x8d\\xe9\\x9c\\x80\\xe8\\xa6\\x81\\xe6\\x94\\xb9\\xe6\\x9c\\xac\\xe6\\xb6\\x88\\xe6\\x81\\xaf\\xe3\\x80\\x82\n"
  "uint32 BTN_LEFT_X=1\n"
  "uint32 BTN_LEFT_Y=2\n"
  "uint32 BTN_RIGHT_A=4\n"
  "uint32 BTN_RIGHT_B=8\n"
  "uint32 BTN_LEFT_STICK=16         # \\xe5\\xb7\\xa6\\xe6\\x91\\x87\\xe6\\x9d\\x86\\xe6\\x8c\\x89\\xe4\\xb8\\x8b\n"
  "uint32 BTN_RIGHT_STICK=32        # \\xe5\\x8f\\xb3\\xe6\\x91\\x87\\xe6\\x9d\\x86\\xe6\\x8c\\x89\\xe4\\xb8\\x8b\n"
  "uint32 BTN_LEFT_GRIP=64          # \\xe5\\xb7\\xa6 Grip \\xe7\\x9a\\x84\\xe5\\xb8\\x83\\xe5\\xb0\\x94\\xe6\\x80\\x81\n"
  "uint32 BTN_RIGHT_GRIP=128        # \\xe5\\x8f\\xb3 Grip \\xe7\\x9a\\x84\\xe5\\xb8\\x83\\xe5\\xb0\\x94\\xe6\\x80\\x81\n"
  "uint32 BTN_LEFT_TRIGGER=256      # \\xe5\\xb7\\xa6\\xe6\\x89\\xb3\\xe6\\x9c\\xba\\xe7\\x9a\\x84\\xe5\\xb8\\x83\\xe5\\xb0\\x94\\xe6\\x80\\x81\n"
  "uint32 BTN_RIGHT_TRIGGER=512     # \\xe5\\x8f\\xb3\\xe6\\x89\\xb3\\xe6\\x9c\\xba\\xe7\\x9a\\x84\\xe5\\xb8\\x83\\xe5\\xb0\\x94\\xe6\\x80\\x81\n"
  "uint32 BTN_LEFT_THUMBREST=1024\n"
  "uint32 BTN_RIGHT_THUMBREST=2048\n"
  "uint32 buttons\n"
  "\n"
  "# \\xe5\\x93\\xaa\\xe4\\xba\\x9b\\xe6\\x8c\\x89\\xe9\\x94\\xae\\xe4\\xbd\\x8d\\xe6\\x9c\\xac\\xe5\\xb8\\xa7\\xe6\\x9c\\x89\\xe6\\x95\\x88\\xe3\\x80\\x82\\xe8\\xae\\xbe\\xe5\\xa4\\x87\\xe4\\xb8\\x8d\\xe6\\x8f\\x90\\xe4\\xbe\\x9b\\xe7\\x9a\\x84\\xe6\\x8c\\x89\\xe9\\x94\\xae\\xef\\xbc\\x8c\\xe5\\xaf\\xb9\\xe5\\xba\\x94\\xe4\\xbd\\x8d\\xe4\\xb8\\xba 0\\xe3\\x80\\x82\n"
  "# \\xe6\\x8e\\xa5\\xe6\\x94\\xb6\\xe6\\x96\\xb9\\xe4\\xb8\\x8d\\xe5\\xbe\\x97\\xe6\\x8a\\x8a\\xe3\\x80\\x8c\\xe8\\xae\\xbe\\xe5\\xa4\\x87\\xe6\\x9c\\xaa\\xe6\\x8f\\x90\\xe4\\xbe\\x9b\\xe3\\x80\\x8d\\xe5\\xbd\\x93\\xe6\\x88\\x90\\xe3\\x80\\x8c\\xe6\\x8c\\x89\\xe9\\x94\\xae\\xe6\\x9c\\xaa\\xe6\\x8c\\x89\\xe4\\xb8\\x8b\\xe3\\x80\\x8d\\xe3\\x80\\x82\n"
  "uint32 buttons_valid";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
teleop_msgs__msg__TeleopRawInput__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {teleop_msgs__msg__TeleopRawInput__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 744, 744},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
teleop_msgs__msg__TeleopRawInput__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *teleop_msgs__msg__TeleopRawInput__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
