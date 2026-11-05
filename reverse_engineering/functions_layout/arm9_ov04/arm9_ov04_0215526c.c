
void FUN_0215526c(int param_1,int param_2)

{
  if (param_1 == 0) {
    return;
  }
  if (param_2 < 0) {
    param_2 = 0;
  }
  if (999 < param_2) {
    param_2 = 999;
  }
  *(short *)(param_1 + 0x1a) = (short)param_2;
  return;
}

