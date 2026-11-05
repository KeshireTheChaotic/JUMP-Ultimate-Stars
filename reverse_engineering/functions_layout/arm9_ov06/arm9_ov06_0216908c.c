
int FUN_0216908c(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0xec))();
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  if (piVar1[6] == 0) {
    (**(code **)(*piVar1 + 0x14))();
  }
  return piVar1[6];
}

