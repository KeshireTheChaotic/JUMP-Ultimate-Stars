
undefined4 FUN_0218b8ec(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xc) != 1) {
    iVar1 = FUN_0218bcc0();
    if (iVar1 == 0) {
      return 0;
    }
    return 1;
  }
  FUN_0218a4f0();
  iVar1 = FUN_0218ab00(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_0218a304(param_1,2,param_2,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  return 1;
}

