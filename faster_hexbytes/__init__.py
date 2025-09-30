from importlib.metadata import (
    version as __version,
)

from faster_hexbytes.main import (
    HexBytes,
)

__all__ = ["HexBytes"]

__version__ = __version("hexbytes")
