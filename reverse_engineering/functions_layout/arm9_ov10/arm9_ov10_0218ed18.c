
int FUN_0218ed18(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_020aab78 + 0xa4);
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 8) == '\n') {
      if (param_2 != 0) {
        FUN_02190760(param_1,param_2,iVar1);
      }
      if (param_4 != 0) {
        FUN_02190760(param_3,param_4,iVar1);
      }
      param_2 = param_2 + param_4;
    }
    else if (*(char *)(iVar1 + 8) == '\v') {
      if (param_2 != 0) {
        FUN_02190838(param_1,param_2,iVar1);
      }
      if (param_4 != 0) {
        FUN_02190838(param_3,param_4,iVar1);
      }
      param_2 = param_2 + param_4;
    }
    else if (*(char *)(iVar1 + 9) == '\0') {
      param_2 = FUN_0218eda0();
    }
    else {
      param_2 = FUN_02193d08();
    }
    if (DAT_021a84dc == '\0') {
      return param_2;
    }
  }
  return 0;
}

