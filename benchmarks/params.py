from typing import Any, List, Tuple, Union
from eth_typing import HexStr

import hexbytes
import faster_hexbytes

Convertable = Union[bool, bytearray, bytes, int, str, memoryview]

# Centralized list of all byte patterns and their ids (use human-readable where possible)
BYTES_CASES: List[Tuple[bytes, str]] = [
    (b"abc", "b'abc'"),
    (b"", "b''"),
    (b"\x00" * 32, "b'\\x00'*32"),
    (b"\xff" * 64, "b'\\xff'*64"),
    (b"a" * 1024, "b'a'*1024"),
    (b"\x01\x02\x03", "b'\\x01\\x02\\x03'"),
    (b"\xde\xad\xbe\xef", "b'\\xde\\xad\\xbe\\xef'"),
    (b"\x00\xff\x00\xff", "b'\\x00\\xff\\x00\\xff'"),
    (b"palindromeemordnilap", "palindrome"),
    (b"\x7f" * 8, "b'\\x7f'*8"),
    (b"\x80" * 8, "b'\\x80'*8"),
    (b"\x01" * 100, "b'\\x01'*100"),
    (b"\x10\x20\x30\x40\x50", "b'\\x10\\x20\\x30\\x40\\x50'"),
    (b"\x00\xff" * 32, "alternating 0x00/0xff"),
    (b"\xaa\x55" * 32, "alternating 0xaa/0x55"),
    (b"\x00\x01\x02\x03\x04\x05\x06\x07\x08\x09", "0-9"),
    (b"\x00\x10\x20\x30\x40\x50\x60\x70\x80\x90", "multiples of 0x10"),
    (b"\x01" * 2048, "b'\\x01'*2048"),
    (b"\x00\x01" * 512, "long alternating"),
    (b"\x00\xff\x01\xfe" * 64, "4-byte pattern"),
    (bytes(range(256)), "all byte values"),
    (b"racecar", "palindrome ascii"),
    (b"12321", "palindrome numeric"),
    (b"\x00" * 1, "single null byte"),
    (b"\xff" * 1, "single 0xff"),
    (b"\x01\x02" * 50 + b"\x03\x04" * 50, "mixed pattern"),
    (b"\x00\xff" * 16 + b"\x01\xfe" * 16, "two patterns"),
    (b"the quick brown fox jumps over the lazy dog", "ascii sentence"),
    (b"\x00\x01\x02\x03\x04\x05\x06\x07\x08\x09" * 10, "repeated 0-9"),
]

BYTES_VALS: List[bytes] = [v for v, _ in BYTES_CASES]
BYTES_IDS: List[str] = [id for _, id in BYTES_CASES]

def variant_ids(base_ids: List[str], prefix: str) -> List[str]:
    return [f"{prefix}({id})" for id in base_ids]

BYTEARRAYS = [bytearray(b) for b in BYTES_VALS]
BYTEARRAYS_IDS = variant_ids(BYTES_IDS, "bytearray")

MEMORYVIEWS = [memoryview(b) for b in BYTES_VALS]
MEMORYVIEWS_IDS = variant_ids(BYTES_IDS, "memoryview")

HEXBYTES_ORIG = [hexbytes.HexBytes(b) for b in BYTES_VALS]
HEXBYTES_ORIG_IDS = variant_ids(BYTES_IDS, "hexbytes.HexBytes")

HEXBYTES_FAST = [faster_hexbytes.HexBytes(b) for b in BYTES_VALS]
HEXBYTES_FAST_IDS = variant_ids(BYTES_IDS, "faster_hexbytes.HexBytes")

# Other types for construction and conversion, with human-readable ids where possible
STR_CASES: List[Tuple[str, str]] = [
    ("abc", "'abc'"),
    ("", "''"),
    ("0x1234", "'0x1234'"),
    ("deadbeef", "'deadbeef'"),
    ("0x", "'0x'"),
    ("0x" + "ff" * 32, "'0x'+'ff'*32"),
    ("0x" + "00" * 64, "'0x'+'00'*64"),
    ("0xabcdef", "'0xabcdef'"),
    ("0x" + "a" * 128, "'0x'+'a'*128"),
    ("unicode-✓-测试", "unicode string"),
    ("0xdeadbeef", "'0xdeadbeef'"),
    ("0xCAFEBABE", "'0xCAFEBABE'"),
]
STR_VALS: List[str] = [v for v, _ in STR_CASES]
STR_IDS: List[str] = [id for _, id in STR_CASES]

