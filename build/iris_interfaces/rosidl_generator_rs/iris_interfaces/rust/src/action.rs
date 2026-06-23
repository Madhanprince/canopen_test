
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to iris_interfaces__action__ComputePathCoverage_Goal

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ComputePathCoverage_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub generate_headband: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub frame_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub polygon: geometry_msgs::msg::Polygon,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_pose: geometry_msgs::msg::PoseStamped,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reached_start: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: super::msg::NavigationMode,


    // This member is not documented.
    #[allow(missing_docs)]
    pub headband_mode: super::msg::HeadbandMode,

}



impl Default for ComputePathCoverage_Goal {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ComputePathCoverage_Goal::default())
  }
}

impl rosidl_runtime_rs::Message for ComputePathCoverage_Goal {
  type RmwMsg = super::action::rmw::ComputePathCoverage_Goal;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        generate_headband: msg.generate_headband,
        frame_id: msg.frame_id.as_str().into(),
        polygon: geometry_msgs::msg::Polygon::into_rmw_message(std::borrow::Cow::Owned(msg.polygon)).into_owned(),
        goal_pose: geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Owned(msg.goal_pose)).into_owned(),
        reached_start: msg.reached_start,
        mode: super::msg::NavigationMode::into_rmw_message(std::borrow::Cow::Owned(msg.mode)).into_owned(),
        headband_mode: super::msg::HeadbandMode::into_rmw_message(std::borrow::Cow::Owned(msg.headband_mode)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      generate_headband: msg.generate_headband,
        frame_id: msg.frame_id.as_str().into(),
        polygon: geometry_msgs::msg::Polygon::into_rmw_message(std::borrow::Cow::Borrowed(&msg.polygon)).into_owned(),
        goal_pose: geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_pose)).into_owned(),
      reached_start: msg.reached_start,
        mode: super::msg::NavigationMode::into_rmw_message(std::borrow::Cow::Borrowed(&msg.mode)).into_owned(),
        headband_mode: super::msg::HeadbandMode::into_rmw_message(std::borrow::Cow::Borrowed(&msg.headband_mode)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      generate_headband: msg.generate_headband,
      frame_id: msg.frame_id.to_string(),
      polygon: geometry_msgs::msg::Polygon::from_rmw_message(msg.polygon),
      goal_pose: geometry_msgs::msg::PoseStamped::from_rmw_message(msg.goal_pose),
      reached_start: msg.reached_start,
      mode: super::msg::NavigationMode::from_rmw_message(msg.mode),
      headband_mode: super::msg::HeadbandMode::from_rmw_message(msg.headband_mode),
    }
  }
}


// Corresponds to iris_interfaces__action__ComputePathCoverage_Result

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ComputePathCoverage_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: super::msg::NavigationMode,


    // This member is not documented.
    #[allow(missing_docs)]
    pub start_pose: geometry_msgs::msg::PoseStamped,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cleaning_path: nav_msgs::msg::Path,


    // This member is not documented.
    #[allow(missing_docs)]
    pub edge_cleaning_path: nav_msgs::msg::Path,


    // This member is not documented.
    #[allow(missing_docs)]
    pub planning_time: builtin_interfaces::msg::Duration,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub resolution: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub velocities: Vec<f32>,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ComputePathCoverage_Result::default())
  }
}

impl rosidl_runtime_rs::Message for ComputePathCoverage_Result {
  type RmwMsg = super::action::rmw::ComputePathCoverage_Result;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mode: super::msg::NavigationMode::into_rmw_message(std::borrow::Cow::Owned(msg.mode)).into_owned(),
        start_pose: geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Owned(msg.start_pose)).into_owned(),
        cleaning_path: nav_msgs::msg::Path::into_rmw_message(std::borrow::Cow::Owned(msg.cleaning_path)).into_owned(),
        edge_cleaning_path: nav_msgs::msg::Path::into_rmw_message(std::borrow::Cow::Owned(msg.edge_cleaning_path)).into_owned(),
        planning_time: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Owned(msg.planning_time)).into_owned(),
        result: msg.result,
        resolution: msg.resolution,
        velocities: msg.velocities.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mode: super::msg::NavigationMode::into_rmw_message(std::borrow::Cow::Borrowed(&msg.mode)).into_owned(),
        start_pose: geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Borrowed(&msg.start_pose)).into_owned(),
        cleaning_path: nav_msgs::msg::Path::into_rmw_message(std::borrow::Cow::Borrowed(&msg.cleaning_path)).into_owned(),
        edge_cleaning_path: nav_msgs::msg::Path::into_rmw_message(std::borrow::Cow::Borrowed(&msg.edge_cleaning_path)).into_owned(),
        planning_time: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Borrowed(&msg.planning_time)).into_owned(),
      result: msg.result,
      resolution: msg.resolution,
        velocities: msg.velocities.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      mode: super::msg::NavigationMode::from_rmw_message(msg.mode),
      start_pose: geometry_msgs::msg::PoseStamped::from_rmw_message(msg.start_pose),
      cleaning_path: nav_msgs::msg::Path::from_rmw_message(msg.cleaning_path),
      edge_cleaning_path: nav_msgs::msg::Path::from_rmw_message(msg.edge_cleaning_path),
      planning_time: builtin_interfaces::msg::Duration::from_rmw_message(msg.planning_time),
      result: msg.result,
      resolution: msg.resolution,
      velocities: msg.velocities
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to iris_interfaces__action__ComputePathCoverage_Feedback

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ComputePathCoverage_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for ComputePathCoverage_Feedback {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ComputePathCoverage_Feedback::default())
  }
}

