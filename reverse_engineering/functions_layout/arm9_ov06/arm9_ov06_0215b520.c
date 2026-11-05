
void FUN_0215b520(int param_1,int param_2)

{
  if (param_2 < 0x18) {
    param_2 = 0x18;
  }
  if (0xb4 < param_2) {
    param_2 = 0xb4;
  }
  *(short *)(param_1 + 0x110) = (short)param_2;
  return;
}

