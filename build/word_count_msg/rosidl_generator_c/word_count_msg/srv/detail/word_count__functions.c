// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from word_count_msg:srv/WordCount.idl
// generated code does not contain a copyright notice
#include "word_count_msg/srv/detail/word_count__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `words`
#include "rosidl_runtime_c/string_functions.h"

bool
word_count_msg__srv__WordCount_Request__init(word_count_msg__srv__WordCount_Request * msg)
{
  if (!msg) {
    return false;
  }
  // words
  if (!rosidl_runtime_c__String__init(&msg->words)) {
    word_count_msg__srv__WordCount_Request__fini(msg);
    return false;
  }
  return true;
}

void
word_count_msg__srv__WordCount_Request__fini(word_count_msg__srv__WordCount_Request * msg)
{
  if (!msg) {
    return;
  }
  // words
  rosidl_runtime_c__String__fini(&msg->words);
}

bool
word_count_msg__srv__WordCount_Request__are_equal(const word_count_msg__srv__WordCount_Request * lhs, const word_count_msg__srv__WordCount_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // words
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->words), &(rhs->words)))
  {
    return false;
  }
  return true;
}

bool
word_count_msg__srv__WordCount_Request__copy(
  const word_count_msg__srv__WordCount_Request * input,
  word_count_msg__srv__WordCount_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // words
  if (!rosidl_runtime_c__String__copy(
      &(input->words), &(output->words)))
  {
    return false;
  }
  return true;
}

word_count_msg__srv__WordCount_Request *
word_count_msg__srv__WordCount_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  word_count_msg__srv__WordCount_Request * msg = (word_count_msg__srv__WordCount_Request *)allocator.allocate(sizeof(word_count_msg__srv__WordCount_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(word_count_msg__srv__WordCount_Request));
  bool success = word_count_msg__srv__WordCount_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
word_count_msg__srv__WordCount_Request__destroy(word_count_msg__srv__WordCount_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    word_count_msg__srv__WordCount_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
word_count_msg__srv__WordCount_Request__Sequence__init(word_count_msg__srv__WordCount_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  word_count_msg__srv__WordCount_Request * data = NULL;

  if (size) {
    data = (word_count_msg__srv__WordCount_Request *)allocator.zero_allocate(size, sizeof(word_count_msg__srv__WordCount_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = word_count_msg__srv__WordCount_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        word_count_msg__srv__WordCount_Request__fini(&data[i - 1]);
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
word_count_msg__srv__WordCount_Request__Sequence__fini(word_count_msg__srv__WordCount_Request__Sequence * array)
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
      word_count_msg__srv__WordCount_Request__fini(&array->data[i]);
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

word_count_msg__srv__WordCount_Request__Sequence *
word_count_msg__srv__WordCount_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  word_count_msg__srv__WordCount_Request__Sequence * array = (word_count_msg__srv__WordCount_Request__Sequence *)allocator.allocate(sizeof(word_count_msg__srv__WordCount_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = word_count_msg__srv__WordCount_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
word_count_msg__srv__WordCount_Request__Sequence__destroy(word_count_msg__srv__WordCount_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    word_count_msg__srv__WordCount_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
word_count_msg__srv__WordCount_Request__Sequence__are_equal(const word_count_msg__srv__WordCount_Request__Sequence * lhs, const word_count_msg__srv__WordCount_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!word_count_msg__srv__WordCount_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
word_count_msg__srv__WordCount_Request__Sequence__copy(
  const word_count_msg__srv__WordCount_Request__Sequence * input,
  word_count_msg__srv__WordCount_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(word_count_msg__srv__WordCount_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    word_count_msg__srv__WordCount_Request * data =
      (word_count_msg__srv__WordCount_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!word_count_msg__srv__WordCount_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          word_count_msg__srv__WordCount_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!word_count_msg__srv__WordCount_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
word_count_msg__srv__WordCount_Response__init(word_count_msg__srv__WordCount_Response * msg)
{
  if (!msg) {
    return false;
  }
  // count
  return true;
}

void
word_count_msg__srv__WordCount_Response__fini(word_count_msg__srv__WordCount_Response * msg)
{
  if (!msg) {
    return;
  }
  // count
}

bool
word_count_msg__srv__WordCount_Response__are_equal(const word_count_msg__srv__WordCount_Response * lhs, const word_count_msg__srv__WordCount_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // count
  if (lhs->count != rhs->count) {
    return false;
  }
  return true;
}

bool
word_count_msg__srv__WordCount_Response__copy(
  const word_count_msg__srv__WordCount_Response * input,
  word_count_msg__srv__WordCount_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // count
  output->count = input->count;
  return true;
}

word_count_msg__srv__WordCount_Response *
word_count_msg__srv__WordCount_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  word_count_msg__srv__WordCount_Response * msg = (word_count_msg__srv__WordCount_Response *)allocator.allocate(sizeof(word_count_msg__srv__WordCount_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(word_count_msg__srv__WordCount_Response));
  bool success = word_count_msg__srv__WordCount_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
word_count_msg__srv__WordCount_Response__destroy(word_count_msg__srv__WordCount_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    word_count_msg__srv__WordCount_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
word_count_msg__srv__WordCount_Response__Sequence__init(word_count_msg__srv__WordCount_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  word_count_msg__srv__WordCount_Response * data = NULL;

  if (size) {
    data = (word_count_msg__srv__WordCount_Response *)allocator.zero_allocate(size, sizeof(word_count_msg__srv__WordCount_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = word_count_msg__srv__WordCount_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        word_count_msg__srv__WordCount_Response__fini(&data[i - 1]);
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
word_count_msg__srv__WordCount_Response__Sequence__fini(word_count_msg__srv__WordCount_Response__Sequence * array)
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
      word_count_msg__srv__WordCount_Response__fini(&array->data[i]);
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

word_count_msg__srv__WordCount_Response__Sequence *
word_count_msg__srv__WordCount_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  word_count_msg__srv__WordCount_Response__Sequence * array = (word_count_msg__srv__WordCount_Response__Sequence *)allocator.allocate(sizeof(word_count_msg__srv__WordCount_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = word_count_msg__srv__WordCount_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
word_count_msg__srv__WordCount_Response__Sequence__destroy(word_count_msg__srv__WordCount_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    word_count_msg__srv__WordCount_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
word_count_msg__srv__WordCount_Response__Sequence__are_equal(const word_count_msg__srv__WordCount_Response__Sequence * lhs, const word_count_msg__srv__WordCount_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!word_count_msg__srv__WordCount_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
word_count_msg__srv__WordCount_Response__Sequence__copy(
  const word_count_msg__srv__WordCount_Response__Sequence * input,
  word_count_msg__srv__WordCount_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(word_count_msg__srv__WordCount_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    word_count_msg__srv__WordCount_Response * data =
      (word_count_msg__srv__WordCount_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!word_count_msg__srv__WordCount_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          word_count_msg__srv__WordCount_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!word_count_msg__srv__WordCount_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
