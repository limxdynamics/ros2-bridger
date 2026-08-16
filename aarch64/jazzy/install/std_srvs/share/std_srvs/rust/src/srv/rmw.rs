#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__Empty_Request() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__Empty_Request__init(msg: *mut Empty_Request) -> bool;
    fn std_srvs__srv__Empty_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Empty_Request>, size: usize) -> bool;
    fn std_srvs__srv__Empty_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Empty_Request>);
    fn std_srvs__srv__Empty_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Empty_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Empty_Request>) -> bool;
}

// Corresponds to std_srvs__srv__Empty_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Empty_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for Empty_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__Empty_Request__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__Empty_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Empty_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__Empty_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__Empty_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__Empty_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Empty_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Empty_Request where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/Empty_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__Empty_Request() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__Empty_Response() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__Empty_Response__init(msg: *mut Empty_Response) -> bool;
    fn std_srvs__srv__Empty_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Empty_Response>, size: usize) -> bool;
    fn std_srvs__srv__Empty_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Empty_Response>);
    fn std_srvs__srv__Empty_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Empty_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Empty_Response>) -> bool;
}

// Corresponds to std_srvs__srv__Empty_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Empty_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for Empty_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__Empty_Response__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__Empty_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Empty_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__Empty_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__Empty_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__Empty_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Empty_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Empty_Response where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/Empty_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__Empty_Response() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetBool_Request() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__GetBool_Request__init(msg: *mut GetBool_Request) -> bool;
    fn std_srvs__srv__GetBool_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetBool_Request>, size: usize) -> bool;
    fn std_srvs__srv__GetBool_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetBool_Request>);
    fn std_srvs__srv__GetBool_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetBool_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetBool_Request>) -> bool;
}

// Corresponds to std_srvs__srv__GetBool_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetBool_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetBool_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__GetBool_Request__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__GetBool_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetBool_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetBool_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetBool_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetBool_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetBool_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetBool_Request where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/GetBool_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetBool_Request() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetBool_Response() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__GetBool_Response__init(msg: *mut GetBool_Response) -> bool;
    fn std_srvs__srv__GetBool_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetBool_Response>, size: usize) -> bool;
    fn std_srvs__srv__GetBool_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetBool_Response>);
    fn std_srvs__srv__GetBool_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetBool_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetBool_Response>) -> bool;
}

// Corresponds to std_srvs__srv__GetBool_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetBool_Response {
    /// e.g. for hardware enabling / disabling
    pub data: bool,

    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: rosidl_runtime_rs::String,

}



impl Default for GetBool_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__GetBool_Response__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__GetBool_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetBool_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetBool_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetBool_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetBool_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetBool_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetBool_Response where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/GetBool_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetBool_Response() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetBoolWithTile_Request() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__GetBoolWithTile_Request__init(msg: *mut GetBoolWithTile_Request) -> bool;
    fn std_srvs__srv__GetBoolWithTile_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetBoolWithTile_Request>, size: usize) -> bool;
    fn std_srvs__srv__GetBoolWithTile_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetBoolWithTile_Request>);
    fn std_srvs__srv__GetBoolWithTile_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetBoolWithTile_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetBoolWithTile_Request>) -> bool;
}

// Corresponds to std_srvs__srv__GetBoolWithTile_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetBoolWithTile_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub title: rosidl_runtime_rs::String,

}



impl Default for GetBoolWithTile_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__GetBoolWithTile_Request__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__GetBoolWithTile_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetBoolWithTile_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetBoolWithTile_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetBoolWithTile_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetBoolWithTile_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetBoolWithTile_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetBoolWithTile_Request where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/GetBoolWithTile_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetBoolWithTile_Request() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetBoolWithTile_Response() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__GetBoolWithTile_Response__init(msg: *mut GetBoolWithTile_Response) -> bool;
    fn std_srvs__srv__GetBoolWithTile_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetBoolWithTile_Response>, size: usize) -> bool;
    fn std_srvs__srv__GetBoolWithTile_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetBoolWithTile_Response>);
    fn std_srvs__srv__GetBoolWithTile_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetBoolWithTile_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetBoolWithTile_Response>) -> bool;
}

// Corresponds to std_srvs__srv__GetBoolWithTile_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetBoolWithTile_Response {
    /// e.g. for hardware enabling / disabling
    pub data: bool,

    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: rosidl_runtime_rs::String,

}



impl Default for GetBoolWithTile_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__GetBoolWithTile_Response__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__GetBoolWithTile_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetBoolWithTile_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetBoolWithTile_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetBoolWithTile_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetBoolWithTile_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetBoolWithTile_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetBoolWithTile_Response where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/GetBoolWithTile_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetBoolWithTile_Response() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetFloat32_Request() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__GetFloat32_Request__init(msg: *mut GetFloat32_Request) -> bool;
    fn std_srvs__srv__GetFloat32_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetFloat32_Request>, size: usize) -> bool;
    fn std_srvs__srv__GetFloat32_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetFloat32_Request>);
    fn std_srvs__srv__GetFloat32_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetFloat32_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetFloat32_Request>) -> bool;
}

// Corresponds to std_srvs__srv__GetFloat32_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetFloat32_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetFloat32_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__GetFloat32_Request__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__GetFloat32_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetFloat32_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetFloat32_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetFloat32_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetFloat32_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetFloat32_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetFloat32_Request where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/GetFloat32_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetFloat32_Request() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetFloat32_Response() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__GetFloat32_Response__init(msg: *mut GetFloat32_Response) -> bool;
    fn std_srvs__srv__GetFloat32_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetFloat32_Response>, size: usize) -> bool;
    fn std_srvs__srv__GetFloat32_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetFloat32_Response>);
    fn std_srvs__srv__GetFloat32_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetFloat32_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetFloat32_Response>) -> bool;
}

// Corresponds to std_srvs__srv__GetFloat32_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetFloat32_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: rosidl_runtime_rs::String,

    /// data
    pub data: f32,

}



impl Default for GetFloat32_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__GetFloat32_Response__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__GetFloat32_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetFloat32_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetFloat32_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetFloat32_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetFloat32_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetFloat32_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetFloat32_Response where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/GetFloat32_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetFloat32_Response() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetFloat32Array_Request() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__GetFloat32Array_Request__init(msg: *mut GetFloat32Array_Request) -> bool;
    fn std_srvs__srv__GetFloat32Array_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetFloat32Array_Request>, size: usize) -> bool;
    fn std_srvs__srv__GetFloat32Array_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetFloat32Array_Request>);
    fn std_srvs__srv__GetFloat32Array_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetFloat32Array_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetFloat32Array_Request>) -> bool;
}

// Corresponds to std_srvs__srv__GetFloat32Array_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetFloat32Array_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetFloat32Array_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__GetFloat32Array_Request__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__GetFloat32Array_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetFloat32Array_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetFloat32Array_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetFloat32Array_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetFloat32Array_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetFloat32Array_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetFloat32Array_Request where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/GetFloat32Array_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetFloat32Array_Request() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetFloat32Array_Response() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__GetFloat32Array_Response__init(msg: *mut GetFloat32Array_Response) -> bool;
    fn std_srvs__srv__GetFloat32Array_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetFloat32Array_Response>, size: usize) -> bool;
    fn std_srvs__srv__GetFloat32Array_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetFloat32Array_Response>);
    fn std_srvs__srv__GetFloat32Array_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetFloat32Array_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetFloat32Array_Response>) -> bool;
}

// Corresponds to std_srvs__srv__GetFloat32Array_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetFloat32Array_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: rosidl_runtime_rs::String,

    /// array of data
    pub data: rosidl_runtime_rs::Sequence<f32>,

}



impl Default for GetFloat32Array_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__GetFloat32Array_Response__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__GetFloat32Array_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetFloat32Array_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetFloat32Array_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetFloat32Array_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetFloat32Array_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetFloat32Array_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetFloat32Array_Response where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/GetFloat32Array_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetFloat32Array_Response() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetFloat32ArrayWithTitle_Request() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__GetFloat32ArrayWithTitle_Request__init(msg: *mut GetFloat32ArrayWithTitle_Request) -> bool;
    fn std_srvs__srv__GetFloat32ArrayWithTitle_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetFloat32ArrayWithTitle_Request>, size: usize) -> bool;
    fn std_srvs__srv__GetFloat32ArrayWithTitle_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetFloat32ArrayWithTitle_Request>);
    fn std_srvs__srv__GetFloat32ArrayWithTitle_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetFloat32ArrayWithTitle_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetFloat32ArrayWithTitle_Request>) -> bool;
}

// Corresponds to std_srvs__srv__GetFloat32ArrayWithTitle_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetFloat32ArrayWithTitle_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub title: rosidl_runtime_rs::String,

}



impl Default for GetFloat32ArrayWithTitle_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__GetFloat32ArrayWithTitle_Request__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__GetFloat32ArrayWithTitle_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetFloat32ArrayWithTitle_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetFloat32ArrayWithTitle_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetFloat32ArrayWithTitle_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetFloat32ArrayWithTitle_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetFloat32ArrayWithTitle_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetFloat32ArrayWithTitle_Request where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/GetFloat32ArrayWithTitle_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetFloat32ArrayWithTitle_Request() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetFloat32ArrayWithTitle_Response() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__GetFloat32ArrayWithTitle_Response__init(msg: *mut GetFloat32ArrayWithTitle_Response) -> bool;
    fn std_srvs__srv__GetFloat32ArrayWithTitle_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetFloat32ArrayWithTitle_Response>, size: usize) -> bool;
    fn std_srvs__srv__GetFloat32ArrayWithTitle_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetFloat32ArrayWithTitle_Response>);
    fn std_srvs__srv__GetFloat32ArrayWithTitle_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetFloat32ArrayWithTitle_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetFloat32ArrayWithTitle_Response>) -> bool;
}

// Corresponds to std_srvs__srv__GetFloat32ArrayWithTitle_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetFloat32ArrayWithTitle_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: rosidl_runtime_rs::String,

    /// array of data
    pub data: rosidl_runtime_rs::Sequence<f32>,

}



impl Default for GetFloat32ArrayWithTitle_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__GetFloat32ArrayWithTitle_Response__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__GetFloat32ArrayWithTitle_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetFloat32ArrayWithTitle_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetFloat32ArrayWithTitle_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetFloat32ArrayWithTitle_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetFloat32ArrayWithTitle_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetFloat32ArrayWithTitle_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetFloat32ArrayWithTitle_Response where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/GetFloat32ArrayWithTitle_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetFloat32ArrayWithTitle_Response() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetFloat32WithTitle_Request() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__GetFloat32WithTitle_Request__init(msg: *mut GetFloat32WithTitle_Request) -> bool;
    fn std_srvs__srv__GetFloat32WithTitle_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetFloat32WithTitle_Request>, size: usize) -> bool;
    fn std_srvs__srv__GetFloat32WithTitle_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetFloat32WithTitle_Request>);
    fn std_srvs__srv__GetFloat32WithTitle_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetFloat32WithTitle_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetFloat32WithTitle_Request>) -> bool;
}

// Corresponds to std_srvs__srv__GetFloat32WithTitle_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetFloat32WithTitle_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub title: rosidl_runtime_rs::String,

}



impl Default for GetFloat32WithTitle_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__GetFloat32WithTitle_Request__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__GetFloat32WithTitle_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetFloat32WithTitle_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetFloat32WithTitle_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetFloat32WithTitle_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetFloat32WithTitle_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetFloat32WithTitle_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetFloat32WithTitle_Request where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/GetFloat32WithTitle_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetFloat32WithTitle_Request() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetFloat32WithTitle_Response() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__GetFloat32WithTitle_Response__init(msg: *mut GetFloat32WithTitle_Response) -> bool;
    fn std_srvs__srv__GetFloat32WithTitle_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetFloat32WithTitle_Response>, size: usize) -> bool;
    fn std_srvs__srv__GetFloat32WithTitle_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetFloat32WithTitle_Response>);
    fn std_srvs__srv__GetFloat32WithTitle_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetFloat32WithTitle_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetFloat32WithTitle_Response>) -> bool;
}

// Corresponds to std_srvs__srv__GetFloat32WithTitle_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetFloat32WithTitle_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: rosidl_runtime_rs::String,

    /// data
    pub data: f32,

}



impl Default for GetFloat32WithTitle_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__GetFloat32WithTitle_Response__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__GetFloat32WithTitle_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetFloat32WithTitle_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetFloat32WithTitle_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetFloat32WithTitle_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetFloat32WithTitle_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetFloat32WithTitle_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetFloat32WithTitle_Response where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/GetFloat32WithTitle_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetFloat32WithTitle_Response() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetFloat64_Request() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__GetFloat64_Request__init(msg: *mut GetFloat64_Request) -> bool;
    fn std_srvs__srv__GetFloat64_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetFloat64_Request>, size: usize) -> bool;
    fn std_srvs__srv__GetFloat64_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetFloat64_Request>);
    fn std_srvs__srv__GetFloat64_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetFloat64_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetFloat64_Request>) -> bool;
}

// Corresponds to std_srvs__srv__GetFloat64_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetFloat64_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetFloat64_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__GetFloat64_Request__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__GetFloat64_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetFloat64_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetFloat64_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetFloat64_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetFloat64_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetFloat64_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetFloat64_Request where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/GetFloat64_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetFloat64_Request() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetFloat64_Response() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__GetFloat64_Response__init(msg: *mut GetFloat64_Response) -> bool;
    fn std_srvs__srv__GetFloat64_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetFloat64_Response>, size: usize) -> bool;
    fn std_srvs__srv__GetFloat64_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetFloat64_Response>);
    fn std_srvs__srv__GetFloat64_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetFloat64_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetFloat64_Response>) -> bool;
}

// Corresponds to std_srvs__srv__GetFloat64_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetFloat64_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: rosidl_runtime_rs::String,

    /// data
    pub data: f64,

}



impl Default for GetFloat64_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__GetFloat64_Response__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__GetFloat64_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetFloat64_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetFloat64_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetFloat64_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetFloat64_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetFloat64_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetFloat64_Response where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/GetFloat64_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetFloat64_Response() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetFloat64Array_Request() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__GetFloat64Array_Request__init(msg: *mut GetFloat64Array_Request) -> bool;
    fn std_srvs__srv__GetFloat64Array_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetFloat64Array_Request>, size: usize) -> bool;
    fn std_srvs__srv__GetFloat64Array_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetFloat64Array_Request>);
    fn std_srvs__srv__GetFloat64Array_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetFloat64Array_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetFloat64Array_Request>) -> bool;
}

// Corresponds to std_srvs__srv__GetFloat64Array_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetFloat64Array_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetFloat64Array_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__GetFloat64Array_Request__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__GetFloat64Array_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetFloat64Array_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetFloat64Array_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetFloat64Array_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetFloat64Array_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetFloat64Array_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetFloat64Array_Request where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/GetFloat64Array_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetFloat64Array_Request() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetFloat64Array_Response() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__GetFloat64Array_Response__init(msg: *mut GetFloat64Array_Response) -> bool;
    fn std_srvs__srv__GetFloat64Array_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetFloat64Array_Response>, size: usize) -> bool;
    fn std_srvs__srv__GetFloat64Array_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetFloat64Array_Response>);
    fn std_srvs__srv__GetFloat64Array_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetFloat64Array_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetFloat64Array_Response>) -> bool;
}

