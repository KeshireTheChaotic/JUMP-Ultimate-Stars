
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027f4084(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  short *psVar4;
  
  iVar1 = _DAT_0380fff4;
  psVar4 = (short *)(_DAT_0380fff4 + 0x404);
  if ((((*(short *)(_DAT_0380fff4 + 0x350) == 2) || (*(short *)(_DAT_0380fff4 + 0x350) == 3)) &&
      (*psVar4 == 0x61)) &&
     (iVar3 = FUN_027e9cfc(*(int *)(_DAT_0380fff4 + 0x41c) + 0x10,param_1 + 0x1e), iVar3 != 0)) {
    FUN_027e9528();
    if (*(short *)(param_1 + 0x2e) == 0) {
      FUN_027ea1ac(*(ushort *)(param_1 + 0x30) & 0xfff);
      FUN_027f07f8(*(undefined2 *)(iVar1 + 0x3ae));
      FUN_027ea0c8(iVar1 + 0x3c6,param_1 + 0x1e);
      uVar2 = FUN_027ec8d4(param_1 + 0x1e);
      *(undefined2 *)(iVar1 + 0x3cc) = uVar2;
      FUN_027ec560(*(undefined2 *)(iVar1 + 0x3cc),0x40);
      FUN_037f9468(0x40);
    }
    if (*(short *)(param_1 + 0x2e) == 0) {
      *(undefined2 *)(*(int *)(iVar1 + 0x420) + 4) = 0;
      *(undefined2 *)(*(int *)(iVar1 + 0x420) + 6) = 0;
      FUN_037f9468(0x40);
    }
    else {
      *(undefined2 *)(*(int *)(iVar1 + 0x420) + 4) = 0xc;
      *(undefined2 *)(*(int *)(iVar1 + 0x420) + 6) = *(undefined2 *)(param_1 + 0x2e);
    }
    *(undefined2 *)(*(int *)(iVar1 + 0x420) + 8) = *(undefined2 *)(iVar1 + 0x3ae);
    *psVar4 = 99;
    FUN_037f85f8(2,4);
  }
  return;
}

