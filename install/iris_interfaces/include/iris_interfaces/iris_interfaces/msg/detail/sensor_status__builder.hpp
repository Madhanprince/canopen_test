// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from iris_interfaces:msg/SensorStatus.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__SENSOR_STATUS__BUILDER_HPP_
#define IRIS_INTERFACES__MSG__DETAIL__SENSOR_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "iris_interfaces/msg/detail/sensor_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace iris_interfaces
{

namespace msg
{

namespace builder
{

class Init_SensorStatus_sensor_temperature
{
public:
  explicit Init_SensorStatus_sensor_temperature(::iris_interfaces::msg::SensorStatus & msg)
  : msg_(msg)
  {}
  ::iris_interfaces::msg::SensorStatus sensor_temperature(::iris_interfaces::msg::SensorStatus::_sensor_temperature_type arg)
  {
    msg_.sensor_temperature = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iris_interfaces::msg::SensorStatus msg_;
};

class Init_SensorStatus_sensor_status
{
public:
  explicit Init_SensorStatus_sensor_status(::iris_interfaces::msg::SensorStatus & msg)
  : msg_(msg)
  {}
  Init_SensorStatus_sensor_temperature sensor_status(::iris_interfaces::msg::SensorStatus::_sensor_status_type arg)
  {
    msg_.sensor_status = std::move(arg);
    return Init_SensorStatus_sensor_temperature(msg_);
  }

private:
  ::iris_interfaces::msg::SensorStatus msg_;
};

class Init_SensorStatus_sensor_robot_position
{
public:
  explicit Init_SensorStatus_sensor_robot_position(::iris_interfaces::msg::SensorStatus & msg)
  : msg_(msg)
  {}
  Init_SensorStatus_sensor_status sensor_robot_position(::iris_interfaces::msg::SensorStatus::_sensor_robot_position_type arg)
  {
    msg_.sensor_robot_position = std::move(arg);
    return Init_SensorStatus_sensor_status(msg_);
  }

private:
  ::iris_interfaces::msg::SensorStatus msg_;
};

class Init_SensorStatus_sensor_name
{
public:
  Init_SensorStatus_sensor_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorStatus_sensor_robot_position sensor_name(::iris_interfaces::msg::SensorStatus::_sensor_name_type arg)
  {
    msg_.sensor_name = std::move(arg);
    return Init_SensorStatus_sensor_robot_position(msg_);
  }

private:
  ::iris_interfaces::msg::SensorStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::iris_interfaces::msg::SensorStatus>()
{
  return iris_interfaces::msg::builder::Init_SensorStatus_sensor_name();
}

}  // namespace iris_interfaces

#endif  // IRIS_INTERFACES__MSG__DETAIL__SENSOR_STATUS__BUILDER_HPP_
