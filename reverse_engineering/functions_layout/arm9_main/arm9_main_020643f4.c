
undefined4 FUN_020643f4(int param_1,int param_2,int param_3)

{
  if (param_3 == 0) {
    param_2 = param_2 + *(int *)(param_1 + 0x24);
  }
  else if (param_3 == 1) {
    param_2 = param_2 + *(int *)(param_1 + 0x2c);
  }
  else {
    if (param_3 != 2) {
      return 0;
    }
    param_2 = param_2 + *(int *)(param_1 + 0x28);
  }
  if (param_2 < *(int *)(param_1 + 0x24)) {
    param_2 = *(int *)(param_1 + 0x24);
  }
  if (*(int *)(param_1 + 0x28) < param_2) {
    param_2 = *(int *)(param_1 + 0x28);
  }
  *(int *)(param_1 + 0x2c) = param_2;
  return 1;
}

