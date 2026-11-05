
void FUN_021815d0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,int param_7,undefined4 param_8)

{
  if (param_1 == (undefined4 *)0x0) {
    FUN_02002068(s_slist____NULL_021a4d58,s_sb_serverlist_c_021a4cf0,0,0x11c);
  }
  if ((param_6 != 0) || (DAT_020a05c0 == 1)) {
    *param_1 = 1;
    FUN_02181788(param_1);
    FUN_0217fb7c(param_1);
    FUN_02004b18(param_1 + 3,param_2);
    FUN_02004b18(param_1 + 0xc,param_3);
    FUN_02004b18(param_1 + 0x15,param_4);
    param_1[0x122] = param_7;
    param_1[0x123] = 0;
    if (param_7 == 0) {
      FUN_02002068(s_callback____NULL_021a4d68,s_sb_serverlist_c_021a4cf0,0,0x132);
    }
    param_1[0x125] = param_8;
    param_1[0x126] = &DAT_021a4d38;
    param_1[0x128] = 0;
    param_1[300] = 0xffffffff;
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
    param_1[2] = 0;
    param_1[0x121] = 0xffffffff;
    param_1[0x120] = 0;
    param_1[0x129] = 0;
    param_1[0x12e] = param_5;
    FUN_02180b10(param_1);
    param_1[0x173] = 0;
    FUN_02001ed8();
    FUN_02003e24();
    FUN_02001ecc();
  }
  return;
}

