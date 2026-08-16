// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from teleop_msgs:msg/TeleopSessionState.idl
// generated code does not contain a copyright notice

#ifndef TELEOP_MSGS__MSG__DETAIL__TELEOP_SESSION_STATE__FUNCTIONS_H_
#define TELEOP_MSGS__MSG__DETAIL__TELEOP_SESSION_STATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "teleop_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "teleop_msgs/msg/detail/teleop_session_state__struct.h"

/// Initialize msg/TeleopSessionState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * teleop_msgs__msg__TeleopSessionState
 * )) before or use
 * teleop_msgs__msg__TeleopSessionState__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_teleop_msgs
bool
teleop_msgs__msg__TeleopSessionState__init(teleop_msgs__msg__TeleopSessionState * msg);

/// Finalize msg/TeleopSessionState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_teleop_msgs
void
teleop_msgs__msg__TeleopSessionState__fini(teleop_msgs__msg__TeleopSessionState * msg);

/// Create msg/TeleopSessionState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * teleop_msgs__msg__TeleopSessionState__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_teleop_msgs
teleop_msgs__msg__TeleopSessionState *
teleop_msgs__msg__TeleopSessionState__create();

/// Destroy msg/TeleopSessionState message.
/**
 * It calls
 * teleop_msgs__msg__TeleopSessionState__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_teleop_msgs
void
teleop_msgs__msg__TeleopSessionState__destroy(teleop_msgs__msg__TeleopSessionState * msg);

/// Check for msg/TeleopSessionState message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_teleop_msgs
bool
teleop_msgs__msg__TeleopSessionState__are_equal(const teleop_msgs__msg__TeleopSessionState * lhs, const teleop_msgs__msg__TeleopSessionState * rhs);

/// Copy a msg/TeleopSessionState message.
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
ROSIDL_GENERATOR_C_PUBLIC_teleop_msgs
bool
teleop_msgs__msg__TeleopSessionState__copy(
  const teleop_msgs__msg__TeleopSessionState * input,
  teleop_msgs__msg__TeleopSessionState * output);

/// Initialize array of msg/TeleopSessionState messages.
/**
 * It allocates the memory for the number of elements and calls
 * teleop_msgs__msg__TeleopSessionState__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_teleop_msgs
bool
teleop_msgs__msg__TeleopSessionState__Sequence__init(teleop_msgs__msg__TeleopSessionState__Sequence * array, size_t size);

/// Finalize array of msg/TeleopSessionState messages.
/**
 * It calls
 * teleop_msgs__msg__TeleopSessionState__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_teleop_msgs
void
teleop_msgs__msg__TeleopSessionState__Sequence__fini(teleop_msgs__msg__TeleopSessionState__Sequence * array);

/// Create array of msg/TeleopSessionState messages.
/**
 * It allocates the memory for the array and calls
 * teleop_msgs__msg__TeleopSessionState__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_teleop_msgs
teleop_msgs__msg__TeleopSessionState__Sequence *
teleop_msgs__msg__TeleopSessionState__Sequence__create(size_t size);

/// Destroy array of msg/TeleopSessionState messages.
/**
 * It calls
 * teleop_msgs__msg__TeleopSessionState__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_teleop_msgs
void
teleop_msgs__msg__TeleopSessionState__Sequence__destroy(teleop_msgs__msg__TeleopSessionState__Sequence * array);

/// Check for msg/TeleopSessionState message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_teleop_msgs
bool
teleop_msgs__msg__TeleopSessionState__Sequence__are_equal(const teleop_msgs__msg__TeleopSessionState__Sequence * lhs, const teleop_msgs__msg__TeleopSessionState__Sequence * rhs);

/// Copy an array of msg/TeleopSessionState messages.
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
ROSIDL_GENERATOR_C_PUBLIC_teleop_msgs
bool
teleop_msgs__msg__TeleopSessionState__Sequence__copy(
  const teleop_msgs__msg__TeleopSessionState__Sequence * input,
  teleop_msgs__msg__TeleopSessionState__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TELEOP_MSGS__MSG__DETAIL__TELEOP_SESSION_STATE__FUNCTIONS_H_
