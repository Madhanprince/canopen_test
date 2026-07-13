#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to iris_interfaces__srv__UpdateMotorControllerParameters_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UpdateMotorControllerParameters_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub save_existing_params: u8,

}



impl Default for UpdateMotorControllerParameters_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::UpdateMotorControllerParameters_Request::default())
  }
}

impl rosidl_runtime_rs::Message for UpdateMotorControllerParameters_Request {
  type RmwMsg = super::srv::rmw::UpdateMotorControllerParameters_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        save_existing_params: msg.save_existing_params,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      save_existing_params: msg.save_existing_params,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      save_existing_params: msg.save_existing_params,
    }
  }
}


// Corresponds to iris_interfaces__srv__UpdateMotorControllerParameters_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UpdateMotorControllerParameters_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: std::string::String,

}



impl Default for UpdateMotorControllerParameters_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::UpdateMotorControllerParameters_Response::default())
  }
}

impl rosidl_runtime_rs::Message for UpdateMotorControllerParameters_Response {
  type RmwMsg = super::srv::rmw::UpdateMotorControllerParameters_Response;

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


// Corresponds to iris_interfaces__srv__RestartMotorController_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RestartMotorController_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub restart_reason: std::string::String,

}



impl Default for RestartMotorController_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::RestartMotorController_Request::default())
  }
}

impl rosidl_runtime_rs::Message for RestartMotorController_Request {
  type RmwMsg = super::srv::rmw::RestartMotorController_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        restart_reason: msg.restart_reason.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        restart_reason: msg.restart_reason.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      restart_reason: msg.restart_reason.to_string(),
    }
  }
}


// Corresponds to iris_interfaces__srv__RestartMotorController_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RestartMotorController_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: std::string::String,

}



impl Default for RestartMotorController_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::RestartMotorController_Response::default())
  }
}

impl rosidl_runtime_rs::Message for RestartMotorController_Response {
  type RmwMsg = super::srv::rmw::RestartMotorController_Response;

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


// Corresponds to iris_interfaces__srv__GetWifiStatus_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetWifiStatus_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub service: std::string::String,

}



impl Default for GetWifiStatus_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetWifiStatus_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetWifiStatus_Request {
  type RmwMsg = super::srv::rmw::GetWifiStatus_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        service: msg.service.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        service: msg.service.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      service: msg.service.to_string(),
    }
  }
}


// Corresponds to iris_interfaces__srv__GetWifiStatus_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetWifiStatus_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: std::string::String,

}



impl Default for GetWifiStatus_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetWifiStatus_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetWifiStatus_Response {
  type RmwMsg = super::srv::rmw::GetWifiStatus_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status.to_string(),
    }
  }
}


// Corresponds to iris_interfaces__srv__WifiDiscovery_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WifiDiscovery_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub wifidiscovery: std::string::String,

}



impl Default for WifiDiscovery_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::WifiDiscovery_Request::default())
  }
}

impl rosidl_runtime_rs::Message for WifiDiscovery_Request {
  type RmwMsg = super::srv::rmw::WifiDiscovery_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        wifidiscovery: msg.wifidiscovery.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        wifidiscovery: msg.wifidiscovery.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      wifidiscovery: msg.wifidiscovery.to_string(),
    }
  }
}


// Corresponds to iris_interfaces__srv__WifiDiscovery_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WifiDiscovery_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub discoverystatus: std::string::String,

}



impl Default for WifiDiscovery_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::WifiDiscovery_Response::default())
  }
}

impl rosidl_runtime_rs::Message for WifiDiscovery_Response {
  type RmwMsg = super::srv::rmw::WifiDiscovery_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        discoverystatus: msg.discoverystatus.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
        discoverystatus: msg.discoverystatus.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      discoverystatus: msg.discoverystatus.to_string(),
    }
  }
}


// Corresponds to iris_interfaces__srv__ConnectWifi_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ConnectWifi_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub ssid: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub password: std::string::String,

}



