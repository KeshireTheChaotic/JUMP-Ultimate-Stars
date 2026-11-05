
undefined4 FUN_02064128(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_020633d8(param_1,*(undefined4 *)(param_1 + 0x10));
  FUN_020634f4(param_1,uVar1);
  iVar2 = FUN_020641d4(*(undefined4 *)(param_1 + 8));
  if (iVar2 != 0) {
    FUN_02064160();
  }
  if (*(int *)(param_1 + 0x14) == 0) {
    return 1;
  }
  return 0;
}

