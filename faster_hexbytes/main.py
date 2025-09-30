from typing import (
    TYPE_CHECKING,
    Callable,
    Final,
    Tuple,
    Type,
    Union,
    overload,
)

# accessing hexbytes.HexBytes after `import hexbytes`
# fails because mypyc tries to lookup HexBytes from
# CPyModule_hexbytes___main which was never imported
import hexbytes.main as hexbytes
from mypy_extensions import (
    mypyc_attr,
)
from typing_extensions import (
    Self,
)

from faster_hexbytes._utils import (
    to_bytes,
)

if TYPE_CHECKING:
    from typing import (
        SupportsIndex,
    )


BytesLike = Union[bytes, str, bool, bytearray, int, memoryview]

_bytes_new: Final = bytes.__new__


@mypyc_attr(native_class=False, allow_interpreted_subclasses=True)
class HexBytes(hexbytes.HexBytes):
    """
    Thin wrapper around the python built-in :class:`bytes` class.

    It has these changes:
        1. Accepts more initializing values: bool, bytearray, bytes, (non-negative) int,
           str, and memoryview
        2. The representation at console (__repr__) is 0x-prefixed
        3. ``to_0x_hex`` returns a 0x-prefixed hex string
    """

    def __new__(cls, val: BytesLike) -> Self:
        bytesval = to_bytes(val)
        return _bytes_new(cls, bytesval)

    @overload
    def __getitem__(self, key: "SupportsIndex") -> int:  # noqa: F811
        ...

    @overload  # noqa: F811
    def __getitem__(self, key: slice) -> Self:  # noqa: F811
        ...

    def __getitem__(  # noqa: F811
        self, key: Union["SupportsIndex", slice]
    ) -> Union[int, Self]:
        result = bytes.__getitem__(self, key)
        if isinstance(result, int):
            return result
        cls = type(self)
        if cls is HexBytes:
            # fast-path case with faster C code for non-subclass
            return HexBytes(result)  # type: ignore [return-value]
        return cls(result)

    def __repr__(self) -> str:
        return f"HexBytes('0x{self.hex()}')"

    def to_0x_hex(self) -> str:
        """
        Convert the bytes to a 0x-prefixed hex string
        """
        return f"0x{self.hex()}"

    def __reduce__(
        self,
    ) -> Tuple[Callable[..., bytes], Tuple[Type["HexBytes"], bytes]]:
        """
        An optimized ``__reduce__`` that bypasses the input validation in
        ``HexBytes.__new__`` since an existing HexBytes instance has already been
        validated when created.
        """
        return _bytes_new, (type(self), bytes(self))


# these 3 helpers serve as a workaround for a mypyc bug until
# https://github.com/python/mypy/pull/19957 is merged and released

@mypyc_attr(native_class=False)
class _HexBytesSubclass1(HexBytes): ...
@mypyc_attr(native_class=False)
class _HexBytesSubclass2(HexBytes): ...
@mypyc_attr(native_class=False)
class _HexBytesSubclass3(HexBytes): ...
