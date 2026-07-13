#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__srv__UpdateMotorControllerParameters_Request() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__srv__UpdateMotorControllerParameters_Request__init(msg: *mut UpdateMotorControllerParameters_Request) -> bool;
    fn iris_interfaces__srv__UpdateMotorControllerParameters_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<UpdateMotorControllerParameters_Request>, size: usize) -> bool;
    fn iris_interfaces__srv__UpdateMotorControllerParameters_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<UpdateMotorControllerParameters_Request>);
    fn iris_interfaces__srv__UpdateMotorControllerParameters_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<UpdateMotorControllerParameters_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<UpdateMotorControllerParameters_Request>) -> bool;
}

// Corresponds to iris_interfaces__srv__UpdateMotorControllerParameters_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UpdateMotorControllerParameters_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub save_existing_params: u8,

}



impl Default for UpdateMotorControllerParameters_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__srv__UpdateMotorControllerParameters_Request__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__srv__UpdateMotorControllerParameters_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for UpdateMotorControllerParameters_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__UpdateMotorControllerParameters_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__UpdateMotorControllerParameters_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__UpdateMotorControllerParameters_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for UpdateMotorControllerParameters_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for UpdateMotorControllerParameters_Request where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/srv/UpdateMotorControllerParameters_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__srv__UpdateMotorControllerParameters_Request() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__srv__UpdateMotorControllerParameters_Response() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__srv__UpdateMotorControllerParameters_Response__init(msg: *mut UpdateMotorControllerParameters_Response) -> bool;
    fn iris_interfaces__srv__UpdateMotorControllerParameters_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<UpdateMotorControllerParameters_Response>, size: usize) -> bool;
    fn iris_interfaces__srv__UpdateMotorControllerParameters_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<UpdateMotorControllerParameters_Response>);
    fn iris_interfaces__srv__UpdateMotorControllerParameters_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<UpdateMotorControllerParameters_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<UpdateMotorControllerParameters_Response>) -> bool;
}

// Corresponds to iris_interfaces__srv__UpdateMotorControllerParameters_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UpdateMotorControllerParameters_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: rosidl_runtime_rs::String,

}



impl Default for UpdateMotorControllerParameters_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__srv__UpdateMotorControllerParameters_Response__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__srv__UpdateMotorControllerParameters_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for UpdateMotorControllerParameters_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__UpdateMotorControllerParameters_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__UpdateMotorControllerParameters_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__UpdateMotorControllerParameters_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for UpdateMotorControllerParameters_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for UpdateMotorControllerParameters_Response where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/srv/UpdateMotorControllerParameters_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__srv__UpdateMotorControllerParameters_Response() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__srv__RestartMotorController_Request() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__srv__RestartMotorController_Request__init(msg: *mut RestartMotorController_Request) -> bool;
    fn iris_interfaces__srv__RestartMotorController_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RestartMotorController_Request>, size: usize) -> bool;
    fn iris_interfaces__srv__RestartMotorController_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RestartMotorController_Request>);
    fn iris_interfaces__srv__RestartMotorController_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RestartMotorController_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<RestartMotorController_Request>) -> bool;
}

// Corresponds to iris_interfaces__srv__RestartMotorController_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RestartMotorController_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub restart_reason: rosidl_runtime_rs::String,

}



impl Default for RestartMotorController_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__srv__RestartMotorController_Request__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__srv__RestartMotorController_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RestartMotorController_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__RestartMotorController_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__RestartMotorController_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__RestartMotorController_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RestartMotorController_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RestartMotorController_Request where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/srv/RestartMotorController_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__srv__RestartMotorController_Request() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__srv__RestartMotorController_Response() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__srv__RestartMotorController_Response__init(msg: *mut RestartMotorController_Response) -> bool;
    fn iris_interfaces__srv__RestartMotorController_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RestartMotorController_Response>, size: usize) -> bool;
    fn iris_interfaces__srv__RestartMotorController_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RestartMotorController_Response>);
    fn iris_interfaces__srv__RestartMotorController_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RestartMotorController_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<RestartMotorController_Response>) -> bool;
}

// Corresponds to iris_interfaces__srv__RestartMotorController_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RestartMotorController_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: rosidl_runtime_rs::String,

}



