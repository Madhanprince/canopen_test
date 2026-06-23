#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to iris_interfaces__msg__WheelCommandSpeed

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WheelCommandSpeed {

    // This member is not documented.
    #[allow(missing_docs)]
    pub left_wheel: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub right_wheel: i16,

}



impl Default for WheelCommandSpeed {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::WheelCommandSpeed::default())
  }
}

impl rosidl_runtime_rs::Message for WheelCommandSpeed {
  type RmwMsg = super::msg::rmw::WheelCommandSpeed;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        left_wheel: msg.left_wheel,
        right_wheel: msg.right_wheel,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      left_wheel: msg.left_wheel,
      right_wheel: msg.right_wheel,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      left_wheel: msg.left_wheel,
      right_wheel: msg.right_wheel,
    }
  }
}


// Corresponds to iris_interfaces__msg__WheelEncoders

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WheelEncoders {

    // This member is not documented.
    #[allow(missing_docs)]
    pub left_wheel_ticks: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub right_wheel_ticks: i32,

}



impl Default for WheelEncoders {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::WheelEncoders::default())
  }
}

impl rosidl_runtime_rs::Message for WheelEncoders {
  type RmwMsg = super::msg::rmw::WheelEncoders;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        left_wheel_ticks: msg.left_wheel_ticks,
        right_wheel_ticks: msg.right_wheel_ticks,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      left_wheel_ticks: msg.left_wheel_ticks,
      right_wheel_ticks: msg.right_wheel_ticks,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      left_wheel_ticks: msg.left_wheel_ticks,
      right_wheel_ticks: msg.right_wheel_ticks,
    }
  }
}


// Corresponds to iris_interfaces__msg__SensorStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SensorStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub sensor_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sensor_robot_position: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sensor_status: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sensor_temperature: f32,

}

impl SensorStatus {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONNECTED: &'static str = "CONNECTED";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DISCONNECTED: &'static str = "DISCONNECTED";

}


impl Default for SensorStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SensorStatus::default())
  }
}

impl rosidl_runtime_rs::Message for SensorStatus {
  type RmwMsg = super::msg::rmw::SensorStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        sensor_name: msg.sensor_name.as_str().into(),
        sensor_robot_position: msg.sensor_robot_position.as_str().into(),
        sensor_status: msg.sensor_status.as_str().into(),
        sensor_temperature: msg.sensor_temperature,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        sensor_name: msg.sensor_name.as_str().into(),
        sensor_robot_position: msg.sensor_robot_position.as_str().into(),
        sensor_status: msg.sensor_status.as_str().into(),
      sensor_temperature: msg.sensor_temperature,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      sensor_name: msg.sensor_name.to_string(),
      sensor_robot_position: msg.sensor_robot_position.to_string(),
      sensor_status: msg.sensor_status.to_string(),
      sensor_temperature: msg.sensor_temperature,
    }
  }
}


// Corresponds to iris_interfaces__msg__MotorStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotorStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub brake_state: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_voltage: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_current: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub demand_rpm: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub actual_rpm: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub overload_percentage: u8,

}



impl Default for MotorStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MotorStatus::default())
  }
}

impl rosidl_runtime_rs::Message for MotorStatus {
  type RmwMsg = super::msg::rmw::MotorStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        brake_state: msg.brake_state.as_str().into(),
        motor_voltage: msg.motor_voltage,
        motor_current: msg.motor_current,
        demand_rpm: msg.demand_rpm,
        actual_rpm: msg.actual_rpm,
        overload_percentage: msg.overload_percentage,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        brake_state: msg.brake_state.as_str().into(),
      motor_voltage: msg.motor_voltage,
      motor_current: msg.motor_current,
      demand_rpm: msg.demand_rpm,
      actual_rpm: msg.actual_rpm,
      overload_percentage: msg.overload_percentage,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      brake_state: msg.brake_state.to_string(),
      motor_voltage: msg.motor_voltage,
      motor_current: msg.motor_current,
      demand_rpm: msg.demand_rpm,
      actual_rpm: msg.actual_rpm,
      overload_percentage: msg.overload_percentage,
    }
  }
}


