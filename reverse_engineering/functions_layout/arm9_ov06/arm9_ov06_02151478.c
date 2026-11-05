
undefined4 FUN_02151478(int param_1)

{
  *(short *)(param_1 + 0x30) = *(short *)(param_1 + 0x30) + -1;
  if (*(short *)(param_1 + 0x30) < 0) {
    return 1;
  }
  return 0;
}

