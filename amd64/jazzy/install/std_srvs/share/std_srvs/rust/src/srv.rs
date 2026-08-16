#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to std_srvs__srv__Empty_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Empty_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for Empty_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::Empty_Request::default())
  }
}

impl rosidl_runtime_rs::Message for Empty_Request {
  type RmwMsg = super::srv::rmw::Empty_Request;

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


// Corresponds to std_srvs__srv__Empty_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Empty_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for Empty_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::Empty_Response::default())
  }
}

impl rosidl_runtime_rs::Message for Empty_Response {
  type RmwMsg = super::srv::rmw::Empty_Response;

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


// Corresponds to std_srvs__srv__GetBool_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetBool_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetBool_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetBool_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetBool_Request {
  type RmwMsg = super::srv::rmw::GetBool_Request;

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


// Corresponds to std_srvs__srv__GetBool_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetBool_Response {
    /// e.g. for hardware enabling / disabling
    pub data: bool,

    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: std::string::String,

}



impl Default for GetBool_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetBool_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetBool_Response {
  type RmwMsg = super::srv::rmw::GetBool_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data,
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      data: msg.data,
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      data: msg.data,
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to std_srvs__srv__GetBoolWithTile_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetBoolWithTile_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub title: std::string::String,

}



impl Default for GetBoolWithTile_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetBoolWithTile_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetBoolWithTile_Request {
  type RmwMsg = super::srv::rmw::GetBoolWithTile_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        title: msg.title.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        title: msg.title.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      title: msg.title.to_string(),
    }
  }
}


// Corresponds to std_srvs__srv__GetBoolWithTile_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetBoolWithTile_Response {
    /// e.g. for hardware enabling / disabling
    pub data: bool,

    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: std::string::String,

}



impl Default for GetBoolWithTile_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetBoolWithTile_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetBoolWithTile_Response {
  type RmwMsg = super::srv::rmw::GetBoolWithTile_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data,
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      data: msg.data,
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      data: msg.data,
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to std_srvs__srv__GetFloat32_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetFloat32_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetFloat32_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetFloat32_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetFloat32_Request {
  type RmwMsg = super::srv::rmw::GetFloat32_Request;

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


// Corresponds to std_srvs__srv__GetFloat32_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetFloat32_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: std::string::String,

    /// data
    pub data: f32,

}



impl Default for GetFloat32_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetFloat32_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetFloat32_Response {
  type RmwMsg = super::srv::rmw::GetFloat32_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
        data: msg.data,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      data: msg.data,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
      data: msg.data,
    }
  }
}


// Corresponds to std_srvs__srv__GetFloat32Array_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetFloat32Array_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetFloat32Array_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetFloat32Array_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetFloat32Array_Request {
  type RmwMsg = super::srv::rmw::GetFloat32Array_Request;

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


// Corresponds to std_srvs__srv__GetFloat32Array_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetFloat32Array_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: std::string::String,

    /// array of data
    pub data: Vec<f32>,

}



impl Default for GetFloat32Array_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetFloat32Array_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetFloat32Array_Response {
  type RmwMsg = super::srv::rmw::GetFloat32Array_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
        data: msg.data.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
      data: msg.data
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to std_srvs__srv__GetFloat32ArrayWithTitle_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetFloat32ArrayWithTitle_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub title: std::string::String,

}



impl Default for GetFloat32ArrayWithTitle_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetFloat32ArrayWithTitle_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetFloat32ArrayWithTitle_Request {
  type RmwMsg = super::srv::rmw::GetFloat32ArrayWithTitle_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        title: msg.title.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        title: msg.title.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      title: msg.title.to_string(),
    }
  }
}


// Corresponds to std_srvs__srv__GetFloat32ArrayWithTitle_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetFloat32ArrayWithTitle_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: std::string::String,

    /// array of data
    pub data: Vec<f32>,

}



impl Default for GetFloat32ArrayWithTitle_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetFloat32ArrayWithTitle_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetFloat32ArrayWithTitle_Response {
  type RmwMsg = super::srv::rmw::GetFloat32ArrayWithTitle_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
        data: msg.data.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
      data: msg.data
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to std_srvs__srv__GetFloat32WithTitle_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetFloat32WithTitle_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub title: std::string::String,

}



impl Default for GetFloat32WithTitle_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetFloat32WithTitle_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetFloat32WithTitle_Request {
  type RmwMsg = super::srv::rmw::GetFloat32WithTitle_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        title: msg.title.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        title: msg.title.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      title: msg.title.to_string(),
    }
  }
}


// Corresponds to std_srvs__srv__GetFloat32WithTitle_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetFloat32WithTitle_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: std::string::String,

    /// data
    pub data: f32,

}



