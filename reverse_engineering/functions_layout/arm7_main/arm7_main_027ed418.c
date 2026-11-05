
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027ed418(void)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  
  iVar1 = _DAT_0380fff4;
  puVar3 = (undefined2 *)(_DAT_0380fff4 + 0x404);
  if (*(short *)(_DAT_0380fff4 + 0x404) == 0x50) {
    iVar2 = FUN_027f0e80(*(int *)(_DAT_0380fff4 + 0x41c) + 0x10);
    if (iVar2 == 0) {
      *(undefined2 *)(*(int *)(iVar1 + 0x420) + 4) = 8;
      *puVar3 = 0x53;
      FUN_037f85f8(2,3);
    }
    else {
      *puVar3 = 0x51;
      FUN_027f15ac();
      FUN_027e95dc(*(undefined2 *)(*(int *)(iVar1 + 0x41c) + 0x18),&LAB_027ed3d4);
    }
  }
  else if (*(short *)(_DAT_0380fff4 + 0x404) == 0x53) {
    FUN_027f1908(1);
    FUN_027f19a0(1);
    FUN_027f15cc(1,0);
    *puVar3 = 0;
    FUN_027ecfa4();
  }
  return;
}

