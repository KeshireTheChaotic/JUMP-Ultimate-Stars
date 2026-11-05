
int FUN_0214db7c(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint unaff_r7;
  int iVar1;
  bool in_ZR;
  
  if (in_ZR) {
    param_3 = (uint)param_1 & (int)param_1 << (unaff_r7 & 0xff);
  }
  iVar1 = 0;
  if (param_3 != 0) {
    for (; param_3 != 0; param_3 = param_3 - 1) {
      iVar1 = iVar1 + 1;
      *param_1 = *param_2;
      param_1[1] = (uint)*(ushort *)*param_2 + (uint)(byte)((ushort *)*param_2)[3] * 0x400;
      param_1 = param_1 + 2;
      param_2 = param_2 + 2;
    }
  }
  return iVar1;
}

