// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mros_msgs:msg/TopicInfo.idl
// generated code does not contain a copyright notice

#include "mros_msgs/msg/detail/topic_info__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mros_msgs
const rosidl_type_hash_t *
mros_msgs__msg__TopicInfo__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x72, 0x09, 0xc5, 0x1f, 0x05, 0x99, 0x35, 0xac,
      0x53, 0xd1, 0x54, 0x89, 0x0f, 0x55, 0x96, 0x4f,
      0xb2, 0x6d, 0x55, 0x9a, 0x0b, 0x96, 0x82, 0x6f,
      0xf2, 0x51, 0x91, 0x88, 0x2f, 0x52, 0xd0, 0xe0,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mros_msgs__msg__TopicInfo__TYPE_NAME[] = "mros_msgs/msg/TopicInfo";

// Define type names, field names, and default values
static char mros_msgs__msg__TopicInfo__FIELD_NAME__topic_id[] = "topic_id";
static char mros_msgs__msg__TopicInfo__FIELD_NAME__topic_name[] = "topic_name";
static char mros_msgs__msg__TopicInfo__FIELD_NAME__message_type[] = "message_type";
static char mros_msgs__msg__TopicInfo__FIELD_NAME__md5sum[] = "md5sum";
static char mros_msgs__msg__TopicInfo__FIELD_NAME__buffer_size[] = "buffer_size";
static char mros_msgs__msg__TopicInfo__FIELD_NAME__negotiated[] = "negotiated";
static char mros_msgs__msg__TopicInfo__FIELD_NAME__node[] = "node";
static char mros_msgs__msg__TopicInfo__FIELD_NAME__definition[] = "definition";
static char mros_msgs__msg__TopicInfo__FIELD_NAME__latch[] = "latch";
static char mros_msgs__msg__TopicInfo__FIELD_NAME__reliable[] = "reliable";
static char mros_msgs__msg__TopicInfo__FIELD_NAME__queue_size[] = "queue_size";
static char mros_msgs__msg__TopicInfo__FIELD_NAME__enabled[] = "enabled";

static rosidl_runtime_c__type_description__Field mros_msgs__msg__TopicInfo__FIELDS[] = {
  {
    {mros_msgs__msg__TopicInfo__FIELD_NAME__topic_id, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mros_msgs__msg__TopicInfo__FIELD_NAME__topic_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mros_msgs__msg__TopicInfo__FIELD_NAME__message_type, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mros_msgs__msg__TopicInfo__FIELD_NAME__md5sum, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mros_msgs__msg__TopicInfo__FIELD_NAME__buffer_size, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mros_msgs__msg__TopicInfo__FIELD_NAME__negotiated, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mros_msgs__msg__TopicInfo__FIELD_NAME__node, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mros_msgs__msg__TopicInfo__FIELD_NAME__definition, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mros_msgs__msg__TopicInfo__FIELD_NAME__latch, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mros_msgs__msg__TopicInfo__FIELD_NAME__reliable, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mros_msgs__msg__TopicInfo__FIELD_NAME__queue_size, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mros_msgs__msg__TopicInfo__FIELD_NAME__enabled, 7, 7},
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
mros_msgs__msg__TopicInfo__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mros_msgs__msg__TopicInfo__TYPE_NAME, 23, 23},
      {mros_msgs__msg__TopicInfo__FIELDS, 12, 12},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# special topic_ids\n"
  "uint32 ID_PUBLISHER=0\n"
  "uint32 ID_SUBSCRIBER=1\n"
  "uint32 ID_SERVICE_SERVER=2\n"
  "uint32 ID_SERVICE_CLIENT=4\n"
  "uint32 ID_MROSTOPIC_REQUEST=6\n"
  "uint32 ID_REMOVE_PUBLISHER=7\n"
  "uint32 ID_REMOVE_SUBSCRIBER=8\n"
  "uint32 ID_REMOVE_SERVICE_SERVER=9\n"
  "uint32 ID_REMOVE_SERVICE_CLIENT=11\n"
  "uint32 ID_MROSSERVICE_REQUEST=13\n"
  "uint32 ID_LOG=14\n"
  "uint32 ID_TIME=15\n"
  "uint32 ID_NEGOTIATED=16\n"
  "uint32 ID_SESSION_ID=17\n"
  "uint32 ID_ASHMEM_INFO=18\n"
  "uint32 ID_DIAG=19\n"
  "\n"
  "# The endpoint ID for this topic\n"
  "uint32 topic_id\n"
  "\n"
  "string topic_name\n"
  "string message_type\n"
  "\n"
  "# MD5 checksum for this message type\n"
  "string md5sum\n"
  "\n"
  "# size of the buffer message must fit in\n"
  "int32 buffer_size\n"
  "\n"
  "bool negotiated\n"
  "\n"
  "# node name\n"
  "string node\n"
  "\n"
  "# definition\n"
  "string definition\n"
  "\n"
  "# latch\n"
  "bool latch\n"
  "\n"
  "# reliable\n"
  "bool reliable\n"
  "\n"
  "# queue_size\n"
  "int32 queue_size\n"
  "\n"
  "# enabled\n"
  "int32 enabled";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mros_msgs__msg__TopicInfo__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mros_msgs__msg__TopicInfo__TYPE_NAME, 23, 23},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 813, 813},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mros_msgs__msg__TopicInfo__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mros_msgs__msg__TopicInfo__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