impl rosidl_runtime_rs::Message for ComputePathCoverage_Feedback {
  type RmwMsg = super::action::rmw::ComputePathCoverage_Feedback;

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


// Corresponds to iris_interfaces__action__ComputePathCoverage_FeedbackMessage

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ComputePathCoverage_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::action::ComputePathCoverage_Feedback,

}



impl Default for ComputePathCoverage_FeedbackMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ComputePathCoverage_FeedbackMessage::default())
  }
}

impl rosidl_runtime_rs::Message for ComputePathCoverage_FeedbackMessage {
  type RmwMsg = super::action::rmw::ComputePathCoverage_FeedbackMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        feedback: super::action::ComputePathCoverage_Feedback::into_rmw_message(std::borrow::Cow::Owned(msg.feedback)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        feedback: super::action::ComputePathCoverage_Feedback::into_rmw_message(std::borrow::Cow::Borrowed(&msg.feedback)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      feedback: super::action::ComputePathCoverage_Feedback::from_rmw_message(msg.feedback),
    }
  }
}


// Corresponds to iris_interfaces__action__NavigatePathCoverage_Goal

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigatePathCoverage_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub polygon_frame_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub polygon: geometry_msgs::msg::Polygon,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_pose: geometry_msgs::msg::PoseStamped,


    // This member is not documented.
    #[allow(missing_docs)]
    pub behavior_tree: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: super::msg::NavigationMode,

}



impl Default for NavigatePathCoverage_Goal {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::NavigatePathCoverage_Goal::default())
  }
}

impl rosidl_runtime_rs::Message for NavigatePathCoverage_Goal {
  type RmwMsg = super::action::rmw::NavigatePathCoverage_Goal;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        polygon_frame_id: msg.polygon_frame_id.as_str().into(),
        polygon: geometry_msgs::msg::Polygon::into_rmw_message(std::borrow::Cow::Owned(msg.polygon)).into_owned(),
        goal_pose: geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Owned(msg.goal_pose)).into_owned(),
        behavior_tree: msg.behavior_tree.as_str().into(),
        mode: super::msg::NavigationMode::into_rmw_message(std::borrow::Cow::Owned(msg.mode)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        polygon_frame_id: msg.polygon_frame_id.as_str().into(),
        polygon: geometry_msgs::msg::Polygon::into_rmw_message(std::borrow::Cow::Borrowed(&msg.polygon)).into_owned(),
        goal_pose: geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_pose)).into_owned(),
        behavior_tree: msg.behavior_tree.as_str().into(),
        mode: super::msg::NavigationMode::into_rmw_message(std::borrow::Cow::Borrowed(&msg.mode)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      polygon_frame_id: msg.polygon_frame_id.to_string(),
      polygon: geometry_msgs::msg::Polygon::from_rmw_message(msg.polygon),
      goal_pose: geometry_msgs::msg::PoseStamped::from_rmw_message(msg.goal_pose),
      behavior_tree: msg.behavior_tree.to_string(),
      mode: super::msg::NavigationMode::from_rmw_message(msg.mode),
    }
  }
}


// Corresponds to iris_interfaces__action__NavigatePathCoverage_Result

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::NavigatePathCoverage_Result::default())
  }
}

impl rosidl_runtime_rs::Message for NavigatePathCoverage_Result {
  type RmwMsg = super::action::rmw::NavigatePathCoverage_Result;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: msg.result,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      result: msg.result,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: msg.result,
    }
  }
}


