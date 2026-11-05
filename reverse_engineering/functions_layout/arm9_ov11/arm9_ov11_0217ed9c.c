
void FUN_0217ed9c(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *(char *)(param_1 + 0x7d);
  iVar2 = **(int **)(param_1 + 0x14);
  if (cVar1 == '\0') {
    *(uint *)(iVar2 + 0xe4) = *(uint *)(iVar2 + 0xe4) | 2;
    *(char *)(param_1 + 0x7d) = *(char *)(param_1 + 0x7d) + '\x01';
    return;
  }
  if (cVar1 == '\x01') {
    *(uint *)(iVar2 + 0xe4) = *(uint *)(iVar2 + 0xe4) | 0x10;
    *(char *)(param_1 + 0x7d) = *(char *)(param_1 + 0x7d) + '\x01';
    return;
  }
  if (cVar1 != '\x02') {
    return;
  }
  if ((*(uint *)(param_1 + 0xd4) & 8) != 0) {
    *(uint *)(iVar2 + 0xe4) = *(uint *)(iVar2 + 0xe4) & 0xffffffed;
  }
  if ((*(uint *)(param_1 + 0xd4) & 2) == 0) {
    return;
  }
  *(uint *)(iVar2 + 0xe4) = *(uint *)(iVar2 + 0xe4) & 0xffffffed;
  *(undefined1 *)(param_1 + 0x7c) = 0;
  *(undefined1 *)(param_1 + 0x7d) = 0;
  return;
}

