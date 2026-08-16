// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from limx_arm_msgs:srv/motion.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "limx_arm_msgs/srv/motion.h"


#ifndef LIMX_ARM_MSGS__SRV__DETAIL__MOTION__FUNCTIONS_H_
#define LIMX_ARM_MSGS__SRV__DETAIL__MOTION__FUNCTIONS_H_

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

#include "limx_arm_msgs/srv/detail/motion__struct.h"

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
const rosidl_type_hash_t *
limx_arm_msgs__srv__motion__get_type_hash(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
const rosidl_runtime_c__type_description__TypeDescription *
limx_arm_msgs__srv__motion__get_type_description(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
const rosidl_runtime_c__type_description__TypeSource *
limx_arm_msgs__srv__motion__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
limx_arm_msgs__srv__motion__get_type_description_sources(
  const rosidl_service_type_support_t * type_support);

/// Initialize srv/motion message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * limx_arm_msgs__srv__motion_Request
 * )) before or use
 * limx_arm_msgs__srv__motion_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
bool
limx_arm_msgs__srv__motion_Request__init(limx_arm_msgs__srv__motion_Request * msg);

/// Finalize srv/motion message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
void
limx_arm_msgs__srv__motion_Request__fini(limx_arm_msgs__srv__motion_Request * msg);

/// Create srv/motion message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * limx_arm_msgs__srv__motion_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
limx_arm_msgs__srv__motion_Request *
limx_arm_msgs__srv__motion_Request__create(void);

