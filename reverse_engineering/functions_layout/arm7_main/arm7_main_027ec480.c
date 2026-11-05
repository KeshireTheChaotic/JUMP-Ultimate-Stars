
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027ec480(uint param_1)

{
  *(ushort *)(_DAT_0380fff4 + 0x530) =
       *(ushort *)(_DAT_0380fff4 + 0x530) | (ushort)(1 << (param_1 & 0xff));
  return;
}

