// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from image_processing:srv/Conversion.idl
// generated code does not contain a copyright notice

#ifndef IMAGE_PROCESSING__SRV__DETAIL__CONVERSION__BUILDER_HPP_
#define IMAGE_PROCESSING__SRV__DETAIL__CONVERSION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "image_processing/srv/detail/conversion__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace image_processing
{

namespace srv
{

namespace builder
{

class Init_Conversion_Request_conversion_mode
{
public:
  Init_Conversion_Request_conversion_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::image_processing::srv::Conversion_Request conversion_mode(::image_processing::srv::Conversion_Request::_conversion_mode_type arg)
  {
    msg_.conversion_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::image_processing::srv::Conversion_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::image_processing::srv::Conversion_Request>()
{
  return image_processing::srv::builder::Init_Conversion_Request_conversion_mode();
}

}  // namespace image_processing


namespace image_processing
{

namespace srv
{

namespace builder
{

class Init_Conversion_Response_message
{
public:
  explicit Init_Conversion_Response_message(::image_processing::srv::Conversion_Response & msg)
  : msg_(msg)
  {}
  ::image_processing::srv::Conversion_Response message(::image_processing::srv::Conversion_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::image_processing::srv::Conversion_Response msg_;
};

class Init_Conversion_Response_success
{
public:
  Init_Conversion_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Conversion_Response_message success(::image_processing::srv::Conversion_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_Conversion_Response_message(msg_);
  }

private:
  ::image_processing::srv::Conversion_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::image_processing::srv::Conversion_Response>()
{
  return image_processing::srv::builder::Init_Conversion_Response_success();
}

}  // namespace image_processing

#endif  // IMAGE_PROCESSING__SRV__DETAIL__CONVERSION__BUILDER_HPP_
