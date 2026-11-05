
void FUN_0217bfe0(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if ((char)(&DAT_021813cc)[iVar1] < '\0') {
      return;
    }
    if ((&DAT_021813cc)[iVar1] == *(char *)(*(int *)(param_1 + 0x20) + 0x18)) break;
    iVar1 = iVar1 + 1;
  }
  return;
}

