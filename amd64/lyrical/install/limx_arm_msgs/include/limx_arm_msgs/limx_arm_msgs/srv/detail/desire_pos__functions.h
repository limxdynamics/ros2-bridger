// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from limx_arm_msgs:srv/desire_pos.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "limx_arm_msgs/srv/desire_pos.h"


#ifndef LIMX_ARM_MSGS__SRV__DETAIL__DESIRE_POS__FUNCTIONS_H_
#define LIMX_ARM_MSGS__SRV__DETAIL__DESIRE_POS__FUNCTIONS_H_

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
#include "limx_arm_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "limx_arm_msgs/srv/detail/desire_pos__struct.h"

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
const rosidl_type_hash_t *
limx_arm_msgs__srv__desire_pos__get_type_hash(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
const rosidl_runtime_c__type_description__TypeDescription *
limx_arm_msgs__srv__desire_pos__get_type_description(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
const rosidl_runtime_c__type_description__TypeSource *
limx_arm_msgs__srv__desire_pos__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
limx_arm_msgs__srv__desire_pos__get_type_description_sources(
  const rosidl_service_type_support_t * type_support);

/// Initialize srv/desire_pos message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * limx_arm_msgs__srv__desire_pos_Request
 * )) before or use
 * limx_arm_msgs__srv__desire_pos_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
bool
limx_arm_msgs__srv__desire_pos_Request__init(limx_arm_msgs__srv__desire_pos_Request * msg);

/// Finalize srv/desire_pos message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
void
limx_arm_msgs__srv__desire_pos_Request__fini(limx_arm_msgs__srv__desire_pos_Request * msg);

/// Create srv/desire_pos message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * limx_arm_msgs__srv__desire_pos_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
limx_arm_msgs__srv__desire_pos_Request *
limx_arm_msgs__srv__desire_pos_Request__create(void);

