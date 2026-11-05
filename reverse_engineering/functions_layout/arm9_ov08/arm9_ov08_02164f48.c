
undefined4 FUN_02164f48(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_02163874(param_1 + 10);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_021638ec();
  *(undefined4 *)(DAT_0216e82c + (iVar1 + -1) * 4 + 0xaa0) = uVar2;
  return 1;
}

