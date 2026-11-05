
void FUN_02065fec(ushort *param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = *param_1;
  if (param_2 < 0) {
    if ((uVar1 & 0xc0) == 0x80) {
      *param_1 = uVar1 & 0xff3f | 0xc0;
    }
    param_1[2] = -(ushort)param_2;
    return;
  }
  if ((uVar1 & 0xc0) == 0xc0) {
    *param_1 = uVar1 & 0xff3f | 0x80;
  }
  param_1[2] = (ushort)param_2;
  return;
}

