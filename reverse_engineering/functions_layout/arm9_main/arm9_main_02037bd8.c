
void FUN_02037bd8(int param_1,int *param_2,int *param_3)

{
  if (param_2 == (int *)0x0) {
    FUN_02037b54(param_1,param_3);
  }
  else {
    param_3[1] = (int)param_2;
    *param_3 = *param_2;
    if (*param_2 != 0) {
      *(int **)(*param_2 + 4) = param_3;
    }
    *param_2 = (int)param_3;
  }
  if (param_2 == *(int **)(param_1 + 4)) {
    *(int **)(param_1 + 4) = param_3;
  }
  return;
}

