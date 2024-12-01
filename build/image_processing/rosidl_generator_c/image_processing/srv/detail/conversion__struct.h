// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from image_processing:srv/Conversion.idl
// generated code does not contain a copyright notice

#ifndef IMAGE_PROCESSING__SRV__DETAIL__CONVERSION__STRUCT_H_
#define IMAGE_PROCESSING__SRV__DETAIL__CONVERSION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Conversion in the package image_processing.
typedef struct image_processing__srv__Conversion_Request
{
  bool conversion_mode;
} image_processing__srv__Conversion_Request;

// Struct for a sequence of image_processing__srv__Conversion_Request.
typedef struct image_processing__srv__Conversion_Request__Sequence
{
  image_processing__srv__Conversion_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} image_processing__srv__Conversion_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Conversion in the package image_processing.
typedef struct image_processing__srv__Conversion_Response
{
  bool success;
  rosidl_runtime_c__String message;
} image_processing__srv__Conversion_Response;

// Struct for a sequence of image_processing__srv__Conversion_Response.
typedef struct image_processing__srv__Conversion_Response__Sequence
{
  image_processing__srv__Conversion_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} image_processing__srv__Conversion_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IMAGE_PROCESSING__SRV__DETAIL__CONVERSION__STRUCT_H_
