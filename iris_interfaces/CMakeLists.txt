cmake_minimum_required(VERSION 3.8)
project(iris_interfaces)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(std_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(builtin_interfaces REQUIRED)

set(dependencies
  std_msgs
  sensor_msgs
  geometry_msgs
  nav_msgs
  builtin_interfaces
)

set(msgs
  "msg/WheelCommandSpeed.msg"
  "msg/WheelEncoders.msg"
  "msg/SensorStatus.msg"
  "msg/MotorStatus.msg"
  "msg/MotorControllerStatus.msg"
  "msg/UltrasonicRanges.msg"
  "msg/WaterTankLevels.msg"
  "msg/HeadbandMode.msg"
  "msg/NavigationMode.msg"
  "msg/FollowPathResult.msg"
  "msg/OTAStatus.msg"
  "msg/SystemSoftwareStatus.msg"
  "msg/MenderClientStatus.msg"
  "msg/A5Status.msg"
  "msg/LedControl.msg"
  "msg/A2FunctionalStatus.msg"
  "msg/A2Command.msg"
  "msg/VacuumStatus.msg"
  "msg/VacuumFaults.msg"
  "msg/BrushStatus.msg"
  "msg/BrushFaults.msg"
  "msg/A2FaultStatus.msg"
  "msg/ActuatorStatus.msg"
)

set(srvs
  "srv/UpdateMotorControllerParameters.srv"
  "srv/RestartMotorController.srv"
  "srv/GetWifiStatus.srv"
  "srv/WifiDiscovery.srv"
  "srv/ConnectWifi.srv"
  "srv/DisconnectWifi.srv"
  "srv/ProcessManager.srv"
  "srv/StateManager.srv"
  "srv/ResetWheelEncoders.srv"
  "srv/UpdateMotorControllerReferenceSource.srv"
  "srv/A2Command.srv"
  "srv/ResetA2Faults.srv"
)

set(actions
  "action/ComputePathCoverage.action"
  "action/NavigatePathCoverage.action"
  "action/PathCoverageController.action"
)

rosidl_generate_interfaces(${PROJECT_NAME}
  ${msgs}
  ${srvs}
  ${actions}
  DEPENDENCIES ${dependencies}
)

ament_export_dependencies(rosidl_default_runtime)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
