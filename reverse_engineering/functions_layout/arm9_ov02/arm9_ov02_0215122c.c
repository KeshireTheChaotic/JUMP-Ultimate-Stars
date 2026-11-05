
void FUN_0215122c(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    piVar1 = *(int **)(*(int *)(param_1 + 4) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,0);
    (**(code **)(**(int **)(param_1 + 4) + 8))();
  }
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 8) + 8))();
  }
  FUN_0201b244(param_1);
  return;
}

