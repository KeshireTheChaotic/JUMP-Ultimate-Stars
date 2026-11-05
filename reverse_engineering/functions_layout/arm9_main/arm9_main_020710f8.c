
void FUN_020710f8(int param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,uint *param_6,
                 uint *param_7)

{
  param_1 = param_1 * 0x20;
  *param_2 = (uint)(byte)(&DAT_020b0564)[param_1];
  *param_3 = (uint)(byte)(&DAT_020b0565)[param_1];
  *param_4 = (uint)(byte)(&DAT_020b0566)[param_1];
  *param_5 = (uint)(byte)(&DAT_020b0567)[param_1];
  *param_6 = (uint)(byte)(&DAT_020b0568)[param_1];
  *param_7 = (uint)(byte)(&DAT_020b0569)[param_1];
  FUN_02073114(param_1 + 0x2ac,1);
  FUN_02073114(param_1 + 0x2ad,1);
  FUN_02073114(param_1 + 0x2ae,1);
  FUN_02073114(param_1 + 0x2af,1);
  FUN_02073114(param_1 + 0x2b0,1);
  FUN_02073114(param_1 + 0x2b1,1);
  return;
}

