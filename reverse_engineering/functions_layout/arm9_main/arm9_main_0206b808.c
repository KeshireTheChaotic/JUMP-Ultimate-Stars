
void FUN_0206b808(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  FUN_0206b848(iVar1);
  if (*(byte *)(iVar1 + 0x11) < *(byte *)(iVar1 + 0x18)) {
    *(byte *)(iVar1 + 0x11) = *(byte *)(iVar1 + 0x11) + *(char *)(iVar1 + 0x19);
    return;
  }
  FUN_020282f4(*(undefined4 *)(param_1 + 4));
  return;
}