// Corresponds to std_srvs__srv__GetFloat64Array_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetFloat64Array_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: rosidl_runtime_rs::String,

    /// array of data
    pub data: rosidl_runtime_rs::Sequence<f64>,

}



impl Default for GetFloat64Array_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__GetFloat64Array_Response__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__GetFloat64Array_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetFloat64Array_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetFloat64Array_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetFloat64Array_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetFloat64Array_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetFloat64Array_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetFloat64Array_Response where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/GetFloat64Array_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetFloat64Array_Response() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetFloat64ArrayWithTitle_Request() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__GetFloat64ArrayWithTitle_Request__init(msg: *mut GetFloat64ArrayWithTitle_Request) -> bool;
    fn std_srvs__srv__GetFloat64ArrayWithTitle_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetFloat64ArrayWithTitle_Request>, size: usize) -> bool;
    fn std_srvs__srv__GetFloat64ArrayWithTitle_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetFloat64ArrayWithTitle_Request>);
    fn std_srvs__srv__GetFloat64ArrayWithTitle_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetFloat64ArrayWithTitle_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetFloat64ArrayWithTitle_Request>) -> bool;
}

// Corresponds to std_srvs__srv__GetFloat64ArrayWithTitle_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetFloat64ArrayWithTitle_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub title: rosidl_runtime_rs::String,

}



impl Default for GetFloat64ArrayWithTitle_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__GetFloat64ArrayWithTitle_Request__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__GetFloat64ArrayWithTitle_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetFloat64ArrayWithTitle_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetFloat64ArrayWithTitle_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetFloat64ArrayWithTitle_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetFloat64ArrayWithTitle_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetFloat64ArrayWithTitle_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetFloat64ArrayWithTitle_Request where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/GetFloat64ArrayWithTitle_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetFloat64ArrayWithTitle_Request() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetFloat64ArrayWithTitle_Response() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__GetFloat64ArrayWithTitle_Response__init(msg: *mut GetFloat64ArrayWithTitle_Response) -> bool;
    fn std_srvs__srv__GetFloat64ArrayWithTitle_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetFloat64ArrayWithTitle_Response>, size: usize) -> bool;
    fn std_srvs__srv__GetFloat64ArrayWithTitle_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetFloat64ArrayWithTitle_Response>);
    fn std_srvs__srv__GetFloat64ArrayWithTitle_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetFloat64ArrayWithTitle_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetFloat64ArrayWithTitle_Response>) -> bool;
}

// Corresponds to std_srvs__srv__GetFloat64ArrayWithTitle_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetFloat64ArrayWithTitle_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: rosidl_runtime_rs::String,

    /// array of data
    pub data: rosidl_runtime_rs::Sequence<f64>,

}



impl Default for GetFloat64ArrayWithTitle_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__GetFloat64ArrayWithTitle_Response__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__GetFloat64ArrayWithTitle_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetFloat64ArrayWithTitle_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetFloat64ArrayWithTitle_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetFloat64ArrayWithTitle_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetFloat64ArrayWithTitle_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetFloat64ArrayWithTitle_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetFloat64ArrayWithTitle_Response where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/GetFloat64ArrayWithTitle_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetFloat64ArrayWithTitle_Response() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetFloat64WithTitle_Request() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__GetFloat64WithTitle_Request__init(msg: *mut GetFloat64WithTitle_Request) -> bool;
    fn std_srvs__srv__GetFloat64WithTitle_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetFloat64WithTitle_Request>, size: usize) -> bool;
    fn std_srvs__srv__GetFloat64WithTitle_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetFloat64WithTitle_Request>);
    fn std_srvs__srv__GetFloat64WithTitle_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetFloat64WithTitle_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetFloat64WithTitle_Request>) -> bool;
}

// Corresponds to std_srvs__srv__GetFloat64WithTitle_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetFloat64WithTitle_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub title: rosidl_runtime_rs::String,

}



impl Default for GetFloat64WithTitle_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__GetFloat64WithTitle_Request__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__GetFloat64WithTitle_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetFloat64WithTitle_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetFloat64WithTitle_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetFloat64WithTitle_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetFloat64WithTitle_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetFloat64WithTitle_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetFloat64WithTitle_Request where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/GetFloat64WithTitle_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetFloat64WithTitle_Request() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetFloat64WithTitle_Response() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__GetFloat64WithTitle_Response__init(msg: *mut GetFloat64WithTitle_Response) -> bool;
    fn std_srvs__srv__GetFloat64WithTitle_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetFloat64WithTitle_Response>, size: usize) -> bool;
    fn std_srvs__srv__GetFloat64WithTitle_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetFloat64WithTitle_Response>);
    fn std_srvs__srv__GetFloat64WithTitle_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetFloat64WithTitle_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetFloat64WithTitle_Response>) -> bool;
}

// Corresponds to std_srvs__srv__GetFloat64WithTitle_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetFloat64WithTitle_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: rosidl_runtime_rs::String,

    /// data
    pub data: f64,

}



impl Default for GetFloat64WithTitle_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__GetFloat64WithTitle_Response__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__GetFloat64WithTitle_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetFloat64WithTitle_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetFloat64WithTitle_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetFloat64WithTitle_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetFloat64WithTitle_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetFloat64WithTitle_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetFloat64WithTitle_Response where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/GetFloat64WithTitle_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetFloat64WithTitle_Response() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetInt32_Request() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__GetInt32_Request__init(msg: *mut GetInt32_Request) -> bool;
    fn std_srvs__srv__GetInt32_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetInt32_Request>, size: usize) -> bool;
    fn std_srvs__srv__GetInt32_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetInt32_Request>);
    fn std_srvs__srv__GetInt32_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetInt32_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetInt32_Request>) -> bool;
}

// Corresponds to std_srvs__srv__GetInt32_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetInt32_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetInt32_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__GetInt32_Request__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__GetInt32_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetInt32_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetInt32_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetInt32_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetInt32_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetInt32_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetInt32_Request where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/GetInt32_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetInt32_Request() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetInt32_Response() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__GetInt32_Response__init(msg: *mut GetInt32_Response) -> bool;
    fn std_srvs__srv__GetInt32_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetInt32_Response>, size: usize) -> bool;
    fn std_srvs__srv__GetInt32_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetInt32_Response>);
    fn std_srvs__srv__GetInt32_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetInt32_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetInt32_Response>) -> bool;
}

// Corresponds to std_srvs__srv__GetInt32_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetInt32_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub data: i32,

    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: rosidl_runtime_rs::String,

}



impl Default for GetInt32_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__GetInt32_Response__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__GetInt32_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetInt32_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetInt32_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetInt32_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetInt32_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetInt32_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetInt32_Response where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/GetInt32_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetInt32_Response() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetInt32Array_Request() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__GetInt32Array_Request__init(msg: *mut GetInt32Array_Request) -> bool;
    fn std_srvs__srv__GetInt32Array_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetInt32Array_Request>, size: usize) -> bool;
    fn std_srvs__srv__GetInt32Array_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetInt32Array_Request>);
    fn std_srvs__srv__GetInt32Array_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetInt32Array_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetInt32Array_Request>) -> bool;
}

// Corresponds to std_srvs__srv__GetInt32Array_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetInt32Array_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetInt32Array_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__GetInt32Array_Request__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__GetInt32Array_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetInt32Array_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetInt32Array_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetInt32Array_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetInt32Array_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetInt32Array_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetInt32Array_Request where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/GetInt32Array_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetInt32Array_Request() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetInt32Array_Response() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__GetInt32Array_Response__init(msg: *mut GetInt32Array_Response) -> bool;
    fn std_srvs__srv__GetInt32Array_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetInt32Array_Response>, size: usize) -> bool;
    fn std_srvs__srv__GetInt32Array_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetInt32Array_Response>);
    fn std_srvs__srv__GetInt32Array_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetInt32Array_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetInt32Array_Response>) -> bool;
}

// Corresponds to std_srvs__srv__GetInt32Array_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetInt32Array_Response {
    /// array of data
    pub data: rosidl_runtime_rs::Sequence<i32>,

    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: rosidl_runtime_rs::String,

}



impl Default for GetInt32Array_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__GetInt32Array_Response__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__GetInt32Array_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetInt32Array_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetInt32Array_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetInt32Array_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetInt32Array_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetInt32Array_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetInt32Array_Response where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/GetInt32Array_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetInt32Array_Response() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetInt32ArrayWithTitle_Request() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__GetInt32ArrayWithTitle_Request__init(msg: *mut GetInt32ArrayWithTitle_Request) -> bool;
    fn std_srvs__srv__GetInt32ArrayWithTitle_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetInt32ArrayWithTitle_Request>, size: usize) -> bool;
    fn std_srvs__srv__GetInt32ArrayWithTitle_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetInt32ArrayWithTitle_Request>);
    fn std_srvs__srv__GetInt32ArrayWithTitle_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetInt32ArrayWithTitle_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetInt32ArrayWithTitle_Request>) -> bool;
}

// Corresponds to std_srvs__srv__GetInt32ArrayWithTitle_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetInt32ArrayWithTitle_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub title: rosidl_runtime_rs::String,

}



impl Default for GetInt32ArrayWithTitle_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__GetInt32ArrayWithTitle_Request__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__GetInt32ArrayWithTitle_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetInt32ArrayWithTitle_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetInt32ArrayWithTitle_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetInt32ArrayWithTitle_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetInt32ArrayWithTitle_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetInt32ArrayWithTitle_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetInt32ArrayWithTitle_Request where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/GetInt32ArrayWithTitle_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetInt32ArrayWithTitle_Request() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetInt32ArrayWithTitle_Response() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__GetInt32ArrayWithTitle_Response__init(msg: *mut GetInt32ArrayWithTitle_Response) -> bool;
    fn std_srvs__srv__GetInt32ArrayWithTitle_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetInt32ArrayWithTitle_Response>, size: usize) -> bool;
    fn std_srvs__srv__GetInt32ArrayWithTitle_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetInt32ArrayWithTitle_Response>);
    fn std_srvs__srv__GetInt32ArrayWithTitle_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetInt32ArrayWithTitle_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetInt32ArrayWithTitle_Response>) -> bool;
}

// Corresponds to std_srvs__srv__GetInt32ArrayWithTitle_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetInt32ArrayWithTitle_Response {
    /// array of data
    pub data: rosidl_runtime_rs::Sequence<i32>,

    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: rosidl_runtime_rs::String,

}



impl Default for GetInt32ArrayWithTitle_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__GetInt32ArrayWithTitle_Response__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__GetInt32ArrayWithTitle_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetInt32ArrayWithTitle_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetInt32ArrayWithTitle_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetInt32ArrayWithTitle_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetInt32ArrayWithTitle_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetInt32ArrayWithTitle_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetInt32ArrayWithTitle_Response where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/GetInt32ArrayWithTitle_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetInt32ArrayWithTitle_Response() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetInt32WithTitle_Request() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__GetInt32WithTitle_Request__init(msg: *mut GetInt32WithTitle_Request) -> bool;
    fn std_srvs__srv__GetInt32WithTitle_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetInt32WithTitle_Request>, size: usize) -> bool;
    fn std_srvs__srv__GetInt32WithTitle_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetInt32WithTitle_Request>);
    fn std_srvs__srv__GetInt32WithTitle_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetInt32WithTitle_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetInt32WithTitle_Request>) -> bool;
}

// Corresponds to std_srvs__srv__GetInt32WithTitle_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetInt32WithTitle_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub title: rosidl_runtime_rs::String,

}



impl Default for GetInt32WithTitle_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__GetInt32WithTitle_Request__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__GetInt32WithTitle_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetInt32WithTitle_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetInt32WithTitle_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetInt32WithTitle_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetInt32WithTitle_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetInt32WithTitle_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetInt32WithTitle_Request where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/GetInt32WithTitle_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetInt32WithTitle_Request() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetInt32WithTitle_Response() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__GetInt32WithTitle_Response__init(msg: *mut GetInt32WithTitle_Response) -> bool;
    fn std_srvs__srv__GetInt32WithTitle_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetInt32WithTitle_Response>, size: usize) -> bool;
    fn std_srvs__srv__GetInt32WithTitle_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetInt32WithTitle_Response>);
    fn std_srvs__srv__GetInt32WithTitle_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetInt32WithTitle_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetInt32WithTitle_Response>) -> bool;
}

// Corresponds to std_srvs__srv__GetInt32WithTitle_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetInt32WithTitle_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub data: i32,

    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: rosidl_runtime_rs::String,

}



impl Default for GetInt32WithTitle_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__GetInt32WithTitle_Response__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__GetInt32WithTitle_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetInt32WithTitle_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetInt32WithTitle_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetInt32WithTitle_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetInt32WithTitle_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetInt32WithTitle_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetInt32WithTitle_Response where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/GetInt32WithTitle_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetInt32WithTitle_Response() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetString_Request() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__GetString_Request__init(msg: *mut GetString_Request) -> bool;
    fn std_srvs__srv__GetString_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetString_Request>, size: usize) -> bool;
    fn std_srvs__srv__GetString_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetString_Request>);
    fn std_srvs__srv__GetString_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetString_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetString_Request>) -> bool;
}

// Corresponds to std_srvs__srv__GetString_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetString_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetString_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__GetString_Request__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__GetString_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetString_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetString_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetString_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetString_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetString_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetString_Request where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/GetString_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetString_Request() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetString_Response() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__GetString_Response__init(msg: *mut GetString_Response) -> bool;
    fn std_srvs__srv__GetString_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetString_Response>, size: usize) -> bool;
    fn std_srvs__srv__GetString_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetString_Response>);
    fn std_srvs__srv__GetString_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetString_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetString_Response>) -> bool;
}

// Corresponds to std_srvs__srv__GetString_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetString_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub data: rosidl_runtime_rs::String,

    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: rosidl_runtime_rs::String,

}



impl Default for GetString_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__GetString_Response__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__GetString_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetString_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetString_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetString_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetString_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetString_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetString_Response where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/GetString_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetString_Response() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetStringArray_Request() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__GetStringArray_Request__init(msg: *mut GetStringArray_Request) -> bool;
    fn std_srvs__srv__GetStringArray_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetStringArray_Request>, size: usize) -> bool;
    fn std_srvs__srv__GetStringArray_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetStringArray_Request>);
    fn std_srvs__srv__GetStringArray_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetStringArray_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetStringArray_Request>) -> bool;
}

// Corresponds to std_srvs__srv__GetStringArray_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetStringArray_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetStringArray_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__GetStringArray_Request__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__GetStringArray_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetStringArray_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetStringArray_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetStringArray_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetStringArray_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetStringArray_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetStringArray_Request where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/GetStringArray_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetStringArray_Request() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetStringArray_Response() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__GetStringArray_Response__init(msg: *mut GetStringArray_Response) -> bool;
    fn std_srvs__srv__GetStringArray_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetStringArray_Response>, size: usize) -> bool;
    fn std_srvs__srv__GetStringArray_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetStringArray_Response>);
    fn std_srvs__srv__GetStringArray_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetStringArray_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetStringArray_Response>) -> bool;
}

// Corresponds to std_srvs__srv__GetStringArray_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetStringArray_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub data: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: rosidl_runtime_rs::String,

}



