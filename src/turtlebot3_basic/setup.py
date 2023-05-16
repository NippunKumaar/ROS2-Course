from setuptools import setup

package_name = 'turtlebot3_basic'

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
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
        'start_stop_node = turtlebot3_basic.start_stop:main',
        'obs_detection_node = turtlebot3_basic.obs_detection:main',
        ],
    },
)
