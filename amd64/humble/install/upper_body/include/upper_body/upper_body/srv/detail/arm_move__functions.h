// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from upper_body:srv/arm_move.idl
// generated code does not contain a copyright notice

#ifndef UPPER_BODY__SRV__DETAIL__ARM_MOVE__FUNCTIONS_H_
#define UPPER_BODY__SRV__DETAIL__ARM_MOVE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "upper_body/msg/rosidl_generator_c__visibility_control.h"

#include "upper_body/srv/detail/arm_move__struct.h"

/// Initialize srv/arm_move message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * upper_body__srv__arm_move_Request
 * )) before or use
 * upper_body__srv__arm_move_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_upper_body
bool
upper_body__srv__arm_move_Request__init(upper_body__srv__arm_move_Request * msg);

/// Finalize srv/arm_move message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_upper_body
void
upper_body__srv__arm_move_Request__fini(upper_body__srv__arm_move_Request * msg);

/// Create srv/arm_move message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * upper_body__srv__arm_move_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_upper_body
upper_body__srv__arm_move_Request *
upper_body__srv__arm_move_Request__create();

/// Destroy srv/arm_move message.
/**
 * It calls
 * upper_body__srv__arm_move_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_upper_body
void
upper_body__srv__arm_move_Request__destroy(upper_body__srv__arm_move_Request * msg);

/// Check for srv/arm_move message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_upper_body
bool
upper_body__srv__arm_move_Request__are_equal(const upper_body__srv__arm_move_Request * lhs, const upper_body__srv__arm_move_Request * rhs);

/// Copy a srv/arm_move message.
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
ROSIDL_GENERATOR_C_PUBLIC_upper_body
bool
upper_body__srv__arm_move_Request__copy(
  const upper_body__srv__arm_move_Request * input,
  upper_body__srv__arm_move_Request * output);

/// Initialize array of srv/arm_move messages.
/**
 * It allocates the memory for the number of elements and calls
 * upper_body__srv__arm_move_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_upper_body
bool
upper_body__srv__arm_move_Request__Sequence__init(upper_body__srv__arm_move_Request__Sequence * array, size_t size);

/// Finalize array of srv/arm_move messages.
/**
 * It calls
 * upper_body__srv__arm_move_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_upper_body
void
upper_body__srv__arm_move_Request__Sequence__fini(upper_body__srv__arm_move_Request__Sequence * array);

/// Create array of srv/arm_move messages.
/**
 * It allocates the memory for the array and calls
 * upper_body__srv__arm_move_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_upper_body
upper_body__srv__arm_move_Request__Sequence *
upper_body__srv__arm_move_Request__Sequence__create(size_t size);

/// Destroy array of srv/arm_move messages.
/**
 * It calls
 * upper_body__srv__arm_move_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_upper_body
void
upper_body__srv__arm_move_Request__Sequence__destroy(upper_body__srv__arm_move_Request__Sequence * array);

/// Check for srv/arm_move message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_upper_body
bool
upper_body__srv__arm_move_Request__Sequence__are_equal(const upper_body__srv__arm_move_Request__Sequence * lhs, const upper_body__srv__arm_move_Request__Sequence * rhs);

/// Copy an array of srv/arm_move messages.
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
ROSIDL_GENERATOR_C_PUBLIC_upper_body
bool
upper_body__srv__arm_move_Request__Sequence__copy(
  const upper_body__srv__arm_move_Request__Sequence * input,
  upper_body__srv__arm_move_Request__Sequence * output);

/// Initialize srv/arm_move message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * upper_body__srv__arm_move_Response
 * )) before or use
 * upper_body__srv__arm_move_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_upper_body
bool
upper_body__srv__arm_move_Response__init(upper_body__srv__arm_move_Response * msg);

/// Finalize srv/arm_move message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_upper_body
void
upper_body__srv__arm_move_Response__fini(upper_body__srv__arm_move_Response * msg);

/// Create srv/arm_move message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * upper_body__srv__arm_move_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_upper_body
upper_body__srv__arm_move_Response *
upper_body__srv__arm_move_Response__create();

/// Destroy srv/arm_move message.
/**
 * It calls
 * upper_body__srv__arm_move_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_upper_body
void
upper_body__srv__arm_move_Response__destroy(upper_body__srv__arm_move_Response * msg);

/// Check for srv/arm_move message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_upper_body
bool
upper_body__srv__arm_move_Response__are_equal(const upper_body__srv__arm_move_Response * lhs, const upper_body__srv__arm_move_Response * rhs);

/// Copy a srv/arm_move message.
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
ROSIDL_GENERATOR_C_PUBLIC_upper_body
bool
upper_body__srv__arm_move_Response__copy(
  const upper_body__srv__arm_move_Response * input,
  upper_body__srv__arm_move_Response * output);

/// Initialize array of srv/arm_move messages.
/**
 * It allocates the memory for the number of elements and calls
 * upper_body__srv__arm_move_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_upper_body
bool
upper_body__srv__arm_move_Response__Sequence__init(upper_body__srv__arm_move_Response__Sequence * array, size_t size);

/// Finalize array of srv/arm_move messages.
/**
 * It calls
 * upper_body__srv__arm_move_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_upper_body
void
upper_body__srv__arm_move_Response__Sequence__fini(upper_body__srv__arm_move_Response__Sequence * array);

/// Create array of srv/arm_move messages.
/**
 * It allocates the memory for the array and calls
 * upper_body__srv__arm_move_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_upper_body
upper_body__srv__arm_move_Response__Sequence *
upper_body__srv__arm_move_Response__Sequence__create(size_t size);

/// Destroy array of srv/arm_move messages.
/**
 * It calls
 * upper_body__srv__arm_move_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_upper_body
void
upper_body__srv__arm_move_Response__Sequence__destroy(upper_body__srv__arm_move_Response__Sequence * array);

/// Check for srv/arm_move message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_upper_body
bool
upper_body__srv__arm_move_Response__Sequence__are_equal(const upper_body__srv__arm_move_Response__Sequence * lhs, const upper_body__srv__arm_move_Response__Sequence * rhs);

/// Copy an array of srv/arm_move messages.
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
ROSIDL_GENERATOR_C_PUBLIC_upper_body
bool
upper_body__srv__arm_move_Response__Sequence__copy(
  const upper_body__srv__arm_move_Response__Sequence * input,
  upper_body__srv__arm_move_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // UPPER_BODY__SRV__DETAIL__ARM_MOVE__FUNCTIONS_H_
