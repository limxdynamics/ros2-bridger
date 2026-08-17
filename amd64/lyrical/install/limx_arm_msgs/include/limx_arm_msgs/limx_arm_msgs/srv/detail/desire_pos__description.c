// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from limx_arm_msgs:srv/desire_pos.idl
// generated code does not contain a copyright notice

#include "limx_arm_msgs/srv/detail/desire_pos__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
const rosidl_type_hash_t *
limx_arm_msgs__srv__desire_pos__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x18, 0xc7, 0x9a, 0x21, 0x9a, 0x86, 0x19, 0x2c,
      0x75, 0x39, 0xce, 0x36, 0xf5, 0x16, 0x12, 0x9f,
      0x41, 0x9e, 0x48, 0x43, 0x71, 0xb6, 0x12, 0xf1,
      0xad, 0xb1, 0x6b, 0x3e, 0xc2, 0x58, 0xc4, 0xc9,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
const rosidl_type_hash_t *
limx_arm_msgs__srv__desire_pos_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x69, 0xe9, 0xfe, 0x0d, 0xd8, 0x22, 0x3f, 0x00,
      0xee, 0xa9, 0x19, 0x7f, 0x8d, 0x9d, 0xf6, 0xc0,
      0x7a, 0xec, 0x10, 0x90, 0x6e, 0xb2, 0x6a, 0x7f,
      0x81, 0x4e, 0x5f, 0xad, 0x1c, 0xf4, 0xa1, 0xc9,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
const rosidl_type_hash_t *
limx_arm_msgs__srv__desire_pos_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8b, 0xd9, 0xb9, 0x93, 0x63, 0xf5, 0xc9, 0x88,
      0x21, 0xdc, 0x50, 0xe0, 0xf3, 0x07, 0x2f, 0x41,
      0x51, 0x29, 0x34, 0xf0, 0x18, 0x10, 0x25, 0xde,
      0x52, 0x0f, 0x96, 0xf0, 0x93, 0x1f, 0x35, 0x67,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
const rosidl_type_hash_t *
limx_arm_msgs__srv__desire_pos_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xfb, 0xff, 0x56, 0xc7, 0xd2, 0xed, 0x0d, 0x44,
      0xe4, 0x97, 0x47, 0x0d, 0x34, 0xbc, 0x7f, 0x15,
      0xb8, 0x00, 0x42, 0x40, 0xb0, 0xc3, 0xfc, 0x28,
      0xbd, 0xcf, 0x31, 0x4c, 0xc6, 0xf9, 0xe7, 0x0a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

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

