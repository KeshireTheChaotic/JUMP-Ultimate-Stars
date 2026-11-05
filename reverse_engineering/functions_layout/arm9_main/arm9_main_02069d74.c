
ushort FUN_02069d74(undefined4 param_1,ushort param_2,int param_3)

{
  DAT_020afbf8 = param_2 & 0xff;
  DAT_020afbfc = 1;
  if (param_3 != 0) {
    DAT_020afbf8 = 0xff;
  }
  return DAT_020afbf8;
}