// Corresponds to iris_interfaces__msg__MotorControllerStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotorControllerStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub software_version: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub input_voltage: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub board_temperature: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sto_status: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub controller_alarm: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub controller_nmt_state: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub left_motor: super::msg::MotorStatus,


    // This member is not documented.
    #[allow(missing_docs)]
    pub right_motor: super::msg::MotorStatus,

}



impl Default for MotorControllerStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MotorControllerStatus::default())
  }
}

impl rosidl_runtime_rs::Message for MotorControllerStatus {
  type RmwMsg = super::msg::rmw::MotorControllerStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        software_version: msg.software_version.as_str().into(),
        input_voltage: msg.input_voltage,
        board_temperature: msg.board_temperature,
        sto_status: msg.sto_status.as_str().into(),
        controller_alarm: msg.controller_alarm.as_str().into(),
        controller_nmt_state: msg.controller_nmt_state.as_str().into(),
        left_motor: super::msg::MotorStatus::into_rmw_message(std::borrow::Cow::Owned(msg.left_motor)).into_owned(),
        right_motor: super::msg::MotorStatus::into_rmw_message(std::borrow::Cow::Owned(msg.right_motor)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        software_version: msg.software_version.as_str().into(),
      input_voltage: msg.input_voltage,
      board_temperature: msg.board_temperature,
        sto_status: msg.sto_status.as_str().into(),
        controller_alarm: msg.controller_alarm.as_str().into(),
        controller_nmt_state: msg.controller_nmt_state.as_str().into(),
        left_motor: super::msg::MotorStatus::into_rmw_message(std::borrow::Cow::Borrowed(&msg.left_motor)).into_owned(),
        right_motor: super::msg::MotorStatus::into_rmw_message(std::borrow::Cow::Borrowed(&msg.right_motor)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      software_version: msg.software_version.to_string(),
      input_voltage: msg.input_voltage,
      board_temperature: msg.board_temperature,
      sto_status: msg.sto_status.to_string(),
      controller_alarm: msg.controller_alarm.to_string(),
      controller_nmt_state: msg.controller_nmt_state.to_string(),
      left_motor: super::msg::MotorStatus::from_rmw_message(msg.left_motor),
      right_motor: super::msg::MotorStatus::from_rmw_message(msg.right_motor),
    }
  }
}


// Corresponds to iris_interfaces__msg__UltrasonicRanges
/// TODO: Rename the sensors w.r.t to position later on.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UltrasonicRanges {

    // This member is not documented.
    #[allow(missing_docs)]
    pub ultrasonic_1: sensor_msgs::msg::Range,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ultrasonic_2: sensor_msgs::msg::Range,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ultrasonic_3: sensor_msgs::msg::Range,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ultrasonic_4: sensor_msgs::msg::Range,

}



impl Default for UltrasonicRanges {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::UltrasonicRanges::default())
  }
}

