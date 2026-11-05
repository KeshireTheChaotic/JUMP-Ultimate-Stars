
int FUN_037ff39c(int param_1)

{
  if (param_1 < 0x20) {
    return (int)(char)(&DAT_03807cb0)[param_1];
  }
  if (param_1 < 0x40) {
    return (int)*(char *)(0x3807cf0 - param_1);
  }
  if (param_1 < 0x60) {
    return (char)(&LAB_03807c70)[param_1] * -0x1000000 >> 0x18;
  }
  return *(char *)(0x3807cd0 - (param_1 + -0x60)) * -0x1000000 >> 0x18;
}

