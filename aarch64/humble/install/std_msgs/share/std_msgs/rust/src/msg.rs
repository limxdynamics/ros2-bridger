#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to std_msgs__msg__Bool

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Bool {

    // This member is not documented.
    #[allow(missing_docs)]
    pub data: bool,

}



impl Default for Bool {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Bool::default())
  }
}

impl rosidl_runtime_rs::Message for Bool {
  type RmwMsg = super::msg::rmw::Bool;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      data: msg.data,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      data: msg.data,
    }
  }
}


// Corresponds to std_msgs__msg__Byte

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Byte {

    // This member is not documented.
    #[allow(missing_docs)]
    pub data: u8,

}



impl Default for Byte {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Byte::default())
  }
}

impl rosidl_runtime_rs::Message for Byte {
  type RmwMsg = super::msg::rmw::Byte;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      data: msg.data,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      data: msg.data,
    }
  }
}


// Corresponds to std_msgs__msg__ByteArray

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ByteArray {
    /// header info
    pub header: super::msg::Header,

    /// array of data
    pub data: Vec<u8>,

}



impl Default for ByteArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ByteArray::default())
  }
}

impl rosidl_runtime_rs::Message for ByteArray {
  type RmwMsg = super::msg::rmw::ByteArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        data: msg.data.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::Header::from_rmw_message(msg.header),
      data: msg.data
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to std_msgs__msg__ByteMultiArray
/// Please look at the MultiArrayLayout message definition for
/// documentation on all multiarrays.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ByteMultiArray {
    /// specification of data layout
    pub layout: super::msg::MultiArrayLayout,

    /// array of data
    pub data: Vec<u8>,

}



impl Default for ByteMultiArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ByteMultiArray::default())
  }
}

impl rosidl_runtime_rs::Message for ByteMultiArray {
  type RmwMsg = super::msg::rmw::ByteMultiArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        layout: super::msg::MultiArrayLayout::into_rmw_message(std::borrow::Cow::Owned(msg.layout)).into_owned(),
        data: msg.data.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        layout: super::msg::MultiArrayLayout::into_rmw_message(std::borrow::Cow::Borrowed(&msg.layout)).into_owned(),
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      layout: super::msg::MultiArrayLayout::from_rmw_message(msg.layout),
      data: msg.data
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to std_msgs__msg__Char

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Char {

    // This member is not documented.
    #[allow(missing_docs)]
    pub data: u8,

}



impl Default for Char {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Char::default())
  }
}

impl rosidl_runtime_rs::Message for Char {
  type RmwMsg = super::msg::rmw::Char;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      data: msg.data,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      data: msg.data,
    }
  }
}


// Corresponds to std_msgs__msg__ColorRGBA

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ColorRGBA {

    // This member is not documented.
    #[allow(missing_docs)]
    pub r: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub g: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub b: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub a: f32,

}



impl Default for ColorRGBA {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ColorRGBA::default())
  }
}

impl rosidl_runtime_rs::Message for ColorRGBA {
  type RmwMsg = super::msg::rmw::ColorRGBA;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        r: msg.r,
        g: msg.g,
        b: msg.b,
        a: msg.a,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      r: msg.r,
      g: msg.g,
      b: msg.b,
      a: msg.a,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      r: msg.r,
      g: msg.g,
      b: msg.b,
      a: msg.a,
    }
  }
}


// Corresponds to std_msgs__msg__ColorRGBAArray

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ColorRGBAArray {
    /// header info
    pub header: super::msg::Header,

    /// array of data
    pub data: Vec<super::msg::ColorRGBA>,

}



impl Default for ColorRGBAArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ColorRGBAArray::default())
  }
}