impl Default for GetFloat32WithTitle_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetFloat32WithTitle_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetFloat32WithTitle_Response {
  type RmwMsg = super::srv::rmw::GetFloat32WithTitle_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
        data: msg.data,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      data: msg.data,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
      data: msg.data,
    }
  }
}


// Corresponds to std_srvs__srv__GetFloat64_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetFloat64_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetFloat64_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetFloat64_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetFloat64_Request {
  type RmwMsg = super::srv::rmw::GetFloat64_Request;

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


// Corresponds to std_srvs__srv__GetFloat64_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetFloat64_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: std::string::String,

    /// data
    pub data: f64,

}



impl Default for GetFloat64_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetFloat64_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetFloat64_Response {
  type RmwMsg = super::srv::rmw::GetFloat64_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
        data: msg.data,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      data: msg.data,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
      data: msg.data,
    }
  }
}


// Corresponds to std_srvs__srv__GetFloat64Array_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetFloat64Array_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetFloat64Array_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetFloat64Array_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetFloat64Array_Request {
  type RmwMsg = super::srv::rmw::GetFloat64Array_Request;

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


// Corresponds to std_srvs__srv__GetFloat64Array_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetFloat64Array_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: std::string::String,

    /// array of data
    pub data: Vec<f64>,

}



impl Default for GetFloat64Array_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetFloat64Array_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetFloat64Array_Response {
  type RmwMsg = super::srv::rmw::GetFloat64Array_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
        data: msg.data.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
      data: msg.data
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to std_srvs__srv__GetFloat64ArrayWithTitle_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetFloat64ArrayWithTitle_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub title: std::string::String,

}



impl Default for GetFloat64ArrayWithTitle_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetFloat64ArrayWithTitle_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetFloat64ArrayWithTitle_Request {
  type RmwMsg = super::srv::rmw::GetFloat64ArrayWithTitle_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        title: msg.title.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        title: msg.title.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      title: msg.title.to_string(),
    }
  }
}


// Corresponds to std_srvs__srv__GetFloat64ArrayWithTitle_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetFloat64ArrayWithTitle_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: std::string::String,

    /// array of data
    pub data: Vec<f64>,

}



impl Default for GetFloat64ArrayWithTitle_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetFloat64ArrayWithTitle_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetFloat64ArrayWithTitle_Response {
  type RmwMsg = super::srv::rmw::GetFloat64ArrayWithTitle_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
        data: msg.data.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
      data: msg.data
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to std_srvs__srv__GetFloat64WithTitle_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetFloat64WithTitle_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub title: std::string::String,

}



impl Default for GetFloat64WithTitle_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetFloat64WithTitle_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetFloat64WithTitle_Request {
  type RmwMsg = super::srv::rmw::GetFloat64WithTitle_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        title: msg.title.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        title: msg.title.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      title: msg.title.to_string(),
    }
  }
}


// Corresponds to std_srvs__srv__GetFloat64WithTitle_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetFloat64WithTitle_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: std::string::String,

    /// data
    pub data: f64,

}



impl Default for GetFloat64WithTitle_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetFloat64WithTitle_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetFloat64WithTitle_Response {
  type RmwMsg = super::srv::rmw::GetFloat64WithTitle_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
        data: msg.data,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      data: msg.data,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
      data: msg.data,
    }
  }
}


// Corresponds to std_srvs__srv__GetInt32_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetInt32_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetInt32_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetInt32_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetInt32_Request {
  type RmwMsg = super::srv::rmw::GetInt32_Request;

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


// Corresponds to std_srvs__srv__GetInt32_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetInt32_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub data: i32,

    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: std::string::String,

}



impl Default for GetInt32_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetInt32_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetInt32_Response {
  type RmwMsg = super::srv::rmw::GetInt32_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data,
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      data: msg.data,
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      data: msg.data,
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to std_srvs__srv__GetInt32Array_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetInt32Array_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetInt32Array_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetInt32Array_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetInt32Array_Request {
  type RmwMsg = super::srv::rmw::GetInt32Array_Request;

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


// Corresponds to std_srvs__srv__GetInt32Array_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetInt32Array_Response {
    /// array of data
    pub data: Vec<i32>,

    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: std::string::String,

}



impl Default for GetInt32Array_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetInt32Array_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetInt32Array_Response {
  type RmwMsg = super::srv::rmw::GetInt32Array_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data.into(),
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data.as_slice().into(),
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      data: msg.data
          .into_iter()
          .collect(),
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to std_srvs__srv__GetInt32ArrayWithTitle_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetInt32ArrayWithTitle_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub title: std::string::String,

}



impl Default for GetInt32ArrayWithTitle_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetInt32ArrayWithTitle_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetInt32ArrayWithTitle_Request {
  type RmwMsg = super::srv::rmw::GetInt32ArrayWithTitle_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        title: msg.title.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        title: msg.title.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      title: msg.title.to_string(),
    }
  }
}


