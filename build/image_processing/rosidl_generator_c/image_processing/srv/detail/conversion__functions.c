// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from image_processing:srv/Conversion.idl
// generated code does not contain a copyright notice
#include "image_processing/srv/detail/conversion__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
image_processing__srv__Conversion_Request__init(image_processing__srv__Conversion_Request * msg)
{
  if (!msg) {
    return false;
  }
  // conversion_mode
  return true;
}

void
image_processing__srv__Conversion_Request__fini(image_processing__srv__Conversion_Request * msg)
{
  if (!msg) {
    return;
  }
  // conversion_mode
}

bool
image_processing__srv__Conversion_Request__are_equal(const image_processing__srv__Conversion_Request * lhs, const image_processing__srv__Conversion_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // conversion_mode
  if (lhs->conversion_mode != rhs->conversion_mode) {
    return false;
  }
  return true;
}

bool
image_processing__srv__Conversion_Request__copy(
  const image_processing__srv__Conversion_Request * input,
  image_processing__srv__Conversion_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // conversion_mode
  output->conversion_mode = input->conversion_mode;
  return true;
}

image_processing__srv__Conversion_Request *
image_processing__srv__Conversion_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  image_processing__srv__Conversion_Request * msg = (image_processing__srv__Conversion_Request *)allocator.allocate(sizeof(image_processing__srv__Conversion_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(image_processing__srv__Conversion_Request));
  bool success = image_processing__srv__Conversion_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
image_processing__srv__Conversion_Request__destroy(image_processing__srv__Conversion_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    image_processing__srv__Conversion_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
image_processing__srv__Conversion_Request__Sequence__init(image_processing__srv__Conversion_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  image_processing__srv__Conversion_Request * data = NULL;

  if (size) {
    data = (image_processing__srv__Conversion_Request *)allocator.zero_allocate(size, sizeof(image_processing__srv__Conversion_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = image_processing__srv__Conversion_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        image_processing__srv__Conversion_Request__fini(&data[i - 1]);
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
image_processing__srv__Conversion_Request__Sequence__fini(image_processing__srv__Conversion_Request__Sequence * array)
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
      image_processing__srv__Conversion_Request__fini(&array->data[i]);
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

image_processing__srv__Conversion_Request__Sequence *
image_processing__srv__Conversion_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  image_processing__srv__Conversion_Request__Sequence * array = (image_processing__srv__Conversion_Request__Sequence *)allocator.allocate(sizeof(image_processing__srv__Conversion_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = image_processing__srv__Conversion_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
image_processing__srv__Conversion_Request__Sequence__destroy(image_processing__srv__Conversion_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    image_processing__srv__Conversion_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
image_processing__srv__Conversion_Request__Sequence__are_equal(const image_processing__srv__Conversion_Request__Sequence * lhs, const image_processing__srv__Conversion_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!image_processing__srv__Conversion_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
image_processing__srv__Conversion_Request__Sequence__copy(
  const image_processing__srv__Conversion_Request__Sequence * input,
  image_processing__srv__Conversion_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(image_processing__srv__Conversion_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    image_processing__srv__Conversion_Request * data =
      (image_processing__srv__Conversion_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!image_processing__srv__Conversion_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          image_processing__srv__Conversion_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!image_processing__srv__Conversion_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
image_processing__srv__Conversion_Response__init(image_processing__srv__Conversion_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    image_processing__srv__Conversion_Response__fini(msg);
    return false;
  }
  return true;
}

void
image_processing__srv__Conversion_Response__fini(image_processing__srv__Conversion_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
image_processing__srv__Conversion_Response__are_equal(const image_processing__srv__Conversion_Response * lhs, const image_processing__srv__Conversion_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
image_processing__srv__Conversion_Response__copy(
  const image_processing__srv__Conversion_Response * input,
  image_processing__srv__Conversion_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

image_processing__srv__Conversion_Response *
image_processing__srv__Conversion_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  image_processing__srv__Conversion_Response * msg = (image_processing__srv__Conversion_Response *)allocator.allocate(sizeof(image_processing__srv__Conversion_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(image_processing__srv__Conversion_Response));
  bool success = image_processing__srv__Conversion_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
image_processing__srv__Conversion_Response__destroy(image_processing__srv__Conversion_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    image_processing__srv__Conversion_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
image_processing__srv__Conversion_Response__Sequence__init(image_processing__srv__Conversion_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  image_processing__srv__Conversion_Response * data = NULL;

  if (size) {
    data = (image_processing__srv__Conversion_Response *)allocator.zero_allocate(size, sizeof(image_processing__srv__Conversion_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = image_processing__srv__Conversion_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        image_processing__srv__Conversion_Response__fini(&data[i - 1]);
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
image_processing__srv__Conversion_Response__Sequence__fini(image_processing__srv__Conversion_Response__Sequence * array)
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
      image_processing__srv__Conversion_Response__fini(&array->data[i]);
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

image_processing__srv__Conversion_Response__Sequence *
image_processing__srv__Conversion_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  image_processing__srv__Conversion_Response__Sequence * array = (image_processing__srv__Conversion_Response__Sequence *)allocator.allocate(sizeof(image_processing__srv__Conversion_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = image_processing__srv__Conversion_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
image_processing__srv__Conversion_Response__Sequence__destroy(image_processing__srv__Conversion_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    image_processing__srv__Conversion_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
image_processing__srv__Conversion_Response__Sequence__are_equal(const image_processing__srv__Conversion_Response__Sequence * lhs, const image_processing__srv__Conversion_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!image_processing__srv__Conversion_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
image_processing__srv__Conversion_Response__Sequence__copy(
  const image_processing__srv__Conversion_Response__Sequence * input,
  image_processing__srv__Conversion_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(image_processing__srv__Conversion_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    image_processing__srv__Conversion_Response * data =
      (image_processing__srv__Conversion_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!image_processing__srv__Conversion_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          image_processing__srv__Conversion_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!image_processing__srv__Conversion_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
