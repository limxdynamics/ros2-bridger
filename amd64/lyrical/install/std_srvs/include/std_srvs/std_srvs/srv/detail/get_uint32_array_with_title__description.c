// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from std_srvs:srv/GetUint32ArrayWithTitle.idl
// generated code does not contain a copyright notice

#include "std_srvs/srv/detail/get_uint32_array_with_title__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_std_srvs
const rosidl_type_hash_t *
std_srvs__srv__GetUint32ArrayWithTitle__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc1, 0x28, 0x6f, 0xed, 0x9e, 0x6d, 0x26, 0xec,
      0xe9, 0xcb, 0x57, 0xb6, 0x19, 0x6d, 0x5b, 0x56,
      0xed, 0xa0, 0x86, 0xc0, 0x65, 0x55, 0xdb, 0x29,
      0xe2, 0x11, 0x25, 0x7e, 0xe1, 0x8b, 0x09, 0x93,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_std_srvs
const rosidl_type_hash_t *
std_srvs__srv__GetUint32ArrayWithTitle_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x84, 0x37, 0x66, 0x9e, 0x9c, 0xe1, 0xff, 0xbe,
      0x40, 0xd9, 0xd8, 0x64, 0xb3, 0xfa, 0x64, 0xfc,
      0x81, 0x9c, 0xd2, 0xc8, 0x80, 0x82, 0xc3, 0xed,
      0x6f, 0xb9, 0x0a, 0x49, 0xf7, 0x5b, 0x93, 0x75,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_std_srvs
const rosidl_type_hash_t *
std_srvs__srv__GetUint32ArrayWithTitle_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb5, 0xd2, 0x0f, 0x77, 0x97, 0x98, 0xa2, 0xcc,
      0xc0, 0xee, 0xe9, 0x33, 0xef, 0xe7, 0x1a, 0x04,
      0xb3, 0x17, 0x3a, 0x78, 0xc9, 0x7a, 0x3b, 0x2a,
      0xce, 0x45, 0xdd, 0x8b, 0x00, 0x90, 0x95, 0x38,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_std_srvs
const rosidl_type_hash_t *
std_srvs__srv__GetUint32ArrayWithTitle_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xcf, 0x6b, 0x86, 0xa0, 0x41, 0x69, 0xda, 0xa9,
      0x75, 0x83, 0x35, 0x10, 0x7d, 0x4f, 0x38, 0x81,
      0xbc, 0xf4, 0xd8, 0x9c, 0xeb, 0x67, 0x51, 0x57,
      0xb1, 0x80, 0x9f, 0xea, 0x2c, 0xff, 0x2e, 0xd2,
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

static char std_srvs__srv__GetUint32ArrayWithTitle__TYPE_NAME[] = "std_srvs/srv/GetUint32ArrayWithTitle";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char std_srvs__srv__GetUint32ArrayWithTitle_Event__TYPE_NAME[] = "std_srvs/srv/GetUint32ArrayWithTitle_Event";
static char std_srvs__srv__GetUint32ArrayWithTitle_Request__TYPE_NAME[] = "std_srvs/srv/GetUint32ArrayWithTitle_Request";
static char std_srvs__srv__GetUint32ArrayWithTitle_Response__TYPE_NAME[] = "std_srvs/srv/GetUint32ArrayWithTitle_Response";

