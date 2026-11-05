
void FUN_02151a2c(int *param_1,undefined2 param_2,undefined2 param_3)

{
  *(undefined2 *)(*param_1 + param_1[1] * 4) = param_2;
  *(undefined2 *)(*param_1 + param_1[1] * 4 + 2) = param_3;
  param_1[1] = param_1[1] + 1;
  return;
}