/// Destroy srv/motion message.
/**
 * It calls
 * limx_arm_msgs__srv__motion_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
void
limx_arm_msgs__srv__motion_Request__destroy(limx_arm_msgs__srv__motion_Request * msg);

/// Check for srv/motion message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
bool
limx_arm_msgs__srv__motion_Request__are_equal(const limx_arm_msgs__srv__motion_Request * lhs, const limx_arm_msgs__srv__motion_Request * rhs);

/// Copy a srv/motion message.
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
limx_arm_msgs__srv__motion_Request__copy(
  const limx_arm_msgs__srv__motion_Request * input,
  limx_arm_msgs__srv__motion_Request * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
const rosidl_type_hash_t *
limx_arm_msgs__srv__motion_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
const rosidl_runtime_c__type_description__TypeDescription *
limx_arm_msgs__srv__motion_Request__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
const rosidl_runtime_c__type_description__TypeSource *
limx_arm_msgs__srv__motion_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
limx_arm_msgs__srv__motion_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/motion messages.
/**
 * It allocates the memory for the number of elements and calls
 * limx_arm_msgs__srv__motion_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
bool
limx_arm_msgs__srv__motion_Request__Sequence__init(limx_arm_msgs__srv__motion_Request__Sequence * array, size_t size);

/// Finalize array of srv/motion messages.
/**
 * It calls
 * limx_arm_msgs__srv__motion_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
void
limx_arm_msgs__srv__motion_Request__Sequence__fini(limx_arm_msgs__srv__motion_Request__Sequence * array);

/// Create array of srv/motion messages.
/**
 * It allocates the memory for the array and calls
 * limx_arm_msgs__srv__motion_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
limx_arm_msgs__srv__motion_Request__Sequence *
limx_arm_msgs__srv__motion_Request__Sequence__create(size_t size);

/// Destroy array of srv/motion messages.
/**
 * It calls
 * limx_arm_msgs__srv__motion_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
void
limx_arm_msgs__srv__motion_Request__Sequence__destroy(limx_arm_msgs__srv__motion_Request__Sequence * array);

/// Check for srv/motion message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
bool
limx_arm_msgs__srv__motion_Request__Sequence__are_equal(const limx_arm_msgs__srv__motion_Request__Sequence * lhs, const limx_arm_msgs__srv__motion_Request__Sequence * rhs);

/// Copy an array of srv/motion messages.
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
limx_arm_msgs__srv__motion_Request__Sequence__copy(
  const limx_arm_msgs__srv__motion_Request__Sequence * input,
  limx_arm_msgs__srv__motion_Request__Sequence * output);

/// Initialize srv/motion message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * limx_arm_msgs__srv__motion_Response
 * )) before or use
 * limx_arm_msgs__srv__motion_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
bool
limx_arm_msgs__srv__motion_Response__init(limx_arm_msgs__srv__motion_Response * msg);

/// Finalize srv/motion message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
void
limx_arm_msgs__srv__motion_Response__fini(limx_arm_msgs__srv__motion_Response * msg);

/// Create srv/motion message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * limx_arm_msgs__srv__motion_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
limx_arm_msgs__srv__motion_Response *
limx_arm_msgs__srv__motion_Response__create(void);

/// Destroy srv/motion message.
/**
 * It calls
 * limx_arm_msgs__srv__motion_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
void
limx_arm_msgs__srv__motion_Response__destroy(limx_arm_msgs__srv__motion_Response * msg);

/// Check for srv/motion message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
bool
limx_arm_msgs__srv__motion_Response__are_equal(const limx_arm_msgs__srv__motion_Response * lhs, const limx_arm_msgs__srv__motion_Response * rhs);

/// Copy a srv/motion message.
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
limx_arm_msgs__srv__motion_Response__copy(
  const limx_arm_msgs__srv__motion_Response * input,
  limx_arm_msgs__srv__motion_Response * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
const rosidl_type_hash_t *
limx_arm_msgs__srv__motion_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
const rosidl_runtime_c__type_description__TypeDescription *
limx_arm_msgs__srv__motion_Response__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
const rosidl_runtime_c__type_description__TypeSource *
limx_arm_msgs__srv__motion_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
limx_arm_msgs__srv__motion_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/motion messages.
/**
 * It allocates the memory for the number of elements and calls
 * limx_arm_msgs__srv__motion_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
bool
limx_arm_msgs__srv__motion_Response__Sequence__init(limx_arm_msgs__srv__motion_Response__Sequence * array, size_t size);

/// Finalize array of srv/motion messages.
/**
 * It calls
 * limx_arm_msgs__srv__motion_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
void
limx_arm_msgs__srv__motion_Response__Sequence__fini(limx_arm_msgs__srv__motion_Response__Sequence * array);

/// Create array of srv/motion messages.
/**
 * It allocates the memory for the array and calls
 * limx_arm_msgs__srv__motion_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
limx_arm_msgs__srv__motion_Response__Sequence *
limx_arm_msgs__srv__motion_Response__Sequence__create(size_t size);

/// Destroy array of srv/motion messages.
/**
 * It calls
 * limx_arm_msgs__srv__motion_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
void
limx_arm_msgs__srv__motion_Response__Sequence__destroy(limx_arm_msgs__srv__motion_Response__Sequence * array);

/// Check for srv/motion message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
bool
limx_arm_msgs__srv__motion_Response__Sequence__are_equal(const limx_arm_msgs__srv__motion_Response__Sequence * lhs, const limx_arm_msgs__srv__motion_Response__Sequence * rhs);

/// Copy an array of srv/motion messages.
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
limx_arm_msgs__srv__motion_Response__Sequence__copy(
  const limx_arm_msgs__srv__motion_Response__Sequence * input,
  limx_arm_msgs__srv__motion_Response__Sequence * output);

/// Initialize srv/motion message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * limx_arm_msgs__srv__motion_Event
 * )) before or use
 * limx_arm_msgs__srv__motion_Event__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
bool
limx_arm_msgs__srv__motion_Event__init(limx_arm_msgs__srv__motion_Event * msg);

/// Finalize srv/motion message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
void
limx_arm_msgs__srv__motion_Event__fini(limx_arm_msgs__srv__motion_Event * msg);

/// Create srv/motion message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * limx_arm_msgs__srv__motion_Event__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
limx_arm_msgs__srv__motion_Event *
limx_arm_msgs__srv__motion_Event__create(void);

/// Destroy srv/motion message.
/**
 * It calls
 * limx_arm_msgs__srv__motion_Event__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
void
limx_arm_msgs__srv__motion_Event__destroy(limx_arm_msgs__srv__motion_Event * msg);

/// Check for srv/motion message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
bool
limx_arm_msgs__srv__motion_Event__are_equal(const limx_arm_msgs__srv__motion_Event * lhs, const limx_arm_msgs__srv__motion_Event * rhs);

/// Copy a srv/motion message.
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
limx_arm_msgs__srv__motion_Event__copy(
  const limx_arm_msgs__srv__motion_Event * input,
  limx_arm_msgs__srv__motion_Event * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
const rosidl_type_hash_t *
limx_arm_msgs__srv__motion_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
const rosidl_runtime_c__type_description__TypeDescription *
limx_arm_msgs__srv__motion_Event__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
const rosidl_runtime_c__type_description__TypeSource *
limx_arm_msgs__srv__motion_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
limx_arm_msgs__srv__motion_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/motion messages.
/**
 * It allocates the memory for the number of elements and calls
 * limx_arm_msgs__srv__motion_Event__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
bool
limx_arm_msgs__srv__motion_Event__Sequence__init(limx_arm_msgs__srv__motion_Event__Sequence * array, size_t size);

/// Finalize array of srv/motion messages.
/**
 * It calls
 * limx_arm_msgs__srv__motion_Event__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
void
limx_arm_msgs__srv__motion_Event__Sequence__fini(limx_arm_msgs__srv__motion_Event__Sequence * array);

/// Create array of srv/motion messages.
/**
 * It allocates the memory for the array and calls
 * limx_arm_msgs__srv__motion_Event__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
limx_arm_msgs__srv__motion_Event__Sequence *
limx_arm_msgs__srv__motion_Event__Sequence__create(size_t size);

/// Destroy array of srv/motion messages.
/**
 * It calls
 * limx_arm_msgs__srv__motion_Event__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
void
limx_arm_msgs__srv__motion_Event__Sequence__destroy(limx_arm_msgs__srv__motion_Event__Sequence * array);

/// Check for srv/motion message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
bool
limx_arm_msgs__srv__motion_Event__Sequence__are_equal(const limx_arm_msgs__srv__motion_Event__Sequence * lhs, const limx_arm_msgs__srv__motion_Event__Sequence * rhs);

/// Copy an array of srv/motion messages.
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
limx_arm_msgs__srv__motion_Event__Sequence__copy(
  const limx_arm_msgs__srv__motion_Event__Sequence * input,
  limx_arm_msgs__srv__motion_Event__Sequence * output);
#ifdef __cplusplus
}
#endif

#endif  // LIMX_ARM_MSGS__SRV__DETAIL__MOTION__FUNCTIONS_H_
