
int FUN_021574ac(int *param_1,uint param_2)

{
  return param_1[1] + *(int *)(*param_1 + (param_2 & 0xffff) * 4);
}

