
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027ec728(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = _DAT_0380fff4;
  iVar3 = _DAT_0380fff4 + 0x1ac;
  uVar2 = OS_DisableIrqMask(0x1000000);
  if (*(short *)(iVar1 + 0x1b4) == 0) {
    FUN_027ec0ec(0);
  }
  FUN_037f8a3c(param_1,iVar3,param_2);
  OS_EnableIrqMask(uVar2);
  return;
}

