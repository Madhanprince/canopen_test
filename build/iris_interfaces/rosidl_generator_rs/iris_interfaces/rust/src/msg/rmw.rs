#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__msg__WheelCommandSpeed() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__msg__WheelCommandSpeed__init(msg: *mut WheelCommandSpeed) -> bool;
    fn iris_interfaces__msg__WheelCommandSpeed__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<WheelCommandSpeed>, size: usize) -> bool;
    fn iris_interfaces__msg__WheelCommandSpeed__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<WheelCommandSpeed>);
    fn iris_interfaces__msg__WheelCommandSpeed__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<WheelCommandSpeed>, out_seq: *mut rosidl_runtime_rs::Sequence<WheelCommandSpeed>) -> bool;
}

// Corresponds to iris_interfaces__msg__WheelCommandSpeed
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__msg__WheelCommandSpeed__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__msg__WheelCommandSpeed__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for WheelCommandSpeed {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__WheelCommandSpeed__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__WheelCommandSpeed__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__WheelCommandSpeed__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for WheelCommandSpeed {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for WheelCommandSpeed where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/msg/WheelCommandSpeed";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__msg__WheelCommandSpeed() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__msg__WheelEncoders() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__msg__WheelEncoders__init(msg: *mut WheelEncoders) -> bool;
    fn iris_interfaces__msg__WheelEncoders__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<WheelEncoders>, size: usize) -> bool;
    fn iris_interfaces__msg__WheelEncoders__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<WheelEncoders>);
    fn iris_interfaces__msg__WheelEncoders__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<WheelEncoders>, out_seq: *mut rosidl_runtime_rs::Sequence<WheelEncoders>) -> bool;
}

// Corresponds to iris_interfaces__msg__WheelEncoders
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__msg__WheelEncoders__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__msg__WheelEncoders__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for WheelEncoders {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__WheelEncoders__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__WheelEncoders__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__WheelEncoders__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for WheelEncoders {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for WheelEncoders where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/msg/WheelEncoders";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__msg__WheelEncoders() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__msg__SensorStatus() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__msg__SensorStatus__init(msg: *mut SensorStatus) -> bool;
    fn iris_interfaces__msg__SensorStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SensorStatus>, size: usize) -> bool;
    fn iris_interfaces__msg__SensorStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SensorStatus>);
    fn iris_interfaces__msg__SensorStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SensorStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<SensorStatus>) -> bool;
}

// Corresponds to iris_interfaces__msg__SensorStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SensorStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub sensor_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sensor_robot_position: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sensor_status: rosidl_runtime_rs::String,


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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__msg__SensorStatus__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__msg__SensorStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SensorStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__SensorStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__SensorStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__SensorStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SensorStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SensorStatus where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/msg/SensorStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__msg__SensorStatus() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__msg__MotorStatus() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__msg__MotorStatus__init(msg: *mut MotorStatus) -> bool;
    fn iris_interfaces__msg__MotorStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MotorStatus>, size: usize) -> bool;
    fn iris_interfaces__msg__MotorStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MotorStatus>);
    fn iris_interfaces__msg__MotorStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MotorStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<MotorStatus>) -> bool;
}

// Corresponds to iris_interfaces__msg__MotorStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotorStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub brake_state: rosidl_runtime_rs::String,


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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__msg__MotorStatus__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__msg__MotorStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MotorStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__MotorStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__MotorStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__MotorStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MotorStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MotorStatus where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/msg/MotorStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__msg__MotorStatus() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__msg__MotorControllerStatus() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__msg__MotorControllerStatus__init(msg: *mut MotorControllerStatus) -> bool;
    fn iris_interfaces__msg__MotorControllerStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MotorControllerStatus>, size: usize) -> bool;
    fn iris_interfaces__msg__MotorControllerStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MotorControllerStatus>);
    fn iris_interfaces__msg__MotorControllerStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MotorControllerStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<MotorControllerStatus>) -> bool;
}

// Corresponds to iris_interfaces__msg__MotorControllerStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotorControllerStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub software_version: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub input_voltage: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub board_temperature: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sto_status: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub controller_alarm: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub controller_nmt_state: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub left_motor: super::super::msg::rmw::MotorStatus,


    // This member is not documented.
    #[allow(missing_docs)]
    pub right_motor: super::super::msg::rmw::MotorStatus,

}



