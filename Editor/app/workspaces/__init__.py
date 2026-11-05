"""JUS Studio suite workspaces beside the Move Lab (Animation + Sprite)."""
from .koma import KomaWorkspace  # noqa: F401
from .level import LevelWorkspace  # noqa: F401
from .missions import MissionWorkspace  # noqa: F401
from .references import ReferencesWorkspace  # noqa: F401
from .screen import ScreenWorkspace  # noqa: F401

SUITE = (KomaWorkspace, MissionWorkspace, LevelWorkspace, ScreenWorkspace, ReferencesWorkspace)
