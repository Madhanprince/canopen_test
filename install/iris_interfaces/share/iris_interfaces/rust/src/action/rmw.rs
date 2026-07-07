
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__action__ComputePathCoverage_Goal() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__action__ComputePathCoverage_Goal__init(msg: *mut ComputePathCoverage_Goal) -> bool;
    fn iris_interfaces__action__ComputePathCoverage_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ComputePathCoverage_Goal>, size: usize) -> bool;
    fn iris_interfaces__action__ComputePathCoverage_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ComputePathCoverage_Goal>);
    fn iris_interfaces__action__ComputePathCoverage_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ComputePathCoverage_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<ComputePathCoverage_Goal>) -> bool;
}

// Corresponds to iris_interfaces__action__ComputePathCoverage_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ComputePathCoverage_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub generate_headband: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub frame_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub polygon: geometry_msgs::msg::rmw::Polygon,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_pose: geometry_msgs::msg::rmw::PoseStamped,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reached_start: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: super::super::msg::rmw::NavigationMode,


    // This member is not documented.
    #[allow(missing_docs)]
    pub headband_mode: super::super::msg::rmw::HeadbandMode,

}



impl Default for ComputePathCoverage_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__action__ComputePathCoverage_Goal__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__action__ComputePathCoverage_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ComputePathCoverage_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__ComputePathCoverage_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__ComputePathCoverage_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__ComputePathCoverage_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ComputePathCoverage_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ComputePathCoverage_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/action/ComputePathCoverage_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__action__ComputePathCoverage_Goal() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__action__ComputePathCoverage_Result() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__action__ComputePathCoverage_Result__init(msg: *mut ComputePathCoverage_Result) -> bool;
    fn iris_interfaces__action__ComputePathCoverage_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ComputePathCoverage_Result>, size: usize) -> bool;
    fn iris_interfaces__action__ComputePathCoverage_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ComputePathCoverage_Result>);
    fn iris_interfaces__action__ComputePathCoverage_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ComputePathCoverage_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<ComputePathCoverage_Result>) -> bool;
}

// Corresponds to iris_interfaces__action__ComputePathCoverage_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ComputePathCoverage_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: super::super::msg::rmw::NavigationMode,


    // This member is not documented.
    #[allow(missing_docs)]
    pub start_pose: geometry_msgs::msg::rmw::PoseStamped,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cleaning_path: nav_msgs::msg::rmw::Path,


    // This member is not documented.
    #[allow(missing_docs)]
    pub edge_cleaning_path: nav_msgs::msg::rmw::Path,


    // This member is not documented.
    #[allow(missing_docs)]
    pub planning_time: builtin_interfaces::msg::rmw::Duration,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub resolution: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub velocities: rosidl_runtime_rs::Sequence<f32>,

}

impl ComputePathCoverage_Result {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const NONE: u16 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const INVALID_POLYGON_POINTS: u16 = 1000;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SWATH_GENERATION_FAILED: u16 = 1001;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ROUTE_GENERATION_FAILED: u16 = 1002;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PATH_GENERATION_FAILED: u16 = 1003;

}


impl Default for ComputePathCoverage_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__action__ComputePathCoverage_Result__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__action__ComputePathCoverage_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ComputePathCoverage_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__ComputePathCoverage_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__ComputePathCoverage_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__ComputePathCoverage_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ComputePathCoverage_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ComputePathCoverage_Result where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/action/ComputePathCoverage_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__action__ComputePathCoverage_Result() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__action__ComputePathCoverage_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__action__ComputePathCoverage_Feedback__init(msg: *mut ComputePathCoverage_Feedback) -> bool;
    fn iris_interfaces__action__ComputePathCoverage_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ComputePathCoverage_Feedback>, size: usize) -> bool;
    fn iris_interfaces__action__ComputePathCoverage_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ComputePathCoverage_Feedback>);
    fn iris_interfaces__action__ComputePathCoverage_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ComputePathCoverage_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<ComputePathCoverage_Feedback>) -> bool;
}

