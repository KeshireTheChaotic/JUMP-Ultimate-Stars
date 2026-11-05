
undefined4 FUN_02173318(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if ((char)(&DAT_021810a8)[iVar1] < '\0') {
      return 0;
    }
    if ((&DAT_021810a8)[iVar1] == *(char *)(*(int *)(param_1 + 0x20) + 0x18)) break;
    iVar1 = iVar1 + 1;
  }
  return 1;
}

