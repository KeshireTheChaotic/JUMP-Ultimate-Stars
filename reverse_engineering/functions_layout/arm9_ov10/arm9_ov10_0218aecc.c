
undefined4 FUN_0218aecc(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int local_18 [2];
  
  iVar1 = FUN_0218af70(param_1,0,param_3 + 7,local_18);
  if (iVar1 == 0) {
    return 0;
  }
  if (local_18[0] != 0) {
    return 1;
  }
  FUN_02189e18(param_1 + 0x50,param_2,param_3);
  iVar1 = FUN_0218af18(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  return 1;
}