impl Default for RestartMotorController_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__srv__RestartMotorController_Response__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__srv__RestartMotorController_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RestartMotorController_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__RestartMotorController_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__RestartMotorController_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__RestartMotorController_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RestartMotorController_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RestartMotorController_Response where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/srv/RestartMotorController_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__srv__RestartMotorController_Response() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__srv__GetWifiStatus_Request() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__srv__GetWifiStatus_Request__init(msg: *mut GetWifiStatus_Request) -> bool;
    fn iris_interfaces__srv__GetWifiStatus_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetWifiStatus_Request>, size: usize) -> bool;
    fn iris_interfaces__srv__GetWifiStatus_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetWifiStatus_Request>);
    fn iris_interfaces__srv__GetWifiStatus_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetWifiStatus_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetWifiStatus_Request>) -> bool;
}

// Corresponds to iris_interfaces__srv__GetWifiStatus_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetWifiStatus_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub service: rosidl_runtime_rs::String,

}



impl Default for GetWifiStatus_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__srv__GetWifiStatus_Request__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__srv__GetWifiStatus_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetWifiStatus_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__GetWifiStatus_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__GetWifiStatus_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__GetWifiStatus_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetWifiStatus_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetWifiStatus_Request where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/srv/GetWifiStatus_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__srv__GetWifiStatus_Request() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__srv__GetWifiStatus_Response() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__srv__GetWifiStatus_Response__init(msg: *mut GetWifiStatus_Response) -> bool;
    fn iris_interfaces__srv__GetWifiStatus_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetWifiStatus_Response>, size: usize) -> bool;
    fn iris_interfaces__srv__GetWifiStatus_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetWifiStatus_Response>);
    fn iris_interfaces__srv__GetWifiStatus_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetWifiStatus_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetWifiStatus_Response>) -> bool;
}

// Corresponds to iris_interfaces__srv__GetWifiStatus_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetWifiStatus_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: rosidl_runtime_rs::String,

}



impl Default for GetWifiStatus_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__srv__GetWifiStatus_Response__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__srv__GetWifiStatus_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetWifiStatus_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__GetWifiStatus_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__GetWifiStatus_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__GetWifiStatus_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetWifiStatus_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetWifiStatus_Response where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/srv/GetWifiStatus_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__srv__GetWifiStatus_Response() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__srv__WifiDiscovery_Request() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__srv__WifiDiscovery_Request__init(msg: *mut WifiDiscovery_Request) -> bool;
    fn iris_interfaces__srv__WifiDiscovery_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<WifiDiscovery_Request>, size: usize) -> bool;
    fn iris_interfaces__srv__WifiDiscovery_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<WifiDiscovery_Request>);
    fn iris_interfaces__srv__WifiDiscovery_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<WifiDiscovery_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<WifiDiscovery_Request>) -> bool;
}

// Corresponds to iris_interfaces__srv__WifiDiscovery_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WifiDiscovery_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub wifidiscovery: rosidl_runtime_rs::String,

}



impl Default for WifiDiscovery_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__srv__WifiDiscovery_Request__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__srv__WifiDiscovery_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for WifiDiscovery_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__WifiDiscovery_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__WifiDiscovery_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__WifiDiscovery_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for WifiDiscovery_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for WifiDiscovery_Request where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/srv/WifiDiscovery_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__srv__WifiDiscovery_Request() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__srv__WifiDiscovery_Response() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__srv__WifiDiscovery_Response__init(msg: *mut WifiDiscovery_Response) -> bool;
    fn iris_interfaces__srv__WifiDiscovery_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<WifiDiscovery_Response>, size: usize) -> bool;
    fn iris_interfaces__srv__WifiDiscovery_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<WifiDiscovery_Response>);
    fn iris_interfaces__srv__WifiDiscovery_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<WifiDiscovery_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<WifiDiscovery_Response>) -> bool;
}

// Corresponds to iris_interfaces__srv__WifiDiscovery_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WifiDiscovery_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub discoverystatus: rosidl_runtime_rs::String,

}



