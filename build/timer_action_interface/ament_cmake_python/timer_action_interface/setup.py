from setuptools import find_packages
from setuptools import setup

setup(
    name='timer_action_interface',
    version='0.0.0',
    packages=find_packages(
        include=('timer_action_interface', 'timer_action_interface.*')),
)
