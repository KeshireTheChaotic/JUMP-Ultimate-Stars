
void FUN_021bf744(undefined4 param_1,undefined4 param_2,byte param_3)

{
  if (DAT_021d51bc + 0x358U < DAT_021d51c0 + 0x62U) {
    DAT_021d51ec._0_1_ = (char)(DAT_021d51bc + 0x358U) - (char)DAT_021d51c0;
    MIi_CpuClear16(0,(int)&DAT_021d51ee + (uint)(byte)DAT_021d51ec,0x62 - (uint)(byte)DAT_021d51ec);
  }
  else {
    DAT_021d51ec._0_1_ = 0x62;
  }
  MIi_CpuCopy16(DAT_021d51c0,&DAT_021d51ee,(byte)DAT_021d51ec);
  DAT_021d51ea = DAT_021d51c7;
  DAT_021d51eb = DAT_021d51c8;
  DAT_021d51e5 = *(undefined1 *)(DAT_021d51bc + 0x4b3);
  DAT_021d51e6 = DAT_021d51c6;
  DAT_021d51e0 = *(undefined4 *)(DAT_021d51bc + 0x4b8);
  DAT_021d51e4 = *(byte *)(DAT_021d51bc + 0x4b2) & 3 | *(char *)(DAT_021d51bc + 0x4b5) << 2;
  DAT_021d51e7 = DAT_021d51c9;
  DAT_021d51e8 = 0;
  DAT_021d51c9 = DAT_021d51c9 + '\x01';
  DAT_021d51e8 = FUN_021bf508(&DAT_021d51e8,0x68);
  DAT_021d51c7 = DAT_021d51c7 + 1;
  if (DAT_021d51c7 < DAT_021d51c8) {
    DAT_021d51c0 = DAT_021d51c0 + 0x62;
  }
  else {
    DAT_021d51c4 = 4;
  }
  FUN_0205ac6c(0,&DAT_021d51e0,0x70,param_1,param_2,param_3 | 3);
  return;
}

