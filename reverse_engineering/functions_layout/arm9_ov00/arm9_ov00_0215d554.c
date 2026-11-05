
void FUN_0215d554(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  *(short *)(iVar1 + 0x1b6) = *(short *)(iVar1 + 0x1b6) + 1;
  iVar1 = FUN_02073868();
  if (iVar1 == 0) {
    return;
  }
  FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_0215d5d4);
  return;
}

