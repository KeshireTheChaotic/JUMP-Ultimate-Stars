
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_027ead18(uint param_1)

{
  if (param_1 < 2) {
    *(ushort *)(_DAT_0380fff4 + 0x33a) =
         *(ushort *)(_DAT_0380fff4 + 0x33a) & 0xffbf | (ushort)((param_1 & 1) << 6);
    return 0;
  }
  return 5;
}

