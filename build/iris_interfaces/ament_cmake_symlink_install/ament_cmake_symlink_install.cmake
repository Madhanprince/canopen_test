# generated from
# ament_cmake_core/cmake/symlink_install/ament_cmake_symlink_install.cmake.in

# create empty symlink install manifest before starting install step
file(WRITE "${CMAKE_CURRENT_BINARY_DIR}/symlink_install_manifest.txt")

#
# Reimplement CMake install(DIRECTORY) command to use symlinks instead of
# copying resources.
#
# :param cmake_current_source_dir: The CMAKE_CURRENT_SOURCE_DIR when install
#   was invoked
# :type cmake_current_source_dir: string
# :param ARGN: the same arguments as the CMake install command.
# :type ARGN: various
#
function(ament_cmake_symlink_install_directory cmake_current_source_dir)
  cmake_parse_arguments(ARG "OPTIONAL" "DESTINATION" "DIRECTORY;PATTERN;PATTERN_EXCLUDE" ${ARGN})
  if(ARG_UNPARSED_ARGUMENTS)
    message(FATAL_ERROR "ament_cmake_symlink_install_directory() called with "
      "unused/unsupported arguments: ${ARG_UNPARSED_ARGUMENTS}")
  endif()

  # make destination absolute path and ensure that it exists
  if(NOT IS_ABSOLUTE "${ARG_DESTINATION}")
    set(ARG_DESTINATION "/home/agx/canopen_test/install/iris_interfaces/${ARG_DESTINATION}")
  endif()
  if(NOT EXISTS "${ARG_DESTINATION}")
    file(MAKE_DIRECTORY "${ARG_DESTINATION}")
  endif()

  # default pattern to include
  if(NOT ARG_PATTERN)
    set(ARG_PATTERN "*")
  endif()

  # iterate over directories
  foreach(dir ${ARG_DIRECTORY})
    # make dir an absolute path
    if(NOT IS_ABSOLUTE "${dir}")
      set(dir "${cmake_current_source_dir}/${dir}")
    endif()

    if(EXISTS "${dir}")
      # if directory has no trailing slash
      # append folder name to destination
      set(destination "${ARG_DESTINATION}")
      string(LENGTH "${dir}" length)
      math(EXPR offset "${length} - 1")
      string(SUBSTRING "${dir}" ${offset} 1 dir_last_char)
      if(NOT dir_last_char STREQUAL "/")
        get_filename_component(destination_name "${dir}" NAME)
        set(destination "${destination}/${destination_name}")
      else()
        # remove trailing slash
        string(SUBSTRING "${dir}" 0 ${offset} dir)
      endif()
      
      # Create destination directory.
      # This does *not* solve the problem of empty directories WITHIN the install tree,
      # but does make sure that the top-level directory specified by the caller gets created.
      file(MAKE_DIRECTORY "${destination}")

      # glob recursive files
      set(relative_files "")
      foreach(pattern ${ARG_PATTERN})
        file(
          GLOB_RECURSE
          include_files
          RELATIVE "${dir}"
          "${dir}/${pattern}"
        )
        if(NOT include_files STREQUAL "")
          list(APPEND relative_files ${include_files})
        endif()
      endforeach()
      foreach(pattern ${ARG_PATTERN_EXCLUDE})
        file(
          GLOB_RECURSE
          exclude_files
          RELATIVE "${dir}"
          "${dir}/${pattern}"
        )
        if(NOT exclude_files STREQUAL "")
          list(REMOVE_ITEM relative_files ${exclude_files})
        endif()
      endforeach()
      list(SORT relative_files)

      foreach(relative_file ${relative_files})
        set(absolute_file "${dir}/${relative_file}")
        # determine link name for file including destination path
        set(symlink "${destination}/${relative_file}")

        # ensure that destination exists
        get_filename_component(symlink_dir "${symlink}" PATH)
        if(NOT EXISTS "${symlink_dir}")
          file(MAKE_DIRECTORY "${symlink_dir}")
        endif()

        _ament_cmake_symlink_install_create_symlink("${absolute_file}" "${symlink}")
      endforeach()
    else()
      if(NOT ARG_OPTIONAL)
        message(FATAL_ERROR
          "ament_cmake_symlink_install_directory() can't find '${dir}'")
      endif()
    endif()
  endforeach()
endfunction()

#
# Reimplement CMake install(FILES) command to use symlinks instead of copying
# resources.
#
# :param cmake_current_source_dir: The CMAKE_CURRENT_SOURCE_DIR when install
#   was invoked
# :type cmake_current_source_dir: string
# :param ARGN: the same arguments as the CMake install command.
# :type ARGN: various
#
function(ament_cmake_symlink_install_files cmake_current_source_dir)
  cmake_parse_arguments(ARG "OPTIONAL" "DESTINATION;RENAME" "FILES" ${ARGN})
  if(ARG_UNPARSED_ARGUMENTS)
    message(FATAL_ERROR "ament_cmake_symlink_install_files() called with "
      "unused/unsupported arguments: ${ARG_UNPARSED_ARGUMENTS}")
  endif()

  # make destination an absolute path and ensure that it exists
  if(NOT IS_ABSOLUTE "${ARG_DESTINATION}")
    set(ARG_DESTINATION "/home/agx/canopen_test/install/iris_interfaces/${ARG_DESTINATION}")
  endif()
  if(NOT EXISTS "${ARG_DESTINATION}")
    file(MAKE_DIRECTORY "${ARG_DESTINATION}")
  endif()

  if(ARG_RENAME)
    list(LENGTH ARG_FILES file_count)
    if(NOT file_count EQUAL 1)
    message(FATAL_ERROR "ament_cmake_symlink_install_files() called with "
      "RENAME argument but not with a single file")
    endif()
  endif()

  # iterate over files
  foreach(file ${ARG_FILES})
    # make file an absolute path
    if(NOT IS_ABSOLUTE "${file}")
      set(file "${cmake_current_source_dir}/${file}")
    endif()

    if(EXISTS "${file}")
      # determine link name for file including destination path
      get_filename_component(filename "${file}" NAME)
      if(NOT ARG_RENAME)
        set(symlink "${ARG_DESTINATION}/${filename}")
      else()
        set(symlink "${ARG_DESTINATION}/${ARG_RENAME}")
      endif()
      _ament_cmake_symlink_install_create_symlink("${file}" "${symlink}")
    else()
      if(NOT ARG_OPTIONAL)
        message(FATAL_ERROR
          "ament_cmake_symlink_install_files() can't find '${file}'")
      endif()
    endif()
  endforeach()