impl Default for WifiDiscovery_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__srv__WifiDiscovery_Response__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__srv__WifiDiscovery_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for WifiDiscovery_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__WifiDiscovery_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__WifiDiscovery_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__WifiDiscovery_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for WifiDiscovery_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for WifiDiscovery_Response where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/srv/WifiDiscovery_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__srv__WifiDiscovery_Response() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__srv__ConnectWifi_Request() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__srv__ConnectWifi_Request__init(msg: *mut ConnectWifi_Request) -> bool;
    fn iris_interfaces__srv__ConnectWifi_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ConnectWifi_Request>, size: usize) -> bool;
    fn iris_interfaces__srv__ConnectWifi_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ConnectWifi_Request>);
    fn iris_interfaces__srv__ConnectWifi_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ConnectWifi_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ConnectWifi_Request>) -> bool;
}

// Corresponds to iris_interfaces__srv__ConnectWifi_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ConnectWifi_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub ssid: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub password: rosidl_runtime_rs::String,

}



impl Default for ConnectWifi_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__srv__ConnectWifi_Request__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__srv__ConnectWifi_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ConnectWifi_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__ConnectWifi_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__ConnectWifi_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__ConnectWifi_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ConnectWifi_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ConnectWifi_Request where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/srv/ConnectWifi_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__srv__ConnectWifi_Request() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__srv__ConnectWifi_Response() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__srv__ConnectWifi_Response__init(msg: *mut ConnectWifi_Response) -> bool;
    fn iris_interfaces__srv__ConnectWifi_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ConnectWifi_Response>, size: usize) -> bool;
    fn iris_interfaces__srv__ConnectWifi_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ConnectWifi_Response>);
    fn iris_interfaces__srv__ConnectWifi_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ConnectWifi_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ConnectWifi_Response>) -> bool;
}

// Corresponds to iris_interfaces__srv__ConnectWifi_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ConnectWifi_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: rosidl_runtime_rs::String,

}



impl Default for ConnectWifi_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__srv__ConnectWifi_Response__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__srv__ConnectWifi_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ConnectWifi_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__ConnectWifi_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__ConnectWifi_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__ConnectWifi_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ConnectWifi_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ConnectWifi_Response where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/srv/ConnectWifi_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__srv__ConnectWifi_Response() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__srv__DisconnectWifi_Request() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__srv__DisconnectWifi_Request__init(msg: *mut DisconnectWifi_Request) -> bool;
    fn iris_interfaces__srv__DisconnectWifi_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DisconnectWifi_Request>, size: usize) -> bool;
    fn iris_interfaces__srv__DisconnectWifi_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DisconnectWifi_Request>);
    fn iris_interfaces__srv__DisconnectWifi_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DisconnectWifi_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<DisconnectWifi_Request>) -> bool;
}

// Corresponds to iris_interfaces__srv__DisconnectWifi_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DisconnectWifi_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub ssid: rosidl_runtime_rs::String,

}



impl Default for DisconnectWifi_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__srv__DisconnectWifi_Request__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__srv__DisconnectWifi_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DisconnectWifi_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__DisconnectWifi_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__DisconnectWifi_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__DisconnectWifi_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DisconnectWifi_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DisconnectWifi_Request where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/srv/DisconnectWifi_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__srv__DisconnectWifi_Request() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__srv__DisconnectWifi_Response() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__srv__DisconnectWifi_Response__init(msg: *mut DisconnectWifi_Response) -> bool;
    fn iris_interfaces__srv__DisconnectWifi_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DisconnectWifi_Response>, size: usize) -> bool;
    fn iris_interfaces__srv__DisconnectWifi_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DisconnectWifi_Response>);
    fn iris_interfaces__srv__DisconnectWifi_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DisconnectWifi_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<DisconnectWifi_Response>) -> bool;
}

// Corresponds to iris_interfaces__srv__DisconnectWifi_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DisconnectWifi_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: rosidl_runtime_rs::String,

}



impl Default for DisconnectWifi_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__srv__DisconnectWifi_Response__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__srv__DisconnectWifi_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DisconnectWifi_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__DisconnectWifi_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__DisconnectWifi_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__DisconnectWifi_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DisconnectWifi_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DisconnectWifi_Response where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/srv/DisconnectWifi_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__srv__DisconnectWifi_Response() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__srv__ProcessManager_Request() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__srv__ProcessManager_Request__init(msg: *mut ProcessManager_Request) -> bool;
    fn iris_interfaces__srv__ProcessManager_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ProcessManager_Request>, size: usize) -> bool;
    fn iris_interfaces__srv__ProcessManager_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ProcessManager_Request>);
    fn iris_interfaces__srv__ProcessManager_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ProcessManager_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ProcessManager_Request>) -> bool;
}

