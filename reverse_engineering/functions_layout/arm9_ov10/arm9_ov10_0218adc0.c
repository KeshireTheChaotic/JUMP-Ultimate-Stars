
undefined4 FUN_0218adc0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int local_18;
  
  iVar1 = FUN_0218af70(param_1,3,param_4 + 0x27,&local_18);
  if (iVar1 == 0) {
    return 0;
  }
  if (local_18 != 0) {
    return 1;
  }
  FUN_02189e18(param_1 + 0x50,param_2,0x20);
  FUN_02189e18(param_1 + 0x50,param_3,param_4);
  iVar1 = FUN_0218af18(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  return 1;
}

