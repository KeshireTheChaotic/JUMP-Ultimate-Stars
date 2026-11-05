
uint FUN_02002344(ushort *param_1,byte *param_2,int param_3)

{
  if (param_2 == (byte *)0x0) {
    return 0;
  }
  if (param_3 == 0) {
    return 0xffffffff;
  }
  if (param_1 != (ushort *)0x0) {
    *param_1 = (ushort)*param_2;
  }
  return (uint)(*param_2 != 0);
}

