// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mros_msgs:msg/TopicStatistics.idl
// generated code does not contain a copyright notice

#include "mros_msgs/msg/detail/topic_statistics__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mros_msgs
const rosidl_type_hash_t *
mros_msgs__msg__TopicStatistics__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbe, 0x59, 0x5a, 0xe3, 0xaf, 0xf5, 0x8a, 0x91,
      0xdb, 0x23, 0x2d, 0xab, 0xaf, 0xe2, 0x5b, 0x7d,
      0x37, 0x6f, 0x86, 0x95, 0xfb, 0x17, 0xe1, 0xd4,
      0x54, 0xbf, 0x2b, 0xb6, 0xf7, 0x22, 0x7d, 0xc6,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "mros_msgs/msg/detail/topic_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t mros_msgs__msg__TopicInfo__EXPECTED_HASH = {1, {
    0x72, 0x09, 0xc5, 0x1f, 0x05, 0x99, 0x35, 0xac,
    0x53, 0xd1, 0x54, 0x89, 0x0f, 0x55, 0x96, 0x4f,
    0xb2, 0x6d, 0x55, 0x9a, 0x0b, 0x96, 0x82, 0x6f,
    0xf2, 0x51, 0x91, 0x88, 0x2f, 0x52, 0xd0, 0xe0,
  }};
#endif

static char mros_msgs__msg__TopicStatistics__TYPE_NAME[] = "mros_msgs/msg/TopicStatistics";
static char mros_msgs__msg__TopicInfo__TYPE_NAME[] = "mros_msgs/msg/TopicInfo";

// Define type names, field names, and default values
static char mros_msgs__msg__TopicStatistics__FIELD_NAME__node[] = "node";
static char mros_msgs__msg__TopicStatistics__FIELD_NAME__subscribers[] = "subscribers";
static char mros_msgs__msg__TopicStatistics__FIELD_NAME__publishers[] = "publishers";

static rosidl_runtime_c__type_description__Field mros_msgs__msg__TopicStatistics__FIELDS[] = {
  {
    {mros_msgs__msg__TopicStatistics__FIELD_NAME__node, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mros_msgs__msg__TopicStatistics__FIELD_NAME__subscribers, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {mros_msgs__msg__TopicInfo__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
  {
    {mros_msgs__msg__TopicStatistics__FIELD_NAME__publishers, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {mros_msgs__msg__TopicInfo__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mros_msgs__msg__TopicStatistics__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {mros_msgs__msg__TopicInfo__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mros_msgs__msg__TopicStatistics__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mros_msgs__msg__TopicStatistics__TYPE_NAME, 29, 29},
      {mros_msgs__msg__TopicStatistics__FIELDS, 3, 3},
    },
    {mros_msgs__msg__TopicStatistics__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&mros_msgs__msg__TopicInfo__EXPECTED_HASH, mros_msgs__msg__TopicInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = mros_msgs__msg__TopicInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string node\n"
  "\n"
  "mros_msgs/TopicInfo[] subscribers\n"
  "mros_msgs/TopicInfo[] publishers";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mros_msgs__msg__TopicStatistics__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mros_msgs__msg__TopicStatistics__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 79, 79},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mros_msgs__msg__TopicStatistics__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mros_msgs__msg__TopicStatistics__get_individual_type_description_source(NULL),
    sources[1] = *mros_msgs__msg__TopicInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
