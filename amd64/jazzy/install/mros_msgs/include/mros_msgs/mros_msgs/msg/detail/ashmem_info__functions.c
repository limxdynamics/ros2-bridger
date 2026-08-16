// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mros_msgs:msg/AshmemInfo.idl
// generated code does not contain a copyright notice
#include "mros_msgs/msg/detail/ashmem_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `topic_name`
// Member `message_type`
// Member `message_md5sum`
// Member `message_definition`
// Member `identity`
#include "rosidl_runtime_c/string_functions.h"

bool
mros_msgs__msg__AshmemInfo__init(mros_msgs__msg__AshmemInfo * msg)
{
  if (!msg) {
    return false;
  }
  // topic_id
  // topic_name
  if (!rosidl_runtime_c__String__init(&msg->topic_name)) {
    mros_msgs__msg__AshmemInfo__fini(msg);
    return false;
  }
  // message_type
  if (!rosidl_runtime_c__String__init(&msg->message_type)) {
    mros_msgs__msg__AshmemInfo__fini(msg);
    return false;
  }
  // message_md5sum
  if (!rosidl_runtime_c__String__init(&msg->message_md5sum)) {
    mros_msgs__msg__AshmemInfo__fini(msg);
    return false;
  }
  // message_definition
  if (!rosidl_runtime_c__String__init(&msg->message_definition)) {
    mros_msgs__msg__AshmemInfo__fini(msg);
    return false;
  }
  // shm_seed
  // shm_size
  // msg_size
  // identity
  if (!rosidl_runtime_c__String__Sequence__init(&msg->identity, 0)) {
    mros_msgs__msg__AshmemInfo__fini(msg);
    return false;
  }
  return true;
}

void
mros_msgs__msg__AshmemInfo__fini(mros_msgs__msg__AshmemInfo * msg)
{
  if (!msg) {
    return;
  }
  // topic_id
  // topic_name
  rosidl_runtime_c__String__fini(&msg->topic_name);
  // message_type
  rosidl_runtime_c__String__fini(&msg->message_type);
  // message_md5sum
  rosidl_runtime_c__String__fini(&msg->message_md5sum);
  // message_definition
  rosidl_runtime_c__String__fini(&msg->message_definition);
  // shm_seed
  // shm_size
  // msg_size
  // identity
  rosidl_runtime_c__String__Sequence__fini(&msg->identity);
}

bool
mros_msgs__msg__AshmemInfo__are_equal(const mros_msgs__msg__AshmemInfo * lhs, const mros_msgs__msg__AshmemInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // topic_id
  if (lhs->topic_id != rhs->topic_id) {
    return false;
  }
  // topic_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->topic_name), &(rhs->topic_name)))
  {
    return false;
  }
  // message_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message_type), &(rhs->message_type)))
  {
    return false;
  }
  // message_md5sum
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message_md5sum), &(rhs->message_md5sum)))
  {
    return false;
  }
  // message_definition
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message_definition), &(rhs->message_definition)))
  {
    return false;
  }
  // shm_seed
  if (lhs->shm_seed != rhs->shm_seed) {
    return false;
  }
  // shm_size
  if (lhs->shm_size != rhs->shm_size) {
    return false;
  }
  // msg_size
  if (lhs->msg_size != rhs->msg_size) {
    return false;
  }
  // identity
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->identity), &(rhs->identity)))
  {
    return false;
  }
  return true;
}

bool
mros_msgs__msg__AshmemInfo__copy(
  const mros_msgs__msg__AshmemInfo * input,
  mros_msgs__msg__AshmemInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // topic_id
  output->topic_id = input->topic_id;
  // topic_name
  if (!rosidl_runtime_c__String__copy(
      &(input->topic_name), &(output->topic_name)))
  {
    return false;
  }
  // message_type
  if (!rosidl_runtime_c__String__copy(
      &(input->message_type), &(output->message_type)))
  {
    return false;
  }
  // message_md5sum
  if (!rosidl_runtime_c__String__copy(
      &(input->message_md5sum), &(output->message_md5sum)))
  {
    return false;
  }
  // message_definition
  if (!rosidl_runtime_c__String__copy(
      &(input->message_definition), &(output->message_definition)))
  {
    return false;
  }
  // shm_seed
  output->shm_seed = input->shm_seed;
  // shm_size
  output->shm_size = input->shm_size;
  // msg_size
  output->msg_size = input->msg_size;
  // identity
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->identity), &(output->identity)))
  {
    return false;
  }
  return true;
}

mros_msgs__msg__AshmemInfo *
mros_msgs__msg__AshmemInfo__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mros_msgs__msg__AshmemInfo * msg = (mros_msgs__msg__AshmemInfo *)allocator.allocate(sizeof(mros_msgs__msg__AshmemInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mros_msgs__msg__AshmemInfo));
  bool success = mros_msgs__msg__AshmemInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mros_msgs__msg__AshmemInfo__destroy(mros_msgs__msg__AshmemInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mros_msgs__msg__AshmemInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mros_msgs__msg__AshmemInfo__Sequence__init(mros_msgs__msg__AshmemInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mros_msgs__msg__AshmemInfo * data = NULL;

  if (size) {
    data = (mros_msgs__msg__AshmemInfo *)allocator.zero_allocate(size, sizeof(mros_msgs__msg__AshmemInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mros_msgs__msg__AshmemInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mros_msgs__msg__AshmemInfo__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
mros_msgs__msg__AshmemInfo__Sequence__fini(mros_msgs__msg__AshmemInfo__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mros_msgs__msg__AshmemInfo__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

mros_msgs__msg__AshmemInfo__Sequence *
mros_msgs__msg__AshmemInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mros_msgs__msg__AshmemInfo__Sequence * array = (mros_msgs__msg__AshmemInfo__Sequence *)allocator.allocate(sizeof(mros_msgs__msg__AshmemInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mros_msgs__msg__AshmemInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mros_msgs__msg__AshmemInfo__Sequence__destroy(mros_msgs__msg__AshmemInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mros_msgs__msg__AshmemInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mros_msgs__msg__AshmemInfo__Sequence__are_equal(const mros_msgs__msg__AshmemInfo__Sequence * lhs, const mros_msgs__msg__AshmemInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mros_msgs__msg__AshmemInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mros_msgs__msg__AshmemInfo__Sequence__copy(
  const mros_msgs__msg__AshmemInfo__Sequence * input,
  mros_msgs__msg__AshmemInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mros_msgs__msg__AshmemInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mros_msgs__msg__AshmemInfo * data =
      (mros_msgs__msg__AshmemInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mros_msgs__msg__AshmemInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mros_msgs__msg__AshmemInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mros_msgs__msg__AshmemInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