// Corresponds to std_srvs__srv__GetInt32ArrayWithTitle_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetInt32ArrayWithTitle_Response {
    /// array of data
    pub data: Vec<i32>,

    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: std::string::String,

}



impl Default for GetInt32ArrayWithTitle_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetInt32ArrayWithTitle_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetInt32ArrayWithTitle_Response {
  type RmwMsg = super::srv::rmw::GetInt32ArrayWithTitle_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data.into(),
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data.as_slice().into(),
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      data: msg.data
          .into_iter()
          .collect(),
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to std_srvs__srv__GetInt32WithTitle_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetInt32WithTitle_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub title: std::string::String,

}



impl Default for GetInt32WithTitle_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetInt32WithTitle_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetInt32WithTitle_Request {
  type RmwMsg = super::srv::rmw::GetInt32WithTitle_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        title: msg.title.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        title: msg.title.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      title: msg.title.to_string(),
    }
  }
}


// Corresponds to std_srvs__srv__GetInt32WithTitle_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetInt32WithTitle_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub data: i32,

    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: std::string::String,

}



impl Default for GetInt32WithTitle_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetInt32WithTitle_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetInt32WithTitle_Response {
  type RmwMsg = super::srv::rmw::GetInt32WithTitle_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data,
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      data: msg.data,
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      data: msg.data,
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to std_srvs__srv__GetString_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetString_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetString_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetString_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetString_Request {
  type RmwMsg = super::srv::rmw::GetString_Request;

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


// Corresponds to std_srvs__srv__GetString_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetString_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub data: std::string::String,

    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: std::string::String,

}



impl Default for GetString_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetString_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetString_Response {
  type RmwMsg = super::srv::rmw::GetString_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data.as_str().into(),
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data.as_str().into(),
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      data: msg.data.to_string(),
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to std_srvs__srv__GetStringArray_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetStringArray_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetStringArray_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetStringArray_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetStringArray_Request {
  type RmwMsg = super::srv::rmw::GetStringArray_Request;

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


// Corresponds to std_srvs__srv__GetStringArray_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetStringArray_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub data: Vec<std::string::String>,

    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: std::string::String,

}



impl Default for GetStringArray_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetStringArray_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetStringArray_Response {
  type RmwMsg = super::srv::rmw::GetStringArray_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      data: msg.data
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to std_srvs__srv__GetStringArrayWithTitle_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetStringArrayWithTitle_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub title: std::string::String,

}



impl Default for GetStringArrayWithTitle_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetStringArrayWithTitle_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetStringArrayWithTitle_Request {
  type RmwMsg = super::srv::rmw::GetStringArrayWithTitle_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        title: msg.title.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        title: msg.title.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      title: msg.title.to_string(),
    }
  }
}


// Corresponds to std_srvs__srv__GetStringArrayWithTitle_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetStringArrayWithTitle_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub data: Vec<std::string::String>,

    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: std::string::String,

}



impl Default for GetStringArrayWithTitle_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetStringArrayWithTitle_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetStringArrayWithTitle_Response {
  type RmwMsg = super::srv::rmw::GetStringArrayWithTitle_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      data: msg.data
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to std_srvs__srv__GetStringWithTitle_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetStringWithTitle_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub title: std::string::String,

}



impl Default for GetStringWithTitle_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetStringWithTitle_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetStringWithTitle_Request {
  type RmwMsg = super::srv::rmw::GetStringWithTitle_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        title: msg.title.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        title: msg.title.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      title: msg.title.to_string(),
    }
  }
}


// Corresponds to std_srvs__srv__GetStringWithTitle_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetStringWithTitle_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub data: std::string::String,

    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: std::string::String,

}



