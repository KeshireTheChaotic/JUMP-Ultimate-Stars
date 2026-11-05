
undefined4 FUN_0214f9fc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == -1) {
    return 0;
  }
  *(int *)(param_1 + 0x10) = iVar1 + -1;
  if (iVar1 + -1 < 1) {
    FUN_0207342c(0x7a,6,iVar1,param_4,param_4);
    return 1;
  }
  return 0;
}

