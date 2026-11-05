
void FUN_02064e00(ushort *param_1,int param_2)

{
  if (param_2 == 0) {
    *param_1 = 0;
    return;
  }
  if (param_2 < 1) {
    *param_1 = -(ushort)param_2 | 0x8000;
    return;
  }
  *param_1 = (ushort)param_2 | 0x4000;
  return;
}