// Corresponds to iris_interfaces__srv__ProcessManager_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ProcessManager_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub package: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub executable: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub name_space: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub node_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub container_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub label: rosidl_runtime_rs::String,

}

impl ProcessManager_Request {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const START: &'static str = "START";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STOP: &'static str = "STOP";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RESTART: &'static str = "RESTART";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const IS_ALIVE: &'static str = "IS_ALIVE";

}


impl Default for ProcessManager_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__srv__ProcessManager_Request__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__srv__ProcessManager_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ProcessManager_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__ProcessManager_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__ProcessManager_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__ProcessManager_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ProcessManager_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ProcessManager_Request where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/srv/ProcessManager_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__srv__ProcessManager_Request() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__srv__ProcessManager_Response() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__srv__ProcessManager_Response__init(msg: *mut ProcessManager_Response) -> bool;
    fn iris_interfaces__srv__ProcessManager_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ProcessManager_Response>, size: usize) -> bool;
    fn iris_interfaces__srv__ProcessManager_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ProcessManager_Response>);
    fn iris_interfaces__srv__ProcessManager_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ProcessManager_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ProcessManager_Response>) -> bool;
}

// Corresponds to iris_interfaces__srv__ProcessManager_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ProcessManager_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub response: rosidl_runtime_rs::String,

}

impl ProcessManager_Response {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SUCCESS: &'static str = "SUCCESS";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAILED: &'static str = "FAILED";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const EXISTS: &'static str = "EXISTS";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DOESNT_EXIST: &'static str = "DOESNT_EXIST";

}


impl Default for ProcessManager_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__srv__ProcessManager_Response__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__srv__ProcessManager_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ProcessManager_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__ProcessManager_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__ProcessManager_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__ProcessManager_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ProcessManager_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ProcessManager_Response where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/srv/ProcessManager_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__srv__ProcessManager_Response() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__srv__StateManager_Request() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__srv__StateManager_Request__init(msg: *mut StateManager_Request) -> bool;
    fn iris_interfaces__srv__StateManager_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<StateManager_Request>, size: usize) -> bool;
    fn iris_interfaces__srv__StateManager_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<StateManager_Request>);
    fn iris_interfaces__srv__StateManager_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<StateManager_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<StateManager_Request>) -> bool;
}

// Corresponds to iris_interfaces__srv__StateManager_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StateManager_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub component_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub state: rosidl_runtime_rs::String,

}

impl StateManager_Request {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CREATE: &'static str = "create";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ACTIVATE: &'static str = "activate";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DEACTIVATE: &'static str = "deactivate";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CLEANUP: &'static str = "cleanup";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DESTROY: &'static str = "destroy";

}


impl Default for StateManager_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__srv__StateManager_Request__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__srv__StateManager_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for StateManager_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__StateManager_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__StateManager_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__StateManager_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for StateManager_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for StateManager_Request where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/srv/StateManager_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__srv__StateManager_Request() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__srv__StateManager_Response() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__srv__StateManager_Response__init(msg: *mut StateManager_Response) -> bool;
    fn iris_interfaces__srv__StateManager_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<StateManager_Response>, size: usize) -> bool;
    fn iris_interfaces__srv__StateManager_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<StateManager_Response>);
    fn iris_interfaces__srv__StateManager_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<StateManager_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<StateManager_Response>) -> bool;
}

// Corresponds to iris_interfaces__srv__StateManager_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StateManager_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result_description: rosidl_runtime_rs::String,

}

impl StateManager_Response {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SUCCESS: &'static str = "success";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAILED: &'static str = "failed";

}


impl Default for StateManager_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__srv__StateManager_Response__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__srv__StateManager_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for StateManager_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__StateManager_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__StateManager_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__StateManager_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for StateManager_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for StateManager_Response where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/srv/StateManager_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__srv__StateManager_Response() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__srv__ResetWheelEncoders_Request() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__srv__ResetWheelEncoders_Request__init(msg: *mut ResetWheelEncoders_Request) -> bool;
    fn iris_interfaces__srv__ResetWheelEncoders_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ResetWheelEncoders_Request>, size: usize) -> bool;
    fn iris_interfaces__srv__ResetWheelEncoders_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ResetWheelEncoders_Request>);
    fn iris_interfaces__srv__ResetWheelEncoders_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ResetWheelEncoders_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ResetWheelEncoders_Request>) -> bool;
}