// Corresponds to iris_interfaces__action__ComputePathCoverage_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ComputePathCoverage_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for ComputePathCoverage_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__action__ComputePathCoverage_Feedback__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__action__ComputePathCoverage_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ComputePathCoverage_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__ComputePathCoverage_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__ComputePathCoverage_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__ComputePathCoverage_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ComputePathCoverage_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ComputePathCoverage_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/action/ComputePathCoverage_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__action__ComputePathCoverage_Feedback() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__action__ComputePathCoverage_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__action__ComputePathCoverage_FeedbackMessage__init(msg: *mut ComputePathCoverage_FeedbackMessage) -> bool;
    fn iris_interfaces__action__ComputePathCoverage_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ComputePathCoverage_FeedbackMessage>, size: usize) -> bool;
    fn iris_interfaces__action__ComputePathCoverage_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ComputePathCoverage_FeedbackMessage>);
    fn iris_interfaces__action__ComputePathCoverage_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ComputePathCoverage_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<ComputePathCoverage_FeedbackMessage>) -> bool;
}

// Corresponds to iris_interfaces__action__ComputePathCoverage_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ComputePathCoverage_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::ComputePathCoverage_Feedback,

}



impl Default for ComputePathCoverage_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__action__ComputePathCoverage_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__action__ComputePathCoverage_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ComputePathCoverage_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__ComputePathCoverage_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__ComputePathCoverage_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__ComputePathCoverage_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ComputePathCoverage_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ComputePathCoverage_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/action/ComputePathCoverage_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__action__ComputePathCoverage_FeedbackMessage() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__action__NavigatePathCoverage_Goal() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__action__NavigatePathCoverage_Goal__init(msg: *mut NavigatePathCoverage_Goal) -> bool;
    fn iris_interfaces__action__NavigatePathCoverage_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigatePathCoverage_Goal>, size: usize) -> bool;
    fn iris_interfaces__action__NavigatePathCoverage_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigatePathCoverage_Goal>);
    fn iris_interfaces__action__NavigatePathCoverage_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigatePathCoverage_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigatePathCoverage_Goal>) -> bool;
}

// Corresponds to iris_interfaces__action__NavigatePathCoverage_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigatePathCoverage_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub polygon_frame_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub polygon: geometry_msgs::msg::rmw::Polygon,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_pose: geometry_msgs::msg::rmw::PoseStamped,


    // This member is not documented.
    #[allow(missing_docs)]
    pub behavior_tree: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: super::super::msg::rmw::NavigationMode,

}



impl Default for NavigatePathCoverage_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__action__NavigatePathCoverage_Goal__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__action__NavigatePathCoverage_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigatePathCoverage_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__NavigatePathCoverage_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__NavigatePathCoverage_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__NavigatePathCoverage_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigatePathCoverage_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigatePathCoverage_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/action/NavigatePathCoverage_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__action__NavigatePathCoverage_Goal() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__action__NavigatePathCoverage_Result() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__action__NavigatePathCoverage_Result__init(msg: *mut NavigatePathCoverage_Result) -> bool;
    fn iris_interfaces__action__NavigatePathCoverage_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigatePathCoverage_Result>, size: usize) -> bool;
    fn iris_interfaces__action__NavigatePathCoverage_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigatePathCoverage_Result>);
    fn iris_interfaces__action__NavigatePathCoverage_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigatePathCoverage_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigatePathCoverage_Result>) -> bool;
}

// Corresponds to iris_interfaces__action__NavigatePathCoverage_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigatePathCoverage_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: u16,

}

impl NavigatePathCoverage_Result {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const NONE: u16 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const INVALID_POLYGON_POINTS: u16 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const INVALID_COORD_POINTS: u16 = 2;

}


impl Default for NavigatePathCoverage_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__action__NavigatePathCoverage_Result__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__action__NavigatePathCoverage_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigatePathCoverage_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__NavigatePathCoverage_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__NavigatePathCoverage_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__NavigatePathCoverage_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigatePathCoverage_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigatePathCoverage_Result where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/action/NavigatePathCoverage_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__action__NavigatePathCoverage_Result() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__action__NavigatePathCoverage_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__action__NavigatePathCoverage_Feedback__init(msg: *mut NavigatePathCoverage_Feedback) -> bool;
    fn iris_interfaces__action__NavigatePathCoverage_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigatePathCoverage_Feedback>, size: usize) -> bool;
    fn iris_interfaces__action__NavigatePathCoverage_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigatePathCoverage_Feedback>);
    fn iris_interfaces__action__NavigatePathCoverage_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigatePathCoverage_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigatePathCoverage_Feedback>) -> bool;
}

