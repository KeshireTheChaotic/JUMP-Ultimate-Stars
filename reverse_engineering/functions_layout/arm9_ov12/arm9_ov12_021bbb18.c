
void FUN_021bbb18(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  FUN_02028384(*(int *)(param_1 + 4),FUN_021bbb48);
  if (*(char *)(iVar1 + 0xa5) == '\0') {
    return;
  }
  FUN_02073840();
  return;
}

