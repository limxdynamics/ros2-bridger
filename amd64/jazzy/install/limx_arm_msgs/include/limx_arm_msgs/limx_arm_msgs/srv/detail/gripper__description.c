// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from limx_arm_msgs:srv/gripper.idl
// generated code does not contain a copyright notice

#include "limx_arm_msgs/srv/detail/gripper__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
const rosidl_type_hash_t *
limx_arm_msgs__srv__gripper__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x22, 0xce, 0x49, 0xc5, 0xc6, 0x20, 0x81, 0x37,
      0x1d, 0x98, 0x9f, 0xa8, 0xbf, 0x84, 0x3e, 0x0f,
      0xf1, 0x3c, 0xb5, 0xba, 0x83, 0xf7, 0x8b, 0x0f,
      0xfc, 0x67, 0x83, 0xac, 0x75, 0x40, 0x13, 0x69,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
const rosidl_type_hash_t *
limx_arm_msgs__srv__gripper_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x23, 0x3c, 0xc6, 0x68, 0xb0, 0xb8, 0x7d, 0x8a,
      0x5f, 0x56, 0x2e, 0x58, 0x3e, 0xe9, 0x72, 0x29,
      0x49, 0xa1, 0x0b, 0xfd, 0xd1, 0x02, 0xe5, 0x29,
      0x3f, 0xe0, 0xfc, 0x29, 0xce, 0x69, 0x62, 0x70,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
const rosidl_type_hash_t *
limx_arm_msgs__srv__gripper_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1b, 0xf6, 0x17, 0x5c, 0xbb, 0x52, 0xe7, 0x83,
      0xf1, 0x37, 0x04, 0x4f, 0xfa, 0xed, 0xb1, 0x8c,
      0x9a, 0x58, 0xb7, 0xfa, 0x90, 0xe4, 0x69, 0xcd,
      0xdd, 0x06, 0xd8, 0x7d, 0x6d, 0x4e, 0xf0, 0x5b,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
const rosidl_type_hash_t *
limx_arm_msgs__srv__gripper_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x70, 0x04, 0xe5, 0xb9, 0x54, 0x7f, 0xee, 0xd7,
      0x9d, 0x90, 0xc8, 0x54, 0xde, 0x00, 0xbc, 0x2e,
      0x46, 0x4b, 0xee, 0xa9, 0x56, 0xc7, 0x20, 0x40,
      0x1b, 0xb2, 0x71, 0x97, 0x99, 0x61, 0x5f, 0x72,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char limx_arm_msgs__srv__gripper__TYPE_NAME[] = "limx_arm_msgs/srv/gripper";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char limx_arm_msgs__srv__gripper_Event__TYPE_NAME[] = "limx_arm_msgs/srv/gripper_Event";
