
undefined4 FUN_0218acc0(undefined4 param_1)

{
  int iVar1;
  int local_10 [2];
  
  iVar1 = FUN_0218af70(param_1,7,7,local_10);
  if (iVar1 == 0) {
    return 0;
  }
  if (local_10[0] != 0) {
    return 1;
  }
  iVar1 = FUN_0218af18(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  return 1;
}