impl Default for GetStringWithTitle_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetStringWithTitle_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetStringWithTitle_Response {
  type RmwMsg = super::srv::rmw::GetStringWithTitle_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data.as_str().into(),
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data.as_str().into(),
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      data: msg.data.to_string(),
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to std_srvs__srv__GetUint32_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetUint32_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetUint32_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetUint32_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetUint32_Request {
  type RmwMsg = super::srv::rmw::GetUint32_Request;

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


// Corresponds to std_srvs__srv__GetUint32_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetUint32_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub data: u32,

    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: std::string::String,

}



impl Default for GetUint32_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetUint32_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetUint32_Response {
  type RmwMsg = super::srv::rmw::GetUint32_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data,
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      data: msg.data,
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      data: msg.data,
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to std_srvs__srv__GetUint32Array_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetUint32Array_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetUint32Array_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetUint32Array_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetUint32Array_Request {
  type RmwMsg = super::srv::rmw::GetUint32Array_Request;

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


// Corresponds to std_srvs__srv__GetUint32Array_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetUint32Array_Response {
    /// array of data
    pub data: Vec<u32>,

    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: std::string::String,

}



impl Default for GetUint32Array_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetUint32Array_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetUint32Array_Response {
  type RmwMsg = super::srv::rmw::GetUint32Array_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data.into(),
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data.as_slice().into(),
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      data: msg.data
          .into_iter()
          .collect(),
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to std_srvs__srv__GetUint32ArrayWithTitle_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetUint32ArrayWithTitle_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub title: std::string::String,

}



impl Default for GetUint32ArrayWithTitle_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetUint32ArrayWithTitle_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetUint32ArrayWithTitle_Request {
  type RmwMsg = super::srv::rmw::GetUint32ArrayWithTitle_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        title: msg.title.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        title: msg.title.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      title: msg.title.to_string(),
    }
  }
}


// Corresponds to std_srvs__srv__GetUint32ArrayWithTitle_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetUint32ArrayWithTitle_Response {
    /// array of data
    pub data: Vec<u32>,

    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: std::string::String,

}



impl Default for GetUint32ArrayWithTitle_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetUint32ArrayWithTitle_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetUint32ArrayWithTitle_Response {
  type RmwMsg = super::srv::rmw::GetUint32ArrayWithTitle_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data.into(),
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data.as_slice().into(),
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      data: msg.data
          .into_iter()
          .collect(),
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to std_srvs__srv__GetUint32WithTitle_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetUint32WithTitle_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub title: std::string::String,

}



impl Default for GetUint32WithTitle_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetUint32WithTitle_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetUint32WithTitle_Request {
  type RmwMsg = super::srv::rmw::GetUint32WithTitle_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        title: msg.title.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        title: msg.title.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      title: msg.title.to_string(),
    }
  }
}


// Corresponds to std_srvs__srv__GetUint32WithTitle_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetUint32WithTitle_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub data: u32,

    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: std::string::String,

}



impl Default for GetUint32WithTitle_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetUint32WithTitle_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetUint32WithTitle_Response {
  type RmwMsg = super::srv::rmw::GetUint32WithTitle_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data,
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      data: msg.data,
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      data: msg.data,
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to std_srvs__srv__GetUint8_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetUint8_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetUint8_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetUint8_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetUint8_Request {
  type RmwMsg = super::srv::rmw::GetUint8_Request;

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


// Corresponds to std_srvs__srv__GetUint8_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetUint8_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub data: u8,

    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: std::string::String,

}



impl Default for GetUint8_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetUint8_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetUint8_Response {
  type RmwMsg = super::srv::rmw::GetUint8_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data,
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      data: msg.data,
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      data: msg.data,
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to std_srvs__srv__GetUint8Array_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetUint8Array_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetUint8Array_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetUint8Array_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetUint8Array_Request {
  type RmwMsg = super::srv::rmw::GetUint8Array_Request;

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


// Corresponds to std_srvs__srv__GetUint8Array_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetUint8Array_Response {
    /// array of data
    pub data: Vec<u8>,

    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: std::string::String,

}



impl Default for GetUint8Array_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetUint8Array_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetUint8Array_Response {
  type RmwMsg = super::srv::rmw::GetUint8Array_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data.into(),
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data.as_slice().into(),
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      data: msg.data
          .into_iter()
          .collect(),
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to std_srvs__srv__GetUint8ArrayWithTitle_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetUint8ArrayWithTitle_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub title: std::string::String,

}



impl Default for GetUint8ArrayWithTitle_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetUint8ArrayWithTitle_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetUint8ArrayWithTitle_Request {
  type RmwMsg = super::srv::rmw::GetUint8ArrayWithTitle_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        title: msg.title.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        title: msg.title.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      title: msg.title.to_string(),
    }
  }
}


// Corresponds to std_srvs__srv__GetUint8ArrayWithTitle_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetUint8ArrayWithTitle_Response {
    /// array of data
    pub data: Vec<u8>,

    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: std::string::String,

}



impl Default for GetUint8ArrayWithTitle_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetUint8ArrayWithTitle_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetUint8ArrayWithTitle_Response {
  type RmwMsg = super::srv::rmw::GetUint8ArrayWithTitle_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data.into(),
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data.as_slice().into(),
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      data: msg.data
          .into_iter()
          .collect(),
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to std_srvs__srv__GetUint8WithTitle_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetUint8WithTitle_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub title: std::string::String,

}



impl Default for GetUint8WithTitle_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetUint8WithTitle_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetUint8WithTitle_Request {
  type RmwMsg = super::srv::rmw::GetUint8WithTitle_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        title: msg.title.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        title: msg.title.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      title: msg.title.to_string(),
    }
  }
}


