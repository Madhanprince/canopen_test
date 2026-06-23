# generated from rosidl_generator_py/resource/_idl.py.em
# with input from iris_interfaces:msg/MotorStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MotorStatus(type):
    """Metaclass of message 'MotorStatus'."""

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
                'iris_interfaces.msg.MotorStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__motor_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__motor_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__motor_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__motor_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__motor_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MotorStatus(metaclass=Metaclass_MotorStatus):
    """Message class 'MotorStatus'."""

    __slots__ = [
        '_brake_state',
        '_motor_voltage',
        '_motor_current',
        '_demand_rpm',
        '_actual_rpm',
        '_overload_percentage',
    ]

    _fields_and_field_types = {
        'brake_state': 'string',
        'motor_voltage': 'float',
        'motor_current': 'float',
        'demand_rpm': 'float',
        'actual_rpm': 'float',
        'overload_percentage': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.brake_state = kwargs.get('brake_state', str())
        self.motor_voltage = kwargs.get('motor_voltage', float())
        self.motor_current = kwargs.get('motor_current', float())
        self.demand_rpm = kwargs.get('demand_rpm', float())
        self.actual_rpm = kwargs.get('actual_rpm', float())
        self.overload_percentage = kwargs.get('overload_percentage', int())

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
        if self.brake_state != other.brake_state:
            return False
        if self.motor_voltage != other.motor_voltage:
            return False
        if self.motor_current != other.motor_current:
            return False
        if self.demand_rpm != other.demand_rpm:
            return False
        if self.actual_rpm != other.actual_rpm:
            return False
        if self.overload_percentage != other.overload_percentage:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def brake_state(self):
        """Message field 'brake_state'."""
        return self._brake_state

    @brake_state.setter
    def brake_state(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'brake_state' field must be of type 'str'"
        self._brake_state = value

    @builtins.property
    def motor_voltage(self):
        """Message field 'motor_voltage'."""
        return self._motor_voltage

    @motor_voltage.setter
    def motor_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'motor_voltage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'motor_voltage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._motor_voltage = value

    @builtins.property
    def motor_current(self):
        """Message field 'motor_current'."""
        return self._motor_current

    @motor_current.setter
    def motor_current(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'motor_current' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'motor_current' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._motor_current = value

    @builtins.property
    def demand_rpm(self):
        """Message field 'demand_rpm'."""
        return self._demand_rpm

    @demand_rpm.setter
    def demand_rpm(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'demand_rpm' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'demand_rpm' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._demand_rpm = value

    @builtins.property
    def actual_rpm(self):
        """Message field 'actual_rpm'."""
        return self._actual_rpm

    @actual_rpm.setter
    def actual_rpm(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'actual_rpm' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'actual_rpm' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._actual_rpm = value

    @builtins.property
    def overload_percentage(self):
        """Message field 'overload_percentage'."""
        return self._overload_percentage

    @overload_percentage.setter
    def overload_percentage(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'overload_percentage' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'overload_percentage' field must be an unsigned integer in [0, 255]"
        self._overload_percentage = value