impl Default for GetStringArray_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__GetStringArray_Response__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__GetStringArray_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetStringArray_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetStringArray_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetStringArray_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetStringArray_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetStringArray_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetStringArray_Response where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/GetStringArray_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetStringArray_Response() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetStringArrayWithTitle_Request() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__GetStringArrayWithTitle_Request__init(msg: *mut GetStringArrayWithTitle_Request) -> bool;
    fn std_srvs__srv__GetStringArrayWithTitle_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetStringArrayWithTitle_Request>, size: usize) -> bool;
    fn std_srvs__srv__GetStringArrayWithTitle_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetStringArrayWithTitle_Request>);
    fn std_srvs__srv__GetStringArrayWithTitle_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetStringArrayWithTitle_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetStringArrayWithTitle_Request>) -> bool;
}

// Corresponds to std_srvs__srv__GetStringArrayWithTitle_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetStringArrayWithTitle_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub title: rosidl_runtime_rs::String,

}



impl Default for GetStringArrayWithTitle_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__GetStringArrayWithTitle_Request__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__GetStringArrayWithTitle_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetStringArrayWithTitle_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetStringArrayWithTitle_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetStringArrayWithTitle_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetStringArrayWithTitle_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetStringArrayWithTitle_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetStringArrayWithTitle_Request where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/GetStringArrayWithTitle_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetStringArrayWithTitle_Request() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetStringArrayWithTitle_Response() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__GetStringArrayWithTitle_Response__init(msg: *mut GetStringArrayWithTitle_Response) -> bool;
    fn std_srvs__srv__GetStringArrayWithTitle_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetStringArrayWithTitle_Response>, size: usize) -> bool;
    fn std_srvs__srv__GetStringArrayWithTitle_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetStringArrayWithTitle_Response>);
    fn std_srvs__srv__GetStringArrayWithTitle_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetStringArrayWithTitle_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetStringArrayWithTitle_Response>) -> bool;
}

// Corresponds to std_srvs__srv__GetStringArrayWithTitle_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetStringArrayWithTitle_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub data: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: rosidl_runtime_rs::String,

}



impl Default for GetStringArrayWithTitle_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__GetStringArrayWithTitle_Response__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__GetStringArrayWithTitle_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetStringArrayWithTitle_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetStringArrayWithTitle_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetStringArrayWithTitle_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetStringArrayWithTitle_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetStringArrayWithTitle_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetStringArrayWithTitle_Response where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/GetStringArrayWithTitle_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetStringArrayWithTitle_Response() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetStringWithTitle_Request() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__GetStringWithTitle_Request__init(msg: *mut GetStringWithTitle_Request) -> bool;
    fn std_srvs__srv__GetStringWithTitle_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetStringWithTitle_Request>, size: usize) -> bool;
    fn std_srvs__srv__GetStringWithTitle_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetStringWithTitle_Request>);
    fn std_srvs__srv__GetStringWithTitle_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetStringWithTitle_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetStringWithTitle_Request>) -> bool;
}

// Corresponds to std_srvs__srv__GetStringWithTitle_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetStringWithTitle_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub title: rosidl_runtime_rs::String,

}



impl Default for GetStringWithTitle_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__GetStringWithTitle_Request__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__GetStringWithTitle_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetStringWithTitle_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetStringWithTitle_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetStringWithTitle_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetStringWithTitle_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetStringWithTitle_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetStringWithTitle_Request where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/GetStringWithTitle_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetStringWithTitle_Request() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetStringWithTitle_Response() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__GetStringWithTitle_Response__init(msg: *mut GetStringWithTitle_Response) -> bool;
    fn std_srvs__srv__GetStringWithTitle_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetStringWithTitle_Response>, size: usize) -> bool;
    fn std_srvs__srv__GetStringWithTitle_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetStringWithTitle_Response>);
    fn std_srvs__srv__GetStringWithTitle_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetStringWithTitle_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetStringWithTitle_Response>) -> bool;
}

// Corresponds to std_srvs__srv__GetStringWithTitle_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetStringWithTitle_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub data: rosidl_runtime_rs::String,

    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: rosidl_runtime_rs::String,

}



impl Default for GetStringWithTitle_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__GetStringWithTitle_Response__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__GetStringWithTitle_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetStringWithTitle_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetStringWithTitle_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetStringWithTitle_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetStringWithTitle_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetStringWithTitle_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetStringWithTitle_Response where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/GetStringWithTitle_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetStringWithTitle_Response() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetUint32_Request() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__GetUint32_Request__init(msg: *mut GetUint32_Request) -> bool;
    fn std_srvs__srv__GetUint32_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetUint32_Request>, size: usize) -> bool;
    fn std_srvs__srv__GetUint32_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetUint32_Request>);
    fn std_srvs__srv__GetUint32_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetUint32_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetUint32_Request>) -> bool;
}

// Corresponds to std_srvs__srv__GetUint32_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetUint32_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetUint32_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__GetUint32_Request__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__GetUint32_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetUint32_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetUint32_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetUint32_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetUint32_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetUint32_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetUint32_Request where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/GetUint32_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetUint32_Request() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetUint32_Response() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__GetUint32_Response__init(msg: *mut GetUint32_Response) -> bool;
    fn std_srvs__srv__GetUint32_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetUint32_Response>, size: usize) -> bool;
    fn std_srvs__srv__GetUint32_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetUint32_Response>);
    fn std_srvs__srv__GetUint32_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetUint32_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetUint32_Response>) -> bool;
}

// Corresponds to std_srvs__srv__GetUint32_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetUint32_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub data: u32,

    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: rosidl_runtime_rs::String,

}



impl Default for GetUint32_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__GetUint32_Response__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__GetUint32_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetUint32_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetUint32_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetUint32_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetUint32_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetUint32_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetUint32_Response where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/GetUint32_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetUint32_Response() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetUint32Array_Request() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__GetUint32Array_Request__init(msg: *mut GetUint32Array_Request) -> bool;
    fn std_srvs__srv__GetUint32Array_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetUint32Array_Request>, size: usize) -> bool;
    fn std_srvs__srv__GetUint32Array_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetUint32Array_Request>);
    fn std_srvs__srv__GetUint32Array_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetUint32Array_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetUint32Array_Request>) -> bool;
}

// Corresponds to std_srvs__srv__GetUint32Array_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetUint32Array_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetUint32Array_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__GetUint32Array_Request__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__GetUint32Array_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetUint32Array_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetUint32Array_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetUint32Array_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetUint32Array_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetUint32Array_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetUint32Array_Request where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/GetUint32Array_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetUint32Array_Request() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetUint32Array_Response() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__GetUint32Array_Response__init(msg: *mut GetUint32Array_Response) -> bool;
    fn std_srvs__srv__GetUint32Array_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetUint32Array_Response>, size: usize) -> bool;
    fn std_srvs__srv__GetUint32Array_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetUint32Array_Response>);
    fn std_srvs__srv__GetUint32Array_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetUint32Array_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetUint32Array_Response>) -> bool;
}

// Corresponds to std_srvs__srv__GetUint32Array_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetUint32Array_Response {
    /// array of data
    pub data: rosidl_runtime_rs::Sequence<u32>,

    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: rosidl_runtime_rs::String,

}



impl Default for GetUint32Array_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__GetUint32Array_Response__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__GetUint32Array_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetUint32Array_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetUint32Array_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetUint32Array_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetUint32Array_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetUint32Array_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetUint32Array_Response where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/GetUint32Array_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetUint32Array_Response() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetUint32ArrayWithTitle_Request() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__GetUint32ArrayWithTitle_Request__init(msg: *mut GetUint32ArrayWithTitle_Request) -> bool;
    fn std_srvs__srv__GetUint32ArrayWithTitle_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetUint32ArrayWithTitle_Request>, size: usize) -> bool;
    fn std_srvs__srv__GetUint32ArrayWithTitle_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetUint32ArrayWithTitle_Request>);
    fn std_srvs__srv__GetUint32ArrayWithTitle_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetUint32ArrayWithTitle_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetUint32ArrayWithTitle_Request>) -> bool;
}

// Corresponds to std_srvs__srv__GetUint32ArrayWithTitle_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetUint32ArrayWithTitle_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub title: rosidl_runtime_rs::String,

}



impl Default for GetUint32ArrayWithTitle_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__GetUint32ArrayWithTitle_Request__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__GetUint32ArrayWithTitle_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetUint32ArrayWithTitle_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetUint32ArrayWithTitle_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetUint32ArrayWithTitle_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetUint32ArrayWithTitle_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetUint32ArrayWithTitle_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetUint32ArrayWithTitle_Request where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/GetUint32ArrayWithTitle_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetUint32ArrayWithTitle_Request() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetUint32ArrayWithTitle_Response() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__GetUint32ArrayWithTitle_Response__init(msg: *mut GetUint32ArrayWithTitle_Response) -> bool;
    fn std_srvs__srv__GetUint32ArrayWithTitle_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetUint32ArrayWithTitle_Response>, size: usize) -> bool;
    fn std_srvs__srv__GetUint32ArrayWithTitle_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetUint32ArrayWithTitle_Response>);
    fn std_srvs__srv__GetUint32ArrayWithTitle_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetUint32ArrayWithTitle_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetUint32ArrayWithTitle_Response>) -> bool;
}

// Corresponds to std_srvs__srv__GetUint32ArrayWithTitle_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetUint32ArrayWithTitle_Response {
    /// array of data
    pub data: rosidl_runtime_rs::Sequence<u32>,

    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: rosidl_runtime_rs::String,

}



impl Default for GetUint32ArrayWithTitle_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__GetUint32ArrayWithTitle_Response__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__GetUint32ArrayWithTitle_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetUint32ArrayWithTitle_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetUint32ArrayWithTitle_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetUint32ArrayWithTitle_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetUint32ArrayWithTitle_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetUint32ArrayWithTitle_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetUint32ArrayWithTitle_Response where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/GetUint32ArrayWithTitle_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetUint32ArrayWithTitle_Response() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetUint32WithTitle_Request() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__GetUint32WithTitle_Request__init(msg: *mut GetUint32WithTitle_Request) -> bool;
    fn std_srvs__srv__GetUint32WithTitle_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetUint32WithTitle_Request>, size: usize) -> bool;
    fn std_srvs__srv__GetUint32WithTitle_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetUint32WithTitle_Request>);
    fn std_srvs__srv__GetUint32WithTitle_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetUint32WithTitle_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetUint32WithTitle_Request>) -> bool;
}

// Corresponds to std_srvs__srv__GetUint32WithTitle_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetUint32WithTitle_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub title: rosidl_runtime_rs::String,

}



impl Default for GetUint32WithTitle_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__GetUint32WithTitle_Request__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__GetUint32WithTitle_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetUint32WithTitle_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetUint32WithTitle_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetUint32WithTitle_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetUint32WithTitle_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetUint32WithTitle_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetUint32WithTitle_Request where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/GetUint32WithTitle_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetUint32WithTitle_Request() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetUint32WithTitle_Response() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__GetUint32WithTitle_Response__init(msg: *mut GetUint32WithTitle_Response) -> bool;
    fn std_srvs__srv__GetUint32WithTitle_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetUint32WithTitle_Response>, size: usize) -> bool;
    fn std_srvs__srv__GetUint32WithTitle_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetUint32WithTitle_Response>);
    fn std_srvs__srv__GetUint32WithTitle_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetUint32WithTitle_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetUint32WithTitle_Response>) -> bool;
}

// Corresponds to std_srvs__srv__GetUint32WithTitle_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetUint32WithTitle_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub data: u32,

    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: rosidl_runtime_rs::String,

}



impl Default for GetUint32WithTitle_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__GetUint32WithTitle_Response__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__GetUint32WithTitle_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetUint32WithTitle_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetUint32WithTitle_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetUint32WithTitle_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetUint32WithTitle_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetUint32WithTitle_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetUint32WithTitle_Response where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/GetUint32WithTitle_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetUint32WithTitle_Response() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetUint8_Request() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__GetUint8_Request__init(msg: *mut GetUint8_Request) -> bool;
    fn std_srvs__srv__GetUint8_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetUint8_Request>, size: usize) -> bool;
    fn std_srvs__srv__GetUint8_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetUint8_Request>);
    fn std_srvs__srv__GetUint8_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetUint8_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetUint8_Request>) -> bool;
}

// Corresponds to std_srvs__srv__GetUint8_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetUint8_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetUint8_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__GetUint8_Request__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__GetUint8_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetUint8_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetUint8_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetUint8_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetUint8_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetUint8_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetUint8_Request where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/GetUint8_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetUint8_Request() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetUint8_Response() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__GetUint8_Response__init(msg: *mut GetUint8_Response) -> bool;
    fn std_srvs__srv__GetUint8_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetUint8_Response>, size: usize) -> bool;
    fn std_srvs__srv__GetUint8_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetUint8_Response>);
    fn std_srvs__srv__GetUint8_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetUint8_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetUint8_Response>) -> bool;
}

// Corresponds to std_srvs__srv__GetUint8_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetUint8_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub data: u8,

    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: rosidl_runtime_rs::String,

}



impl Default for GetUint8_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__GetUint8_Response__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__GetUint8_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetUint8_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetUint8_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetUint8_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetUint8_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetUint8_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetUint8_Response where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/GetUint8_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetUint8_Response() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetUint8Array_Request() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__GetUint8Array_Request__init(msg: *mut GetUint8Array_Request) -> bool;
    fn std_srvs__srv__GetUint8Array_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetUint8Array_Request>, size: usize) -> bool;
    fn std_srvs__srv__GetUint8Array_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetUint8Array_Request>);
    fn std_srvs__srv__GetUint8Array_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetUint8Array_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetUint8Array_Request>) -> bool;
}

// Corresponds to std_srvs__srv__GetUint8Array_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetUint8Array_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetUint8Array_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__GetUint8Array_Request__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__GetUint8Array_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetUint8Array_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetUint8Array_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetUint8Array_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetUint8Array_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetUint8Array_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetUint8Array_Request where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/GetUint8Array_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetUint8Array_Request() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetUint8Array_Response() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__GetUint8Array_Response__init(msg: *mut GetUint8Array_Response) -> bool;
    fn std_srvs__srv__GetUint8Array_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetUint8Array_Response>, size: usize) -> bool;
    fn std_srvs__srv__GetUint8Array_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetUint8Array_Response>);
    fn std_srvs__srv__GetUint8Array_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetUint8Array_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetUint8Array_Response>) -> bool;
}

// Corresponds to std_srvs__srv__GetUint8Array_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetUint8Array_Response {
    /// array of data
    pub data: rosidl_runtime_rs::Sequence<u8>,

    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: rosidl_runtime_rs::String,

}



impl Default for GetUint8Array_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__GetUint8Array_Response__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__GetUint8Array_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetUint8Array_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetUint8Array_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetUint8Array_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetUint8Array_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetUint8Array_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetUint8Array_Response where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/GetUint8Array_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetUint8Array_Response() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetUint8ArrayWithTitle_Request() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__GetUint8ArrayWithTitle_Request__init(msg: *mut GetUint8ArrayWithTitle_Request) -> bool;
    fn std_srvs__srv__GetUint8ArrayWithTitle_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetUint8ArrayWithTitle_Request>, size: usize) -> bool;
    fn std_srvs__srv__GetUint8ArrayWithTitle_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetUint8ArrayWithTitle_Request>);
    fn std_srvs__srv__GetUint8ArrayWithTitle_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetUint8ArrayWithTitle_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetUint8ArrayWithTitle_Request>) -> bool;
}

// Corresponds to std_srvs__srv__GetUint8ArrayWithTitle_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetUint8ArrayWithTitle_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub title: rosidl_runtime_rs::String,

}



