# generated from rosidl_generator_py/resource/_idl.py.em
# with input from std_srvs:srv/SetUint8ArrayWithTitle.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'data'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetUint8ArrayWithTitle_Request(type):
    """Metaclass of message 'SetUint8ArrayWithTitle_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('std_srvs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'std_srvs.srv.SetUint8ArrayWithTitle_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_uint8_array_with_title__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_uint8_array_with_title__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_uint8_array_with_title__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_uint8_array_with_title__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_uint8_array_with_title__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetUint8ArrayWithTitle_Request(metaclass=Metaclass_SetUint8ArrayWithTitle_Request):
    """Message class 'SetUint8ArrayWithTitle_Request'."""

    __slots__ = [
        '_title',
        '_data',
    ]

    _fields_and_field_types = {
        'title': 'string',
        'data': 'sequence<uint8>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.title = kwargs.get('title', str())
        self.data = array.array('B', kwargs.get('data', []))

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.title != other.title:
            return False
        if self.data != other.data:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def title(self):
        """Message field 'title'."""
        return self._title

    @title.setter
    def title(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'title' field must be of type 'str'"
        self._title = value

    @builtins.property
    def data(self):
        """Message field 'data'."""
        return self._data

    @data.setter
    def data(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'data' array.array() must have the type code of 'B'"
            self._data = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'data' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._data = array.array('B', value)


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetUint8ArrayWithTitle_Response(type):
    """Metaclass of message 'SetUint8ArrayWithTitle_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('std_srvs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'std_srvs.srv.SetUint8ArrayWithTitle_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_uint8_array_with_title__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_uint8_array_with_title__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_uint8_array_with_title__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_uint8_array_with_title__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_uint8_array_with_title__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetUint8ArrayWithTitle_Response(metaclass=Metaclass_SetUint8ArrayWithTitle_Response):
    """Message class 'SetUint8ArrayWithTitle_Response'."""

    __slots__ = [
        '_success',
        '_message',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.message = kwargs.get('message', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.success != other.success:
            return False
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value


class Metaclass_SetUint8ArrayWithTitle(type):
    """Metaclass of service 'SetUint8ArrayWithTitle'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('std_srvs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'std_srvs.srv.SetUint8ArrayWithTitle')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_uint8_array_with_title

            from std_srvs.srv import _set_uint8_array_with_title
            if _set_uint8_array_with_title.Metaclass_SetUint8ArrayWithTitle_Request._TYPE_SUPPORT is None:
                _set_uint8_array_with_title.Metaclass_SetUint8ArrayWithTitle_Request.__import_type_support__()
            if _set_uint8_array_with_title.Metaclass_SetUint8ArrayWithTitle_Response._TYPE_SUPPORT is None:
                _set_uint8_array_with_title.Metaclass_SetUint8ArrayWithTitle_Response.__import_type_support__()


class SetUint8ArrayWithTitle(metaclass=Metaclass_SetUint8ArrayWithTitle):
    from std_srvs.srv._set_uint8_array_with_title import SetUint8ArrayWithTitle_Request as Request
    from std_srvs.srv._set_uint8_array_with_title import SetUint8ArrayWithTitle_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
