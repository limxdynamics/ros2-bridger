#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "tron2_manipulation__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__tron2_manipulation__srv__arm_move_Request() -> *const std::ffi::c_void;
}

#[link(name = "tron2_manipulation__rosidl_generator_c")]
extern "C" {
    fn tron2_manipulation__srv__arm_move_Request__init(msg: *mut arm_move_Request) -> bool;
    fn tron2_manipulation__srv__arm_move_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<arm_move_Request>, size: usize) -> bool;
    fn tron2_manipulation__srv__arm_move_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<arm_move_Request>);
    fn tron2_manipulation__srv__arm_move_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<arm_move_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<arm_move_Request>) -> bool;
}

// Corresponds to tron2_manipulation__srv__arm_move_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !tron2_manipulation__srv__arm_move_Request__init(&mut msg as *mut _) {
        panic!("Call to tron2_manipulation__srv__arm_move_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for arm_move_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tron2_manipulation__srv__arm_move_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tron2_manipulation__srv__arm_move_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tron2_manipulation__srv__arm_move_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for arm_move_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for arm_move_Request where Self: Sized {
  const TYPE_NAME: &'static str = "tron2_manipulation/srv/arm_move_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__tron2_manipulation__srv__arm_move_Request() }
  }
}


#[link(name = "tron2_manipulation__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__tron2_manipulation__srv__arm_move_Response() -> *const std::ffi::c_void;
}

#[link(name = "tron2_manipulation__rosidl_generator_c")]
extern "C" {
    fn tron2_manipulation__srv__arm_move_Response__init(msg: *mut arm_move_Response) -> bool;
    fn tron2_manipulation__srv__arm_move_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<arm_move_Response>, size: usize) -> bool;
    fn tron2_manipulation__srv__arm_move_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<arm_move_Response>);
    fn tron2_manipulation__srv__arm_move_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<arm_move_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<arm_move_Response>) -> bool;
}

// Corresponds to tron2_manipulation__srv__arm_move_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct arm_move_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i32,

}



impl Default for arm_move_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !tron2_manipulation__srv__arm_move_Response__init(&mut msg as *mut _) {
        panic!("Call to tron2_manipulation__srv__arm_move_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for arm_move_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tron2_manipulation__srv__arm_move_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tron2_manipulation__srv__arm_move_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tron2_manipulation__srv__arm_move_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for arm_move_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for arm_move_Response where Self: Sized {
  const TYPE_NAME: &'static str = "tron2_manipulation/srv/arm_move_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__tron2_manipulation__srv__arm_move_Response() }
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


