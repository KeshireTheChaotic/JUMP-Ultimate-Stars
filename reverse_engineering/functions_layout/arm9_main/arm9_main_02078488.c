
bool FUN_02078488(int param_1,int param_2)

{
  param_2 = param_2 + *(short *)(param_1 + 0x18);
  if (param_2 < 0) {
    param_2 = 0;
  }
  if (*(short *)(param_1 + 0x16) < param_2) {
    param_2 = (int)*(short *)(param_1 + 0x16);
  }
  *(short *)(param_1 + 0x18) = (short)param_2;
  return *(short *)(param_1 + 0x18) != 0;
}

