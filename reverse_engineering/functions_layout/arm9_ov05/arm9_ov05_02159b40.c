
void FUN_02159b40(int param_1,int param_2)

{
  int *piVar1;
  
  if (param_2 == 0) {
    piVar1 = *(int **)(*(int *)(param_1 + 100) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,0);
    return;
  }
  FUN_02023894(*(undefined4 *)(*(int *)(param_1 + 100) + 4),0x820014,0);
  (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 100) + 4) + 0x68) + 0x6c))();
  piVar1 = *(int **)(*(int *)(param_1 + 100) + 4);
  (**(code **)(*piVar1 + 0xd8))(piVar1,1);
  return;
}

