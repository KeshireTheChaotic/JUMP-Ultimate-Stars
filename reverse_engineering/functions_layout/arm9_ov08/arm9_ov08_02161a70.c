
int FUN_02161a70(uint param_1)

{
  if (param_1 < 0x3a) {
    return param_1 - 0x30;
  }
  if (param_1 < 0x47) {
    return param_1 - 0x37;
  }
  return param_1 - 0x57;
}

