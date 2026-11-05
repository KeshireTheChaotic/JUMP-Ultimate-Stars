
int FUN_02155a3c(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(param_1 + 8) + 4);
  piVar1 = (int *)(**(code **)(*piVar1 + 0xb0))(piVar1,0x31305053);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  if (piVar1[6] == 0) {
    (**(code **)(*piVar1 + 0x14))();
  }
  return piVar1[6];
}