impl rosidl_runtime_rs::Message for UltrasonicRanges {
  type RmwMsg = super::msg::rmw::UltrasonicRanges;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        ultrasonic_1: sensor_msgs::msg::Range::into_rmw_message(std::borrow::Cow::Owned(msg.ultrasonic_1)).into_owned(),
        ultrasonic_2: sensor_msgs::msg::Range::into_rmw_message(std::borrow::Cow::Owned(msg.ultrasonic_2)).into_owned(),
        ultrasonic_3: sensor_msgs::msg::Range::into_rmw_message(std::borrow::Cow::Owned(msg.ultrasonic_3)).into_owned(),
        ultrasonic_4: sensor_msgs::msg::Range::into_rmw_message(std::borrow::Cow::Owned(msg.ultrasonic_4)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        ultrasonic_1: sensor_msgs::msg::Range::into_rmw_message(std::borrow::Cow::Borrowed(&msg.ultrasonic_1)).into_owned(),
        ultrasonic_2: sensor_msgs::msg::Range::into_rmw_message(std::borrow::Cow::Borrowed(&msg.ultrasonic_2)).into_owned(),
        ultrasonic_3: sensor_msgs::msg::Range::into_rmw_message(std::borrow::Cow::Borrowed(&msg.ultrasonic_3)).into_owned(),
        ultrasonic_4: sensor_msgs::msg::Range::into_rmw_message(std::borrow::Cow::Borrowed(&msg.ultrasonic_4)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      ultrasonic_1: sensor_msgs::msg::Range::from_rmw_message(msg.ultrasonic_1),
      ultrasonic_2: sensor_msgs::msg::Range::from_rmw_message(msg.ultrasonic_2),
      ultrasonic_3: sensor_msgs::msg::Range::from_rmw_message(msg.ultrasonic_3),
      ultrasonic_4: sensor_msgs::msg::Range::from_rmw_message(msg.ultrasonic_4),
    }
  }
}


// Corresponds to iris_interfaces__msg__WaterTankLevels

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WaterTankLevels {

    // This member is not documented.
    #[allow(missing_docs)]
    pub fresh_water_tank_level: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dirty_water_tank_level: u8,

}



impl Default for WaterTankLevels {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::WaterTankLevels::default())
  }
}

impl rosidl_runtime_rs::Message for WaterTankLevels {
  type RmwMsg = super::msg::rmw::WaterTankLevels;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        fresh_water_tank_level: msg.fresh_water_tank_level,
        dirty_water_tank_level: msg.dirty_water_tank_level,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      fresh_water_tank_level: msg.fresh_water_tank_level,
      dirty_water_tank_level: msg.dirty_water_tank_level,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      fresh_water_tank_level: msg.fresh_water_tank_level,
      dirty_water_tank_level: msg.dirty_water_tank_level,
    }
  }
}


// Corresponds to iris_interfaces__msg__HeadbandMode

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HeadbandMode {

    // This member is not documented.
    #[allow(missing_docs)]
    pub width: f32,

}



impl Default for HeadbandMode {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::HeadbandMode::default())
  }
}

impl rosidl_runtime_rs::Message for HeadbandMode {
  type RmwMsg = super::msg::rmw::HeadbandMode;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        width: msg.width,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      width: msg.width,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      width: msg.width,
    }
  }
}


// Corresponds to iris_interfaces__msg__NavigationMode

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigationMode {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: std::string::String,

}

impl NavigationMode {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CLEAN: &'static str = "CLEAN";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const P2P: &'static str = "P2P";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const P2PANDCLEAN: &'static str = "P2PANDCLEAN";

}


impl Default for NavigationMode {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::NavigationMode::default())
  }
}

impl rosidl_runtime_rs::Message for NavigationMode {
  type RmwMsg = super::msg::rmw::NavigationMode;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mode: msg.mode.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mode: msg.mode.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      mode: msg.mode.to_string(),
    }
  }
}


// Corresponds to iris_interfaces__msg__FollowPathResult

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FollowPathResult {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: std::string::String,

}

impl FollowPathResult {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SUCCEEDED: &'static str = "SUCCEEDED";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ABORTED: &'static str = "ABORTED";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CANCELLED: &'static str = "CANCELLED";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const NONE: &'static str = "NONE";

}


impl Default for FollowPathResult {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::FollowPathResult::default())
  }
}

impl rosidl_runtime_rs::Message for FollowPathResult {
  type RmwMsg = super::msg::rmw::FollowPathResult;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: msg.result.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: msg.result.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: msg.result.to_string(),
    }
  }
}


// Corresponds to iris_interfaces__msg__OTAStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct OTAStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub system_software_info: super::msg::SystemSoftwareStatus,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mender_client_status: super::msg::MenderClientStatus,

}



