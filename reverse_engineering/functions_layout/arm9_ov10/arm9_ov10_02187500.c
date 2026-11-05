
undefined4 FUN_02187500(undefined4 param_1,int param_2,int *param_3)

{
  if ((*(int **)(param_2 + 8) == (int *)0x0) || (*param_3 != **(int **)(param_2 + 8))) {
    return 1;
  }
  param_3[1] = param_2;
  return 0;
}