impl Default for MotorControllerStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__msg__MotorControllerStatus__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__msg__MotorControllerStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MotorControllerStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__MotorControllerStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__MotorControllerStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__MotorControllerStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MotorControllerStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MotorControllerStatus where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/msg/MotorControllerStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__msg__MotorControllerStatus() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__msg__UltrasonicRanges() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__msg__UltrasonicRanges__init(msg: *mut UltrasonicRanges) -> bool;
    fn iris_interfaces__msg__UltrasonicRanges__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<UltrasonicRanges>, size: usize) -> bool;
    fn iris_interfaces__msg__UltrasonicRanges__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<UltrasonicRanges>);
    fn iris_interfaces__msg__UltrasonicRanges__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<UltrasonicRanges>, out_seq: *mut rosidl_runtime_rs::Sequence<UltrasonicRanges>) -> bool;
}

// Corresponds to iris_interfaces__msg__UltrasonicRanges
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// TODO: Rename the sensors w.r.t to position later on.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UltrasonicRanges {

    // This member is not documented.
    #[allow(missing_docs)]
    pub ultrasonic_1: sensor_msgs::msg::rmw::Range,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ultrasonic_2: sensor_msgs::msg::rmw::Range,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ultrasonic_3: sensor_msgs::msg::rmw::Range,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ultrasonic_4: sensor_msgs::msg::rmw::Range,

}



impl Default for UltrasonicRanges {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__msg__UltrasonicRanges__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__msg__UltrasonicRanges__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for UltrasonicRanges {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__UltrasonicRanges__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__UltrasonicRanges__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__UltrasonicRanges__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for UltrasonicRanges {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for UltrasonicRanges where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/msg/UltrasonicRanges";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__msg__UltrasonicRanges() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__msg__WaterTankLevels() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__msg__WaterTankLevels__init(msg: *mut WaterTankLevels) -> bool;
    fn iris_interfaces__msg__WaterTankLevels__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<WaterTankLevels>, size: usize) -> bool;
    fn iris_interfaces__msg__WaterTankLevels__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<WaterTankLevels>);
    fn iris_interfaces__msg__WaterTankLevels__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<WaterTankLevels>, out_seq: *mut rosidl_runtime_rs::Sequence<WaterTankLevels>) -> bool;
}

// Corresponds to iris_interfaces__msg__WaterTankLevels
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__msg__WaterTankLevels__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__msg__WaterTankLevels__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for WaterTankLevels {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__WaterTankLevels__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__WaterTankLevels__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__WaterTankLevels__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for WaterTankLevels {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for WaterTankLevels where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/msg/WaterTankLevels";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__msg__WaterTankLevels() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__msg__HeadbandMode() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__msg__HeadbandMode__init(msg: *mut HeadbandMode) -> bool;
    fn iris_interfaces__msg__HeadbandMode__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<HeadbandMode>, size: usize) -> bool;
    fn iris_interfaces__msg__HeadbandMode__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<HeadbandMode>);
    fn iris_interfaces__msg__HeadbandMode__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<HeadbandMode>, out_seq: *mut rosidl_runtime_rs::Sequence<HeadbandMode>) -> bool;
}

// Corresponds to iris_interfaces__msg__HeadbandMode
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HeadbandMode {

    // This member is not documented.
    #[allow(missing_docs)]
    pub width: f32,

}



impl Default for HeadbandMode {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__msg__HeadbandMode__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__msg__HeadbandMode__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for HeadbandMode {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__HeadbandMode__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__HeadbandMode__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__HeadbandMode__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for HeadbandMode {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for HeadbandMode where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/msg/HeadbandMode";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__msg__HeadbandMode() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__msg__NavigationMode() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__msg__NavigationMode__init(msg: *mut NavigationMode) -> bool;
    fn iris_interfaces__msg__NavigationMode__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigationMode>, size: usize) -> bool;
    fn iris_interfaces__msg__NavigationMode__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigationMode>);
    fn iris_interfaces__msg__NavigationMode__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigationMode>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigationMode>) -> bool;
}

