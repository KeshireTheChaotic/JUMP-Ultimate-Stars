
undefined4 FUN_021c021c(uint param_1,uint param_2,int param_3)

{
  if ((0x1fe < param_1) || (param_1 < 0xe4)) {
    return 0;
  }
  if ((0x10 < param_2) || (param_2 < 8)) {
    return 0;
  }
  if ((int)((param_1 + 0x26) * 4 + 0x14a + ((param_2 + 0x20) * 4 + 0x70) * param_3) < 0x15e0) {
    return 1;
  }
  return 0;
}

