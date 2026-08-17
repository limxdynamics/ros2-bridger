// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from hand_msgs:msg/TactileCmd.idl
// generated code does not contain a copyright notice

#include "hand_msgs/msg/detail/tactile_cmd__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_hand_msgs
const rosidl_type_hash_t *
hand_msgs__msg__TactileCmd__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3e, 0xa9, 0xe0, 0x4f, 0x9f, 0x20, 0xcd, 0x3a,
      0x8b, 0xe0, 0xcc, 0x21, 0xbc, 0x9a, 0x26, 0xee,
      0x36, 0x39, 0xad, 0xcf, 0x24, 0xa5, 0x1a, 0xcb,
      0xe5, 0xf3, 0xdf, 0x3b, 0x8e, 0x91, 0x61, 0x87,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "std_msgs/msg/detail/header__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char hand_msgs__msg__TactileCmd__TYPE_NAME[] = "hand_msgs/msg/TactileCmd";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char hand_msgs__msg__TactileCmd__FIELD_NAME__header[] = "header";
static char hand_msgs__msg__TactileCmd__FIELD_NAME__names[] = "names";
static char hand_msgs__msg__TactileCmd__FIELD_NAME__tactile_switch[] = "tactile_switch";
static char hand_msgs__msg__TactileCmd__FIELD_NAME__channel_reset[] = "channel_reset";
static char hand_msgs__msg__TactileCmd__FIELD_NAME__calibration_trigger[] = "calibration_trigger";

static rosidl_runtime_c__type_description__Field hand_msgs__msg__TactileCmd__FIELDS[] = {
  {
    {hand_msgs__msg__TactileCmd__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {hand_msgs__msg__TactileCmd__FIELD_NAME__names, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hand_msgs__msg__TactileCmd__FIELD_NAME__tactile_switch, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hand_msgs__msg__TactileCmd__FIELD_NAME__channel_reset, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hand_msgs__msg__TactileCmd__FIELD_NAME__calibration_trigger, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription hand_msgs__msg__TactileCmd__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
hand_msgs__msg__TactileCmd__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {hand_msgs__msg__TactileCmd__TYPE_NAME, 24, 24},
      {hand_msgs__msg__TactileCmd__FIELDS, 5, 5},
    },
    {hand_msgs__msg__TactileCmd__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "std_msgs/Header header\n"
  "\n"
  "string[]  names\n"
  "bool[] tactile_switch             # \\xe8\\xa7\\xa6\\xe8\\xa7\\x89\\xe5\\xbc\\x80\\xe5\\x85\\xb3 (true=\\xe5\\xbc\\x80\\xe5\\x90\\xaf false=\\xe5\\x85\\xb3\\xe9\\x97\\xad)\n"
  "bool[] channel_reset              # \\xe9\\x80\\x9a\\xe9\\x81\\x93\\xe5\\xa4\\x8d\\xe4\\xbd\\x8d (true\\xe8\\xa7\\xa6\\xe5\\x8f\\x91, \\xe6\\x89\\xa7\\xe8\\xa1\\x8c\\xe6\\x97\\xb6\\xe6\\x89\\x8b\\xe6\\x8c\\x87\\xe4\\xb8\\x8d\\xe5\\x8f\\xaf\\xe5\\x8f\\x97\\xe5\\x8a\\x9b)\n"
  "bool[] calibration_trigger        # \\xe5\\x8f\\x82\\xe6\\x95\\xb0\\xe6\\xa0\\xa1\\xe5\\x87\\x86 (true\\xe8\\xa7\\xa6\\xe5\\x8f\\x91, \\xe6\\x89\\xa7\\xe8\\xa1\\x8c\\xe7\\xba\\xa610s\\xe5\\x86\\x85\\xe6\\x95\\xb0\\xe6\\x8d\\xae\\xe4\\xb8\\x8d\\xe5\\x8f\\xaf\\xe7\\x94\\xa8, \\xe6\\x89\\x8b\\xe6\\x8c\\x87\\xe4\\xb8\\x8d\\xe5\\x8f\\xaf\\xe5\\x8f\\x97\\xe5\\x8a\\x9b)";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
hand_msgs__msg__TactileCmd__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {hand_msgs__msg__TactileCmd__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 233, 233},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
hand_msgs__msg__TactileCmd__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *hand_msgs__msg__TactileCmd__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
