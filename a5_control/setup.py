import os
from glob import glob
from setuptools import find_packages, setup

package_name = 'a5_control'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        # Registers the package with the ROS 2 environment
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        # Includes the package manifest
        ('share/' + package_name, ['package.xml']),
        (("share/" + package_name + "/scripts", ["scripts/can_init.sh"])),
         # Automatically includes your IRIS_A5.eds file from the config directory
        (os.path.join('share', package_name, 'config'), glob(os.path.join('config', '*.eds'))),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Developer',
    maintainer_email='developer@todo.todo',
    description='CANopen test package for IRIS A5 motor control',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "a5_control_exe = a5_control.a5_control:main",
        ],
    },
)