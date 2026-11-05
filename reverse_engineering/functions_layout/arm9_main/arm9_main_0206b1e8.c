
void FUN_0206b1e8(int param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  bVar1 = *(byte *)(iVar2 + 0x11);
  *(byte *)(iVar2 + 0x11) = bVar1 + 1;
  if (bVar1 < *(byte *)(iVar2 + 0x17)) {
    return;
  }
  if (*(char *)(iVar2 + 0x19) < '\0') {
    FUN_0206b304();
  }
  else {
    FUN_0206b3dc(iVar2);
  }
  *(undefined1 *)(iVar2 + 0x11) = 0;
  bVar1 = *(char *)(iVar2 + 0x18) + 1;
  *(byte *)(iVar2 + 0x18) = bVar1;
  if ((uint)bVar1 == *(byte *)(iVar2 + 0x10) - 1) {
    *(char *)(iVar2 + 0x19) = -*(char *)(iVar2 + 0x19);
    *(undefined1 *)(iVar2 + 0x18) = 0;
  }
  return;
}

