
int FUN_02075678(int param_1,int param_2)

{
  return *(int *)(param_1 + 4) + param_2 * 8 + *(int *)(*(int *)(param_1 + 4) + param_2 * 8);
}