impl Default for OTAStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::OTAStatus::default())
  }
}

impl rosidl_runtime_rs::Message for OTAStatus {
  type RmwMsg = super::msg::rmw::OTAStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        system_software_info: super::msg::SystemSoftwareStatus::into_rmw_message(std::borrow::Cow::Owned(msg.system_software_info)).into_owned(),
        mender_client_status: super::msg::MenderClientStatus::into_rmw_message(std::borrow::Cow::Owned(msg.mender_client_status)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        system_software_info: super::msg::SystemSoftwareStatus::into_rmw_message(std::borrow::Cow::Borrowed(&msg.system_software_info)).into_owned(),
        mender_client_status: super::msg::MenderClientStatus::into_rmw_message(std::borrow::Cow::Borrowed(&msg.mender_client_status)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      system_software_info: super::msg::SystemSoftwareStatus::from_rmw_message(msg.system_software_info),
      mender_client_status: super::msg::MenderClientStatus::from_rmw_message(msg.mender_client_status),
    }
  }
}


// Corresponds to iris_interfaces__msg__SystemSoftwareStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SystemSoftwareStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub current_software_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_boot_slot: std::string::String,

}



impl Default for SystemSoftwareStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SystemSoftwareStatus::default())
  }
}

impl rosidl_runtime_rs::Message for SystemSoftwareStatus {
  type RmwMsg = super::msg::rmw::SystemSoftwareStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        current_software_name: msg.current_software_name.as_str().into(),
        current_boot_slot: msg.current_boot_slot.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        current_software_name: msg.current_software_name.as_str().into(),
        current_boot_slot: msg.current_boot_slot.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      current_software_name: msg.current_software_name.to_string(),
      current_boot_slot: msg.current_boot_slot.to_string(),
    }
  }
}


// Corresponds to iris_interfaces__msg__MenderClientStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MenderClientStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub ota_client_state: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub last_sync_with_server: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub download_available: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub install_available: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reboot_required: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub update_status: std::string::String,

}



impl Default for MenderClientStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MenderClientStatus::default())
  }
}

impl rosidl_runtime_rs::Message for MenderClientStatus {
  type RmwMsg = super::msg::rmw::MenderClientStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        ota_client_state: msg.ota_client_state.as_str().into(),
        last_sync_with_server: msg.last_sync_with_server.as_str().into(),
        download_available: msg.download_available,
        install_available: msg.install_available,
        reboot_required: msg.reboot_required,
        update_status: msg.update_status.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        ota_client_state: msg.ota_client_state.as_str().into(),
        last_sync_with_server: msg.last_sync_with_server.as_str().into(),
      download_available: msg.download_available,
      install_available: msg.install_available,
      reboot_required: msg.reboot_required,
        update_status: msg.update_status.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      ota_client_state: msg.ota_client_state.to_string(),
      last_sync_with_server: msg.last_sync_with_server.to_string(),
      download_available: msg.download_available,
      install_available: msg.install_available,
      reboot_required: msg.reboot_required,
      update_status: msg.update_status.to_string(),
    }
  }
}


// Corresponds to iris_interfaces__msg__A5Status
/// This message is not used in A5 itself. Dummy as of now

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct A5Status {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mode_and_status: std::string::String,

}



impl Default for A5Status {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::A5Status::default())
  }
}

impl rosidl_runtime_rs::Message for A5Status {
  type RmwMsg = super::msg::rmw::A5Status;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mode_and_status: msg.mode_and_status.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mode_and_status: msg.mode_and_status.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      mode_and_status: msg.mode_and_status.to_string(),
    }
  }
}


// Corresponds to iris_interfaces__msg__LedControl
/// Led command could be any of the following:
/// OFF, BOOTUP_WAIT, STANDBY, RUNNING, ERROR

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LedControl {

    // This member is not documented.
    #[allow(missing_docs)]
    pub led_command: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub left_indicator: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub right_indicator: u8,

}