impl Default for GetUint8ArrayWithTitle_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__GetUint8ArrayWithTitle_Request__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__GetUint8ArrayWithTitle_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetUint8ArrayWithTitle_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetUint8ArrayWithTitle_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetUint8ArrayWithTitle_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetUint8ArrayWithTitle_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetUint8ArrayWithTitle_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetUint8ArrayWithTitle_Request where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/GetUint8ArrayWithTitle_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetUint8ArrayWithTitle_Request() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetUint8ArrayWithTitle_Response() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__GetUint8ArrayWithTitle_Response__init(msg: *mut GetUint8ArrayWithTitle_Response) -> bool;
    fn std_srvs__srv__GetUint8ArrayWithTitle_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetUint8ArrayWithTitle_Response>, size: usize) -> bool;
    fn std_srvs__srv__GetUint8ArrayWithTitle_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetUint8ArrayWithTitle_Response>);
    fn std_srvs__srv__GetUint8ArrayWithTitle_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetUint8ArrayWithTitle_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetUint8ArrayWithTitle_Response>) -> bool;
}

// Corresponds to std_srvs__srv__GetUint8ArrayWithTitle_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetUint8ArrayWithTitle_Response {
    /// array of data
    pub data: rosidl_runtime_rs::Sequence<u8>,

    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: rosidl_runtime_rs::String,

}



impl Default for GetUint8ArrayWithTitle_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__GetUint8ArrayWithTitle_Response__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__GetUint8ArrayWithTitle_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetUint8ArrayWithTitle_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetUint8ArrayWithTitle_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetUint8ArrayWithTitle_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetUint8ArrayWithTitle_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetUint8ArrayWithTitle_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetUint8ArrayWithTitle_Response where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/GetUint8ArrayWithTitle_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetUint8ArrayWithTitle_Response() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetUint8WithTitle_Request() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__GetUint8WithTitle_Request__init(msg: *mut GetUint8WithTitle_Request) -> bool;
    fn std_srvs__srv__GetUint8WithTitle_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetUint8WithTitle_Request>, size: usize) -> bool;
    fn std_srvs__srv__GetUint8WithTitle_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetUint8WithTitle_Request>);
    fn std_srvs__srv__GetUint8WithTitle_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetUint8WithTitle_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetUint8WithTitle_Request>) -> bool;
}

// Corresponds to std_srvs__srv__GetUint8WithTitle_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetUint8WithTitle_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub title: rosidl_runtime_rs::String,

}



impl Default for GetUint8WithTitle_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__GetUint8WithTitle_Request__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__GetUint8WithTitle_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetUint8WithTitle_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetUint8WithTitle_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetUint8WithTitle_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetUint8WithTitle_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetUint8WithTitle_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetUint8WithTitle_Request where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/GetUint8WithTitle_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetUint8WithTitle_Request() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetUint8WithTitle_Response() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__GetUint8WithTitle_Response__init(msg: *mut GetUint8WithTitle_Response) -> bool;
    fn std_srvs__srv__GetUint8WithTitle_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetUint8WithTitle_Response>, size: usize) -> bool;
    fn std_srvs__srv__GetUint8WithTitle_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetUint8WithTitle_Response>);
    fn std_srvs__srv__GetUint8WithTitle_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetUint8WithTitle_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetUint8WithTitle_Response>) -> bool;
}

// Corresponds to std_srvs__srv__GetUint8WithTitle_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetUint8WithTitle_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub data: u8,

    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: rosidl_runtime_rs::String,

}



impl Default for GetUint8WithTitle_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__GetUint8WithTitle_Response__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__GetUint8WithTitle_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetUint8WithTitle_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetUint8WithTitle_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetUint8WithTitle_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__GetUint8WithTitle_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetUint8WithTitle_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetUint8WithTitle_Response where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/GetUint8WithTitle_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__GetUint8WithTitle_Response() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetBool_Request() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__SetBool_Request__init(msg: *mut SetBool_Request) -> bool;
    fn std_srvs__srv__SetBool_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetBool_Request>, size: usize) -> bool;
    fn std_srvs__srv__SetBool_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetBool_Request>);
    fn std_srvs__srv__SetBool_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetBool_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetBool_Request>) -> bool;
}

// Corresponds to std_srvs__srv__SetBool_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetBool_Request {
    /// e.g. for hardware enabling / disabling
    pub data: bool,

}



impl Default for SetBool_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__SetBool_Request__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__SetBool_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetBool_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetBool_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetBool_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetBool_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetBool_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetBool_Request where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/SetBool_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetBool_Request() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetBool_Response() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__SetBool_Response__init(msg: *mut SetBool_Response) -> bool;
    fn std_srvs__srv__SetBool_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetBool_Response>, size: usize) -> bool;
    fn std_srvs__srv__SetBool_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetBool_Response>);
    fn std_srvs__srv__SetBool_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetBool_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetBool_Response>) -> bool;
}

// Corresponds to std_srvs__srv__SetBool_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetBool_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: rosidl_runtime_rs::String,

}



impl Default for SetBool_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__SetBool_Response__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__SetBool_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetBool_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetBool_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetBool_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetBool_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetBool_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetBool_Response where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/SetBool_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetBool_Response() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetBoolWithTitle_Request() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__SetBoolWithTitle_Request__init(msg: *mut SetBoolWithTitle_Request) -> bool;
    fn std_srvs__srv__SetBoolWithTitle_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetBoolWithTitle_Request>, size: usize) -> bool;
    fn std_srvs__srv__SetBoolWithTitle_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetBoolWithTitle_Request>);
    fn std_srvs__srv__SetBoolWithTitle_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetBoolWithTitle_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetBoolWithTitle_Request>) -> bool;
}

// Corresponds to std_srvs__srv__SetBoolWithTitle_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetBoolWithTitle_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub title: rosidl_runtime_rs::String,

    /// e.g. for hardware enabling / disabling
    pub data: bool,

}



impl Default for SetBoolWithTitle_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__SetBoolWithTitle_Request__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__SetBoolWithTitle_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetBoolWithTitle_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetBoolWithTitle_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetBoolWithTitle_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetBoolWithTitle_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetBoolWithTitle_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetBoolWithTitle_Request where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/SetBoolWithTitle_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetBoolWithTitle_Request() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetBoolWithTitle_Response() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__SetBoolWithTitle_Response__init(msg: *mut SetBoolWithTitle_Response) -> bool;
    fn std_srvs__srv__SetBoolWithTitle_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetBoolWithTitle_Response>, size: usize) -> bool;
    fn std_srvs__srv__SetBoolWithTitle_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetBoolWithTitle_Response>);
    fn std_srvs__srv__SetBoolWithTitle_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetBoolWithTitle_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetBoolWithTitle_Response>) -> bool;
}

// Corresponds to std_srvs__srv__SetBoolWithTitle_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetBoolWithTitle_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: rosidl_runtime_rs::String,

}



impl Default for SetBoolWithTitle_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__SetBoolWithTitle_Response__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__SetBoolWithTitle_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetBoolWithTitle_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetBoolWithTitle_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetBoolWithTitle_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetBoolWithTitle_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetBoolWithTitle_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetBoolWithTitle_Response where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/SetBoolWithTitle_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetBoolWithTitle_Response() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetFloat32_Request() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__SetFloat32_Request__init(msg: *mut SetFloat32_Request) -> bool;
    fn std_srvs__srv__SetFloat32_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetFloat32_Request>, size: usize) -> bool;
    fn std_srvs__srv__SetFloat32_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetFloat32_Request>);
    fn std_srvs__srv__SetFloat32_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetFloat32_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetFloat32_Request>) -> bool;
}

// Corresponds to std_srvs__srv__SetFloat32_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetFloat32_Request {
    /// data
    pub data: f32,

}



impl Default for SetFloat32_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__SetFloat32_Request__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__SetFloat32_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetFloat32_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetFloat32_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetFloat32_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetFloat32_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetFloat32_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetFloat32_Request where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/SetFloat32_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetFloat32_Request() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetFloat32_Response() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__SetFloat32_Response__init(msg: *mut SetFloat32_Response) -> bool;
    fn std_srvs__srv__SetFloat32_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetFloat32_Response>, size: usize) -> bool;
    fn std_srvs__srv__SetFloat32_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetFloat32_Response>);
    fn std_srvs__srv__SetFloat32_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetFloat32_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetFloat32_Response>) -> bool;
}

// Corresponds to std_srvs__srv__SetFloat32_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetFloat32_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: rosidl_runtime_rs::String,

}



impl Default for SetFloat32_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__SetFloat32_Response__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__SetFloat32_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetFloat32_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetFloat32_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetFloat32_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetFloat32_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetFloat32_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetFloat32_Response where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/SetFloat32_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetFloat32_Response() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetFloat32Array_Request() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__SetFloat32Array_Request__init(msg: *mut SetFloat32Array_Request) -> bool;
    fn std_srvs__srv__SetFloat32Array_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetFloat32Array_Request>, size: usize) -> bool;
    fn std_srvs__srv__SetFloat32Array_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetFloat32Array_Request>);
    fn std_srvs__srv__SetFloat32Array_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetFloat32Array_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetFloat32Array_Request>) -> bool;
}

// Corresponds to std_srvs__srv__SetFloat32Array_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetFloat32Array_Request {
    /// array of data
    pub data: rosidl_runtime_rs::Sequence<f32>,

}



impl Default for SetFloat32Array_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__SetFloat32Array_Request__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__SetFloat32Array_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetFloat32Array_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetFloat32Array_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetFloat32Array_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetFloat32Array_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetFloat32Array_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetFloat32Array_Request where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/SetFloat32Array_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetFloat32Array_Request() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetFloat32Array_Response() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__SetFloat32Array_Response__init(msg: *mut SetFloat32Array_Response) -> bool;
    fn std_srvs__srv__SetFloat32Array_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetFloat32Array_Response>, size: usize) -> bool;
    fn std_srvs__srv__SetFloat32Array_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetFloat32Array_Response>);
    fn std_srvs__srv__SetFloat32Array_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetFloat32Array_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetFloat32Array_Response>) -> bool;
}

// Corresponds to std_srvs__srv__SetFloat32Array_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetFloat32Array_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: rosidl_runtime_rs::String,

}



impl Default for SetFloat32Array_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__SetFloat32Array_Response__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__SetFloat32Array_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetFloat32Array_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetFloat32Array_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetFloat32Array_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetFloat32Array_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetFloat32Array_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetFloat32Array_Response where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/SetFloat32Array_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetFloat32Array_Response() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetFloat32ArrayWithTitle_Request() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__SetFloat32ArrayWithTitle_Request__init(msg: *mut SetFloat32ArrayWithTitle_Request) -> bool;
    fn std_srvs__srv__SetFloat32ArrayWithTitle_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetFloat32ArrayWithTitle_Request>, size: usize) -> bool;
    fn std_srvs__srv__SetFloat32ArrayWithTitle_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetFloat32ArrayWithTitle_Request>);
    fn std_srvs__srv__SetFloat32ArrayWithTitle_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetFloat32ArrayWithTitle_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetFloat32ArrayWithTitle_Request>) -> bool;
}

// Corresponds to std_srvs__srv__SetFloat32ArrayWithTitle_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetFloat32ArrayWithTitle_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub title: rosidl_runtime_rs::String,

    /// array of data
    pub data: rosidl_runtime_rs::Sequence<f32>,

}



impl Default for SetFloat32ArrayWithTitle_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__SetFloat32ArrayWithTitle_Request__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__SetFloat32ArrayWithTitle_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetFloat32ArrayWithTitle_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetFloat32ArrayWithTitle_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetFloat32ArrayWithTitle_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetFloat32ArrayWithTitle_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetFloat32ArrayWithTitle_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetFloat32ArrayWithTitle_Request where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/SetFloat32ArrayWithTitle_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetFloat32ArrayWithTitle_Request() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetFloat32ArrayWithTitle_Response() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__SetFloat32ArrayWithTitle_Response__init(msg: *mut SetFloat32ArrayWithTitle_Response) -> bool;
    fn std_srvs__srv__SetFloat32ArrayWithTitle_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetFloat32ArrayWithTitle_Response>, size: usize) -> bool;
    fn std_srvs__srv__SetFloat32ArrayWithTitle_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetFloat32ArrayWithTitle_Response>);
    fn std_srvs__srv__SetFloat32ArrayWithTitle_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetFloat32ArrayWithTitle_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetFloat32ArrayWithTitle_Response>) -> bool;
}

// Corresponds to std_srvs__srv__SetFloat32ArrayWithTitle_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetFloat32ArrayWithTitle_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: rosidl_runtime_rs::String,

}



impl Default for SetFloat32ArrayWithTitle_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__SetFloat32ArrayWithTitle_Response__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__SetFloat32ArrayWithTitle_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetFloat32ArrayWithTitle_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetFloat32ArrayWithTitle_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetFloat32ArrayWithTitle_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetFloat32ArrayWithTitle_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetFloat32ArrayWithTitle_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetFloat32ArrayWithTitle_Response where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/SetFloat32ArrayWithTitle_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetFloat32ArrayWithTitle_Response() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetFloat32WithTitle_Request() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__SetFloat32WithTitle_Request__init(msg: *mut SetFloat32WithTitle_Request) -> bool;
    fn std_srvs__srv__SetFloat32WithTitle_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetFloat32WithTitle_Request>, size: usize) -> bool;
    fn std_srvs__srv__SetFloat32WithTitle_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetFloat32WithTitle_Request>);
    fn std_srvs__srv__SetFloat32WithTitle_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetFloat32WithTitle_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetFloat32WithTitle_Request>) -> bool;
}

// Corresponds to std_srvs__srv__SetFloat32WithTitle_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetFloat32WithTitle_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub title: rosidl_runtime_rs::String,

    /// data
    pub data: f32,

}



impl Default for SetFloat32WithTitle_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__SetFloat32WithTitle_Request__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__SetFloat32WithTitle_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetFloat32WithTitle_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetFloat32WithTitle_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetFloat32WithTitle_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetFloat32WithTitle_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetFloat32WithTitle_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetFloat32WithTitle_Request where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/SetFloat32WithTitle_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetFloat32WithTitle_Request() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetFloat32WithTitle_Response() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__SetFloat32WithTitle_Response__init(msg: *mut SetFloat32WithTitle_Response) -> bool;
    fn std_srvs__srv__SetFloat32WithTitle_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetFloat32WithTitle_Response>, size: usize) -> bool;
    fn std_srvs__srv__SetFloat32WithTitle_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetFloat32WithTitle_Response>);
    fn std_srvs__srv__SetFloat32WithTitle_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetFloat32WithTitle_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetFloat32WithTitle_Response>) -> bool;
}

// Corresponds to std_srvs__srv__SetFloat32WithTitle_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetFloat32WithTitle_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: rosidl_runtime_rs::String,

}



impl Default for SetFloat32WithTitle_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__SetFloat32WithTitle_Response__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__SetFloat32WithTitle_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetFloat32WithTitle_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetFloat32WithTitle_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetFloat32WithTitle_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetFloat32WithTitle_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetFloat32WithTitle_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetFloat32WithTitle_Response where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/SetFloat32WithTitle_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetFloat32WithTitle_Response() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetFloat64_Request() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__SetFloat64_Request__init(msg: *mut SetFloat64_Request) -> bool;
    fn std_srvs__srv__SetFloat64_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetFloat64_Request>, size: usize) -> bool;
    fn std_srvs__srv__SetFloat64_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetFloat64_Request>);
    fn std_srvs__srv__SetFloat64_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetFloat64_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetFloat64_Request>) -> bool;
}

