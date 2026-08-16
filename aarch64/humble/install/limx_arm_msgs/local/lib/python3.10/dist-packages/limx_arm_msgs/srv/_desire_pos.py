# generated from rosidl_generator_py/resource/_idl.py.em
# with input from limx_arm_msgs:srv/desire_pos.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'desire_pos'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_desire_pos_Request(type):
    """Metaclass of message 'desire_pos_Request'."""

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
            module = import_type_support('limx_arm_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'limx_arm_msgs.srv.desire_pos_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__desire_pos__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__desire_pos__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__desire_pos__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__desire_pos__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__desire_pos__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class desire_pos_Request(metaclass=Metaclass_desire_pos_Request):
    """Message class 'desire_pos_Request'."""

    __slots__ = [
        '_taskNum',
        '_desire_pos',
        '_co_control',
    ]

    _fields_and_field_types = {
        'taskNum': 'int32',
        'desire_pos': 'float[6]',
        'co_control': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 6),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.taskNum = kwargs.get('taskNum', int())
        if 'desire_pos' not in kwargs:
            self.desire_pos = numpy.zeros(6, dtype=numpy.float32)
        else:
            self.desire_pos = kwargs.get('desire_pos')
        self.co_control = kwargs.get('co_control', bool())

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
        if self.taskNum != other.taskNum:
            return False
        if any(self.desire_pos != other.desire_pos):
            return False
        if self.co_control != other.co_control:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def taskNum(self):
        """Message field 'taskNum'."""
        return self._taskNum

    @taskNum.setter
    def taskNum(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'taskNum' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'taskNum' field must be an integer in [-2147483648, 2147483647]"
        self._taskNum = value

    @builtins.property
    def desire_pos(self):
        """Message field 'desire_pos'."""
        return self._desire_pos

    @desire_pos.setter
    def desire_pos(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'desire_pos' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 6, \
                "The 'desire_pos' numpy.ndarray() must have a size of 6"
            self._desire_pos = value
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
                 len(value) == 6 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'desire_pos' field must be a set or sequence with length 6 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._desire_pos = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def co_control(self):
        """Message field 'co_control'."""
        return self._co_control

    @co_control.setter
    def co_control(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'co_control' field must be of type 'bool'"
        self._co_control = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_desire_pos_Response(type):
    """Metaclass of message 'desire_pos_Response'."""

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
            module = import_type_support('limx_arm_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'limx_arm_msgs.srv.desire_pos_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__desire_pos__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__desire_pos__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__desire_pos__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__desire_pos__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__desire_pos__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class desire_pos_Response(metaclass=Metaclass_desire_pos_Response):
    """Message class 'desire_pos_Response'."""

    __slots__ = [
        '_status',
    ]

    _fields_and_field_types = {
        'status': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', bool())

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
        if self.status != other.status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'status' field must be of type 'bool'"
        self._status = value


class Metaclass_desire_pos(type):
    """Metaclass of service 'desire_pos'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('limx_arm_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'limx_arm_msgs.srv.desire_pos')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__desire_pos

            from limx_arm_msgs.srv import _desire_pos
            if _desire_pos.Metaclass_desire_pos_Request._TYPE_SUPPORT is None:
                _desire_pos.Metaclass_desire_pos_Request.__import_type_support__()
            if _desire_pos.Metaclass_desire_pos_Response._TYPE_SUPPORT is None:
                _desire_pos.Metaclass_desire_pos_Response.__import_type_support__()


class desire_pos(metaclass=Metaclass_desire_pos):
    from limx_arm_msgs.srv._desire_pos import desire_pos_Request as Request
    from limx_arm_msgs.srv._desire_pos import desire_pos_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