endfunction()

#
# Reimplement CMake install(PROGRAMS) command to use symlinks instead of copying
# resources.
#
# :param cmake_current_source_dir: The CMAKE_CURRENT_SOURCE_DIR when install
#   was invoked
# :type cmake_current_source_dir: string
# :param ARGN: the same arguments as the CMake install command.
# :type ARGN: various
#
function(ament_cmake_symlink_install_programs cmake_current_source_dir)
  cmake_parse_arguments(ARG "OPTIONAL" "DESTINATION" "PROGRAMS" ${ARGN})
  if(ARG_UNPARSED_ARGUMENTS)
    message(FATAL_ERROR "ament_cmake_symlink_install_programs() called with "
      "unused/unsupported arguments: ${ARG_UNPARSED_ARGUMENTS}")
  endif()

  # make destination an absolute path and ensure that it exists
  if(NOT IS_ABSOLUTE "${ARG_DESTINATION}")
    set(ARG_DESTINATION "/home/agx/canopen_test/install/iris_interfaces/${ARG_DESTINATION}")
  endif()
  if(NOT EXISTS "${ARG_DESTINATION}")
    file(MAKE_DIRECTORY "${ARG_DESTINATION}")
  endif()

  # iterate over programs
  foreach(file ${ARG_PROGRAMS})
    # make file an absolute path
    if(NOT IS_ABSOLUTE "${file}")
      set(file "${cmake_current_source_dir}/${file}")
    endif()

    if(EXISTS "${file}")
      # determine link name for file including destination path
      get_filename_component(filename "${file}" NAME)
      set(symlink "${ARG_DESTINATION}/${filename}")
      _ament_cmake_symlink_install_create_symlink("${file}" "${symlink}")
    else()
      if(NOT ARG_OPTIONAL)
        message(FATAL_ERROR
          "ament_cmake_symlink_install_programs() can't find '${file}'")
      endif()
    endif()
  endforeach()
endfunction()

#
# Reimplement CMake install(TARGETS) command to use symlinks instead of copying
# resources.
#
# :param TARGET_FILES: the absolute files, replacing the name of targets passed
#   in as TARGETS
# :type TARGET_FILES: list of files
# :param ARGN: the same arguments as the CMake install command except that
#   keywords identifying the kind of type and the DESTINATION keyword must be
#   joined with an underscore, e.g. ARCHIVE_DESTINATION.
# :type ARGN: various
#
function(ament_cmake_symlink_install_targets)
  cmake_parse_arguments(ARG "OPTIONAL" "ARCHIVE_DESTINATION;DESTINATION;LIBRARY_DESTINATION;RUNTIME_DESTINATION"
    "TARGETS;TARGET_FILES" ${ARGN})
  if(ARG_UNPARSED_ARGUMENTS)
    message(FATAL_ERROR "ament_cmake_symlink_install_targets() called with "
      "unused/unsupported arguments: ${ARG_UNPARSED_ARGUMENTS}")
  endif()

  # iterate over target files
  foreach(file ${ARG_TARGET_FILES})
    if(NOT IS_ABSOLUTE "${file}")
      message(FATAL_ERROR "ament_cmake_symlink_install_targets() target file "
        "'${file}' must be an absolute path")
    endif()

    # determine destination of file based on extension
    set(destination "")
    get_filename_component(fileext "${file}" EXT)
    if(fileext STREQUAL ".a" OR fileext STREQUAL ".lib")
      set(destination "${ARG_ARCHIVE_DESTINATION}")
    elseif(fileext STREQUAL ".dylib" OR fileext MATCHES "\\.so(\\.[0-9]+)?(\\.[0-9]+)?(\\.[0-9]+)?$")
      set(destination "${ARG_LIBRARY_DESTINATION}")
    elseif(fileext STREQUAL "" OR fileext STREQUAL ".dll" OR fileext STREQUAL ".exe")
      set(destination "${ARG_RUNTIME_DESTINATION}")
    endif()
    if(destination STREQUAL "")
      set(destination "${ARG_DESTINATION}")
    endif()

    # make destination an absolute path and ensure that it exists
    if(NOT IS_ABSOLUTE "${destination}")
      set(destination "/home/agx/canopen_test/install/iris_interfaces/${destination}")
    endif()
    if(NOT EXISTS "${destination}")
      file(MAKE_DIRECTORY "${destination}")
    endif()

    if(EXISTS "${file}")
      # determine link name for file including destination path
      get_filename_component(filename "${file}" NAME)
      set(symlink "${destination}/${filename}")
      _ament_cmake_symlink_install_create_symlink("${file}" "${symlink}")
    else()
      if(NOT ARG_OPTIONAL)
        message(FATAL_ERROR
          "ament_cmake_symlink_install_targets() can't find '${file}'")
      endif()
    endif()
  endforeach()
endfunction()

function(_ament_cmake_symlink_install_create_symlink absolute_file symlink)
  # register symlink for being removed during install step
  file(APPEND "${CMAKE_CURRENT_BINARY_DIR}/symlink_install_manifest.txt"
    "${symlink}\n")

  # avoid any work if correct symlink is already in place
  if(EXISTS "${symlink}" AND IS_SYMLINK "${symlink}")
    get_filename_component(destination "${symlink}" REALPATH)
    get_filename_component(real_absolute_file "${absolute_file}" REALPATH)
    if(destination STREQUAL real_absolute_file)
      message(STATUS "Up-to-date symlink: ${symlink}")
      return()
    endif()
  endif()

  message(STATUS "Symlinking: ${symlink}")
  if(EXISTS "${symlink}" OR IS_SYMLINK "${symlink}")
    file(REMOVE "${symlink}")
  endif()

  execute_process(
    COMMAND "/usr/bin/cmake" "-E" "create_symlink"
      "${absolute_file}"
      "${symlink}"
  )
  # the CMake command does not provide a return code so check manually
  if(NOT EXISTS "${symlink}" OR NOT IS_SYMLINK "${symlink}")
    get_filename_component(destination "${symlink}" REALPATH)
    message(FATAL_ERROR
      "Could not create symlink '${symlink}' pointing to '${absolute_file}'")
  endif()