// Corresponds to iris_interfaces__srv__ResetWheelEncoders_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ResetWheelEncoders_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for ResetWheelEncoders_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__srv__ResetWheelEncoders_Request__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__srv__ResetWheelEncoders_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ResetWheelEncoders_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__ResetWheelEncoders_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__ResetWheelEncoders_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__ResetWheelEncoders_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ResetWheelEncoders_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ResetWheelEncoders_Request where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/srv/ResetWheelEncoders_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__srv__ResetWheelEncoders_Request() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__srv__ResetWheelEncoders_Response() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__srv__ResetWheelEncoders_Response__init(msg: *mut ResetWheelEncoders_Response) -> bool;
    fn iris_interfaces__srv__ResetWheelEncoders_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ResetWheelEncoders_Response>, size: usize) -> bool;
    fn iris_interfaces__srv__ResetWheelEncoders_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ResetWheelEncoders_Response>);
    fn iris_interfaces__srv__ResetWheelEncoders_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ResetWheelEncoders_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ResetWheelEncoders_Response>) -> bool;
}

// Corresponds to iris_interfaces__srv__ResetWheelEncoders_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ResetWheelEncoders_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: rosidl_runtime_rs::String,

}



impl Default for ResetWheelEncoders_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__srv__ResetWheelEncoders_Response__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__srv__ResetWheelEncoders_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ResetWheelEncoders_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__ResetWheelEncoders_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__ResetWheelEncoders_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__ResetWheelEncoders_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ResetWheelEncoders_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ResetWheelEncoders_Response where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/srv/ResetWheelEncoders_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__srv__ResetWheelEncoders_Response() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__srv__UpdateMotorControllerReferenceSource_Request() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__srv__UpdateMotorControllerReferenceSource_Request__init(msg: *mut UpdateMotorControllerReferenceSource_Request) -> bool;
    fn iris_interfaces__srv__UpdateMotorControllerReferenceSource_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<UpdateMotorControllerReferenceSource_Request>, size: usize) -> bool;
    fn iris_interfaces__srv__UpdateMotorControllerReferenceSource_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<UpdateMotorControllerReferenceSource_Request>);
    fn iris_interfaces__srv__UpdateMotorControllerReferenceSource_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<UpdateMotorControllerReferenceSource_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<UpdateMotorControllerReferenceSource_Request>) -> bool;
}

// Corresponds to iris_interfaces__srv__UpdateMotorControllerReferenceSource_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UpdateMotorControllerReferenceSource_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub reference_source: rosidl_runtime_rs::String,

}



impl Default for UpdateMotorControllerReferenceSource_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__srv__UpdateMotorControllerReferenceSource_Request__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__srv__UpdateMotorControllerReferenceSource_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for UpdateMotorControllerReferenceSource_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__UpdateMotorControllerReferenceSource_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__UpdateMotorControllerReferenceSource_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__UpdateMotorControllerReferenceSource_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for UpdateMotorControllerReferenceSource_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for UpdateMotorControllerReferenceSource_Request where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/srv/UpdateMotorControllerReferenceSource_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__srv__UpdateMotorControllerReferenceSource_Request() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__srv__UpdateMotorControllerReferenceSource_Response() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__srv__UpdateMotorControllerReferenceSource_Response__init(msg: *mut UpdateMotorControllerReferenceSource_Response) -> bool;
    fn iris_interfaces__srv__UpdateMotorControllerReferenceSource_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<UpdateMotorControllerReferenceSource_Response>, size: usize) -> bool;
    fn iris_interfaces__srv__UpdateMotorControllerReferenceSource_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<UpdateMotorControllerReferenceSource_Response>);
    fn iris_interfaces__srv__UpdateMotorControllerReferenceSource_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<UpdateMotorControllerReferenceSource_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<UpdateMotorControllerReferenceSource_Response>) -> bool;
}

