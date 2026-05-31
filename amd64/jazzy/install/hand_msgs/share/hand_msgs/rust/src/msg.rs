#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to hand_msgs__msg__HandCmd

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HandCmd {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub hand_type: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ctrl_mode: [u8; 2],


    // This member is not documented.
    #[allow(missing_docs)]
    pub hand_cmd: [super::msg::HandMsg; 2],

}



impl Default for HandCmd {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::HandCmd::default())
  }
}

impl rosidl_runtime_rs::Message for HandCmd {
  type RmwMsg = super::msg::rmw::HandCmd;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        hand_type: msg.hand_type.as_str().into(),
        ctrl_mode: msg.ctrl_mode,
        hand_cmd: msg.hand_cmd
          .map(|elem| super::msg::HandMsg::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned()),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        hand_type: msg.hand_type.as_str().into(),
        ctrl_mode: msg.ctrl_mode,
        hand_cmd: msg.hand_cmd
          .iter()
          .map(|elem| super::msg::HandMsg::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect::<Vec<_>>()
          .try_into()
          .unwrap(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      hand_type: msg.hand_type.to_string(),
      ctrl_mode: msg.ctrl_mode,
      hand_cmd: msg.hand_cmd
        .map(super::msg::HandMsg::from_rmw_message),
    }
  }
}


// Corresponds to hand_msgs__msg__HandMsg

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HandMsg {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub names: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pos: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vel: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub time: Vec<f32>,

}



impl Default for HandMsg {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::HandMsg::default())
  }
}

impl rosidl_runtime_rs::Message for HandMsg {
  type RmwMsg = super::msg::rmw::HandMsg;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        names: msg.names
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        pos: msg.pos.into(),
        vel: msg.vel.into(),
        current: msg.current.into(),
        time: msg.time.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        names: msg.names
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        pos: msg.pos.as_slice().into(),
        vel: msg.vel.as_slice().into(),
        current: msg.current.as_slice().into(),
        time: msg.time.as_slice().into(),
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
      pos: msg.pos
          .into_iter()
          .collect(),
      vel: msg.vel
          .into_iter()
          .collect(),
      current: msg.current
          .into_iter()
          .collect(),
      time: msg.time
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to hand_msgs__msg__HandState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HandState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub hand_type: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ctrl_mode: [u8; 2],


    // This member is not documented.
    #[allow(missing_docs)]
    pub hand_state: [super::msg::HandMsg; 2],

}



impl Default for HandState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::HandState::default())
  }
}

impl rosidl_runtime_rs::Message for HandState {
  type RmwMsg = super::msg::rmw::HandState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        hand_type: msg.hand_type.as_str().into(),
        ctrl_mode: msg.ctrl_mode,
        hand_state: msg.hand_state
          .map(|elem| super::msg::HandMsg::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned()),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        hand_type: msg.hand_type.as_str().into(),
        ctrl_mode: msg.ctrl_mode,
        hand_state: msg.hand_state
          .iter()
          .map(|elem| super::msg::HandMsg::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect::<Vec<_>>()
          .try_into()
          .unwrap(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      hand_type: msg.hand_type.to_string(),
      ctrl_mode: msg.ctrl_mode,
      hand_state: msg.hand_state
        .map(super::msg::HandMsg::from_rmw_message),
    }
  }
}


