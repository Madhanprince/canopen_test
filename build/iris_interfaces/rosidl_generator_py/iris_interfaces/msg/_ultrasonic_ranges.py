# generated from rosidl_generator_py/resource/_idl.py.em
# with input from iris_interfaces:msg/UltrasonicRanges.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_UltrasonicRanges(type):
    """Metaclass of message 'UltrasonicRanges'."""

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
            module = import_type_support('iris_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'iris_interfaces.msg.UltrasonicRanges')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ultrasonic_ranges
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ultrasonic_ranges
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ultrasonic_ranges
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ultrasonic_ranges
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ultrasonic_ranges

            from sensor_msgs.msg import Range
            if Range.__class__._TYPE_SUPPORT is None:
                Range.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class UltrasonicRanges(metaclass=Metaclass_UltrasonicRanges):
    """Message class 'UltrasonicRanges'."""

    __slots__ = [
        '_ultrasonic_1',
        '_ultrasonic_2',
        '_ultrasonic_3',
        '_ultrasonic_4',
    ]

    _fields_and_field_types = {
        'ultrasonic_1': 'sensor_msgs/Range',
        'ultrasonic_2': 'sensor_msgs/Range',
        'ultrasonic_3': 'sensor_msgs/Range',
        'ultrasonic_4': 'sensor_msgs/Range',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'Range'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'Range'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'Range'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'Range'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from sensor_msgs.msg import Range
        self.ultrasonic_1 = kwargs.get('ultrasonic_1', Range())
        from sensor_msgs.msg import Range
        self.ultrasonic_2 = kwargs.get('ultrasonic_2', Range())
        from sensor_msgs.msg import Range
        self.ultrasonic_3 = kwargs.get('ultrasonic_3', Range())
        from sensor_msgs.msg import Range
        self.ultrasonic_4 = kwargs.get('ultrasonic_4', Range())

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
        if self.ultrasonic_1 != other.ultrasonic_1:
            return False
        if self.ultrasonic_2 != other.ultrasonic_2:
            return False
        if self.ultrasonic_3 != other.ultrasonic_3:
            return False
        if self.ultrasonic_4 != other.ultrasonic_4:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def ultrasonic_1(self):
        """Message field 'ultrasonic_1'."""
        return self._ultrasonic_1

    @ultrasonic_1.setter
    def ultrasonic_1(self, value):
        if __debug__:
            from sensor_msgs.msg import Range
            assert \
                isinstance(value, Range), \
                "The 'ultrasonic_1' field must be a sub message of type 'Range'"
        self._ultrasonic_1 = value

    @builtins.property
    def ultrasonic_2(self):
        """Message field 'ultrasonic_2'."""
        return self._ultrasonic_2

    @ultrasonic_2.setter
    def ultrasonic_2(self, value):
        if __debug__:
            from sensor_msgs.msg import Range
            assert \
                isinstance(value, Range), \
                "The 'ultrasonic_2' field must be a sub message of type 'Range'"
        self._ultrasonic_2 = value

    @builtins.property
    def ultrasonic_3(self):
        """Message field 'ultrasonic_3'."""
        return self._ultrasonic_3

    @ultrasonic_3.setter
    def ultrasonic_3(self, value):
        if __debug__:
            from sensor_msgs.msg import Range
            assert \
                isinstance(value, Range), \
                "The 'ultrasonic_3' field must be a sub message of type 'Range'"
        self._ultrasonic_3 = value

    @builtins.property
    def ultrasonic_4(self):
        """Message field 'ultrasonic_4'."""
        return self._ultrasonic_4

    @ultrasonic_4.setter
    def ultrasonic_4(self, value):
        if __debug__:
            from sensor_msgs.msg import Range
            assert \
                isinstance(value, Range), \
                "The 'ultrasonic_4' field must be a sub message of type 'Range'"
        self._ultrasonic_4 = value
