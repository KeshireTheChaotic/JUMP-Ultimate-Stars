
int FUN_02075284(int param_1,int param_2)

{
  return *(int *)(param_1 + 4) + param_2 * 4 + *(int *)(*(int *)(param_1 + 4) + param_2 * 4);
}

