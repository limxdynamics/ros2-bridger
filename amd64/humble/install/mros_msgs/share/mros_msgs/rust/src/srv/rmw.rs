#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "mros_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mros_msgs__srv__GetDiscoveryInfo_Request() -> *const std::ffi::c_void;
}

#[link(name = "mros_msgs__rosidl_generator_c")]
extern "C" {
    fn mros_msgs__srv__GetDiscoveryInfo_Request__init(msg: *mut GetDiscoveryInfo_Request) -> bool;
    fn mros_msgs__srv__GetDiscoveryInfo_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetDiscoveryInfo_Request>, size: usize) -> bool;
    fn mros_msgs__srv__GetDiscoveryInfo_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetDiscoveryInfo_Request>);
    fn mros_msgs__srv__GetDiscoveryInfo_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetDiscoveryInfo_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetDiscoveryInfo_Request>) -> bool;
}

// Corresponds to mros_msgs__srv__GetDiscoveryInfo_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetDiscoveryInfo_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetDiscoveryInfo_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mros_msgs__srv__GetDiscoveryInfo_Request__init(&mut msg as *mut _) {
        panic!("Call to mros_msgs__srv__GetDiscoveryInfo_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetDiscoveryInfo_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mros_msgs__srv__GetDiscoveryInfo_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mros_msgs__srv__GetDiscoveryInfo_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mros_msgs__srv__GetDiscoveryInfo_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetDiscoveryInfo_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetDiscoveryInfo_Request where Self: Sized {
  const TYPE_NAME: &'static str = "mros_msgs/srv/GetDiscoveryInfo_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mros_msgs__srv__GetDiscoveryInfo_Request() }
  }
}


#[link(name = "mros_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mros_msgs__srv__GetDiscoveryInfo_Response() -> *const std::ffi::c_void;
}

#[link(name = "mros_msgs__rosidl_generator_c")]
extern "C" {
    fn mros_msgs__srv__GetDiscoveryInfo_Response__init(msg: *mut GetDiscoveryInfo_Response) -> bool;
    fn mros_msgs__srv__GetDiscoveryInfo_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetDiscoveryInfo_Response>, size: usize) -> bool;
    fn mros_msgs__srv__GetDiscoveryInfo_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetDiscoveryInfo_Response>);
    fn mros_msgs__srv__GetDiscoveryInfo_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetDiscoveryInfo_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetDiscoveryInfo_Response>) -> bool;
}

// Corresponds to mros_msgs__srv__GetDiscoveryInfo_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetDiscoveryInfo_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub nodes: rosidl_runtime_rs::Sequence<super::super::msg::rmw::NodeInfo>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub subscribers: rosidl_runtime_rs::Sequence<super::super::msg::rmw::TopicInfo>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub publishers: rosidl_runtime_rs::Sequence<super::super::msg::rmw::TopicInfo>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub services: rosidl_runtime_rs::Sequence<super::super::msg::rmw::TopicInfo>,

}



impl Default for GetDiscoveryInfo_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mros_msgs__srv__GetDiscoveryInfo_Response__init(&mut msg as *mut _) {
        panic!("Call to mros_msgs__srv__GetDiscoveryInfo_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetDiscoveryInfo_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mros_msgs__srv__GetDiscoveryInfo_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mros_msgs__srv__GetDiscoveryInfo_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mros_msgs__srv__GetDiscoveryInfo_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetDiscoveryInfo_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetDiscoveryInfo_Response where Self: Sized {
  const TYPE_NAME: &'static str = "mros_msgs/srv/GetDiscoveryInfo_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mros_msgs__srv__GetDiscoveryInfo_Response() }
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


