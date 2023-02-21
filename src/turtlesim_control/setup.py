from setuptools import setup

package_name = 'turtlesim_control'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='nippun',
    maintainer_email='nippun05@gmail.com',
    description='Package to control turtlesim turtle',
    license='BSD',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'turtle_move = turtlesim_control.turtle_control:main',
        ],
    },
)
