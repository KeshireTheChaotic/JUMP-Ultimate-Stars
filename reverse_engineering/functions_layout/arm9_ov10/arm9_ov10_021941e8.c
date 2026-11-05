
undefined4 FUN_021941e8(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_02194950();
  if (iVar1 != 1) {
    return 1;
  }
  iVar1 = FUN_02194684(param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_02194950(param_1);
    if (iVar1 != 5) {
      return 1;
    }
    iVar1 = FUN_02194258(param_1);
    if (iVar1 != 0) {
      return 1;
    }
    FUN_02194580(param_1);
  }
  else {
    FUN_0219520c(*(undefined4 *)(param_1 + 0xc));
    FUN_02194580(param_1);
    iVar1 = FUN_02194258(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