impl LedControl {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const OFF: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BOOTUP_WAIT: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STANDY: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RUNNING: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ERROR: u8 = 4;

}


impl Default for LedControl {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::LedControl::default())
  }
}

impl rosidl_runtime_rs::Message for LedControl {
  type RmwMsg = super::msg::rmw::LedControl;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        led_command: msg.led_command,
        left_indicator: msg.left_indicator,
        right_indicator: msg.right_indicator,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      led_command: msg.led_command,
      left_indicator: msg.left_indicator,
      right_indicator: msg.right_indicator,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      led_command: msg.led_command,
      left_indicator: msg.left_indicator,
      right_indicator: msg.right_indicator,
    }
  }
}


// Corresponds to iris_interfaces__msg__A2FunctionalStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct A2FunctionalStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub brush: super::msg::BrushStatus,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vacuum: super::msg::VacuumStatus,


    // This member is not documented.
    #[allow(missing_docs)]
    pub water_pump: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub detergent_pump: u8,

}



impl Default for A2FunctionalStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::A2FunctionalStatus::default())
  }
}

impl rosidl_runtime_rs::Message for A2FunctionalStatus {
  type RmwMsg = super::msg::rmw::A2FunctionalStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        brush: super::msg::BrushStatus::into_rmw_message(std::borrow::Cow::Owned(msg.brush)).into_owned(),
        vacuum: super::msg::VacuumStatus::into_rmw_message(std::borrow::Cow::Owned(msg.vacuum)).into_owned(),
        water_pump: msg.water_pump,
        detergent_pump: msg.detergent_pump,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        brush: super::msg::BrushStatus::into_rmw_message(std::borrow::Cow::Borrowed(&msg.brush)).into_owned(),
        vacuum: super::msg::VacuumStatus::into_rmw_message(std::borrow::Cow::Borrowed(&msg.vacuum)).into_owned(),
      water_pump: msg.water_pump,
      detergent_pump: msg.detergent_pump,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      brush: super::msg::BrushStatus::from_rmw_message(msg.brush),
      vacuum: super::msg::VacuumStatus::from_rmw_message(msg.vacuum),
      water_pump: msg.water_pump,
      detergent_pump: msg.detergent_pump,
    }
  }
}


// Corresponds to iris_interfaces__msg__A2Command

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct A2Command {

    // This member is not documented.
    #[allow(missing_docs)]
    pub pump_flow_rate: u8,

}



impl Default for A2Command {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::A2Command::default())
  }
}

impl rosidl_runtime_rs::Message for A2Command {
  type RmwMsg = super::msg::rmw::A2Command;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        pump_flow_rate: msg.pump_flow_rate,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      pump_flow_rate: msg.pump_flow_rate,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      pump_flow_rate: msg.pump_flow_rate,
    }
  }
}


// Corresponds to iris_interfaces__msg__VacuumStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VacuumStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub vacuum_motor_command: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vacuum_motor_status: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub squeeze_actuator: super::msg::ActuatorStatus,

}



impl Default for VacuumStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::VacuumStatus::default())
  }
}

impl rosidl_runtime_rs::Message for VacuumStatus {
  type RmwMsg = super::msg::rmw::VacuumStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        vacuum_motor_command: msg.vacuum_motor_command,
        vacuum_motor_status: msg.vacuum_motor_status,
        squeeze_actuator: super::msg::ActuatorStatus::into_rmw_message(std::borrow::Cow::Owned(msg.squeeze_actuator)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      vacuum_motor_command: msg.vacuum_motor_command,
      vacuum_motor_status: msg.vacuum_motor_status,
        squeeze_actuator: super::msg::ActuatorStatus::into_rmw_message(std::borrow::Cow::Borrowed(&msg.squeeze_actuator)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      vacuum_motor_command: msg.vacuum_motor_command,
      vacuum_motor_status: msg.vacuum_motor_status,
      squeeze_actuator: super::msg::ActuatorStatus::from_rmw_message(msg.squeeze_actuator),
    }
  }
}


