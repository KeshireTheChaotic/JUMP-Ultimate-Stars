
undefined4 FUN_0206a2a8(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(char *)(param_1 + iVar1) != '\0') {
      return 1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x20);
  return 0;
}