endfunction()

# end of template

message(STATUS "Execute custom install script")

# begin of custom install code

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/ament_cmake_index/share/ament_index/resource_index/rosidl_interfaces/iris_interfaces" "DESTINATION" "share/ament_index/resource_index/rosidl_interfaces")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/ament_cmake_index/share/ament_index/resource_index/rosidl_interfaces/iris_interfaces" "DESTINATION" "share/ament_index/resource_index/rosidl_interfaces")

# install(DIRECTORY "/home/agx/canopen_test/build/iris_interfaces/rosidl_generator_c/iris_interfaces/" "DESTINATION" "include/iris_interfaces/iris_interfaces" "PATTERN" "*.h")
ament_cmake_symlink_install_directory("/home/agx/canopen_test/iris_interfaces" DIRECTORY "/home/agx/canopen_test/build/iris_interfaces/rosidl_generator_c/iris_interfaces/" "DESTINATION" "include/iris_interfaces/iris_interfaces" "PATTERN" "*.h")

# install(FILES "/opt/ros/humble/lib/python3.10/site-packages/ament_package/template/environment_hook/library_path.sh" "DESTINATION" "share/iris_interfaces/environment")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/opt/ros/humble/lib/python3.10/site-packages/ament_package/template/environment_hook/library_path.sh" "DESTINATION" "share/iris_interfaces/environment")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/ament_cmake_environment_hooks/library_path.dsv" "DESTINATION" "share/iris_interfaces/environment")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/ament_cmake_environment_hooks/library_path.dsv" "DESTINATION" "share/iris_interfaces/environment")

# install(DIRECTORY "/home/agx/canopen_test/build/iris_interfaces/rosidl_typesupport_fastrtps_c/iris_interfaces/" "DESTINATION" "include/iris_interfaces/iris_interfaces" "PATTERN_EXCLUDE" "*.cpp")
ament_cmake_symlink_install_directory("/home/agx/canopen_test/iris_interfaces" DIRECTORY "/home/agx/canopen_test/build/iris_interfaces/rosidl_typesupport_fastrtps_c/iris_interfaces/" "DESTINATION" "include/iris_interfaces/iris_interfaces" "PATTERN_EXCLUDE" "*.cpp")

# install(DIRECTORY "/home/agx/canopen_test/build/iris_interfaces/rosidl_typesupport_introspection_c/iris_interfaces/" "DESTINATION" "include/iris_interfaces/iris_interfaces" "PATTERN" "*.h")
ament_cmake_symlink_install_directory("/home/agx/canopen_test/iris_interfaces" DIRECTORY "/home/agx/canopen_test/build/iris_interfaces/rosidl_typesupport_introspection_c/iris_interfaces/" "DESTINATION" "include/iris_interfaces/iris_interfaces" "PATTERN" "*.h")

# install(DIRECTORY "/home/agx/canopen_test/build/iris_interfaces/rosidl_generator_cpp/iris_interfaces/" "DESTINATION" "include/iris_interfaces/iris_interfaces" "PATTERN" "*.hpp")
ament_cmake_symlink_install_directory("/home/agx/canopen_test/iris_interfaces" DIRECTORY "/home/agx/canopen_test/build/iris_interfaces/rosidl_generator_cpp/iris_interfaces/" "DESTINATION" "include/iris_interfaces/iris_interfaces" "PATTERN" "*.hpp")

# install(DIRECTORY "/home/agx/canopen_test/build/iris_interfaces/rosidl_typesupport_fastrtps_cpp/iris_interfaces/" "DESTINATION" "include/iris_interfaces/iris_interfaces" "PATTERN_EXCLUDE" "*.cpp")
ament_cmake_symlink_install_directory("/home/agx/canopen_test/iris_interfaces" DIRECTORY "/home/agx/canopen_test/build/iris_interfaces/rosidl_typesupport_fastrtps_cpp/iris_interfaces/" "DESTINATION" "include/iris_interfaces/iris_interfaces" "PATTERN_EXCLUDE" "*.cpp")

# install(DIRECTORY "/home/agx/canopen_test/build/iris_interfaces/rosidl_typesupport_introspection_cpp/iris_interfaces/" "DESTINATION" "include/iris_interfaces/iris_interfaces" "PATTERN" "*.hpp")
ament_cmake_symlink_install_directory("/home/agx/canopen_test/iris_interfaces" DIRECTORY "/home/agx/canopen_test/build/iris_interfaces/rosidl_typesupport_introspection_cpp/iris_interfaces/" "DESTINATION" "include/iris_interfaces/iris_interfaces" "PATTERN" "*.hpp")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/ament_cmake_environment_hooks/pythonpath.sh" "DESTINATION" "share/iris_interfaces/environment")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/ament_cmake_environment_hooks/pythonpath.sh" "DESTINATION" "share/iris_interfaces/environment")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/ament_cmake_environment_hooks/pythonpath.dsv" "DESTINATION" "share/iris_interfaces/environment")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/ament_cmake_environment_hooks/pythonpath.dsv" "DESTINATION" "share/iris_interfaces/environment")

# install(DIRECTORY "/home/agx/canopen_test/build/iris_interfaces/ament_cmake_python/iris_interfaces/iris_interfaces.egg-info/" "DESTINATION" "lib/python3.10/site-packages/iris_interfaces-0.5.13-py3.10.egg-info")
ament_cmake_symlink_install_directory("/home/agx/canopen_test/iris_interfaces" DIRECTORY "/home/agx/canopen_test/build/iris_interfaces/ament_cmake_python/iris_interfaces/iris_interfaces.egg-info/" "DESTINATION" "lib/python3.10/site-packages/iris_interfaces-0.5.13-py3.10.egg-info")

# install(DIRECTORY "/home/agx/canopen_test/build/iris_interfaces/rosidl_generator_py/iris_interfaces/" "DESTINATION" "lib/python3.10/site-packages/iris_interfaces" "PATTERN_EXCLUDE" "*.pyc" "PATTERN_EXCLUDE" "__pycache__")
ament_cmake_symlink_install_directory("/home/agx/canopen_test/iris_interfaces" DIRECTORY "/home/agx/canopen_test/build/iris_interfaces/rosidl_generator_py/iris_interfaces/" "DESTINATION" "lib/python3.10/site-packages/iris_interfaces" "PATTERN_EXCLUDE" "*.pyc" "PATTERN_EXCLUDE" "__pycache__")

