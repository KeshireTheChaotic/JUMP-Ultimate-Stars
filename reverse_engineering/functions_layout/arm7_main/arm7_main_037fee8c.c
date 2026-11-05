
int FUN_037fee8c(int param_1,int param_2)

{
  if (param_2 < 0x18) {
    return param_1 * (DAT_03808548 * (param_2 + 0x28) + (0x7fff - DAT_03808548) * 0x40) >> 0x15;
  }
  if (param_2 < 0x69) {
    return param_1;
  }
  return param_1 * (-DAT_03808548 * (param_2 + -0x28) + (DAT_03808548 + 0x7fff) * 0x40) >> 0x15;
}

