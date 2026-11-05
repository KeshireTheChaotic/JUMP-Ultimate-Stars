
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_027eb0b8(uint param_1)

{
  if (param_1 < 0x100) {
    *(undefined2 *)(_DAT_0380fff4 + 0x3c4) = 0;
    *(short *)(_DAT_0380fff4 + 0x3c2) = (short)param_1;
    return 0;
  }
  return 5;
}