impl rosidl_runtime_rs::Message for ColorRGBAArray {
  type RmwMsg = super::msg::rmw::ColorRGBAArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        data: msg.data
          .into_iter()
          .map(|elem| super::msg::ColorRGBA::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        data: msg.data
          .iter()
          .map(|elem| super::msg::ColorRGBA::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::Header::from_rmw_message(msg.header),
      data: msg.data
          .into_iter()
          .map(super::msg::ColorRGBA::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to std_msgs__msg__Duration

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Duration {

    // This member is not documented.
    #[allow(missing_docs)]
    pub data: builtin_interfaces::msg::Duration,

}



impl Default for Duration {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Duration::default())
  }
}

impl rosidl_runtime_rs::Message for Duration {
  type RmwMsg = super::msg::rmw::Duration;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Owned(msg.data)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Borrowed(&msg.data)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      data: builtin_interfaces::msg::Duration::from_rmw_message(msg.data),
    }
  }
}


// Corresponds to std_msgs__msg__DurationArray

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DurationArray {
    /// header info
    pub header: super::msg::Header,

    /// array of data
    pub data: Vec<super::msg::Duration>,

}



impl Default for DurationArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DurationArray::default())
  }
}

impl rosidl_runtime_rs::Message for DurationArray {
  type RmwMsg = super::msg::rmw::DurationArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        data: msg.data
          .into_iter()
          .map(|elem| super::msg::Duration::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        data: msg.data
          .iter()
          .map(|elem| super::msg::Duration::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::Header::from_rmw_message(msg.header),
      data: msg.data
          .into_iter()
          .map(super::msg::Duration::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to std_msgs__msg__Empty

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Empty {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for Empty {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Empty::default())
  }
}

impl rosidl_runtime_rs::Message for Empty {
  type RmwMsg = super::msg::rmw::Empty;

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


// Corresponds to std_msgs__msg__Float32

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Float32 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub data: f32,

}



impl Default for Float32 {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Float32::default())
  }
}

impl rosidl_runtime_rs::Message for Float32 {
  type RmwMsg = super::msg::rmw::Float32;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      data: msg.data,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      data: msg.data,
    }
  }
}


// Corresponds to std_msgs__msg__Float32Array

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Float32Array {
    /// header info
    pub header: super::msg::Header,

    /// array of data
    pub data: Vec<f32>,

}



impl Default for Float32Array {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Float32Array::default())
  }
}

impl rosidl_runtime_rs::Message for Float32Array {
  type RmwMsg = super::msg::rmw::Float32Array;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        data: msg.data.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::Header::from_rmw_message(msg.header),
      data: msg.data
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to std_msgs__msg__Float32MultiArray
/// Please look at the MultiArrayLayout message definition for
/// documentation on all multiarrays.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Float32MultiArray {
    /// specification of data layout
    pub layout: super::msg::MultiArrayLayout,

    /// array of data
    pub data: Vec<f32>,

}



impl Default for Float32MultiArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Float32MultiArray::default())
  }
}

impl rosidl_runtime_rs::Message for Float32MultiArray {
  type RmwMsg = super::msg::rmw::Float32MultiArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        layout: super::msg::MultiArrayLayout::into_rmw_message(std::borrow::Cow::Owned(msg.layout)).into_owned(),
        data: msg.data.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        layout: super::msg::MultiArrayLayout::into_rmw_message(std::borrow::Cow::Borrowed(&msg.layout)).into_owned(),
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      layout: super::msg::MultiArrayLayout::from_rmw_message(msg.layout),
      data: msg.data
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to std_msgs__msg__Float64

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Float64 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub data: f64,

}



impl Default for Float64 {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Float64::default())
  }
}

impl rosidl_runtime_rs::Message for Float64 {
  type RmwMsg = super::msg::rmw::Float64;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      data: msg.data,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      data: msg.data,
    }
  }
}


// Corresponds to std_msgs__msg__Float64Array

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Float64Array {
    /// header info
    pub header: super::msg::Header,

    /// array of data
    pub data: Vec<f64>,

}



impl Default for Float64Array {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Float64Array::default())
  }
}

