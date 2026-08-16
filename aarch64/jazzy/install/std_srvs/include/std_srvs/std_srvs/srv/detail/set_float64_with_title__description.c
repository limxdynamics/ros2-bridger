// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from std_srvs:srv/SetFloat64WithTitle.idl
// generated code does not contain a copyright notice

#include "std_srvs/srv/detail/set_float64_with_title__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_std_srvs
const rosidl_type_hash_t *
std_srvs__srv__SetFloat64WithTitle__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x39, 0x2b, 0x7d, 0xc4, 0x2c, 0x58, 0x83, 0x19,
      0x9b, 0x03, 0xc5, 0xe5, 0x7b, 0x6d, 0x6f, 0x63,
      0xcb, 0xdf, 0x0e, 0xcc, 0xe1, 0x90, 0xb1, 0x38,
      0xfd, 0x7b, 0xd5, 0x09, 0xe9, 0xe3, 0xa0, 0x9f,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_std_srvs
const rosidl_type_hash_t *
std_srvs__srv__SetFloat64WithTitle_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xee, 0x97, 0x24, 0x43, 0x84, 0x83, 0xe9, 0xbe,
      0x70, 0xc0, 0x59, 0xc2, 0xf8, 0x46, 0xad, 0xe4,
      0xc5, 0x29, 0xe4, 0x8b, 0x99, 0xc7, 0x8b, 0xa6,
      0x80, 0xc6, 0x04, 0xd2, 0xb3, 0xfe, 0x3e, 0x7b,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_std_srvs
const rosidl_type_hash_t *
std_srvs__srv__SetFloat64WithTitle_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x21, 0xe7, 0x27, 0x9e, 0x5a, 0xb3, 0x8c, 0x8f,
      0x8e, 0xc4, 0xf6, 0x56, 0xb9, 0xb0, 0x20, 0xc2,
      0xf0, 0x52, 0x5d, 0xe9, 0x0e, 0x21, 0x95, 0xad,
      0xbe, 0xa6, 0x05, 0x9a, 0x86, 0xb6, 0x03, 0x08,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_std_srvs
const rosidl_type_hash_t *
std_srvs__srv__SetFloat64WithTitle_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf1, 0x17, 0x42, 0x29, 0xae, 0xc6, 0x47, 0x43,
      0x2a, 0x66, 0x16, 0x5b, 0x85, 0x6d, 0x8e, 0x1d,
      0x06, 0x41, 0x89, 0xa7, 0xf7, 0x26, 0x88, 0x5a,
      0x04, 0xf7, 0x88, 0xac, 0xc5, 0x47, 0x9b, 0xdc,
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

static char std_srvs__srv__SetFloat64WithTitle__TYPE_NAME[] = "std_srvs/srv/SetFloat64WithTitle";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char std_srvs__srv__SetFloat64WithTitle_Event__TYPE_NAME[] = "std_srvs/srv/SetFloat64WithTitle_Event";
static char std_srvs__srv__SetFloat64WithTitle_Request__TYPE_NAME[] = "std_srvs/srv/SetFloat64WithTitle_Request";
static char std_srvs__srv__SetFloat64WithTitle_Response__TYPE_NAME[] = "std_srvs/srv/SetFloat64WithTitle_Response";