// Corresponds to iris_interfaces__srv__UpdateMotorControllerReferenceSource_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UpdateMotorControllerReferenceSource_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub response: rosidl_runtime_rs::String,

}



impl Default for UpdateMotorControllerReferenceSource_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__srv__UpdateMotorControllerReferenceSource_Response__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__srv__UpdateMotorControllerReferenceSource_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for UpdateMotorControllerReferenceSource_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__UpdateMotorControllerReferenceSource_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__UpdateMotorControllerReferenceSource_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__UpdateMotorControllerReferenceSource_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for UpdateMotorControllerReferenceSource_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for UpdateMotorControllerReferenceSource_Response where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/srv/UpdateMotorControllerReferenceSource_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__srv__UpdateMotorControllerReferenceSource_Response() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__srv__A2Command_Request() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__srv__A2Command_Request__init(msg: *mut A2Command_Request) -> bool;
    fn iris_interfaces__srv__A2Command_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<A2Command_Request>, size: usize) -> bool;
    fn iris_interfaces__srv__A2Command_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<A2Command_Request>);
    fn iris_interfaces__srv__A2Command_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<A2Command_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<A2Command_Request>) -> bool;
}

// Corresponds to iris_interfaces__srv__A2Command_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct A2Command_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub brush_command: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vacuum_command: u8,

}



impl Default for A2Command_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__srv__A2Command_Request__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__srv__A2Command_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for A2Command_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__A2Command_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__A2Command_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__A2Command_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for A2Command_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for A2Command_Request where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/srv/A2Command_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__srv__A2Command_Request() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__srv__A2Command_Response() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__srv__A2Command_Response__init(msg: *mut A2Command_Response) -> bool;
    fn iris_interfaces__srv__A2Command_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<A2Command_Response>, size: usize) -> bool;
    fn iris_interfaces__srv__A2Command_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<A2Command_Response>);
    fn iris_interfaces__srv__A2Command_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<A2Command_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<A2Command_Response>) -> bool;
}

// Corresponds to iris_interfaces__srv__A2Command_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct A2Command_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub brush_status: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vacuum_status: u8,

}



impl Default for A2Command_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__srv__A2Command_Response__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__srv__A2Command_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for A2Command_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__A2Command_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__A2Command_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__A2Command_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for A2Command_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for A2Command_Response where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/srv/A2Command_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__srv__A2Command_Response() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__srv__ResetA2Faults_Request() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__srv__ResetA2Faults_Request__init(msg: *mut ResetA2Faults_Request) -> bool;
    fn iris_interfaces__srv__ResetA2Faults_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ResetA2Faults_Request>, size: usize) -> bool;
    fn iris_interfaces__srv__ResetA2Faults_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ResetA2Faults_Request>);
    fn iris_interfaces__srv__ResetA2Faults_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ResetA2Faults_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ResetA2Faults_Request>) -> bool;
}

// Corresponds to iris_interfaces__srv__ResetA2Faults_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ResetA2Faults_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for ResetA2Faults_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__srv__ResetA2Faults_Request__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__srv__ResetA2Faults_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ResetA2Faults_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__ResetA2Faults_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__ResetA2Faults_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__ResetA2Faults_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ResetA2Faults_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ResetA2Faults_Request where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/srv/ResetA2Faults_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__srv__ResetA2Faults_Request() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__srv__ResetA2Faults_Response() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__srv__ResetA2Faults_Response__init(msg: *mut ResetA2Faults_Response) -> bool;
    fn iris_interfaces__srv__ResetA2Faults_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ResetA2Faults_Response>, size: usize) -> bool;
    fn iris_interfaces__srv__ResetA2Faults_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ResetA2Faults_Response>);
    fn iris_interfaces__srv__ResetA2Faults_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ResetA2Faults_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ResetA2Faults_Response>) -> bool;
}

// Corresponds to iris_interfaces__srv__ResetA2Faults_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ResetA2Faults_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: rosidl_runtime_rs::String,

}