impl rosidl_runtime_rs::Message for Float64Array {
  type RmwMsg = super::msg::rmw::Float64Array;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        data: msg.data.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::Header::from_rmw_message(msg.header),
      data: msg.data
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to std_msgs__msg__Float64MultiArray
/// Please look at the MultiArrayLayout message definition for
/// documentation on all multiarrays.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Float64MultiArray {
    /// specification of data layout
    pub layout: super::msg::MultiArrayLayout,

    /// array of data
    pub data: Vec<f64>,

}



impl Default for Float64MultiArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Float64MultiArray::default())
  }
}

impl rosidl_runtime_rs::Message for Float64MultiArray {
  type RmwMsg = super::msg::rmw::Float64MultiArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        layout: super::msg::MultiArrayLayout::into_rmw_message(std::borrow::Cow::Owned(msg.layout)).into_owned(),
        data: msg.data.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        layout: super::msg::MultiArrayLayout::into_rmw_message(std::borrow::Cow::Borrowed(&msg.layout)).into_owned(),
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      layout: super::msg::MultiArrayLayout::from_rmw_message(msg.layout),
      data: msg.data
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to std_msgs__msg__Header
/// Standard metadata for higher-level stamped data types.
/// This is generally used to communicate timestamped data
/// in a particular coordinate frame.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Header {
    /// Two-integer timestamp that is expressed as seconds and nanoseconds.
    pub stamp: builtin_interfaces::msg::Time,

    /// Transform frame with which this data is associated.
    pub frame_id: std::string::String,

}



impl Default for Header {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Header::default())
  }
}

impl rosidl_runtime_rs::Message for Header {
  type RmwMsg = super::msg::rmw::Header;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
        frame_id: msg.frame_id.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
        frame_id: msg.frame_id.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
      frame_id: msg.frame_id.to_string(),
    }
  }
}


// Corresponds to std_msgs__msg__Int16

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Int16 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub data: i16,

}



impl Default for Int16 {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Int16::default())
  }
}

impl rosidl_runtime_rs::Message for Int16 {
  type RmwMsg = super::msg::rmw::Int16;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      data: msg.data,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      data: msg.data,
    }
  }
}


// Corresponds to std_msgs__msg__Int16Array

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Int16Array {
    /// header info
    pub header: super::msg::Header,

    /// array of data
    pub data: Vec<i16>,

}



impl Default for Int16Array {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Int16Array::default())
  }
}

impl rosidl_runtime_rs::Message for Int16Array {
  type RmwMsg = super::msg::rmw::Int16Array;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        data: msg.data.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::Header::from_rmw_message(msg.header),
      data: msg.data
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to std_msgs__msg__Int16MultiArray
/// Please look at the MultiArrayLayout message definition for
/// documentation on all multiarrays.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Int16MultiArray {
    /// specification of data layout
    pub layout: super::msg::MultiArrayLayout,

    /// array of data
    pub data: Vec<i16>,

}



impl Default for Int16MultiArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Int16MultiArray::default())
  }
}

impl rosidl_runtime_rs::Message for Int16MultiArray {
  type RmwMsg = super::msg::rmw::Int16MultiArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        layout: super::msg::MultiArrayLayout::into_rmw_message(std::borrow::Cow::Owned(msg.layout)).into_owned(),
        data: msg.data.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        layout: super::msg::MultiArrayLayout::into_rmw_message(std::borrow::Cow::Borrowed(&msg.layout)).into_owned(),
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      layout: super::msg::MultiArrayLayout::from_rmw_message(msg.layout),
      data: msg.data
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to std_msgs__msg__Int32

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Int32 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub data: i32,

}



impl Default for Int32 {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Int32::default())
  }
}

impl rosidl_runtime_rs::Message for Int32 {
  type RmwMsg = super::msg::rmw::Int32;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      data: msg.data,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      data: msg.data,
    }
  }
}


// Corresponds to std_msgs__msg__Int32Array

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Int32Array {
    /// header info
    pub header: super::msg::Header,

    /// array of data
    pub data: Vec<i32>,

}



