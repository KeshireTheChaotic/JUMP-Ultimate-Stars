
undefined4 FUN_021b712c(int param_1)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0xa8) != '\0') || (DAT_02093c24 < DAT_021d5160)) {
    return 1;
  }
  iVar1 = *(int *)(param_1 + 0x9c);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (*(char *)(iVar1 + 0xa8) != '\0') break;
    iVar1 = *(int *)(iVar1 + 0x9c);
  }
  return 1;
}