// Corresponds to std_srvs__srv__SetFloat64_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetFloat64_Request {
    /// data
    pub data: f64,

}



impl Default for SetFloat64_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__SetFloat64_Request__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__SetFloat64_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetFloat64_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetFloat64_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetFloat64_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetFloat64_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetFloat64_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetFloat64_Request where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/SetFloat64_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetFloat64_Request() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetFloat64_Response() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__SetFloat64_Response__init(msg: *mut SetFloat64_Response) -> bool;
    fn std_srvs__srv__SetFloat64_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetFloat64_Response>, size: usize) -> bool;
    fn std_srvs__srv__SetFloat64_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetFloat64_Response>);
    fn std_srvs__srv__SetFloat64_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetFloat64_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetFloat64_Response>) -> bool;
}

// Corresponds to std_srvs__srv__SetFloat64_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetFloat64_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: rosidl_runtime_rs::String,

}



impl Default for SetFloat64_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__SetFloat64_Response__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__SetFloat64_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetFloat64_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetFloat64_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetFloat64_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetFloat64_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetFloat64_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetFloat64_Response where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/SetFloat64_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetFloat64_Response() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetFloat64Array_Request() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__SetFloat64Array_Request__init(msg: *mut SetFloat64Array_Request) -> bool;
    fn std_srvs__srv__SetFloat64Array_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetFloat64Array_Request>, size: usize) -> bool;
    fn std_srvs__srv__SetFloat64Array_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetFloat64Array_Request>);
    fn std_srvs__srv__SetFloat64Array_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetFloat64Array_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetFloat64Array_Request>) -> bool;
}

// Corresponds to std_srvs__srv__SetFloat64Array_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetFloat64Array_Request {
    /// array of data
    pub data: rosidl_runtime_rs::Sequence<f64>,

}



impl Default for SetFloat64Array_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__SetFloat64Array_Request__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__SetFloat64Array_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetFloat64Array_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetFloat64Array_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetFloat64Array_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetFloat64Array_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetFloat64Array_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetFloat64Array_Request where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/SetFloat64Array_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetFloat64Array_Request() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetFloat64Array_Response() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__SetFloat64Array_Response__init(msg: *mut SetFloat64Array_Response) -> bool;
    fn std_srvs__srv__SetFloat64Array_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetFloat64Array_Response>, size: usize) -> bool;
    fn std_srvs__srv__SetFloat64Array_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetFloat64Array_Response>);
    fn std_srvs__srv__SetFloat64Array_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetFloat64Array_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetFloat64Array_Response>) -> bool;
}

// Corresponds to std_srvs__srv__SetFloat64Array_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetFloat64Array_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: rosidl_runtime_rs::String,

}



impl Default for SetFloat64Array_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__SetFloat64Array_Response__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__SetFloat64Array_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetFloat64Array_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetFloat64Array_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetFloat64Array_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetFloat64Array_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetFloat64Array_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetFloat64Array_Response where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/SetFloat64Array_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetFloat64Array_Response() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetFloat64ArrayWithTitle_Request() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__SetFloat64ArrayWithTitle_Request__init(msg: *mut SetFloat64ArrayWithTitle_Request) -> bool;
    fn std_srvs__srv__SetFloat64ArrayWithTitle_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetFloat64ArrayWithTitle_Request>, size: usize) -> bool;
    fn std_srvs__srv__SetFloat64ArrayWithTitle_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetFloat64ArrayWithTitle_Request>);
    fn std_srvs__srv__SetFloat64ArrayWithTitle_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetFloat64ArrayWithTitle_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetFloat64ArrayWithTitle_Request>) -> bool;
}

// Corresponds to std_srvs__srv__SetFloat64ArrayWithTitle_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetFloat64ArrayWithTitle_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub title: rosidl_runtime_rs::String,

    /// array of data
    pub data: rosidl_runtime_rs::Sequence<f64>,

}



impl Default for SetFloat64ArrayWithTitle_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__SetFloat64ArrayWithTitle_Request__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__SetFloat64ArrayWithTitle_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetFloat64ArrayWithTitle_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetFloat64ArrayWithTitle_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetFloat64ArrayWithTitle_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetFloat64ArrayWithTitle_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetFloat64ArrayWithTitle_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetFloat64ArrayWithTitle_Request where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/SetFloat64ArrayWithTitle_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetFloat64ArrayWithTitle_Request() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetFloat64ArrayWithTitle_Response() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__SetFloat64ArrayWithTitle_Response__init(msg: *mut SetFloat64ArrayWithTitle_Response) -> bool;
    fn std_srvs__srv__SetFloat64ArrayWithTitle_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetFloat64ArrayWithTitle_Response>, size: usize) -> bool;
    fn std_srvs__srv__SetFloat64ArrayWithTitle_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetFloat64ArrayWithTitle_Response>);
    fn std_srvs__srv__SetFloat64ArrayWithTitle_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetFloat64ArrayWithTitle_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetFloat64ArrayWithTitle_Response>) -> bool;
}

// Corresponds to std_srvs__srv__SetFloat64ArrayWithTitle_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetFloat64ArrayWithTitle_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: rosidl_runtime_rs::String,

}



impl Default for SetFloat64ArrayWithTitle_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__SetFloat64ArrayWithTitle_Response__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__SetFloat64ArrayWithTitle_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetFloat64ArrayWithTitle_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetFloat64ArrayWithTitle_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetFloat64ArrayWithTitle_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetFloat64ArrayWithTitle_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetFloat64ArrayWithTitle_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetFloat64ArrayWithTitle_Response where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/SetFloat64ArrayWithTitle_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetFloat64ArrayWithTitle_Response() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetFloat64WithTitle_Request() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__SetFloat64WithTitle_Request__init(msg: *mut SetFloat64WithTitle_Request) -> bool;
    fn std_srvs__srv__SetFloat64WithTitle_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetFloat64WithTitle_Request>, size: usize) -> bool;
    fn std_srvs__srv__SetFloat64WithTitle_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetFloat64WithTitle_Request>);
    fn std_srvs__srv__SetFloat64WithTitle_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetFloat64WithTitle_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetFloat64WithTitle_Request>) -> bool;
}

// Corresponds to std_srvs__srv__SetFloat64WithTitle_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetFloat64WithTitle_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub title: rosidl_runtime_rs::String,

    /// data
    pub data: f64,

}



impl Default for SetFloat64WithTitle_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__SetFloat64WithTitle_Request__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__SetFloat64WithTitle_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetFloat64WithTitle_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetFloat64WithTitle_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetFloat64WithTitle_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetFloat64WithTitle_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetFloat64WithTitle_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetFloat64WithTitle_Request where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/SetFloat64WithTitle_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetFloat64WithTitle_Request() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetFloat64WithTitle_Response() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__SetFloat64WithTitle_Response__init(msg: *mut SetFloat64WithTitle_Response) -> bool;
    fn std_srvs__srv__SetFloat64WithTitle_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetFloat64WithTitle_Response>, size: usize) -> bool;
    fn std_srvs__srv__SetFloat64WithTitle_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetFloat64WithTitle_Response>);
    fn std_srvs__srv__SetFloat64WithTitle_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetFloat64WithTitle_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetFloat64WithTitle_Response>) -> bool;
}

// Corresponds to std_srvs__srv__SetFloat64WithTitle_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetFloat64WithTitle_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: rosidl_runtime_rs::String,

}



impl Default for SetFloat64WithTitle_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__SetFloat64WithTitle_Response__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__SetFloat64WithTitle_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetFloat64WithTitle_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetFloat64WithTitle_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetFloat64WithTitle_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetFloat64WithTitle_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetFloat64WithTitle_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetFloat64WithTitle_Response where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/SetFloat64WithTitle_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetFloat64WithTitle_Response() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetInt32_Request() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__SetInt32_Request__init(msg: *mut SetInt32_Request) -> bool;
    fn std_srvs__srv__SetInt32_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetInt32_Request>, size: usize) -> bool;
    fn std_srvs__srv__SetInt32_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetInt32_Request>);
    fn std_srvs__srv__SetInt32_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetInt32_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetInt32_Request>) -> bool;
}

// Corresponds to std_srvs__srv__SetInt32_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetInt32_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub data: i32,

}



impl Default for SetInt32_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__SetInt32_Request__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__SetInt32_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetInt32_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetInt32_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetInt32_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetInt32_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetInt32_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetInt32_Request where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/SetInt32_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetInt32_Request() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetInt32_Response() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__SetInt32_Response__init(msg: *mut SetInt32_Response) -> bool;
    fn std_srvs__srv__SetInt32_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetInt32_Response>, size: usize) -> bool;
    fn std_srvs__srv__SetInt32_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetInt32_Response>);
    fn std_srvs__srv__SetInt32_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetInt32_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetInt32_Response>) -> bool;
}

// Corresponds to std_srvs__srv__SetInt32_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetInt32_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: rosidl_runtime_rs::String,

}



impl Default for SetInt32_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__SetInt32_Response__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__SetInt32_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetInt32_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetInt32_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetInt32_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetInt32_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetInt32_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetInt32_Response where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/SetInt32_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetInt32_Response() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetInt32Array_Request() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__SetInt32Array_Request__init(msg: *mut SetInt32Array_Request) -> bool;
    fn std_srvs__srv__SetInt32Array_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetInt32Array_Request>, size: usize) -> bool;
    fn std_srvs__srv__SetInt32Array_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetInt32Array_Request>);
    fn std_srvs__srv__SetInt32Array_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetInt32Array_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetInt32Array_Request>) -> bool;
}

// Corresponds to std_srvs__srv__SetInt32Array_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetInt32Array_Request {
    /// array of data
    pub data: rosidl_runtime_rs::Sequence<i32>,

}



impl Default for SetInt32Array_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__SetInt32Array_Request__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__SetInt32Array_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetInt32Array_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetInt32Array_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetInt32Array_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetInt32Array_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetInt32Array_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetInt32Array_Request where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/SetInt32Array_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetInt32Array_Request() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetInt32Array_Response() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__SetInt32Array_Response__init(msg: *mut SetInt32Array_Response) -> bool;
    fn std_srvs__srv__SetInt32Array_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetInt32Array_Response>, size: usize) -> bool;
    fn std_srvs__srv__SetInt32Array_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetInt32Array_Response>);
    fn std_srvs__srv__SetInt32Array_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetInt32Array_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetInt32Array_Response>) -> bool;
}

// Corresponds to std_srvs__srv__SetInt32Array_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetInt32Array_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: rosidl_runtime_rs::String,

}



impl Default for SetInt32Array_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__SetInt32Array_Response__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__SetInt32Array_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetInt32Array_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetInt32Array_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetInt32Array_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetInt32Array_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetInt32Array_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetInt32Array_Response where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/SetInt32Array_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetInt32Array_Response() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetInt32ArrayWithTitle_Request() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__SetInt32ArrayWithTitle_Request__init(msg: *mut SetInt32ArrayWithTitle_Request) -> bool;
    fn std_srvs__srv__SetInt32ArrayWithTitle_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetInt32ArrayWithTitle_Request>, size: usize) -> bool;
    fn std_srvs__srv__SetInt32ArrayWithTitle_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetInt32ArrayWithTitle_Request>);
    fn std_srvs__srv__SetInt32ArrayWithTitle_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetInt32ArrayWithTitle_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetInt32ArrayWithTitle_Request>) -> bool;
}

// Corresponds to std_srvs__srv__SetInt32ArrayWithTitle_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetInt32ArrayWithTitle_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub title: rosidl_runtime_rs::String,

    /// array of data
    pub data: rosidl_runtime_rs::Sequence<i32>,

}



impl Default for SetInt32ArrayWithTitle_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__SetInt32ArrayWithTitle_Request__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__SetInt32ArrayWithTitle_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetInt32ArrayWithTitle_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetInt32ArrayWithTitle_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetInt32ArrayWithTitle_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetInt32ArrayWithTitle_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetInt32ArrayWithTitle_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetInt32ArrayWithTitle_Request where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/SetInt32ArrayWithTitle_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetInt32ArrayWithTitle_Request() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetInt32ArrayWithTitle_Response() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__SetInt32ArrayWithTitle_Response__init(msg: *mut SetInt32ArrayWithTitle_Response) -> bool;
    fn std_srvs__srv__SetInt32ArrayWithTitle_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetInt32ArrayWithTitle_Response>, size: usize) -> bool;
    fn std_srvs__srv__SetInt32ArrayWithTitle_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetInt32ArrayWithTitle_Response>);
    fn std_srvs__srv__SetInt32ArrayWithTitle_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetInt32ArrayWithTitle_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetInt32ArrayWithTitle_Response>) -> bool;
}

// Corresponds to std_srvs__srv__SetInt32ArrayWithTitle_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetInt32ArrayWithTitle_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: rosidl_runtime_rs::String,

}



impl Default for SetInt32ArrayWithTitle_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__SetInt32ArrayWithTitle_Response__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__SetInt32ArrayWithTitle_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetInt32ArrayWithTitle_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetInt32ArrayWithTitle_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetInt32ArrayWithTitle_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetInt32ArrayWithTitle_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetInt32ArrayWithTitle_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetInt32ArrayWithTitle_Response where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/SetInt32ArrayWithTitle_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetInt32ArrayWithTitle_Response() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetInt32WithTitle_Request() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__SetInt32WithTitle_Request__init(msg: *mut SetInt32WithTitle_Request) -> bool;
    fn std_srvs__srv__SetInt32WithTitle_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetInt32WithTitle_Request>, size: usize) -> bool;
    fn std_srvs__srv__SetInt32WithTitle_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetInt32WithTitle_Request>);
    fn std_srvs__srv__SetInt32WithTitle_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetInt32WithTitle_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetInt32WithTitle_Request>) -> bool;
}

// Corresponds to std_srvs__srv__SetInt32WithTitle_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetInt32WithTitle_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub title: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: i32,

}



impl Default for SetInt32WithTitle_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__SetInt32WithTitle_Request__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__SetInt32WithTitle_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetInt32WithTitle_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetInt32WithTitle_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetInt32WithTitle_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetInt32WithTitle_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetInt32WithTitle_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetInt32WithTitle_Request where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/SetInt32WithTitle_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetInt32WithTitle_Request() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetInt32WithTitle_Response() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__SetInt32WithTitle_Response__init(msg: *mut SetInt32WithTitle_Response) -> bool;
    fn std_srvs__srv__SetInt32WithTitle_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetInt32WithTitle_Response>, size: usize) -> bool;
    fn std_srvs__srv__SetInt32WithTitle_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetInt32WithTitle_Response>);
    fn std_srvs__srv__SetInt32WithTitle_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetInt32WithTitle_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetInt32WithTitle_Response>) -> bool;
}

// Corresponds to std_srvs__srv__SetInt32WithTitle_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetInt32WithTitle_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: rosidl_runtime_rs::String,

}



impl Default for SetInt32WithTitle_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__SetInt32WithTitle_Response__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__SetInt32WithTitle_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetInt32WithTitle_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetInt32WithTitle_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetInt32WithTitle_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetInt32WithTitle_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetInt32WithTitle_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetInt32WithTitle_Response where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/SetInt32WithTitle_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetInt32WithTitle_Response() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetString_Request() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__SetString_Request__init(msg: *mut SetString_Request) -> bool;
    fn std_srvs__srv__SetString_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetString_Request>, size: usize) -> bool;
    fn std_srvs__srv__SetString_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetString_Request>);
    fn std_srvs__srv__SetString_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetString_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetString_Request>) -> bool;
}