impl Default for Int32Array {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Int32Array::default())
  }
}

impl rosidl_runtime_rs::Message for Int32Array {
  type RmwMsg = super::msg::rmw::Int32Array;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        data: msg.data.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::Header::from_rmw_message(msg.header),
      data: msg.data
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to std_msgs__msg__Int32MultiArray
/// Please look at the MultiArrayLayout message definition for
/// documentation on all multiarrays.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Int32MultiArray {
    /// specification of data layout
    pub layout: super::msg::MultiArrayLayout,

    /// array of data
    pub data: Vec<i32>,

}



impl Default for Int32MultiArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Int32MultiArray::default())
  }
}

impl rosidl_runtime_rs::Message for Int32MultiArray {
  type RmwMsg = super::msg::rmw::Int32MultiArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        layout: super::msg::MultiArrayLayout::into_rmw_message(std::borrow::Cow::Owned(msg.layout)).into_owned(),
        data: msg.data.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        layout: super::msg::MultiArrayLayout::into_rmw_message(std::borrow::Cow::Borrowed(&msg.layout)).into_owned(),
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      layout: super::msg::MultiArrayLayout::from_rmw_message(msg.layout),
      data: msg.data
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to std_msgs__msg__Int64

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Int64 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub data: i64,

}



impl Default for Int64 {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Int64::default())
  }
}

impl rosidl_runtime_rs::Message for Int64 {
  type RmwMsg = super::msg::rmw::Int64;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      data: msg.data,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      data: msg.data,
    }
  }
}


// Corresponds to std_msgs__msg__Int64Array

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Int64Array {
    /// header info
    pub header: super::msg::Header,

    /// array of data
    pub data: Vec<i64>,

}



impl Default for Int64Array {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Int64Array::default())
  }
}

impl rosidl_runtime_rs::Message for Int64Array {
  type RmwMsg = super::msg::rmw::Int64Array;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        data: msg.data.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::Header::from_rmw_message(msg.header),
      data: msg.data
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to std_msgs__msg__Int64MultiArray
/// Please look at the MultiArrayLayout message definition for
/// documentation on all multiarrays.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Int64MultiArray {
    /// specification of data layout
    pub layout: super::msg::MultiArrayLayout,

    /// array of data
    pub data: Vec<i64>,

}



impl Default for Int64MultiArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Int64MultiArray::default())
  }
}

impl rosidl_runtime_rs::Message for Int64MultiArray {
  type RmwMsg = super::msg::rmw::Int64MultiArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        layout: super::msg::MultiArrayLayout::into_rmw_message(std::borrow::Cow::Owned(msg.layout)).into_owned(),
        data: msg.data.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        layout: super::msg::MultiArrayLayout::into_rmw_message(std::borrow::Cow::Borrowed(&msg.layout)).into_owned(),
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      layout: super::msg::MultiArrayLayout::from_rmw_message(msg.layout),
      data: msg.data
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to std_msgs__msg__Int8

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Int8 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub data: i8,

}



impl Default for Int8 {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Int8::default())
  }
}

impl rosidl_runtime_rs::Message for Int8 {
  type RmwMsg = super::msg::rmw::Int8;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      data: msg.data,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      data: msg.data,
    }
  }
}


// Corresponds to std_msgs__msg__Int8Array

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Int8Array {
    /// header info
    pub header: super::msg::Header,

    /// array of data
    pub data: Vec<i8>,

}



impl Default for Int8Array {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Int8Array::default())
  }
}

impl rosidl_runtime_rs::Message for Int8Array {
  type RmwMsg = super::msg::rmw::Int8Array;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        data: msg.data.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::Header::from_rmw_message(msg.header),
      data: msg.data
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to std_msgs__msg__Int8MultiArray
/// Please look at the MultiArrayLayout message definition for
/// documentation on all multiarrays.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Int8MultiArray {
    /// specification of data layout
    pub layout: super::msg::MultiArrayLayout,

