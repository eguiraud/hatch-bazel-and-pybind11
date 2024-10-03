# SPDX-FileCopyrightText: 2024-present Enrico Guiraud <enrico.guiraud@pm.me>
#
# SPDX-License-Identifier: MIT

from hatch_bazel_and_pybind11 import Foo


def test_bazel_hatch_integration():
    f = Foo(x=42)
    assert f.x == 42
