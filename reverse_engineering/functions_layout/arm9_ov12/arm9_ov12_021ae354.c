
undefined4 FUN_021ae354(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x194))();
  if (iVar1 == -1) {
    return 0;
  }
  iVar1 = FUN_021aed58(param_1);
  if (iVar1 == -1) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_1[0x55] + iVar1 * 4);
  }
  return uVar2;
}