    /// array of data
    pub data: Vec<i8>,

}



impl Default for Int8MultiArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Int8MultiArray::default())
  }
}

impl rosidl_runtime_rs::Message for Int8MultiArray {
  type RmwMsg = super::msg::rmw::Int8MultiArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        layout: super::msg::MultiArrayLayout::into_rmw_message(std::borrow::Cow::Owned(msg.layout)).into_owned(),
        data: msg.data.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        layout: super::msg::MultiArrayLayout::into_rmw_message(std::borrow::Cow::Borrowed(&msg.layout)).into_owned(),
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      layout: super::msg::MultiArrayLayout::from_rmw_message(msg.layout),
      data: msg.data
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to std_msgs__msg__MultiArrayDimension

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MultiArrayDimension {
    /// label of given dimension
    pub label: std::string::String,

    /// size of given dimension (in type units)
    pub size: u32,

    /// stride of given dimension
    pub stride: u32,

}



impl Default for MultiArrayDimension {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MultiArrayDimension::default())
  }
}

impl rosidl_runtime_rs::Message for MultiArrayDimension {
  type RmwMsg = super::msg::rmw::MultiArrayDimension;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        label: msg.label.as_str().into(),
        size: msg.size,
        stride: msg.stride,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        label: msg.label.as_str().into(),
      size: msg.size,
      stride: msg.stride,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      label: msg.label.to_string(),
      size: msg.size,
      stride: msg.stride,
    }
  }
}


// Corresponds to std_msgs__msg__MultiArrayLayout
/// The multiarray declares a generic multi-dimensional array of a
/// particular data type.  Dimensions are ordered from outer most
/// to inner most.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MultiArrayLayout {
    /// Array of dimension properties
    pub dim: Vec<super::msg::MultiArrayDimension>,

    /// padding elements at front of data
    pub data_offset: u32,

}



impl Default for MultiArrayLayout {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MultiArrayLayout::default())
  }
}

impl rosidl_runtime_rs::Message for MultiArrayLayout {
  type RmwMsg = super::msg::rmw::MultiArrayLayout;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        dim: msg.dim
          .into_iter()
          .map(|elem| super::msg::MultiArrayDimension::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        data_offset: msg.data_offset,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        dim: msg.dim
          .iter()
          .map(|elem| super::msg::MultiArrayDimension::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      data_offset: msg.data_offset,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      dim: msg.dim
          .into_iter()
          .map(super::msg::MultiArrayDimension::from_rmw_message)
          .collect(),
      data_offset: msg.data_offset,
    }
  }
}


// Corresponds to std_msgs__msg__String

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct String {

    // This member is not documented.
    #[allow(missing_docs)]
    pub data: std::string::String,

}



impl Default for String {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::String::default())
  }
}

impl rosidl_runtime_rs::Message for String {
  type RmwMsg = super::msg::rmw::String;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      data: msg.data.to_string(),
    }
  }
}


// Corresponds to std_msgs__msg__StringArray

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StringArray {
    /// header info
    pub header: super::msg::Header,

    /// array of data
    pub data: Vec<super::msg::String>,

}



impl Default for StringArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::StringArray::default())
  }
}

impl rosidl_runtime_rs::Message for StringArray {
  type RmwMsg = super::msg::rmw::StringArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        data: msg.data
          .into_iter()
          .map(|elem| super::msg::String::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        data: msg.data
          .iter()
          .map(|elem| super::msg::String::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::Header::from_rmw_message(msg.header),
      data: msg.data
          .into_iter()
          .map(super::msg::String::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to std_msgs__msg__Time

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Time {

    // This member is not documented.
    #[allow(missing_docs)]
    pub data: builtin_interfaces::msg::Time,

}



impl Default for Time {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Time::default())
  }
}

impl rosidl_runtime_rs::Message for Time {
  type RmwMsg = super::msg::rmw::Time;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.data)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.data)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      data: builtin_interfaces::msg::Time::from_rmw_message(msg.data),
    }
  }
}