impl Default for ResetA2Faults_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__srv__ResetA2Faults_Response__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__srv__ResetA2Faults_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ResetA2Faults_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__ResetA2Faults_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__ResetA2Faults_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__ResetA2Faults_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ResetA2Faults_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ResetA2Faults_Response where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/srv/ResetA2Faults_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__srv__ResetA2Faults_Response() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__srv__AlarmReset_Request() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__srv__AlarmReset_Request__init(msg: *mut AlarmReset_Request) -> bool;
    fn iris_interfaces__srv__AlarmReset_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AlarmReset_Request>, size: usize) -> bool;
    fn iris_interfaces__srv__AlarmReset_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AlarmReset_Request>);
    fn iris_interfaces__srv__AlarmReset_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AlarmReset_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<AlarmReset_Request>) -> bool;
}

// Corresponds to iris_interfaces__srv__AlarmReset_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AlarmReset_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub reset_alarm: u8,

}



impl Default for AlarmReset_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__srv__AlarmReset_Request__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__srv__AlarmReset_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AlarmReset_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__AlarmReset_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__AlarmReset_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__AlarmReset_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AlarmReset_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AlarmReset_Request where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/srv/AlarmReset_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__srv__AlarmReset_Request() }
  }
}


#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__srv__AlarmReset_Response() -> *const std::ffi::c_void;
}

#[link(name = "iris_interfaces__rosidl_generator_c")]
extern "C" {
    fn iris_interfaces__srv__AlarmReset_Response__init(msg: *mut AlarmReset_Response) -> bool;
    fn iris_interfaces__srv__AlarmReset_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AlarmReset_Response>, size: usize) -> bool;
    fn iris_interfaces__srv__AlarmReset_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AlarmReset_Response>);
    fn iris_interfaces__srv__AlarmReset_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AlarmReset_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<AlarmReset_Response>) -> bool;
}

// Corresponds to iris_interfaces__srv__AlarmReset_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AlarmReset_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub respones: rosidl_runtime_rs::String,

}



impl Default for AlarmReset_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !iris_interfaces__srv__AlarmReset_Response__init(&mut msg as *mut _) {
        panic!("Call to iris_interfaces__srv__AlarmReset_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AlarmReset_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__AlarmReset_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__AlarmReset_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { iris_interfaces__srv__AlarmReset_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AlarmReset_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AlarmReset_Response where Self: Sized {
  const TYPE_NAME: &'static str = "iris_interfaces/srv/AlarmReset_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__iris_interfaces__srv__AlarmReset_Response() }
  }
}






#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__iris_interfaces__srv__UpdateMotorControllerParameters() -> *const std::ffi::c_void;
}

// Corresponds to iris_interfaces__srv__UpdateMotorControllerParameters
#[allow(missing_docs, non_camel_case_types)]
pub struct UpdateMotorControllerParameters;

impl rosidl_runtime_rs::Service for UpdateMotorControllerParameters {
    type Request = UpdateMotorControllerParameters_Request;
    type Response = UpdateMotorControllerParameters_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__iris_interfaces__srv__UpdateMotorControllerParameters() }
    }
}




#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__iris_interfaces__srv__RestartMotorController() -> *const std::ffi::c_void;
}

// Corresponds to iris_interfaces__srv__RestartMotorController
#[allow(missing_docs, non_camel_case_types)]
pub struct RestartMotorController;

impl rosidl_runtime_rs::Service for RestartMotorController {
    type Request = RestartMotorController_Request;
    type Response = RestartMotorController_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__iris_interfaces__srv__RestartMotorController() }
    }
}




#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__iris_interfaces__srv__GetWifiStatus() -> *const std::ffi::c_void;
}

// Corresponds to iris_interfaces__srv__GetWifiStatus
#[allow(missing_docs, non_camel_case_types)]
pub struct GetWifiStatus;

impl rosidl_runtime_rs::Service for GetWifiStatus {
    type Request = GetWifiStatus_Request;
    type Response = GetWifiStatus_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__iris_interfaces__srv__GetWifiStatus() }
    }
}




#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__iris_interfaces__srv__WifiDiscovery() -> *const std::ffi::c_void;
}

// Corresponds to iris_interfaces__srv__WifiDiscovery
#[allow(missing_docs, non_camel_case_types)]
pub struct WifiDiscovery;

impl rosidl_runtime_rs::Service for WifiDiscovery {
    type Request = WifiDiscovery_Request;
    type Response = WifiDiscovery_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__iris_interfaces__srv__WifiDiscovery() }
    }
}




