
undefined4 FUN_021583a4(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return 1;
  }
  iVar2 = 0;
  while( true ) {
    if (3 < iVar2) {
      return 1;
    }
    iVar1 = FUN_02157f1c(*(undefined4 *)(param_1 + iVar2 * 4 + 4));
    if (iVar1 == 0) break;
    iVar2 = iVar2 + 1;
  }
  return 0;
}

