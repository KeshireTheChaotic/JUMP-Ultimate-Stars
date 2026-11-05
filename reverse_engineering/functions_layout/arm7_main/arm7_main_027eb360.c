
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_027eb360(ushort param_1)

{
  if ((param_1 & 0x7ffe) == 0) {
    return 5;
  }
  *(ushort *)(_DAT_0380fff4 + 0x32c) = param_1;
  *(uint *)(_DAT_0380fff4 + 0x340) = *(uint *)(_DAT_0380fff4 + 0x340) | 4;
  return 0;
}

