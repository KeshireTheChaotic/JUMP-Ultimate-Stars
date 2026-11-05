
undefined4 FUN_020615b0(uint param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_02061d60();
  if (iVar1 == 0) {
    return 1;
  }
  DAT_020aebd4 = param_2;
  DAT_020aebd8 = param_3;
  FUN_02061848(param_1 & 0xff | 0x3006600);
  return 0;
}

