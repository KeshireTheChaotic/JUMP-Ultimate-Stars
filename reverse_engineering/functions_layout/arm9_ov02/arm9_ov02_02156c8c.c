
int FUN_02156c8c(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 4) + 100))();
  if (piVar1[6] == 0) {
    (**(code **)(*piVar1 + 0x10))();
  }
  return piVar1[6];
}

