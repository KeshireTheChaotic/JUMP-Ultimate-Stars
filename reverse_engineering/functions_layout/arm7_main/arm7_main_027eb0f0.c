
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_027eb0f0(uint param_1)

{
  if (param_1 < 2) {
    *(ushort *)(_DAT_0380fff4 + 0x33a) =
         *(ushort *)(_DAT_0380fff4 + 0x33a) & 0xfffd | (ushort)((param_1 & 1) << 1);
    return 0;
  }
  return 5;
}

