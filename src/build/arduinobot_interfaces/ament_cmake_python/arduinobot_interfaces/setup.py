from setuptools import find_packages
from setuptools import setup

setup(
    name='arduinobot_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('arduinobot_interfaces', 'arduinobot_interfaces.*')),
)
