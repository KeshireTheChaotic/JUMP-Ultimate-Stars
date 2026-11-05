
int FUN_02015410(int param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = *(int *)(*(int *)(param_1 + 0x6c) + (param_2 + -1) * *(int *)(param_1 + 0x70));
  }
  return param_1;
}

