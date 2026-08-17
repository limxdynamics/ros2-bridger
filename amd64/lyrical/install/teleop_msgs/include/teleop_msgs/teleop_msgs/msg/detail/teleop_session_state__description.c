// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from teleop_msgs:msg/TeleopSessionState.idl
// generated code does not contain a copyright notice

#include "teleop_msgs/msg/detail/teleop_session_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_teleop_msgs
const rosidl_type_hash_t *
teleop_msgs__msg__TeleopSessionState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf7, 0x41, 0x62, 0x8d, 0x21, 0x15, 0x9d, 0x5b,
      0x1a, 0xfa, 0x2d, 0xf4, 0x8e, 0xb4, 0xeb, 0xe7,
      0x11, 0x6e, 0xd3, 0xdd, 0x34, 0xd6, 0xdb, 0x69,
      0xa1, 0xdc, 0x58, 0x72, 0xb7, 0xbe, 0x13, 0xcb,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "std_msgs/msg/detail/header__functions.h"
#include "teleop_msgs/msg/detail/teleop_limb_state__functions.h"

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
static const rosidl_type_hash_t teleop_msgs__msg__TeleopLimbState__EXPECTED_HASH = {1, {
    0x4c, 0x6d, 0x94, 0xf4, 0x13, 0x5a, 0xd9, 0x99,
    0xf8, 0xcb, 0xea, 0x5b, 0x64, 0xe9, 0x05, 0x84,
    0xfd, 0xef, 0xe6, 0x58, 0xc9, 0x5c, 0x62, 0x45,
    0x4e, 0x8e, 0x69, 0x14, 0xc4, 0x65, 0x7c, 0x52,
  }};
#endif

static char teleop_msgs__msg__TeleopSessionState__TYPE_NAME[] = "teleop_msgs/msg/TeleopSessionState";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";
static char teleop_msgs__msg__TeleopLimbState__TYPE_NAME[] = "teleop_msgs/msg/TeleopLimbState";

// Define type names, field names, and default values
static char teleop_msgs__msg__TeleopSessionState__FIELD_NAME__header[] = "header";
static char teleop_msgs__msg__TeleopSessionState__FIELD_NAME__schema_version[] = "schema_version";
static char teleop_msgs__msg__TeleopSessionState__FIELD_NAME__session_state[] = "session_state";
static char teleop_msgs__msg__TeleopSessionState__FIELD_NAME__mode[] = "mode";
static char teleop_msgs__msg__TeleopSessionState__FIELD_NAME__limbs[] = "limbs";
static char teleop_msgs__msg__TeleopSessionState__FIELD_NAME__reanchor_epoch[] = "reanchor_epoch";
static char teleop_msgs__msg__TeleopSessionState__FIELD_NAME__retarget_required[] = "retarget_required";
static char teleop_msgs__msg__TeleopSessionState__FIELD_NAME__fault_code[] = "fault_code";
static char teleop_msgs__msg__TeleopSessionState__FIELD_NAME__fault_detail[] = "fault_detail";

