
int FUN_020839a8(int param_1)

{
  if ((*(uint *)(param_1 + 0x2c) & 0x40) == 0) {
    param_1 = *(int *)(*(int *)(param_1 + 0x10) + 0x70);
  }
  else {
    param_1 = param_1 + 0x30;
  }
  return param_1;
}