// Corresponds to std_srvs__srv__GetUint8WithTitle_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetUint8WithTitle_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub data: u8,

    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: std::string::String,

}



impl Default for GetUint8WithTitle_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetUint8WithTitle_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetUint8WithTitle_Response {
  type RmwMsg = super::srv::rmw::GetUint8WithTitle_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data,
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      data: msg.data,
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      data: msg.data,
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to std_srvs__srv__SetBool_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetBool_Request {
    /// e.g. for hardware enabling / disabling
    pub data: bool,

}



impl Default for SetBool_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetBool_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetBool_Request {
  type RmwMsg = super::srv::rmw::SetBool_Request;

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


// Corresponds to std_srvs__srv__SetBool_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetBool_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: std::string::String,

}



impl Default for SetBool_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetBool_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetBool_Response {
  type RmwMsg = super::srv::rmw::SetBool_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to std_srvs__srv__SetBoolWithTitle_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetBoolWithTitle_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub title: std::string::String,

    /// e.g. for hardware enabling / disabling
    pub data: bool,

}



impl Default for SetBoolWithTitle_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetBoolWithTitle_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetBoolWithTitle_Request {
  type RmwMsg = super::srv::rmw::SetBoolWithTitle_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        title: msg.title.as_str().into(),
        data: msg.data,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        title: msg.title.as_str().into(),
      data: msg.data,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      title: msg.title.to_string(),
      data: msg.data,
    }
  }
}


// Corresponds to std_srvs__srv__SetBoolWithTitle_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetBoolWithTitle_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: std::string::String,

}



impl Default for SetBoolWithTitle_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetBoolWithTitle_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetBoolWithTitle_Response {
  type RmwMsg = super::srv::rmw::SetBoolWithTitle_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to std_srvs__srv__SetFloat32_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetFloat32_Request {
    /// data
    pub data: f32,

}



impl Default for SetFloat32_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetFloat32_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetFloat32_Request {
  type RmwMsg = super::srv::rmw::SetFloat32_Request;

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


// Corresponds to std_srvs__srv__SetFloat32_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetFloat32_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: std::string::String,

}



impl Default for SetFloat32_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetFloat32_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetFloat32_Response {
  type RmwMsg = super::srv::rmw::SetFloat32_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to std_srvs__srv__SetFloat32Array_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetFloat32Array_Request {
    /// array of data
    pub data: Vec<f32>,

}



impl Default for SetFloat32Array_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetFloat32Array_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetFloat32Array_Request {
  type RmwMsg = super::srv::rmw::SetFloat32Array_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      data: msg.data
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to std_srvs__srv__SetFloat32Array_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetFloat32Array_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: std::string::String,

}



impl Default for SetFloat32Array_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetFloat32Array_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetFloat32Array_Response {
  type RmwMsg = super::srv::rmw::SetFloat32Array_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to std_srvs__srv__SetFloat32ArrayWithTitle_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetFloat32ArrayWithTitle_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub title: std::string::String,

    /// array of data
    pub data: Vec<f32>,

}



impl Default for SetFloat32ArrayWithTitle_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetFloat32ArrayWithTitle_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetFloat32ArrayWithTitle_Request {
  type RmwMsg = super::srv::rmw::SetFloat32ArrayWithTitle_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        title: msg.title.as_str().into(),
        data: msg.data.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        title: msg.title.as_str().into(),
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      title: msg.title.to_string(),
      data: msg.data
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to std_srvs__srv__SetFloat32ArrayWithTitle_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetFloat32ArrayWithTitle_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: std::string::String,

}



impl Default for SetFloat32ArrayWithTitle_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetFloat32ArrayWithTitle_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetFloat32ArrayWithTitle_Response {
  type RmwMsg = super::srv::rmw::SetFloat32ArrayWithTitle_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to std_srvs__srv__SetFloat32WithTitle_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetFloat32WithTitle_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub title: std::string::String,

    /// data
    pub data: f32,

}



impl Default for SetFloat32WithTitle_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetFloat32WithTitle_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetFloat32WithTitle_Request {
  type RmwMsg = super::srv::rmw::SetFloat32WithTitle_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        title: msg.title.as_str().into(),
        data: msg.data,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        title: msg.title.as_str().into(),
      data: msg.data,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      title: msg.title.to_string(),
      data: msg.data,
    }
  }
}


// Corresponds to std_srvs__srv__SetFloat32WithTitle_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetFloat32WithTitle_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: std::string::String,

}



