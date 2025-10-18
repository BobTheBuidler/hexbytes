### I forked hexbytes and compiled it to C. It does the same stuff, now faster

[![PyPI](https://img.shields.io/pypi/v/faster-hexbytes.svg?logo=Python&logoColor=white)](https://pypi.org/project/faster-hexbytes/)
[![Monthly Downloads](https://img.shields.io/pypi/dm/faster-hexbytes)](https://pypistats.org/packages/faster-hexbytes)
[![Codspeed.io Status](https://img.shields.io/endpoint?url=https://codspeed.io/badge.json)](https://codspeed.io/BobTheBuidler/faster-hexbytes)

##### This fork will be kept up-to-date with [hexbytes](https://github.com/ethereum/hexbytes). I will pull updates as they are released and push new [faster-hexbytes](https://github.com/BobTheBuidler/faster-hexbytes) releases to [PyPI](https://pypi.org/project/faster-hexbytes/).

##### `faster_hexbytes.HexBytes` inherits from `hexbytes.HexBytes`, so porting to `faster-hexbytes` does not require you to update any `isinstance` or `issubclass` checks. All such checks in your codebase, and in any dependencies, will continue to work as they did when originaly implemented.

##### We benchmark `faster-hexbytes` against the original `hexbytes` for your convenience. [See results](https://github.com/BobTheBuidler/faster-hexbytes/tree/master/benchmarks/results).

##### You can find the compiled C code and header files in the [build](https://github.com/BobTheBuidler/hexbytes/tree/master/build) directory.

###### You may also be interested in: [faster-web3.py](https://github.com/BobTheBuidler/faster-hexbytes/), [faster-eth-abi](https://github.com/BobTheBuidler/faster-eth-abi/), and [faster-eth-utils](https://github.com/BobTheBuidler/faster-eth-utils/)

##### The original hexbytes readme is below:

# HexBytes

[![Join the conversation on Discord](https://img.shields.io/discord/809793915578089484?color=blue&label=chat&logo=discord&logoColor=white)](https://discord.gg/GHryRvPB84)
[![Build Status](https://circleci.com/gh/ethereum/hexbytes.svg?style=shield)](https://circleci.com/gh/ethereum/hexbytes)
[![PyPI version](https://badge.fury.io/py/hexbytes.svg)](https://badge.fury.io/py/hexbytes)
[![Python versions](https://img.shields.io/pypi/pyversions/hexbytes.svg)](https://pypi.python.org/pypi/hexbytes)
[![Docs build](https://readthedocs.org/projects/hexbytes/badge/?version=latest)](https://hexbytes.readthedocs.io/en/latest/?badge=latest)

Python `bytes` subclass that decodes hex, with a readable console output

Read the [documentation](https://hexbytes.readthedocs.io/).

View the [change log](https://hexbytes.readthedocs.io/en/latest/release_notes.html).

## Installation

```sh
python -m pip install hexbytes
```
