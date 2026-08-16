# generated from rosidl_generator_py/resource/_idl.py.em
# with input from limx_arm_msgs:srv/motion.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'left_arm_pos'
# Member 'right_arm_pos'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_motion_Request(type):
    """Metaclass of message 'motion_Request'."""

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
                'limx_arm_msgs.srv.motion_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__motion__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__motion__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__motion__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__motion__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__motion__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class motion_Request(metaclass=Metaclass_motion_Request):
    """Message class 'motion_Request'."""

    __slots__ = [
        '_left_arm_pos',
        '_right_arm_pos',
        '_duration_time',
    ]

    _fields_and_field_types = {
        'left_arm_pos': 'float[7]',
        'right_arm_pos': 'float[7]',
        'duration_time': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 7),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 7),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        if 'left_arm_pos' not in kwargs:
            self.left_arm_pos = numpy.zeros(7, dtype=numpy.float32)
        else:
            self.left_arm_pos = kwargs.get('left_arm_pos')
        if 'right_arm_pos' not in kwargs:
            self.right_arm_pos = numpy.zeros(7, dtype=numpy.float32)
        else:
            self.right_arm_pos = kwargs.get('right_arm_pos')
        self.duration_time = kwargs.get('duration_time', float())

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
        if any(self.left_arm_pos != other.left_arm_pos):
            return False
        if any(self.right_arm_pos != other.right_arm_pos):
            return False
        if self.duration_time != other.duration_time:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def left_arm_pos(self):
        """Message field 'left_arm_pos'."""
        return self._left_arm_pos

    @left_arm_pos.setter
    def left_arm_pos(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'left_arm_pos' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 7, \
                "The 'left_arm_pos' numpy.ndarray() must have a size of 7"
            self._left_arm_pos = value
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
                 len(value) == 7 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'left_arm_pos' field must be a set or sequence with length 7 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._left_arm_pos = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def right_arm_pos(self):
        """Message field 'right_arm_pos'."""
        return self._right_arm_pos

    @right_arm_pos.setter
    def right_arm_pos(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'right_arm_pos' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 7, \
                "The 'right_arm_pos' numpy.ndarray() must have a size of 7"
            self._right_arm_pos = value
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
                 len(value) == 7 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'right_arm_pos' field must be a set or sequence with length 7 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._right_arm_pos = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def duration_time(self):
        """Message field 'duration_time'."""
        return self._duration_time

    @duration_time.setter
    def duration_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'duration_time' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'duration_time' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._duration_time = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_motion_Response(type):
    """Metaclass of message 'motion_Response'."""

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
                'limx_arm_msgs.srv.motion_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__motion__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__motion__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__motion__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__motion__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__motion__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class motion_Response(metaclass=Metaclass_motion_Response):
    """Message class 'motion_Response'."""

    __slots__ = [
        '_status',
    ]

    _fields_and_field_types = {
        'status': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())

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
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'status' field must be an integer in [-2147483648, 2147483647]"
        self._status = value


class Metaclass_motion(type):
    """Metaclass of service 'motion'."""

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
                'limx_arm_msgs.srv.motion')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__motion

            from limx_arm_msgs.srv import _motion
            if _motion.Metaclass_motion_Request._TYPE_SUPPORT is None:
                _motion.Metaclass_motion_Request.__import_type_support__()
            if _motion.Metaclass_motion_Response._TYPE_SUPPORT is None:
                _motion.Metaclass_motion_Response.__import_type_support__()


class motion(metaclass=Metaclass_motion):
    from limx_arm_msgs.srv._motion import motion_Request as Request
    from limx_arm_msgs.srv._motion import motion_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
