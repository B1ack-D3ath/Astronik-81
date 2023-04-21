from setuptools import setup

package_name = 'py_test'

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
    maintainer='b1ack0d3ath',
    maintainer_email='b1ack0d3ath@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "node_py_ilk = py_test.ilk_deneme:main",
            "pub_den_py_00 = py_test.pub_den_py_00:main",
            "sub_den_py_00 = py_test.sub_den_py_00:main",
            "sub_den_py_01 = py_test.sub_den_py_01:main"
        ],
    },
)
