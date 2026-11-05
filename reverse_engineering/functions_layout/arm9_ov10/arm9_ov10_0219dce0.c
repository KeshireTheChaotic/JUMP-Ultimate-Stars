
undefined4 FUN_0219dce0(void)

{
  int iVar1;
  
  if (*(int *)(DAT_0214ccf8 + 0x1bd8) == 0) {
    return 1;
  }
  iVar1 = func_0x021cbf5c(*(int *)(DAT_0214ccf8 + 0x1bd8));
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(DAT_0214ccf8 + 0x1bd8) = 0;
  return 1;
}

