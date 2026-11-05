
void FUN_02060a04(ushort *param_1,ushort *param_2)

{
  ushort extraout_var;
  ushort extraout_var_00;
  int extraout_r1;
  int extraout_r1_00;
  
  if (DAT_020aeb90 == 0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    return;
  }
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  if (param_2[2] == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  FUN_0200d10c(DAT_020aeb80,DAT_020aeb80 >> 0x1f,(uint)*param_2 * 4 - DAT_020aeb78,
               -(uint)((uint)*param_2 * 4 < DAT_020aeb78) - ((int)DAT_020aeb78 >> 0x1f));
  *param_1 = extraout_var >> 6 | (ushort)(extraout_r1 << 10);
  if ((short)*param_1 < 0) {
    *param_1 = 0;
  }
  else if (0xff < (short)*param_1) {
    *param_1 = 0xff;
  }
  FUN_0200d10c(DAT_020aeb8c,DAT_020aeb8c >> 0x1f,(uint)param_2[1] * 4 - DAT_020aeb84,
               -(uint)((uint)param_2[1] * 4 < DAT_020aeb84) - ((int)DAT_020aeb84 >> 0x1f));
  param_1[1] = extraout_var_00 >> 6 | (ushort)(extraout_r1_00 << 10);
  if ((short)param_1[1] < 0) {
    param_1[1] = 0;
    return;
  }
  if (0xbf < (short)param_1[1]) {
    param_1[1] = 0xbf;
  }
  return;
}

