
void FUN_021bb9bc(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if (*(char *)(iVar1 + 0xa9) != '\0') {
    FUN_021bcbb0(iVar1);
  }
  if (*(char *)(iVar1 + 0xa6) != '\0') {
    *(undefined1 *)(iVar1 + 0xa9) = 0;
    FUN_021bbccc(*(undefined4 *)(iVar1 + 0x10));
  }
  if (*(char *)(iVar1 + 0xa5) == '\0') {
    return;
  }
  FUN_02073840();
  return;
}

