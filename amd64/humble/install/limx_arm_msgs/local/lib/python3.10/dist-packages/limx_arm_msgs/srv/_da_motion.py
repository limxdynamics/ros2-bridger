# generated from rosidl_generator_py/resource/_idl.py.em
# with input from limx_arm_msgs:srv/DA_motion.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'left_arm_pos'
# Member 'right_arm_pos'
# Member 'left_arm_joints'
# Member 'right_arm_joints'
# Member 'headPos'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DA_motion_Request(type):
    """Metaclass of message 'DA_motion_Request'."""

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
                'limx_arm_msgs.srv.DA_motion_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__da_motion__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__da_motion__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__da_motion__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__da_motion__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__da_motion__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DA_motion_Request(metaclass=Metaclass_DA_motion_Request):
    """Message class 'DA_motion_Request'."""

    __slots__ = [
        '_functionName',
        '_left_arm_pos',
        '_right_arm_pos',
        '_speed',
        '_left_arm_joints',
        '_right_arm_joints',
        '_headPos',
    ]

    _fields_and_field_types = {
        'functionName': 'string',
        'left_arm_pos': 'float[7]',
        'right_arm_pos': 'float[7]',
        'speed': 'float',
        'left_arm_joints': 'float[7]',
        'right_arm_joints': 'float[7]',
        'headPos': 'float[2]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 7),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 7),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 7),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 7),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 2),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.functionName = kwargs.get('functionName', str())
        if 'left_arm_pos' not in kwargs:
            self.left_arm_pos = numpy.zeros(7, dtype=numpy.float32)
        else:
            self.left_arm_pos = kwargs.get('left_arm_pos')
        if 'right_arm_pos' not in kwargs:
            self.right_arm_pos = numpy.zeros(7, dtype=numpy.float32)
        else:
            self.right_arm_pos = kwargs.get('right_arm_pos')
        self.speed = kwargs.get('speed', float())
        if 'left_arm_joints' not in kwargs:
            self.left_arm_joints = numpy.zeros(7, dtype=numpy.float32)
        else:
            self.left_arm_joints = kwargs.get('left_arm_joints')
        if 'right_arm_joints' not in kwargs:
            self.right_arm_joints = numpy.zeros(7, dtype=numpy.float32)
        else:
            self.right_arm_joints = kwargs.get('right_arm_joints')
        if 'headPos' not in kwargs:
            self.headPos = numpy.zeros(2, dtype=numpy.float32)
        else:
            self.headPos = kwargs.get('headPos')

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
        if self.functionName != other.functionName:
            return False
        if any(self.left_arm_pos != other.left_arm_pos):
            return False
        if any(self.right_arm_pos != other.right_arm_pos):
            return False
        if self.speed != other.speed:
            return False
        if any(self.left_arm_joints != other.left_arm_joints):
            return False
        if any(self.right_arm_joints != other.right_arm_joints):
            return False
        if any(self.headPos != other.headPos):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def functionName(self):
        """Message field 'functionName'."""
        return self._functionName

    @functionName.setter
    def functionName(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'functionName' field must be of type 'str'"
        self._functionName = value

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
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._speed = value

    @builtins.property
    def left_arm_joints(self):
        """Message field 'left_arm_joints'."""
        return self._left_arm_joints

    @left_arm_joints.setter
    def left_arm_joints(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'left_arm_joints' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 7, \
                "The 'left_arm_joints' numpy.ndarray() must have a size of 7"
            self._left_arm_joints = value
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
                "The 'left_arm_joints' field must be a set or sequence with length 7 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._left_arm_joints = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def right_arm_joints(self):
        """Message field 'right_arm_joints'."""
        return self._right_arm_joints

    @right_arm_joints.setter
    def right_arm_joints(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'right_arm_joints' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 7, \
                "The 'right_arm_joints' numpy.ndarray() must have a size of 7"
            self._right_arm_joints = value
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
                "The 'right_arm_joints' field must be a set or sequence with length 7 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._right_arm_joints = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def headPos(self):
        """Message field 'headPos'."""
        return self._headPos

    @headPos.setter
    def headPos(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'headPos' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 2, \
                "The 'headPos' numpy.ndarray() must have a size of 2"
            self._headPos = value
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
                 len(value) == 2 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'headPos' field must be a set or sequence with length 2 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._headPos = numpy.array(value, dtype=numpy.float32)


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_DA_motion_Response(type):
    """Metaclass of message 'DA_motion_Response'."""

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
                'limx_arm_msgs.srv.DA_motion_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__da_motion__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__da_motion__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__da_motion__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__da_motion__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__da_motion__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DA_motion_Response(metaclass=Metaclass_DA_motion_Response):
    """Message class 'DA_motion_Response'."""

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


class Metaclass_DA_motion(type):
    """Metaclass of service 'DA_motion'."""

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
                'limx_arm_msgs.srv.DA_motion')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__da_motion

            from limx_arm_msgs.srv import _da_motion
            if _da_motion.Metaclass_DA_motion_Request._TYPE_SUPPORT is None:
                _da_motion.Metaclass_DA_motion_Request.__import_type_support__()
            if _da_motion.Metaclass_DA_motion_Response._TYPE_SUPPORT is None:
                _da_motion.Metaclass_DA_motion_Response.__import_type_support__()


class DA_motion(metaclass=Metaclass_DA_motion):
    from limx_arm_msgs.srv._da_motion import DA_motion_Request as Request
    from limx_arm_msgs.srv._da_motion import DA_motion_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