// Corresponds to iris_interfaces__action__NavigatePathCoverage_Feedback

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigatePathCoverage_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub current_pose: geometry_msgs::msg::PoseStamped,


    // This member is not documented.
    #[allow(missing_docs)]
    pub navigation_time: builtin_interfaces::msg::Duration,


    // This member is not documented.
    #[allow(missing_docs)]
    pub estimated_time_remaining: builtin_interfaces::msg::Duration,


    // This member is not documented.
    #[allow(missing_docs)]
    pub distance_remaining: f32,

}



impl Default for NavigatePathCoverage_Feedback {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::NavigatePathCoverage_Feedback::default())
  }
}

impl rosidl_runtime_rs::Message for NavigatePathCoverage_Feedback {
  type RmwMsg = super::action::rmw::NavigatePathCoverage_Feedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        current_pose: geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Owned(msg.current_pose)).into_owned(),
        navigation_time: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Owned(msg.navigation_time)).into_owned(),
        estimated_time_remaining: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Owned(msg.estimated_time_remaining)).into_owned(),
        distance_remaining: msg.distance_remaining,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        current_pose: geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Borrowed(&msg.current_pose)).into_owned(),
        navigation_time: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Borrowed(&msg.navigation_time)).into_owned(),
        estimated_time_remaining: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Borrowed(&msg.estimated_time_remaining)).into_owned(),
      distance_remaining: msg.distance_remaining,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      current_pose: geometry_msgs::msg::PoseStamped::from_rmw_message(msg.current_pose),
      navigation_time: builtin_interfaces::msg::Duration::from_rmw_message(msg.navigation_time),
      estimated_time_remaining: builtin_interfaces::msg::Duration::from_rmw_message(msg.estimated_time_remaining),
      distance_remaining: msg.distance_remaining,
    }
  }
}


// Corresponds to iris_interfaces__action__NavigatePathCoverage_FeedbackMessage

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigatePathCoverage_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::action::NavigatePathCoverage_Feedback,

}



impl Default for NavigatePathCoverage_FeedbackMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::NavigatePathCoverage_FeedbackMessage::default())
  }
}

impl rosidl_runtime_rs::Message for NavigatePathCoverage_FeedbackMessage {
  type RmwMsg = super::action::rmw::NavigatePathCoverage_FeedbackMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        feedback: super::action::NavigatePathCoverage_Feedback::into_rmw_message(std::borrow::Cow::Owned(msg.feedback)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        feedback: super::action::NavigatePathCoverage_Feedback::into_rmw_message(std::borrow::Cow::Borrowed(&msg.feedback)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      feedback: super::action::NavigatePathCoverage_Feedback::from_rmw_message(msg.feedback),
    }
  }
}


// Corresponds to iris_interfaces__action__PathCoverageController_Goal

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PathCoverageController_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub resolution: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub velocities: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cleaning_point: nav_msgs::msg::Path,


    // This member is not documented.
    #[allow(missing_docs)]
    pub edge_cleaning_point: nav_msgs::msg::Path,

}



impl Default for PathCoverageController_Goal {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::PathCoverageController_Goal::default())
  }
}

impl rosidl_runtime_rs::Message for PathCoverageController_Goal {
  type RmwMsg = super::action::rmw::PathCoverageController_Goal;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        resolution: msg.resolution,
        velocities: msg.velocities.into(),
        cleaning_point: nav_msgs::msg::Path::into_rmw_message(std::borrow::Cow::Owned(msg.cleaning_point)).into_owned(),
        edge_cleaning_point: nav_msgs::msg::Path::into_rmw_message(std::borrow::Cow::Owned(msg.edge_cleaning_point)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      resolution: msg.resolution,
        velocities: msg.velocities.as_slice().into(),
        cleaning_point: nav_msgs::msg::Path::into_rmw_message(std::borrow::Cow::Borrowed(&msg.cleaning_point)).into_owned(),
        edge_cleaning_point: nav_msgs::msg::Path::into_rmw_message(std::borrow::Cow::Borrowed(&msg.edge_cleaning_point)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      resolution: msg.resolution,
      velocities: msg.velocities
          .into_iter()
          .collect(),
      cleaning_point: nav_msgs::msg::Path::from_rmw_message(msg.cleaning_point),
      edge_cleaning_point: nav_msgs::msg::Path::from_rmw_message(msg.edge_cleaning_point),
    }
  }
}


// Corresponds to iris_interfaces__action__PathCoverageController_Result

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::PathCoverageController_Result::default())
  }
}

