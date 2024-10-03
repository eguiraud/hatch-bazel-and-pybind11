# SPDX-FileCopyrightText: 2024-present Enrico Guiraud <enrico.guiraud@pm.me>
#
# SPDX-License-Identifier: MIT

from hatch_bazel_and_pybind11 import Foo


def test_bazel_hatch_integration():
    f = Foo(x=42)
    assert f.x == 42

    assert isinstance(f.id, str)
    assert len(f.id) == len("07482dd2-25bf-4b4b-8a6b-b8ba285bc75f")
