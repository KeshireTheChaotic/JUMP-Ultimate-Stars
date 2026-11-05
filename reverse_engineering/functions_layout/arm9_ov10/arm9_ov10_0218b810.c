
undefined4 FUN_0218b810(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  *(short *)(param_1 + 0x66) = *(short *)(param_1 + 0x66) + 1;
  if (param_2 == 0) {
    iVar1 = FUN_0218bb2c(param_1,param_3,param_4);
    if (iVar1 == 0) {
      return 0;
    }
  }
  else if (param_2 == 1) {
    iVar1 = FUN_0218bac0(param_1,param_3,param_4);
    if (iVar1 == 0) {
      return 0;
    }
  }
  else if (param_2 == 2) {
    iVar1 = FUN_0218ba2c(param_1,param_3,param_4);
    if (iVar1 == 0) {
      return 0;
    }
  }
  else if (param_2 == 3) {
    iVar1 = FUN_0218b970(param_1,param_3,param_4);
    if (iVar1 == 0) {
      return 0;
    }
  }
  else if (param_2 == 4) {
    iVar1 = FUN_0218b934();
    if (iVar1 == 0) {
      return 0;
    }
  }
  else if (param_2 == 5) {
    iVar1 = FUN_0218b8ec(param_1,param_3,param_4);
    if (iVar1 == 0) {
      return 0;
    }
  }
  else if ((param_2 == 6) && (iVar1 = FUN_0218b8bc(), iVar1 == 0)) {
    return 0;
  }
  return 1;
}