impl rosidl_runtime_rs::Message for PathCoverageController_Result {
  type RmwMsg = super::action::rmw::PathCoverageController_Result;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: msg.result,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      result: msg.result,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: msg.result,
    }
  }
}


// Corresponds to iris_interfaces__action__PathCoverageController_Feedback

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PathCoverageController_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub current_target_pose: geometry_msgs::msg::PoseStamped,


    // This member is not documented.
    #[allow(missing_docs)]
    pub navigation_time: builtin_interfaces::msg::Duration,


    // This member is not documented.
    #[allow(missing_docs)]
    pub estimated_time_remaining: builtin_interfaces::msg::Duration,


    // This member is not documented.
    #[allow(missing_docs)]
    pub distance_remaining: f32,

}



impl Default for PathCoverageController_Feedback {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::PathCoverageController_Feedback::default())
  }
}

impl rosidl_runtime_rs::Message for PathCoverageController_Feedback {
  type RmwMsg = super::action::rmw::PathCoverageController_Feedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        current_target_pose: geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Owned(msg.current_target_pose)).into_owned(),
        navigation_time: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Owned(msg.navigation_time)).into_owned(),
        estimated_time_remaining: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Owned(msg.estimated_time_remaining)).into_owned(),
        distance_remaining: msg.distance_remaining,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        current_target_pose: geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Borrowed(&msg.current_target_pose)).into_owned(),
        navigation_time: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Borrowed(&msg.navigation_time)).into_owned(),
        estimated_time_remaining: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Borrowed(&msg.estimated_time_remaining)).into_owned(),
      distance_remaining: msg.distance_remaining,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      current_target_pose: geometry_msgs::msg::PoseStamped::from_rmw_message(msg.current_target_pose),
      navigation_time: builtin_interfaces::msg::Duration::from_rmw_message(msg.navigation_time),
      estimated_time_remaining: builtin_interfaces::msg::Duration::from_rmw_message(msg.estimated_time_remaining),
      distance_remaining: msg.distance_remaining,
    }
  }
}


// Corresponds to iris_interfaces__action__PathCoverageController_FeedbackMessage

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PathCoverageController_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::action::PathCoverageController_Feedback,

}



impl Default for PathCoverageController_FeedbackMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::PathCoverageController_FeedbackMessage::default())
  }
}

impl rosidl_runtime_rs::Message for PathCoverageController_FeedbackMessage {
  type RmwMsg = super::action::rmw::PathCoverageController_FeedbackMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        feedback: super::action::PathCoverageController_Feedback::into_rmw_message(std::borrow::Cow::Owned(msg.feedback)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        feedback: super::action::PathCoverageController_Feedback::into_rmw_message(std::borrow::Cow::Borrowed(&msg.feedback)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      feedback: super::action::PathCoverageController_Feedback::from_rmw_message(msg.feedback),
    }
  }
}






// Corresponds to iris_interfaces__action__ComputePathCoverage_SendGoal_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ComputePathCoverage_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::action::ComputePathCoverage_Goal,

}



impl Default for ComputePathCoverage_SendGoal_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ComputePathCoverage_SendGoal_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ComputePathCoverage_SendGoal_Request {
  type RmwMsg = super::action::rmw::ComputePathCoverage_SendGoal_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        goal: super::action::ComputePathCoverage_Goal::into_rmw_message(std::borrow::Cow::Owned(msg.goal)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        goal: super::action::ComputePathCoverage_Goal::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      goal: super::action::ComputePathCoverage_Goal::from_rmw_message(msg.goal),
    }
  }
}


// Corresponds to iris_interfaces__action__ComputePathCoverage_SendGoal_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ComputePathCoverage_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

}



impl Default for ComputePathCoverage_SendGoal_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ComputePathCoverage_SendGoal_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ComputePathCoverage_SendGoal_Response {
  type RmwMsg = super::action::rmw::ComputePathCoverage_SendGoal_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      accepted: msg.accepted,
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
    }
  }
}


// Corresponds to iris_interfaces__action__ComputePathCoverage_GetResult_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ComputePathCoverage_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,

}



impl Default for ComputePathCoverage_GetResult_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ComputePathCoverage_GetResult_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ComputePathCoverage_GetResult_Request {
  type RmwMsg = super::action::rmw::ComputePathCoverage_GetResult_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
    }
  }
}


// Corresponds to iris_interfaces__action__ComputePathCoverage_GetResult_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ComputePathCoverage_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::action::ComputePathCoverage_Result,

}



