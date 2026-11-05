
int FUN_02075878(int param_1,int param_2)

{
  return *(int *)(param_1 + 4) + param_2 * 0x18 + *(int *)(*(int *)(param_1 + 4) + param_2 * 0x18);
}

