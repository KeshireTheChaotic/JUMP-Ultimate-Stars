
void FUN_021582c8(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return;
  }
  iVar1 = 0;
  do {
    FUN_02157e3c(*(undefined4 *)(param_1 + iVar1 * 4 + 4));
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  FUN_0201b244(param_1);
  return;
}

