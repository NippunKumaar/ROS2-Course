from setuptools import find_packages
from setuptools import setup

setup(
    name='word_count_msg',
    version='0.0.0',
    packages=find_packages(
        include=('word_count_msg', 'word_count_msg.*')),
)
