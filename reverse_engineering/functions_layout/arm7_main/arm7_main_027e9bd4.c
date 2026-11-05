
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_027e9bd4(void)

{
  if (*(short *)(_DAT_0380fff4 + 0x330) == 0) {
    if ((*(ushort *)(_DAT_0380fff4 + 0x3a4) & 1) != 0) {
      return 10;
    }
  }
  else if (*(short *)(_DAT_0380fff4 + 0x330) == 1) {
    return 10;
  }
  return 0x14;
}

