
void FUN_0206b7cc(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  FUN_0206b848(iVar1);
  if (*(char *)(iVar1 + 0x11) == '\0') {
    FUN_020282f4(*(undefined4 *)(param_1 + 4));
    return;
  }
  *(char *)(iVar1 + 0x11) = *(char *)(iVar1 + 0x11) + *(char *)(iVar1 + 0x19);
  return;
}

