
void FUN_020506ec(int *param_1,uint *param_2,int param_3,int param_4)

{
  *param_2 = (uint)((longlong)param_3 * (longlong)*param_1) >> 0xc |
             (int)((ulonglong)((longlong)param_3 * (longlong)*param_1) >> 0x20) << 0x14;
  param_2[1] = (uint)((longlong)param_3 * (longlong)param_1[1]) >> 0xc |
               (int)((ulonglong)((longlong)param_3 * (longlong)param_1[1]) >> 0x20) << 0x14;
  param_2[2] = (uint)((longlong)param_4 * (longlong)param_1[2]) >> 0xc |
               (int)((ulonglong)((longlong)param_4 * (longlong)param_1[2]) >> 0x20) << 0x14;
  param_2[3] = (uint)((longlong)param_4 * (longlong)param_1[3]) >> 0xc |
               (int)((ulonglong)((longlong)param_4 * (longlong)param_1[3]) >> 0x20) << 0x14;
  return;
}