// Corresponds to iris_interfaces__msg__NavigationMode
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigationMode {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: rosidl_runtime_rs::String,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__msg__NavigationMode__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__msg__NavigationMode__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigationMode {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__NavigationMode__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__NavigationMode__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__NavigationMode__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigationMode {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigationMode where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/msg/NavigationMode";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__msg__NavigationMode() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__msg__FollowPathResult() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__msg__FollowPathResult__init(msg: *mut FollowPathResult) -> bool;
    fn iris_interfaces__msg__FollowPathResult__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<FollowPathResult>, size: usize) -> bool;
    fn iris_interfaces__msg__FollowPathResult__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<FollowPathResult>);
    fn iris_interfaces__msg__FollowPathResult__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<FollowPathResult>, out_seq: *mut rosidl_runtime_rs::Sequence<FollowPathResult>) -> bool;
}

// Corresponds to iris_interfaces__msg__FollowPathResult
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FollowPathResult {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: rosidl_runtime_rs::String,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__msg__FollowPathResult__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__msg__FollowPathResult__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for FollowPathResult {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__FollowPathResult__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__FollowPathResult__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__FollowPathResult__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for FollowPathResult {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for FollowPathResult where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/msg/FollowPathResult";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__msg__FollowPathResult() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__msg__OTAStatus() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__msg__OTAStatus__init(msg: *mut OTAStatus) -> bool;
    fn iris_interfaces__msg__OTAStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<OTAStatus>, size: usize) -> bool;
    fn iris_interfaces__msg__OTAStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<OTAStatus>);
    fn iris_interfaces__msg__OTAStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<OTAStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<OTAStatus>) -> bool;
}

// Corresponds to iris_interfaces__msg__OTAStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct OTAStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub system_software_info: super::super::msg::rmw::SystemSoftwareStatus,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mender_client_status: super::super::msg::rmw::MenderClientStatus,

}



impl Default for OTAStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__msg__OTAStatus__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__msg__OTAStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for OTAStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__OTAStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__OTAStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__OTAStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for OTAStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for OTAStatus where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/msg/OTAStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__msg__OTAStatus() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__msg__SystemSoftwareStatus() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__msg__SystemSoftwareStatus__init(msg: *mut SystemSoftwareStatus) -> bool;
    fn iris_interfaces__msg__SystemSoftwareStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SystemSoftwareStatus>, size: usize) -> bool;
    fn iris_interfaces__msg__SystemSoftwareStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SystemSoftwareStatus>);
    fn iris_interfaces__msg__SystemSoftwareStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SystemSoftwareStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<SystemSoftwareStatus>) -> bool;
}

// Corresponds to iris_interfaces__msg__SystemSoftwareStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SystemSoftwareStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub current_software_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_boot_slot: rosidl_runtime_rs::String,

}



impl Default for SystemSoftwareStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__msg__SystemSoftwareStatus__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__msg__SystemSoftwareStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SystemSoftwareStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__SystemSoftwareStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__SystemSoftwareStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__SystemSoftwareStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SystemSoftwareStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SystemSoftwareStatus where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/msg/SystemSoftwareStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__msg__SystemSoftwareStatus() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__msg__MenderClientStatus() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__msg__MenderClientStatus__init(msg: *mut MenderClientStatus) -> bool;
    fn iris_interfaces__msg__MenderClientStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MenderClientStatus>, size: usize) -> bool;
    fn iris_interfaces__msg__MenderClientStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MenderClientStatus>);
    fn iris_interfaces__msg__MenderClientStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MenderClientStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<MenderClientStatus>) -> bool;
}

// Corresponds to iris_interfaces__msg__MenderClientStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MenderClientStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub ota_client_state: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub last_sync_with_server: rosidl_runtime_rs::String,


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
    pub update_status: rosidl_runtime_rs::String,

}



impl Default for MenderClientStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__msg__MenderClientStatus__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__msg__MenderClientStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MenderClientStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__MenderClientStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__MenderClientStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__MenderClientStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MenderClientStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MenderClientStatus where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/msg/MenderClientStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__msg__MenderClientStatus() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__msg__A5Status() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__msg__A5Status__init(msg: *mut A5Status) -> bool;
    fn iris_interfaces__msg__A5Status__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<A5Status>, size: usize) -> bool;
    fn iris_interfaces__msg__A5Status__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<A5Status>);
    fn iris_interfaces__msg__A5Status__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<A5Status>, out_seq: *mut rosidl_runtime_rs::Sequence<A5Status>) -> bool;
}

