#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to upper_body__srv__arm_move_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct arm_move_Request {
    /// moveJ\ moveL\ moveP\ moveWaistArm
    pub move_type: std::string::String,

    /// moveJ
    /// unit: rad
    pub left_arm_joints: Vec<f32>,

    /// unit: rad
    pub right_arm_joints: Vec<f32>,

    /// moveL\ moveP
    /// [px py pz Qx Qy Qz Qw] unit: m
    pub left_arm_pos: [f32; 7],

    /// unit: m
    pub right_arm_pos: [f32; 7],

    /// speed
    /// unit: rad/s or m/s
    pub speed: f32,

}



impl Default for arm_move_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::arm_move_Request::default())
  }
}

impl rosidl_runtime_rs::Message for arm_move_Request {
  type RmwMsg = super::srv::rmw::arm_move_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        move_type: msg.move_type.as_str().into(),
        left_arm_joints: msg.left_arm_joints.into(),
        right_arm_joints: msg.right_arm_joints.into(),
        left_arm_pos: msg.left_arm_pos,
        right_arm_pos: msg.right_arm_pos,
        speed: msg.speed,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        move_type: msg.move_type.as_str().into(),
        left_arm_joints: msg.left_arm_joints.as_slice().into(),
        right_arm_joints: msg.right_arm_joints.as_slice().into(),
        left_arm_pos: msg.left_arm_pos,
        right_arm_pos: msg.right_arm_pos,
      speed: msg.speed,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      move_type: msg.move_type.to_string(),
      left_arm_joints: msg.left_arm_joints
          .into_iter()
          .collect(),
      right_arm_joints: msg.right_arm_joints
          .into_iter()
          .collect(),
      left_arm_pos: msg.left_arm_pos,
      right_arm_pos: msg.right_arm_pos,
      speed: msg.speed,
    }
  }
}


// Corresponds to upper_body__srv__arm_move_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct arm_move_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i32,

}



impl Default for arm_move_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::arm_move_Response::default())
  }
}

impl rosidl_runtime_rs::Message for arm_move_Response {
  type RmwMsg = super::srv::rmw::arm_move_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
    }
  }
}


// Corresponds to upper_body__srv__moveJ_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct moveJ_Request {
    /// unit: rad
    pub joints: Vec<f32>,

    /// unit: rad/s
    pub speed: f32,

}



impl Default for moveJ_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::moveJ_Request::default())
  }
}

impl rosidl_runtime_rs::Message for moveJ_Request {
  type RmwMsg = super::srv::rmw::moveJ_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        joints: msg.joints.into(),
        speed: msg.speed,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        joints: msg.joints.as_slice().into(),
      speed: msg.speed,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      joints: msg.joints
          .into_iter()
          .collect(),
      speed: msg.speed,
    }
  }
}


// Corresponds to upper_body__srv__moveJ_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct moveJ_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i32,

}



impl Default for moveJ_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::moveJ_Response::default())
  }
}

impl rosidl_runtime_rs::Message for moveJ_Response {
  type RmwMsg = super::srv::rmw::moveJ_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
    }
  }
}






#[link(name = "upper_body__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__upper_body__srv__arm_move() -> *const std::ffi::c_void;
}

// Corresponds to upper_body__srv__arm_move
#[allow(missing_docs, non_camel_case_types)]
pub struct arm_move;

impl rosidl_runtime_rs::Service for arm_move {
    type Request = arm_move_Request;
    type Response = arm_move_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__upper_body__srv__arm_move() }
    }
}




#[link(name = "upper_body__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__upper_body__srv__moveJ() -> *const std::ffi::c_void;
}

// Corresponds to upper_body__srv__moveJ
#[allow(missing_docs, non_camel_case_types)]
pub struct moveJ;

impl rosidl_runtime_rs::Service for moveJ {
    type Request = moveJ_Request;
    type Response = moveJ_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__upper_body__srv__moveJ() }
    }
}


