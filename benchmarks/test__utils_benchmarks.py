from typing import Any

import hexbytes._utils
import pytest
from eth_typing import HexStr
from pytest_codspeed import BenchmarkFixture

import faster_hexbytes._utils
from benchmarks.params import (
    TO_BYTES_VALS, TO_BYTES_IDS,
    HEXSTRINGS, HEXSTRINGS_IDS,
)

@pytest.mark.benchmark(group="to_bytes")
@pytest.mark.parametrize("val", TO_BYTES_VALS, ids=TO_BYTES_IDS)
def test_to_bytes(benchmark: BenchmarkFixture, val: Any) -> None:
    benchmark(hexbytes._utils.to_bytes, val)

@pytest.mark.benchmark(group="to_bytes")
@pytest.mark.parametrize("val", TO_BYTES_VALS, ids=TO_BYTES_IDS)
def test_faster_to_bytes(benchmark: BenchmarkFixture, val: Any) -> None:
    benchmark(faster_hexbytes._utils.to_bytes, val)

@pytest.mark.benchmark(group="hexstr_to_bytes")
@pytest.mark.parametrize("hexstr", HEXSTRINGS, ids=HEXSTRINGS_IDS)
def test_hexstr_to_bytes(benchmark: BenchmarkFixture, hexstr: HexStr) -> None:
    benchmark(hexbytes._utils.hexstr_to_bytes, hexstr)

@pytest.mark.benchmark(group="hexstr_to_bytes")
@pytest.mark.parametrize("hexstr", HEXSTRINGS, ids=HEXSTRINGS_IDS)
def test_faster_hexstr_to_bytes(benchmark: BenchmarkFixture, hexstr: HexStr) -> None:
    benchmark(faster_hexbytes._utils.hexstr_to_bytes, hexstr)
