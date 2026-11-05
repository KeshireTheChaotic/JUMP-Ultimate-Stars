
undefined4 FUN_02182b8c(undefined4 param_1,int param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 8);
  if ((piVar1 != (int *)0x0) && (param_3 < *piVar1)) {
    *piVar1 = *piVar1 + -1;
  }
  return 1;
}

