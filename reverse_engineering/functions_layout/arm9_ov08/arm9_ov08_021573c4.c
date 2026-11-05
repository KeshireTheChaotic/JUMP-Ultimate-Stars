
undefined4 FUN_021573c4(int param_1,uint param_2)

{
  DAT_0216e6ec = (char)param_1;
  DAT_0216e6f8 = param_2;
  if ((param_1 < 0) || (5 < param_1)) {
    return 0;
  }
  if (1 < (param_2 & 0xf)) {
    return 0;
  }
  if ((param_1 != 0) && ((param_2 >> 4 & 1) != 0)) {
    return 0;
  }
  if ((param_1 == 0) && ((param_2 >> 4 & 1) == 0)) {
    return 0;
  }
  return 1;
}

