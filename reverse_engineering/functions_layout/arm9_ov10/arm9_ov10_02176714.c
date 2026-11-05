
int FUN_02176714(void)

{
  int iVar1;
  
  if (DAT_021a7410 == 0) {
    return 0;
  }
  if ((*(char *)(DAT_021a7410 + 0x369) == '\x02') || (*(char *)(DAT_021a7410 + 0x369) == '\x03')) {
    iVar1 = FUN_0217cc48();
    return iVar1 + 1;
  }
  iVar1 = FUN_0217cc64();
  return iVar1 + 1;
}

