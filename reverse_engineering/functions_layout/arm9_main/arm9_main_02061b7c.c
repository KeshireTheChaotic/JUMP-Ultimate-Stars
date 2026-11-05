
undefined4 FUN_02061b7c(uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_02061d60();
  if (iVar1 == 0) {
    return 1;
  }
  DAT_020aebbc = 0;
  FUN_02061848(0x3006000);
  do {
  } while (DAT_020aebbc == 0);
  DAT_020aebbc = 0;
  DAT_020aebc0 = 0;
  FUN_0206161c(0,2,0,0);
  FUN_02061848(param_1 & 0xff | 0x2006100);
  FUN_02061848(param_2 & 0xffff | 0x1010000);
  return 0;
}

