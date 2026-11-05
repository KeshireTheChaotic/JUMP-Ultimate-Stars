
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_027eacbc(uint param_1)

{
  if (1 < param_1) {
    return 5;
  }
  *(ushort *)(_DAT_0380fff4 + 0x33a) =
       *(ushort *)(_DAT_0380fff4 + 0x33a) & 0xff7f | (ushort)((param_1 & 1) << 7);
  if (param_1 == 1) {
    _DAT_04808028 = _DAT_0480802a;
  }
  return 0;
}

