
void FUN_0217de8c(int param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = *(int **)(*(int *)(param_1 + 4) + 0x10);
  cVar1 = (char)piVar2[3];
  if (cVar1 == '\0') {
    *(uint *)(*piVar2 + 0xe4) = *(uint *)(*piVar2 + 0xe4) | 1;
  }
  else if (cVar1 == '\x01') {
    *(uint *)(*piVar2 + 0xe4) = *(uint *)(*piVar2 + 0xe4) | 0x40;
  }
  else if (cVar1 == '\x05') {
    *(uint *)(*piVar2 + 0xe4) = *(uint *)(*piVar2 + 0xe4) & 0xffffffbe;
    FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_0217d92c);
    piVar2[2] = 0;
  }
  *(char *)(piVar2 + 3) = (char)piVar2[3] + '\x01';
  return;
}