impl Default for ComputePathCoverage_GetResult_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ComputePathCoverage_GetResult_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ComputePathCoverage_GetResult_Response {
  type RmwMsg = super::action::rmw::ComputePathCoverage_GetResult_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
        result: super::action::ComputePathCoverage_Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
        result: super::action::ComputePathCoverage_Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
      result: super::action::ComputePathCoverage_Result::from_rmw_message(msg.result),
    }
  }
}


// Corresponds to iris_interfaces__action__NavigatePathCoverage_SendGoal_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigatePathCoverage_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::action::NavigatePathCoverage_Goal,

}



impl Default for NavigatePathCoverage_SendGoal_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::NavigatePathCoverage_SendGoal_Request::default())
  }
}

impl rosidl_runtime_rs::Message for NavigatePathCoverage_SendGoal_Request {
  type RmwMsg = super::action::rmw::NavigatePathCoverage_SendGoal_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        goal: super::action::NavigatePathCoverage_Goal::into_rmw_message(std::borrow::Cow::Owned(msg.goal)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        goal: super::action::NavigatePathCoverage_Goal::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      goal: super::action::NavigatePathCoverage_Goal::from_rmw_message(msg.goal),
    }
  }
}


// Corresponds to iris_interfaces__action__NavigatePathCoverage_SendGoal_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigatePathCoverage_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

}



impl Default for NavigatePathCoverage_SendGoal_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::NavigatePathCoverage_SendGoal_Response::default())
  }
}

impl rosidl_runtime_rs::Message for NavigatePathCoverage_SendGoal_Response {
  type RmwMsg = super::action::rmw::NavigatePathCoverage_SendGoal_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      accepted: msg.accepted,
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
    }
  }
}


// Corresponds to iris_interfaces__action__NavigatePathCoverage_GetResult_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigatePathCoverage_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,

}



impl Default for NavigatePathCoverage_GetResult_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::NavigatePathCoverage_GetResult_Request::default())
  }
}

impl rosidl_runtime_rs::Message for NavigatePathCoverage_GetResult_Request {
  type RmwMsg = super::action::rmw::NavigatePathCoverage_GetResult_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
    }
  }
}


// Corresponds to iris_interfaces__action__NavigatePathCoverage_GetResult_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigatePathCoverage_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::action::NavigatePathCoverage_Result,

}



impl Default for NavigatePathCoverage_GetResult_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::NavigatePathCoverage_GetResult_Response::default())
  }
}

impl rosidl_runtime_rs::Message for NavigatePathCoverage_GetResult_Response {
  type RmwMsg = super::action::rmw::NavigatePathCoverage_GetResult_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
        result: super::action::NavigatePathCoverage_Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
        result: super::action::NavigatePathCoverage_Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
      result: super::action::NavigatePathCoverage_Result::from_rmw_message(msg.result),
    }
  }
}


// Corresponds to iris_interfaces__action__PathCoverageController_SendGoal_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PathCoverageController_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::action::PathCoverageController_Goal,

}



impl Default for PathCoverageController_SendGoal_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::PathCoverageController_SendGoal_Request::default())
  }
}

impl rosidl_runtime_rs::Message for PathCoverageController_SendGoal_Request {
  type RmwMsg = super::action::rmw::PathCoverageController_SendGoal_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        goal: super::action::PathCoverageController_Goal::into_rmw_message(std::borrow::Cow::Owned(msg.goal)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        goal: super::action::PathCoverageController_Goal::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      goal: super::action::PathCoverageController_Goal::from_rmw_message(msg.goal),
    }
  }
}


// Corresponds to iris_interfaces__action__PathCoverageController_SendGoal_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PathCoverageController_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

}



impl Default for PathCoverageController_SendGoal_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::PathCoverageController_SendGoal_Response::default())
  }
}

impl rosidl_runtime_rs::Message for PathCoverageController_SendGoal_Response {
  type RmwMsg = super::action::rmw::PathCoverageController_SendGoal_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      accepted: msg.accepted,
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
    }
  }
}


// Corresponds to iris_interfaces__action__PathCoverageController_GetResult_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PathCoverageController_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,

}



impl Default for PathCoverageController_GetResult_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::PathCoverageController_GetResult_Request::default())
  }
}

impl rosidl_runtime_rs::Message for PathCoverageController_GetResult_Request {
  type RmwMsg = super::action::rmw::PathCoverageController_GetResult_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
    }
  }
}


// Corresponds to iris_interfaces__action__PathCoverageController_GetResult_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PathCoverageController_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::action::PathCoverageController_Result,

}



