
void FUN_0215fe34(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x50f0) == 1) {
    *(undefined4 *)(param_1 + 0x50f0) = *(undefined4 *)(param_1 + 0x50f4);
  }
  *(undefined4 *)(param_1 + 0x50f4) = 0;
  iVar1 = *(int *)(param_1 + 0x50f0);
  if (iVar1 == 1) {
    return;
  }
  if (iVar1 == *(int *)(param_1 + 0x50f4)) {
    return;
  }
  FUN_0215f994(param_1,iVar1,0);
  return;
}

