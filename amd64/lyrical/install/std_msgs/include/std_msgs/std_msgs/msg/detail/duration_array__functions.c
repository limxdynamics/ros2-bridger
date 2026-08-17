// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from std_msgs:msg/DurationArray.idl
// generated code does not contain a copyright notice
#include "std_msgs/msg/detail/duration_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `data`
#include "std_msgs/msg/detail/duration__functions.h"

bool
std_msgs__msg__DurationArray__init(std_msgs__msg__DurationArray * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    std_msgs__msg__DurationArray__fini(msg);
    return false;
  }
  // data
  if (!std_msgs__msg__Duration__Sequence__init(&msg->data, 0)) {
    std_msgs__msg__DurationArray__fini(msg);
    return false;
  }
  return true;
}

void
std_msgs__msg__DurationArray__fini(std_msgs__msg__DurationArray * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // data
  std_msgs__msg__Duration__Sequence__fini(&msg->data);
}

bool
std_msgs__msg__DurationArray__are_equal(const std_msgs__msg__DurationArray * lhs, const std_msgs__msg__DurationArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // data
  if (!std_msgs__msg__Duration__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
std_msgs__msg__DurationArray__copy(
  const std_msgs__msg__DurationArray * input,
  std_msgs__msg__DurationArray * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // data
  if (!std_msgs__msg__Duration__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

std_msgs__msg__DurationArray *
std_msgs__msg__DurationArray__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  std_msgs__msg__DurationArray * msg = (std_msgs__msg__DurationArray *)allocator.allocate(sizeof(std_msgs__msg__DurationArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(std_msgs__msg__DurationArray));
  bool success = std_msgs__msg__DurationArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
std_msgs__msg__DurationArray__destroy(std_msgs__msg__DurationArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    std_msgs__msg__DurationArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
std_msgs__msg__DurationArray__Sequence__init(std_msgs__msg__DurationArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  std_msgs__msg__DurationArray * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(std_msgs__msg__DurationArray)) {
      return false;
    }
    data = (std_msgs__msg__DurationArray *)allocator.zero_allocate(size, sizeof(std_msgs__msg__DurationArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = std_msgs__msg__DurationArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        std_msgs__msg__DurationArray__fini(&data[i - 1]);
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
std_msgs__msg__DurationArray__Sequence__fini(std_msgs__msg__DurationArray__Sequence * array)
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
      std_msgs__msg__DurationArray__fini(&array->data[i]);
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

std_msgs__msg__DurationArray__Sequence *
std_msgs__msg__DurationArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  std_msgs__msg__DurationArray__Sequence * array = (std_msgs__msg__DurationArray__Sequence *)allocator.allocate(sizeof(std_msgs__msg__DurationArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = std_msgs__msg__DurationArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
std_msgs__msg__DurationArray__Sequence__destroy(std_msgs__msg__DurationArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    std_msgs__msg__DurationArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
std_msgs__msg__DurationArray__Sequence__are_equal(const std_msgs__msg__DurationArray__Sequence * lhs, const std_msgs__msg__DurationArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!std_msgs__msg__DurationArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
std_msgs__msg__DurationArray__Sequence__copy(
  const std_msgs__msg__DurationArray__Sequence * input,
  std_msgs__msg__DurationArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(std_msgs__msg__DurationArray)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(std_msgs__msg__DurationArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    std_msgs__msg__DurationArray * data =
      (std_msgs__msg__DurationArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!std_msgs__msg__DurationArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          std_msgs__msg__DurationArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!std_msgs__msg__DurationArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