// Define type names, field names, and default values
static char std_srvs__srv__GetUint32ArrayWithTitle__FIELD_NAME__request_message[] = "request_message";
static char std_srvs__srv__GetUint32ArrayWithTitle__FIELD_NAME__response_message[] = "response_message";
static char std_srvs__srv__GetUint32ArrayWithTitle__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field std_srvs__srv__GetUint32ArrayWithTitle__FIELDS[] = {
  {
    {std_srvs__srv__GetUint32ArrayWithTitle__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_srvs__srv__GetUint32ArrayWithTitle_Request__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
  {
    {std_srvs__srv__GetUint32ArrayWithTitle__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_srvs__srv__GetUint32ArrayWithTitle_Response__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {std_srvs__srv__GetUint32ArrayWithTitle__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_srvs__srv__GetUint32ArrayWithTitle_Event__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription std_srvs__srv__GetUint32ArrayWithTitle__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {std_srvs__srv__GetUint32ArrayWithTitle_Event__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {std_srvs__srv__GetUint32ArrayWithTitle_Request__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {std_srvs__srv__GetUint32ArrayWithTitle_Response__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
std_srvs__srv__GetUint32ArrayWithTitle__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {std_srvs__srv__GetUint32ArrayWithTitle__TYPE_NAME, 36, 36},
      {std_srvs__srv__GetUint32ArrayWithTitle__FIELDS, 3, 3},
    },
    {std_srvs__srv__GetUint32ArrayWithTitle__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = std_srvs__srv__GetUint32ArrayWithTitle_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = std_srvs__srv__GetUint32ArrayWithTitle_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = std_srvs__srv__GetUint32ArrayWithTitle_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char std_srvs__srv__GetUint32ArrayWithTitle_Request__FIELD_NAME__title[] = "title";

static rosidl_runtime_c__type_description__Field std_srvs__srv__GetUint32ArrayWithTitle_Request__FIELDS[] = {
  {
    {std_srvs__srv__GetUint32ArrayWithTitle_Request__FIELD_NAME__title, 5, 5},
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
std_srvs__srv__GetUint32ArrayWithTitle_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {std_srvs__srv__GetUint32ArrayWithTitle_Request__TYPE_NAME, 44, 44},
      {std_srvs__srv__GetUint32ArrayWithTitle_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char std_srvs__srv__GetUint32ArrayWithTitle_Response__FIELD_NAME__data[] = "data";
static char std_srvs__srv__GetUint32ArrayWithTitle_Response__FIELD_NAME__success[] = "success";
static char std_srvs__srv__GetUint32ArrayWithTitle_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field std_srvs__srv__GetUint32ArrayWithTitle_Response__FIELDS[] = {
  {
    {std_srvs__srv__GetUint32ArrayWithTitle_Response__FIELD_NAME__data, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {std_srvs__srv__GetUint32ArrayWithTitle_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {std_srvs__srv__GetUint32ArrayWithTitle_Response__FIELD_NAME__message, 7, 7},
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
std_srvs__srv__GetUint32ArrayWithTitle_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {std_srvs__srv__GetUint32ArrayWithTitle_Response__TYPE_NAME, 45, 45},
      {std_srvs__srv__GetUint32ArrayWithTitle_Response__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char std_srvs__srv__GetUint32ArrayWithTitle_Event__FIELD_NAME__info[] = "info";
static char std_srvs__srv__GetUint32ArrayWithTitle_Event__FIELD_NAME__request[] = "request";
static char std_srvs__srv__GetUint32ArrayWithTitle_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field std_srvs__srv__GetUint32ArrayWithTitle_Event__FIELDS[] = {
  {
    {std_srvs__srv__GetUint32ArrayWithTitle_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {std_srvs__srv__GetUint32ArrayWithTitle_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {std_srvs__srv__GetUint32ArrayWithTitle_Request__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
  {
    {std_srvs__srv__GetUint32ArrayWithTitle_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {std_srvs__srv__GetUint32ArrayWithTitle_Response__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription std_srvs__srv__GetUint32ArrayWithTitle_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {std_srvs__srv__GetUint32ArrayWithTitle_Request__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {std_srvs__srv__GetUint32ArrayWithTitle_Response__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
std_srvs__srv__GetUint32ArrayWithTitle_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {std_srvs__srv__GetUint32ArrayWithTitle_Event__TYPE_NAME, 42, 42},
      {std_srvs__srv__GetUint32ArrayWithTitle_Event__FIELDS, 3, 3},
    },
    {std_srvs__srv__GetUint32ArrayWithTitle_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = std_srvs__srv__GetUint32ArrayWithTitle_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = std_srvs__srv__GetUint32ArrayWithTitle_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string title\n"
  "---\n"
  "uint32[]  data    # array of data\n"
  "bool success   # indicate successful run of triggered service\n"
  "string message # informational, e.g. for error messages";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
std_srvs__srv__GetUint32ArrayWithTitle__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {std_srvs__srv__GetUint32ArrayWithTitle__TYPE_NAME, 36, 36},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 168, 168},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
std_srvs__srv__GetUint32ArrayWithTitle_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {std_srvs__srv__GetUint32ArrayWithTitle_Request__TYPE_NAME, 44, 44},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
std_srvs__srv__GetUint32ArrayWithTitle_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {std_srvs__srv__GetUint32ArrayWithTitle_Response__TYPE_NAME, 45, 45},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
std_srvs__srv__GetUint32ArrayWithTitle_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {std_srvs__srv__GetUint32ArrayWithTitle_Event__TYPE_NAME, 42, 42},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
std_srvs__srv__GetUint32ArrayWithTitle__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *std_srvs__srv__GetUint32ArrayWithTitle__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *std_srvs__srv__GetUint32ArrayWithTitle_Event__get_individual_type_description_source(NULL);
    sources[4] = *std_srvs__srv__GetUint32ArrayWithTitle_Request__get_individual_type_description_source(NULL);
    sources[5] = *std_srvs__srv__GetUint32ArrayWithTitle_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
std_srvs__srv__GetUint32ArrayWithTitle_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *std_srvs__srv__GetUint32ArrayWithTitle_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
std_srvs__srv__GetUint32ArrayWithTitle_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *std_srvs__srv__GetUint32ArrayWithTitle_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
std_srvs__srv__GetUint32ArrayWithTitle_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *std_srvs__srv__GetUint32ArrayWithTitle_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *std_srvs__srv__GetUint32ArrayWithTitle_Request__get_individual_type_description_source(NULL);
    sources[4] = *std_srvs__srv__GetUint32ArrayWithTitle_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
