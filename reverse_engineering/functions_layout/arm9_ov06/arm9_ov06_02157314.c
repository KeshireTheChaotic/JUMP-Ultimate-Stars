
void FUN_02157314(int param_1,int param_2,int param_3)

{
  if (param_3 == 0) {
    param_3 = -1;
  }
  *(short *)(param_1 + param_2 * 2 + 0x18) = (short)param_3;
  return;
}

