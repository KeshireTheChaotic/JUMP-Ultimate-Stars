
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027ed318(void)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  
  iVar1 = _DAT_0380fff4;
  puVar3 = (undefined2 *)(_DAT_0380fff4 + 0x404);
  if (*(short *)(_DAT_0380fff4 + 0x404) == 0x60) {
    iVar2 = FUN_027f0dc8(*(int *)(_DAT_0380fff4 + 0x41c) + 0x10);
    if (iVar2 == 0) {
      *(undefined2 *)(*(int *)(iVar1 + 0x420) + 4) = 8;
      *puVar3 = 99;
      FUN_037f85f8(2,4);
    }
    else {
      *puVar3 = 0x61;
      FUN_027f15ac();
      FUN_027e95dc(*(undefined2 *)(*(int *)(iVar1 + 0x41c) + 0x18),&LAB_027ed2d4);
    }
  }
  else if (*(short *)(_DAT_0380fff4 + 0x404) == 99) {
    FUN_027f19a0(1);
    FUN_027f15cc(1,0);
    *puVar3 = 0;
    FUN_027ecfa4();
  }
  return;
}