# install("TARGETS" "iris_interfaces__rosidl_typesupport_fastrtps_c__pyext" "DESTINATION" "lib/python3.10/site-packages/iris_interfaces")
include("/home/agx/canopen_test/build/iris_interfaces/ament_cmake_symlink_install_targets_0_${CMAKE_INSTALL_CONFIG_NAME}.cmake")

# install("TARGETS" "iris_interfaces__rosidl_typesupport_introspection_c__pyext" "DESTINATION" "lib/python3.10/site-packages/iris_interfaces")
include("/home/agx/canopen_test/build/iris_interfaces/ament_cmake_symlink_install_targets_1_${CMAKE_INSTALL_CONFIG_NAME}.cmake")

# install("TARGETS" "iris_interfaces__rosidl_typesupport_c__pyext" "DESTINATION" "lib/python3.10/site-packages/iris_interfaces")
include("/home/agx/canopen_test/build/iris_interfaces/ament_cmake_symlink_install_targets_2_${CMAKE_INSTALL_CONFIG_NAME}.cmake")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/ament_cmake_index/share/ament_index/resource_index/rust_packages/iris_interfaces" "DESTINATION" "share/ament_index/resource_index/rust_packages")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/ament_cmake_index/share/ament_index/resource_index/rust_packages/iris_interfaces" "DESTINATION" "share/ament_index/resource_index/rust_packages")

# install(DIRECTORY "/home/agx/canopen_test/build/iris_interfaces/rosidl_generator_rs/iris_interfaces/rust" "DESTINATION" "share/iris_interfaces")
ament_cmake_symlink_install_directory("/home/agx/canopen_test/iris_interfaces" DIRECTORY "/home/agx/canopen_test/build/iris_interfaces/rosidl_generator_rs/iris_interfaces/rust" "DESTINATION" "share/iris_interfaces")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/msg/WheelCommandSpeed.idl" "DESTINATION" "share/iris_interfaces/msg")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/msg/WheelCommandSpeed.idl" "DESTINATION" "share/iris_interfaces/msg")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/msg/WheelEncoders.idl" "DESTINATION" "share/iris_interfaces/msg")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/msg/WheelEncoders.idl" "DESTINATION" "share/iris_interfaces/msg")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/msg/SensorStatus.idl" "DESTINATION" "share/iris_interfaces/msg")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/msg/SensorStatus.idl" "DESTINATION" "share/iris_interfaces/msg")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/msg/MotorStatus.idl" "DESTINATION" "share/iris_interfaces/msg")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/msg/MotorStatus.idl" "DESTINATION" "share/iris_interfaces/msg")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/msg/MotorControllerStatus.idl" "DESTINATION" "share/iris_interfaces/msg")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/msg/MotorControllerStatus.idl" "DESTINATION" "share/iris_interfaces/msg")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/msg/UltrasonicRanges.idl" "DESTINATION" "share/iris_interfaces/msg")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/msg/UltrasonicRanges.idl" "DESTINATION" "share/iris_interfaces/msg")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/msg/WaterTankLevels.idl" "DESTINATION" "share/iris_interfaces/msg")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/msg/WaterTankLevels.idl" "DESTINATION" "share/iris_interfaces/msg")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/msg/HeadbandMode.idl" "DESTINATION" "share/iris_interfaces/msg")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/msg/HeadbandMode.idl" "DESTINATION" "share/iris_interfaces/msg")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/msg/NavigationMode.idl" "DESTINATION" "share/iris_interfaces/msg")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/msg/NavigationMode.idl" "DESTINATION" "share/iris_interfaces/msg")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/msg/FollowPathResult.idl" "DESTINATION" "share/iris_interfaces/msg")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/msg/FollowPathResult.idl" "DESTINATION" "share/iris_interfaces/msg")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/msg/OTAStatus.idl" "DESTINATION" "share/iris_interfaces/msg")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/msg/OTAStatus.idl" "DESTINATION" "share/iris_interfaces/msg")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/msg/SystemSoftwareStatus.idl" "DESTINATION" "share/iris_interfaces/msg")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/msg/SystemSoftwareStatus.idl" "DESTINATION" "share/iris_interfaces/msg")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/msg/MenderClientStatus.idl" "DESTINATION" "share/iris_interfaces/msg")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/msg/MenderClientStatus.idl" "DESTINATION" "share/iris_interfaces/msg")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/msg/A5Status.idl" "DESTINATION" "share/iris_interfaces/msg")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/msg/A5Status.idl" "DESTINATION" "share/iris_interfaces/msg")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/msg/LedControl.idl" "DESTINATION" "share/iris_interfaces/msg")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/msg/LedControl.idl" "DESTINATION" "share/iris_interfaces/msg")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/msg/A2FunctionalStatus.idl" "DESTINATION" "share/iris_interfaces/msg")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/msg/A2FunctionalStatus.idl" "DESTINATION" "share/iris_interfaces/msg")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/msg/A2Command.idl" "DESTINATION" "share/iris_interfaces/msg")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/msg/A2Command.idl" "DESTINATION" "share/iris_interfaces/msg")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/msg/VacuumStatus.idl" "DESTINATION" "share/iris_interfaces/msg")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/msg/VacuumStatus.idl" "DESTINATION" "share/iris_interfaces/msg")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/msg/VacuumFaults.idl" "DESTINATION" "share/iris_interfaces/msg")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/msg/VacuumFaults.idl" "DESTINATION" "share/iris_interfaces/msg")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/msg/BrushStatus.idl" "DESTINATION" "share/iris_interfaces/msg")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/msg/BrushStatus.idl" "DESTINATION" "share/iris_interfaces/msg")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/msg/BrushFaults.idl" "DESTINATION" "share/iris_interfaces/msg")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/msg/BrushFaults.idl" "DESTINATION" "share/iris_interfaces/msg")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/msg/A2FaultStatus.idl" "DESTINATION" "share/iris_interfaces/msg")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/msg/A2FaultStatus.idl" "DESTINATION" "share/iris_interfaces/msg")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/msg/ActuatorStatus.idl" "DESTINATION" "share/iris_interfaces/msg")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/msg/ActuatorStatus.idl" "DESTINATION" "share/iris_interfaces/msg")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/srv/UpdateMotorControllerParameters.idl" "DESTINATION" "share/iris_interfaces/srv")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/srv/UpdateMotorControllerParameters.idl" "DESTINATION" "share/iris_interfaces/srv")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/srv/RestartMotorController.idl" "DESTINATION" "share/iris_interfaces/srv")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/srv/RestartMotorController.idl" "DESTINATION" "share/iris_interfaces/srv")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/srv/GetWifiStatus.idl" "DESTINATION" "share/iris_interfaces/srv")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/srv/GetWifiStatus.idl" "DESTINATION" "share/iris_interfaces/srv")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/srv/WifiDiscovery.idl" "DESTINATION" "share/iris_interfaces/srv")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/srv/WifiDiscovery.idl" "DESTINATION" "share/iris_interfaces/srv")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/srv/ConnectWifi.idl" "DESTINATION" "share/iris_interfaces/srv")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/srv/ConnectWifi.idl" "DESTINATION" "share/iris_interfaces/srv")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/srv/DisconnectWifi.idl" "DESTINATION" "share/iris_interfaces/srv")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/srv/DisconnectWifi.idl" "DESTINATION" "share/iris_interfaces/srv")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/srv/ProcessManager.idl" "DESTINATION" "share/iris_interfaces/srv")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/srv/ProcessManager.idl" "DESTINATION" "share/iris_interfaces/srv")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/srv/StateManager.idl" "DESTINATION" "share/iris_interfaces/srv")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/srv/StateManager.idl" "DESTINATION" "share/iris_interfaces/srv")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/srv/ResetWheelEncoders.idl" "DESTINATION" "share/iris_interfaces/srv")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/srv/ResetWheelEncoders.idl" "DESTINATION" "share/iris_interfaces/srv")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/srv/UpdateMotorControllerReferenceSource.idl" "DESTINATION" "share/iris_interfaces/srv")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/srv/UpdateMotorControllerReferenceSource.idl" "DESTINATION" "share/iris_interfaces/srv")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/srv/A2Command.idl" "DESTINATION" "share/iris_interfaces/srv")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/srv/A2Command.idl" "DESTINATION" "share/iris_interfaces/srv")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/srv/ResetA2Faults.idl" "DESTINATION" "share/iris_interfaces/srv")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/srv/ResetA2Faults.idl" "DESTINATION" "share/iris_interfaces/srv")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/srv/AlarmReset.idl" "DESTINATION" "share/iris_interfaces/srv")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/srv/AlarmReset.idl" "DESTINATION" "share/iris_interfaces/srv")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/action/ComputePathCoverage.idl" "DESTINATION" "share/iris_interfaces/action")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/action/ComputePathCoverage.idl" "DESTINATION" "share/iris_interfaces/action")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/action/NavigatePathCoverage.idl" "DESTINATION" "share/iris_interfaces/action")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/action/NavigatePathCoverage.idl" "DESTINATION" "share/iris_interfaces/action")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/action/PathCoverageController.idl" "DESTINATION" "share/iris_interfaces/action")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_adapter/iris_interfaces/action/PathCoverageController.idl" "DESTINATION" "share/iris_interfaces/action")

