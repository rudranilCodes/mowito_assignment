// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from image_processing:srv/Conversion.idl
// generated code does not contain a copyright notice

#ifndef IMAGE_PROCESSING__SRV__DETAIL__CONVERSION__TRAITS_HPP_
#define IMAGE_PROCESSING__SRV__DETAIL__CONVERSION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "image_processing/srv/detail/conversion__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace image_processing
{

namespace srv
{

inline void to_flow_style_yaml(
  const Conversion_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: conversion_mode
  {
    out << "conversion_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.conversion_mode, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Conversion_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: conversion_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "conversion_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.conversion_mode, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Conversion_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace image_processing

namespace rosidl_generator_traits
{

[[deprecated("use image_processing::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const image_processing::srv::Conversion_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  image_processing::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use image_processing::srv::to_yaml() instead")]]
inline std::string to_yaml(const image_processing::srv::Conversion_Request & msg)
{
  return image_processing::srv::to_yaml(msg);
}

template<>
inline const char * data_type<image_processing::srv::Conversion_Request>()
{
  return "image_processing::srv::Conversion_Request";
}

template<>
inline const char * name<image_processing::srv::Conversion_Request>()
{
  return "image_processing/srv/Conversion_Request";
}

template<>
struct has_fixed_size<image_processing::srv::Conversion_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<image_processing::srv::Conversion_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<image_processing::srv::Conversion_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace image_processing
{

namespace srv
{

inline void to_flow_style_yaml(
  const Conversion_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Conversion_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Conversion_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace image_processing

namespace rosidl_generator_traits
{

[[deprecated("use image_processing::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const image_processing::srv::Conversion_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  image_processing::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use image_processing::srv::to_yaml() instead")]]
inline std::string to_yaml(const image_processing::srv::Conversion_Response & msg)
{
  return image_processing::srv::to_yaml(msg);
}

template<>
inline const char * data_type<image_processing::srv::Conversion_Response>()
{
  return "image_processing::srv::Conversion_Response";
}

template<>
inline const char * name<image_processing::srv::Conversion_Response>()
{
  return "image_processing/srv/Conversion_Response";
}

template<>
struct has_fixed_size<image_processing::srv::Conversion_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<image_processing::srv::Conversion_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<image_processing::srv::Conversion_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<image_processing::srv::Conversion>()
{
  return "image_processing::srv::Conversion";
}

template<>
inline const char * name<image_processing::srv::Conversion>()
{
  return "image_processing/srv/Conversion";
}

template<>
struct has_fixed_size<image_processing::srv::Conversion>
  : std::integral_constant<
    bool,
    has_fixed_size<image_processing::srv::Conversion_Request>::value &&
    has_fixed_size<image_processing::srv::Conversion_Response>::value
  >
{
};

template<>
struct has_bounded_size<image_processing::srv::Conversion>
  : std::integral_constant<
    bool,
    has_bounded_size<image_processing::srv::Conversion_Request>::value &&
    has_bounded_size<image_processing::srv::Conversion_Response>::value
  >
{
};

template<>
struct is_service<image_processing::srv::Conversion>
  : std::true_type
{
};

template<>
struct is_service_request<image_processing::srv::Conversion_Request>
  : std::true_type
{
};

template<>
struct is_service_response<image_processing::srv::Conversion_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // IMAGE_PROCESSING__SRV__DETAIL__CONVERSION__TRAITS_HPP_
