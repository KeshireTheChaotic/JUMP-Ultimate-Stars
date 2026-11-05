
bool FUN_021696d4(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20) - *(int *)(*(int *)(*(int *)(param_1 + 8) + 0x10) + 0x134);
  *(int *)(param_1 + 0x20) = iVar1;
  if (iVar1 < 0) {
    *(byte *)(param_1 + 0x3a) = *(byte *)(param_1 + 0x3a) | 2;
  }
  iVar1 = FUN_02155620(*(undefined4 *)(*(int *)(param_1 + 8) + 0x18));
  return iVar1 == 0;
}

