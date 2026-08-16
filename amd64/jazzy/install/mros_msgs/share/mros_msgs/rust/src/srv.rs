#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to mros_msgs__srv__GetDiscoveryInfo_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetDiscoveryInfo_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetDiscoveryInfo_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetDiscoveryInfo_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetDiscoveryInfo_Request {
  type RmwMsg = super::srv::rmw::GetDiscoveryInfo_Request;

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


// Corresponds to mros_msgs__srv__GetDiscoveryInfo_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetDiscoveryInfo_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub nodes: Vec<super::msg::NodeInfo>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub subscribers: Vec<super::msg::TopicInfo>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub publishers: Vec<super::msg::TopicInfo>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub services: Vec<super::msg::TopicInfo>,

}



impl Default for GetDiscoveryInfo_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetDiscoveryInfo_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetDiscoveryInfo_Response {
  type RmwMsg = super::srv::rmw::GetDiscoveryInfo_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        nodes: msg.nodes
          .into_iter()
          .map(|elem| super::msg::NodeInfo::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        subscribers: msg.subscribers
          .into_iter()
          .map(|elem| super::msg::TopicInfo::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        publishers: msg.publishers
          .into_iter()
          .map(|elem| super::msg::TopicInfo::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        services: msg.services
          .into_iter()
          .map(|elem| super::msg::TopicInfo::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        nodes: msg.nodes
          .iter()
          .map(|elem| super::msg::NodeInfo::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        subscribers: msg.subscribers
          .iter()
          .map(|elem| super::msg::TopicInfo::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        publishers: msg.publishers
          .iter()
          .map(|elem| super::msg::TopicInfo::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        services: msg.services
          .iter()
          .map(|elem| super::msg::TopicInfo::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      nodes: msg.nodes
          .into_iter()
          .map(super::msg::NodeInfo::from_rmw_message)
          .collect(),
      subscribers: msg.subscribers
          .into_iter()
          .map(super::msg::TopicInfo::from_rmw_message)
          .collect(),
      publishers: msg.publishers
          .into_iter()
          .map(super::msg::TopicInfo::from_rmw_message)
          .collect(),
      services: msg.services
          .into_iter()
          .map(super::msg::TopicInfo::from_rmw_message)
          .collect(),
    }
  }
}






#[link(name = "mros_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__mros_msgs__srv__GetDiscoveryInfo() -> *const std::ffi::c_void;
}

// Corresponds to mros_msgs__srv__GetDiscoveryInfo
#[allow(missing_docs, non_camel_case_types)]
pub struct GetDiscoveryInfo;

impl rosidl_runtime_rs::Service for GetDiscoveryInfo {
    type Request = GetDiscoveryInfo_Request;
    type Response = GetDiscoveryInfo_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__mros_msgs__srv__GetDiscoveryInfo() }
    }
}


