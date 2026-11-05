
void FUN_02168f88(int param_1)

{
  int iVar1;
  
  FUN_02169030(*(undefined4 *)(*(int *)(param_1 + 8) + 0x20),0);
  iVar1 = (**(code **)(**(int **)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 8) + 0x20) + 0xc) +
                                          4) + 0x68) + 0x68))();
  if (iVar1 == 0) {
    (**(code **)(**(int **)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 8) + 0x20) + 0xc) + 4) +
                           0x68) + 0x70))();
  }
  FUN_02083648(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_02037c24(DAT_02172994,param_1);
  FUN_02037b98(DAT_02172994 + 0x10,param_1);
  return;
}

