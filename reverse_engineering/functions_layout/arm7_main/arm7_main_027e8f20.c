
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027e8f20(void)

{
  int iVar1;
  
  *(ushort *)(_DAT_0380fff4 + 0x33e) = *(ushort *)(_DAT_0380fff4 + 0x33e) | 0x8000;
  if (*(short *)(_DAT_0380fff4 + 0x34c) != 0) {
    FUN_037f93b0();
    if (*(short *)(_DAT_0380fff4 + 0x404) != 0) {
      *(undefined2 *)(_DAT_0380fff4 + 0x404) = 0;
      *(undefined2 *)(*(int *)(_DAT_0380fff4 + 0x420) + 4) = 6;
      FUN_027ecfa4();
    }
    FUN_027ea468();
  }
  do {
    iVar1 = FUN_037f86b8(3);
  } while (iVar1 != 0xffff);
  FUN_037f85f8(3,0x17);
  return;
}

