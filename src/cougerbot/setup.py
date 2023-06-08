from setuptools import setup

package_name = 'cougerbot'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml', 'launch/cougerbot_launch.xml', 'launch/cougerbot_rviz_launch.xml']),
        ('share/'+ package_name+'/urdf', ['urdf/cougerbot.urdf']),
        ('share/'+ package_name+'/config', ['config/controllers.yaml']),

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
        'spawn_cougerbot=cougerbot.cougerbot_spawn_client:main',
        ],
    },
)
