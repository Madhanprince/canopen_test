// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from iris_interfaces:srv/ProcessManager.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__SRV__DETAIL__PROCESS_MANAGER__TRAITS_HPP_
#define IRIS_INTERFACES__SRV__DETAIL__PROCESS_MANAGER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "iris_interfaces/srv/detail/process_manager__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace iris_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ProcessManager_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: package
  {
    out << "package: ";
    rosidl_generator_traits::value_to_yaml(msg.package, out);
    out << ", ";
  }

  // member: executable
  {
    out << "executable: ";
    rosidl_generator_traits::value_to_yaml(msg.executable, out);
    out << ", ";
  }

  // member: name_space
  {
    out << "name_space: ";
    rosidl_generator_traits::value_to_yaml(msg.name_space, out);
    out << ", ";
  }

  // member: node_name
  {
    out << "node_name: ";
    rosidl_generator_traits::value_to_yaml(msg.node_name, out);
    out << ", ";
  }

  // member: container_name
  {
    out << "container_name: ";
    rosidl_generator_traits::value_to_yaml(msg.container_name, out);
    out << ", ";
  }

  // member: label
  {
    out << "label: ";
    rosidl_generator_traits::value_to_yaml(msg.label, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ProcessManager_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: package
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "package: ";
    rosidl_generator_traits::value_to_yaml(msg.package, out);
    out << "\n";
  }

  // member: executable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "executable: ";
    rosidl_generator_traits::value_to_yaml(msg.executable, out);
    out << "\n";
  }

  // member: name_space
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name_space: ";
    rosidl_generator_traits::value_to_yaml(msg.name_space, out);
    out << "\n";
  }

  // member: node_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node_name: ";
    rosidl_generator_traits::value_to_yaml(msg.node_name, out);
    out << "\n";
  }

  // member: container_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "container_name: ";
    rosidl_generator_traits::value_to_yaml(msg.container_name, out);
    out << "\n";
  }

  // member: label
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "label: ";
    rosidl_generator_traits::value_to_yaml(msg.label, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ProcessManager_Request & msg, bool use_flow_style = false)
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

}  // namespace iris_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use iris_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const iris_interfaces::srv::ProcessManager_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  iris_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use iris_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const iris_interfaces::srv::ProcessManager_Request & msg)
{
  return iris_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<iris_interfaces::srv::ProcessManager_Request>()
{
  return "iris_interfaces::srv::ProcessManager_Request";
}

template<>
inline const char * name<iris_interfaces::srv::ProcessManager_Request>()
{
  return "iris_interfaces/srv/ProcessManager_Request";
}

template<>
struct has_fixed_size<iris_interfaces::srv::ProcessManager_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<iris_interfaces::srv::ProcessManager_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<iris_interfaces::srv::ProcessManager_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace iris_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ProcessManager_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: response
  {
    out << "response: ";
    rosidl_generator_traits::value_to_yaml(msg.response, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ProcessManager_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "response: ";
    rosidl_generator_traits::value_to_yaml(msg.response, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ProcessManager_Response & msg, bool use_flow_style = false)
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

}  // namespace iris_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use iris_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const iris_interfaces::srv::ProcessManager_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  iris_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use iris_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const iris_interfaces::srv::ProcessManager_Response & msg)
{
  return iris_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<iris_interfaces::srv::ProcessManager_Response>()
{
  return "iris_interfaces::srv::ProcessManager_Response";
}

template<>
inline const char * name<iris_interfaces::srv::ProcessManager_Response>()
{
  return "iris_interfaces/srv/ProcessManager_Response";
}

template<>
struct has_fixed_size<iris_interfaces::srv::ProcessManager_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<iris_interfaces::srv::ProcessManager_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<iris_interfaces::srv::ProcessManager_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<iris_interfaces::srv::ProcessManager>()
{
  return "iris_interfaces::srv::ProcessManager";
}

template<>
inline const char * name<iris_interfaces::srv::ProcessManager>()
{
  return "iris_interfaces/srv/ProcessManager";
}

template<>
struct has_fixed_size<iris_interfaces::srv::ProcessManager>
  : std::integral_constant<
    bool,
    has_fixed_size<iris_interfaces::srv::ProcessManager_Request>::value &&
    has_fixed_size<iris_interfaces::srv::ProcessManager_Response>::value
  >
{
};

template<>
struct has_bounded_size<iris_interfaces::srv::ProcessManager>
  : std::integral_constant<
    bool,
    has_bounded_size<iris_interfaces::srv::ProcessManager_Request>::value &&
    has_bounded_size<iris_interfaces::srv::ProcessManager_Response>::value
  >
{
};

template<>
struct is_service<iris_interfaces::srv::ProcessManager>
  : std::true_type
{
};

template<>
struct is_service_request<iris_interfaces::srv::ProcessManager_Request>
  : std::true_type
{
};

template<>
struct is_service_response<iris_interfaces::srv::ProcessManager_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // IRIS_INTERFACES__SRV__DETAIL__PROCESS_MANAGER__TRAITS_HPP_
