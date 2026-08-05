# generated from rosidl_generator_py/resource/_idl.py.em
# with input from limx_arm_msgs:msg/arm_status.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'left_joints'
# Member 'right_joints'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'left_endEffector'
# Member 'right_endEffector'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_arm_status(type):
    """Metaclass of message 'arm_status'."""

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
                'limx_arm_msgs.msg.arm_status')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__arm_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__arm_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__arm_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__arm_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__arm_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class arm_status(metaclass=Metaclass_arm_status):
    """Message class 'arm_status'."""

    __slots__ = [
        '_left_joints',
        '_right_joints',
        '_left_endEffector',
        '_right_endEffector',
        '_ik_statu',
    ]

    _fields_and_field_types = {
        'left_joints': 'sequence<double>',
        'right_joints': 'sequence<double>',
        'left_endEffector': 'double[7]',
        'right_endEffector': 'double[7]',
        'ik_statu': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 7),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 7),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.left_joints = array.array('d', kwargs.get('left_joints', []))
        self.right_joints = array.array('d', kwargs.get('right_joints', []))
        if 'left_endEffector' not in kwargs:
            self.left_endEffector = numpy.zeros(7, dtype=numpy.float64)
        else:
            self.left_endEffector = kwargs.get('left_endEffector')
        if 'right_endEffector' not in kwargs:
            self.right_endEffector = numpy.zeros(7, dtype=numpy.float64)
        else:
            self.right_endEffector = kwargs.get('right_endEffector')
        self.ik_statu = kwargs.get('ik_statu', int())

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
        if self.left_joints != other.left_joints:
            return False
        if self.right_joints != other.right_joints:
            return False
        if any(self.left_endEffector != other.left_endEffector):
            return False
        if any(self.right_endEffector != other.right_endEffector):
            return False
        if self.ik_statu != other.ik_statu:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def left_joints(self):
        """Message field 'left_joints'."""
        return self._left_joints

    @left_joints.setter
    def left_joints(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'left_joints' array.array() must have the type code of 'd'"
            self._left_joints = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'left_joints' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._left_joints = array.array('d', value)

    @builtins.property
    def right_joints(self):
        """Message field 'right_joints'."""
        return self._right_joints

    @right_joints.setter
    def right_joints(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'right_joints' array.array() must have the type code of 'd'"
            self._right_joints = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'right_joints' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._right_joints = array.array('d', value)

    @builtins.property
    def left_endEffector(self):
        """Message field 'left_endEffector'."""
        return self._left_endEffector

    @left_endEffector.setter
    def left_endEffector(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'left_endEffector' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 7, \
                "The 'left_endEffector' numpy.ndarray() must have a size of 7"
            self._left_endEffector = value
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
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'left_endEffector' field must be a set or sequence with length 7 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._left_endEffector = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def right_endEffector(self):
        """Message field 'right_endEffector'."""
        return self._right_endEffector

    @right_endEffector.setter
    def right_endEffector(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'right_endEffector' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 7, \
                "The 'right_endEffector' numpy.ndarray() must have a size of 7"
            self._right_endEffector = value
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
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'right_endEffector' field must be a set or sequence with length 7 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._right_endEffector = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def ik_statu(self):
        """Message field 'ik_statu'."""
        return self._ik_statu

    @ik_statu.setter
    def ik_statu(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ik_statu' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'ik_statu' field must be an integer in [-2147483648, 2147483647]"
        self._ik_statu = value
