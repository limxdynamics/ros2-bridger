// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from actionlib:action/TwoInts.idl
// generated code does not contain a copyright notice

#ifndef ACTIONLIB__ACTION__DETAIL__TWO_INTS__STRUCT_H_
#define ACTIONLIB__ACTION__DETAIL__TWO_INTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in action/TwoInts in the package actionlib.
typedef struct actionlib__action__TwoInts_Goal
{
  int64_t a;
  int64_t b;
} actionlib__action__TwoInts_Goal;

// Struct for a sequence of actionlib__action__TwoInts_Goal.
typedef struct actionlib__action__TwoInts_Goal__Sequence
{
  actionlib__action__TwoInts_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} actionlib__action__TwoInts_Goal__Sequence;


// Constants defined in the message

// Struct defined in action/TwoInts in the package actionlib.
typedef struct actionlib__action__TwoInts_Result
{
  int64_t sum;
} actionlib__action__TwoInts_Result;

// Struct for a sequence of actionlib__action__TwoInts_Result.
typedef struct actionlib__action__TwoInts_Result__Sequence
{
  actionlib__action__TwoInts_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} actionlib__action__TwoInts_Result__Sequence;


// Constants defined in the message

// Struct defined in action/TwoInts in the package actionlib.
typedef struct actionlib__action__TwoInts_Feedback
{
  uint8_t structure_needs_at_least_one_member;
} actionlib__action__TwoInts_Feedback;

// Struct for a sequence of actionlib__action__TwoInts_Feedback.
typedef struct actionlib__action__TwoInts_Feedback__Sequence
{
  actionlib__action__TwoInts_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} actionlib__action__TwoInts_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "actionlib/action/detail/two_ints__struct.h"

// Struct defined in action/TwoInts in the package actionlib.
typedef struct actionlib__action__TwoInts_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  actionlib__action__TwoInts_Goal goal;
} actionlib__action__TwoInts_SendGoal_Request;

// Struct for a sequence of actionlib__action__TwoInts_SendGoal_Request.
typedef struct actionlib__action__TwoInts_SendGoal_Request__Sequence
{
  actionlib__action__TwoInts_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} actionlib__action__TwoInts_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/TwoInts in the package actionlib.
typedef struct actionlib__action__TwoInts_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} actionlib__action__TwoInts_SendGoal_Response;

// Struct for a sequence of actionlib__action__TwoInts_SendGoal_Response.
typedef struct actionlib__action__TwoInts_SendGoal_Response__Sequence
{
  actionlib__action__TwoInts_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} actionlib__action__TwoInts_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/TwoInts in the package actionlib.
typedef struct actionlib__action__TwoInts_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} actionlib__action__TwoInts_GetResult_Request;

// Struct for a sequence of actionlib__action__TwoInts_GetResult_Request.
typedef struct actionlib__action__TwoInts_GetResult_Request__Sequence
{
  actionlib__action__TwoInts_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} actionlib__action__TwoInts_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "actionlib/action/detail/two_ints__struct.h"

// Struct defined in action/TwoInts in the package actionlib.
typedef struct actionlib__action__TwoInts_GetResult_Response
{
  int8_t status;
  actionlib__action__TwoInts_Result result;
} actionlib__action__TwoInts_GetResult_Response;

// Struct for a sequence of actionlib__action__TwoInts_GetResult_Response.
typedef struct actionlib__action__TwoInts_GetResult_Response__Sequence
{
  actionlib__action__TwoInts_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} actionlib__action__TwoInts_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "actionlib/action/detail/two_ints__struct.h"

// Struct defined in action/TwoInts in the package actionlib.
typedef struct actionlib__action__TwoInts_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  actionlib__action__TwoInts_Feedback feedback;
} actionlib__action__TwoInts_FeedbackMessage;

// Struct for a sequence of actionlib__action__TwoInts_FeedbackMessage.
typedef struct actionlib__action__TwoInts_FeedbackMessage__Sequence
{
  actionlib__action__TwoInts_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} actionlib__action__TwoInts_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ACTIONLIB__ACTION__DETAIL__TWO_INTS__STRUCT_H_
