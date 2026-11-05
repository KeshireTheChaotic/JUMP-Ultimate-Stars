
undefined4 FUN_02194258(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_02194950();
  if (iVar1 != 7) {
    return 1;
  }
  iVar1 = FUN_02194950(param_1);
  if (iVar1 == 6) {
    return 0;
  }
  return 1;
}