// Corresponds to std_srvs__srv__SetString_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetString_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub data: rosidl_runtime_rs::String,

}



impl Default for SetString_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__SetString_Request__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__SetString_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetString_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetString_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetString_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetString_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetString_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetString_Request where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/SetString_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetString_Request() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetString_Response() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__SetString_Response__init(msg: *mut SetString_Response) -> bool;
    fn std_srvs__srv__SetString_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetString_Response>, size: usize) -> bool;
    fn std_srvs__srv__SetString_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetString_Response>);
    fn std_srvs__srv__SetString_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetString_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetString_Response>) -> bool;
}

// Corresponds to std_srvs__srv__SetString_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetString_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: rosidl_runtime_rs::String,

}



impl Default for SetString_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__SetString_Response__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__SetString_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetString_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetString_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetString_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetString_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetString_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetString_Response where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/SetString_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetString_Response() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetStringArray_Request() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__SetStringArray_Request__init(msg: *mut SetStringArray_Request) -> bool;
    fn std_srvs__srv__SetStringArray_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetStringArray_Request>, size: usize) -> bool;
    fn std_srvs__srv__SetStringArray_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetStringArray_Request>);
    fn std_srvs__srv__SetStringArray_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetStringArray_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetStringArray_Request>) -> bool;
}

// Corresponds to std_srvs__srv__SetStringArray_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetStringArray_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub data: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

}



impl Default for SetStringArray_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__SetStringArray_Request__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__SetStringArray_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetStringArray_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetStringArray_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetStringArray_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetStringArray_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetStringArray_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetStringArray_Request where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/SetStringArray_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetStringArray_Request() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetStringArray_Response() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__SetStringArray_Response__init(msg: *mut SetStringArray_Response) -> bool;
    fn std_srvs__srv__SetStringArray_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetStringArray_Response>, size: usize) -> bool;
    fn std_srvs__srv__SetStringArray_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetStringArray_Response>);
    fn std_srvs__srv__SetStringArray_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetStringArray_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetStringArray_Response>) -> bool;
}

// Corresponds to std_srvs__srv__SetStringArray_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetStringArray_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: rosidl_runtime_rs::String,

}



impl Default for SetStringArray_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__SetStringArray_Response__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__SetStringArray_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetStringArray_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetStringArray_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetStringArray_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetStringArray_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetStringArray_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetStringArray_Response where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/SetStringArray_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetStringArray_Response() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetStringArrayWithTitle_Request() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__SetStringArrayWithTitle_Request__init(msg: *mut SetStringArrayWithTitle_Request) -> bool;
    fn std_srvs__srv__SetStringArrayWithTitle_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetStringArrayWithTitle_Request>, size: usize) -> bool;
    fn std_srvs__srv__SetStringArrayWithTitle_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetStringArrayWithTitle_Request>);
    fn std_srvs__srv__SetStringArrayWithTitle_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetStringArrayWithTitle_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetStringArrayWithTitle_Request>) -> bool;
}

// Corresponds to std_srvs__srv__SetStringArrayWithTitle_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetStringArrayWithTitle_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub title: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

}



impl Default for SetStringArrayWithTitle_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__SetStringArrayWithTitle_Request__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__SetStringArrayWithTitle_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetStringArrayWithTitle_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetStringArrayWithTitle_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetStringArrayWithTitle_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetStringArrayWithTitle_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetStringArrayWithTitle_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetStringArrayWithTitle_Request where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/SetStringArrayWithTitle_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetStringArrayWithTitle_Request() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetStringArrayWithTitle_Response() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__SetStringArrayWithTitle_Response__init(msg: *mut SetStringArrayWithTitle_Response) -> bool;
    fn std_srvs__srv__SetStringArrayWithTitle_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetStringArrayWithTitle_Response>, size: usize) -> bool;
    fn std_srvs__srv__SetStringArrayWithTitle_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetStringArrayWithTitle_Response>);
    fn std_srvs__srv__SetStringArrayWithTitle_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetStringArrayWithTitle_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetStringArrayWithTitle_Response>) -> bool;
}

// Corresponds to std_srvs__srv__SetStringArrayWithTitle_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetStringArrayWithTitle_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: rosidl_runtime_rs::String,

}



impl Default for SetStringArrayWithTitle_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__SetStringArrayWithTitle_Response__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__SetStringArrayWithTitle_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetStringArrayWithTitle_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetStringArrayWithTitle_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetStringArrayWithTitle_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetStringArrayWithTitle_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetStringArrayWithTitle_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetStringArrayWithTitle_Response where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/SetStringArrayWithTitle_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetStringArrayWithTitle_Response() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetStringWithTitle_Request() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__SetStringWithTitle_Request__init(msg: *mut SetStringWithTitle_Request) -> bool;
    fn std_srvs__srv__SetStringWithTitle_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetStringWithTitle_Request>, size: usize) -> bool;
    fn std_srvs__srv__SetStringWithTitle_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetStringWithTitle_Request>);
    fn std_srvs__srv__SetStringWithTitle_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetStringWithTitle_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetStringWithTitle_Request>) -> bool;
}

// Corresponds to std_srvs__srv__SetStringWithTitle_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetStringWithTitle_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub title: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: rosidl_runtime_rs::String,

}



impl Default for SetStringWithTitle_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__SetStringWithTitle_Request__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__SetStringWithTitle_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetStringWithTitle_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetStringWithTitle_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetStringWithTitle_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetStringWithTitle_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetStringWithTitle_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetStringWithTitle_Request where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/SetStringWithTitle_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetStringWithTitle_Request() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetStringWithTitle_Response() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__SetStringWithTitle_Response__init(msg: *mut SetStringWithTitle_Response) -> bool;
    fn std_srvs__srv__SetStringWithTitle_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetStringWithTitle_Response>, size: usize) -> bool;
    fn std_srvs__srv__SetStringWithTitle_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetStringWithTitle_Response>);
    fn std_srvs__srv__SetStringWithTitle_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetStringWithTitle_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetStringWithTitle_Response>) -> bool;
}

// Corresponds to std_srvs__srv__SetStringWithTitle_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetStringWithTitle_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: rosidl_runtime_rs::String,

}



impl Default for SetStringWithTitle_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__SetStringWithTitle_Response__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__SetStringWithTitle_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetStringWithTitle_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetStringWithTitle_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetStringWithTitle_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetStringWithTitle_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetStringWithTitle_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetStringWithTitle_Response where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/SetStringWithTitle_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetStringWithTitle_Response() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetUint32_Request() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__SetUint32_Request__init(msg: *mut SetUint32_Request) -> bool;
    fn std_srvs__srv__SetUint32_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetUint32_Request>, size: usize) -> bool;
    fn std_srvs__srv__SetUint32_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetUint32_Request>);
    fn std_srvs__srv__SetUint32_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetUint32_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetUint32_Request>) -> bool;
}

// Corresponds to std_srvs__srv__SetUint32_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetUint32_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub data: u32,

}



impl Default for SetUint32_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__SetUint32_Request__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__SetUint32_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetUint32_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetUint32_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetUint32_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetUint32_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetUint32_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetUint32_Request where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/SetUint32_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetUint32_Request() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetUint32_Response() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__SetUint32_Response__init(msg: *mut SetUint32_Response) -> bool;
    fn std_srvs__srv__SetUint32_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetUint32_Response>, size: usize) -> bool;
    fn std_srvs__srv__SetUint32_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetUint32_Response>);
    fn std_srvs__srv__SetUint32_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetUint32_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetUint32_Response>) -> bool;
}

// Corresponds to std_srvs__srv__SetUint32_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetUint32_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: rosidl_runtime_rs::String,

}



impl Default for SetUint32_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__SetUint32_Response__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__SetUint32_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetUint32_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetUint32_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetUint32_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetUint32_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetUint32_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetUint32_Response where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/SetUint32_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetUint32_Response() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetUint32Array_Request() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__SetUint32Array_Request__init(msg: *mut SetUint32Array_Request) -> bool;
    fn std_srvs__srv__SetUint32Array_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetUint32Array_Request>, size: usize) -> bool;
    fn std_srvs__srv__SetUint32Array_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetUint32Array_Request>);
    fn std_srvs__srv__SetUint32Array_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetUint32Array_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetUint32Array_Request>) -> bool;
}

// Corresponds to std_srvs__srv__SetUint32Array_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetUint32Array_Request {
    /// array of data
    pub data: rosidl_runtime_rs::Sequence<u32>,

}



impl Default for SetUint32Array_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__SetUint32Array_Request__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__SetUint32Array_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetUint32Array_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetUint32Array_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetUint32Array_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetUint32Array_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetUint32Array_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetUint32Array_Request where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/SetUint32Array_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetUint32Array_Request() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetUint32Array_Response() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__SetUint32Array_Response__init(msg: *mut SetUint32Array_Response) -> bool;
    fn std_srvs__srv__SetUint32Array_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetUint32Array_Response>, size: usize) -> bool;
    fn std_srvs__srv__SetUint32Array_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetUint32Array_Response>);
    fn std_srvs__srv__SetUint32Array_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetUint32Array_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetUint32Array_Response>) -> bool;
}

// Corresponds to std_srvs__srv__SetUint32Array_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetUint32Array_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: rosidl_runtime_rs::String,

}



impl Default for SetUint32Array_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__SetUint32Array_Response__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__SetUint32Array_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetUint32Array_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetUint32Array_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetUint32Array_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetUint32Array_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetUint32Array_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetUint32Array_Response where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/SetUint32Array_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetUint32Array_Response() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetUint32ArrayWithTitle_Request() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__SetUint32ArrayWithTitle_Request__init(msg: *mut SetUint32ArrayWithTitle_Request) -> bool;
    fn std_srvs__srv__SetUint32ArrayWithTitle_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetUint32ArrayWithTitle_Request>, size: usize) -> bool;
    fn std_srvs__srv__SetUint32ArrayWithTitle_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetUint32ArrayWithTitle_Request>);
    fn std_srvs__srv__SetUint32ArrayWithTitle_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetUint32ArrayWithTitle_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetUint32ArrayWithTitle_Request>) -> bool;
}

// Corresponds to std_srvs__srv__SetUint32ArrayWithTitle_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetUint32ArrayWithTitle_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub title: rosidl_runtime_rs::String,

    /// array of data
    pub data: rosidl_runtime_rs::Sequence<u32>,

}



impl Default for SetUint32ArrayWithTitle_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__SetUint32ArrayWithTitle_Request__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__SetUint32ArrayWithTitle_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetUint32ArrayWithTitle_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetUint32ArrayWithTitle_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetUint32ArrayWithTitle_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetUint32ArrayWithTitle_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetUint32ArrayWithTitle_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetUint32ArrayWithTitle_Request where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/SetUint32ArrayWithTitle_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetUint32ArrayWithTitle_Request() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetUint32ArrayWithTitle_Response() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__SetUint32ArrayWithTitle_Response__init(msg: *mut SetUint32ArrayWithTitle_Response) -> bool;
    fn std_srvs__srv__SetUint32ArrayWithTitle_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetUint32ArrayWithTitle_Response>, size: usize) -> bool;
    fn std_srvs__srv__SetUint32ArrayWithTitle_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetUint32ArrayWithTitle_Response>);
    fn std_srvs__srv__SetUint32ArrayWithTitle_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetUint32ArrayWithTitle_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetUint32ArrayWithTitle_Response>) -> bool;
}

// Corresponds to std_srvs__srv__SetUint32ArrayWithTitle_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetUint32ArrayWithTitle_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: rosidl_runtime_rs::String,

}



impl Default for SetUint32ArrayWithTitle_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__SetUint32ArrayWithTitle_Response__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__SetUint32ArrayWithTitle_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetUint32ArrayWithTitle_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetUint32ArrayWithTitle_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetUint32ArrayWithTitle_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetUint32ArrayWithTitle_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetUint32ArrayWithTitle_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetUint32ArrayWithTitle_Response where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/SetUint32ArrayWithTitle_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetUint32ArrayWithTitle_Response() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetUint32WithTitle_Request() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__SetUint32WithTitle_Request__init(msg: *mut SetUint32WithTitle_Request) -> bool;
    fn std_srvs__srv__SetUint32WithTitle_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetUint32WithTitle_Request>, size: usize) -> bool;
    fn std_srvs__srv__SetUint32WithTitle_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetUint32WithTitle_Request>);
    fn std_srvs__srv__SetUint32WithTitle_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetUint32WithTitle_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetUint32WithTitle_Request>) -> bool;
}

// Corresponds to std_srvs__srv__SetUint32WithTitle_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetUint32WithTitle_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub title: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: u32,

}



impl Default for SetUint32WithTitle_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__SetUint32WithTitle_Request__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__SetUint32WithTitle_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetUint32WithTitle_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetUint32WithTitle_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetUint32WithTitle_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetUint32WithTitle_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetUint32WithTitle_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetUint32WithTitle_Request where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/SetUint32WithTitle_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetUint32WithTitle_Request() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetUint32WithTitle_Response() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__SetUint32WithTitle_Response__init(msg: *mut SetUint32WithTitle_Response) -> bool;
    fn std_srvs__srv__SetUint32WithTitle_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetUint32WithTitle_Response>, size: usize) -> bool;
    fn std_srvs__srv__SetUint32WithTitle_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetUint32WithTitle_Response>);
    fn std_srvs__srv__SetUint32WithTitle_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetUint32WithTitle_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetUint32WithTitle_Response>) -> bool;
}

// Corresponds to std_srvs__srv__SetUint32WithTitle_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetUint32WithTitle_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: rosidl_runtime_rs::String,

}



impl Default for SetUint32WithTitle_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__SetUint32WithTitle_Response__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__SetUint32WithTitle_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetUint32WithTitle_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetUint32WithTitle_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetUint32WithTitle_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetUint32WithTitle_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetUint32WithTitle_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetUint32WithTitle_Response where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/SetUint32WithTitle_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetUint32WithTitle_Response() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetUint8_Request() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__SetUint8_Request__init(msg: *mut SetUint8_Request) -> bool;
    fn std_srvs__srv__SetUint8_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetUint8_Request>, size: usize) -> bool;
    fn std_srvs__srv__SetUint8_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetUint8_Request>);
    fn std_srvs__srv__SetUint8_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetUint8_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetUint8_Request>) -> bool;
}

// Corresponds to std_srvs__srv__SetUint8_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetUint8_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub data: u8,

}



impl Default for SetUint8_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__SetUint8_Request__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__SetUint8_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetUint8_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetUint8_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetUint8_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetUint8_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetUint8_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetUint8_Request where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/SetUint8_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetUint8_Request() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetUint8_Response() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__SetUint8_Response__init(msg: *mut SetUint8_Response) -> bool;
    fn std_srvs__srv__SetUint8_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetUint8_Response>, size: usize) -> bool;
    fn std_srvs__srv__SetUint8_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetUint8_Response>);
    fn std_srvs__srv__SetUint8_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetUint8_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetUint8_Response>) -> bool;
}

// Corresponds to std_srvs__srv__SetUint8_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetUint8_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: rosidl_runtime_rs::String,

}



