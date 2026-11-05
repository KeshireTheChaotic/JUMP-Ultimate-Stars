
undefined4 FUN_02194c58(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint local_18;
  
  do {
    uVar1 = FUN_0218f094(&local_18,param_3);
    if (local_18 == 0) {
      return 0xffffffff;
    }
    if (param_2 < local_18) {
      local_18 = param_2;
    }
    FUN_02051890(uVar1,param_1,local_18);
    FUN_0218efe4(local_18,param_3);
    param_1 = param_1 + local_18;
    param_2 = param_2 - local_18;
  } while (0 < (int)param_2);
  return 0;
}