// Corresponds to iris_interfaces__action__NavigatePathCoverage_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigatePathCoverage_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub current_pose: geometry_msgs::msg::rmw::PoseStamped,


    // This member is not documented.
    #[allow(missing_docs)]
    pub navigation_time: builtin_interfaces::msg::rmw::Duration,


    // This member is not documented.
    #[allow(missing_docs)]
    pub estimated_time_remaining: builtin_interfaces::msg::rmw::Duration,


    // This member is not documented.
    #[allow(missing_docs)]
    pub distance_remaining: f32,

}



impl Default for NavigatePathCoverage_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__action__NavigatePathCoverage_Feedback__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__action__NavigatePathCoverage_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigatePathCoverage_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__NavigatePathCoverage_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__NavigatePathCoverage_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__NavigatePathCoverage_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigatePathCoverage_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigatePathCoverage_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/action/NavigatePathCoverage_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__action__NavigatePathCoverage_Feedback() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__action__NavigatePathCoverage_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__action__NavigatePathCoverage_FeedbackMessage__init(msg: *mut NavigatePathCoverage_FeedbackMessage) -> bool;
    fn iris_interfaces__action__NavigatePathCoverage_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigatePathCoverage_FeedbackMessage>, size: usize) -> bool;
    fn iris_interfaces__action__NavigatePathCoverage_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigatePathCoverage_FeedbackMessage>);
    fn iris_interfaces__action__NavigatePathCoverage_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigatePathCoverage_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigatePathCoverage_FeedbackMessage>) -> bool;
}

// Corresponds to iris_interfaces__action__NavigatePathCoverage_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigatePathCoverage_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::NavigatePathCoverage_Feedback,

}



impl Default for NavigatePathCoverage_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__action__NavigatePathCoverage_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__action__NavigatePathCoverage_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigatePathCoverage_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__NavigatePathCoverage_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__NavigatePathCoverage_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__NavigatePathCoverage_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigatePathCoverage_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigatePathCoverage_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/action/NavigatePathCoverage_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__action__NavigatePathCoverage_FeedbackMessage() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__action__PathCoverageController_Goal() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__action__PathCoverageController_Goal__init(msg: *mut PathCoverageController_Goal) -> bool;
    fn iris_interfaces__action__PathCoverageController_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PathCoverageController_Goal>, size: usize) -> bool;
    fn iris_interfaces__action__PathCoverageController_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PathCoverageController_Goal>);
    fn iris_interfaces__action__PathCoverageController_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PathCoverageController_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<PathCoverageController_Goal>) -> bool;
}

// Corresponds to iris_interfaces__action__PathCoverageController_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PathCoverageController_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub resolution: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub velocities: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cleaning_point: nav_msgs::msg::rmw::Path,


    // This member is not documented.
    #[allow(missing_docs)]
    pub edge_cleaning_point: nav_msgs::msg::rmw::Path,

}



impl Default for PathCoverageController_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__action__PathCoverageController_Goal__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__action__PathCoverageController_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PathCoverageController_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__PathCoverageController_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__PathCoverageController_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__PathCoverageController_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PathCoverageController_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PathCoverageController_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/action/PathCoverageController_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__action__PathCoverageController_Goal() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__action__PathCoverageController_Result() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__action__PathCoverageController_Result__init(msg: *mut PathCoverageController_Result) -> bool;
    fn iris_interfaces__action__PathCoverageController_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PathCoverageController_Result>, size: usize) -> bool;
    fn iris_interfaces__action__PathCoverageController_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PathCoverageController_Result>);
    fn iris_interfaces__action__PathCoverageController_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PathCoverageController_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<PathCoverageController_Result>) -> bool;
}

// Corresponds to iris_interfaces__action__PathCoverageController_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PathCoverageController_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: u16,

}

impl PathCoverageController_Result {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const NONE: u16 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PATH_GENERATION_FAILED: u16 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTROL_GENERATION_FAILED: u16 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const NO_CLEANING_POINT: u16 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CANCELLATION_REQUESTED: u16 = 4;

}