static char limx_arm_msgs__srv__gripper_Request__TYPE_NAME[] = "limx_arm_msgs/srv/gripper_Request";
static char limx_arm_msgs__srv__gripper_Response__TYPE_NAME[] = "limx_arm_msgs/srv/gripper_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char limx_arm_msgs__srv__gripper__FIELD_NAME__request_message[] = "request_message";
static char limx_arm_msgs__srv__gripper__FIELD_NAME__response_message[] = "response_message";
static char limx_arm_msgs__srv__gripper__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field limx_arm_msgs__srv__gripper__FIELDS[] = {
  {
    {limx_arm_msgs__srv__gripper__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {limx_arm_msgs__srv__gripper_Request__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {limx_arm_msgs__srv__gripper__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {limx_arm_msgs__srv__gripper_Response__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
  {
    {limx_arm_msgs__srv__gripper__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {limx_arm_msgs__srv__gripper_Event__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription limx_arm_msgs__srv__gripper__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {limx_arm_msgs__srv__gripper_Event__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {limx_arm_msgs__srv__gripper_Request__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {limx_arm_msgs__srv__gripper_Response__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
limx_arm_msgs__srv__gripper__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {limx_arm_msgs__srv__gripper__TYPE_NAME, 25, 25},
      {limx_arm_msgs__srv__gripper__FIELDS, 3, 3},
    },
    {limx_arm_msgs__srv__gripper__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = limx_arm_msgs__srv__gripper_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = limx_arm_msgs__srv__gripper_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = limx_arm_msgs__srv__gripper_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char limx_arm_msgs__srv__gripper_Request__FIELD_NAME__initial[] = "initial";
static char limx_arm_msgs__srv__gripper_Request__FIELD_NAME__dis[] = "dis";
static char limx_arm_msgs__srv__gripper_Request__FIELD_NAME__force[] = "force";

static rosidl_runtime_c__type_description__Field limx_arm_msgs__srv__gripper_Request__FIELDS[] = {
  {
    {limx_arm_msgs__srv__gripper_Request__FIELD_NAME__initial, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {limx_arm_msgs__srv__gripper_Request__FIELD_NAME__dis, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {limx_arm_msgs__srv__gripper_Request__FIELD_NAME__force, 5, 5},
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
limx_arm_msgs__srv__gripper_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {limx_arm_msgs__srv__gripper_Request__TYPE_NAME, 33, 33},
      {limx_arm_msgs__srv__gripper_Request__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char limx_arm_msgs__srv__gripper_Response__FIELD_NAME__status[] = "status";

static rosidl_runtime_c__type_description__Field limx_arm_msgs__srv__gripper_Response__FIELDS[] = {
  {
    {limx_arm_msgs__srv__gripper_Response__FIELD_NAME__status, 6, 6},
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
limx_arm_msgs__srv__gripper_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {limx_arm_msgs__srv__gripper_Response__TYPE_NAME, 34, 34},
      {limx_arm_msgs__srv__gripper_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char limx_arm_msgs__srv__gripper_Event__FIELD_NAME__info[] = "info";
static char limx_arm_msgs__srv__gripper_Event__FIELD_NAME__request[] = "request";
static char limx_arm_msgs__srv__gripper_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field limx_arm_msgs__srv__gripper_Event__FIELDS[] = {
  {
    {limx_arm_msgs__srv__gripper_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {limx_arm_msgs__srv__gripper_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {limx_arm_msgs__srv__gripper_Request__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {limx_arm_msgs__srv__gripper_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {limx_arm_msgs__srv__gripper_Response__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription limx_arm_msgs__srv__gripper_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {limx_arm_msgs__srv__gripper_Request__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {limx_arm_msgs__srv__gripper_Response__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
limx_arm_msgs__srv__gripper_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {limx_arm_msgs__srv__gripper_Event__TYPE_NAME, 31, 31},
      {limx_arm_msgs__srv__gripper_Event__FIELDS, 3, 3},
    },
    {limx_arm_msgs__srv__gripper_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = limx_arm_msgs__srv__gripper_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = limx_arm_msgs__srv__gripper_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool initial\n"
  "int32 dis\n"
  "int32 force\n"
  "---\n"
  "int32 status";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
limx_arm_msgs__srv__gripper__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {limx_arm_msgs__srv__gripper__TYPE_NAME, 25, 25},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 52, 52},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
limx_arm_msgs__srv__gripper_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {limx_arm_msgs__srv__gripper_Request__TYPE_NAME, 33, 33},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
limx_arm_msgs__srv__gripper_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {limx_arm_msgs__srv__gripper_Response__TYPE_NAME, 34, 34},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
limx_arm_msgs__srv__gripper_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {limx_arm_msgs__srv__gripper_Event__TYPE_NAME, 31, 31},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
limx_arm_msgs__srv__gripper__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *limx_arm_msgs__srv__gripper__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *limx_arm_msgs__srv__gripper_Event__get_individual_type_description_source(NULL);
    sources[3] = *limx_arm_msgs__srv__gripper_Request__get_individual_type_description_source(NULL);
    sources[4] = *limx_arm_msgs__srv__gripper_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
limx_arm_msgs__srv__gripper_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *limx_arm_msgs__srv__gripper_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
limx_arm_msgs__srv__gripper_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *limx_arm_msgs__srv__gripper_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
limx_arm_msgs__srv__gripper_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *limx_arm_msgs__srv__gripper_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *limx_arm_msgs__srv__gripper_Request__get_individual_type_description_source(NULL);
    sources[3] = *limx_arm_msgs__srv__gripper_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
