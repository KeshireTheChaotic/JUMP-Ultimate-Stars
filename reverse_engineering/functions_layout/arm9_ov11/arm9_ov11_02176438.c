
void FUN_02176438(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  while (iVar1 != 0) {
    FUN_0207b1c0(param_1);
    iVar1 = *(int *)(param_1 + 8);
  }
  return;
}

