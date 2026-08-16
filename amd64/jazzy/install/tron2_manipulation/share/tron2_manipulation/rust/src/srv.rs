#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to tron2_manipulation__srv__arm_move_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct arm_move_Request {
    /// unit: m
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
        left_arm_pos: msg.left_arm_pos,
        right_arm_pos: msg.right_arm_pos,
        speed: msg.speed,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        left_arm_pos: msg.left_arm_pos,
        right_arm_pos: msg.right_arm_pos,
      speed: msg.speed,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      left_arm_pos: msg.left_arm_pos,
      right_arm_pos: msg.right_arm_pos,
      speed: msg.speed,
    }
  }
}


// Corresponds to tron2_manipulation__srv__arm_move_Response

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






#[link(name = "tron2_manipulation__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__tron2_manipulation__srv__arm_move() -> *const std::ffi::c_void;
}

// Corresponds to tron2_manipulation__srv__arm_move
#[allow(missing_docs, non_camel_case_types)]
pub struct arm_move;

impl rosidl_runtime_rs::Service for arm_move {
    type Request = arm_move_Request;
    type Response = arm_move_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__tron2_manipulation__srv__arm_move() }
    }
}


