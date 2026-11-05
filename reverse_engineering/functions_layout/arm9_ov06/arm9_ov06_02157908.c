
void FUN_02157908(int param_1,int param_2)

{
  if (param_1 == 0) {
    return;
  }
  if (*(short *)(param_1 + param_2 * 2 + 0x6e) != -1) {
    *(short *)(param_1 + 0x6e + param_2 * 2) = *(short *)(param_1 + 0x6e + param_2 * 2) + 1;
  }
  return;
}

