
void FUN_0219bc98(void)

{
  int iVar1;
  
  if (*(int *)(DAT_0214ccf8 + 0x24) != 0) {
    if (*(int *)(DAT_0214ccf8 + 0x28) - 6U < 2) {
      return;
    }
    iVar1 = FUN_0219aa34(*(undefined4 *)(DAT_0214ccf8 + 0x2c));
    if ((iVar1 != -1 && iVar1 != 9) && iVar1 != 0xc) {
      return;
    }
  }
  FUN_02176b50();
  return;
}

