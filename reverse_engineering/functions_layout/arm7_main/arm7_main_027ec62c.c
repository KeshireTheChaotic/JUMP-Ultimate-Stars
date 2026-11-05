
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027ec62c(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined2 *)(param_1 + 2);
  iVar2 = FUN_027ec1ac(uVar1);
  uVar3 = FUN_037fbc10(0x1000000);
  if ((*(short *)(_DAT_0380fff4 + 0x350) == 1) && (*(short *)(iVar2 + 0x16) == 1)) {
    FUN_027ec040(uVar1);
  }
  *(short *)(iVar2 + 0x16) = *(short *)(iVar2 + 0x16) + -1;
  FUN_037fbc4c(uVar3);
  return;
}

