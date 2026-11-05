
void FUN_0202a55c(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x50))();
  *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 0x40;
  iVar1 = param_1[7];
  if (iVar1 == 0) {
    return;
  }
  while (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 0x20);
    FUN_0202a55c();
  }
  return;
}

