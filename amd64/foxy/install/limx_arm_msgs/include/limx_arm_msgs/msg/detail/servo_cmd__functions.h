// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from limx_arm_msgs:msg/ServoCmd.idl
// generated code does not contain a copyright notice

#ifndef LIMX_ARM_MSGS__MSG__DETAIL__SERVO_CMD__FUNCTIONS_H_
#define LIMX_ARM_MSGS__MSG__DETAIL__SERVO_CMD__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "limx_arm_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "limx_arm_msgs/msg/detail/servo_cmd__struct.h"

/// Initialize msg/ServoCmd message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * limx_arm_msgs__msg__ServoCmd
 * )) before or use
 * limx_arm_msgs__msg__ServoCmd__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
bool
limx_arm_msgs__msg__ServoCmd__init(limx_arm_msgs__msg__ServoCmd * msg);

/// Finalize msg/ServoCmd message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
void
limx_arm_msgs__msg__ServoCmd__fini(limx_arm_msgs__msg__ServoCmd * msg);

/// Create msg/ServoCmd message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * limx_arm_msgs__msg__ServoCmd__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
limx_arm_msgs__msg__ServoCmd *
limx_arm_msgs__msg__ServoCmd__create();

/// Destroy msg/ServoCmd message.
/**
 * It calls
 * limx_arm_msgs__msg__ServoCmd__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
void
limx_arm_msgs__msg__ServoCmd__destroy(limx_arm_msgs__msg__ServoCmd * msg);

/// Check for msg/ServoCmd message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
bool
limx_arm_msgs__msg__ServoCmd__are_equal(const limx_arm_msgs__msg__ServoCmd * lhs, const limx_arm_msgs__msg__ServoCmd * rhs);

/// Copy a msg/ServoCmd message.
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
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
bool
limx_arm_msgs__msg__ServoCmd__copy(
  const limx_arm_msgs__msg__ServoCmd * input,
  limx_arm_msgs__msg__ServoCmd * output);

/// Initialize array of msg/ServoCmd messages.
/**
 * It allocates the memory for the number of elements and calls
 * limx_arm_msgs__msg__ServoCmd__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
bool
limx_arm_msgs__msg__ServoCmd__Sequence__init(limx_arm_msgs__msg__ServoCmd__Sequence * array, size_t size);

/// Finalize array of msg/ServoCmd messages.
/**
 * It calls
 * limx_arm_msgs__msg__ServoCmd__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
void
limx_arm_msgs__msg__ServoCmd__Sequence__fini(limx_arm_msgs__msg__ServoCmd__Sequence * array);

/// Create array of msg/ServoCmd messages.
/**
 * It allocates the memory for the array and calls
 * limx_arm_msgs__msg__ServoCmd__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
limx_arm_msgs__msg__ServoCmd__Sequence *
limx_arm_msgs__msg__ServoCmd__Sequence__create(size_t size);

/// Destroy array of msg/ServoCmd messages.
/**
 * It calls
 * limx_arm_msgs__msg__ServoCmd__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
void
limx_arm_msgs__msg__ServoCmd__Sequence__destroy(limx_arm_msgs__msg__ServoCmd__Sequence * array);

/// Check for msg/ServoCmd message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
bool
limx_arm_msgs__msg__ServoCmd__Sequence__are_equal(const limx_arm_msgs__msg__ServoCmd__Sequence * lhs, const limx_arm_msgs__msg__ServoCmd__Sequence * rhs);

/// Copy an array of msg/ServoCmd messages.
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
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
bool
limx_arm_msgs__msg__ServoCmd__Sequence__copy(
  const limx_arm_msgs__msg__ServoCmd__Sequence * input,
  limx_arm_msgs__msg__ServoCmd__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // LIMX_ARM_MSGS__MSG__DETAIL__SERVO_CMD__FUNCTIONS_H_
