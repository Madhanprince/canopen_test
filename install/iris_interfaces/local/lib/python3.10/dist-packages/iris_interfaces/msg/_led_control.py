# generated from rosidl_generator_py/resource/_idl.py.em
# with input from iris_interfaces:msg/LedControl.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LedControl(type):
    """Metaclass of message 'LedControl'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'OFF': 0,
        'BOOTUP_WAIT': 1,
        'STANDY': 2,
        'RUNNING': 3,
        'ERROR': 4,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('iris_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'iris_interfaces.msg.LedControl')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__led_control
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__led_control
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__led_control
            cls._TYPE_SUPPORT = module.type_support_msg__msg__led_control
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__led_control

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'OFF': cls.__constants['OFF'],
            'BOOTUP_WAIT': cls.__constants['BOOTUP_WAIT'],
            'STANDY': cls.__constants['STANDY'],
            'RUNNING': cls.__constants['RUNNING'],
            'ERROR': cls.__constants['ERROR'],
        }

    @property
    def OFF(self):
        """Message constant 'OFF'."""
        return Metaclass_LedControl.__constants['OFF']

    @property
    def BOOTUP_WAIT(self):
        """Message constant 'BOOTUP_WAIT'."""
        return Metaclass_LedControl.__constants['BOOTUP_WAIT']

    @property
    def STANDY(self):
        """Message constant 'STANDY'."""
        return Metaclass_LedControl.__constants['STANDY']

    @property
    def RUNNING(self):
        """Message constant 'RUNNING'."""
        return Metaclass_LedControl.__constants['RUNNING']

    @property
    def ERROR(self):
        """Message constant 'ERROR'."""
        return Metaclass_LedControl.__constants['ERROR']


class LedControl(metaclass=Metaclass_LedControl):
    """
    Message class 'LedControl'.

    Constants:
      OFF
      BOOTUP_WAIT
      STANDY
      RUNNING
      ERROR
    """

    __slots__ = [
        '_led_command',
        '_left_indicator',
        '_right_indicator',
    ]

    _fields_and_field_types = {
        'led_command': 'uint8',
        'left_indicator': 'uint8',
        'right_indicator': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.led_command = kwargs.get('led_command', int())
        self.left_indicator = kwargs.get('left_indicator', int())
        self.right_indicator = kwargs.get('right_indicator', int())

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
        if self.led_command != other.led_command:
            return False
        if self.left_indicator != other.left_indicator:
            return False
        if self.right_indicator != other.right_indicator:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def led_command(self):
        """Message field 'led_command'."""
        return self._led_command

    @led_command.setter
    def led_command(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'led_command' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'led_command' field must be an unsigned integer in [0, 255]"
        self._led_command = value

    @builtins.property
    def left_indicator(self):
        """Message field 'left_indicator'."""
        return self._left_indicator

    @left_indicator.setter
    def left_indicator(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'left_indicator' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'left_indicator' field must be an unsigned integer in [0, 255]"
        self._left_indicator = value

    @builtins.property
    def right_indicator(self):
        """Message field 'right_indicator'."""
        return self._right_indicator

    @right_indicator.setter
    def right_indicator(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'right_indicator' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'right_indicator' field must be an unsigned integer in [0, 255]"
        self._right_indicator = value
