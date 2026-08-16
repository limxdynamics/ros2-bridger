// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from upper_body:srv/moveJ.idl
// generated code does not contain a copyright notice

#include "upper_body/srv/detail/move_j__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_upper_body
const rosidl_type_hash_t *
upper_body__srv__moveJ__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf7, 0xc7, 0x48, 0x1c, 0x25, 0xf1, 0x99, 0x95,
      0x73, 0x1d, 0xb0, 0xd9, 0x04, 0x3a, 0x89, 0x6f,
      0x1f, 0xb2, 0xe2, 0x98, 0xe4, 0xfd, 0xfe, 0x95,
      0xd1, 0x79, 0xfa, 0x9a, 0xed, 0x32, 0x20, 0x09,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_upper_body
const rosidl_type_hash_t *
upper_body__srv__moveJ_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc5, 0x00, 0x66, 0x83, 0x0a, 0x18, 0x7e, 0x15,
      0x57, 0xa1, 0xa2, 0x22, 0xae, 0xf0, 0xb5, 0xa3,
      0x25, 0x76, 0x09, 0xcd, 0x6e, 0x6b, 0x33, 0x81,
      0xf9, 0x74, 0x62, 0xed, 0x36, 0x02, 0x2a, 0x0e,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_upper_body
const rosidl_type_hash_t *
upper_body__srv__moveJ_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x39, 0x33, 0xf2, 0xee, 0x07, 0x47, 0x9b, 0xb0,
      0xf8, 0x1c, 0xba, 0x81, 0x14, 0xe6, 0x25, 0xc7,
      0x84, 0xdc, 0xd3, 0x6a, 0x18, 0x32, 0x47, 0x12,
      0x72, 0x7c, 0x24, 0xe9, 0x38, 0xcb, 0x39, 0x42,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_upper_body
const rosidl_type_hash_t *
upper_body__srv__moveJ_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x14, 0x01, 0xf8, 0xbb, 0x06, 0x2c, 0x5e, 0x47,
      0x2e, 0xd0, 0x20, 0xa3, 0x62, 0x2a, 0x87, 0x53,
      0x66, 0x95, 0xf0, 0xe0, 0x86, 0x48, 0x8f, 0x40,
      0x72, 0x5c, 0x17, 0x20, 0x5f, 0xe6, 0x70, 0x06,
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

static char upper_body__srv__moveJ__TYPE_NAME[] = "upper_body/srv/moveJ";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char upper_body__srv__moveJ_Event__TYPE_NAME[] = "upper_body/srv/moveJ_Event";
static char upper_body__srv__moveJ_Request__TYPE_NAME[] = "upper_body/srv/moveJ_Request";
static char upper_body__srv__moveJ_Response__TYPE_NAME[] = "upper_body/srv/moveJ_Response";

// Define type names, field names, and default values
static char upper_body__srv__moveJ__FIELD_NAME__request_message[] = "request_message";
static char upper_body__srv__moveJ__FIELD_NAME__response_message[] = "response_message";
static char upper_body__srv__moveJ__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field upper_body__srv__moveJ__FIELDS[] = {
  {
    {upper_body__srv__moveJ__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {upper_body__srv__moveJ_Request__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
  {
    {upper_body__srv__moveJ__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {upper_body__srv__moveJ_Response__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
  {
    {upper_body__srv__moveJ__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {upper_body__srv__moveJ_Event__TYPE_NAME, 26, 26},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription upper_body__srv__moveJ__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {upper_body__srv__moveJ_Event__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {upper_body__srv__moveJ_Request__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {upper_body__srv__moveJ_Response__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
upper_body__srv__moveJ__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {upper_body__srv__moveJ__TYPE_NAME, 20, 20},
      {upper_body__srv__moveJ__FIELDS, 3, 3},
    },
    {upper_body__srv__moveJ__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = upper_body__srv__moveJ_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = upper_body__srv__moveJ_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = upper_body__srv__moveJ_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char upper_body__srv__moveJ_Request__FIELD_NAME__joints[] = "joints";
static char upper_body__srv__moveJ_Request__FIELD_NAME__speed[] = "speed";

static rosidl_runtime_c__type_description__Field upper_body__srv__moveJ_Request__FIELDS[] = {
  {
    {upper_body__srv__moveJ_Request__FIELD_NAME__joints, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {upper_body__srv__moveJ_Request__FIELD_NAME__speed, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
upper_body__srv__moveJ_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {upper_body__srv__moveJ_Request__TYPE_NAME, 28, 28},
      {upper_body__srv__moveJ_Request__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char upper_body__srv__moveJ_Response__FIELD_NAME__status[] = "status";

static rosidl_runtime_c__type_description__Field upper_body__srv__moveJ_Response__FIELDS[] = {
  {
    {upper_body__srv__moveJ_Response__FIELD_NAME__status, 6, 6},
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
upper_body__srv__moveJ_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {upper_body__srv__moveJ_Response__TYPE_NAME, 29, 29},
      {upper_body__srv__moveJ_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char upper_body__srv__moveJ_Event__FIELD_NAME__info[] = "info";
static char upper_body__srv__moveJ_Event__FIELD_NAME__request[] = "request";
static char upper_body__srv__moveJ_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field upper_body__srv__moveJ_Event__FIELDS[] = {
  {
    {upper_body__srv__moveJ_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {upper_body__srv__moveJ_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {upper_body__srv__moveJ_Request__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
  {
    {upper_body__srv__moveJ_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {upper_body__srv__moveJ_Response__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription upper_body__srv__moveJ_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {upper_body__srv__moveJ_Request__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {upper_body__srv__moveJ_Response__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
upper_body__srv__moveJ_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {upper_body__srv__moveJ_Event__TYPE_NAME, 26, 26},
      {upper_body__srv__moveJ_Event__FIELDS, 3, 3},
    },
    {upper_body__srv__moveJ_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = upper_body__srv__moveJ_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = upper_body__srv__moveJ_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32[] joints # unit: rad\n"
  "float32 speed # unit: rad/s\n"
  "---\n"
  "int32 status";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
upper_body__srv__moveJ__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {upper_body__srv__moveJ__TYPE_NAME, 20, 20},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 74, 74},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
upper_body__srv__moveJ_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {upper_body__srv__moveJ_Request__TYPE_NAME, 28, 28},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
upper_body__srv__moveJ_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {upper_body__srv__moveJ_Response__TYPE_NAME, 29, 29},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
upper_body__srv__moveJ_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {upper_body__srv__moveJ_Event__TYPE_NAME, 26, 26},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
upper_body__srv__moveJ__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *upper_body__srv__moveJ__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *upper_body__srv__moveJ_Event__get_individual_type_description_source(NULL);
    sources[4] = *upper_body__srv__moveJ_Request__get_individual_type_description_source(NULL);
    sources[5] = *upper_body__srv__moveJ_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
upper_body__srv__moveJ_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *upper_body__srv__moveJ_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
upper_body__srv__moveJ_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *upper_body__srv__moveJ_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
upper_body__srv__moveJ_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *upper_body__srv__moveJ_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *upper_body__srv__moveJ_Request__get_individual_type_description_source(NULL);
    sources[4] = *upper_body__srv__moveJ_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
