
undefined4 FUN_0218ae80(int param_1,undefined4 param_2)

{
  int iVar1;
  int local_10;
  
  iVar1 = FUN_0218af70(param_1,1,0x27,&local_10);
  if (iVar1 == 0) {
    return 0;
  }
  if (local_10 != 0) {
    return 1;
  }
  FUN_02189e18(param_1 + 0x50,param_2,0x20);
  iVar1 = FUN_0218af18(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  return 1;
}

