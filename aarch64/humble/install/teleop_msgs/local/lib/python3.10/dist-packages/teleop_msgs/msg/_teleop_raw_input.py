# generated from rosidl_generator_py/resource/_idl.py.em
# with input from teleop_msgs:msg/TeleopRawInput.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'left_stick'
# Member 'right_stick'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TeleopRawInput(type):
    """Metaclass of message 'TeleopRawInput'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'BTN_LEFT_X': 1,
        'BTN_LEFT_Y': 2,
        'BTN_RIGHT_A': 4,
        'BTN_RIGHT_B': 8,
        'BTN_LEFT_STICK': 16,
        'BTN_RIGHT_STICK': 32,
        'BTN_LEFT_GRIP': 64,
        'BTN_RIGHT_GRIP': 128,
        'BTN_LEFT_TRIGGER': 256,
        'BTN_RIGHT_TRIGGER': 512,
        'BTN_LEFT_THUMBREST': 1024,
        'BTN_RIGHT_THUMBREST': 2048,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('teleop_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'teleop_msgs.msg.TeleopRawInput')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__teleop_raw_input
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__teleop_raw_input
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__teleop_raw_input
            cls._TYPE_SUPPORT = module.type_support_msg__msg__teleop_raw_input
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__teleop_raw_input

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'BTN_LEFT_X': cls.__constants['BTN_LEFT_X'],
            'BTN_LEFT_Y': cls.__constants['BTN_LEFT_Y'],
            'BTN_RIGHT_A': cls.__constants['BTN_RIGHT_A'],
            'BTN_RIGHT_B': cls.__constants['BTN_RIGHT_B'],
            'BTN_LEFT_STICK': cls.__constants['BTN_LEFT_STICK'],
            'BTN_RIGHT_STICK': cls.__constants['BTN_RIGHT_STICK'],
            'BTN_LEFT_GRIP': cls.__constants['BTN_LEFT_GRIP'],
            'BTN_RIGHT_GRIP': cls.__constants['BTN_RIGHT_GRIP'],
            'BTN_LEFT_TRIGGER': cls.__constants['BTN_LEFT_TRIGGER'],
            'BTN_RIGHT_TRIGGER': cls.__constants['BTN_RIGHT_TRIGGER'],
            'BTN_LEFT_THUMBREST': cls.__constants['BTN_LEFT_THUMBREST'],
            'BTN_RIGHT_THUMBREST': cls.__constants['BTN_RIGHT_THUMBREST'],
        }

    @property
    def BTN_LEFT_X(self):
        """Message constant 'BTN_LEFT_X'."""
        return Metaclass_TeleopRawInput.__constants['BTN_LEFT_X']

    @property
    def BTN_LEFT_Y(self):
        """Message constant 'BTN_LEFT_Y'."""
        return Metaclass_TeleopRawInput.__constants['BTN_LEFT_Y']

    @property
    def BTN_RIGHT_A(self):
        """Message constant 'BTN_RIGHT_A'."""
        return Metaclass_TeleopRawInput.__constants['BTN_RIGHT_A']

    @property
    def BTN_RIGHT_B(self):
        """Message constant 'BTN_RIGHT_B'."""
        return Metaclass_TeleopRawInput.__constants['BTN_RIGHT_B']

    @property
    def BTN_LEFT_STICK(self):
        """Message constant 'BTN_LEFT_STICK'."""
        return Metaclass_TeleopRawInput.__constants['BTN_LEFT_STICK']

    @property
    def BTN_RIGHT_STICK(self):
        """Message constant 'BTN_RIGHT_STICK'."""
        return Metaclass_TeleopRawInput.__constants['BTN_RIGHT_STICK']

    @property
    def BTN_LEFT_GRIP(self):
        """Message constant 'BTN_LEFT_GRIP'."""
        return Metaclass_TeleopRawInput.__constants['BTN_LEFT_GRIP']

    @property
    def BTN_RIGHT_GRIP(self):
        """Message constant 'BTN_RIGHT_GRIP'."""
        return Metaclass_TeleopRawInput.__constants['BTN_RIGHT_GRIP']

    @property
    def BTN_LEFT_TRIGGER(self):
        """Message constant 'BTN_LEFT_TRIGGER'."""
        return Metaclass_TeleopRawInput.__constants['BTN_LEFT_TRIGGER']

    @property
    def BTN_RIGHT_TRIGGER(self):
        """Message constant 'BTN_RIGHT_TRIGGER'."""
        return Metaclass_TeleopRawInput.__constants['BTN_RIGHT_TRIGGER']

    @property
    def BTN_LEFT_THUMBREST(self):
        """Message constant 'BTN_LEFT_THUMBREST'."""
        return Metaclass_TeleopRawInput.__constants['BTN_LEFT_THUMBREST']

    @property
    def BTN_RIGHT_THUMBREST(self):
        """Message constant 'BTN_RIGHT_THUMBREST'."""
        return Metaclass_TeleopRawInput.__constants['BTN_RIGHT_THUMBREST']


class TeleopRawInput(metaclass=Metaclass_TeleopRawInput):
    """
    Message class 'TeleopRawInput'.

    Constants:
      BTN_LEFT_X
      BTN_LEFT_Y
      BTN_RIGHT_A
      BTN_RIGHT_B
      BTN_LEFT_STICK
      BTN_RIGHT_STICK
      BTN_LEFT_GRIP
      BTN_RIGHT_GRIP
      BTN_LEFT_TRIGGER
      BTN_RIGHT_TRIGGER
      BTN_LEFT_THUMBREST
      BTN_RIGHT_THUMBREST
    """

    __slots__ = [
        '_left_trigger',
        '_right_trigger',
        '_left_grip',
        '_right_grip',
        '_left_stick',
        '_right_stick',
        '_buttons',
        '_buttons_valid',
    ]

    _fields_and_field_types = {
        'left_trigger': 'float',
        'right_trigger': 'float',
        'left_grip': 'float',
        'right_grip': 'float',
        'left_stick': 'float[2]',
        'right_stick': 'float[2]',
        'buttons': 'uint32',
        'buttons_valid': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 2),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 2),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.left_trigger = kwargs.get('left_trigger', float())
        self.right_trigger = kwargs.get('right_trigger', float())
        self.left_grip = kwargs.get('left_grip', float())
        self.right_grip = kwargs.get('right_grip', float())
        if 'left_stick' not in kwargs:
            self.left_stick = numpy.zeros(2, dtype=numpy.float32)
        else:
            self.left_stick = kwargs.get('left_stick')
        if 'right_stick' not in kwargs:
            self.right_stick = numpy.zeros(2, dtype=numpy.float32)
        else:
            self.right_stick = kwargs.get('right_stick')
        self.buttons = kwargs.get('buttons', int())
        self.buttons_valid = kwargs.get('buttons_valid', int())

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
        if self.left_trigger != other.left_trigger:
            return False
        if self.right_trigger != other.right_trigger:
            return False
        if self.left_grip != other.left_grip:
            return False
        if self.right_grip != other.right_grip:
            return False
        if any(self.left_stick != other.left_stick):
            return False
        if any(self.right_stick != other.right_stick):
            return False
        if self.buttons != other.buttons:
            return False
        if self.buttons_valid != other.buttons_valid:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def left_trigger(self):
        """Message field 'left_trigger'."""
        return self._left_trigger

    @left_trigger.setter
    def left_trigger(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'left_trigger' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'left_trigger' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._left_trigger = value

    @builtins.property
    def right_trigger(self):
        """Message field 'right_trigger'."""
        return self._right_trigger

    @right_trigger.setter
    def right_trigger(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'right_trigger' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'right_trigger' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._right_trigger = value

    @builtins.property
    def left_grip(self):
        """Message field 'left_grip'."""
        return self._left_grip

    @left_grip.setter
    def left_grip(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'left_grip' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'left_grip' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._left_grip = value

    @builtins.property
    def right_grip(self):
        """Message field 'right_grip'."""
        return self._right_grip

    @right_grip.setter
    def right_grip(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'right_grip' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'right_grip' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._right_grip = value

    @builtins.property
    def left_stick(self):
        """Message field 'left_stick'."""
        return self._left_stick

    @left_stick.setter
    def left_stick(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'left_stick' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 2, \
                "The 'left_stick' numpy.ndarray() must have a size of 2"
            self._left_stick = value
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
                "The 'left_stick' field must be a set or sequence with length 2 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._left_stick = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def right_stick(self):
        """Message field 'right_stick'."""
        return self._right_stick

    @right_stick.setter
    def right_stick(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'right_stick' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 2, \
                "The 'right_stick' numpy.ndarray() must have a size of 2"
            self._right_stick = value
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
                "The 'right_stick' field must be a set or sequence with length 2 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._right_stick = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def buttons(self):
        """Message field 'buttons'."""
        return self._buttons

    @buttons.setter
    def buttons(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'buttons' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'buttons' field must be an unsigned integer in [0, 4294967295]"
        self._buttons = value

    @builtins.property
    def buttons_valid(self):
        """Message field 'buttons_valid'."""
        return self._buttons_valid

    @buttons_valid.setter
    def buttons_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'buttons_valid' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'buttons_valid' field must be an unsigned integer in [0, 4294967295]"
        self._buttons_valid = value