#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__iris_interfaces__srv__ConnectWifi() -> *const std::ffi::c_void;
}

// Corresponds to iris_interfaces__srv__ConnectWifi
#[allow(missing_docs, non_camel_case_types)]
pub struct ConnectWifi;

impl rosidl_runtime_rs::Service for ConnectWifi {
    type Request = ConnectWifi_Request;
    type Response = ConnectWifi_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__iris_interfaces__srv__ConnectWifi() }
    }
}




#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__iris_interfaces__srv__DisconnectWifi() -> *const std::ffi::c_void;
}

// Corresponds to iris_interfaces__srv__DisconnectWifi
#[allow(missing_docs, non_camel_case_types)]
pub struct DisconnectWifi;

impl rosidl_runtime_rs::Service for DisconnectWifi {
    type Request = DisconnectWifi_Request;
    type Response = DisconnectWifi_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__iris_interfaces__srv__DisconnectWifi() }
    }
}




#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__iris_interfaces__srv__ProcessManager() -> *const std::ffi::c_void;
}

// Corresponds to iris_interfaces__srv__ProcessManager
#[allow(missing_docs, non_camel_case_types)]
pub struct ProcessManager;

impl rosidl_runtime_rs::Service for ProcessManager {
    type Request = ProcessManager_Request;
    type Response = ProcessManager_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__iris_interfaces__srv__ProcessManager() }
    }
}




#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__iris_interfaces__srv__StateManager() -> *const std::ffi::c_void;
}

// Corresponds to iris_interfaces__srv__StateManager
#[allow(missing_docs, non_camel_case_types)]
pub struct StateManager;

impl rosidl_runtime_rs::Service for StateManager {
    type Request = StateManager_Request;
    type Response = StateManager_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__iris_interfaces__srv__StateManager() }
    }
}




#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__iris_interfaces__srv__ResetWheelEncoders() -> *const std::ffi::c_void;
}

// Corresponds to iris_interfaces__srv__ResetWheelEncoders
#[allow(missing_docs, non_camel_case_types)]
pub struct ResetWheelEncoders;

impl rosidl_runtime_rs::Service for ResetWheelEncoders {
    type Request = ResetWheelEncoders_Request;
    type Response = ResetWheelEncoders_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__iris_interfaces__srv__ResetWheelEncoders() }
    }
}




#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__iris_interfaces__srv__UpdateMotorControllerReferenceSource() -> *const std::ffi::c_void;
}

// Corresponds to iris_interfaces__srv__UpdateMotorControllerReferenceSource
#[allow(missing_docs, non_camel_case_types)]
pub struct UpdateMotorControllerReferenceSource;

impl rosidl_runtime_rs::Service for UpdateMotorControllerReferenceSource {
    type Request = UpdateMotorControllerReferenceSource_Request;
    type Response = UpdateMotorControllerReferenceSource_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__iris_interfaces__srv__UpdateMotorControllerReferenceSource() }
    }
}




#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__iris_interfaces__srv__A2Command() -> *const std::ffi::c_void;
}

// Corresponds to iris_interfaces__srv__A2Command
#[allow(missing_docs, non_camel_case_types)]
pub struct A2Command;

impl rosidl_runtime_rs::Service for A2Command {
    type Request = A2Command_Request;
    type Response = A2Command_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__iris_interfaces__srv__A2Command() }
    }
}




#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__iris_interfaces__srv__ResetA2Faults() -> *const std::ffi::c_void;
}

// Corresponds to iris_interfaces__srv__ResetA2Faults
#[allow(missing_docs, non_camel_case_types)]
pub struct ResetA2Faults;

impl rosidl_runtime_rs::Service for ResetA2Faults {
    type Request = ResetA2Faults_Request;
    type Response = ResetA2Faults_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__iris_interfaces__srv__ResetA2Faults() }
    }
}




#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__iris_interfaces__srv__AlarmReset() -> *const std::ffi::c_void;
}

// Corresponds to iris_interfaces__srv__AlarmReset
#[allow(missing_docs, non_camel_case_types)]
pub struct AlarmReset;

impl rosidl_runtime_rs::Service for AlarmReset {
    type Request = AlarmReset_Request;
    type Response = AlarmReset_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__iris_interfaces__srv__AlarmReset() }
    }
}


