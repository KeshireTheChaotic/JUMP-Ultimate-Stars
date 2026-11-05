
void FUN_02167198(int *param_1)

{
  FUN_02051d14(1);
  *(int *)(*param_1 + 4) = param_1[1];
  *(int *)param_1[1] = *param_1;
  param_1[1] = 0;
  *param_1 = param_1[1];
  FUN_02051d5c();
  return;
}

