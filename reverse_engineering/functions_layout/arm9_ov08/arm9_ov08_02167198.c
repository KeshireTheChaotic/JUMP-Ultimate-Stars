
void FUN_02167198(int *param_1)

{
  OS_DisableIrqMask(1);
  *(int *)(*param_1 + 4) = param_1[1];
  *(int *)param_1[1] = *param_1;
  param_1[1] = 0;
  *param_1 = param_1[1];
  OS_EnableIrqMask();
  return;
}