// Corresponds to iris_interfaces__msg__A5Status
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// This message is not used in A5 itself. Dummy as of now

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct A5Status {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mode_and_status: rosidl_runtime_rs::String,

}



impl Default for A5Status {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__msg__A5Status__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__msg__A5Status__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for A5Status {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__A5Status__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__A5Status__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__A5Status__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for A5Status {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for A5Status where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/msg/A5Status";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__msg__A5Status() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__msg__LedControl() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__msg__LedControl__init(msg: *mut LedControl) -> bool;
    fn iris_interfaces__msg__LedControl__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LedControl>, size: usize) -> bool;
    fn iris_interfaces__msg__LedControl__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LedControl>);
    fn iris_interfaces__msg__LedControl__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LedControl>, out_seq: *mut rosidl_runtime_rs::Sequence<LedControl>) -> bool;
}

// Corresponds to iris_interfaces__msg__LedControl
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Led command could be any of the following:
/// OFF, BOOTUP_WAIT, STANDBY, RUNNING, ERROR

#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__msg__LedControl__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__msg__LedControl__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LedControl {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__LedControl__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__LedControl__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__LedControl__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LedControl {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LedControl where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/msg/LedControl";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__msg__LedControl() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__msg__A2FunctionalStatus() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__msg__A2FunctionalStatus__init(msg: *mut A2FunctionalStatus) -> bool;
    fn iris_interfaces__msg__A2FunctionalStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<A2FunctionalStatus>, size: usize) -> bool;
    fn iris_interfaces__msg__A2FunctionalStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<A2FunctionalStatus>);
    fn iris_interfaces__msg__A2FunctionalStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<A2FunctionalStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<A2FunctionalStatus>) -> bool;
}

// Corresponds to iris_interfaces__msg__A2FunctionalStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct A2FunctionalStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub brush: super::super::msg::rmw::BrushStatus,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vacuum: super::super::msg::rmw::VacuumStatus,


    // This member is not documented.
    #[allow(missing_docs)]
    pub water_pump: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub detergent_pump: u8,

}



impl Default for A2FunctionalStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__msg__A2FunctionalStatus__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__msg__A2FunctionalStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for A2FunctionalStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__A2FunctionalStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__A2FunctionalStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__A2FunctionalStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for A2FunctionalStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for A2FunctionalStatus where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/msg/A2FunctionalStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__msg__A2FunctionalStatus() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__msg__A2Command() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__msg__A2Command__init(msg: *mut A2Command) -> bool;
    fn iris_interfaces__msg__A2Command__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<A2Command>, size: usize) -> bool;
    fn iris_interfaces__msg__A2Command__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<A2Command>);
    fn iris_interfaces__msg__A2Command__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<A2Command>, out_seq: *mut rosidl_runtime_rs::Sequence<A2Command>) -> bool;
}

// Corresponds to iris_interfaces__msg__A2Command
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct A2Command {

    // This member is not documented.
    #[allow(missing_docs)]
    pub pump_flow_rate: u8,

}



impl Default for A2Command {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__msg__A2Command__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__msg__A2Command__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for A2Command {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__A2Command__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__A2Command__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__A2Command__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for A2Command {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for A2Command where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/msg/A2Command";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__msg__A2Command() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__msg__VacuumStatus() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__msg__VacuumStatus__init(msg: *mut VacuumStatus) -> bool;
    fn iris_interfaces__msg__VacuumStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<VacuumStatus>, size: usize) -> bool;
    fn iris_interfaces__msg__VacuumStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<VacuumStatus>);
    fn iris_interfaces__msg__VacuumStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<VacuumStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<VacuumStatus>) -> bool;
}

// Corresponds to iris_interfaces__msg__VacuumStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
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
    pub squeeze_actuator: super::super::msg::rmw::ActuatorStatus,

}



