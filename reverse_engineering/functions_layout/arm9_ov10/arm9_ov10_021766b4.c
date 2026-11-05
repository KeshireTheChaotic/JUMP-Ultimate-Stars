
undefined4 FUN_021766b4(int *param_1)

{
  undefined4 uVar1;
  
  if (DAT_021a7410 == 0) {
    return 0;
  }
  *param_1 = DAT_021a7410 + 0x61c;
  if ((*(char *)(DAT_021a7410 + 0x369) == '\x02') || (*(char *)(DAT_021a7410 + 0x369) == '\x03')) {
    uVar1 = FUN_0217cb58();
    return uVar1;
  }
  uVar1 = FUN_0217cbd8();
  return uVar1;
}