// Corresponds to iris_interfaces__msg__VacuumFaults

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VacuumFaults {

    // This member is not documented.
    #[allow(missing_docs)]
    pub squeeze_actuator_digital_fault: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub drive_brush_current_digital_fault: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub overcurrent_analog_fault: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub undercurrent_analog_fault: u8,

}



impl Default for VacuumFaults {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::VacuumFaults::default())
  }
}

impl rosidl_runtime_rs::Message for VacuumFaults {
  type RmwMsg = super::msg::rmw::VacuumFaults;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        squeeze_actuator_digital_fault: msg.squeeze_actuator_digital_fault,
        drive_brush_current_digital_fault: msg.drive_brush_current_digital_fault,
        overcurrent_analog_fault: msg.overcurrent_analog_fault,
        undercurrent_analog_fault: msg.undercurrent_analog_fault,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      squeeze_actuator_digital_fault: msg.squeeze_actuator_digital_fault,
      drive_brush_current_digital_fault: msg.drive_brush_current_digital_fault,
      overcurrent_analog_fault: msg.overcurrent_analog_fault,
      undercurrent_analog_fault: msg.undercurrent_analog_fault,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      squeeze_actuator_digital_fault: msg.squeeze_actuator_digital_fault,
      drive_brush_current_digital_fault: msg.drive_brush_current_digital_fault,
      overcurrent_analog_fault: msg.overcurrent_analog_fault,
      undercurrent_analog_fault: msg.undercurrent_analog_fault,
    }
  }
}


// Corresponds to iris_interfaces__msg__BrushStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BrushStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub brush_motor_command: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub brush_motor_status: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub brush_actuator: super::msg::ActuatorStatus,

}



impl Default for BrushStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::BrushStatus::default())
  }
}

impl rosidl_runtime_rs::Message for BrushStatus {
  type RmwMsg = super::msg::rmw::BrushStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        brush_motor_command: msg.brush_motor_command,
        brush_motor_status: msg.brush_motor_status,
        brush_actuator: super::msg::ActuatorStatus::into_rmw_message(std::borrow::Cow::Owned(msg.brush_actuator)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      brush_motor_command: msg.brush_motor_command,
      brush_motor_status: msg.brush_motor_status,
        brush_actuator: super::msg::ActuatorStatus::into_rmw_message(std::borrow::Cow::Borrowed(&msg.brush_actuator)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      brush_motor_command: msg.brush_motor_command,
      brush_motor_status: msg.brush_motor_status,
      brush_actuator: super::msg::ActuatorStatus::from_rmw_message(msg.brush_actuator),
    }
  }
}


// Corresponds to iris_interfaces__msg__BrushFaults

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BrushFaults {

    // This member is not documented.
    #[allow(missing_docs)]
    pub actuator_digital_fault: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub drive_brush_current_digital_fault: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub overcurrent_analog_fault: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub temperature_fault: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub undercurrent_analog_fault: u8,

}



impl Default for BrushFaults {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::BrushFaults::default())
  }
}

impl rosidl_runtime_rs::Message for BrushFaults {
  type RmwMsg = super::msg::rmw::BrushFaults;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        actuator_digital_fault: msg.actuator_digital_fault,
        drive_brush_current_digital_fault: msg.drive_brush_current_digital_fault,
        overcurrent_analog_fault: msg.overcurrent_analog_fault,
        temperature_fault: msg.temperature_fault,
        undercurrent_analog_fault: msg.undercurrent_analog_fault,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      actuator_digital_fault: msg.actuator_digital_fault,
      drive_brush_current_digital_fault: msg.drive_brush_current_digital_fault,
      overcurrent_analog_fault: msg.overcurrent_analog_fault,
      temperature_fault: msg.temperature_fault,
      undercurrent_analog_fault: msg.undercurrent_analog_fault,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      actuator_digital_fault: msg.actuator_digital_fault,
      drive_brush_current_digital_fault: msg.drive_brush_current_digital_fault,
      overcurrent_analog_fault: msg.overcurrent_analog_fault,
      temperature_fault: msg.temperature_fault,
      undercurrent_analog_fault: msg.undercurrent_analog_fault,
    }
  }
}


