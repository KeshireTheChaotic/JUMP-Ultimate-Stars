
void FUN_0219dbb4(int param_1,uint param_2)

{
  if (0x7fff < param_2) {
    param_2 = 0x7fff;
  }
  *(short *)(DAT_0214ccf8 + param_1 * 2 + 0x1c28) = (short)param_2;
  return;
}

