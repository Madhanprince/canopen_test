# generated from rosidl_generator_py/resource/_idl.py.em
# with input from iris_interfaces:msg/WaterTankLevels.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_WaterTankLevels(type):
    """Metaclass of message 'WaterTankLevels'."""

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
                'iris_interfaces.msg.WaterTankLevels')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__water_tank_levels
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__water_tank_levels
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__water_tank_levels
            cls._TYPE_SUPPORT = module.type_support_msg__msg__water_tank_levels
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__water_tank_levels

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class WaterTankLevels(metaclass=Metaclass_WaterTankLevels):
    """Message class 'WaterTankLevels'."""

    __slots__ = [
        '_fresh_water_tank_level',
        '_dirty_water_tank_level',
    ]

    _fields_and_field_types = {
        'fresh_water_tank_level': 'uint8',
        'dirty_water_tank_level': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.fresh_water_tank_level = kwargs.get('fresh_water_tank_level', int())
        self.dirty_water_tank_level = kwargs.get('dirty_water_tank_level', int())

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
        if self.fresh_water_tank_level != other.fresh_water_tank_level:
            return False
        if self.dirty_water_tank_level != other.dirty_water_tank_level:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def fresh_water_tank_level(self):
        """Message field 'fresh_water_tank_level'."""
        return self._fresh_water_tank_level

    @fresh_water_tank_level.setter
    def fresh_water_tank_level(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fresh_water_tank_level' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'fresh_water_tank_level' field must be an unsigned integer in [0, 255]"
        self._fresh_water_tank_level = value

    @builtins.property
    def dirty_water_tank_level(self):
        """Message field 'dirty_water_tank_level'."""
        return self._dirty_water_tank_level

    @dirty_water_tank_level.setter
    def dirty_water_tank_level(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dirty_water_tank_level' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'dirty_water_tank_level' field must be an unsigned integer in [0, 255]"
        self._dirty_water_tank_level = value
