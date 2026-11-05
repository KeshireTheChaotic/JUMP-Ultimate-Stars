
int FUN_02034db8(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0x3c))();
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  if (piVar1[7] == 0) {
    (**(code **)(*piVar1 + 0x14))();
  }
  return piVar1[7];
}

