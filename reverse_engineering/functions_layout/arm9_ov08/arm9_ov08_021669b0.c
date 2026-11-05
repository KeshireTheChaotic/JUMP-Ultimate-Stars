
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021669b0(int param_1,int param_2,short *param_3)

{
  if (param_1 != 1) {
    if (param_2 == 0) {
      _DAT_04000040 = *param_3 << 8 | param_3[2] & 0xffU;
      _DAT_04000044 = param_3[1] << 8 | param_3[3] & 0xffU;
      return;
    }
    _DAT_04000042 = *param_3 << 8 | param_3[2] & 0xffU;
    _DAT_04000046 = param_3[1] << 8 | param_3[3] & 0xffU;
    return;
  }
  if (param_2 == 0) {
    _DAT_04001040 = *param_3 << 8 | param_3[2] & 0xffU;
    _DAT_04001044 = param_3[1] << 8 | param_3[3] & 0xffU;
    return;
  }
  _DAT_04001042 = *param_3 << 8 | param_3[2] & 0xffU;
  _DAT_04001046 = param_3[1] << 8 | param_3[3] & 0xffU;
  return;
}