impl Default for VacuumStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__msg__VacuumStatus__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__msg__VacuumStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for VacuumStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__VacuumStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__VacuumStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__VacuumStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for VacuumStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for VacuumStatus where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/msg/VacuumStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__msg__VacuumStatus() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__msg__VacuumFaults() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__msg__VacuumFaults__init(msg: *mut VacuumFaults) -> bool;
    fn iris_interfaces__msg__VacuumFaults__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<VacuumFaults>, size: usize) -> bool;
    fn iris_interfaces__msg__VacuumFaults__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<VacuumFaults>);
    fn iris_interfaces__msg__VacuumFaults__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<VacuumFaults>, out_seq: *mut rosidl_runtime_rs::Sequence<VacuumFaults>) -> bool;
}

// Corresponds to iris_interfaces__msg__VacuumFaults
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__msg__VacuumFaults__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__msg__VacuumFaults__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for VacuumFaults {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__VacuumFaults__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__VacuumFaults__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__VacuumFaults__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for VacuumFaults {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for VacuumFaults where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/msg/VacuumFaults";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__msg__VacuumFaults() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__msg__BrushStatus() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__msg__BrushStatus__init(msg: *mut BrushStatus) -> bool;
    fn iris_interfaces__msg__BrushStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<BrushStatus>, size: usize) -> bool;
    fn iris_interfaces__msg__BrushStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<BrushStatus>);
    fn iris_interfaces__msg__BrushStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<BrushStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<BrushStatus>) -> bool;
}

// Corresponds to iris_interfaces__msg__BrushStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
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
    pub brush_actuator: super::super::msg::rmw::ActuatorStatus,

}



impl Default for BrushStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__msg__BrushStatus__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__msg__BrushStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for BrushStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__BrushStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__BrushStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__BrushStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for BrushStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for BrushStatus where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/msg/BrushStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__msg__BrushStatus() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__msg__BrushFaults() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__msg__BrushFaults__init(msg: *mut BrushFaults) -> bool;
    fn iris_interfaces__msg__BrushFaults__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<BrushFaults>, size: usize) -> bool;
    fn iris_interfaces__msg__BrushFaults__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<BrushFaults>);
    fn iris_interfaces__msg__BrushFaults__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<BrushFaults>, out_seq: *mut rosidl_runtime_rs::Sequence<BrushFaults>) -> bool;
}

// Corresponds to iris_interfaces__msg__BrushFaults
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__msg__BrushFaults__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__msg__BrushFaults__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for BrushFaults {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__BrushFaults__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__BrushFaults__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__BrushFaults__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for BrushFaults {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for BrushFaults where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/msg/BrushFaults";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__msg__BrushFaults() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__msg__A2FaultStatus() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__msg__A2FaultStatus__init(msg: *mut A2FaultStatus) -> bool;
    fn iris_interfaces__msg__A2FaultStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<A2FaultStatus>, size: usize) -> bool;
    fn iris_interfaces__msg__A2FaultStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<A2FaultStatus>);
    fn iris_interfaces__msg__A2FaultStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<A2FaultStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<A2FaultStatus>) -> bool;
}

// Corresponds to iris_interfaces__msg__A2FaultStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct A2FaultStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub a2_fault_status: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub brush: super::super::msg::rmw::BrushFaults,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vacuum: super::super::msg::rmw::VacuumFaults,


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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__msg__A2FaultStatus__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__msg__A2FaultStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for A2FaultStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__A2FaultStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__A2FaultStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__A2FaultStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for A2FaultStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for A2FaultStatus where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/msg/A2FaultStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__msg__A2FaultStatus() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__msg__ActuatorStatus() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__msg__ActuatorStatus__init(msg: *mut ActuatorStatus) -> bool;
    fn iris_interfaces__msg__ActuatorStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ActuatorStatus>, size: usize) -> bool;
    fn iris_interfaces__msg__ActuatorStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ActuatorStatus>);
    fn iris_interfaces__msg__ActuatorStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ActuatorStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<ActuatorStatus>) -> bool;
}

// Corresponds to iris_interfaces__msg__ActuatorStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__msg__ActuatorStatus__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__msg__ActuatorStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ActuatorStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__ActuatorStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__ActuatorStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__msg__ActuatorStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ActuatorStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ActuatorStatus where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/msg/ActuatorStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__msg__ActuatorStatus() }
  }
}