impl Default for SetFloat32WithTitle_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetFloat32WithTitle_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetFloat32WithTitle_Response {
  type RmwMsg = super::srv::rmw::SetFloat32WithTitle_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to std_srvs__srv__SetFloat64_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetFloat64_Request {
    /// data
    pub data: f64,

}



impl Default for SetFloat64_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetFloat64_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetFloat64_Request {
  type RmwMsg = super::srv::rmw::SetFloat64_Request;

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


// Corresponds to std_srvs__srv__SetFloat64_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetFloat64_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: std::string::String,

}



impl Default for SetFloat64_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetFloat64_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetFloat64_Response {
  type RmwMsg = super::srv::rmw::SetFloat64_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to std_srvs__srv__SetFloat64Array_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetFloat64Array_Request {
    /// array of data
    pub data: Vec<f64>,

}



impl Default for SetFloat64Array_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetFloat64Array_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetFloat64Array_Request {
  type RmwMsg = super::srv::rmw::SetFloat64Array_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      data: msg.data
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to std_srvs__srv__SetFloat64Array_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetFloat64Array_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: std::string::String,

}



impl Default for SetFloat64Array_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetFloat64Array_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetFloat64Array_Response {
  type RmwMsg = super::srv::rmw::SetFloat64Array_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to std_srvs__srv__SetFloat64ArrayWithTitle_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetFloat64ArrayWithTitle_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub title: std::string::String,

    /// array of data
    pub data: Vec<f64>,

}



impl Default for SetFloat64ArrayWithTitle_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetFloat64ArrayWithTitle_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetFloat64ArrayWithTitle_Request {
  type RmwMsg = super::srv::rmw::SetFloat64ArrayWithTitle_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        title: msg.title.as_str().into(),
        data: msg.data.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        title: msg.title.as_str().into(),
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      title: msg.title.to_string(),
      data: msg.data
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to std_srvs__srv__SetFloat64ArrayWithTitle_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetFloat64ArrayWithTitle_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: std::string::String,

}



impl Default for SetFloat64ArrayWithTitle_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetFloat64ArrayWithTitle_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetFloat64ArrayWithTitle_Response {
  type RmwMsg = super::srv::rmw::SetFloat64ArrayWithTitle_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to std_srvs__srv__SetFloat64WithTitle_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetFloat64WithTitle_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub title: std::string::String,

    /// data
    pub data: f64,

}



impl Default for SetFloat64WithTitle_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetFloat64WithTitle_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetFloat64WithTitle_Request {
  type RmwMsg = super::srv::rmw::SetFloat64WithTitle_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        title: msg.title.as_str().into(),
        data: msg.data,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        title: msg.title.as_str().into(),
      data: msg.data,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      title: msg.title.to_string(),
      data: msg.data,
    }
  }
}


// Corresponds to std_srvs__srv__SetFloat64WithTitle_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetFloat64WithTitle_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: std::string::String,

}



impl Default for SetFloat64WithTitle_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetFloat64WithTitle_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetFloat64WithTitle_Response {
  type RmwMsg = super::srv::rmw::SetFloat64WithTitle_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to std_srvs__srv__SetInt32_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetInt32_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub data: i32,

}



impl Default for SetInt32_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetInt32_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetInt32_Request {
  type RmwMsg = super::srv::rmw::SetInt32_Request;

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


// Corresponds to std_srvs__srv__SetInt32_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetInt32_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: std::string::String,

}



impl Default for SetInt32_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetInt32_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetInt32_Response {
  type RmwMsg = super::srv::rmw::SetInt32_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to std_srvs__srv__SetInt32Array_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetInt32Array_Request {
    /// array of data
    pub data: Vec<i32>,

}



impl Default for SetInt32Array_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetInt32Array_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetInt32Array_Request {
  type RmwMsg = super::srv::rmw::SetInt32Array_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      data: msg.data
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to std_srvs__srv__SetInt32Array_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetInt32Array_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: std::string::String,

}



impl Default for SetInt32Array_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetInt32Array_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetInt32Array_Response {
  type RmwMsg = super::srv::rmw::SetInt32Array_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to std_srvs__srv__SetInt32ArrayWithTitle_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetInt32ArrayWithTitle_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub title: std::string::String,

    /// array of data
    pub data: Vec<i32>,

}



impl Default for SetInt32ArrayWithTitle_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetInt32ArrayWithTitle_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetInt32ArrayWithTitle_Request {
  type RmwMsg = super::srv::rmw::SetInt32ArrayWithTitle_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        title: msg.title.as_str().into(),
        data: msg.data.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        title: msg.title.as_str().into(),
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      title: msg.title.to_string(),
      data: msg.data
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to std_srvs__srv__SetInt32ArrayWithTitle_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetInt32ArrayWithTitle_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: std::string::String,

}



impl Default for SetInt32ArrayWithTitle_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetInt32ArrayWithTitle_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetInt32ArrayWithTitle_Response {
  type RmwMsg = super::srv::rmw::SetInt32ArrayWithTitle_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to std_srvs__srv__SetInt32WithTitle_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetInt32WithTitle_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub title: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: i32,

}



impl Default for SetInt32WithTitle_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetInt32WithTitle_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetInt32WithTitle_Request {
  type RmwMsg = super::srv::rmw::SetInt32WithTitle_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        title: msg.title.as_str().into(),
        data: msg.data,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        title: msg.title.as_str().into(),
      data: msg.data,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      title: msg.title.to_string(),
      data: msg.data,
    }
  }
}