// Corresponds to std_msgs__msg__TimeArray

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TimeArray {
    /// header info
    pub header: super::msg::Header,

    /// array of data
    pub data: Vec<super::msg::Time>,

}



impl Default for TimeArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TimeArray::default())
  }
}

impl rosidl_runtime_rs::Message for TimeArray {
  type RmwMsg = super::msg::rmw::TimeArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        data: msg.data
          .into_iter()
          .map(|elem| super::msg::Time::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        data: msg.data
          .iter()
          .map(|elem| super::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::Header::from_rmw_message(msg.header),
      data: msg.data
          .into_iter()
          .map(super::msg::Time::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to std_msgs__msg__UInt16

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UInt16 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub data: u16,

}



impl Default for UInt16 {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::UInt16::default())
  }
}

impl rosidl_runtime_rs::Message for UInt16 {
  type RmwMsg = super::msg::rmw::UInt16;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      data: msg.data,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      data: msg.data,
    }
  }
}


// Corresponds to std_msgs__msg__UInt16Array

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UInt16Array {
    /// header info
    pub header: super::msg::Header,

    /// array of data
    pub data: Vec<u16>,

}



impl Default for UInt16Array {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::UInt16Array::default())
  }
}

impl rosidl_runtime_rs::Message for UInt16Array {
  type RmwMsg = super::msg::rmw::UInt16Array;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        data: msg.data.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::Header::from_rmw_message(msg.header),
      data: msg.data
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to std_msgs__msg__UInt16MultiArray
/// Please look at the MultiArrayLayout message definition for
/// documentation on all multiarrays.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UInt16MultiArray {
    /// specification of data layout
    pub layout: super::msg::MultiArrayLayout,

    /// array of data
    pub data: Vec<u16>,

}



impl Default for UInt16MultiArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::UInt16MultiArray::default())
  }
}

impl rosidl_runtime_rs::Message for UInt16MultiArray {
  type RmwMsg = super::msg::rmw::UInt16MultiArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        layout: super::msg::MultiArrayLayout::into_rmw_message(std::borrow::Cow::Owned(msg.layout)).into_owned(),
        data: msg.data.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        layout: super::msg::MultiArrayLayout::into_rmw_message(std::borrow::Cow::Borrowed(&msg.layout)).into_owned(),
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      layout: super::msg::MultiArrayLayout::from_rmw_message(msg.layout),
      data: msg.data
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to std_msgs__msg__UInt32

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UInt32 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub data: u32,

}



impl Default for UInt32 {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::UInt32::default())
  }
}

impl rosidl_runtime_rs::Message for UInt32 {
  type RmwMsg = super::msg::rmw::UInt32;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      data: msg.data,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      data: msg.data,
    }
  }
}


// Corresponds to std_msgs__msg__UInt32Array

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UInt32Array {
    /// header info
    pub header: super::msg::Header,

    /// array of data
    pub data: Vec<u32>,

}



impl Default for UInt32Array {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::UInt32Array::default())
  }
}

impl rosidl_runtime_rs::Message for UInt32Array {
  type RmwMsg = super::msg::rmw::UInt32Array;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        data: msg.data.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::Header::from_rmw_message(msg.header),
      data: msg.data
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to std_msgs__msg__UInt32MultiArray
/// Please look at the MultiArrayLayout message definition for
/// documentation on all multiarrays.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UInt32MultiArray {
    /// specification of data layout
    pub layout: super::msg::MultiArrayLayout,

    /// array of data
    pub data: Vec<u32>,

}



impl Default for UInt32MultiArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::UInt32MultiArray::default())
  }
}

