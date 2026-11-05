
undefined4 FUN_02061ad0(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_02061d60();
  if (iVar1 == 0) {
    return 1;
  }
  DAT_020aebd4 = param_3;
  DAT_020aebd8 = param_4;
  (&DAT_020aebf8)[param_1 * 4] = 0;
  *(undefined4 *)(&DAT_020aebfc + param_1 * 8) = param_2;
  FUN_02061848(param_1 & 0xff | 0x3006500);
  return 0;
}

