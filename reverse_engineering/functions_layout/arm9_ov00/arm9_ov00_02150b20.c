
void FUN_02150b20(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0207382c();
  if (iVar1 == 0) {
    return;
  }
  func_0x021b65cc();
  (**(code **)(**(int **)(*(int *)(*(int *)(iVar2 + 0x38) + 4) + 0x68) + 0x6c))();
  *(undefined2 *)(iVar2 + 0x80) = 0;
  FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_02150b74);
  return;
}