impl Default for PathCoverageController_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__action__PathCoverageController_Result__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__action__PathCoverageController_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PathCoverageController_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__PathCoverageController_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__PathCoverageController_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__PathCoverageController_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PathCoverageController_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PathCoverageController_Result where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/action/PathCoverageController_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__action__PathCoverageController_Result() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__action__PathCoverageController_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__action__PathCoverageController_Feedback__init(msg: *mut PathCoverageController_Feedback) -> bool;
    fn iris_interfaces__action__PathCoverageController_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PathCoverageController_Feedback>, size: usize) -> bool;
    fn iris_interfaces__action__PathCoverageController_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PathCoverageController_Feedback>);
    fn iris_interfaces__action__PathCoverageController_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PathCoverageController_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<PathCoverageController_Feedback>) -> bool;
}

// Corresponds to iris_interfaces__action__PathCoverageController_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PathCoverageController_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub current_target_pose: geometry_msgs::msg::rmw::PoseStamped,


    // This member is not documented.
    #[allow(missing_docs)]
    pub navigation_time: builtin_interfaces::msg::rmw::Duration,


    // This member is not documented.
    #[allow(missing_docs)]
    pub estimated_time_remaining: builtin_interfaces::msg::rmw::Duration,


    // This member is not documented.
    #[allow(missing_docs)]
    pub distance_remaining: f32,

}



impl Default for PathCoverageController_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__action__PathCoverageController_Feedback__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__action__PathCoverageController_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PathCoverageController_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__PathCoverageController_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__PathCoverageController_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__PathCoverageController_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PathCoverageController_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PathCoverageController_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/action/PathCoverageController_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__action__PathCoverageController_Feedback() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__action__PathCoverageController_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__action__PathCoverageController_FeedbackMessage__init(msg: *mut PathCoverageController_FeedbackMessage) -> bool;
    fn iris_interfaces__action__PathCoverageController_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PathCoverageController_FeedbackMessage>, size: usize) -> bool;
    fn iris_interfaces__action__PathCoverageController_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PathCoverageController_FeedbackMessage>);
    fn iris_interfaces__action__PathCoverageController_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PathCoverageController_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<PathCoverageController_FeedbackMessage>) -> bool;
}

// Corresponds to iris_interfaces__action__PathCoverageController_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PathCoverageController_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::PathCoverageController_Feedback,

}



impl Default for PathCoverageController_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__action__PathCoverageController_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__action__PathCoverageController_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PathCoverageController_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__PathCoverageController_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__PathCoverageController_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__PathCoverageController_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PathCoverageController_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PathCoverageController_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/action/PathCoverageController_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__action__PathCoverageController_FeedbackMessage() }
  }
}




#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__action__ComputePathCoverage_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__action__ComputePathCoverage_SendGoal_Request__init(msg: *mut ComputePathCoverage_SendGoal_Request) -> bool;
    fn iris_interfaces__action__ComputePathCoverage_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ComputePathCoverage_SendGoal_Request>, size: usize) -> bool;
    fn iris_interfaces__action__ComputePathCoverage_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ComputePathCoverage_SendGoal_Request>);
    fn iris_interfaces__action__ComputePathCoverage_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ComputePathCoverage_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ComputePathCoverage_SendGoal_Request>) -> bool;
}

// Corresponds to iris_interfaces__action__ComputePathCoverage_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ComputePathCoverage_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::ComputePathCoverage_Goal,

}



impl Default for ComputePathCoverage_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__action__ComputePathCoverage_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__action__ComputePathCoverage_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ComputePathCoverage_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__ComputePathCoverage_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__ComputePathCoverage_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__ComputePathCoverage_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ComputePathCoverage_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ComputePathCoverage_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/action/ComputePathCoverage_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__action__ComputePathCoverage_SendGoal_Request() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__action__ComputePathCoverage_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__action__ComputePathCoverage_SendGoal_Response__init(msg: *mut ComputePathCoverage_SendGoal_Response) -> bool;
    fn iris_interfaces__action__ComputePathCoverage_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ComputePathCoverage_SendGoal_Response>, size: usize) -> bool;
    fn iris_interfaces__action__ComputePathCoverage_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ComputePathCoverage_SendGoal_Response>);
    fn iris_interfaces__action__ComputePathCoverage_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ComputePathCoverage_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ComputePathCoverage_SendGoal_Response>) -> bool;
}

