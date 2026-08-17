#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to upper_body__msg__arm_servo

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct arm_servo {
    /// servoJ or servoP
    pub servo_type: std::string::String,

    /// servoJ
    /// unit: rad
    pub left_arm_joints: Vec<f32>,

    /// unit: rad
    pub right_arm_joints: Vec<f32>,

    /// servoP
    /// [px py pz Qx Qy Qz Qw] unit: m
    pub left_arm_pos: [f32; 7],

    /// unit: mz
    pub right_arm_pos: [f32; 7],

}



impl Default for arm_servo {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::arm_servo::default())
  }
}

impl rosidl_runtime_rs::Message for arm_servo {
  type RmwMsg = super::msg::rmw::arm_servo;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        servo_type: msg.servo_type.as_str().into(),
        left_arm_joints: msg.left_arm_joints.into(),
        right_arm_joints: msg.right_arm_joints.into(),
        left_arm_pos: msg.left_arm_pos,
        right_arm_pos: msg.right_arm_pos,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        servo_type: msg.servo_type.as_str().into(),
        left_arm_joints: msg.left_arm_joints.as_slice().into(),
        right_arm_joints: msg.right_arm_joints.as_slice().into(),
        left_arm_pos: msg.left_arm_pos,
        right_arm_pos: msg.right_arm_pos,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      servo_type: msg.servo_type.to_string(),
      left_arm_joints: msg.left_arm_joints
          .into_iter()
          .collect(),
      right_arm_joints: msg.right_arm_joints
          .into_iter()
          .collect(),
      left_arm_pos: msg.left_arm_pos,
      right_arm_pos: msg.right_arm_pos,
    }
  }
}


// Corresponds to upper_body__msg__arm_status

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


// Corresponds to upper_body__msg__servoJ

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct servoJ {
    /// unit: rad
    pub joints: Vec<f32>,

}



impl Default for servoJ {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::servoJ::default())
  }
}

impl rosidl_runtime_rs::Message for servoJ {
  type RmwMsg = super::msg::rmw::servoJ;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        joints: msg.joints.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        joints: msg.joints.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      joints: msg.joints
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to upper_body__msg__waist_cmd

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct waist_cmd {
    /// ["waist_yaw_joint", "waist_roll_joint", "waist_pitch_joint"] units: rad
    pub waistCMD: [f32; 3],

}



impl Default for waist_cmd {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::waist_cmd::default())
  }
}

impl rosidl_runtime_rs::Message for waist_cmd {
  type RmwMsg = super::msg::rmw::waist_cmd;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        waistCMD: msg.waistCMD,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        waistCMD: msg.waistCMD,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      waistCMD: msg.waistCMD,
    }
  }
}


