from setuptools import find_packages
from setuptools import setup

setup(
    name='image_processing',
    version='0.0.0',
    packages=find_packages(
        include=('image_processing', 'image_processing.*')),
)
