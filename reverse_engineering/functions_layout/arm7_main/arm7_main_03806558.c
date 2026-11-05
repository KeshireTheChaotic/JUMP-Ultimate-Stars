
undefined4 FUN_03806558(uint param_1)

{
  if (param_1 < 0x10000) {
    DAT_0380ba52 = 0;
    DAT_0380ba50 = -(short)param_1;
    return 1;
  }
  if (param_1 < 0x400000) {
    DAT_0380ba52 = 1;
    DAT_0380ba50 = -(short)(param_1 >> 6);
    return 1;
  }
  if (param_1 < 0x1000000) {
    DAT_0380ba52 = 2;
    DAT_0380ba50 = -(short)(param_1 >> 8);
    return 1;
  }
  if (param_1 < 0x4000000) {
    DAT_0380ba52 = 3;
    DAT_0380ba50 = -(short)(param_1 >> 10);
    return 1;
  }
  return 0;
}