static rosidl_runtime_c__type_description__Field teleop_msgs__msg__TeleopSessionState__FIELDS[] = {
  {
    {teleop_msgs__msg__TeleopSessionState__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {teleop_msgs__msg__TeleopSessionState__FIELD_NAME__schema_version, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {teleop_msgs__msg__TeleopSessionState__FIELD_NAME__session_state, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {teleop_msgs__msg__TeleopSessionState__FIELD_NAME__mode, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {teleop_msgs__msg__TeleopSessionState__FIELD_NAME__limbs, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {teleop_msgs__msg__TeleopLimbState__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {teleop_msgs__msg__TeleopSessionState__FIELD_NAME__reanchor_epoch, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {teleop_msgs__msg__TeleopSessionState__FIELD_NAME__retarget_required, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {teleop_msgs__msg__TeleopSessionState__FIELD_NAME__fault_code, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {teleop_msgs__msg__TeleopSessionState__FIELD_NAME__fault_detail, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription teleop_msgs__msg__TeleopSessionState__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
  {
    {teleop_msgs__msg__TeleopLimbState__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
teleop_msgs__msg__TeleopSessionState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {teleop_msgs__msg__TeleopSessionState__TYPE_NAME, 34, 34},
      {teleop_msgs__msg__TeleopSessionState__FIELDS, 9, 9},
    },
    {teleop_msgs__msg__TeleopSessionState__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&teleop_msgs__msg__TeleopLimbState__EXPECTED_HASH, teleop_msgs__msg__TeleopLimbState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = teleop_msgs__msg__TeleopLimbState__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# \\xe9\\x81\\xa5\\xe6\\x93\\x8d\\xe4\\xbd\\x9c\\xe4\\xbc\\x9a\\xe8\\xaf\\x9d\\xe7\\x8a\\xb6\\xe6\\x80\\x81\\xe3\\x80\\x82\\xe7\\x94\\xb1\\xe5\\x86\\xb3\\xe7\\xad\\x96\\xe5\\xb1\\x82\\xe5\\x8d\\x95\\xe5\\x90\\x91\\xe5\\xb9\\xbf\\xe6\\x92\\xad\\xef\\xbc\\x8c\\xe5\\x85\\xa8\\xe7\\xb3\\xbb\\xe7\\xbb\\x9f\\xe5\\x94\\xaf\\xe4\\xb8\\x80\\xe6\\x9d\\x83\\xe5\\xa8\\x81\\xef\\xbc\\x8c\\xe5\\x85\\xb6\\xe4\\xbd\\x99\\xe6\\xa8\\xa1\\xe5\\x9d\\x97\\xe5\\x8f\\xaa\\xe8\\xaf\\xbb\\xe3\\x80\\x82\n"
  "# \\xe6\\x8e\\xa5\\xe6\\x94\\xb6\\xe6\\x96\\xb9\\xe4\\xb8\\x8d\\xe5\\xbe\\x97\\xe7\\xbb\\xb4\\xe6\\x8a\\xa4\\xe6\\x9c\\xac\\xe7\\x8a\\xb6\\xe6\\x80\\x81\\xe7\\x9a\\x84\\xe5\\x89\\xaf\\xe6\\x9c\\xac\\xef\\xbc\\x8c\\xe4\\xb9\\x9f\\xe4\\xb8\\x8d\\xe5\\xbe\\x97\\xe8\\x87\\xaa\\xe8\\xa1\\x8c\\xe4\\xbf\\xae\\xe6\\x94\\xb9\\xe8\\xb7\\x9f\\xe9\\x9a\\x8f\\xe7\\x8a\\xb6\\xe6\\x80\\x81\\xe3\\x80\\x82\n"
  "\n"
  "std_msgs/Header header\n"
  "\n"
  "uint16 SCHEMA_VERSION=1\n"
  "uint16 schema_version\n"
  "\n"
  "uint8 SESSION_INACTIVE=0  # \\xe6\\x9c\\xaa\\xe8\\xbf\\x9b\\xe5\\x85\\xa5\\xe9\\x81\\xa5\\xe6\\x93\\x8d\\xe4\\xbd\\x9c\n"
  "uint8 SESSION_ACTIVE=1    # \\xe9\\x81\\xa5\\xe6\\x93\\x8d\\xe4\\xbd\\x9c\\xe6\\xbf\\x80\\xe6\\xb4\\xbb\n"
  "uint8 SESSION_HOMING=2    # \\xe5\\x9b\\x9e\\xe5\\x88\\x9d\\xe5\\xa7\\x8b\\xe5\\xa7\\xbf\\xe6\\x80\\x81\\xe6\\xb5\\x81\\xe7\\xa8\\x8b\\xe4\\xb8\\xad\\xef\\xbc\\x8c\\xe6\\x8e\\xa5\\xe6\\x94\\xb6\\xe6\\x96\\xb9\\xe5\\xba\\x94\\xe6\\x9a\\x82\\xe5\\x81\\x9c\\xe8\\xbe\\x93\\xe5\\x87\\xba\\xe7\\x9b\\xae\\xe6\\xa0\\x87\n"
  "uint8 SESSION_FAULT=3     # \\xe6\\x95\\x85\\xe9\\x9a\\x9c\n"
  "uint8 session_state\n"
  "\n"
  "# \\xe5\\xbd\\x93\\xe5\\x89\\x8d\\xe9\\x81\\xa5\\xe6\\x93\\x8d\\xe4\\xbd\\x9c\\xe6\\xa8\\xa1\\xe5\\xbc\\x8f\\xe5\\x90\\x8d\\xef\\xbc\\x8c\\xe7\\x94\\xb1\\xe4\\xba\\xa7\\xe5\\x93\\x81\\xe5\\xae\\x9a\\xe4\\xb9\\x89\\xe3\\x80\\x82\\xe7\\x94\\xa8\\xe5\\xad\\x97\\xe7\\xac\\xa6\\xe4\\xb8\\xb2\\xe4\\xbb\\xa5\\xe4\\xbe\\xbf\\xe6\\x96\\xb0\\xe5\\xa2\\x9e\\xe6\\xa8\\xa1\\xe5\\xbc\\x8f\\xe4\\xb8\\x8d\\xe6\\x94\\xb9\\xe6\\x9c\\xac\\xe6\\xb6\\x88\\xe6\\x81\\xaf\\xe3\\x80\\x82\n"
  "string mode\n"
  "\n"
  "# \\xe9\\x80\\x90\\xe8\\x82\\xa2\\xe4\\xbd\\x93\\xe5\\x86\\xb3\\xe7\\xad\\x96\\xe3\\x80\\x82\\xe8\\x82\\xa2\\xe4\\xbd\\x93\\xe7\\xbc\\xba\\xe5\\xb8\\xad\\xe6\\x97\\xb6\\xe6\\x8c\\x89\\xe4\\xb8\\x8d\\xe8\\xb7\\x9f\\xe9\\x9a\\x8f\\xe5\\xa4\\x84\\xe7\\x90\\x86\\xe3\\x80\\x82\n"
  "teleop_msgs/TeleopLimbState[] limbs\n"
  "\n"
  "# \\xe9\\x87\\x8d\\xe9\\x94\\x9a\\xe8\\xae\\xa1\\xe6\\x95\\xb0\\xef\\xbc\\x8c\\xe5\\x8d\\x95\\xe8\\xb0\\x83\\xe9\\x80\\x92\\xe5\\xa2\\x9e\\xe3\\x80\\x82\\xe6\\x95\\xb0\\xe5\\x80\\xbc\\xe5\\x8f\\x91\\xe7\\x94\\x9f\\xe5\\x8f\\x98\\xe5\\x8c\\x96\\xe5\\x8d\\xb3\\xe8\\xa6\\x81\\xe6\\xb1\\x82\\xe6\\x8e\\xa5\\xe6\\x94\\xb6\\xe6\\x96\\xb9\\xe7\\x94\\xa8\\xe5\\xbd\\x93\\xe5\\x89\\x8d\\xe8\\xbe\\x93\\xe5\\x85\\xa5\\xe4\\xb8\\x8e\\xe6\\x9c\\xab\\xe7\\xab\\xaf\\xe5\\x8f\\x8d\\xe9\\xa6\\x88\n"
  "# \\xe9\\x87\\x8d\\xe6\\x96\\xb0\\xe5\\xbb\\xba\\xe7\\xab\\x8b\\xe9\\x94\\x9a\\xe7\\x82\\xb9\\xe3\\x80\\x82\\xe7\\x94\\xa8\\xe8\\xae\\xa1\\xe6\\x95\\xb0\\xe8\\x80\\x8c\\xe9\\x9d\\x9e\\xe5\\xb8\\x83\\xe5\\xb0\\x94\\xe8\\xbe\\xb9\\xe6\\xb2\\xbf\\xef\\xbc\\x8c\\xe5\\x9b\\xa0\\xe4\\xb8\\xba\\xe6\\x94\\xb6\\xe5\\x8f\\x91\\xe5\\x8f\\x8c\\xe6\\x96\\xb9\\xe4\\xb8\\x8d\\xe5\\x90\\x8c\\xe9\\xa2\\x91\\xef\\xbc\\x8c\\xe8\\xbe\\xb9\\xe6\\xb2\\xbf\\xe4\\xbc\\x9a\\xe4\\xb8\\xa2\\xe3\\x80\\x82\n"
  "uint32 reanchor_epoch\n"
  "\n"
  "# \\xe6\\x98\\xaf\\xe5\\x90\\xa6\\xe4\\xbb\\x8d\\xe9\\x9c\\x80\\xe8\\xa6\\x81\\xe6\\x8e\\xa5\\xe6\\x94\\xb6\\xe6\\x96\\xb9\\xe8\\xae\\xa1\\xe7\\xae\\x97\\xe5\\x85\\xa8\\xe8\\xba\\xab\\xe9\\x87\\x8d\\xe5\\xae\\x9a\\xe5\\x90\\x91\\xe3\\x80\\x82\\xe7\\xba\\xaf\\xe6\\x80\\xa7\\xe8\\x83\\xbd\\xe6\\x8f\\x90\\xe7\\xa4\\xba\\xef\\xbc\\x8c\\xe6\\x8e\\xa5\\xe6\\x94\\xb6\\xe6\\x96\\xb9\\xe5\\x8f\\xaf\\xe4\\xbb\\xa5\\xe5\\xbf\\xbd\\xe7\\x95\\xa5\\xe3\\x80\\x82\n"
  "bool retarget_required\n"
  "\n"
  "uint8 FAULT_NONE=0\n"
  "uint8 FAULT_INPUT_TIMEOUT=1  # \\xe4\\xb8\\x8a\\xe6\\xb8\\xb8\\xe8\\xbe\\x93\\xe5\\x85\\xa5\\xe8\\xb6\\x85\\xe6\\x97\\xb6\n"
  "uint8 FAULT_TARGET_JUMP=2    # \\xe7\\x9b\\xae\\xe6\\xa0\\x87\\xe8\\xb7\\xb3\\xe5\\x8f\\x98\\xe8\\xa2\\xab\\xe6\\x8b\\xa6\\xe6\\x88\\xaa\n"
  "uint8 FAULT_OUTPUT=3         # \\xe4\\xb8\\x8b\\xe5\\x8f\\x91\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\n"
  "uint8 FAULT_INTERNAL=4       # \\xe5\\x86\\xb3\\xe7\\xad\\x96\\xe5\\xb1\\x82\\xe5\\x86\\x85\\xe9\\x83\\xa8\\xe9\\x94\\x99\\xe8\\xaf\\xaf\n"
  "uint8 fault_code\n"
  "\n"
  "# \\xe6\\x95\\x85\\xe9\\x9a\\x9c\\xe8\\xaf\\xa6\\xe6\\x83\\x85\\xef\\xbc\\x8c\\xe4\\xbe\\x9b\\xe6\\x97\\xa5\\xe5\\xbf\\x97\\xe4\\xb8\\x8e\\xe8\\xaf\\x8a\\xe6\\x96\\xad\\xe4\\xbd\\xbf\\xe7\\x94\\xa8\\xef\\xbc\\x8c\\xe4\\xb8\\x8d\\xe5\\x8f\\x82\\xe4\\xb8\\x8e\\xe6\\x8e\\xa7\\xe5\\x88\\xb6\\xe5\\x88\\xa4\\xe5\\xae\\x9a\n"
  "string fault_detail";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
teleop_msgs__msg__TeleopSessionState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {teleop_msgs__msg__TeleopSessionState__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 793, 793},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
teleop_msgs__msg__TeleopSessionState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *teleop_msgs__msg__TeleopSessionState__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    sources[3] = *teleop_msgs__msg__TeleopLimbState__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