// Corresponds to iris_interfaces__action__ComputePathCoverage_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ComputePathCoverage_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for ComputePathCoverage_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__action__ComputePathCoverage_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__action__ComputePathCoverage_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ComputePathCoverage_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__ComputePathCoverage_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__ComputePathCoverage_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__ComputePathCoverage_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ComputePathCoverage_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ComputePathCoverage_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/action/ComputePathCoverage_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__action__ComputePathCoverage_SendGoal_Response() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__action__ComputePathCoverage_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__action__ComputePathCoverage_GetResult_Request__init(msg: *mut ComputePathCoverage_GetResult_Request) -> bool;
    fn iris_interfaces__action__ComputePathCoverage_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ComputePathCoverage_GetResult_Request>, size: usize) -> bool;
    fn iris_interfaces__action__ComputePathCoverage_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ComputePathCoverage_GetResult_Request>);
    fn iris_interfaces__action__ComputePathCoverage_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ComputePathCoverage_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ComputePathCoverage_GetResult_Request>) -> bool;
}

// Corresponds to iris_interfaces__action__ComputePathCoverage_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ComputePathCoverage_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for ComputePathCoverage_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__action__ComputePathCoverage_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__action__ComputePathCoverage_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ComputePathCoverage_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__ComputePathCoverage_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__ComputePathCoverage_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__ComputePathCoverage_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ComputePathCoverage_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ComputePathCoverage_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/action/ComputePathCoverage_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__action__ComputePathCoverage_GetResult_Request() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__action__ComputePathCoverage_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__action__ComputePathCoverage_GetResult_Response__init(msg: *mut ComputePathCoverage_GetResult_Response) -> bool;
    fn iris_interfaces__action__ComputePathCoverage_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ComputePathCoverage_GetResult_Response>, size: usize) -> bool;
    fn iris_interfaces__action__ComputePathCoverage_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ComputePathCoverage_GetResult_Response>);
    fn iris_interfaces__action__ComputePathCoverage_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ComputePathCoverage_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ComputePathCoverage_GetResult_Response>) -> bool;
}

// Corresponds to iris_interfaces__action__ComputePathCoverage_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ComputePathCoverage_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::ComputePathCoverage_Result,

}



impl Default for ComputePathCoverage_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__action__ComputePathCoverage_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__action__ComputePathCoverage_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ComputePathCoverage_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__ComputePathCoverage_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__ComputePathCoverage_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__ComputePathCoverage_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ComputePathCoverage_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ComputePathCoverage_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/action/ComputePathCoverage_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__action__ComputePathCoverage_GetResult_Response() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__action__NavigatePathCoverage_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__action__NavigatePathCoverage_SendGoal_Request__init(msg: *mut NavigatePathCoverage_SendGoal_Request) -> bool;
    fn iris_interfaces__action__NavigatePathCoverage_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigatePathCoverage_SendGoal_Request>, size: usize) -> bool;
    fn iris_interfaces__action__NavigatePathCoverage_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigatePathCoverage_SendGoal_Request>);
    fn iris_interfaces__action__NavigatePathCoverage_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigatePathCoverage_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigatePathCoverage_SendGoal_Request>) -> bool;
}

// Corresponds to iris_interfaces__action__NavigatePathCoverage_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigatePathCoverage_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::NavigatePathCoverage_Goal,

}



impl Default for NavigatePathCoverage_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__action__NavigatePathCoverage_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__action__NavigatePathCoverage_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigatePathCoverage_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__NavigatePathCoverage_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__NavigatePathCoverage_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__NavigatePathCoverage_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigatePathCoverage_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigatePathCoverage_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/action/NavigatePathCoverage_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__action__NavigatePathCoverage_SendGoal_Request() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__action__NavigatePathCoverage_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__action__NavigatePathCoverage_SendGoal_Response__init(msg: *mut NavigatePathCoverage_SendGoal_Response) -> bool;
    fn iris_interfaces__action__NavigatePathCoverage_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigatePathCoverage_SendGoal_Response>, size: usize) -> bool;
    fn iris_interfaces__action__NavigatePathCoverage_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigatePathCoverage_SendGoal_Response>);
    fn iris_interfaces__action__NavigatePathCoverage_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigatePathCoverage_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigatePathCoverage_SendGoal_Response>) -> bool;
}