INT_CASES: List[Tuple[int, str]] = [
    (123456, "123456"),
    (0, "0"),
    (-1, "-1"),
    (2**8, "2**8"),
    (2**16, "2**16"),
    (2**32, "2**32"),
    (2**64, "2**64"),
    (2**256 - 1, "2**256-1"),
]
INT_VALS: List[int] = [v for v, _ in INT_CASES]
INT_IDS: List[str] = [id for _, id in INT_CASES]

BOOL_CASES: List[Tuple[bool, str]] = [
    (True, "True"),
    (False, "False"),
]
BOOL_VALS: List[bool] = [v for v, _ in BOOL_CASES]
BOOL_IDS: List[str] = [id for _, id in BOOL_CASES]

# For to_bytes and HexBytes construction
CONSTRUCTOR_VALS: List[Any] = (
    BYTES_VALS + BYTEARRAYS + MEMORYVIEWS + STR_VALS + INT_VALS + BOOL_VALS
)
CONSTRUCTOR_IDS: List[str] = (
    BYTES_IDS + BYTEARRAYS_IDS + MEMORYVIEWS_IDS + STR_IDS + INT_IDS + BOOL_IDS
)

# For bytes-based operations
# (BYTES_VALS and BYTES_IDS already defined above)

# For index and slice operations
INDEXES = [0, 1, 2, 3, 4, 5, -1]
INDEX_IDS = [str(i) for i in INDEXES]

SLICES = [slice(0, 3), slice(1, 6), slice(2, None), slice(None, None), slice(-3, None)]
SLICE_IDS = [
    "slice(0,3)",
    "slice(1,6)",
    "slice(2,None)",
    "slice(None,None)",
    "slice(-3,None)",
]

# For to_bytes and hexstr_to_bytes
TO_BYTES_VALS: List[Convertable] = (
    BYTES_VALS + BYTEARRAYS + MEMORYVIEWS + STR_VALS + INT_VALS + BOOL_VALS
)
TO_BYTES_IDS: List[str] = (
    BYTES_IDS + BYTEARRAYS_IDS + MEMORYVIEWS_IDS + STR_IDS + INT_IDS + BOOL_IDS
)

HEXSTRINGS: List[HexStr] = [
    "0x1234",
    "deadbeef",
    "0x",
    "",
    "0x" + "ff" * 32,
    "0x" + "00" * 64,
    "0xabcdef",
    "0x" + "a" * 128,
    "0xdeadbeef",
    "0xCAFEBABE",
    "0x0",
    "0x1",
    "0x" + "1" * 64,
    "0x" + "f" * 64,
    "0x" + "0" * 128,
    "0x" + "1234567890abcdef" * 8,
    "0x" + "00ff" * 16,
    "0x" + "ff00" * 16,
    "0x" + "a1b2c3d4" * 8,
    "0x" + "dead" * 16,
    "0x" + "beef" * 16,
    "0x" + "cafebabe" * 8,
    "0x" + "facefeed" * 8,
    "0x" + "badc0ffee0ddf00d" * 4,
    "0x" + "0123456789abcdef" * 8,
    "0x" + "f" * 128,
    "0x" + "e" * 256,
    "0x" + "d" * 512,
    "0x" + "c" * 1024,
    "0x" + "b" * 2048,
]
HEXSTRINGS_IDS: List[str] = [
    "'0x1234'",
    "'deadbeef'",
    "'0x'",
    "''",
    "'0x'+'ff'*32",
    "'0x'+'00'*64",
    "'0xabcdef'",
    "'0x'+'a'*128",
    "'0xdeadbeef'",
    "'0xCAFEBABE'",
    "'0x0'",
    "'0x1'",
    "'0x'+'1'*64",
    "'0x'+'f'*64",
    "'0x'+'0'*128",
    "'0x'+'1234567890abcdef'*8",
    "'0x'+'00ff'*16",
    "'0x'+'ff00'*16",
    "'0x'+'a1b2c3d4'*8",
    "'0x'+'dead'*16",
    "'0x'+'beef'*16",
    "'0x'+'cafebabe'*8",
    "'0x'+'facefeed'*8",
    "'0x'+'badc0ffee0ddf00d'*4",
    "'0x'+'0123456789abcdef'*8",
    "'0x'+'f'*128",
    "'0x'+'e'*256",
    "'0x'+'d'*512",
    "'0x'+'c'*1024",
    "'0x'+'b'*2048",
]