// Corresponds to iris_interfaces__msg__A2FaultStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct A2FaultStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub a2_fault_status: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub brush: super::msg::BrushFaults,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vacuum: super::msg::VacuumFaults,


    // This member is not documented.
    #[allow(missing_docs)]
    pub water_pump_digital_fault: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub detergent_pump_digital_fault: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub brush_vacuum_motor_driver_digital_fault: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub water_and_detergent_pump_flow_fault: u8,

}



impl Default for A2FaultStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::A2FaultStatus::default())
  }
}

impl rosidl_runtime_rs::Message for A2FaultStatus {
  type RmwMsg = super::msg::rmw::A2FaultStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        a2_fault_status: msg.a2_fault_status,
        brush: super::msg::BrushFaults::into_rmw_message(std::borrow::Cow::Owned(msg.brush)).into_owned(),
        vacuum: super::msg::VacuumFaults::into_rmw_message(std::borrow::Cow::Owned(msg.vacuum)).into_owned(),
        water_pump_digital_fault: msg.water_pump_digital_fault,
        detergent_pump_digital_fault: msg.detergent_pump_digital_fault,
        brush_vacuum_motor_driver_digital_fault: msg.brush_vacuum_motor_driver_digital_fault,
        water_and_detergent_pump_flow_fault: msg.water_and_detergent_pump_flow_fault,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      a2_fault_status: msg.a2_fault_status,
        brush: super::msg::BrushFaults::into_rmw_message(std::borrow::Cow::Borrowed(&msg.brush)).into_owned(),
        vacuum: super::msg::VacuumFaults::into_rmw_message(std::borrow::Cow::Borrowed(&msg.vacuum)).into_owned(),
      water_pump_digital_fault: msg.water_pump_digital_fault,
      detergent_pump_digital_fault: msg.detergent_pump_digital_fault,
      brush_vacuum_motor_driver_digital_fault: msg.brush_vacuum_motor_driver_digital_fault,
      water_and_detergent_pump_flow_fault: msg.water_and_detergent_pump_flow_fault,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      a2_fault_status: msg.a2_fault_status,
      brush: super::msg::BrushFaults::from_rmw_message(msg.brush),
      vacuum: super::msg::VacuumFaults::from_rmw_message(msg.vacuum),
      water_pump_digital_fault: msg.water_pump_digital_fault,
      detergent_pump_digital_fault: msg.detergent_pump_digital_fault,
      brush_vacuum_motor_driver_digital_fault: msg.brush_vacuum_motor_driver_digital_fault,
      water_and_detergent_pump_flow_fault: msg.water_and_detergent_pump_flow_fault,
    }
  }
}


// Corresponds to iris_interfaces__msg__ActuatorStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ActuatorStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub moving_down: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub hold_down: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub moving_up: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub hold_up: u8,

}



impl Default for ActuatorStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ActuatorStatus::default())
  }
}

impl rosidl_runtime_rs::Message for ActuatorStatus {
  type RmwMsg = super::msg::rmw::ActuatorStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        moving_down: msg.moving_down,
        hold_down: msg.hold_down,
        moving_up: msg.moving_up,
        hold_up: msg.hold_up,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      moving_down: msg.moving_down,
      hold_down: msg.hold_down,
      moving_up: msg.moving_up,
      hold_up: msg.hold_up,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      moving_down: msg.moving_down,
      hold_down: msg.hold_down,
      moving_up: msg.moving_up,
      hold_up: msg.hold_up,
    }
  }
}