# install(FILES "/home/agx/canopen_test/iris_interfaces/msg/WheelCommandSpeed.msg" "DESTINATION" "share/iris_interfaces/msg")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/iris_interfaces/msg/WheelCommandSpeed.msg" "DESTINATION" "share/iris_interfaces/msg")

# install(FILES "/home/agx/canopen_test/iris_interfaces/msg/WheelEncoders.msg" "DESTINATION" "share/iris_interfaces/msg")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/iris_interfaces/msg/WheelEncoders.msg" "DESTINATION" "share/iris_interfaces/msg")

# install(FILES "/home/agx/canopen_test/iris_interfaces/msg/SensorStatus.msg" "DESTINATION" "share/iris_interfaces/msg")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/iris_interfaces/msg/SensorStatus.msg" "DESTINATION" "share/iris_interfaces/msg")

# install(FILES "/home/agx/canopen_test/iris_interfaces/msg/MotorStatus.msg" "DESTINATION" "share/iris_interfaces/msg")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/iris_interfaces/msg/MotorStatus.msg" "DESTINATION" "share/iris_interfaces/msg")

# install(FILES "/home/agx/canopen_test/iris_interfaces/msg/MotorControllerStatus.msg" "DESTINATION" "share/iris_interfaces/msg")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/iris_interfaces/msg/MotorControllerStatus.msg" "DESTINATION" "share/iris_interfaces/msg")

# install(FILES "/home/agx/canopen_test/iris_interfaces/msg/UltrasonicRanges.msg" "DESTINATION" "share/iris_interfaces/msg")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/iris_interfaces/msg/UltrasonicRanges.msg" "DESTINATION" "share/iris_interfaces/msg")

# install(FILES "/home/agx/canopen_test/iris_interfaces/msg/WaterTankLevels.msg" "DESTINATION" "share/iris_interfaces/msg")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/iris_interfaces/msg/WaterTankLevels.msg" "DESTINATION" "share/iris_interfaces/msg")

# install(FILES "/home/agx/canopen_test/iris_interfaces/msg/HeadbandMode.msg" "DESTINATION" "share/iris_interfaces/msg")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/iris_interfaces/msg/HeadbandMode.msg" "DESTINATION" "share/iris_interfaces/msg")

# install(FILES "/home/agx/canopen_test/iris_interfaces/msg/NavigationMode.msg" "DESTINATION" "share/iris_interfaces/msg")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/iris_interfaces/msg/NavigationMode.msg" "DESTINATION" "share/iris_interfaces/msg")

# install(FILES "/home/agx/canopen_test/iris_interfaces/msg/FollowPathResult.msg" "DESTINATION" "share/iris_interfaces/msg")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/iris_interfaces/msg/FollowPathResult.msg" "DESTINATION" "share/iris_interfaces/msg")

# install(FILES "/home/agx/canopen_test/iris_interfaces/msg/OTAStatus.msg" "DESTINATION" "share/iris_interfaces/msg")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/iris_interfaces/msg/OTAStatus.msg" "DESTINATION" "share/iris_interfaces/msg")

# install(FILES "/home/agx/canopen_test/iris_interfaces/msg/SystemSoftwareStatus.msg" "DESTINATION" "share/iris_interfaces/msg")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/iris_interfaces/msg/SystemSoftwareStatus.msg" "DESTINATION" "share/iris_interfaces/msg")

