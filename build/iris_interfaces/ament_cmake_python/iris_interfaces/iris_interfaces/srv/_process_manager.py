# generated from rosidl_generator_py/resource/_idl.py.em
# with input from iris_interfaces:srv/ProcessManager.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ProcessManager_Request(type):
    """Metaclass of message 'ProcessManager_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'START': 'START',
        'STOP': 'STOP',
        'RESTART': 'RESTART',
        'IS_ALIVE': 'IS_ALIVE',
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
                'iris_interfaces.srv.ProcessManager_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__process_manager__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__process_manager__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__process_manager__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__process_manager__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__process_manager__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'START': cls.__constants['START'],
            'STOP': cls.__constants['STOP'],
            'RESTART': cls.__constants['RESTART'],
            'IS_ALIVE': cls.__constants['IS_ALIVE'],
        }

    @property
    def START(self):
        """Message constant 'START'."""
        return Metaclass_ProcessManager_Request.__constants['START']

    @property
    def STOP(self):
        """Message constant 'STOP'."""
        return Metaclass_ProcessManager_Request.__constants['STOP']

    @property
    def RESTART(self):
        """Message constant 'RESTART'."""
        return Metaclass_ProcessManager_Request.__constants['RESTART']

    @property
    def IS_ALIVE(self):
        """Message constant 'IS_ALIVE'."""
        return Metaclass_ProcessManager_Request.__constants['IS_ALIVE']


class ProcessManager_Request(metaclass=Metaclass_ProcessManager_Request):
    """
    Message class 'ProcessManager_Request'.

    Constants:
      START
      STOP
      RESTART
      IS_ALIVE
    """

    __slots__ = [
        '_package',
        '_executable',
        '_name_space',
        '_node_name',
        '_container_name',
        '_label',
    ]

    _fields_and_field_types = {
        'package': 'string',
        'executable': 'string',
        'name_space': 'string',
        'node_name': 'string',
        'container_name': 'string',
        'label': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.package = kwargs.get('package', str())
        self.executable = kwargs.get('executable', str())
        self.name_space = kwargs.get('name_space', str())
        self.node_name = kwargs.get('node_name', str())
        self.container_name = kwargs.get('container_name', str())
        self.label = kwargs.get('label', str())

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
        if self.package != other.package:
            return False
        if self.executable != other.executable:
            return False
        if self.name_space != other.name_space:
            return False
        if self.node_name != other.node_name:
            return False
        if self.container_name != other.container_name:
            return False
        if self.label != other.label:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def package(self):
        """Message field 'package'."""
        return self._package

    @package.setter
    def package(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'package' field must be of type 'str'"
        self._package = value

    @builtins.property
    def executable(self):
        """Message field 'executable'."""
        return self._executable

    @executable.setter
    def executable(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'executable' field must be of type 'str'"
        self._executable = value

    @builtins.property
    def name_space(self):
        """Message field 'name_space'."""
        return self._name_space

    @name_space.setter
    def name_space(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name_space' field must be of type 'str'"
        self._name_space = value

    @builtins.property
    def node_name(self):
        """Message field 'node_name'."""
        return self._node_name

    @node_name.setter
    def node_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'node_name' field must be of type 'str'"
        self._node_name = value

    @builtins.property
    def container_name(self):
        """Message field 'container_name'."""
        return self._container_name

    @container_name.setter
    def container_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'container_name' field must be of type 'str'"
        self._container_name = value

    @builtins.property
    def label(self):
        """Message field 'label'."""
        return self._label

    @label.setter
    def label(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'label' field must be of type 'str'"
        self._label = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ProcessManager_Response(type):
    """Metaclass of message 'ProcessManager_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'SUCCESS': 'SUCCESS',
        'FAILED': 'FAILED',
        'EXISTS': 'EXISTS',
        'DOESNT_EXIST': 'DOESNT_EXIST',
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
                'iris_interfaces.srv.ProcessManager_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__process_manager__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__process_manager__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__process_manager__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__process_manager__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__process_manager__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'SUCCESS': cls.__constants['SUCCESS'],
            'FAILED': cls.__constants['FAILED'],
            'EXISTS': cls.__constants['EXISTS'],
            'DOESNT_EXIST': cls.__constants['DOESNT_EXIST'],
        }

    @property
    def SUCCESS(self):
        """Message constant 'SUCCESS'."""
        return Metaclass_ProcessManager_Response.__constants['SUCCESS']

    @property
    def FAILED(self):
        """Message constant 'FAILED'."""
        return Metaclass_ProcessManager_Response.__constants['FAILED']

    @property
    def EXISTS(self):
        """Message constant 'EXISTS'."""
        return Metaclass_ProcessManager_Response.__constants['EXISTS']

    @property
    def DOESNT_EXIST(self):
        """Message constant 'DOESNT_EXIST'."""
        return Metaclass_ProcessManager_Response.__constants['DOESNT_EXIST']


class ProcessManager_Response(metaclass=Metaclass_ProcessManager_Response):
    """
    Message class 'ProcessManager_Response'.

    Constants:
      SUCCESS
      FAILED
      EXISTS
      DOESNT_EXIST
    """

    __slots__ = [
        '_response',
    ]

    _fields_and_field_types = {
        'response': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.response = kwargs.get('response', str())

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
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'response' field must be of type 'str'"
        self._response = value


class Metaclass_ProcessManager(type):
    """Metaclass of service 'ProcessManager'."""

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
                'iris_interfaces.srv.ProcessManager')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__process_manager

            from iris_interfaces.srv import _process_manager
            if _process_manager.Metaclass_ProcessManager_Request._TYPE_SUPPORT is None:
                _process_manager.Metaclass_ProcessManager_Request.__import_type_support__()
            if _process_manager.Metaclass_ProcessManager_Response._TYPE_SUPPORT is None:
                _process_manager.Metaclass_ProcessManager_Response.__import_type_support__()


class ProcessManager(metaclass=Metaclass_ProcessManager):
    from iris_interfaces.srv._process_manager import ProcessManager_Request as Request
    from iris_interfaces.srv._process_manager import ProcessManager_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