impl Default for ConnectWifi_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ConnectWifi_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ConnectWifi_Request {
  type RmwMsg = super::srv::rmw::ConnectWifi_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        ssid: msg.ssid.as_str().into(),
        password: msg.password.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        ssid: msg.ssid.as_str().into(),
        password: msg.password.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      ssid: msg.ssid.to_string(),
      password: msg.password.to_string(),
    }
  }
}


// Corresponds to iris_interfaces__srv__ConnectWifi_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ConnectWifi_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: std::string::String,

}



impl Default for ConnectWifi_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ConnectWifi_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ConnectWifi_Response {
  type RmwMsg = super::srv::rmw::ConnectWifi_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status.to_string(),
    }
  }
}


// Corresponds to iris_interfaces__srv__DisconnectWifi_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DisconnectWifi_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub ssid: std::string::String,

}



impl Default for DisconnectWifi_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::DisconnectWifi_Request::default())
  }
}

impl rosidl_runtime_rs::Message for DisconnectWifi_Request {
  type RmwMsg = super::srv::rmw::DisconnectWifi_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        ssid: msg.ssid.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        ssid: msg.ssid.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      ssid: msg.ssid.to_string(),
    }
  }
}


// Corresponds to iris_interfaces__srv__DisconnectWifi_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DisconnectWifi_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: std::string::String,

}



impl Default for DisconnectWifi_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::DisconnectWifi_Response::default())
  }
}

impl rosidl_runtime_rs::Message for DisconnectWifi_Response {
  type RmwMsg = super::srv::rmw::DisconnectWifi_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status.to_string(),
    }
  }
}


// Corresponds to iris_interfaces__srv__ProcessManager_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ProcessManager_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub package: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub executable: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub name_space: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub node_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub container_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub label: std::string::String,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ProcessManager_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ProcessManager_Request {
  type RmwMsg = super::srv::rmw::ProcessManager_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        package: msg.package.as_str().into(),
        executable: msg.executable.as_str().into(),
        name_space: msg.name_space.as_str().into(),
        node_name: msg.node_name.as_str().into(),
        container_name: msg.container_name.as_str().into(),
        label: msg.label.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        package: msg.package.as_str().into(),
        executable: msg.executable.as_str().into(),
        name_space: msg.name_space.as_str().into(),
        node_name: msg.node_name.as_str().into(),
        container_name: msg.container_name.as_str().into(),
        label: msg.label.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      package: msg.package.to_string(),
      executable: msg.executable.to_string(),
      name_space: msg.name_space.to_string(),
      node_name: msg.node_name.to_string(),
      container_name: msg.container_name.to_string(),
      label: msg.label.to_string(),
    }
  }
}


// Corresponds to iris_interfaces__srv__ProcessManager_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ProcessManager_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub response: std::string::String,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ProcessManager_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ProcessManager_Response {
  type RmwMsg = super::srv::rmw::ProcessManager_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: msg.response.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: msg.response.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      response: msg.response.to_string(),
    }
  }
}


// Corresponds to iris_interfaces__srv__StateManager_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StateManager_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub component_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub state: std::string::String,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::StateManager_Request::default())
  }
}

impl rosidl_runtime_rs::Message for StateManager_Request {
  type RmwMsg = super::srv::rmw::StateManager_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        component_name: msg.component_name.as_str().into(),
        state: msg.state.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        component_name: msg.component_name.as_str().into(),
        state: msg.state.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      component_name: msg.component_name.to_string(),
      state: msg.state.to_string(),
    }
  }
}


// Corresponds to iris_interfaces__srv__StateManager_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StateManager_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result_description: std::string::String,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::StateManager_Response::default())
  }
}

impl rosidl_runtime_rs::Message for StateManager_Response {
  type RmwMsg = super::srv::rmw::StateManager_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: msg.result.as_str().into(),
        result_description: msg.result_description.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: msg.result.as_str().into(),
        result_description: msg.result_description.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: msg.result.to_string(),
      result_description: msg.result_description.to_string(),
    }
  }
}


// Corresponds to iris_interfaces__srv__ResetWheelEncoders_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ResetWheelEncoders_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for ResetWheelEncoders_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ResetWheelEncoders_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ResetWheelEncoders_Request {
  type RmwMsg = super::srv::rmw::ResetWheelEncoders_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
    }
  }
}


