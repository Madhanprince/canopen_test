from setuptools import find_packages
from setuptools import setup

setup(
    name='iris_interfaces',
    version='0.5.13',
    packages=find_packages(
        include=('iris_interfaces', 'iris_interfaces.*')),
)
