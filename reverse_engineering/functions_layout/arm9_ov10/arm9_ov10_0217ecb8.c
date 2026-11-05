
undefined4 FUN_0217ecb8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0217e970();
  iVar2 = FUN_0217e948(param_1);
  if (iVar2 == 2) {
    return 0;
  }
  *(undefined4 *)(iVar1 + 4) = param_2;
  *(undefined4 *)(iVar1 + 8) = param_3;
  *(undefined1 *)(iVar1 + 0x1d) = 1;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  return 1;
}

