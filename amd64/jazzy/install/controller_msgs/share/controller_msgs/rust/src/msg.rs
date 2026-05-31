#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to controller_msgs__msg__JointCmd

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointCmd {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub names: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub q: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub v: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tau: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub kp: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub kd: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: Vec<u8>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub na: u32,

}



impl Default for JointCmd {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::JointCmd::default())
  }
}

impl rosidl_runtime_rs::Message for JointCmd {
  type RmwMsg = super::msg::rmw::JointCmd;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        names: msg.names
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        q: msg.q.into(),
        v: msg.v.into(),
        tau: msg.tau.into(),
        kp: msg.kp.into(),
        kd: msg.kd.into(),
        mode: msg.mode.into(),
        na: msg.na,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        names: msg.names
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        q: msg.q.as_slice().into(),
        v: msg.v.as_slice().into(),
        tau: msg.tau.as_slice().into(),
        kp: msg.kp.as_slice().into(),
        kd: msg.kd.as_slice().into(),
        mode: msg.mode.as_slice().into(),
      na: msg.na,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      names: msg.names
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      q: msg.q
          .into_iter()
          .collect(),
      v: msg.v
          .into_iter()
          .collect(),
      tau: msg.tau
          .into_iter()
          .collect(),
      kp: msg.kp
          .into_iter()
          .collect(),
      kd: msg.kd
          .into_iter()
          .collect(),
      mode: msg.mode
          .into_iter()
          .collect(),
      na: msg.na,
    }
  }
}


// Corresponds to controller_msgs__msg__JointState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub names: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub q: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub v: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vd: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tau: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub na: u32,

}



impl Default for JointState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::JointState::default())
  }
}

impl rosidl_runtime_rs::Message for JointState {
  type RmwMsg = super::msg::rmw::JointState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        names: msg.names
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        q: msg.q.into(),
        v: msg.v.into(),
        vd: msg.vd.into(),
        tau: msg.tau.into(),
        na: msg.na,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        names: msg.names
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        q: msg.q.as_slice().into(),
        v: msg.v.as_slice().into(),
        vd: msg.vd.as_slice().into(),
        tau: msg.tau.as_slice().into(),
      na: msg.na,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      names: msg.names
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      q: msg.q
          .into_iter()
          .collect(),
      v: msg.v
          .into_iter()
          .collect(),
      vd: msg.vd
          .into_iter()
          .collect(),
      tau: msg.tau
          .into_iter()
          .collect(),
      na: msg.na,
    }
  }
}


// Corresponds to controller_msgs__msg__IMUData

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IMUData {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub imustamp: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub euler: [f64; 3],


    // This member is not documented.
    #[allow(missing_docs)]
    pub quat: [f64; 4],


    // This member is not documented.
    #[allow(missing_docs)]
    pub acc: [f64; 3],


    // This member is not documented.
    #[allow(missing_docs)]
    pub gyro: [f64; 3],

}



impl Default for IMUData {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::IMUData::default())
  }
}

impl rosidl_runtime_rs::Message for IMUData {
  type RmwMsg = super::msg::rmw::IMUData;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        imustamp: msg.imustamp,
        status: msg.status,
        euler: msg.euler,
        quat: msg.quat,
        acc: msg.acc,
        gyro: msg.gyro,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      imustamp: msg.imustamp,
      status: msg.status,
        euler: msg.euler,
        quat: msg.quat,
        acc: msg.acc,
        gyro: msg.gyro,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      imustamp: msg.imustamp,
      status: msg.status,
      euler: msg.euler,
      quat: msg.quat,
      acc: msg.acc,
      gyro: msg.gyro,
    }
  }
}


// Corresponds to controller_msgs__msg__JointCmdLimx

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointCmdLimx {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub names: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub q: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub v: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tau: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub kp: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub kd: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: Vec<u8>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub na: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub parallel_solver_mode: Vec<u8>,

}



impl Default for JointCmdLimx {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::JointCmdLimx::default())
  }
}

impl rosidl_runtime_rs::Message for JointCmdLimx {
  type RmwMsg = super::msg::rmw::JointCmdLimx;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        names: msg.names
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        q: msg.q.into(),
        v: msg.v.into(),
        tau: msg.tau.into(),
        kp: msg.kp.into(),
        kd: msg.kd.into(),
        mode: msg.mode.into(),
        na: msg.na,
        parallel_solver_mode: msg.parallel_solver_mode.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        names: msg.names
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        q: msg.q.as_slice().into(),
        v: msg.v.as_slice().into(),
        tau: msg.tau.as_slice().into(),
        kp: msg.kp.as_slice().into(),
        kd: msg.kd.as_slice().into(),
        mode: msg.mode.as_slice().into(),
      na: msg.na,
        parallel_solver_mode: msg.parallel_solver_mode.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      names: msg.names
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      q: msg.q
          .into_iter()
          .collect(),
      v: msg.v
          .into_iter()
          .collect(),
      tau: msg.tau
          .into_iter()
          .collect(),
      kp: msg.kp
          .into_iter()
          .collect(),
      kd: msg.kd
          .into_iter()
          .collect(),
      mode: msg.mode
          .into_iter()
          .collect(),
      na: msg.na,
      parallel_solver_mode: msg.parallel_solver_mode
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to controller_msgs__msg__JointCmdNew

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointCmdNew {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub names: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub q: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub v: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tau: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub kp: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub kd: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: Vec<u8>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub na: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub parallel_solve_required: Vec<bool>,

}



impl Default for JointCmdNew {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::JointCmdNew::default())
  }
}

impl rosidl_runtime_rs::Message for JointCmdNew {
  type RmwMsg = super::msg::rmw::JointCmdNew;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        names: msg.names
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        q: msg.q.into(),
        v: msg.v.into(),
        tau: msg.tau.into(),
        kp: msg.kp.into(),
        kd: msg.kd.into(),
        mode: msg.mode.into(),
        na: msg.na,
        parallel_solve_required: msg.parallel_solve_required.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        names: msg.names
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        q: msg.q.as_slice().into(),
        v: msg.v.as_slice().into(),
        tau: msg.tau.as_slice().into(),
        kp: msg.kp.as_slice().into(),
        kd: msg.kd.as_slice().into(),
        mode: msg.mode.as_slice().into(),
      na: msg.na,
        parallel_solve_required: msg.parallel_solve_required.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      names: msg.names
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      q: msg.q
          .into_iter()
          .collect(),
      v: msg.v
          .into_iter()
          .collect(),
      tau: msg.tau
          .into_iter()
          .collect(),
      kp: msg.kp
          .into_iter()
          .collect(),
      kd: msg.kd
          .into_iter()
          .collect(),
      mode: msg.mode
          .into_iter()
          .collect(),
      na: msg.na,
      parallel_solve_required: msg.parallel_solve_required
          .into_iter()
          .collect(),
    }
  }
}


