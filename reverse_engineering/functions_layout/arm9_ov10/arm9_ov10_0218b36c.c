
undefined4 FUN_0218b36c(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_3 + 3;
  iVar1 = param_4 + -3;
  if (param_2 == 100) {
    iVar1 = FUN_0218b51c(param_1,iVar2,iVar1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  else if (param_2 == 0x65) {
    iVar1 = FUN_0218b488(param_1,iVar2,iVar1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  else if (param_2 == 0x66) {
    iVar1 = thunk_FUN_0218ab10(param_1,param_3,param_4);
    if (iVar1 == 0) {
      return 0;
    }
  }
  else if (param_2 == 0x67) {
    iVar1 = FUN_0218b414(param_1,iVar2,iVar1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  else if ((param_2 == 0x68) && (iVar1 = FUN_0218b3e4(), iVar1 == 0)) {
    return 0;
  }
  return 1;
}