// Corresponds to std_srvs__srv__SetInt32WithTitle_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetInt32WithTitle_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: std::string::String,

}



impl Default for SetInt32WithTitle_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetInt32WithTitle_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetInt32WithTitle_Response {
  type RmwMsg = super::srv::rmw::SetInt32WithTitle_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to std_srvs__srv__SetString_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetString_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub data: std::string::String,

}



impl Default for SetString_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetString_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetString_Request {
  type RmwMsg = super::srv::rmw::SetString_Request;

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


// Corresponds to std_srvs__srv__SetString_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetString_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: std::string::String,

}



impl Default for SetString_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetString_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetString_Response {
  type RmwMsg = super::srv::rmw::SetString_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to std_srvs__srv__SetStringArray_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetStringArray_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub data: Vec<std::string::String>,

}



impl Default for SetStringArray_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetStringArray_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetStringArray_Request {
  type RmwMsg = super::srv::rmw::SetStringArray_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      data: msg.data
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
    }
  }
}


// Corresponds to std_srvs__srv__SetStringArray_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetStringArray_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: std::string::String,

}



impl Default for SetStringArray_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetStringArray_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetStringArray_Response {
  type RmwMsg = super::srv::rmw::SetStringArray_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to std_srvs__srv__SetStringArrayWithTitle_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetStringArrayWithTitle_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub title: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: Vec<std::string::String>,

}



impl Default for SetStringArrayWithTitle_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetStringArrayWithTitle_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetStringArrayWithTitle_Request {
  type RmwMsg = super::srv::rmw::SetStringArrayWithTitle_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        title: msg.title.as_str().into(),
        data: msg.data
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        title: msg.title.as_str().into(),
        data: msg.data
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      title: msg.title.to_string(),
      data: msg.data
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
    }
  }
}


// Corresponds to std_srvs__srv__SetStringArrayWithTitle_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetStringArrayWithTitle_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: std::string::String,

}



impl Default for SetStringArrayWithTitle_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetStringArrayWithTitle_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetStringArrayWithTitle_Response {
  type RmwMsg = super::srv::rmw::SetStringArrayWithTitle_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to std_srvs__srv__SetStringWithTitle_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetStringWithTitle_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub title: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: std::string::String,

}



impl Default for SetStringWithTitle_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetStringWithTitle_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetStringWithTitle_Request {
  type RmwMsg = super::srv::rmw::SetStringWithTitle_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        title: msg.title.as_str().into(),
        data: msg.data.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        title: msg.title.as_str().into(),
        data: msg.data.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      title: msg.title.to_string(),
      data: msg.data.to_string(),
    }
  }
}


// Corresponds to std_srvs__srv__SetStringWithTitle_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetStringWithTitle_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: std::string::String,

}



impl Default for SetStringWithTitle_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetStringWithTitle_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetStringWithTitle_Response {
  type RmwMsg = super::srv::rmw::SetStringWithTitle_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to std_srvs__srv__SetUint32_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetUint32_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub data: u32,

}



impl Default for SetUint32_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetUint32_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetUint32_Request {
  type RmwMsg = super::srv::rmw::SetUint32_Request;

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


// Corresponds to std_srvs__srv__SetUint32_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetUint32_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: std::string::String,

}



impl Default for SetUint32_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetUint32_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetUint32_Response {
  type RmwMsg = super::srv::rmw::SetUint32_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to std_srvs__srv__SetUint32Array_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetUint32Array_Request {
    /// array of data
    pub data: Vec<u32>,

}



impl Default for SetUint32Array_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetUint32Array_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetUint32Array_Request {
  type RmwMsg = super::srv::rmw::SetUint32Array_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      data: msg.data
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to std_srvs__srv__SetUint32Array_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetUint32Array_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: std::string::String,

}



impl Default for SetUint32Array_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetUint32Array_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetUint32Array_Response {
  type RmwMsg = super::srv::rmw::SetUint32Array_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to std_srvs__srv__SetUint32ArrayWithTitle_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetUint32ArrayWithTitle_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub title: std::string::String,

