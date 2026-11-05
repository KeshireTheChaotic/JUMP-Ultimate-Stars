
void FUN_02037f58(int *param_1,int *param_2)

{
  if ((int *)param_2[1] == (int *)0x0) {
    *param_1 = *param_2;
  }
  else {
    *(int *)param_2[1] = *param_2;
  }
  if (*param_2 != 0) {
    *(int *)(*param_2 + 4) = param_2[1];
  }
  return;
}

