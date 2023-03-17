from setuptools import find_packages
from setuptools import setup

setup(
    name='add_two_ints',
    version='0.0.0',
    packages=find_packages(
        include=('add_two_ints', 'add_two_ints.*')),
)
