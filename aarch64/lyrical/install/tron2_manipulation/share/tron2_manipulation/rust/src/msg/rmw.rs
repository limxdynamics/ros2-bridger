#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "tron2_manipulation__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__tron2_manipulation__msg__arm_pose() -> *const std::ffi::c_void;
}

#[link(name = "tron2_manipulation__rosidl_generator_c")]
extern "C" {
    fn tron2_manipulation__msg__arm_pose__init(msg: *mut arm_pose) -> bool;
    fn tron2_manipulation__msg__arm_pose__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<arm_pose>, size: usize) -> bool;
    fn tron2_manipulation__msg__arm_pose__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<arm_pose>);
    fn tron2_manipulation__msg__arm_pose__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<arm_pose>, out_seq: *mut rosidl_runtime_rs::Sequence<arm_pose>) -> bool;
}

// Corresponds to tron2_manipulation__msg__arm_pose
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct arm_pose {
    /// unit: m
    pub left_arm_pos: [f32; 7],

    /// unit: m
    pub right_arm_pos: [f32; 7],

}



impl Default for arm_pose {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !tron2_manipulation__msg__arm_pose__init(&mut msg as *mut _) {
        panic!("Call to tron2_manipulation__msg__arm_pose__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for arm_pose {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tron2_manipulation__msg__arm_pose__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tron2_manipulation__msg__arm_pose__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tron2_manipulation__msg__arm_pose__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for arm_pose {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for arm_pose where Self: Sized {
  const TYPE_NAME: &'static str = "tron2_manipulation/msg/arm_pose";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__tron2_manipulation__msg__arm_pose() }
  }
}


#[link(name = "tron2_manipulation__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__tron2_manipulation__msg__arm_status() -> *const std::ffi::c_void;
}

#[link(name = "tron2_manipulation__rosidl_generator_c")]
extern "C" {
    fn tron2_manipulation__msg__arm_status__init(msg: *mut arm_status) -> bool;
    fn tron2_manipulation__msg__arm_status__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<arm_status>, size: usize) -> bool;
    fn tron2_manipulation__msg__arm_status__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<arm_status>);
    fn tron2_manipulation__msg__arm_status__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<arm_status>, out_seq: *mut rosidl_runtime_rs::Sequence<arm_status>) -> bool;
}

// Corresponds to tron2_manipulation__msg__arm_status
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct arm_status {
    /// unit: m
    pub left_arm_pos: [f32; 7],

    /// unit: m
    pub right_arm_pos: [f32; 7],

}



impl Default for arm_status {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !tron2_manipulation__msg__arm_status__init(&mut msg as *mut _) {
        panic!("Call to tron2_manipulation__msg__arm_status__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for arm_status {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tron2_manipulation__msg__arm_status__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tron2_manipulation__msg__arm_status__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tron2_manipulation__msg__arm_status__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for arm_status {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for arm_status where Self: Sized {
  const TYPE_NAME: &'static str = "tron2_manipulation/msg/arm_status";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__tron2_manipulation__msg__arm_status() }
  }
}


