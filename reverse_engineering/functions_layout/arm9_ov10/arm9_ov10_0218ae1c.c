
undefined4 FUN_0218ae1c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int local_18 [2];
  
  iVar1 = FUN_0218af70(param_1,2,0x47,local_18);
  if (iVar1 == 0) {
    return 0;
  }
  if (local_18[0] != 0) {
    return 1;
  }
  FUN_02189e18(param_1 + 0x50,param_2,0x20);
  FUN_02189e18(param_1 + 0x50,param_3,0x20);
  iVar1 = FUN_0218af18(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x88);
  return 1;
}

