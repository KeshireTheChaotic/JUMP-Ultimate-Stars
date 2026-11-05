
undefined4 FUN_02061a54(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_02061d60();
  if (iVar1 == 0) {
    return 1;
  }
  DAT_020aebd4 = param_3;
  DAT_020aebd8 = param_4;
  FUN_02061848(param_1 & 0xff | 0x2006400);
  FUN_02061848(param_2 & 0xffff | 0x1010000);
  return 0;
}

