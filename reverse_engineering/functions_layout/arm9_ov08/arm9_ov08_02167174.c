
void FUN_02167174(int *param_1,int *param_2)

{
  OS_DisableIrqMask(1);
  *(int **)(*param_1 + 4) = param_2;
  *param_2 = *param_1;
  param_2[1] = (int)param_1;
  *param_1 = (int)param_2;
  OS_EnableIrqMask();
  return;
}