static char limx_arm_msgs__srv__desire_pos__TYPE_NAME[] = "limx_arm_msgs/srv/desire_pos";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char limx_arm_msgs__srv__desire_pos_Event__TYPE_NAME[] = "limx_arm_msgs/srv/desire_pos_Event";
static char limx_arm_msgs__srv__desire_pos_Request__TYPE_NAME[] = "limx_arm_msgs/srv/desire_pos_Request";
static char limx_arm_msgs__srv__desire_pos_Response__TYPE_NAME[] = "limx_arm_msgs/srv/desire_pos_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char limx_arm_msgs__srv__desire_pos__FIELD_NAME__request_message[] = "request_message";
static char limx_arm_msgs__srv__desire_pos__FIELD_NAME__response_message[] = "response_message";
static char limx_arm_msgs__srv__desire_pos__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field limx_arm_msgs__srv__desire_pos__FIELDS[] = {
  {
    {limx_arm_msgs__srv__desire_pos__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {limx_arm_msgs__srv__desire_pos_Request__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {limx_arm_msgs__srv__desire_pos__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {limx_arm_msgs__srv__desire_pos_Response__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {limx_arm_msgs__srv__desire_pos__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {limx_arm_msgs__srv__desire_pos_Event__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription limx_arm_msgs__srv__desire_pos__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {limx_arm_msgs__srv__desire_pos_Event__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {limx_arm_msgs__srv__desire_pos_Request__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {limx_arm_msgs__srv__desire_pos_Response__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
limx_arm_msgs__srv__desire_pos__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {limx_arm_msgs__srv__desire_pos__TYPE_NAME, 28, 28},
      {limx_arm_msgs__srv__desire_pos__FIELDS, 3, 3},
    },
    {limx_arm_msgs__srv__desire_pos__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = limx_arm_msgs__srv__desire_pos_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = limx_arm_msgs__srv__desire_pos_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = limx_arm_msgs__srv__desire_pos_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char limx_arm_msgs__srv__desire_pos_Request__FIELD_NAME__taskNum[] = "taskNum";
static char limx_arm_msgs__srv__desire_pos_Request__FIELD_NAME__desire_pos[] = "desire_pos";
static char limx_arm_msgs__srv__desire_pos_Request__FIELD_NAME__co_control[] = "co_control";

static rosidl_runtime_c__type_description__Field limx_arm_msgs__srv__desire_pos_Request__FIELDS[] = {
  {
    {limx_arm_msgs__srv__desire_pos_Request__FIELD_NAME__taskNum, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {limx_arm_msgs__srv__desire_pos_Request__FIELD_NAME__desire_pos, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      6,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {limx_arm_msgs__srv__desire_pos_Request__FIELD_NAME__co_control, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
limx_arm_msgs__srv__desire_pos_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {limx_arm_msgs__srv__desire_pos_Request__TYPE_NAME, 36, 36},
      {limx_arm_msgs__srv__desire_pos_Request__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char limx_arm_msgs__srv__desire_pos_Response__FIELD_NAME__status[] = "status";

static rosidl_runtime_c__type_description__Field limx_arm_msgs__srv__desire_pos_Response__FIELDS[] = {
  {
    {limx_arm_msgs__srv__desire_pos_Response__FIELD_NAME__status, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
limx_arm_msgs__srv__desire_pos_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {limx_arm_msgs__srv__desire_pos_Response__TYPE_NAME, 37, 37},
      {limx_arm_msgs__srv__desire_pos_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char limx_arm_msgs__srv__desire_pos_Event__FIELD_NAME__info[] = "info";
static char limx_arm_msgs__srv__desire_pos_Event__FIELD_NAME__request[] = "request";
static char limx_arm_msgs__srv__desire_pos_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field limx_arm_msgs__srv__desire_pos_Event__FIELDS[] = {
  {
    {limx_arm_msgs__srv__desire_pos_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {limx_arm_msgs__srv__desire_pos_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {limx_arm_msgs__srv__desire_pos_Request__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {limx_arm_msgs__srv__desire_pos_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {limx_arm_msgs__srv__desire_pos_Response__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription limx_arm_msgs__srv__desire_pos_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {limx_arm_msgs__srv__desire_pos_Request__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {limx_arm_msgs__srv__desire_pos_Response__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
limx_arm_msgs__srv__desire_pos_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {limx_arm_msgs__srv__desire_pos_Event__TYPE_NAME, 34, 34},
      {limx_arm_msgs__srv__desire_pos_Event__FIELDS, 3, 3},
    },
    {limx_arm_msgs__srv__desire_pos_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = limx_arm_msgs__srv__desire_pos_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = limx_arm_msgs__srv__desire_pos_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 taskNum\n"
  "float32[6] desire_pos  # deg/m\n"
  "bool co_control\n"
  "---\n"
  "bool status";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
limx_arm_msgs__srv__desire_pos__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {limx_arm_msgs__srv__desire_pos__TYPE_NAME, 28, 28},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 77, 77},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
limx_arm_msgs__srv__desire_pos_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {limx_arm_msgs__srv__desire_pos_Request__TYPE_NAME, 36, 36},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
limx_arm_msgs__srv__desire_pos_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {limx_arm_msgs__srv__desire_pos_Response__TYPE_NAME, 37, 37},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
limx_arm_msgs__srv__desire_pos_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {limx_arm_msgs__srv__desire_pos_Event__TYPE_NAME, 34, 34},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
limx_arm_msgs__srv__desire_pos__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *limx_arm_msgs__srv__desire_pos__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *limx_arm_msgs__srv__desire_pos_Event__get_individual_type_description_source(NULL);
    sources[3] = *limx_arm_msgs__srv__desire_pos_Request__get_individual_type_description_source(NULL);
    sources[4] = *limx_arm_msgs__srv__desire_pos_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
limx_arm_msgs__srv__desire_pos_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *limx_arm_msgs__srv__desire_pos_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
limx_arm_msgs__srv__desire_pos_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *limx_arm_msgs__srv__desire_pos_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
limx_arm_msgs__srv__desire_pos_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *limx_arm_msgs__srv__desire_pos_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *limx_arm_msgs__srv__desire_pos_Request__get_individual_type_description_source(NULL);
    sources[3] = *limx_arm_msgs__srv__desire_pos_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
