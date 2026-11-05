
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027e9654(void)

{
  int iVar1;
  
  iVar1 = _DAT_0380fff4;
  *(int *)(_DAT_0380fff4 + 0x3ec) = *(int *)(_DAT_0380fff4 + 0x3ec) + 1;
  FUN_037f85f8(1,10);
  FUN_037f85f8(2,0x12);
  FUN_037f85f8(1,0x11);
  if (*(short *)(iVar1 + 0x1fc) != 0) {
    FUN_037f85f8(2,0x13);
  }
  if (*(short *)(iVar1 + 0x3f4) != 0) {
    FUN_037f85f8(2,0x15);
  }
  return;
}

