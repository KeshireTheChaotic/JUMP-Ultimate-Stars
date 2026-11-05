
void FUN_021544f0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + param_2 * 4 + 0x18);
  if (param_3 == 0) {
    (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),0);
    return;
  }
  if (param_3 == 1) {
    FUN_02023894(*(undefined4 *)(iVar1 + 4),0x820002,0);
    (**(code **)(**(int **)(*(int *)(iVar1 + 4) + 0x68) + 0x6c))();
    (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
    return;
  }
  if (param_3 == 2) {
    FUN_02023894(*(undefined4 *)(iVar1 + 4),0x820001,0);
    (**(code **)(**(int **)(*(int *)(iVar1 + 4) + 0x68) + 0x6c))();
    (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
    return;
  }
  return;
}