impl Default for PathCoverageController_GetResult_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::PathCoverageController_GetResult_Response::default())
  }
}

impl rosidl_runtime_rs::Message for PathCoverageController_GetResult_Response {
  type RmwMsg = super::action::rmw::PathCoverageController_GetResult_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
        result: super::action::PathCoverageController_Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
        result: super::action::PathCoverageController_Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
      result: super::action::PathCoverageController_Result::from_rmw_message(msg.result),
    }
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






#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_action_type_support_handle__iris_interfaces__action__ComputePathCoverage() -> *const std::ffi::c_void;
}

// Corresponds to iris_interfaces__action__ComputePathCoverage
#[allow(missing_docs, non_camel_case_types)]
pub struct ComputePathCoverage;

impl rosidl_runtime_rs::Action for ComputePathCoverage {
  // --- Associated types for client library users ---
  /// The goal message defined in the action definition.
  type Goal = ComputePathCoverage_Goal;

  /// The result message defined in the action definition.
  type Result = ComputePathCoverage_Result;

  /// The feedback message defined in the action definition.
  type Feedback = ComputePathCoverage_Feedback;

  // --- Associated types for client library implementation ---
  /// The feedback message with generic fields which wraps the feedback message.
  type FeedbackMessage = super::action::ComputePathCoverage_FeedbackMessage;

  /// The send_goal service using a wrapped version of the goal message as a request.
  type SendGoalService = super::action::ComputePathCoverage_SendGoal;

  /// The generic service to cancel a goal.
  type CancelGoalService = action_msgs::srv::rmw::CancelGoal;

  /// The get_result service using a wrapped version of the result message as a response.
  type GetResultService = super::action::ComputePathCoverage_GetResult;

  // --- Methods for client library implementation ---
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_action_type_support_handle__iris_interfaces__action__ComputePathCoverage() }
  }

  fn create_goal_request(
    goal_id: &[u8; 16],
    goal: super::action::rmw::ComputePathCoverage_Goal,
  ) -> super::action::rmw::ComputePathCoverage_SendGoal_Request {
   super::action::rmw::ComputePathCoverage_SendGoal_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
      goal,
    }
  }

  fn split_goal_request(
    request: super::action::rmw::ComputePathCoverage_SendGoal_Request,
  ) -> (
    [u8; 16],
   super::action::rmw::ComputePathCoverage_Goal,
  ) {
    (request.goal_id.uuid, request.goal)
  }

  fn create_goal_response(
    accepted: bool,
    stamp: (i32, u32),
  ) -> super::action::rmw::ComputePathCoverage_SendGoal_Response {
   super::action::rmw::ComputePathCoverage_SendGoal_Response {
      accepted,
      stamp: builtin_interfaces::msg::rmw::Time {
        sec: stamp.0,
        nanosec: stamp.1,
      },
    }
  }

  fn get_goal_response_accepted(
    response: &super::action::rmw::ComputePathCoverage_SendGoal_Response,
  ) -> bool {
    response.accepted
  }

  fn get_goal_response_stamp(
    response: &super::action::rmw::ComputePathCoverage_SendGoal_Response,
  ) -> (i32, u32) {
    (response.stamp.sec, response.stamp.nanosec)
  }

  fn create_feedback_message(
    goal_id: &[u8; 16],
    feedback: super::action::rmw::ComputePathCoverage_Feedback,
  ) -> super::action::rmw::ComputePathCoverage_FeedbackMessage {
    let mut message = super::action::rmw::ComputePathCoverage_FeedbackMessage::default();
    message.goal_id.uuid = *goal_id;
    message.feedback = feedback;
    message
  }

  fn split_feedback_message(
    feedback: super::action::rmw::ComputePathCoverage_FeedbackMessage,
  ) -> (
    [u8; 16],
   super::action::rmw::ComputePathCoverage_Feedback,
  ) {
    (feedback.goal_id.uuid, feedback.feedback)
  }

  fn create_result_request(
    goal_id: &[u8; 16],
  ) -> super::action::rmw::ComputePathCoverage_GetResult_Request {
   super::action::rmw::ComputePathCoverage_GetResult_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
    }
  }

  fn get_result_request_uuid(
    request: &super::action::rmw::ComputePathCoverage_GetResult_Request,
  ) -> &[u8; 16] {
    &request.goal_id.uuid
  }

  fn create_result_response(
    status: i8,
    result: super::action::rmw::ComputePathCoverage_Result,
  ) -> super::action::rmw::ComputePathCoverage_GetResult_Response {
   super::action::rmw::ComputePathCoverage_GetResult_Response {
      status,
      result,
    }
  }

  fn split_result_response(
    response: super::action::rmw::ComputePathCoverage_GetResult_Response
  ) -> (
    i8,
   super::action::rmw::ComputePathCoverage_Result,
  ) {
    (response.status, response.result)
  }
}