// Define type names, field names, and default values
static char std_srvs__srv__SetFloat64WithTitle__FIELD_NAME__request_message[] = "request_message";
static char std_srvs__srv__SetFloat64WithTitle__FIELD_NAME__response_message[] = "response_message";
static char std_srvs__srv__SetFloat64WithTitle__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field std_srvs__srv__SetFloat64WithTitle__FIELDS[] = {
  {
    {std_srvs__srv__SetFloat64WithTitle__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_srvs__srv__SetFloat64WithTitle_Request__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {std_srvs__srv__SetFloat64WithTitle__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_srvs__srv__SetFloat64WithTitle_Response__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {std_srvs__srv__SetFloat64WithTitle__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_srvs__srv__SetFloat64WithTitle_Event__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription std_srvs__srv__SetFloat64WithTitle__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {std_srvs__srv__SetFloat64WithTitle_Event__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {std_srvs__srv__SetFloat64WithTitle_Request__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {std_srvs__srv__SetFloat64WithTitle_Response__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
std_srvs__srv__SetFloat64WithTitle__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {std_srvs__srv__SetFloat64WithTitle__TYPE_NAME, 32, 32},
      {std_srvs__srv__SetFloat64WithTitle__FIELDS, 3, 3},
    },
    {std_srvs__srv__SetFloat64WithTitle__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = std_srvs__srv__SetFloat64WithTitle_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = std_srvs__srv__SetFloat64WithTitle_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = std_srvs__srv__SetFloat64WithTitle_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char std_srvs__srv__SetFloat64WithTitle_Request__FIELD_NAME__title[] = "title";
static char std_srvs__srv__SetFloat64WithTitle_Request__FIELD_NAME__data[] = "data";

static rosidl_runtime_c__type_description__Field std_srvs__srv__SetFloat64WithTitle_Request__FIELDS[] = {
  {
    {std_srvs__srv__SetFloat64WithTitle_Request__FIELD_NAME__title, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {std_srvs__srv__SetFloat64WithTitle_Request__FIELD_NAME__data, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
std_srvs__srv__SetFloat64WithTitle_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {std_srvs__srv__SetFloat64WithTitle_Request__TYPE_NAME, 40, 40},
      {std_srvs__srv__SetFloat64WithTitle_Request__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char std_srvs__srv__SetFloat64WithTitle_Response__FIELD_NAME__success[] = "success";
static char std_srvs__srv__SetFloat64WithTitle_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field std_srvs__srv__SetFloat64WithTitle_Response__FIELDS[] = {
  {
    {std_srvs__srv__SetFloat64WithTitle_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {std_srvs__srv__SetFloat64WithTitle_Response__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
std_srvs__srv__SetFloat64WithTitle_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {std_srvs__srv__SetFloat64WithTitle_Response__TYPE_NAME, 41, 41},
      {std_srvs__srv__SetFloat64WithTitle_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char std_srvs__srv__SetFloat64WithTitle_Event__FIELD_NAME__info[] = "info";
static char std_srvs__srv__SetFloat64WithTitle_Event__FIELD_NAME__request[] = "request";
static char std_srvs__srv__SetFloat64WithTitle_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field std_srvs__srv__SetFloat64WithTitle_Event__FIELDS[] = {
  {
    {std_srvs__srv__SetFloat64WithTitle_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {std_srvs__srv__SetFloat64WithTitle_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {std_srvs__srv__SetFloat64WithTitle_Request__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {std_srvs__srv__SetFloat64WithTitle_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {std_srvs__srv__SetFloat64WithTitle_Response__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription std_srvs__srv__SetFloat64WithTitle_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {std_srvs__srv__SetFloat64WithTitle_Request__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {std_srvs__srv__SetFloat64WithTitle_Response__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
std_srvs__srv__SetFloat64WithTitle_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {std_srvs__srv__SetFloat64WithTitle_Event__TYPE_NAME, 38, 38},
      {std_srvs__srv__SetFloat64WithTitle_Event__FIELDS, 3, 3},
    },
    {std_srvs__srv__SetFloat64WithTitle_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = std_srvs__srv__SetFloat64WithTitle_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = std_srvs__srv__SetFloat64WithTitle_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string title\n"
  "float64  data     # data\n"
  "---\n"
  "bool success   # indicate successful run of triggered service\n"
  "string message # informational, e.g. for error messages";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
std_srvs__srv__SetFloat64WithTitle__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {std_srvs__srv__SetFloat64WithTitle__TYPE_NAME, 32, 32},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 159, 159},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
std_srvs__srv__SetFloat64WithTitle_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {std_srvs__srv__SetFloat64WithTitle_Request__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
std_srvs__srv__SetFloat64WithTitle_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {std_srvs__srv__SetFloat64WithTitle_Response__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
std_srvs__srv__SetFloat64WithTitle_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {std_srvs__srv__SetFloat64WithTitle_Event__TYPE_NAME, 38, 38},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
std_srvs__srv__SetFloat64WithTitle__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *std_srvs__srv__SetFloat64WithTitle__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *std_srvs__srv__SetFloat64WithTitle_Event__get_individual_type_description_source(NULL);
    sources[4] = *std_srvs__srv__SetFloat64WithTitle_Request__get_individual_type_description_source(NULL);
    sources[5] = *std_srvs__srv__SetFloat64WithTitle_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
std_srvs__srv__SetFloat64WithTitle_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *std_srvs__srv__SetFloat64WithTitle_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
std_srvs__srv__SetFloat64WithTitle_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *std_srvs__srv__SetFloat64WithTitle_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
std_srvs__srv__SetFloat64WithTitle_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *std_srvs__srv__SetFloat64WithTitle_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *std_srvs__srv__SetFloat64WithTitle_Request__get_individual_type_description_source(NULL);
    sources[4] = *std_srvs__srv__SetFloat64WithTitle_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
