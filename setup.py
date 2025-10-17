#!/usr/bin/env python
import sys
from setuptools import (
    find_packages,
    setup,
)
from mypyc.build import mypycify


version = "1.3.2"
hexbytes_version = "1.3.1"

extras_require = {
    "dev": [
        "build>=0.9.0",
        "bump_my_version>=0.19.0",
        "ipython",
        "mypy==1.10.0",
        "pre-commit>=3.4.0",
        "tox>=4.0.0",
        "twine",
        "wheel",
    ],
    "docs": [
        "sphinx>=6.0.0",
        "sphinx-autobuild>=2021.3.14",
        "sphinx_rtd_theme>=1.0.0",
        "towncrier>=25,<26",
    ],
    "test": [
        "eth_utils>=2.0.0",
        "hypothesis>=3.44.24",
        "pytest>=7.0.0",
        "pytest-xdist>=2.4.0",
    ],
}

extras_require["dev"] = (
    extras_require["dev"] + extras_require["docs"] + extras_require["test"]
)


with open("./README.md") as readme:
    long_description = readme.read()


# we can't compile on python3.8 but we can still let the user install
skip_mypyc = sys.version_info < (3, 9) or any(
    cmd in sys.argv
    for cmd in (
        # Main metadata/dep/build hooks
        "egg_info",
        "sdist",
        "dist_info",
        "bdist_egg",
        "prepare_metadata_for_build_wheel",
        "get_requires_for_build_wheel",
        "get_requires_for_build_sdist",
        "get_requires_for_build_editable",
        "pip-egg-info",
        # Misc setuptools/pip commands
        "clean",
        "check",
        "pyproject-build-requires",
        "pyproject-hooks",
        "pyproject-install-requires",
        # Query modes/help/information calls
        "--name",
        "--version",
        "--help",
        "--help-commands",
    )
)

if skip_mypyc:
    ext_modules = []
    print("Skipping mypyc build due to metadata command:", sys.argv)
else:
    ext_modules = mypycify(
      ["faster_hexbytes/", "--strict", "--pretty"],
      group_name="faster_hexbytes",
      strict_dunder_typing=True,
    )


setup(
    name="faster_hexbytes",
    # *IMPORTANT*: Don't manually change the version here. See Contributing docs for the release process.
    version=version,
    description="""A faster fork of hexbytes: Python `bytes` subclass that decodes hex, with a readable console output. Implemented in C.""",
    long_description=long_description,
    long_description_content_type="text/markdown",
    author="The Ethereum Foundation",
    author_email="snakecharmers@ethereum.org",
    url="https://github.com/ethereum/hexbytes",
    include_package_data=True,
    install_requires=[f"hexbytes=={hexbytes_version}", "mypy_extensions"],
    python_requires=">=3.9, <4",
    extras_require=extras_require,
    py_modules=["faster_hexbytes"],
    license="MIT",
    zip_safe=False,
    keywords="ethereum",
    packages=find_packages(
        exclude=[
            "scripts",
            "scripts.*",
            "tests",
            "tests.*",
            "benchmarks",
            "benchmarks.*",
        ]
    ),
    ext_modules=ext_modules,
    package_data={"faster_hexbytes": ["py.typed"]},
    classifiers=[
        "Development Status :: 5 - Production/Stable",
        "Intended Audience :: Developers",
        "License :: OSI Approved :: MIT License",
        "Natural Language :: English",
        "Programming Language :: Python :: 3",
        "Programming Language :: Python :: 3.8",
        "Programming Language :: Python :: 3.9",
        "Programming Language :: Python :: 3.10",
        "Programming Language :: Python :: 3.11",
        "Programming Language :: Python :: 3.12",
        "Programming Language :: Python :: 3.13",
        "Programming Language :: Python :: 3.14",
    ],
)