#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_action_type_support_handle__iris_interfaces__action__NavigatePathCoverage() -> *const std::ffi::c_void;
}

// Corresponds to iris_interfaces__action__NavigatePathCoverage
#[allow(missing_docs, non_camel_case_types)]
pub struct NavigatePathCoverage;

impl rosidl_runtime_rs::Action for NavigatePathCoverage {
  // --- Associated types for client library users ---
  /// The goal message defined in the action definition.
  type Goal = NavigatePathCoverage_Goal;

  /// The result message defined in the action definition.
  type Result = NavigatePathCoverage_Result;

  /// The feedback message defined in the action definition.
  type Feedback = NavigatePathCoverage_Feedback;

  // --- Associated types for client library implementation ---
  /// The feedback message with generic fields which wraps the feedback message.
  type FeedbackMessage = super::action::NavigatePathCoverage_FeedbackMessage;

  /// The send_goal service using a wrapped version of the goal message as a request.
  type SendGoalService = super::action::NavigatePathCoverage_SendGoal;

  /// The generic service to cancel a goal.
  type CancelGoalService = action_msgs::srv::rmw::CancelGoal;

  /// The get_result service using a wrapped version of the result message as a response.
  type GetResultService = super::action::NavigatePathCoverage_GetResult;

  // --- Methods for client library implementation ---
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_action_type_support_handle__iris_interfaces__action__NavigatePathCoverage() }
  }

  fn create_goal_request(
    goal_id: &[u8; 16],
    goal: super::action::rmw::NavigatePathCoverage_Goal,
  ) -> super::action::rmw::NavigatePathCoverage_SendGoal_Request {
   super::action::rmw::NavigatePathCoverage_SendGoal_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
      goal,
    }
  }

  fn split_goal_request(
    request: super::action::rmw::NavigatePathCoverage_SendGoal_Request,
  ) -> (
    [u8; 16],
   super::action::rmw::NavigatePathCoverage_Goal,
  ) {
    (request.goal_id.uuid, request.goal)
  }

  fn create_goal_response(
    accepted: bool,
    stamp: (i32, u32),
  ) -> super::action::rmw::NavigatePathCoverage_SendGoal_Response {
   super::action::rmw::NavigatePathCoverage_SendGoal_Response {
      accepted,
      stamp: builtin_interfaces::msg::rmw::Time {
        sec: stamp.0,
        nanosec: stamp.1,
      },
    }
  }

  fn get_goal_response_accepted(
    response: &super::action::rmw::NavigatePathCoverage_SendGoal_Response,
  ) -> bool {
    response.accepted
  }

  fn get_goal_response_stamp(
    response: &super::action::rmw::NavigatePathCoverage_SendGoal_Response,
  ) -> (i32, u32) {
    (response.stamp.sec, response.stamp.nanosec)
  }

  fn create_feedback_message(
    goal_id: &[u8; 16],
    feedback: super::action::rmw::NavigatePathCoverage_Feedback,
  ) -> super::action::rmw::NavigatePathCoverage_FeedbackMessage {
    let mut message = super::action::rmw::NavigatePathCoverage_FeedbackMessage::default();
    message.goal_id.uuid = *goal_id;
    message.feedback = feedback;
    message
  }

  fn split_feedback_message(
    feedback: super::action::rmw::NavigatePathCoverage_FeedbackMessage,
  ) -> (
    [u8; 16],
   super::action::rmw::NavigatePathCoverage_Feedback,
  ) {
    (feedback.goal_id.uuid, feedback.feedback)
  }

  fn create_result_request(
    goal_id: &[u8; 16],
  ) -> super::action::rmw::NavigatePathCoverage_GetResult_Request {
   super::action::rmw::NavigatePathCoverage_GetResult_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
    }
  }

  fn get_result_request_uuid(
    request: &super::action::rmw::NavigatePathCoverage_GetResult_Request,
  ) -> &[u8; 16] {
    &request.goal_id.uuid
  }

  fn create_result_response(
    status: i8,
    result: super::action::rmw::NavigatePathCoverage_Result,
  ) -> super::action::rmw::NavigatePathCoverage_GetResult_Response {
   super::action::rmw::NavigatePathCoverage_GetResult_Response {
      status,
      result,
    }
  }

  fn split_result_response(
    response: super::action::rmw::NavigatePathCoverage_GetResult_Response
  ) -> (
    i8,
   super::action::rmw::NavigatePathCoverage_Result,
  ) {
    (response.status, response.result)
  }
}




