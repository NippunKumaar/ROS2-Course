from setuptools import setup

package_name = 'fibonacci_server_client'

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
        'fibonacci_server = fibonacci_server_client.fibonacci_action_server:main',
        'fibonacci_server_feedback = fibonacci_server_client.fibonacci_action_server_feedback:main',
        'fibonacci_action_client = fibonacci_server_client.fibonacci_action_client:main',
        ],
    },
)