    /// array of data
    pub data: Vec<u32>,

}



impl Default for SetUint32ArrayWithTitle_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetUint32ArrayWithTitle_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetUint32ArrayWithTitle_Request {
  type RmwMsg = super::srv::rmw::SetUint32ArrayWithTitle_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        title: msg.title.as_str().into(),
        data: msg.data.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        title: msg.title.as_str().into(),
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      title: msg.title.to_string(),
      data: msg.data
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to std_srvs__srv__SetUint32ArrayWithTitle_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetUint32ArrayWithTitle_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: std::string::String,

}



impl Default for SetUint32ArrayWithTitle_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetUint32ArrayWithTitle_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetUint32ArrayWithTitle_Response {
  type RmwMsg = super::srv::rmw::SetUint32ArrayWithTitle_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to std_srvs__srv__SetUint32WithTitle_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetUint32WithTitle_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub title: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: u32,

}



impl Default for SetUint32WithTitle_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetUint32WithTitle_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetUint32WithTitle_Request {
  type RmwMsg = super::srv::rmw::SetUint32WithTitle_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        title: msg.title.as_str().into(),
        data: msg.data,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        title: msg.title.as_str().into(),
      data: msg.data,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      title: msg.title.to_string(),
      data: msg.data,
    }
  }
}


// Corresponds to std_srvs__srv__SetUint32WithTitle_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetUint32WithTitle_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: std::string::String,

}



impl Default for SetUint32WithTitle_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetUint32WithTitle_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetUint32WithTitle_Response {
  type RmwMsg = super::srv::rmw::SetUint32WithTitle_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to std_srvs__srv__SetUint8_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetUint8_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub data: u8,

}



impl Default for SetUint8_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetUint8_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetUint8_Request {
  type RmwMsg = super::srv::rmw::SetUint8_Request;

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


// Corresponds to std_srvs__srv__SetUint8_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetUint8_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: std::string::String,

}



impl Default for SetUint8_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetUint8_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetUint8_Response {
  type RmwMsg = super::srv::rmw::SetUint8_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to std_srvs__srv__SetUint8Array_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetUint8Array_Request {
    /// array of data
    pub data: Vec<u8>,

}



impl Default for SetUint8Array_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetUint8Array_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetUint8Array_Request {
  type RmwMsg = super::srv::rmw::SetUint8Array_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      data: msg.data
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to std_srvs__srv__SetUint8Array_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetUint8Array_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: std::string::String,

}



impl Default for SetUint8Array_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetUint8Array_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetUint8Array_Response {
  type RmwMsg = super::srv::rmw::SetUint8Array_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to std_srvs__srv__SetUint8ArrayWithTitle_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetUint8ArrayWithTitle_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub title: std::string::String,

    /// array of data
    pub data: Vec<u8>,

}



impl Default for SetUint8ArrayWithTitle_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetUint8ArrayWithTitle_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetUint8ArrayWithTitle_Request {
  type RmwMsg = super::srv::rmw::SetUint8ArrayWithTitle_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        title: msg.title.as_str().into(),
        data: msg.data.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        title: msg.title.as_str().into(),
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      title: msg.title.to_string(),
      data: msg.data
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to std_srvs__srv__SetUint8ArrayWithTitle_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetUint8ArrayWithTitle_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: std::string::String,

}



impl Default for SetUint8ArrayWithTitle_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetUint8ArrayWithTitle_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetUint8ArrayWithTitle_Response {
  type RmwMsg = super::srv::rmw::SetUint8ArrayWithTitle_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to std_srvs__srv__SetUint8WithTitle_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetUint8WithTitle_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub title: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: u8,

}



impl Default for SetUint8WithTitle_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetUint8WithTitle_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetUint8WithTitle_Request {
  type RmwMsg = super::srv::rmw::SetUint8WithTitle_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        title: msg.title.as_str().into(),
        data: msg.data,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        title: msg.title.as_str().into(),
      data: msg.data,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      title: msg.title.to_string(),
      data: msg.data,
    }
  }
}


// Corresponds to std_srvs__srv__SetUint8WithTitle_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetUint8WithTitle_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: std::string::String,

}



impl Default for SetUint8WithTitle_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetUint8WithTitle_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetUint8WithTitle_Response {
  type RmwMsg = super::srv::rmw::SetUint8WithTitle_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to std_srvs__srv__Trigger_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Trigger_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for Trigger_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::Trigger_Request::default())
  }
}

impl rosidl_runtime_rs::Message for Trigger_Request {
  type RmwMsg = super::srv::rmw::Trigger_Request;

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


// Corresponds to std_srvs__srv__Trigger_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Trigger_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: std::string::String,

}



impl Default for Trigger_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::Trigger_Response::default())
  }
}

impl rosidl_runtime_rs::Message for Trigger_Response {
  type RmwMsg = super::srv::rmw::Trigger_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
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