impl Default for SetUint8_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__SetUint8_Response__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__SetUint8_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetUint8_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetUint8_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetUint8_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetUint8_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetUint8_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetUint8_Response where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/SetUint8_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetUint8_Response() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetUint8Array_Request() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__SetUint8Array_Request__init(msg: *mut SetUint8Array_Request) -> bool;
    fn std_srvs__srv__SetUint8Array_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetUint8Array_Request>, size: usize) -> bool;
    fn std_srvs__srv__SetUint8Array_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetUint8Array_Request>);
    fn std_srvs__srv__SetUint8Array_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetUint8Array_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetUint8Array_Request>) -> bool;
}

// Corresponds to std_srvs__srv__SetUint8Array_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetUint8Array_Request {
    /// array of data
    pub data: rosidl_runtime_rs::Sequence<u8>,

}



impl Default for SetUint8Array_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__SetUint8Array_Request__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__SetUint8Array_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetUint8Array_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetUint8Array_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetUint8Array_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetUint8Array_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetUint8Array_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetUint8Array_Request where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/SetUint8Array_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetUint8Array_Request() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetUint8Array_Response() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__SetUint8Array_Response__init(msg: *mut SetUint8Array_Response) -> bool;
    fn std_srvs__srv__SetUint8Array_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetUint8Array_Response>, size: usize) -> bool;
    fn std_srvs__srv__SetUint8Array_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetUint8Array_Response>);
    fn std_srvs__srv__SetUint8Array_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetUint8Array_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetUint8Array_Response>) -> bool;
}

// Corresponds to std_srvs__srv__SetUint8Array_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetUint8Array_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: rosidl_runtime_rs::String,

}



impl Default for SetUint8Array_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__SetUint8Array_Response__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__SetUint8Array_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetUint8Array_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetUint8Array_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetUint8Array_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetUint8Array_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetUint8Array_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetUint8Array_Response where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/SetUint8Array_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetUint8Array_Response() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetUint8ArrayWithTitle_Request() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__SetUint8ArrayWithTitle_Request__init(msg: *mut SetUint8ArrayWithTitle_Request) -> bool;
    fn std_srvs__srv__SetUint8ArrayWithTitle_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetUint8ArrayWithTitle_Request>, size: usize) -> bool;
    fn std_srvs__srv__SetUint8ArrayWithTitle_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetUint8ArrayWithTitle_Request>);
    fn std_srvs__srv__SetUint8ArrayWithTitle_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetUint8ArrayWithTitle_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetUint8ArrayWithTitle_Request>) -> bool;
}

// Corresponds to std_srvs__srv__SetUint8ArrayWithTitle_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetUint8ArrayWithTitle_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub title: rosidl_runtime_rs::String,

    /// array of data
    pub data: rosidl_runtime_rs::Sequence<u8>,

}



impl Default for SetUint8ArrayWithTitle_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__SetUint8ArrayWithTitle_Request__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__SetUint8ArrayWithTitle_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetUint8ArrayWithTitle_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetUint8ArrayWithTitle_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetUint8ArrayWithTitle_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetUint8ArrayWithTitle_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetUint8ArrayWithTitle_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetUint8ArrayWithTitle_Request where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/SetUint8ArrayWithTitle_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetUint8ArrayWithTitle_Request() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetUint8ArrayWithTitle_Response() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__SetUint8ArrayWithTitle_Response__init(msg: *mut SetUint8ArrayWithTitle_Response) -> bool;
    fn std_srvs__srv__SetUint8ArrayWithTitle_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetUint8ArrayWithTitle_Response>, size: usize) -> bool;
    fn std_srvs__srv__SetUint8ArrayWithTitle_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetUint8ArrayWithTitle_Response>);
    fn std_srvs__srv__SetUint8ArrayWithTitle_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetUint8ArrayWithTitle_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetUint8ArrayWithTitle_Response>) -> bool;
}

// Corresponds to std_srvs__srv__SetUint8ArrayWithTitle_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetUint8ArrayWithTitle_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: rosidl_runtime_rs::String,

}



impl Default for SetUint8ArrayWithTitle_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__SetUint8ArrayWithTitle_Response__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__SetUint8ArrayWithTitle_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetUint8ArrayWithTitle_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetUint8ArrayWithTitle_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetUint8ArrayWithTitle_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetUint8ArrayWithTitle_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetUint8ArrayWithTitle_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetUint8ArrayWithTitle_Response where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/SetUint8ArrayWithTitle_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetUint8ArrayWithTitle_Response() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetUint8WithTitle_Request() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__SetUint8WithTitle_Request__init(msg: *mut SetUint8WithTitle_Request) -> bool;
    fn std_srvs__srv__SetUint8WithTitle_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetUint8WithTitle_Request>, size: usize) -> bool;
    fn std_srvs__srv__SetUint8WithTitle_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetUint8WithTitle_Request>);
    fn std_srvs__srv__SetUint8WithTitle_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetUint8WithTitle_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetUint8WithTitle_Request>) -> bool;
}

// Corresponds to std_srvs__srv__SetUint8WithTitle_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetUint8WithTitle_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub title: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: u8,

}



impl Default for SetUint8WithTitle_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__SetUint8WithTitle_Request__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__SetUint8WithTitle_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetUint8WithTitle_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetUint8WithTitle_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetUint8WithTitle_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetUint8WithTitle_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetUint8WithTitle_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetUint8WithTitle_Request where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/SetUint8WithTitle_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetUint8WithTitle_Request() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetUint8WithTitle_Response() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__SetUint8WithTitle_Response__init(msg: *mut SetUint8WithTitle_Response) -> bool;
    fn std_srvs__srv__SetUint8WithTitle_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetUint8WithTitle_Response>, size: usize) -> bool;
    fn std_srvs__srv__SetUint8WithTitle_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetUint8WithTitle_Response>);
    fn std_srvs__srv__SetUint8WithTitle_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetUint8WithTitle_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetUint8WithTitle_Response>) -> bool;
}

// Corresponds to std_srvs__srv__SetUint8WithTitle_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetUint8WithTitle_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: rosidl_runtime_rs::String,

}



impl Default for SetUint8WithTitle_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__SetUint8WithTitle_Response__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__SetUint8WithTitle_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetUint8WithTitle_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetUint8WithTitle_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetUint8WithTitle_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__SetUint8WithTitle_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetUint8WithTitle_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetUint8WithTitle_Response where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/SetUint8WithTitle_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__SetUint8WithTitle_Response() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__Trigger_Request() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__Trigger_Request__init(msg: *mut Trigger_Request) -> bool;
    fn std_srvs__srv__Trigger_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Trigger_Request>, size: usize) -> bool;
    fn std_srvs__srv__Trigger_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Trigger_Request>);
    fn std_srvs__srv__Trigger_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Trigger_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Trigger_Request>) -> bool;
}

// Corresponds to std_srvs__srv__Trigger_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Trigger_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for Trigger_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__Trigger_Request__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__Trigger_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Trigger_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__Trigger_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__Trigger_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__Trigger_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Trigger_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Trigger_Request where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/Trigger_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__Trigger_Request() }
  }
}


#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__Trigger_Response() -> *const std::ffi::c_void;
}

#[link(name = "std_srvs__rosidl_generator_c")]
extern "C" {
    fn std_srvs__srv__Trigger_Response__init(msg: *mut Trigger_Response) -> bool;
    fn std_srvs__srv__Trigger_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Trigger_Response>, size: usize) -> bool;
    fn std_srvs__srv__Trigger_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Trigger_Response>);
    fn std_srvs__srv__Trigger_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Trigger_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Trigger_Response>) -> bool;
}

// Corresponds to std_srvs__srv__Trigger_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Trigger_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: rosidl_runtime_rs::String,

}



impl Default for Trigger_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_srvs__srv__Trigger_Response__init(&mut msg as *mut _) {
        panic!("Call to std_srvs__srv__Trigger_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Trigger_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__Trigger_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__Trigger_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_srvs__srv__Trigger_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Trigger_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Trigger_Response where Self: Sized {
  const TYPE_NAME: &'static str = "std_srvs/srv/Trigger_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_srvs__srv__Trigger_Response() }
  }
}






#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__Empty() -> *const std::ffi::c_void;
}

// Corresponds to std_srvs__srv__Empty
#[allow(missing_docs, non_camel_case_types)]
pub struct Empty;

impl rosidl_runtime_rs::Service for Empty {
    type Request = Empty_Request;
    type Response = Empty_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__Empty() }
    }
}




#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__GetBool() -> *const std::ffi::c_void;
}

// Corresponds to std_srvs__srv__GetBool
#[allow(missing_docs, non_camel_case_types)]
pub struct GetBool;

impl rosidl_runtime_rs::Service for GetBool {
    type Request = GetBool_Request;
    type Response = GetBool_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__GetBool() }
    }
}




#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__GetBoolWithTile() -> *const std::ffi::c_void;
}

// Corresponds to std_srvs__srv__GetBoolWithTile
#[allow(missing_docs, non_camel_case_types)]
pub struct GetBoolWithTile;

impl rosidl_runtime_rs::Service for GetBoolWithTile {
    type Request = GetBoolWithTile_Request;
    type Response = GetBoolWithTile_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__GetBoolWithTile() }
    }
}




#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__GetFloat32() -> *const std::ffi::c_void;
}

// Corresponds to std_srvs__srv__GetFloat32
#[allow(missing_docs, non_camel_case_types)]
pub struct GetFloat32;

impl rosidl_runtime_rs::Service for GetFloat32 {
    type Request = GetFloat32_Request;
    type Response = GetFloat32_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__GetFloat32() }
    }
}




#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__GetFloat32Array() -> *const std::ffi::c_void;
}

// Corresponds to std_srvs__srv__GetFloat32Array
#[allow(missing_docs, non_camel_case_types)]
pub struct GetFloat32Array;

impl rosidl_runtime_rs::Service for GetFloat32Array {
    type Request = GetFloat32Array_Request;
    type Response = GetFloat32Array_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__GetFloat32Array() }
    }
}




#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__GetFloat32ArrayWithTitle() -> *const std::ffi::c_void;
}

// Corresponds to std_srvs__srv__GetFloat32ArrayWithTitle
#[allow(missing_docs, non_camel_case_types)]
pub struct GetFloat32ArrayWithTitle;

impl rosidl_runtime_rs::Service for GetFloat32ArrayWithTitle {
    type Request = GetFloat32ArrayWithTitle_Request;
    type Response = GetFloat32ArrayWithTitle_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__GetFloat32ArrayWithTitle() }
    }
}




#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__GetFloat32WithTitle() -> *const std::ffi::c_void;
}

// Corresponds to std_srvs__srv__GetFloat32WithTitle
#[allow(missing_docs, non_camel_case_types)]
pub struct GetFloat32WithTitle;

impl rosidl_runtime_rs::Service for GetFloat32WithTitle {
    type Request = GetFloat32WithTitle_Request;
    type Response = GetFloat32WithTitle_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__GetFloat32WithTitle() }
    }
}




#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__GetFloat64() -> *const std::ffi::c_void;
}

// Corresponds to std_srvs__srv__GetFloat64
#[allow(missing_docs, non_camel_case_types)]
pub struct GetFloat64;

impl rosidl_runtime_rs::Service for GetFloat64 {
    type Request = GetFloat64_Request;
    type Response = GetFloat64_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__GetFloat64() }
    }
}




#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__GetFloat64Array() -> *const std::ffi::c_void;
}

// Corresponds to std_srvs__srv__GetFloat64Array
#[allow(missing_docs, non_camel_case_types)]
pub struct GetFloat64Array;

impl rosidl_runtime_rs::Service for GetFloat64Array {
    type Request = GetFloat64Array_Request;
    type Response = GetFloat64Array_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__GetFloat64Array() }
    }
}




#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__GetFloat64ArrayWithTitle() -> *const std::ffi::c_void;
}

// Corresponds to std_srvs__srv__GetFloat64ArrayWithTitle
#[allow(missing_docs, non_camel_case_types)]
pub struct GetFloat64ArrayWithTitle;

impl rosidl_runtime_rs::Service for GetFloat64ArrayWithTitle {
    type Request = GetFloat64ArrayWithTitle_Request;
    type Response = GetFloat64ArrayWithTitle_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__GetFloat64ArrayWithTitle() }
    }
}




#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__GetFloat64WithTitle() -> *const std::ffi::c_void;
}

// Corresponds to std_srvs__srv__GetFloat64WithTitle
#[allow(missing_docs, non_camel_case_types)]
pub struct GetFloat64WithTitle;

impl rosidl_runtime_rs::Service for GetFloat64WithTitle {
    type Request = GetFloat64WithTitle_Request;
    type Response = GetFloat64WithTitle_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__GetFloat64WithTitle() }
    }
}




#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__GetInt32() -> *const std::ffi::c_void;
}

// Corresponds to std_srvs__srv__GetInt32
#[allow(missing_docs, non_camel_case_types)]
pub struct GetInt32;

impl rosidl_runtime_rs::Service for GetInt32 {
    type Request = GetInt32_Request;
    type Response = GetInt32_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__GetInt32() }
    }
}




#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__GetInt32Array() -> *const std::ffi::c_void;
}

// Corresponds to std_srvs__srv__GetInt32Array
#[allow(missing_docs, non_camel_case_types)]
pub struct GetInt32Array;

impl rosidl_runtime_rs::Service for GetInt32Array {
    type Request = GetInt32Array_Request;
    type Response = GetInt32Array_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__GetInt32Array() }
    }
}




#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__GetInt32ArrayWithTitle() -> *const std::ffi::c_void;
}

// Corresponds to std_srvs__srv__GetInt32ArrayWithTitle
#[allow(missing_docs, non_camel_case_types)]
pub struct GetInt32ArrayWithTitle;

impl rosidl_runtime_rs::Service for GetInt32ArrayWithTitle {
    type Request = GetInt32ArrayWithTitle_Request;
    type Response = GetInt32ArrayWithTitle_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__GetInt32ArrayWithTitle() }
    }
}




#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__GetInt32WithTitle() -> *const std::ffi::c_void;
}

// Corresponds to std_srvs__srv__GetInt32WithTitle
#[allow(missing_docs, non_camel_case_types)]
pub struct GetInt32WithTitle;

impl rosidl_runtime_rs::Service for GetInt32WithTitle {
    type Request = GetInt32WithTitle_Request;
    type Response = GetInt32WithTitle_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__GetInt32WithTitle() }
    }
}




#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__GetString() -> *const std::ffi::c_void;
}

// Corresponds to std_srvs__srv__GetString
#[allow(missing_docs, non_camel_case_types)]
pub struct GetString;

impl rosidl_runtime_rs::Service for GetString {
    type Request = GetString_Request;
    type Response = GetString_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__GetString() }
    }
}




#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__GetStringArray() -> *const std::ffi::c_void;
}

// Corresponds to std_srvs__srv__GetStringArray
#[allow(missing_docs, non_camel_case_types)]
pub struct GetStringArray;

impl rosidl_runtime_rs::Service for GetStringArray {
    type Request = GetStringArray_Request;
    type Response = GetStringArray_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__GetStringArray() }
    }
}




#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__GetStringArrayWithTitle() -> *const std::ffi::c_void;
}

// Corresponds to std_srvs__srv__GetStringArrayWithTitle
#[allow(missing_docs, non_camel_case_types)]
pub struct GetStringArrayWithTitle;

impl rosidl_runtime_rs::Service for GetStringArrayWithTitle {
    type Request = GetStringArrayWithTitle_Request;
    type Response = GetStringArrayWithTitle_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__GetStringArrayWithTitle() }
    }
}




