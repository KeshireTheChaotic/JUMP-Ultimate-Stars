
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027ed644(void)

{
  int iVar1;
  undefined2 *puVar2;
  
  iVar1 = _DAT_0380fff4;
  puVar2 = (undefined2 *)(_DAT_0380fff4 + 0x404);
  if (*(short *)(_DAT_0380fff4 + 0x404) == 0x20) {
    FUN_037f8ef4();
    *(undefined2 *)(iVar1 + 0x408) = 0;
    *(undefined2 *)(iVar1 + 0x40a) = 0;
    *puVar2 = 0x21;
    FUN_027e95dc(*(undefined2 *)(*(int *)(iVar1 + 0x41c) + 0x10),&LAB_027ed604);
  }
  else if (*(short *)(_DAT_0380fff4 + 0x404) == 0x25) {
    *(undefined2 *)(*(int *)(_DAT_0380fff4 + 0x420) + 4) = *(undefined2 *)(_DAT_0380fff4 + 0x408);
    *(undefined2 *)(*(int *)(iVar1 + 0x420) + 6) = *(undefined2 *)(iVar1 + 0x40a);
    if (*(short *)(iVar1 + 0x408) != 0) {
      FUN_037f93b0();
    }
    *puVar2 = 0;
    FUN_027ecfa4();
  }
  return;
}

