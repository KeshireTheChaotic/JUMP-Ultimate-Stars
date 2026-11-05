
bool FUN_0216967c(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x18);
  if (iVar1 == 0) {
    return true;
  }
  iVar1 = FUN_02155620(iVar1);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x20) - *(int *)(*(int *)(*(int *)(param_1 + 8) + 0x10) + 0x134);
    *(int *)(param_1 + 0x20) = iVar1;
    return 0 < iVar1;
  }
  return false;
}

