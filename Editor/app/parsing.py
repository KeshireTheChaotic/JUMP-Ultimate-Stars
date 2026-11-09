"""Shared numeric input syntax, independent of the Tk editor controller."""

def parse_int(text: str) -> int:
    """Preserve the EditorApp integer syntax: whitespace and base-0 literals."""
    return int(str(text).strip(), 0)


def _int(text, default):
    try:
        return parse_int(text)
    except ValueError:
        return default
