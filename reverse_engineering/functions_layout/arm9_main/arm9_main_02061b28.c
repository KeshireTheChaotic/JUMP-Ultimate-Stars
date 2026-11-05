
undefined4 FUN_02061b28(uint param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_02061d60();
  if (iVar1 == 0) {
    return 1;
  }
  DAT_020aebd4 = param_2;
  DAT_020aebd8 = param_3;
  FUN_02061848(param_1 >> 0x10 & 0xff | 0x2006300);
  FUN_02061848(param_1 & 0xffff | 0x1010000);
  return 0;
}

