// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from image_processing:srv/Conversion.idl
// generated code does not contain a copyright notice

#ifndef IMAGE_PROCESSING__SRV__DETAIL__CONVERSION__FUNCTIONS_H_
#define IMAGE_PROCESSING__SRV__DETAIL__CONVERSION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "image_processing/msg/rosidl_generator_c__visibility_control.h"

#include "image_processing/srv/detail/conversion__struct.h"

/// Initialize srv/Conversion message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * image_processing__srv__Conversion_Request
 * )) before or use
 * image_processing__srv__Conversion_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_image_processing
bool
image_processing__srv__Conversion_Request__init(image_processing__srv__Conversion_Request * msg);

/// Finalize srv/Conversion message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_image_processing
void
image_processing__srv__Conversion_Request__fini(image_processing__srv__Conversion_Request * msg);

/// Create srv/Conversion message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * image_processing__srv__Conversion_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_image_processing
image_processing__srv__Conversion_Request *
image_processing__srv__Conversion_Request__create();

/// Destroy srv/Conversion message.
/**
 * It calls
 * image_processing__srv__Conversion_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_image_processing
void
image_processing__srv__Conversion_Request__destroy(image_processing__srv__Conversion_Request * msg);

/// Check for srv/Conversion message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_image_processing
bool
image_processing__srv__Conversion_Request__are_equal(const image_processing__srv__Conversion_Request * lhs, const image_processing__srv__Conversion_Request * rhs);

/// Copy a srv/Conversion message.
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
ROSIDL_GENERATOR_C_PUBLIC_image_processing
bool
image_processing__srv__Conversion_Request__copy(
  const image_processing__srv__Conversion_Request * input,
  image_processing__srv__Conversion_Request * output);

/// Initialize array of srv/Conversion messages.
/**
 * It allocates the memory for the number of elements and calls
 * image_processing__srv__Conversion_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_image_processing
bool
image_processing__srv__Conversion_Request__Sequence__init(image_processing__srv__Conversion_Request__Sequence * array, size_t size);

/// Finalize array of srv/Conversion messages.
/**
 * It calls
 * image_processing__srv__Conversion_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_image_processing
void
image_processing__srv__Conversion_Request__Sequence__fini(image_processing__srv__Conversion_Request__Sequence * array);

/// Create array of srv/Conversion messages.
/**
 * It allocates the memory for the array and calls
 * image_processing__srv__Conversion_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_image_processing
image_processing__srv__Conversion_Request__Sequence *
image_processing__srv__Conversion_Request__Sequence__create(size_t size);

/// Destroy array of srv/Conversion messages.
/**
 * It calls
 * image_processing__srv__Conversion_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_image_processing
void
image_processing__srv__Conversion_Request__Sequence__destroy(image_processing__srv__Conversion_Request__Sequence * array);

/// Check for srv/Conversion message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_image_processing
bool
image_processing__srv__Conversion_Request__Sequence__are_equal(const image_processing__srv__Conversion_Request__Sequence * lhs, const image_processing__srv__Conversion_Request__Sequence * rhs);

/// Copy an array of srv/Conversion messages.
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
ROSIDL_GENERATOR_C_PUBLIC_image_processing
bool
image_processing__srv__Conversion_Request__Sequence__copy(
  const image_processing__srv__Conversion_Request__Sequence * input,
  image_processing__srv__Conversion_Request__Sequence * output);

/// Initialize srv/Conversion message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * image_processing__srv__Conversion_Response
 * )) before or use
 * image_processing__srv__Conversion_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_image_processing
bool
image_processing__srv__Conversion_Response__init(image_processing__srv__Conversion_Response * msg);

/// Finalize srv/Conversion message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_image_processing
void
image_processing__srv__Conversion_Response__fini(image_processing__srv__Conversion_Response * msg);

/// Create srv/Conversion message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * image_processing__srv__Conversion_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_image_processing
image_processing__srv__Conversion_Response *
image_processing__srv__Conversion_Response__create();

/// Destroy srv/Conversion message.
/**
 * It calls
 * image_processing__srv__Conversion_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_image_processing
void
image_processing__srv__Conversion_Response__destroy(image_processing__srv__Conversion_Response * msg);

/// Check for srv/Conversion message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_image_processing
bool
image_processing__srv__Conversion_Response__are_equal(const image_processing__srv__Conversion_Response * lhs, const image_processing__srv__Conversion_Response * rhs);

/// Copy a srv/Conversion message.
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
ROSIDL_GENERATOR_C_PUBLIC_image_processing
bool
image_processing__srv__Conversion_Response__copy(
  const image_processing__srv__Conversion_Response * input,
  image_processing__srv__Conversion_Response * output);

/// Initialize array of srv/Conversion messages.
/**
 * It allocates the memory for the number of elements and calls
 * image_processing__srv__Conversion_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_image_processing
bool
image_processing__srv__Conversion_Response__Sequence__init(image_processing__srv__Conversion_Response__Sequence * array, size_t size);

/// Finalize array of srv/Conversion messages.
/**
 * It calls
 * image_processing__srv__Conversion_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_image_processing
void
image_processing__srv__Conversion_Response__Sequence__fini(image_processing__srv__Conversion_Response__Sequence * array);

/// Create array of srv/Conversion messages.
/**
 * It allocates the memory for the array and calls
 * image_processing__srv__Conversion_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_image_processing
image_processing__srv__Conversion_Response__Sequence *
image_processing__srv__Conversion_Response__Sequence__create(size_t size);

/// Destroy array of srv/Conversion messages.
/**
 * It calls
 * image_processing__srv__Conversion_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_image_processing
void
image_processing__srv__Conversion_Response__Sequence__destroy(image_processing__srv__Conversion_Response__Sequence * array);

/// Check for srv/Conversion message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_image_processing
bool
image_processing__srv__Conversion_Response__Sequence__are_equal(const image_processing__srv__Conversion_Response__Sequence * lhs, const image_processing__srv__Conversion_Response__Sequence * rhs);

/// Copy an array of srv/Conversion messages.
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
ROSIDL_GENERATOR_C_PUBLIC_image_processing
bool
image_processing__srv__Conversion_Response__Sequence__copy(
  const image_processing__srv__Conversion_Response__Sequence * input,
  image_processing__srv__Conversion_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // IMAGE_PROCESSING__SRV__DETAIL__CONVERSION__FUNCTIONS_H_
