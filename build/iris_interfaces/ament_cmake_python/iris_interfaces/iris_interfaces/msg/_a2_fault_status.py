# generated from rosidl_generator_py/resource/_idl.py.em
# with input from iris_interfaces:msg/A2FaultStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_A2FaultStatus(type):
    """Metaclass of message 'A2FaultStatus'."""

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
                'iris_interfaces.msg.A2FaultStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__a2_fault_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__a2_fault_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__a2_fault_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__a2_fault_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__a2_fault_status

            from iris_interfaces.msg import BrushFaults
            if BrushFaults.__class__._TYPE_SUPPORT is None:
                BrushFaults.__class__.__import_type_support__()

            from iris_interfaces.msg import VacuumFaults
            if VacuumFaults.__class__._TYPE_SUPPORT is None:
                VacuumFaults.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class A2FaultStatus(metaclass=Metaclass_A2FaultStatus):
    """Message class 'A2FaultStatus'."""

    __slots__ = [
        '_a2_fault_status',
        '_brush',
        '_vacuum',
        '_water_pump_digital_fault',
        '_detergent_pump_digital_fault',
        '_brush_vacuum_motor_driver_digital_fault',
        '_water_and_detergent_pump_flow_fault',
    ]

    _fields_and_field_types = {
        'a2_fault_status': 'uint8',
        'brush': 'iris_interfaces/BrushFaults',
        'vacuum': 'iris_interfaces/VacuumFaults',
        'water_pump_digital_fault': 'uint8',
        'detergent_pump_digital_fault': 'uint8',
        'brush_vacuum_motor_driver_digital_fault': 'uint8',
        'water_and_detergent_pump_flow_fault': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['iris_interfaces', 'msg'], 'BrushFaults'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['iris_interfaces', 'msg'], 'VacuumFaults'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.a2_fault_status = kwargs.get('a2_fault_status', int())
        from iris_interfaces.msg import BrushFaults
        self.brush = kwargs.get('brush', BrushFaults())
        from iris_interfaces.msg import VacuumFaults
        self.vacuum = kwargs.get('vacuum', VacuumFaults())
        self.water_pump_digital_fault = kwargs.get('water_pump_digital_fault', int())
        self.detergent_pump_digital_fault = kwargs.get('detergent_pump_digital_fault', int())
        self.brush_vacuum_motor_driver_digital_fault = kwargs.get('brush_vacuum_motor_driver_digital_fault', int())
        self.water_and_detergent_pump_flow_fault = kwargs.get('water_and_detergent_pump_flow_fault', int())

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
        if self.a2_fault_status != other.a2_fault_status:
            return False
        if self.brush != other.brush:
            return False
        if self.vacuum != other.vacuum:
            return False
        if self.water_pump_digital_fault != other.water_pump_digital_fault:
            return False
        if self.detergent_pump_digital_fault != other.detergent_pump_digital_fault:
            return False
        if self.brush_vacuum_motor_driver_digital_fault != other.brush_vacuum_motor_driver_digital_fault:
            return False
        if self.water_and_detergent_pump_flow_fault != other.water_and_detergent_pump_flow_fault:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def a2_fault_status(self):
        """Message field 'a2_fault_status'."""
        return self._a2_fault_status

    @a2_fault_status.setter
    def a2_fault_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'a2_fault_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'a2_fault_status' field must be an unsigned integer in [0, 255]"
        self._a2_fault_status = value

    @builtins.property
    def brush(self):
        """Message field 'brush'."""
        return self._brush

    @brush.setter
    def brush(self, value):
        if __debug__:
            from iris_interfaces.msg import BrushFaults
            assert \
                isinstance(value, BrushFaults), \
                "The 'brush' field must be a sub message of type 'BrushFaults'"
        self._brush = value

    @builtins.property
    def vacuum(self):
        """Message field 'vacuum'."""
        return self._vacuum

    @vacuum.setter
    def vacuum(self, value):
        if __debug__:
            from iris_interfaces.msg import VacuumFaults
            assert \
                isinstance(value, VacuumFaults), \
                "The 'vacuum' field must be a sub message of type 'VacuumFaults'"
        self._vacuum = value

    @builtins.property
    def water_pump_digital_fault(self):
        """Message field 'water_pump_digital_fault'."""
        return self._water_pump_digital_fault

    @water_pump_digital_fault.setter
    def water_pump_digital_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'water_pump_digital_fault' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'water_pump_digital_fault' field must be an unsigned integer in [0, 255]"
        self._water_pump_digital_fault = value

    @builtins.property
    def detergent_pump_digital_fault(self):
        """Message field 'detergent_pump_digital_fault'."""
        return self._detergent_pump_digital_fault

    @detergent_pump_digital_fault.setter
    def detergent_pump_digital_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'detergent_pump_digital_fault' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'detergent_pump_digital_fault' field must be an unsigned integer in [0, 255]"
        self._detergent_pump_digital_fault = value

    @builtins.property
    def brush_vacuum_motor_driver_digital_fault(self):
        """Message field 'brush_vacuum_motor_driver_digital_fault'."""
        return self._brush_vacuum_motor_driver_digital_fault

    @brush_vacuum_motor_driver_digital_fault.setter
    def brush_vacuum_motor_driver_digital_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'brush_vacuum_motor_driver_digital_fault' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'brush_vacuum_motor_driver_digital_fault' field must be an unsigned integer in [0, 255]"
        self._brush_vacuum_motor_driver_digital_fault = value

    @builtins.property
    def water_and_detergent_pump_flow_fault(self):
        """Message field 'water_and_detergent_pump_flow_fault'."""
        return self._water_and_detergent_pump_flow_fault

    @water_and_detergent_pump_flow_fault.setter
    def water_and_detergent_pump_flow_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'water_and_detergent_pump_flow_fault' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'water_and_detergent_pump_flow_fault' field must be an unsigned integer in [0, 255]"
        self._water_and_detergent_pump_flow_fault = value
