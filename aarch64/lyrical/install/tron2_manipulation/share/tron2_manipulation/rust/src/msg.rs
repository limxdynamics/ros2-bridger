#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to tron2_manipulation__msg__arm_pose

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct arm_pose {
    /// unit: m
    pub left_arm_pos: [f32; 7],

    /// unit: m
    pub right_arm_pos: [f32; 7],

}



impl Default for arm_pose {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::arm_pose::default())
  }
}

impl rosidl_runtime_rs::Message for arm_pose {
  type RmwMsg = super::msg::rmw::arm_pose;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        left_arm_pos: msg.left_arm_pos,
        right_arm_pos: msg.right_arm_pos,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        left_arm_pos: msg.left_arm_pos,
        right_arm_pos: msg.right_arm_pos,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      left_arm_pos: msg.left_arm_pos,
      right_arm_pos: msg.right_arm_pos,
    }
  }
}


// Corresponds to tron2_manipulation__msg__arm_status

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct arm_status {
    /// unit: m
    pub left_arm_pos: [f32; 7],

    /// unit: m
    pub right_arm_pos: [f32; 7],

}



impl Default for arm_status {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::arm_status::default())
  }
}

impl rosidl_runtime_rs::Message for arm_status {
  type RmwMsg = super::msg::rmw::arm_status;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        left_arm_pos: msg.left_arm_pos,
        right_arm_pos: msg.right_arm_pos,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        left_arm_pos: msg.left_arm_pos,
        right_arm_pos: msg.right_arm_pos,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      left_arm_pos: msg.left_arm_pos,
      right_arm_pos: msg.right_arm_pos,
    }
  }
}