impl rosidl_runtime_rs::Message for UInt32MultiArray {
  type RmwMsg = super::msg::rmw::UInt32MultiArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        layout: super::msg::MultiArrayLayout::into_rmw_message(std::borrow::Cow::Owned(msg.layout)).into_owned(),
        data: msg.data.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        layout: super::msg::MultiArrayLayout::into_rmw_message(std::borrow::Cow::Borrowed(&msg.layout)).into_owned(),
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      layout: super::msg::MultiArrayLayout::from_rmw_message(msg.layout),
      data: msg.data
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to std_msgs__msg__UInt64

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UInt64 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub data: u64,

}



impl Default for UInt64 {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::UInt64::default())
  }
}

impl rosidl_runtime_rs::Message for UInt64 {
  type RmwMsg = super::msg::rmw::UInt64;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      data: msg.data,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      data: msg.data,
    }
  }
}


// Corresponds to std_msgs__msg__UInt64Array

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UInt64Array {
    /// header info
    pub header: super::msg::Header,

    /// array of data
    pub data: Vec<u64>,

}



impl Default for UInt64Array {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::UInt64Array::default())
  }
}

impl rosidl_runtime_rs::Message for UInt64Array {
  type RmwMsg = super::msg::rmw::UInt64Array;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        data: msg.data.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::Header::from_rmw_message(msg.header),
      data: msg.data
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to std_msgs__msg__UInt64MultiArray
/// Please look at the MultiArrayLayout message definition for
/// documentation on all multiarrays.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UInt64MultiArray {
    /// specification of data layout
    pub layout: super::msg::MultiArrayLayout,

    /// array of data
    pub data: Vec<u64>,

}



impl Default for UInt64MultiArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::UInt64MultiArray::default())
  }
}

impl rosidl_runtime_rs::Message for UInt64MultiArray {
  type RmwMsg = super::msg::rmw::UInt64MultiArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        layout: super::msg::MultiArrayLayout::into_rmw_message(std::borrow::Cow::Owned(msg.layout)).into_owned(),
        data: msg.data.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        layout: super::msg::MultiArrayLayout::into_rmw_message(std::borrow::Cow::Borrowed(&msg.layout)).into_owned(),
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      layout: super::msg::MultiArrayLayout::from_rmw_message(msg.layout),
      data: msg.data
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to std_msgs__msg__UInt8

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UInt8 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub data: u8,

}



impl Default for UInt8 {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::UInt8::default())
  }
}

impl rosidl_runtime_rs::Message for UInt8 {
  type RmwMsg = super::msg::rmw::UInt8;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      data: msg.data,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      data: msg.data,
    }
  }
}


// Corresponds to std_msgs__msg__UInt8Array

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UInt8Array {
    /// header info
    pub header: super::msg::Header,

    /// array of data
    pub data: Vec<u8>,

}



impl Default for UInt8Array {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::UInt8Array::default())
  }
}

impl rosidl_runtime_rs::Message for UInt8Array {
  type RmwMsg = super::msg::rmw::UInt8Array;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        data: msg.data.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::Header::from_rmw_message(msg.header),
      data: msg.data
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to std_msgs__msg__UInt8MultiArray
/// Please look at the MultiArrayLayout message definition for
/// documentation on all multiarrays.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UInt8MultiArray {
    /// specification of data layout
    pub layout: super::msg::MultiArrayLayout,

    /// array of data
    pub data: Vec<u8>,

}



impl Default for UInt8MultiArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::UInt8MultiArray::default())
  }
}

impl rosidl_runtime_rs::Message for UInt8MultiArray {
  type RmwMsg = super::msg::rmw::UInt8MultiArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        layout: super::msg::MultiArrayLayout::into_rmw_message(std::borrow::Cow::Owned(msg.layout)).into_owned(),
        data: msg.data.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        layout: super::msg::MultiArrayLayout::into_rmw_message(std::borrow::Cow::Borrowed(&msg.layout)).into_owned(),
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      layout: super::msg::MultiArrayLayout::from_rmw_message(msg.layout),
      data: msg.data
          .into_iter()
          .collect(),
    }
  }
}


