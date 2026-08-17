#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to limx_arm_msgs__srv__DA_motion_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DA_motion_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub functionName: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub left_arm_pos: [f32; 7],


    // This member is not documented.
    #[allow(missing_docs)]
    pub right_arm_pos: [f32; 7],


    // This member is not documented.
    #[allow(missing_docs)]
    pub speed: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub left_arm_joints: [f32; 7],


    // This member is not documented.
    #[allow(missing_docs)]
    pub right_arm_joints: [f32; 7],


    // This member is not documented.
    #[allow(missing_docs)]
    pub headPos: [f32; 2],

}



impl Default for DA_motion_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::DA_motion_Request::default())
  }
}

impl rosidl_runtime_rs::Message for DA_motion_Request {
  type RmwMsg = super::srv::rmw::DA_motion_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        functionName: msg.functionName.as_str().into(),
        left_arm_pos: msg.left_arm_pos,
        right_arm_pos: msg.right_arm_pos,
        speed: msg.speed,
        left_arm_joints: msg.left_arm_joints,
        right_arm_joints: msg.right_arm_joints,
        headPos: msg.headPos,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        functionName: msg.functionName.as_str().into(),
        left_arm_pos: msg.left_arm_pos,
        right_arm_pos: msg.right_arm_pos,
      speed: msg.speed,
        left_arm_joints: msg.left_arm_joints,
        right_arm_joints: msg.right_arm_joints,
        headPos: msg.headPos,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      functionName: msg.functionName.to_string(),
      left_arm_pos: msg.left_arm_pos,
      right_arm_pos: msg.right_arm_pos,
      speed: msg.speed,
      left_arm_joints: msg.left_arm_joints,
      right_arm_joints: msg.right_arm_joints,
      headPos: msg.headPos,
    }
  }
}


// Corresponds to limx_arm_msgs__srv__DA_motion_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DA_motion_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i32,

}



impl Default for DA_motion_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::DA_motion_Response::default())
  }
}

impl rosidl_runtime_rs::Message for DA_motion_Response {
  type RmwMsg = super::srv::rmw::DA_motion_Response;

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


// Corresponds to limx_arm_msgs__srv__desire_pos_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct desire_pos_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub taskNum: i32,

    /// deg/m
    pub desire_pos: [f32; 6],


    // This member is not documented.
    #[allow(missing_docs)]
    pub co_control: bool,

}



impl Default for desire_pos_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::desire_pos_Request::default())
  }
}

impl rosidl_runtime_rs::Message for desire_pos_Request {
  type RmwMsg = super::srv::rmw::desire_pos_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        taskNum: msg.taskNum,
        desire_pos: msg.desire_pos,
        co_control: msg.co_control,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      taskNum: msg.taskNum,
        desire_pos: msg.desire_pos,
      co_control: msg.co_control,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      taskNum: msg.taskNum,
      desire_pos: msg.desire_pos,
      co_control: msg.co_control,
    }
  }
}


// Corresponds to limx_arm_msgs__srv__desire_pos_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct desire_pos_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: bool,

}



impl Default for desire_pos_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::desire_pos_Response::default())
  }
}

impl rosidl_runtime_rs::Message for desire_pos_Response {
  type RmwMsg = super::srv::rmw::desire_pos_Response;

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


// Corresponds to limx_arm_msgs__srv__gripper_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct gripper_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub initial: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dis: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub force: i32,

}



impl Default for gripper_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::gripper_Request::default())
  }
}

impl rosidl_runtime_rs::Message for gripper_Request {
  type RmwMsg = super::srv::rmw::gripper_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        initial: msg.initial,
        dis: msg.dis,
        force: msg.force,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      initial: msg.initial,
      dis: msg.dis,
      force: msg.force,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      initial: msg.initial,
      dis: msg.dis,
      force: msg.force,
    }
  }
}


// Corresponds to limx_arm_msgs__srv__gripper_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct gripper_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i32,

}



impl Default for gripper_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::gripper_Response::default())
  }
}

impl rosidl_runtime_rs::Message for gripper_Response {
  type RmwMsg = super::srv::rmw::gripper_Response;

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


// Corresponds to limx_arm_msgs__srv__motion_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct motion_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub left_arm_pos: [f32; 7],


    // This member is not documented.
    #[allow(missing_docs)]
    pub right_arm_pos: [f32; 7],


    // This member is not documented.
    #[allow(missing_docs)]
    pub duration_time: f32,

}



impl Default for motion_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::motion_Request::default())
  }
}

impl rosidl_runtime_rs::Message for motion_Request {
  type RmwMsg = super::srv::rmw::motion_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        left_arm_pos: msg.left_arm_pos,
        right_arm_pos: msg.right_arm_pos,
        duration_time: msg.duration_time,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        left_arm_pos: msg.left_arm_pos,
        right_arm_pos: msg.right_arm_pos,
      duration_time: msg.duration_time,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      left_arm_pos: msg.left_arm_pos,
      right_arm_pos: msg.right_arm_pos,
      duration_time: msg.duration_time,
    }
  }
}


// Corresponds to limx_arm_msgs__srv__motion_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct motion_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i32,

}



impl Default for motion_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::motion_Response::default())
  }
}

impl rosidl_runtime_rs::Message for motion_Response {
  type RmwMsg = super::srv::rmw::motion_Response;

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






#[link(name = "limx_arm_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__limx_arm_msgs__srv__DA_motion() -> *const std::ffi::c_void;
}

// Corresponds to limx_arm_msgs__srv__DA_motion
#[allow(missing_docs, non_camel_case_types)]
pub struct DA_motion;

impl rosidl_runtime_rs::Service for DA_motion {
    type Request = DA_motion_Request;
    type Response = DA_motion_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__limx_arm_msgs__srv__DA_motion() }
    }
}




#[link(name = "limx_arm_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__limx_arm_msgs__srv__desire_pos() -> *const std::ffi::c_void;
}

// Corresponds to limx_arm_msgs__srv__desire_pos
#[allow(missing_docs, non_camel_case_types)]
pub struct desire_pos;

impl rosidl_runtime_rs::Service for desire_pos {
    type Request = desire_pos_Request;
    type Response = desire_pos_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__limx_arm_msgs__srv__desire_pos() }
    }
}




#[link(name = "limx_arm_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__limx_arm_msgs__srv__gripper() -> *const std::ffi::c_void;
}

// Corresponds to limx_arm_msgs__srv__gripper
#[allow(missing_docs, non_camel_case_types)]
pub struct gripper;

impl rosidl_runtime_rs::Service for gripper {
    type Request = gripper_Request;
    type Response = gripper_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__limx_arm_msgs__srv__gripper() }
    }
}




#[link(name = "limx_arm_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__limx_arm_msgs__srv__motion() -> *const std::ffi::c_void;
}

// Corresponds to limx_arm_msgs__srv__motion
#[allow(missing_docs, non_camel_case_types)]
pub struct motion;

impl rosidl_runtime_rs::Service for motion {
    type Request = motion_Request;
    type Response = motion_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__limx_arm_msgs__srv__motion() }
    }
}