# install(FILES "/home/agx/canopen_test/iris_interfaces/msg/MenderClientStatus.msg" "DESTINATION" "share/iris_interfaces/msg")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/iris_interfaces/msg/MenderClientStatus.msg" "DESTINATION" "share/iris_interfaces/msg")

# install(FILES "/home/agx/canopen_test/iris_interfaces/msg/A5Status.msg" "DESTINATION" "share/iris_interfaces/msg")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/iris_interfaces/msg/A5Status.msg" "DESTINATION" "share/iris_interfaces/msg")

# install(FILES "/home/agx/canopen_test/iris_interfaces/msg/LedControl.msg" "DESTINATION" "share/iris_interfaces/msg")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/iris_interfaces/msg/LedControl.msg" "DESTINATION" "share/iris_interfaces/msg")

# install(FILES "/home/agx/canopen_test/iris_interfaces/msg/A2FunctionalStatus.msg" "DESTINATION" "share/iris_interfaces/msg")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/iris_interfaces/msg/A2FunctionalStatus.msg" "DESTINATION" "share/iris_interfaces/msg")

# install(FILES "/home/agx/canopen_test/iris_interfaces/msg/A2Command.msg" "DESTINATION" "share/iris_interfaces/msg")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/iris_interfaces/msg/A2Command.msg" "DESTINATION" "share/iris_interfaces/msg")

# install(FILES "/home/agx/canopen_test/iris_interfaces/msg/VacuumStatus.msg" "DESTINATION" "share/iris_interfaces/msg")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/iris_interfaces/msg/VacuumStatus.msg" "DESTINATION" "share/iris_interfaces/msg")

# install(FILES "/home/agx/canopen_test/iris_interfaces/msg/VacuumFaults.msg" "DESTINATION" "share/iris_interfaces/msg")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/iris_interfaces/msg/VacuumFaults.msg" "DESTINATION" "share/iris_interfaces/msg")

# install(FILES "/home/agx/canopen_test/iris_interfaces/msg/BrushStatus.msg" "DESTINATION" "share/iris_interfaces/msg")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/iris_interfaces/msg/BrushStatus.msg" "DESTINATION" "share/iris_interfaces/msg")

# install(FILES "/home/agx/canopen_test/iris_interfaces/msg/BrushFaults.msg" "DESTINATION" "share/iris_interfaces/msg")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/iris_interfaces/msg/BrushFaults.msg" "DESTINATION" "share/iris_interfaces/msg")

# install(FILES "/home/agx/canopen_test/iris_interfaces/msg/A2FaultStatus.msg" "DESTINATION" "share/iris_interfaces/msg")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/iris_interfaces/msg/A2FaultStatus.msg" "DESTINATION" "share/iris_interfaces/msg")

# install(FILES "/home/agx/canopen_test/iris_interfaces/msg/ActuatorStatus.msg" "DESTINATION" "share/iris_interfaces/msg")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/iris_interfaces/msg/ActuatorStatus.msg" "DESTINATION" "share/iris_interfaces/msg")

# install(FILES "/home/agx/canopen_test/iris_interfaces/srv/UpdateMotorControllerParameters.srv" "DESTINATION" "share/iris_interfaces/srv")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/iris_interfaces/srv/UpdateMotorControllerParameters.srv" "DESTINATION" "share/iris_interfaces/srv")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_cmake/srv/UpdateMotorControllerParameters_Request.msg" "DESTINATION" "share/iris_interfaces/srv")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_cmake/srv/UpdateMotorControllerParameters_Request.msg" "DESTINATION" "share/iris_interfaces/srv")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_cmake/srv/UpdateMotorControllerParameters_Response.msg" "DESTINATION" "share/iris_interfaces/srv")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_cmake/srv/UpdateMotorControllerParameters_Response.msg" "DESTINATION" "share/iris_interfaces/srv")

# install(FILES "/home/agx/canopen_test/iris_interfaces/srv/RestartMotorController.srv" "DESTINATION" "share/iris_interfaces/srv")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/iris_interfaces/srv/RestartMotorController.srv" "DESTINATION" "share/iris_interfaces/srv")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_cmake/srv/RestartMotorController_Request.msg" "DESTINATION" "share/iris_interfaces/srv")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_cmake/srv/RestartMotorController_Request.msg" "DESTINATION" "share/iris_interfaces/srv")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_cmake/srv/RestartMotorController_Response.msg" "DESTINATION" "share/iris_interfaces/srv")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_cmake/srv/RestartMotorController_Response.msg" "DESTINATION" "share/iris_interfaces/srv")

# install(FILES "/home/agx/canopen_test/iris_interfaces/srv/GetWifiStatus.srv" "DESTINATION" "share/iris_interfaces/srv")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/iris_interfaces/srv/GetWifiStatus.srv" "DESTINATION" "share/iris_interfaces/srv")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_cmake/srv/GetWifiStatus_Request.msg" "DESTINATION" "share/iris_interfaces/srv")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_cmake/srv/GetWifiStatus_Request.msg" "DESTINATION" "share/iris_interfaces/srv")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_cmake/srv/GetWifiStatus_Response.msg" "DESTINATION" "share/iris_interfaces/srv")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_cmake/srv/GetWifiStatus_Response.msg" "DESTINATION" "share/iris_interfaces/srv")

# install(FILES "/home/agx/canopen_test/iris_interfaces/srv/WifiDiscovery.srv" "DESTINATION" "share/iris_interfaces/srv")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/iris_interfaces/srv/WifiDiscovery.srv" "DESTINATION" "share/iris_interfaces/srv")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_cmake/srv/WifiDiscovery_Request.msg" "DESTINATION" "share/iris_interfaces/srv")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_cmake/srv/WifiDiscovery_Request.msg" "DESTINATION" "share/iris_interfaces/srv")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_cmake/srv/WifiDiscovery_Response.msg" "DESTINATION" "share/iris_interfaces/srv")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_cmake/srv/WifiDiscovery_Response.msg" "DESTINATION" "share/iris_interfaces/srv")