/// Destroy srv/desire_pos message.
/**
 * It calls
 * limx_arm_msgs__srv__desire_pos_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
void
limx_arm_msgs__srv__desire_pos_Request__destroy(limx_arm_msgs__srv__desire_pos_Request * msg);

/// Check for srv/desire_pos message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
bool
limx_arm_msgs__srv__desire_pos_Request__are_equal(const limx_arm_msgs__srv__desire_pos_Request * lhs, const limx_arm_msgs__srv__desire_pos_Request * rhs);

/// Copy a srv/desire_pos message.
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
limx_arm_msgs__srv__desire_pos_Request__copy(
  const limx_arm_msgs__srv__desire_pos_Request * input,
  limx_arm_msgs__srv__desire_pos_Request * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
const rosidl_type_hash_t *
limx_arm_msgs__srv__desire_pos_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
const rosidl_runtime_c__type_description__TypeDescription *
limx_arm_msgs__srv__desire_pos_Request__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
const rosidl_runtime_c__type_description__TypeSource *
limx_arm_msgs__srv__desire_pos_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
limx_arm_msgs__srv__desire_pos_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/desire_pos messages.
/**
 * It allocates the memory for the number of elements and calls
 * limx_arm_msgs__srv__desire_pos_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
bool
limx_arm_msgs__srv__desire_pos_Request__Sequence__init(limx_arm_msgs__srv__desire_pos_Request__Sequence * array, size_t size);

/// Finalize array of srv/desire_pos messages.
/**
 * It calls
 * limx_arm_msgs__srv__desire_pos_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
void
limx_arm_msgs__srv__desire_pos_Request__Sequence__fini(limx_arm_msgs__srv__desire_pos_Request__Sequence * array);

/// Create array of srv/desire_pos messages.
/**
 * It allocates the memory for the array and calls
 * limx_arm_msgs__srv__desire_pos_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
limx_arm_msgs__srv__desire_pos_Request__Sequence *
limx_arm_msgs__srv__desire_pos_Request__Sequence__create(size_t size);

/// Destroy array of srv/desire_pos messages.
/**
 * It calls
 * limx_arm_msgs__srv__desire_pos_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
void
limx_arm_msgs__srv__desire_pos_Request__Sequence__destroy(limx_arm_msgs__srv__desire_pos_Request__Sequence * array);

/// Check for srv/desire_pos message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
bool
limx_arm_msgs__srv__desire_pos_Request__Sequence__are_equal(const limx_arm_msgs__srv__desire_pos_Request__Sequence * lhs, const limx_arm_msgs__srv__desire_pos_Request__Sequence * rhs);

/// Copy an array of srv/desire_pos messages.
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
limx_arm_msgs__srv__desire_pos_Request__Sequence__copy(
  const limx_arm_msgs__srv__desire_pos_Request__Sequence * input,
  limx_arm_msgs__srv__desire_pos_Request__Sequence * output);

/// Initialize srv/desire_pos message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * limx_arm_msgs__srv__desire_pos_Response
 * )) before or use
 * limx_arm_msgs__srv__desire_pos_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
bool
limx_arm_msgs__srv__desire_pos_Response__init(limx_arm_msgs__srv__desire_pos_Response * msg);

/// Finalize srv/desire_pos message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
void
limx_arm_msgs__srv__desire_pos_Response__fini(limx_arm_msgs__srv__desire_pos_Response * msg);

/// Create srv/desire_pos message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * limx_arm_msgs__srv__desire_pos_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
limx_arm_msgs__srv__desire_pos_Response *
limx_arm_msgs__srv__desire_pos_Response__create(void);

/// Destroy srv/desire_pos message.
/**
 * It calls
 * limx_arm_msgs__srv__desire_pos_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
void
limx_arm_msgs__srv__desire_pos_Response__destroy(limx_arm_msgs__srv__desire_pos_Response * msg);

/// Check for srv/desire_pos message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
bool
limx_arm_msgs__srv__desire_pos_Response__are_equal(const limx_arm_msgs__srv__desire_pos_Response * lhs, const limx_arm_msgs__srv__desire_pos_Response * rhs);

/// Copy a srv/desire_pos message.
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
limx_arm_msgs__srv__desire_pos_Response__copy(
  const limx_arm_msgs__srv__desire_pos_Response * input,
  limx_arm_msgs__srv__desire_pos_Response * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
const rosidl_type_hash_t *
limx_arm_msgs__srv__desire_pos_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
const rosidl_runtime_c__type_description__TypeDescription *
limx_arm_msgs__srv__desire_pos_Response__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
const rosidl_runtime_c__type_description__TypeSource *
limx_arm_msgs__srv__desire_pos_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
limx_arm_msgs__srv__desire_pos_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/desire_pos messages.
/**
 * It allocates the memory for the number of elements and calls
 * limx_arm_msgs__srv__desire_pos_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
bool
limx_arm_msgs__srv__desire_pos_Response__Sequence__init(limx_arm_msgs__srv__desire_pos_Response__Sequence * array, size_t size);

/// Finalize array of srv/desire_pos messages.
/**
 * It calls
 * limx_arm_msgs__srv__desire_pos_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
void
limx_arm_msgs__srv__desire_pos_Response__Sequence__fini(limx_arm_msgs__srv__desire_pos_Response__Sequence * array);

/// Create array of srv/desire_pos messages.
/**
 * It allocates the memory for the array and calls
 * limx_arm_msgs__srv__desire_pos_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
limx_arm_msgs__srv__desire_pos_Response__Sequence *
limx_arm_msgs__srv__desire_pos_Response__Sequence__create(size_t size);

/// Destroy array of srv/desire_pos messages.
/**
 * It calls
 * limx_arm_msgs__srv__desire_pos_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
void
limx_arm_msgs__srv__desire_pos_Response__Sequence__destroy(limx_arm_msgs__srv__desire_pos_Response__Sequence * array);

/// Check for srv/desire_pos message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
bool
limx_arm_msgs__srv__desire_pos_Response__Sequence__are_equal(const limx_arm_msgs__srv__desire_pos_Response__Sequence * lhs, const limx_arm_msgs__srv__desire_pos_Response__Sequence * rhs);

/// Copy an array of srv/desire_pos messages.
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
limx_arm_msgs__srv__desire_pos_Response__Sequence__copy(
  const limx_arm_msgs__srv__desire_pos_Response__Sequence * input,
  limx_arm_msgs__srv__desire_pos_Response__Sequence * output);

/// Initialize srv/desire_pos message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * limx_arm_msgs__srv__desire_pos_Event
 * )) before or use
 * limx_arm_msgs__srv__desire_pos_Event__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
bool
limx_arm_msgs__srv__desire_pos_Event__init(limx_arm_msgs__srv__desire_pos_Event * msg);

/// Finalize srv/desire_pos message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
void
limx_arm_msgs__srv__desire_pos_Event__fini(limx_arm_msgs__srv__desire_pos_Event * msg);

/// Create srv/desire_pos message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * limx_arm_msgs__srv__desire_pos_Event__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
limx_arm_msgs__srv__desire_pos_Event *
limx_arm_msgs__srv__desire_pos_Event__create(void);

/// Destroy srv/desire_pos message.
/**
 * It calls
 * limx_arm_msgs__srv__desire_pos_Event__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
void
limx_arm_msgs__srv__desire_pos_Event__destroy(limx_arm_msgs__srv__desire_pos_Event * msg);

/// Check for srv/desire_pos message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
bool
limx_arm_msgs__srv__desire_pos_Event__are_equal(const limx_arm_msgs__srv__desire_pos_Event * lhs, const limx_arm_msgs__srv__desire_pos_Event * rhs);

/// Copy a srv/desire_pos message.
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
limx_arm_msgs__srv__desire_pos_Event__copy(
  const limx_arm_msgs__srv__desire_pos_Event * input,
  limx_arm_msgs__srv__desire_pos_Event * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
const rosidl_type_hash_t *
limx_arm_msgs__srv__desire_pos_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
const rosidl_runtime_c__type_description__TypeDescription *
limx_arm_msgs__srv__desire_pos_Event__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
const rosidl_runtime_c__type_description__TypeSource *
limx_arm_msgs__srv__desire_pos_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
limx_arm_msgs__srv__desire_pos_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/desire_pos messages.
/**
 * It allocates the memory for the number of elements and calls
 * limx_arm_msgs__srv__desire_pos_Event__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
bool
limx_arm_msgs__srv__desire_pos_Event__Sequence__init(limx_arm_msgs__srv__desire_pos_Event__Sequence * array, size_t size);

/// Finalize array of srv/desire_pos messages.
/**
 * It calls
 * limx_arm_msgs__srv__desire_pos_Event__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
void
limx_arm_msgs__srv__desire_pos_Event__Sequence__fini(limx_arm_msgs__srv__desire_pos_Event__Sequence * array);

/// Create array of srv/desire_pos messages.
/**
 * It allocates the memory for the array and calls
 * limx_arm_msgs__srv__desire_pos_Event__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
limx_arm_msgs__srv__desire_pos_Event__Sequence *
limx_arm_msgs__srv__desire_pos_Event__Sequence__create(size_t size);

/// Destroy array of srv/desire_pos messages.
/**
 * It calls
 * limx_arm_msgs__srv__desire_pos_Event__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
void
limx_arm_msgs__srv__desire_pos_Event__Sequence__destroy(limx_arm_msgs__srv__desire_pos_Event__Sequence * array);

/// Check for srv/desire_pos message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
bool
limx_arm_msgs__srv__desire_pos_Event__Sequence__are_equal(const limx_arm_msgs__srv__desire_pos_Event__Sequence * lhs, const limx_arm_msgs__srv__desire_pos_Event__Sequence * rhs);

/// Copy an array of srv/desire_pos messages.
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
limx_arm_msgs__srv__desire_pos_Event__Sequence__copy(
  const limx_arm_msgs__srv__desire_pos_Event__Sequence * input,
  limx_arm_msgs__srv__desire_pos_Event__Sequence * output);
#ifdef __cplusplus
}
#endif

#endif  // LIMX_ARM_MSGS__SRV__DETAIL__DESIRE_POS__FUNCTIONS_H_
