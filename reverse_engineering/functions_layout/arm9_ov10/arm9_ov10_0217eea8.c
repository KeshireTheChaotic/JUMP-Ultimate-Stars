
undefined4 FUN_0217eea8(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0217575c();
  if ((iVar1 != 0) ||
     (((param_2 == 1 && (iVar1 = FUN_02176654(param_1), iVar1 == 0)) ||
      (iVar1 = FUN_0217647c(param_1), iVar1 == 0)))) {
    return 0;
  }
  iVar1 = FUN_0217e95c(param_1);
  if (iVar1 == 1) {
    return 0;
  }
  iVar1 = FUN_0217e6cc(param_1);
  iVar2 = FUN_0217eba4(param_2);
  if (iVar1 < iVar2) {
    return 0;
  }
  return 1;
}