# install(FILES "/home/agx/canopen_test/iris_interfaces/srv/ConnectWifi.srv" "DESTINATION" "share/iris_interfaces/srv")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/iris_interfaces/srv/ConnectWifi.srv" "DESTINATION" "share/iris_interfaces/srv")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_cmake/srv/ConnectWifi_Request.msg" "DESTINATION" "share/iris_interfaces/srv")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_cmake/srv/ConnectWifi_Request.msg" "DESTINATION" "share/iris_interfaces/srv")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_cmake/srv/ConnectWifi_Response.msg" "DESTINATION" "share/iris_interfaces/srv")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_cmake/srv/ConnectWifi_Response.msg" "DESTINATION" "share/iris_interfaces/srv")

# install(FILES "/home/agx/canopen_test/iris_interfaces/srv/DisconnectWifi.srv" "DESTINATION" "share/iris_interfaces/srv")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/iris_interfaces/srv/DisconnectWifi.srv" "DESTINATION" "share/iris_interfaces/srv")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_cmake/srv/DisconnectWifi_Request.msg" "DESTINATION" "share/iris_interfaces/srv")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_cmake/srv/DisconnectWifi_Request.msg" "DESTINATION" "share/iris_interfaces/srv")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_cmake/srv/DisconnectWifi_Response.msg" "DESTINATION" "share/iris_interfaces/srv")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_cmake/srv/DisconnectWifi_Response.msg" "DESTINATION" "share/iris_interfaces/srv")

# install(FILES "/home/agx/canopen_test/iris_interfaces/srv/ProcessManager.srv" "DESTINATION" "share/iris_interfaces/srv")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/iris_interfaces/srv/ProcessManager.srv" "DESTINATION" "share/iris_interfaces/srv")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_cmake/srv/ProcessManager_Request.msg" "DESTINATION" "share/iris_interfaces/srv")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_cmake/srv/ProcessManager_Request.msg" "DESTINATION" "share/iris_interfaces/srv")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_cmake/srv/ProcessManager_Response.msg" "DESTINATION" "share/iris_interfaces/srv")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_cmake/srv/ProcessManager_Response.msg" "DESTINATION" "share/iris_interfaces/srv")

# install(FILES "/home/agx/canopen_test/iris_interfaces/srv/StateManager.srv" "DESTINATION" "share/iris_interfaces/srv")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/iris_interfaces/srv/StateManager.srv" "DESTINATION" "share/iris_interfaces/srv")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_cmake/srv/StateManager_Request.msg" "DESTINATION" "share/iris_interfaces/srv")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_cmake/srv/StateManager_Request.msg" "DESTINATION" "share/iris_interfaces/srv")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_cmake/srv/StateManager_Response.msg" "DESTINATION" "share/iris_interfaces/srv")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_cmake/srv/StateManager_Response.msg" "DESTINATION" "share/iris_interfaces/srv")

# install(FILES "/home/agx/canopen_test/iris_interfaces/srv/ResetWheelEncoders.srv" "DESTINATION" "share/iris_interfaces/srv")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/iris_interfaces/srv/ResetWheelEncoders.srv" "DESTINATION" "share/iris_interfaces/srv")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_cmake/srv/ResetWheelEncoders_Request.msg" "DESTINATION" "share/iris_interfaces/srv")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_cmake/srv/ResetWheelEncoders_Request.msg" "DESTINATION" "share/iris_interfaces/srv")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_cmake/srv/ResetWheelEncoders_Response.msg" "DESTINATION" "share/iris_interfaces/srv")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_cmake/srv/ResetWheelEncoders_Response.msg" "DESTINATION" "share/iris_interfaces/srv")

# install(FILES "/home/agx/canopen_test/iris_interfaces/srv/UpdateMotorControllerReferenceSource.srv" "DESTINATION" "share/iris_interfaces/srv")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/iris_interfaces/srv/UpdateMotorControllerReferenceSource.srv" "DESTINATION" "share/iris_interfaces/srv")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_cmake/srv/UpdateMotorControllerReferenceSource_Request.msg" "DESTINATION" "share/iris_interfaces/srv")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_cmake/srv/UpdateMotorControllerReferenceSource_Request.msg" "DESTINATION" "share/iris_interfaces/srv")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_cmake/srv/UpdateMotorControllerReferenceSource_Response.msg" "DESTINATION" "share/iris_interfaces/srv")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_cmake/srv/UpdateMotorControllerReferenceSource_Response.msg" "DESTINATION" "share/iris_interfaces/srv")

# install(FILES "/home/agx/canopen_test/iris_interfaces/srv/A2Command.srv" "DESTINATION" "share/iris_interfaces/srv")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/iris_interfaces/srv/A2Command.srv" "DESTINATION" "share/iris_interfaces/srv")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_cmake/srv/A2Command_Request.msg" "DESTINATION" "share/iris_interfaces/srv")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_cmake/srv/A2Command_Request.msg" "DESTINATION" "share/iris_interfaces/srv")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_cmake/srv/A2Command_Response.msg" "DESTINATION" "share/iris_interfaces/srv")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_cmake/srv/A2Command_Response.msg" "DESTINATION" "share/iris_interfaces/srv")

# install(FILES "/home/agx/canopen_test/iris_interfaces/srv/ResetA2Faults.srv" "DESTINATION" "share/iris_interfaces/srv")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/iris_interfaces/srv/ResetA2Faults.srv" "DESTINATION" "share/iris_interfaces/srv")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_cmake/srv/ResetA2Faults_Request.msg" "DESTINATION" "share/iris_interfaces/srv")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_cmake/srv/ResetA2Faults_Request.msg" "DESTINATION" "share/iris_interfaces/srv")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_cmake/srv/ResetA2Faults_Response.msg" "DESTINATION" "share/iris_interfaces/srv")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_cmake/srv/ResetA2Faults_Response.msg" "DESTINATION" "share/iris_interfaces/srv")

# install(FILES "/home/agx/canopen_test/iris_interfaces/srv/AlarmReset.srv" "DESTINATION" "share/iris_interfaces/srv")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/iris_interfaces/srv/AlarmReset.srv" "DESTINATION" "share/iris_interfaces/srv")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_cmake/srv/AlarmReset_Request.msg" "DESTINATION" "share/iris_interfaces/srv")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_cmake/srv/AlarmReset_Request.msg" "DESTINATION" "share/iris_interfaces/srv")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_cmake/srv/AlarmReset_Response.msg" "DESTINATION" "share/iris_interfaces/srv")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_cmake/srv/AlarmReset_Response.msg" "DESTINATION" "share/iris_interfaces/srv")

