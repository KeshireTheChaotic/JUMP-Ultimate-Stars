
void FUN_0206b178(int param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  bVar1 = *(byte *)(iVar2 + 0x11);
  *(byte *)(iVar2 + 0x11) = bVar1 + 1;
  if (bVar1 < *(byte *)(iVar2 + 0x17)) {
    return;
  }
  FUN_0206b304(iVar2);
  *(undefined1 *)(iVar2 + 0x11) = 0;
  return;
}

