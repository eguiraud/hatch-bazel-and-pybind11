# Hatch, bazel and pybind11

[![PyPI - Version](https://img.shields.io/pypi/v/hatch-bazel-and-pybind11.svg)](https://pypi.org/project/hatch-bazel-and-pybind11)
[![PyPI - Python Version](https://img.shields.io/pypi/pyversions/hatch-bazel-and-pybind11.svg)](https://pypi.org/project/hatch-bazel-and-pybind11)
[![test](https://github.com/eguiraud/hatch-bazel-and-pybind11/actions/workflows/test.yml/badge.svg)](https://github.com/eguiraud/hatch-bazel-and-pybind11/actions/workflows/test.yml)

-----

This example project shows how to integrate hatch, bazel and pybind11, or in other words
how to build a C++ Python extension module based pybind11 via bazel and make it part of
a python package managed by hatch.

This is done very much in the spirit of [Cunningham's Law](https://meta.wikimedia.org/wiki/Cunningham%27s_Law):

> the best way to get the right answer on the internet is not to ask a question; it's to post the wrong answer

## Playing with this code

`hatch build` always runs bazel and therefore always refreshes the
extension module as needed, but `hatch test` or `hatch shell` do not
know they have to run bazel, so `hatch build && hatch test` or similar
is the robust way to rebuild the native code as needed, at least for now:
without an explicit `hatch build`, `hatch test/shell` risk running with
stale versions of the extension module.

## Installation

```console
pip install hatch-bazel-and-pybind11
```

## License

`hatch-bazel-and-pybind11` is distributed under the terms of the [MIT](https://spdx.org/licenses/MIT.html) license.
