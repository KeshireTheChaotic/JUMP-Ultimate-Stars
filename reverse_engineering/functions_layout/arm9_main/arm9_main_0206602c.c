
void FUN_0206602c(ushort *param_1,ushort param_2,int param_3)

{
  if (param_3 < 0) {
    *param_1 = param_2 | 0xc0;
    param_1[2] = -(ushort)param_3;
    return;
  }
  *param_1 = param_2 | 0x80;
  param_1[2] = (ushort)param_3;
  return;
}

