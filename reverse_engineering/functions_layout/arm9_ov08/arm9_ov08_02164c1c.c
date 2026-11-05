
void FUN_02164c1c(int param_1)

{
  int iVar1;
  
  if (*(short *)(param_1 + 2) != 0) {
    FUN_02164ca4();
    FUN_02164cb8(9);
    return;
  }
  if (*(int *)(DAT_0216e828 + 0x13ac) == 0) {
    iVar1 = FUN_02164b54();
    if (iVar1 == 0) {
      FUN_02164cb8(9);
    }
  }
  else {
    iVar1 = FUN_02164bc8();
    if (iVar1 == 0) {
      FUN_02164cb8(9);
      return;
    }
  }
  return;
}