#[link(name = "iris_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_action_type_support_handle__iris_interfaces__action__PathCoverageController() -> *const std::ffi::c_void;
}

// Corresponds to iris_interfaces__action__PathCoverageController
#[allow(missing_docs, non_camel_case_types)]
pub struct PathCoverageController;

impl rosidl_runtime_rs::Action for PathCoverageController {
  // --- Associated types for client library users ---
  /// The goal message defined in the action definition.
  type Goal = PathCoverageController_Goal;

  /// The result message defined in the action definition.
  type Result = PathCoverageController_Result;

  /// The feedback message defined in the action definition.
  type Feedback = PathCoverageController_Feedback;

  // --- Associated types for client library implementation ---
  /// The feedback message with generic fields which wraps the feedback message.
  type FeedbackMessage = super::action::PathCoverageController_FeedbackMessage;

  /// The send_goal service using a wrapped version of the goal message as a request.
  type SendGoalService = super::action::PathCoverageController_SendGoal;

  /// The generic service to cancel a goal.
  type CancelGoalService = action_msgs::srv::rmw::CancelGoal;

  /// The get_result service using a wrapped version of the result message as a response.
  type GetResultService = super::action::PathCoverageController_GetResult;

  // --- Methods for client library implementation ---
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_action_type_support_handle__iris_interfaces__action__PathCoverageController() }
  }

  fn create_goal_request(
    goal_id: &[u8; 16],
    goal: super::action::rmw::PathCoverageController_Goal,
  ) -> super::action::rmw::PathCoverageController_SendGoal_Request {
   super::action::rmw::PathCoverageController_SendGoal_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
      goal,
    }
  }

  fn split_goal_request(
    request: super::action::rmw::PathCoverageController_SendGoal_Request,
  ) -> (
    [u8; 16],
   super::action::rmw::PathCoverageController_Goal,
  ) {
    (request.goal_id.uuid, request.goal)
  }

  fn create_goal_response(
    accepted: bool,
    stamp: (i32, u32),
  ) -> super::action::rmw::PathCoverageController_SendGoal_Response {
   super::action::rmw::PathCoverageController_SendGoal_Response {
      accepted,
      stamp: builtin_interfaces::msg::rmw::Time {
        sec: stamp.0,
        nanosec: stamp.1,
      },
    }
  }

  fn get_goal_response_accepted(
    response: &super::action::rmw::PathCoverageController_SendGoal_Response,
  ) -> bool {
    response.accepted
  }

  fn get_goal_response_stamp(
    response: &super::action::rmw::PathCoverageController_SendGoal_Response,
  ) -> (i32, u32) {
    (response.stamp.sec, response.stamp.nanosec)
  }

  fn create_feedback_message(
    goal_id: &[u8; 16],
    feedback: super::action::rmw::PathCoverageController_Feedback,
  ) -> super::action::rmw::PathCoverageController_FeedbackMessage {
    let mut message = super::action::rmw::PathCoverageController_FeedbackMessage::default();
    message.goal_id.uuid = *goal_id;
    message.feedback = feedback;
    message
  }

  fn split_feedback_message(
    feedback: super::action::rmw::PathCoverageController_FeedbackMessage,
  ) -> (
    [u8; 16],
   super::action::rmw::PathCoverageController_Feedback,
  ) {
    (feedback.goal_id.uuid, feedback.feedback)
  }

  fn create_result_request(
    goal_id: &[u8; 16],
  ) -> super::action::rmw::PathCoverageController_GetResult_Request {
   super::action::rmw::PathCoverageController_GetResult_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
    }
  }

  fn get_result_request_uuid(
    request: &super::action::rmw::PathCoverageController_GetResult_Request,
  ) -> &[u8; 16] {
    &request.goal_id.uuid
  }

  fn create_result_response(
    status: i8,
    result: super::action::rmw::PathCoverageController_Result,
  ) -> super::action::rmw::PathCoverageController_GetResult_Response {
   super::action::rmw::PathCoverageController_GetResult_Response {
      status,
      result,
    }
  }

  fn split_result_response(
    response: super::action::rmw::PathCoverageController_GetResult_Response
  ) -> (
    i8,
   super::action::rmw::PathCoverageController_Result,
  ) {
    (response.status, response.result)
  }
}