// Corresponds to iris_interfaces__srv__ResetWheelEncoders_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ResetWheelEncoders_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: std::string::String,

}



impl Default for ResetWheelEncoders_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ResetWheelEncoders_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ResetWheelEncoders_Response {
  type RmwMsg = super::srv::rmw::ResetWheelEncoders_Response;

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


// Corresponds to iris_interfaces__srv__UpdateMotorControllerReferenceSource_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UpdateMotorControllerReferenceSource_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub reference_source: std::string::String,

}



impl Default for UpdateMotorControllerReferenceSource_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::UpdateMotorControllerReferenceSource_Request::default())
  }
}

impl rosidl_runtime_rs::Message for UpdateMotorControllerReferenceSource_Request {
  type RmwMsg = super::srv::rmw::UpdateMotorControllerReferenceSource_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        reference_source: msg.reference_source.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        reference_source: msg.reference_source.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      reference_source: msg.reference_source.to_string(),
    }
  }
}


// Corresponds to iris_interfaces__srv__UpdateMotorControllerReferenceSource_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UpdateMotorControllerReferenceSource_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub response: std::string::String,

}



impl Default for UpdateMotorControllerReferenceSource_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::UpdateMotorControllerReferenceSource_Response::default())
  }
}

impl rosidl_runtime_rs::Message for UpdateMotorControllerReferenceSource_Response {
  type RmwMsg = super::srv::rmw::UpdateMotorControllerReferenceSource_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: msg.response.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: msg.response.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      response: msg.response.to_string(),
    }
  }
}


// Corresponds to iris_interfaces__srv__A2Command_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::A2Command_Request::default())
  }
}

impl rosidl_runtime_rs::Message for A2Command_Request {
  type RmwMsg = super::srv::rmw::A2Command_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        brush_command: msg.brush_command,
        vacuum_command: msg.vacuum_command,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      brush_command: msg.brush_command,
      vacuum_command: msg.vacuum_command,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      brush_command: msg.brush_command,
      vacuum_command: msg.vacuum_command,
    }
  }
}


// Corresponds to iris_interfaces__srv__A2Command_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::A2Command_Response::default())
  }
}

impl rosidl_runtime_rs::Message for A2Command_Response {
  type RmwMsg = super::srv::rmw::A2Command_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        brush_status: msg.brush_status,
        vacuum_status: msg.vacuum_status,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      brush_status: msg.brush_status,
      vacuum_status: msg.vacuum_status,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      brush_status: msg.brush_status,
      vacuum_status: msg.vacuum_status,
    }
  }
}


// Corresponds to iris_interfaces__srv__ResetA2Faults_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ResetA2Faults_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for ResetA2Faults_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ResetA2Faults_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ResetA2Faults_Request {
  type RmwMsg = super::srv::rmw::ResetA2Faults_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
    }
  }
}


// Corresponds to iris_interfaces__srv__ResetA2Faults_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ResetA2Faults_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: std::string::String,

}



impl Default for ResetA2Faults_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ResetA2Faults_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ResetA2Faults_Response {
  type RmwMsg = super::srv::rmw::ResetA2Faults_Response;

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


// Corresponds to iris_interfaces__srv__AlarmReset_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AlarmReset_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub reset_alarm: u8,

}



impl Default for AlarmReset_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::AlarmReset_Request::default())
  }
}

impl rosidl_runtime_rs::Message for AlarmReset_Request {
  type RmwMsg = super::srv::rmw::AlarmReset_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        reset_alarm: msg.reset_alarm,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      reset_alarm: msg.reset_alarm,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      reset_alarm: msg.reset_alarm,
    }
  }
}


// Corresponds to iris_interfaces__srv__AlarmReset_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AlarmReset_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub respones: std::string::String,

}



impl Default for AlarmReset_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::AlarmReset_Response::default())
  }
}

impl rosidl_runtime_rs::Message for AlarmReset_Response {
  type RmwMsg = super::srv::rmw::AlarmReset_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        respones: msg.respones.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        respones: msg.respones.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      respones: msg.respones.to_string(),
    }
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


