// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mros_msgs:msg/Log.idl
// generated code does not contain a copyright notice

#include "mros_msgs/msg/detail/log__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mros_msgs
const rosidl_type_hash_t *
mros_msgs__msg__Log__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x19, 0x2a, 0x1d, 0x40, 0x2a, 0xcf, 0xd5, 0xd0,
      0x29, 0xf2, 0x2b, 0xe7, 0xcc, 0x7f, 0x4c, 0xeb,
      0xad, 0xc1, 0xc7, 0x1c, 0x1c, 0xa4, 0x31, 0x9d,
      0x96, 0x93, 0x55, 0x49, 0xce, 0xee, 0x9a, 0x94,
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

static char mros_msgs__msg__Log__TYPE_NAME[] = "mros_msgs/msg/Log";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char mros_msgs__msg__Log__FIELD_NAME__header[] = "header";
static char mros_msgs__msg__Log__FIELD_NAME__level[] = "level";
static char mros_msgs__msg__Log__FIELD_NAME__name[] = "name";
static char mros_msgs__msg__Log__FIELD_NAME__msg[] = "msg";
static char mros_msgs__msg__Log__FIELD_NAME__file[] = "file";
static char mros_msgs__msg__Log__FIELD_NAME__function[] = "function";
static char mros_msgs__msg__Log__FIELD_NAME__line[] = "line";
static char mros_msgs__msg__Log__FIELD_NAME__topics[] = "topics";
static char mros_msgs__msg__Log__FIELD_NAME__pid[] = "pid";
static char mros_msgs__msg__Log__FIELD_NAME__tid[] = "tid";

static rosidl_runtime_c__type_description__Field mros_msgs__msg__Log__FIELDS[] = {
  {
    {mros_msgs__msg__Log__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {mros_msgs__msg__Log__FIELD_NAME__level, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BYTE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mros_msgs__msg__Log__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mros_msgs__msg__Log__FIELD_NAME__msg, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mros_msgs__msg__Log__FIELD_NAME__file, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mros_msgs__msg__Log__FIELD_NAME__function, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mros_msgs__msg__Log__FIELD_NAME__line, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mros_msgs__msg__Log__FIELD_NAME__topics, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mros_msgs__msg__Log__FIELD_NAME__pid, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mros_msgs__msg__Log__FIELD_NAME__tid, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mros_msgs__msg__Log__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
mros_msgs__msg__Log__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mros_msgs__msg__Log__TYPE_NAME, 17, 17},
      {mros_msgs__msg__Log__FIELDS, 10, 10},
    },
    {mros_msgs__msg__Log__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
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
  "##\n"
  "## Severity level constants\n"
  "##\n"
  "byte DEBUG=1 #debug level\n"
  "byte INFO=2  #general level\n"
  "byte WARN=4  #warning level\n"
  "byte ERROR=8 #error level\n"
  "byte FATAL=16 #fatal/critical level\n"
  "##\n"
  "## Fields\n"
  "##\n"
  "std_msgs/Header header\n"
  "byte level\n"
  "string name # name of the node\n"
  "string msg # message \n"
  "string file # file the message came from\n"
  "string function # function the message came from\n"
  "uint32 line # line the message came from\n"
  "string[] topics # topic names that the node publishes\n"
  "uint64 pid # Process id\n"
  "uint64 tid # Thread id";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mros_msgs__msg__Log__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mros_msgs__msg__Log__TYPE_NAME, 17, 17},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 513, 513},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mros_msgs__msg__Log__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mros_msgs__msg__Log__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
