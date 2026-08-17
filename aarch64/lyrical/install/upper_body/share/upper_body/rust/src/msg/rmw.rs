#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "upper_body__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__upper_body__msg__arm_servo() -> *const std::ffi::c_void;
}

#[link(name = "upper_body__rosidl_generator_c")]
extern "C" {
    fn upper_body__msg__arm_servo__init(msg: *mut arm_servo) -> bool;
    fn upper_body__msg__arm_servo__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<arm_servo>, size: usize) -> bool;
    fn upper_body__msg__arm_servo__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<arm_servo>);
    fn upper_body__msg__arm_servo__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<arm_servo>, out_seq: *mut rosidl_runtime_rs::Sequence<arm_servo>) -> bool;
}

// Corresponds to upper_body__msg__arm_servo
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct arm_servo {
    /// servoJ or servoP
    pub servo_type: rosidl_runtime_rs::String,

    /// servoJ
    /// unit: rad
    pub left_arm_joints: rosidl_runtime_rs::Sequence<f32>,

    /// unit: rad
    pub right_arm_joints: rosidl_runtime_rs::Sequence<f32>,

    /// servoP
    /// [px py pz Qx Qy Qz Qw] unit: m
    pub left_arm_pos: [f32; 7],

    /// unit: mz
    pub right_arm_pos: [f32; 7],

}



impl Default for arm_servo {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !upper_body__msg__arm_servo__init(&mut msg as *mut _) {
        panic!("Call to upper_body__msg__arm_servo__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for arm_servo {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { upper_body__msg__arm_servo__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { upper_body__msg__arm_servo__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { upper_body__msg__arm_servo__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for arm_servo {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for arm_servo where Self: Sized {
  const TYPE_NAME: &'static str = "upper_body/msg/arm_servo";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__upper_body__msg__arm_servo() }
  }
}


#[link(name = "upper_body__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__upper_body__msg__arm_status() -> *const std::ffi::c_void;
}

#[link(name = "upper_body__rosidl_generator_c")]
extern "C" {
    fn upper_body__msg__arm_status__init(msg: *mut arm_status) -> bool;
    fn upper_body__msg__arm_status__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<arm_status>, size: usize) -> bool;
    fn upper_body__msg__arm_status__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<arm_status>);
    fn upper_body__msg__arm_status__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<arm_status>, out_seq: *mut rosidl_runtime_rs::Sequence<arm_status>) -> bool;
}

// Corresponds to upper_body__msg__arm_status
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
      if !upper_body__msg__arm_status__init(&mut msg as *mut _) {
        panic!("Call to upper_body__msg__arm_status__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for arm_status {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { upper_body__msg__arm_status__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { upper_body__msg__arm_status__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { upper_body__msg__arm_status__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for arm_status {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for arm_status where Self: Sized {
  const TYPE_NAME: &'static str = "upper_body/msg/arm_status";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__upper_body__msg__arm_status() }
  }
}


#[link(name = "upper_body__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__upper_body__msg__servoJ() -> *const std::ffi::c_void;
}

#[link(name = "upper_body__rosidl_generator_c")]
extern "C" {
    fn upper_body__msg__servoJ__init(msg: *mut servoJ) -> bool;
    fn upper_body__msg__servoJ__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<servoJ>, size: usize) -> bool;
    fn upper_body__msg__servoJ__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<servoJ>);
    fn upper_body__msg__servoJ__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<servoJ>, out_seq: *mut rosidl_runtime_rs::Sequence<servoJ>) -> bool;
}

// Corresponds to upper_body__msg__servoJ
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct servoJ {
    /// unit: rad
    pub joints: rosidl_runtime_rs::Sequence<f32>,

}



impl Default for servoJ {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !upper_body__msg__servoJ__init(&mut msg as *mut _) {
        panic!("Call to upper_body__msg__servoJ__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for servoJ {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { upper_body__msg__servoJ__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { upper_body__msg__servoJ__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { upper_body__msg__servoJ__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for servoJ {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for servoJ where Self: Sized {
  const TYPE_NAME: &'static str = "upper_body/msg/servoJ";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__upper_body__msg__servoJ() }
  }
}


#[link(name = "upper_body__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__upper_body__msg__waist_cmd() -> *const std::ffi::c_void;
}

#[link(name = "upper_body__rosidl_generator_c")]
extern "C" {
    fn upper_body__msg__waist_cmd__init(msg: *mut waist_cmd) -> bool;
    fn upper_body__msg__waist_cmd__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<waist_cmd>, size: usize) -> bool;
    fn upper_body__msg__waist_cmd__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<waist_cmd>);
    fn upper_body__msg__waist_cmd__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<waist_cmd>, out_seq: *mut rosidl_runtime_rs::Sequence<waist_cmd>) -> bool;
}

// Corresponds to upper_body__msg__waist_cmd
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct waist_cmd {
    /// ["waist_yaw_joint", "waist_roll_joint", "waist_pitch_joint"] units: rad
    pub waistCMD: [f32; 3],

}



impl Default for waist_cmd {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !upper_body__msg__waist_cmd__init(&mut msg as *mut _) {
        panic!("Call to upper_body__msg__waist_cmd__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for waist_cmd {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { upper_body__msg__waist_cmd__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { upper_body__msg__waist_cmd__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { upper_body__msg__waist_cmd__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for waist_cmd {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for waist_cmd where Self: Sized {
  const TYPE_NAME: &'static str = "upper_body/msg/waist_cmd";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__upper_body__msg__waist_cmd() }
  }
}


