
void FUN_0214ed0c(int param_1)

{
  int iVar1;
  
  func_0x021b65e0(*(undefined4 *)(*(int *)(param_1 + 0x10) + 4));
  func_0x021b6214(*(undefined4 *)(*(int *)(param_1 + 0x10) + 4),1);
  iVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 4) + 0x154))();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_0214ed94();
  }
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
  func_0x021b6214(*(undefined4 *)(*(int *)(param_1 + 0x18) + 4),1);
  (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x68) + 0x6c))();
  return;
}

