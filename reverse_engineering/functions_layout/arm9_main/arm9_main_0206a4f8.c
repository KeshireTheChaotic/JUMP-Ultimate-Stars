
void FUN_0206a4f8(undefined4 *param_1)

{
  FUN_02051890(&DAT_020afc04,param_1,6);
  *param_1 = *param_1;
  param_1[1] = param_1[1] & 0x7ff;
  FUN_02051890(&DAT_020afc09,param_1 + 2,6);
  param_1[2] = (uint)param_1[2] >> 3 | param_1[3] << 0x1d;
  param_1[3] = (uint)param_1[3] >> 3;
  param_1[2] = param_1[2];
  param_1[3] = param_1[3] & 0x7ff;
  FUN_02051890(&DAT_020afc0e,param_1 + 4,2);
  *(short *)(param_1 + 4) = (short)((int)(uint)*(ushort *)(param_1 + 4) >> 6);
  *(ushort *)(param_1 + 4) = *(ushort *)(param_1 + 4) & 0x3ff;
  FUN_02051890(&DAT_020afc10,(int)param_1 + 0x12,2);
  return;
}