// Corresponds to iris_interfaces__action__NavigatePathCoverage_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigatePathCoverage_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for NavigatePathCoverage_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__action__NavigatePathCoverage_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__action__NavigatePathCoverage_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigatePathCoverage_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__NavigatePathCoverage_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__NavigatePathCoverage_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__NavigatePathCoverage_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigatePathCoverage_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigatePathCoverage_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/action/NavigatePathCoverage_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__action__NavigatePathCoverage_SendGoal_Response() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__action__NavigatePathCoverage_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__action__NavigatePathCoverage_GetResult_Request__init(msg: *mut NavigatePathCoverage_GetResult_Request) -> bool;
    fn iris_interfaces__action__NavigatePathCoverage_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigatePathCoverage_GetResult_Request>, size: usize) -> bool;
    fn iris_interfaces__action__NavigatePathCoverage_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigatePathCoverage_GetResult_Request>);
    fn iris_interfaces__action__NavigatePathCoverage_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigatePathCoverage_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigatePathCoverage_GetResult_Request>) -> bool;
}

// Corresponds to iris_interfaces__action__NavigatePathCoverage_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigatePathCoverage_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for NavigatePathCoverage_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__action__NavigatePathCoverage_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__action__NavigatePathCoverage_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigatePathCoverage_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__NavigatePathCoverage_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__NavigatePathCoverage_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__NavigatePathCoverage_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigatePathCoverage_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigatePathCoverage_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/action/NavigatePathCoverage_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__action__NavigatePathCoverage_GetResult_Request() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__action__NavigatePathCoverage_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__action__NavigatePathCoverage_GetResult_Response__init(msg: *mut NavigatePathCoverage_GetResult_Response) -> bool;
    fn iris_interfaces__action__NavigatePathCoverage_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigatePathCoverage_GetResult_Response>, size: usize) -> bool;
    fn iris_interfaces__action__NavigatePathCoverage_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigatePathCoverage_GetResult_Response>);
    fn iris_interfaces__action__NavigatePathCoverage_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigatePathCoverage_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigatePathCoverage_GetResult_Response>) -> bool;
}

// Corresponds to iris_interfaces__action__NavigatePathCoverage_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigatePathCoverage_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::NavigatePathCoverage_Result,

}



impl Default for NavigatePathCoverage_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__action__NavigatePathCoverage_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__action__NavigatePathCoverage_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigatePathCoverage_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__NavigatePathCoverage_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__NavigatePathCoverage_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__NavigatePathCoverage_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigatePathCoverage_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigatePathCoverage_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/action/NavigatePathCoverage_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__action__NavigatePathCoverage_GetResult_Response() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__action__PathCoverageController_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__action__PathCoverageController_SendGoal_Request__init(msg: *mut PathCoverageController_SendGoal_Request) -> bool;
    fn iris_interfaces__action__PathCoverageController_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PathCoverageController_SendGoal_Request>, size: usize) -> bool;
    fn iris_interfaces__action__PathCoverageController_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PathCoverageController_SendGoal_Request>);
    fn iris_interfaces__action__PathCoverageController_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PathCoverageController_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<PathCoverageController_SendGoal_Request>) -> bool;
}

// Corresponds to iris_interfaces__action__PathCoverageController_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PathCoverageController_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::PathCoverageController_Goal,

}



impl Default for PathCoverageController_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__action__PathCoverageController_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__action__PathCoverageController_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PathCoverageController_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__PathCoverageController_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__PathCoverageController_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__PathCoverageController_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PathCoverageController_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PathCoverageController_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/action/PathCoverageController_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__action__PathCoverageController_SendGoal_Request() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__action__PathCoverageController_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__action__PathCoverageController_SendGoal_Response__init(msg: *mut PathCoverageController_SendGoal_Response) -> bool;
    fn iris_interfaces__action__PathCoverageController_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PathCoverageController_SendGoal_Response>, size: usize) -> bool;
    fn iris_interfaces__action__PathCoverageController_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PathCoverageController_SendGoal_Response>);
    fn iris_interfaces__action__PathCoverageController_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PathCoverageController_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<PathCoverageController_SendGoal_Response>) -> bool;
}

// Corresponds to iris_interfaces__action__PathCoverageController_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PathCoverageController_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for PathCoverageController_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__action__PathCoverageController_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__action__PathCoverageController_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PathCoverageController_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__PathCoverageController_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__PathCoverageController_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__PathCoverageController_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PathCoverageController_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PathCoverageController_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/action/PathCoverageController_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__action__PathCoverageController_SendGoal_Response() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__action__PathCoverageController_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__action__PathCoverageController_GetResult_Request__init(msg: *mut PathCoverageController_GetResult_Request) -> bool;
    fn iris_interfaces__action__PathCoverageController_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PathCoverageController_GetResult_Request>, size: usize) -> bool;
    fn iris_interfaces__action__PathCoverageController_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PathCoverageController_GetResult_Request>);
    fn iris_interfaces__action__PathCoverageController_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PathCoverageController_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<PathCoverageController_GetResult_Request>) -> bool;
}

