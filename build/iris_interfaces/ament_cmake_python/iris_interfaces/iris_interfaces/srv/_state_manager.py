# generated from rosidl_generator_py/resource/_idl.py.em
# with input from iris_interfaces:srv/StateManager.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_StateManager_Request(type):
    """Metaclass of message 'StateManager_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'CREATE': 'create',
        'ACTIVATE': 'activate',
        'DEACTIVATE': 'deactivate',
        'CLEANUP': 'cleanup',
        'DESTROY': 'destroy',
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
                'iris_interfaces.srv.StateManager_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__state_manager__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__state_manager__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__state_manager__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__state_manager__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__state_manager__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'CREATE': cls.__constants['CREATE'],
            'ACTIVATE': cls.__constants['ACTIVATE'],
            'DEACTIVATE': cls.__constants['DEACTIVATE'],
            'CLEANUP': cls.__constants['CLEANUP'],
            'DESTROY': cls.__constants['DESTROY'],
        }

    @property
    def CREATE(self):
        """Message constant 'CREATE'."""
        return Metaclass_StateManager_Request.__constants['CREATE']

    @property
    def ACTIVATE(self):
        """Message constant 'ACTIVATE'."""
        return Metaclass_StateManager_Request.__constants['ACTIVATE']

    @property
    def DEACTIVATE(self):
        """Message constant 'DEACTIVATE'."""
        return Metaclass_StateManager_Request.__constants['DEACTIVATE']

    @property
    def CLEANUP(self):
        """Message constant 'CLEANUP'."""
        return Metaclass_StateManager_Request.__constants['CLEANUP']

    @property
    def DESTROY(self):
        """Message constant 'DESTROY'."""
        return Metaclass_StateManager_Request.__constants['DESTROY']


class StateManager_Request(metaclass=Metaclass_StateManager_Request):
    """
    Message class 'StateManager_Request'.

    Constants:
      CREATE
      ACTIVATE
      DEACTIVATE
      CLEANUP
      DESTROY
    """

    __slots__ = [
        '_component_name',
        '_state',
    ]

    _fields_and_field_types = {
        'component_name': 'string',
        'state': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.component_name = kwargs.get('component_name', str())
        self.state = kwargs.get('state', str())

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
        if self.component_name != other.component_name:
            return False
        if self.state != other.state:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def component_name(self):
        """Message field 'component_name'."""
        return self._component_name

    @component_name.setter
    def component_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'component_name' field must be of type 'str'"
        self._component_name = value

    @builtins.property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'state' field must be of type 'str'"
        self._state = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_StateManager_Response(type):
    """Metaclass of message 'StateManager_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'SUCCESS': 'success',
        'FAILED': 'failed',
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
                'iris_interfaces.srv.StateManager_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__state_manager__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__state_manager__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__state_manager__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__state_manager__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__state_manager__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'SUCCESS': cls.__constants['SUCCESS'],
            'FAILED': cls.__constants['FAILED'],
        }

    @property
    def SUCCESS(self):
        """Message constant 'SUCCESS'."""
        return Metaclass_StateManager_Response.__constants['SUCCESS']

    @property
    def FAILED(self):
        """Message constant 'FAILED'."""
        return Metaclass_StateManager_Response.__constants['FAILED']


class StateManager_Response(metaclass=Metaclass_StateManager_Response):
    """
    Message class 'StateManager_Response'.

    Constants:
      SUCCESS
      FAILED
    """

    __slots__ = [
        '_result',
        '_result_description',
    ]

    _fields_and_field_types = {
        'result': 'string',
        'result_description': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.result = kwargs.get('result', str())
        self.result_description = kwargs.get('result_description', str())

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
        if self.result != other.result:
            return False
        if self.result_description != other.result_description:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'result' field must be of type 'str'"
        self._result = value

    @builtins.property
    def result_description(self):
        """Message field 'result_description'."""
        return self._result_description

    @result_description.setter
    def result_description(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'result_description' field must be of type 'str'"
        self._result_description = value


class Metaclass_StateManager(type):
    """Metaclass of service 'StateManager'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('iris_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'iris_interfaces.srv.StateManager')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__state_manager

            from iris_interfaces.srv import _state_manager
            if _state_manager.Metaclass_StateManager_Request._TYPE_SUPPORT is None:
                _state_manager.Metaclass_StateManager_Request.__import_type_support__()
            if _state_manager.Metaclass_StateManager_Response._TYPE_SUPPORT is None:
                _state_manager.Metaclass_StateManager_Response.__import_type_support__()


class StateManager(metaclass=Metaclass_StateManager):
    from iris_interfaces.srv._state_manager import StateManager_Request as Request
    from iris_interfaces.srv._state_manager import StateManager_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
