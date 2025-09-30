from typing import Any, Callable

import hexbytes
import pytest
from pytest_codspeed import BenchmarkFixture

import faster_hexbytes
from benchmarks.params import (
    CONSTRUCTOR_VALS, CONSTRUCTOR_IDS,
    BYTES_VALS, BYTES_IDS,
    SLICES, SLICE_IDS,
)

def run_100(func: Callable[..., Any], *args: Any) -> None:
    for i in range(100):
        func(*args)

@pytest.mark.benchmark(group="HexBytes.__new__")
@pytest.mark.parametrize("val", CONSTRUCTOR_VALS, ids=CONSTRUCTOR_IDS)
def test_hexbytes_new(benchmark: BenchmarkFixture, val: Any) -> None:
    benchmark(run_100, hexbytes.HexBytes, val)

@pytest.mark.benchmark(group="HexBytes.__new__")
@pytest.mark.parametrize("val", CONSTRUCTOR_VALS, ids=CONSTRUCTOR_IDS)
def test_faster_hexbytes_new(benchmark: BenchmarkFixture, val: Any) -> None:
    benchmark(run_100, faster_hexbytes.HexBytes, val)

@pytest.mark.benchmark(group="HexBytes.__getitem__ (index)")
@pytest.mark.parametrize("val", BYTES_VALS, ids=BYTES_IDS)
@pytest.mark.parametrize("idx", [0, 1, 2, 3, 4, 5, -1])
def test_hexbytes_getitem_index(benchmark: BenchmarkFixture, val: bytes, idx: int) -> None:
    obj = hexbytes.HexBytes(val)
    if len(val) <= abs(idx):
        benchmark(run_100, lambda: obj[idx])

@pytest.mark.benchmark(group="HexBytes.__getitem__ (index)")
@pytest.mark.parametrize("val", BYTES_VALS, ids=BYTES_IDS)
@pytest.mark.parametrize("idx", [0, 1, 2, 3, 4, 5, -1])
def test_faster_hexbytes_getitem_index(benchmark: BenchmarkFixture, val: bytes, idx: int) -> None:
    obj = faster_hexbytes.HexBytes(val)
    if len(val) > abs(idx):
        benchmark(run_100, lambda: obj[idx])

@pytest.mark.benchmark(group="HexBytes.__getitem__ (slice)")
@pytest.mark.parametrize("val", BYTES_VALS, ids=BYTES_IDS)
@pytest.mark.parametrize("slice_", SLICES, ids=SLICE_IDS)
def test_hexbytes_getitem_slice(benchmark: BenchmarkFixture, val: bytes, slice_: slice) -> None:
    obj = hexbytes.HexBytes(val)
    benchmark(run_100, lambda: obj[slice_])

@pytest.mark.benchmark(group="HexBytes.__getitem__ (slice)")
@pytest.mark.parametrize("val", BYTES_VALS, ids=BYTES_IDS)
@pytest.mark.parametrize("slice_", SLICES, ids=SLICE_IDS)
def test_faster_hexbytes_getitem_slice(benchmark: BenchmarkFixture, val: bytes, slice_: slice) -> None:
    obj = faster_hexbytes.HexBytes(val)
    benchmark(run_100, lambda: obj[slice_])

@pytest.mark.benchmark(group="HexBytes.__repr__")
@pytest.mark.parametrize("val", BYTES_VALS, ids=BYTES_IDS)
def test_hexbytes_repr(benchmark: BenchmarkFixture, val: bytes) -> None:
    obj = hexbytes.HexBytes(val)
    benchmark(run_100, obj.__repr__)

@pytest.mark.benchmark(group="HexBytes.__repr__")
@pytest.mark.parametrize("val", BYTES_VALS, ids=BYTES_IDS)
def test_faster_hexbytes_repr(benchmark: BenchmarkFixture, val: bytes) -> None:
    obj = faster_hexbytes.HexBytes(val)
    benchmark(run_100, obj.__repr__)

@pytest.mark.benchmark(group="HexBytes.to_0x_hex")
@pytest.mark.parametrize("val", BYTES_VALS, ids=BYTES_IDS)
def test_hexbytes_to_0x_hex(benchmark: BenchmarkFixture, val: bytes) -> None:
    obj = hexbytes.HexBytes(val)
    benchmark(run_100, obj.to_0x_hex)

@pytest.mark.benchmark(group="HexBytes.to_0x_hex")
@pytest.mark.parametrize("val", BYTES_VALS, ids=BYTES_IDS)
def test_faster_hexbytes_to_0x_hex(benchmark: BenchmarkFixture, val: bytes) -> None:
    obj = faster_hexbytes.HexBytes(val)
    benchmark(run_100, obj.to_0x_hex)