// Corresponds to iris_interfaces__action__PathCoverageController_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PathCoverageController_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for PathCoverageController_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__action__PathCoverageController_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__action__PathCoverageController_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PathCoverageController_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__PathCoverageController_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__PathCoverageController_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__PathCoverageController_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PathCoverageController_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PathCoverageController_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/action/PathCoverageController_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__action__PathCoverageController_GetResult_Request() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__action__PathCoverageController_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__action__PathCoverageController_GetResult_Response__init(msg: *mut PathCoverageController_GetResult_Response) -> bool;
    fn iris_interfaces__action__PathCoverageController_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PathCoverageController_GetResult_Response>, size: usize) -> bool;
    fn iris_interfaces__action__PathCoverageController_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PathCoverageController_GetResult_Response>);
    fn iris_interfaces__action__PathCoverageController_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PathCoverageController_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<PathCoverageController_GetResult_Response>) -> bool;
}

// Corresponds to iris_interfaces__action__PathCoverageController_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PathCoverageController_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::PathCoverageController_Result,

}



impl Default for PathCoverageController_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__action__PathCoverageController_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__action__PathCoverageController_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PathCoverageController_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__PathCoverageController_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__PathCoverageController_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__action__PathCoverageController_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PathCoverageController_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PathCoverageController_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/action/PathCoverageController_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__action__PathCoverageController_GetResult_Response() }
  }
}






#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__iris_interfaces__action__ComputePathCoverage_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to iris_interfaces__action__ComputePathCoverage_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct ComputePathCoverage_SendGoal;

impl rosidl_runtime_rs::Service for ComputePathCoverage_SendGoal {
    type Request = ComputePathCoverage_SendGoal_Request;
    type Response = ComputePathCoverage_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__iris_interfaces__action__ComputePathCoverage_SendGoal() }
    }
}




#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__iris_interfaces__action__ComputePathCoverage_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to iris_interfaces__action__ComputePathCoverage_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct ComputePathCoverage_GetResult;

impl rosidl_runtime_rs::Service for ComputePathCoverage_GetResult {
    type Request = ComputePathCoverage_GetResult_Request;
    type Response = ComputePathCoverage_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__iris_interfaces__action__ComputePathCoverage_GetResult() }
    }
}




#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__iris_interfaces__action__NavigatePathCoverage_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to iris_interfaces__action__NavigatePathCoverage_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct NavigatePathCoverage_SendGoal;

impl rosidl_runtime_rs::Service for NavigatePathCoverage_SendGoal {
    type Request = NavigatePathCoverage_SendGoal_Request;
    type Response = NavigatePathCoverage_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__iris_interfaces__action__NavigatePathCoverage_SendGoal() }
    }
}




#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__iris_interfaces__action__NavigatePathCoverage_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to iris_interfaces__action__NavigatePathCoverage_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct NavigatePathCoverage_GetResult;

impl rosidl_runtime_rs::Service for NavigatePathCoverage_GetResult {
    type Request = NavigatePathCoverage_GetResult_Request;
    type Response = NavigatePathCoverage_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__iris_interfaces__action__NavigatePathCoverage_GetResult() }
    }
}




#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__iris_interfaces__action__PathCoverageController_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to iris_interfaces__action__PathCoverageController_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct PathCoverageController_SendGoal;

impl rosidl_runtime_rs::Service for PathCoverageController_SendGoal {
    type Request = PathCoverageController_SendGoal_Request;
    type Response = PathCoverageController_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__iris_interfaces__action__PathCoverageController_SendGoal() }
    }
}




#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__iris_interfaces__action__PathCoverageController_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to iris_interfaces__action__PathCoverageController_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct PathCoverageController_GetResult;

impl rosidl_runtime_rs::Service for PathCoverageController_GetResult {
    type Request = PathCoverageController_GetResult_Request;
    type Response = PathCoverageController_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__iris_interfaces__action__PathCoverageController_GetResult() }
    }
}