# install(FILES "/home/agx/canopen_test/iris_interfaces/action/ComputePathCoverage.action" "DESTINATION" "share/iris_interfaces/action")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/iris_interfaces/action/ComputePathCoverage.action" "DESTINATION" "share/iris_interfaces/action")

# install(FILES "/home/agx/canopen_test/iris_interfaces/action/NavigatePathCoverage.action" "DESTINATION" "share/iris_interfaces/action")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/iris_interfaces/action/NavigatePathCoverage.action" "DESTINATION" "share/iris_interfaces/action")

# install(FILES "/home/agx/canopen_test/iris_interfaces/action/PathCoverageController.action" "DESTINATION" "share/iris_interfaces/action")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/iris_interfaces/action/PathCoverageController.action" "DESTINATION" "share/iris_interfaces/action")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/iris_interfaces" "DESTINATION" "share/ament_index/resource_index/package_run_dependencies")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/iris_interfaces" "DESTINATION" "share/ament_index/resource_index/package_run_dependencies")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/iris_interfaces" "DESTINATION" "share/ament_index/resource_index/parent_prefix_path")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/iris_interfaces" "DESTINATION" "share/ament_index/resource_index/parent_prefix_path")

# install(FILES "/opt/ros/humble/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh" "DESTINATION" "share/iris_interfaces/environment")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/opt/ros/humble/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh" "DESTINATION" "share/iris_interfaces/environment")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/ament_cmake_environment_hooks/ament_prefix_path.dsv" "DESTINATION" "share/iris_interfaces/environment")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/ament_cmake_environment_hooks/ament_prefix_path.dsv" "DESTINATION" "share/iris_interfaces/environment")

# install(FILES "/opt/ros/humble/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh" "DESTINATION" "share/iris_interfaces/environment")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/opt/ros/humble/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh" "DESTINATION" "share/iris_interfaces/environment")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/ament_cmake_environment_hooks/path.dsv" "DESTINATION" "share/iris_interfaces/environment")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/ament_cmake_environment_hooks/path.dsv" "DESTINATION" "share/iris_interfaces/environment")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/ament_cmake_environment_hooks/local_setup.bash" "DESTINATION" "share/iris_interfaces")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/ament_cmake_environment_hooks/local_setup.bash" "DESTINATION" "share/iris_interfaces")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/ament_cmake_environment_hooks/local_setup.sh" "DESTINATION" "share/iris_interfaces")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/ament_cmake_environment_hooks/local_setup.sh" "DESTINATION" "share/iris_interfaces")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/ament_cmake_environment_hooks/local_setup.zsh" "DESTINATION" "share/iris_interfaces")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/ament_cmake_environment_hooks/local_setup.zsh" "DESTINATION" "share/iris_interfaces")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/ament_cmake_environment_hooks/local_setup.dsv" "DESTINATION" "share/iris_interfaces")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/ament_cmake_environment_hooks/local_setup.dsv" "DESTINATION" "share/iris_interfaces")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/ament_cmake_environment_hooks/package.dsv" "DESTINATION" "share/iris_interfaces")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/ament_cmake_environment_hooks/package.dsv" "DESTINATION" "share/iris_interfaces")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/ament_cmake_index/share/ament_index/resource_index/packages/iris_interfaces" "DESTINATION" "share/ament_index/resource_index/packages")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/ament_cmake_index/share/ament_index/resource_index/packages/iris_interfaces" "DESTINATION" "share/ament_index/resource_index/packages")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_cmake/rosidl_cmake-extras.cmake" "DESTINATION" "share/iris_interfaces/cmake")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_cmake/rosidl_cmake-extras.cmake" "DESTINATION" "share/iris_interfaces/cmake")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/ament_cmake_export_dependencies/ament_cmake_export_dependencies-extras.cmake" "DESTINATION" "share/iris_interfaces/cmake")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/ament_cmake_export_dependencies/ament_cmake_export_dependencies-extras.cmake" "DESTINATION" "share/iris_interfaces/cmake")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/ament_cmake_export_include_directories/ament_cmake_export_include_directories-extras.cmake" "DESTINATION" "share/iris_interfaces/cmake")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/ament_cmake_export_include_directories/ament_cmake_export_include_directories-extras.cmake" "DESTINATION" "share/iris_interfaces/cmake")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/ament_cmake_export_libraries/ament_cmake_export_libraries-extras.cmake" "DESTINATION" "share/iris_interfaces/cmake")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/ament_cmake_export_libraries/ament_cmake_export_libraries-extras.cmake" "DESTINATION" "share/iris_interfaces/cmake")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/ament_cmake_export_targets/ament_cmake_export_targets-extras.cmake" "DESTINATION" "share/iris_interfaces/cmake")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/ament_cmake_export_targets/ament_cmake_export_targets-extras.cmake" "DESTINATION" "share/iris_interfaces/cmake")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_cmake/rosidl_cmake_export_typesupport_targets-extras.cmake" "DESTINATION" "share/iris_interfaces/cmake")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_cmake/rosidl_cmake_export_typesupport_targets-extras.cmake" "DESTINATION" "share/iris_interfaces/cmake")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_cmake/rosidl_cmake_export_typesupport_libraries-extras.cmake" "DESTINATION" "share/iris_interfaces/cmake")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/rosidl_cmake/rosidl_cmake_export_typesupport_libraries-extras.cmake" "DESTINATION" "share/iris_interfaces/cmake")

# install(FILES "/home/agx/canopen_test/build/iris_interfaces/ament_cmake_core/iris_interfacesConfig.cmake" "/home/agx/canopen_test/build/iris_interfaces/ament_cmake_core/iris_interfacesConfig-version.cmake" "DESTINATION" "share/iris_interfaces/cmake")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/build/iris_interfaces/ament_cmake_core/iris_interfacesConfig.cmake" "/home/agx/canopen_test/build/iris_interfaces/ament_cmake_core/iris_interfacesConfig-version.cmake" "DESTINATION" "share/iris_interfaces/cmake")

# install(FILES "/home/agx/canopen_test/iris_interfaces/package.xml" "DESTINATION" "share/iris_interfaces")
ament_cmake_symlink_install_files("/home/agx/canopen_test/iris_interfaces" FILES "/home/agx/canopen_test/iris_interfaces/package.xml" "DESTINATION" "share/iris_interfaces")
