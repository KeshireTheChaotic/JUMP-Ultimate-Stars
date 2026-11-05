
void FUN_02037b54(int *param_1,int *param_2)

{
  if (*param_1 == 0) {
    *param_1 = (int)param_2;
    param_1[1] = (int)param_2;
    param_2[1] = 0;
    *param_2 = 0;
    return;
  }
  param_2[1] = 0;
  *param_2 = *param_1;
  *(int **)(*param_1 + 4) = param_2;
  *param_1 = (int)param_2;
  return;
}