#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__GetStringWithTitle() -> *const std::ffi::c_void;
}

// Corresponds to std_srvs__srv__GetStringWithTitle
#[allow(missing_docs, non_camel_case_types)]
pub struct GetStringWithTitle;

impl rosidl_runtime_rs::Service for GetStringWithTitle {
    type Request = GetStringWithTitle_Request;
    type Response = GetStringWithTitle_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__GetStringWithTitle() }
    }
}




#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__GetUint32() -> *const std::ffi::c_void;
}

// Corresponds to std_srvs__srv__GetUint32
#[allow(missing_docs, non_camel_case_types)]
pub struct GetUint32;

impl rosidl_runtime_rs::Service for GetUint32 {
    type Request = GetUint32_Request;
    type Response = GetUint32_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__GetUint32() }
    }
}




#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__GetUint32Array() -> *const std::ffi::c_void;
}

// Corresponds to std_srvs__srv__GetUint32Array
#[allow(missing_docs, non_camel_case_types)]
pub struct GetUint32Array;

impl rosidl_runtime_rs::Service for GetUint32Array {
    type Request = GetUint32Array_Request;
    type Response = GetUint32Array_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__GetUint32Array() }
    }
}




#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__GetUint32ArrayWithTitle() -> *const std::ffi::c_void;
}

// Corresponds to std_srvs__srv__GetUint32ArrayWithTitle
#[allow(missing_docs, non_camel_case_types)]
pub struct GetUint32ArrayWithTitle;

impl rosidl_runtime_rs::Service for GetUint32ArrayWithTitle {
    type Request = GetUint32ArrayWithTitle_Request;
    type Response = GetUint32ArrayWithTitle_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__GetUint32ArrayWithTitle() }
    }
}




#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__GetUint32WithTitle() -> *const std::ffi::c_void;
}

// Corresponds to std_srvs__srv__GetUint32WithTitle
#[allow(missing_docs, non_camel_case_types)]
pub struct GetUint32WithTitle;

impl rosidl_runtime_rs::Service for GetUint32WithTitle {
    type Request = GetUint32WithTitle_Request;
    type Response = GetUint32WithTitle_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__GetUint32WithTitle() }
    }
}




#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__GetUint8() -> *const std::ffi::c_void;
}

// Corresponds to std_srvs__srv__GetUint8
#[allow(missing_docs, non_camel_case_types)]
pub struct GetUint8;

impl rosidl_runtime_rs::Service for GetUint8 {
    type Request = GetUint8_Request;
    type Response = GetUint8_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__GetUint8() }
    }
}




#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__GetUint8Array() -> *const std::ffi::c_void;
}

// Corresponds to std_srvs__srv__GetUint8Array
#[allow(missing_docs, non_camel_case_types)]
pub struct GetUint8Array;

impl rosidl_runtime_rs::Service for GetUint8Array {
    type Request = GetUint8Array_Request;
    type Response = GetUint8Array_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__GetUint8Array() }
    }
}




#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__GetUint8ArrayWithTitle() -> *const std::ffi::c_void;
}

// Corresponds to std_srvs__srv__GetUint8ArrayWithTitle
#[allow(missing_docs, non_camel_case_types)]
pub struct GetUint8ArrayWithTitle;

impl rosidl_runtime_rs::Service for GetUint8ArrayWithTitle {
    type Request = GetUint8ArrayWithTitle_Request;
    type Response = GetUint8ArrayWithTitle_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__GetUint8ArrayWithTitle() }
    }
}




#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__GetUint8WithTitle() -> *const std::ffi::c_void;
}

// Corresponds to std_srvs__srv__GetUint8WithTitle
#[allow(missing_docs, non_camel_case_types)]
pub struct GetUint8WithTitle;

impl rosidl_runtime_rs::Service for GetUint8WithTitle {
    type Request = GetUint8WithTitle_Request;
    type Response = GetUint8WithTitle_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__GetUint8WithTitle() }
    }
}




#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__SetBool() -> *const std::ffi::c_void;
}

// Corresponds to std_srvs__srv__SetBool
#[allow(missing_docs, non_camel_case_types)]
pub struct SetBool;

impl rosidl_runtime_rs::Service for SetBool {
    type Request = SetBool_Request;
    type Response = SetBool_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__SetBool() }
    }
}




#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__SetBoolWithTitle() -> *const std::ffi::c_void;
}

// Corresponds to std_srvs__srv__SetBoolWithTitle
#[allow(missing_docs, non_camel_case_types)]
pub struct SetBoolWithTitle;

impl rosidl_runtime_rs::Service for SetBoolWithTitle {
    type Request = SetBoolWithTitle_Request;
    type Response = SetBoolWithTitle_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__SetBoolWithTitle() }
    }
}




#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__SetFloat32() -> *const std::ffi::c_void;
}

// Corresponds to std_srvs__srv__SetFloat32
#[allow(missing_docs, non_camel_case_types)]
pub struct SetFloat32;

impl rosidl_runtime_rs::Service for SetFloat32 {
    type Request = SetFloat32_Request;
    type Response = SetFloat32_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__SetFloat32() }
    }
}




#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__SetFloat32Array() -> *const std::ffi::c_void;
}

// Corresponds to std_srvs__srv__SetFloat32Array
#[allow(missing_docs, non_camel_case_types)]
pub struct SetFloat32Array;

impl rosidl_runtime_rs::Service for SetFloat32Array {
    type Request = SetFloat32Array_Request;
    type Response = SetFloat32Array_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__SetFloat32Array() }
    }
}




#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__SetFloat32ArrayWithTitle() -> *const std::ffi::c_void;
}

// Corresponds to std_srvs__srv__SetFloat32ArrayWithTitle
#[allow(missing_docs, non_camel_case_types)]
pub struct SetFloat32ArrayWithTitle;

impl rosidl_runtime_rs::Service for SetFloat32ArrayWithTitle {
    type Request = SetFloat32ArrayWithTitle_Request;
    type Response = SetFloat32ArrayWithTitle_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__SetFloat32ArrayWithTitle() }
    }
}




#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__SetFloat32WithTitle() -> *const std::ffi::c_void;
}

// Corresponds to std_srvs__srv__SetFloat32WithTitle
#[allow(missing_docs, non_camel_case_types)]
pub struct SetFloat32WithTitle;

impl rosidl_runtime_rs::Service for SetFloat32WithTitle {
    type Request = SetFloat32WithTitle_Request;
    type Response = SetFloat32WithTitle_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__SetFloat32WithTitle() }
    }
}




#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__SetFloat64() -> *const std::ffi::c_void;
}

// Corresponds to std_srvs__srv__SetFloat64
#[allow(missing_docs, non_camel_case_types)]
pub struct SetFloat64;

impl rosidl_runtime_rs::Service for SetFloat64 {
    type Request = SetFloat64_Request;
    type Response = SetFloat64_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__SetFloat64() }
    }
}




#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__SetFloat64Array() -> *const std::ffi::c_void;
}

// Corresponds to std_srvs__srv__SetFloat64Array
#[allow(missing_docs, non_camel_case_types)]
pub struct SetFloat64Array;

impl rosidl_runtime_rs::Service for SetFloat64Array {
    type Request = SetFloat64Array_Request;
    type Response = SetFloat64Array_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__SetFloat64Array() }
    }
}




#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__SetFloat64ArrayWithTitle() -> *const std::ffi::c_void;
}

// Corresponds to std_srvs__srv__SetFloat64ArrayWithTitle
#[allow(missing_docs, non_camel_case_types)]
pub struct SetFloat64ArrayWithTitle;

impl rosidl_runtime_rs::Service for SetFloat64ArrayWithTitle {
    type Request = SetFloat64ArrayWithTitle_Request;
    type Response = SetFloat64ArrayWithTitle_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__SetFloat64ArrayWithTitle() }
    }
}




#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__SetFloat64WithTitle() -> *const std::ffi::c_void;
}

// Corresponds to std_srvs__srv__SetFloat64WithTitle
#[allow(missing_docs, non_camel_case_types)]
pub struct SetFloat64WithTitle;

impl rosidl_runtime_rs::Service for SetFloat64WithTitle {
    type Request = SetFloat64WithTitle_Request;
    type Response = SetFloat64WithTitle_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__SetFloat64WithTitle() }
    }
}




#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__SetInt32() -> *const std::ffi::c_void;
}

// Corresponds to std_srvs__srv__SetInt32
#[allow(missing_docs, non_camel_case_types)]
pub struct SetInt32;

impl rosidl_runtime_rs::Service for SetInt32 {
    type Request = SetInt32_Request;
    type Response = SetInt32_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__SetInt32() }
    }
}




#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__SetInt32Array() -> *const std::ffi::c_void;
}

// Corresponds to std_srvs__srv__SetInt32Array
#[allow(missing_docs, non_camel_case_types)]
pub struct SetInt32Array;

impl rosidl_runtime_rs::Service for SetInt32Array {
    type Request = SetInt32Array_Request;
    type Response = SetInt32Array_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__SetInt32Array() }
    }
}




#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__SetInt32ArrayWithTitle() -> *const std::ffi::c_void;
}

// Corresponds to std_srvs__srv__SetInt32ArrayWithTitle
#[allow(missing_docs, non_camel_case_types)]
pub struct SetInt32ArrayWithTitle;

impl rosidl_runtime_rs::Service for SetInt32ArrayWithTitle {
    type Request = SetInt32ArrayWithTitle_Request;
    type Response = SetInt32ArrayWithTitle_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__SetInt32ArrayWithTitle() }
    }
}




#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__SetInt32WithTitle() -> *const std::ffi::c_void;
}

// Corresponds to std_srvs__srv__SetInt32WithTitle
#[allow(missing_docs, non_camel_case_types)]
pub struct SetInt32WithTitle;

impl rosidl_runtime_rs::Service for SetInt32WithTitle {
    type Request = SetInt32WithTitle_Request;
    type Response = SetInt32WithTitle_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__SetInt32WithTitle() }
    }
}




#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__SetString() -> *const std::ffi::c_void;
}

// Corresponds to std_srvs__srv__SetString
#[allow(missing_docs, non_camel_case_types)]
pub struct SetString;

impl rosidl_runtime_rs::Service for SetString {
    type Request = SetString_Request;
    type Response = SetString_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__SetString() }
    }
}




#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__SetStringArray() -> *const std::ffi::c_void;
}

// Corresponds to std_srvs__srv__SetStringArray
#[allow(missing_docs, non_camel_case_types)]
pub struct SetStringArray;

impl rosidl_runtime_rs::Service for SetStringArray {
    type Request = SetStringArray_Request;
    type Response = SetStringArray_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__SetStringArray() }
    }
}




#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__SetStringArrayWithTitle() -> *const std::ffi::c_void;
}

// Corresponds to std_srvs__srv__SetStringArrayWithTitle
#[allow(missing_docs, non_camel_case_types)]
pub struct SetStringArrayWithTitle;

impl rosidl_runtime_rs::Service for SetStringArrayWithTitle {
    type Request = SetStringArrayWithTitle_Request;
    type Response = SetStringArrayWithTitle_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__SetStringArrayWithTitle() }
    }
}




#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__SetStringWithTitle() -> *const std::ffi::c_void;
}

// Corresponds to std_srvs__srv__SetStringWithTitle
#[allow(missing_docs, non_camel_case_types)]
pub struct SetStringWithTitle;

impl rosidl_runtime_rs::Service for SetStringWithTitle {
    type Request = SetStringWithTitle_Request;
    type Response = SetStringWithTitle_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__SetStringWithTitle() }
    }
}




#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__SetUint32() -> *const std::ffi::c_void;
}

// Corresponds to std_srvs__srv__SetUint32
#[allow(missing_docs, non_camel_case_types)]
pub struct SetUint32;

impl rosidl_runtime_rs::Service for SetUint32 {
    type Request = SetUint32_Request;
    type Response = SetUint32_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__SetUint32() }
    }
}




#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__SetUint32Array() -> *const std::ffi::c_void;
}

// Corresponds to std_srvs__srv__SetUint32Array
#[allow(missing_docs, non_camel_case_types)]
pub struct SetUint32Array;

impl rosidl_runtime_rs::Service for SetUint32Array {
    type Request = SetUint32Array_Request;
    type Response = SetUint32Array_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__SetUint32Array() }
    }
}




#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__SetUint32ArrayWithTitle() -> *const std::ffi::c_void;
}

// Corresponds to std_srvs__srv__SetUint32ArrayWithTitle
#[allow(missing_docs, non_camel_case_types)]
pub struct SetUint32ArrayWithTitle;

impl rosidl_runtime_rs::Service for SetUint32ArrayWithTitle {
    type Request = SetUint32ArrayWithTitle_Request;
    type Response = SetUint32ArrayWithTitle_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__SetUint32ArrayWithTitle() }
    }
}




#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__SetUint32WithTitle() -> *const std::ffi::c_void;
}

// Corresponds to std_srvs__srv__SetUint32WithTitle
#[allow(missing_docs, non_camel_case_types)]
pub struct SetUint32WithTitle;

impl rosidl_runtime_rs::Service for SetUint32WithTitle {
    type Request = SetUint32WithTitle_Request;
    type Response = SetUint32WithTitle_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__SetUint32WithTitle() }
    }
}




#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__SetUint8() -> *const std::ffi::c_void;
}

// Corresponds to std_srvs__srv__SetUint8
#[allow(missing_docs, non_camel_case_types)]
pub struct SetUint8;

impl rosidl_runtime_rs::Service for SetUint8 {
    type Request = SetUint8_Request;
    type Response = SetUint8_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__SetUint8() }
    }
}




#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__SetUint8Array() -> *const std::ffi::c_void;
}

// Corresponds to std_srvs__srv__SetUint8Array
#[allow(missing_docs, non_camel_case_types)]
pub struct SetUint8Array;

impl rosidl_runtime_rs::Service for SetUint8Array {
    type Request = SetUint8Array_Request;
    type Response = SetUint8Array_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__SetUint8Array() }
    }
}




#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__SetUint8ArrayWithTitle() -> *const std::ffi::c_void;
}

// Corresponds to std_srvs__srv__SetUint8ArrayWithTitle
#[allow(missing_docs, non_camel_case_types)]
pub struct SetUint8ArrayWithTitle;

impl rosidl_runtime_rs::Service for SetUint8ArrayWithTitle {
    type Request = SetUint8ArrayWithTitle_Request;
    type Response = SetUint8ArrayWithTitle_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__SetUint8ArrayWithTitle() }
    }
}




#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__SetUint8WithTitle() -> *const std::ffi::c_void;
}

// Corresponds to std_srvs__srv__SetUint8WithTitle
#[allow(missing_docs, non_camel_case_types)]
pub struct SetUint8WithTitle;

impl rosidl_runtime_rs::Service for SetUint8WithTitle {
    type Request = SetUint8WithTitle_Request;
    type Response = SetUint8WithTitle_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__SetUint8WithTitle() }
    }
}




#[link(name = "std_srvs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__Trigger() -> *const std::ffi::c_void;
}

// Corresponds to std_srvs__srv__Trigger
#[allow(missing_docs, non_camel_case_types)]
pub struct Trigger;

impl rosidl_runtime_rs::Service for Trigger {
    type Request = Trigger_Request;
    type Response = Trigger_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__std_srvs__srv__Trigger() }
    }
}


