from faster_hexbytes.main import HexBytes

class _HexBytesSubclass(HexBytes):
    # this helper class is a workaround for a mypyc bug
    ...
