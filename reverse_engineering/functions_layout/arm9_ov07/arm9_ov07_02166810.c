
void FUN_02166810(int param_1)

{
  int iVar1;
  
  iVar1 = func_0x0219bc20();
  if (iVar1 == 0) {
    if (*(char *)(DAT_0214ccf8 + 0x57) != '\0') {
      func_0x0219a278();
      *(undefined1 *)(DAT_0214ccf8 + 0x53) = 0;
      *(undefined4 *)(DAT_0214ccf8 + 0x48) = 2;
      *(undefined1 *)(DAT_0214ccf8 + 0x51) = 0;
      func_0x0219a4b4();
      FUN_02028384(*(undefined4 *)(param_1 + 4),0x219bdec);
    }
  }
  return;
}

