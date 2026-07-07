# generated from rosidl_generator_py/resource/_idl.py.em
# with input from iris_interfaces:action/PathCoverageController.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'velocities'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PathCoverageController_Goal(type):
    """Metaclass of message 'PathCoverageController_Goal'."""

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
                'iris_interfaces.action.PathCoverageController_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__path_coverage_controller__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__path_coverage_controller__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__path_coverage_controller__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__path_coverage_controller__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__path_coverage_controller__goal

            from nav_msgs.msg import Path
            if Path.__class__._TYPE_SUPPORT is None:
                Path.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PathCoverageController_Goal(metaclass=Metaclass_PathCoverageController_Goal):
    """Message class 'PathCoverageController_Goal'."""

    __slots__ = [
        '_resolution',
        '_velocities',
        '_cleaning_point',
        '_edge_cleaning_point',
    ]

    _fields_and_field_types = {
        'resolution': 'float',
        'velocities': 'sequence<float>',
        'cleaning_point': 'nav_msgs/Path',
        'edge_cleaning_point': 'nav_msgs/Path',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['nav_msgs', 'msg'], 'Path'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['nav_msgs', 'msg'], 'Path'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.resolution = kwargs.get('resolution', float())
        self.velocities = array.array('f', kwargs.get('velocities', []))
        from nav_msgs.msg import Path
        self.cleaning_point = kwargs.get('cleaning_point', Path())
        from nav_msgs.msg import Path
        self.edge_cleaning_point = kwargs.get('edge_cleaning_point', Path())

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
        if self.resolution != other.resolution:
            return False
        if self.velocities != other.velocities:
            return False
        if self.cleaning_point != other.cleaning_point:
            return False
        if self.edge_cleaning_point != other.edge_cleaning_point:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def resolution(self):
        """Message field 'resolution'."""
        return self._resolution

    @resolution.setter
    def resolution(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'resolution' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'resolution' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._resolution = value

    @builtins.property
    def velocities(self):
        """Message field 'velocities'."""
        return self._velocities

    @velocities.setter
    def velocities(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'velocities' array.array() must have the type code of 'f'"
            self._velocities = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'velocities' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._velocities = array.array('f', value)

    @builtins.property
    def cleaning_point(self):
        """Message field 'cleaning_point'."""
        return self._cleaning_point

    @cleaning_point.setter
    def cleaning_point(self, value):
        if __debug__:
            from nav_msgs.msg import Path
            assert \
                isinstance(value, Path), \
                "The 'cleaning_point' field must be a sub message of type 'Path'"
        self._cleaning_point = value

    @builtins.property
    def edge_cleaning_point(self):
        """Message field 'edge_cleaning_point'."""
        return self._edge_cleaning_point

    @edge_cleaning_point.setter
    def edge_cleaning_point(self, value):
        if __debug__:
            from nav_msgs.msg import Path
            assert \
                isinstance(value, Path), \
                "The 'edge_cleaning_point' field must be a sub message of type 'Path'"
        self._edge_cleaning_point = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_PathCoverageController_Result(type):
    """Metaclass of message 'PathCoverageController_Result'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NONE': 0,
        'PATH_GENERATION_FAILED': 1,
        'CONTROL_GENERATION_FAILED': 2,
        'NO_CLEANING_POINT': 3,
        'CANCELLATION_REQUESTED': 4,
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
                'iris_interfaces.action.PathCoverageController_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__path_coverage_controller__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__path_coverage_controller__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__path_coverage_controller__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__path_coverage_controller__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__path_coverage_controller__result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NONE': cls.__constants['NONE'],
            'PATH_GENERATION_FAILED': cls.__constants['PATH_GENERATION_FAILED'],
            'CONTROL_GENERATION_FAILED': cls.__constants['CONTROL_GENERATION_FAILED'],
            'NO_CLEANING_POINT': cls.__constants['NO_CLEANING_POINT'],
            'CANCELLATION_REQUESTED': cls.__constants['CANCELLATION_REQUESTED'],
        }

    @property
    def NONE(self):
        """Message constant 'NONE'."""
        return Metaclass_PathCoverageController_Result.__constants['NONE']

    @property
    def PATH_GENERATION_FAILED(self):
        """Message constant 'PATH_GENERATION_FAILED'."""
        return Metaclass_PathCoverageController_Result.__constants['PATH_GENERATION_FAILED']

    @property
    def CONTROL_GENERATION_FAILED(self):
        """Message constant 'CONTROL_GENERATION_FAILED'."""
        return Metaclass_PathCoverageController_Result.__constants['CONTROL_GENERATION_FAILED']

    @property
    def NO_CLEANING_POINT(self):
        """Message constant 'NO_CLEANING_POINT'."""
        return Metaclass_PathCoverageController_Result.__constants['NO_CLEANING_POINT']

    @property
    def CANCELLATION_REQUESTED(self):
        """Message constant 'CANCELLATION_REQUESTED'."""
        return Metaclass_PathCoverageController_Result.__constants['CANCELLATION_REQUESTED']


class PathCoverageController_Result(metaclass=Metaclass_PathCoverageController_Result):
    """
    Message class 'PathCoverageController_Result'.

    Constants:
      NONE
      PATH_GENERATION_FAILED
      CONTROL_GENERATION_FAILED
      NO_CLEANING_POINT
      CANCELLATION_REQUESTED
    """

    __slots__ = [
        '_result',
    ]

    _fields_and_field_types = {
        'result': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.result = kwargs.get('result', int())

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
                isinstance(value, int), \
                "The 'result' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'result' field must be an unsigned integer in [0, 65535]"
        self._result = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_PathCoverageController_Feedback(type):
    """Metaclass of message 'PathCoverageController_Feedback'."""

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
                'iris_interfaces.action.PathCoverageController_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__path_coverage_controller__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__path_coverage_controller__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__path_coverage_controller__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__path_coverage_controller__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__path_coverage_controller__feedback

            from builtin_interfaces.msg import Duration
            if Duration.__class__._TYPE_SUPPORT is None:
                Duration.__class__.__import_type_support__()

            from geometry_msgs.msg import PoseStamped
            if PoseStamped.__class__._TYPE_SUPPORT is None:
                PoseStamped.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PathCoverageController_Feedback(metaclass=Metaclass_PathCoverageController_Feedback):
    """Message class 'PathCoverageController_Feedback'."""

    __slots__ = [
        '_current_target_pose',
        '_navigation_time',
        '_estimated_time_remaining',
        '_distance_remaining',
    ]

    _fields_and_field_types = {
        'current_target_pose': 'geometry_msgs/PoseStamped',
        'navigation_time': 'builtin_interfaces/Duration',
        'estimated_time_remaining': 'builtin_interfaces/Duration',
        'distance_remaining': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Duration'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Duration'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import PoseStamped
        self.current_target_pose = kwargs.get('current_target_pose', PoseStamped())
        from builtin_interfaces.msg import Duration
        self.navigation_time = kwargs.get('navigation_time', Duration())
        from builtin_interfaces.msg import Duration
        self.estimated_time_remaining = kwargs.get('estimated_time_remaining', Duration())
        self.distance_remaining = kwargs.get('distance_remaining', float())

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
        if self.current_target_pose != other.current_target_pose:
            return False
        if self.navigation_time != other.navigation_time:
            return False
        if self.estimated_time_remaining != other.estimated_time_remaining:
            return False
        if self.distance_remaining != other.distance_remaining:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def current_target_pose(self):
        """Message field 'current_target_pose'."""
        return self._current_target_pose

    @current_target_pose.setter
    def current_target_pose(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseStamped
            assert \
                isinstance(value, PoseStamped), \
                "The 'current_target_pose' field must be a sub message of type 'PoseStamped'"
        self._current_target_pose = value

    @builtins.property
    def navigation_time(self):
        """Message field 'navigation_time'."""
        return self._navigation_time

    @navigation_time.setter
    def navigation_time(self, value):
        if __debug__:
            from builtin_interfaces.msg import Duration
            assert \
                isinstance(value, Duration), \
                "The 'navigation_time' field must be a sub message of type 'Duration'"
        self._navigation_time = value

    @builtins.property
    def estimated_time_remaining(self):
        """Message field 'estimated_time_remaining'."""
        return self._estimated_time_remaining

    @estimated_time_remaining.setter
    def estimated_time_remaining(self, value):
        if __debug__:
            from builtin_interfaces.msg import Duration
            assert \
                isinstance(value, Duration), \
                "The 'estimated_time_remaining' field must be a sub message of type 'Duration'"
        self._estimated_time_remaining = value

    @builtins.property
    def distance_remaining(self):
        """Message field 'distance_remaining'."""
        return self._distance_remaining

    @distance_remaining.setter
    def distance_remaining(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'distance_remaining' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'distance_remaining' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._distance_remaining = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_PathCoverageController_SendGoal_Request(type):
    """Metaclass of message 'PathCoverageController_SendGoal_Request'."""

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
                'iris_interfaces.action.PathCoverageController_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__path_coverage_controller__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__path_coverage_controller__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__path_coverage_controller__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__path_coverage_controller__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__path_coverage_controller__send_goal__request

            from iris_interfaces.action import PathCoverageController
            if PathCoverageController.Goal.__class__._TYPE_SUPPORT is None:
                PathCoverageController.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PathCoverageController_SendGoal_Request(metaclass=Metaclass_PathCoverageController_SendGoal_Request):
    """Message class 'PathCoverageController_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'iris_interfaces/PathCoverageController_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['iris_interfaces', 'action'], 'PathCoverageController_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from iris_interfaces.action._path_coverage_controller import PathCoverageController_Goal
        self.goal = kwargs.get('goal', PathCoverageController_Goal())

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
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from iris_interfaces.action._path_coverage_controller import PathCoverageController_Goal
            assert \
                isinstance(value, PathCoverageController_Goal), \
                "The 'goal' field must be a sub message of type 'PathCoverageController_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_PathCoverageController_SendGoal_Response(type):
    """Metaclass of message 'PathCoverageController_SendGoal_Response'."""

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
                'iris_interfaces.action.PathCoverageController_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__path_coverage_controller__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__path_coverage_controller__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__path_coverage_controller__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__path_coverage_controller__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__path_coverage_controller__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PathCoverageController_SendGoal_Response(metaclass=Metaclass_PathCoverageController_SendGoal_Response):
    """Message class 'PathCoverageController_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

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
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


class Metaclass_PathCoverageController_SendGoal(type):
    """Metaclass of service 'PathCoverageController_SendGoal'."""

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
                'iris_interfaces.action.PathCoverageController_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__path_coverage_controller__send_goal

            from iris_interfaces.action import _path_coverage_controller
            if _path_coverage_controller.Metaclass_PathCoverageController_SendGoal_Request._TYPE_SUPPORT is None:
                _path_coverage_controller.Metaclass_PathCoverageController_SendGoal_Request.__import_type_support__()
            if _path_coverage_controller.Metaclass_PathCoverageController_SendGoal_Response._TYPE_SUPPORT is None:
                _path_coverage_controller.Metaclass_PathCoverageController_SendGoal_Response.__import_type_support__()


class PathCoverageController_SendGoal(metaclass=Metaclass_PathCoverageController_SendGoal):
    from iris_interfaces.action._path_coverage_controller import PathCoverageController_SendGoal_Request as Request
    from iris_interfaces.action._path_coverage_controller import PathCoverageController_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_PathCoverageController_GetResult_Request(type):
    """Metaclass of message 'PathCoverageController_GetResult_Request'."""

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
                'iris_interfaces.action.PathCoverageController_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__path_coverage_controller__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__path_coverage_controller__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__path_coverage_controller__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__path_coverage_controller__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__path_coverage_controller__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PathCoverageController_GetResult_Request(metaclass=Metaclass_PathCoverageController_GetResult_Request):
    """Message class 'PathCoverageController_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

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
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_PathCoverageController_GetResult_Response(type):
    """Metaclass of message 'PathCoverageController_GetResult_Response'."""

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
                'iris_interfaces.action.PathCoverageController_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__path_coverage_controller__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__path_coverage_controller__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__path_coverage_controller__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__path_coverage_controller__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__path_coverage_controller__get_result__response

            from iris_interfaces.action import PathCoverageController
            if PathCoverageController.Result.__class__._TYPE_SUPPORT is None:
                PathCoverageController.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PathCoverageController_GetResult_Response(metaclass=Metaclass_PathCoverageController_GetResult_Response):
    """Message class 'PathCoverageController_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'iris_interfaces/PathCoverageController_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['iris_interfaces', 'action'], 'PathCoverageController_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from iris_interfaces.action._path_coverage_controller import PathCoverageController_Result
        self.result = kwargs.get('result', PathCoverageController_Result())

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
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from iris_interfaces.action._path_coverage_controller import PathCoverageController_Result
            assert \
                isinstance(value, PathCoverageController_Result), \
                "The 'result' field must be a sub message of type 'PathCoverageController_Result'"
        self._result = value


class Metaclass_PathCoverageController_GetResult(type):
    """Metaclass of service 'PathCoverageController_GetResult'."""

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
                'iris_interfaces.action.PathCoverageController_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__path_coverage_controller__get_result

            from iris_interfaces.action import _path_coverage_controller
            if _path_coverage_controller.Metaclass_PathCoverageController_GetResult_Request._TYPE_SUPPORT is None:
                _path_coverage_controller.Metaclass_PathCoverageController_GetResult_Request.__import_type_support__()
            if _path_coverage_controller.Metaclass_PathCoverageController_GetResult_Response._TYPE_SUPPORT is None:
                _path_coverage_controller.Metaclass_PathCoverageController_GetResult_Response.__import_type_support__()


class PathCoverageController_GetResult(metaclass=Metaclass_PathCoverageController_GetResult):
    from iris_interfaces.action._path_coverage_controller import PathCoverageController_GetResult_Request as Request
    from iris_interfaces.action._path_coverage_controller import PathCoverageController_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_PathCoverageController_FeedbackMessage(type):
    """Metaclass of message 'PathCoverageController_FeedbackMessage'."""

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
                'iris_interfaces.action.PathCoverageController_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__path_coverage_controller__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__path_coverage_controller__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__path_coverage_controller__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__path_coverage_controller__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__path_coverage_controller__feedback_message

            from iris_interfaces.action import PathCoverageController
            if PathCoverageController.Feedback.__class__._TYPE_SUPPORT is None:
                PathCoverageController.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PathCoverageController_FeedbackMessage(metaclass=Metaclass_PathCoverageController_FeedbackMessage):
    """Message class 'PathCoverageController_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'iris_interfaces/PathCoverageController_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['iris_interfaces', 'action'], 'PathCoverageController_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from iris_interfaces.action._path_coverage_controller import PathCoverageController_Feedback
        self.feedback = kwargs.get('feedback', PathCoverageController_Feedback())

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
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from iris_interfaces.action._path_coverage_controller import PathCoverageController_Feedback
            assert \
                isinstance(value, PathCoverageController_Feedback), \
                "The 'feedback' field must be a sub message of type 'PathCoverageController_Feedback'"
        self._feedback = value


class Metaclass_PathCoverageController(type):
    """Metaclass of action 'PathCoverageController'."""

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
                'iris_interfaces.action.PathCoverageController')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__path_coverage_controller

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from iris_interfaces.action import _path_coverage_controller
            if _path_coverage_controller.Metaclass_PathCoverageController_SendGoal._TYPE_SUPPORT is None:
                _path_coverage_controller.Metaclass_PathCoverageController_SendGoal.__import_type_support__()
            if _path_coverage_controller.Metaclass_PathCoverageController_GetResult._TYPE_SUPPORT is None:
                _path_coverage_controller.Metaclass_PathCoverageController_GetResult.__import_type_support__()
            if _path_coverage_controller.Metaclass_PathCoverageController_FeedbackMessage._TYPE_SUPPORT is None:
                _path_coverage_controller.Metaclass_PathCoverageController_FeedbackMessage.__import_type_support__()


class PathCoverageController(metaclass=Metaclass_PathCoverageController):

    # The goal message defined in the action definition.
    from iris_interfaces.action._path_coverage_controller import PathCoverageController_Goal as Goal
    # The result message defined in the action definition.
    from iris_interfaces.action._path_coverage_controller import PathCoverageController_Result as Result
    # The feedback message defined in the action definition.
    from iris_interfaces.action._path_coverage_controller import PathCoverageController_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from iris_interfaces.action._path_coverage_controller import PathCoverageController_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from iris_interfaces.action._path_coverage_controller import PathCoverageController_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from iris_interfaces.action._path_coverage_controller import PathCoverageController_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
