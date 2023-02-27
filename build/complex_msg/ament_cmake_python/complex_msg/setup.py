from setuptools import find_packages
from setuptools import setup

setup(
    name='complex_msg',
    version='0.0.0',
    packages=find_packages(
        include=('complex_msg', 'complex_msg.*')),
)
