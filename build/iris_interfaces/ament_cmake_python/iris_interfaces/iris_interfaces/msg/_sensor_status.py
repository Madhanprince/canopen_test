# generated from rosidl_generator_py/resource/_idl.py.em
# with input from iris_interfaces:msg/SensorStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SensorStatus(type):
    """Metaclass of message 'SensorStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'CONNECTED': 'CONNECTED',
        'DISCONNECTED': 'DISCONNECTED',
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
                'iris_interfaces.msg.SensorStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sensor_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sensor_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sensor_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sensor_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sensor_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'CONNECTED': cls.__constants['CONNECTED'],
            'DISCONNECTED': cls.__constants['DISCONNECTED'],
        }

    @property
    def CONNECTED(self):
        """Message constant 'CONNECTED'."""
        return Metaclass_SensorStatus.__constants['CONNECTED']

    @property
    def DISCONNECTED(self):
        """Message constant 'DISCONNECTED'."""
        return Metaclass_SensorStatus.__constants['DISCONNECTED']


class SensorStatus(metaclass=Metaclass_SensorStatus):
    """
    Message class 'SensorStatus'.

    Constants:
      CONNECTED
      DISCONNECTED
    """

    __slots__ = [
        '_sensor_name',
        '_sensor_robot_position',
        '_sensor_status',
        '_sensor_temperature',
    ]

    _fields_and_field_types = {
        'sensor_name': 'string',
        'sensor_robot_position': 'string',
        'sensor_status': 'string',
        'sensor_temperature': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.sensor_name = kwargs.get('sensor_name', str())
        self.sensor_robot_position = kwargs.get('sensor_robot_position', str())
        self.sensor_status = kwargs.get('sensor_status', str())
        self.sensor_temperature = kwargs.get('sensor_temperature', float())

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
        if self.sensor_name != other.sensor_name:
            return False
        if self.sensor_robot_position != other.sensor_robot_position:
            return False
        if self.sensor_status != other.sensor_status:
            return False
        if self.sensor_temperature != other.sensor_temperature:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def sensor_name(self):
        """Message field 'sensor_name'."""
        return self._sensor_name

    @sensor_name.setter
    def sensor_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'sensor_name' field must be of type 'str'"
        self._sensor_name = value

    @builtins.property
    def sensor_robot_position(self):
        """Message field 'sensor_robot_position'."""
        return self._sensor_robot_position

    @sensor_robot_position.setter
    def sensor_robot_position(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'sensor_robot_position' field must be of type 'str'"
        self._sensor_robot_position = value

    @builtins.property
    def sensor_status(self):
        """Message field 'sensor_status'."""
        return self._sensor_status

    @sensor_status.setter
    def sensor_status(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'sensor_status' field must be of type 'str'"
        self._sensor_status = value

    @builtins.property
    def sensor_temperature(self):
        """Message field 'sensor_temperature'."""
        return self._sensor_temperature

    @sensor_temperature.setter
    def sensor_temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'sensor_temperature' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'sensor_temperature' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._sensor_temperature = value
