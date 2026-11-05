
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027ed520(void)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  
  iVar1 = _DAT_0380fff4;
  puVar3 = (undefined2 *)(_DAT_0380fff4 + 0x404);
  if (*(short *)(_DAT_0380fff4 + 0x404) == 0x30) {
    iVar2 = FUN_027f08d0(*(int *)(_DAT_0380fff4 + 0x41c) + 0x10,0);
    if (iVar2 == 0) {
      *(undefined2 *)(*(int *)(iVar1 + 0x420) + 4) = 8;
      *puVar3 = 0x35;
      FUN_037f85f8(2,2);
    }
    else {
      *(undefined2 *)(iVar2 + 0x2c) = *(undefined2 *)(*(int *)(iVar1 + 0x41c) + 0x16);
      *(undefined2 *)(iVar2 + 0x2e) = 1;
      *(undefined2 *)(iVar2 + 0x30) = 0;
      *puVar3 = 0x31;
      FUN_027f15ac();
      FUN_027e95dc(*(undefined2 *)(*(int *)(iVar1 + 0x41c) + 0x18),&LAB_027ed4dc);
    }
  }
  else if (*(short *)(_DAT_0380fff4 + 0x404) == 0x35) {
    FUN_027f1908(1);
    FUN_027f19a0(1);
    FUN_027f15cc(1,0);
    *puVar3 = 0;
    FUN_027ecfa4();
  }
  return;
}

