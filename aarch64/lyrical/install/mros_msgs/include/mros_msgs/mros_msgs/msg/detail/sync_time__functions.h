// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from mros_msgs:msg/SyncTime.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mros_msgs/msg/sync_time.h"


#ifndef MROS_MSGS__MSG__DETAIL__SYNC_TIME__FUNCTIONS_H_
#define MROS_MSGS__MSG__DETAIL__SYNC_TIME__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "mros_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "mros_msgs/msg/detail/sync_time__struct.h"

/// Initialize msg/SyncTime message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mros_msgs__msg__SyncTime
 * )) before or use
 * mros_msgs__msg__SyncTime__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mros_msgs
bool
mros_msgs__msg__SyncTime__init(mros_msgs__msg__SyncTime * msg);

/// Finalize msg/SyncTime message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mros_msgs
void
mros_msgs__msg__SyncTime__fini(mros_msgs__msg__SyncTime * msg);

/// Create msg/SyncTime message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mros_msgs__msg__SyncTime__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mros_msgs
mros_msgs__msg__SyncTime *
mros_msgs__msg__SyncTime__create(void);

/// Destroy msg/SyncTime message.
/**
 * It calls
 * mros_msgs__msg__SyncTime__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mros_msgs
void
mros_msgs__msg__SyncTime__destroy(mros_msgs__msg__SyncTime * msg);

/// Check for msg/SyncTime message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mros_msgs
bool
mros_msgs__msg__SyncTime__are_equal(const mros_msgs__msg__SyncTime * lhs, const mros_msgs__msg__SyncTime * rhs);

/// Copy a msg/SyncTime message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_mros_msgs
bool
mros_msgs__msg__SyncTime__copy(
  const mros_msgs__msg__SyncTime * input,
  mros_msgs__msg__SyncTime * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mros_msgs
const rosidl_type_hash_t *
mros_msgs__msg__SyncTime__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mros_msgs
const rosidl_runtime_c__type_description__TypeDescription *
mros_msgs__msg__SyncTime__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_mros_msgs
const rosidl_runtime_c__type_description__TypeSource *
mros_msgs__msg__SyncTime__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mros_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
mros_msgs__msg__SyncTime__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/SyncTime messages.
/**
 * It allocates the memory for the number of elements and calls
 * mros_msgs__msg__SyncTime__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mros_msgs
bool
mros_msgs__msg__SyncTime__Sequence__init(mros_msgs__msg__SyncTime__Sequence * array, size_t size);

/// Finalize array of msg/SyncTime messages.
/**
 * It calls
 * mros_msgs__msg__SyncTime__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mros_msgs
void
mros_msgs__msg__SyncTime__Sequence__fini(mros_msgs__msg__SyncTime__Sequence * array);

/// Create array of msg/SyncTime messages.
/**
 * It allocates the memory for the array and calls
 * mros_msgs__msg__SyncTime__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mros_msgs
mros_msgs__msg__SyncTime__Sequence *
mros_msgs__msg__SyncTime__Sequence__create(size_t size);

/// Destroy array of msg/SyncTime messages.
/**
 * It calls
 * mros_msgs__msg__SyncTime__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mros_msgs
void
mros_msgs__msg__SyncTime__Sequence__destroy(mros_msgs__msg__SyncTime__Sequence * array);

/// Check for msg/SyncTime message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mros_msgs
bool
mros_msgs__msg__SyncTime__Sequence__are_equal(const mros_msgs__msg__SyncTime__Sequence * lhs, const mros_msgs__msg__SyncTime__Sequence * rhs);

/// Copy an array of msg/SyncTime messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_mros_msgs
bool
mros_msgs__msg__SyncTime__Sequence__copy(
  const mros_msgs__msg__SyncTime__Sequence * input,
  mros_msgs__msg__SyncTime__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MROS_MSGS__MSG__DETAIL__SYNC_TIME__FUNCTIONS_H_
