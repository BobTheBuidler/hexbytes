def test_import_and_version():
    import faster_hexbytes

    assert isinstance(hexbytes.__version__, str)
