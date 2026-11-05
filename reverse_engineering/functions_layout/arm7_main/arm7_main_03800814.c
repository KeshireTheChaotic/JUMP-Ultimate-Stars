
int FUN_03800814(int param_1,int param_2)

{
  if (DAT_03808aa4 == 0) {
    return 0;
  }
  if (param_2 < 0x10) {
    return (uint)*(byte *)(param_1 + 1) * 0x24 + DAT_03808aa4 + 0x20 + param_2 * 2;
  }
  return DAT_03808aa4 + 0x260 + (param_2 + -0x10) * 2;
}

