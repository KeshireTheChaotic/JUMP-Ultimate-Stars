
void FUN_0217e454(int param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = **(int **)(param_1 + 0x14);
  if (*(char *)(param_1 + 0x108) != '\x01') {
    return;
  }
  if ((*(uint *)(iVar2 + 0xe4) & 2) == 0) {
    *(undefined1 *)(param_1 + 0x7d) = 0;
    return;
  }
  bVar1 = *(byte *)(param_1 + 0x7d);
  *(byte *)(param_1 + 0x7d) = bVar1 + 1;
  if (0x10 < bVar1) {
    *(uint *)(iVar2 + 0xe4) = *(uint *)(iVar2 + 0xe4) & 0xfffffffd;
  }
  return;
}

