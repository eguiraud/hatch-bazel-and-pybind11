# Hatch, bazel and pybind11

[![PyPI - Version](https://img.shields.io/pypi/v/hatch-bazel-and-pybind11.svg)](https://pypi.org/project/hatch-bazel-and-pybind11)
[![PyPI - Python Version](https://img.shields.io/pypi/pyversions/hatch-bazel-and-pybind11.svg)](https://pypi.org/project/hatch-bazel-and-pybind11)
[![test](https://github.com/eguiraud/hatch-bazel-and-pybind11/actions/workflows/test.yml/badge.svg?branch=main)](https://github.com/eguiraud/hatch-bazel-and-pybind11/actions/workflows/test.yml)

-----

This example project shows how to integrate hatch, bazel and pybind11, or in other words
how to build a C++ Python extension module based pybind11 via bazel and make it part of
a python package managed by hatch.

This is done very much in the spirit of [Cunningham's Law](https://meta.wikimedia.org/wiki/Cunningham%27s_Law):

> the best way to get the right answer on the internet is not to ask a question; it's to post the wrong answer

## This branch reproduces a problem I'm having with hatch

```
hatch build -t sdist
cd dist
tar -xzvf hatch_bazel_and_pybind11-0.0.5.tar.gz

# this does not exist, but I'm trying really hard to include it in the sdist
ls hatch_bazel_and_pybind11-0.0.5/hatch_bazel_and_pybind11/cpp/submodule/submodule.h
```
