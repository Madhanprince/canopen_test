# generated from rosidl_generator_py/resource/_idl.py.em
# with input from iris_interfaces:msg/A2FunctionalStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_A2FunctionalStatus(type):
    """Metaclass of message 'A2FunctionalStatus'."""

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
                'iris_interfaces.msg.A2FunctionalStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__a2_functional_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__a2_functional_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__a2_functional_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__a2_functional_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__a2_functional_status

            from iris_interfaces.msg import BrushStatus
            if BrushStatus.__class__._TYPE_SUPPORT is None:
                BrushStatus.__class__.__import_type_support__()

            from iris_interfaces.msg import VacuumStatus
            if VacuumStatus.__class__._TYPE_SUPPORT is None:
                VacuumStatus.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class A2FunctionalStatus(metaclass=Metaclass_A2FunctionalStatus):
    """Message class 'A2FunctionalStatus'."""

    __slots__ = [
        '_brush',
        '_vacuum',
        '_water_pump',
        '_detergent_pump',
    ]

    _fields_and_field_types = {
        'brush': 'iris_interfaces/BrushStatus',
        'vacuum': 'iris_interfaces/VacuumStatus',
        'water_pump': 'uint8',
        'detergent_pump': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['iris_interfaces', 'msg'], 'BrushStatus'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['iris_interfaces', 'msg'], 'VacuumStatus'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from iris_interfaces.msg import BrushStatus
        self.brush = kwargs.get('brush', BrushStatus())
        from iris_interfaces.msg import VacuumStatus
        self.vacuum = kwargs.get('vacuum', VacuumStatus())
        self.water_pump = kwargs.get('water_pump', int())
        self.detergent_pump = kwargs.get('detergent_pump', int())

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
        if self.brush != other.brush:
            return False
        if self.vacuum != other.vacuum:
            return False
        if self.water_pump != other.water_pump:
            return False
        if self.detergent_pump != other.detergent_pump:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def brush(self):
        """Message field 'brush'."""
        return self._brush

    @brush.setter
    def brush(self, value):
        if __debug__:
            from iris_interfaces.msg import BrushStatus
            assert \
                isinstance(value, BrushStatus), \
                "The 'brush' field must be a sub message of type 'BrushStatus'"
        self._brush = value

    @builtins.property
    def vacuum(self):
        """Message field 'vacuum'."""
        return self._vacuum

    @vacuum.setter
    def vacuum(self, value):
        if __debug__:
            from iris_interfaces.msg import VacuumStatus
            assert \
                isinstance(value, VacuumStatus), \
                "The 'vacuum' field must be a sub message of type 'VacuumStatus'"
        self._vacuum = value

    @builtins.property
    def water_pump(self):
        """Message field 'water_pump'."""
        return self._water_pump

    @water_pump.setter
    def water_pump(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'water_pump' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'water_pump' field must be an unsigned integer in [0, 255]"
        self._water_pump = value

    @builtins.property
    def detergent_pump(self):
        """Message field 'detergent_pump'."""
        return self._detergent_pump

    @detergent_pump.setter
    def detergent_pump(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'detergent_pump' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'detergent_pump' field must be an unsigned integer in [0, 255]"
        self._detergent_pump = value
