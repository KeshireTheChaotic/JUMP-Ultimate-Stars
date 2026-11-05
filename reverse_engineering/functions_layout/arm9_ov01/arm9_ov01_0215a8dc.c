
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0215a8dc(undefined4 param_1,short *param_2)

{
  param_2[1] = DAT_0216de4a;
  param_2[3] = DAT_0216de48;
  _DAT_04001040 = param_2[2] & 0xffU | *param_2 << 8;
  _DAT_04001044 = param_2[3] & 0xffU | param_2[1] * 0x100;
  return;
}

