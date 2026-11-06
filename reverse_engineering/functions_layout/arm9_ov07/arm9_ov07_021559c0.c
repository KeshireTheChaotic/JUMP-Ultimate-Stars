
void FUN_021559c0(int param_1,int param_2)

{
  *(int *)(param_1 + 0x5f0) = param_2;
  if (param_2 != 0x7ff0) {
    *(int *)(param_1 + 0x5f4) = (int)*(char *)(param_1 + param_2 + 0x5b8);
  }
  return;
}

