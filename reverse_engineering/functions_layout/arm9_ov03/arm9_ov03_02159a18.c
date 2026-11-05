
void FUN_02159a18(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  (**(code **)(**(int **)(*(int *)(*(int *)(iVar2 + 0x38) + 4) + 0x68) + 0x6c))();
  if (*(int *)(iVar2 + 0x28) == 0) {
    return;
  }
  piVar1 = *(int **)(*(int *)(iVar2 + 0x28) + 4);
  (**(code **)(*piVar1 + 0x148))(piVar1,0x10);
  func_0x021b6214(*(undefined4 *)(*(int *)(iVar2 + 0x28) + 4),1);
  return;
}

