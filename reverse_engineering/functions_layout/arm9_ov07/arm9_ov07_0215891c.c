
void FUN_0215891c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = (**(code **)(**(int **)(*(int *)(*(int *)(iVar2 + 0x2c) + 4) + 0x68) + 0x68))();
  if (iVar1 != 0) {
    *(undefined1 *)(iVar2 + 0x6c) = 1;
    FUN_02028384(*(undefined4 *)(param_1 + 4),0x215895d);
  }
  return;
}

