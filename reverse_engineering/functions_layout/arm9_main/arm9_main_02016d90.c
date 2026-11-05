
void FUN_02016d90(int param_1,int param_2,int param_3,int param_4,short *param_5)

{
  if ((int)(uint)*(ushort *)(param_1 + 8) < param_2 + ((int)param_5[2] - (int)*param_5)) {
    param_5[2] = *(ushort *)(param_1 + 8) - (short)param_2;
  }
  if ((int)(uint)*(ushort *)(param_1 + 10) < param_3 + ((int)param_5[3] - (int)param_5[1])) {
    param_5[3] = *(ushort *)(param_1 + 10) - (short)param_3;
  }
  param_2 = param_5[1] + param_2;
  if (param_2 < 0) {
    param_5[1] = param_5[1] - (short)((uint)(param_2 * 0x10000) >> 0x10);
  }
  param_3 = *param_5 + param_3;
  if (param_3 < 0) {
    *param_5 = *param_5 - (short)((uint)(param_3 * 0x10000) >> 0x10);
  }
  if ((int)(uint)*(ushort *)(param_4 + 8) < (int)param_5[2]) {
    param_5[2] = *(ushort *)(param_4 + 8);
  }
  if ((int)(uint)*(ushort *)(param_4 + 10) < (int)param_5[3]) {
    param_5[3] = *(ushort *)(param_4 + 10);
  }
  if (param_5[1] < 0) {
    param_5[1] = 0;
  }
  if (*param_5 < 0) {
    *param_5 = 0;
  }
  return;
}

