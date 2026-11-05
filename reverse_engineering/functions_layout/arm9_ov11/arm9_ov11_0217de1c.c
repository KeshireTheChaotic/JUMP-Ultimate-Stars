
void FUN_0217de1c(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0x10);
  if ((char)piVar1[3] == '\0') {
    *(uint *)(*piVar1 + 0xe4) = *(uint *)(*piVar1 + 0xe4) | 0x40;
  }
  else if ((char)piVar1[3] == '\x04') {
    *(uint *)(*piVar1 + 0xe4) = *(uint *)(*piVar1 + 0xe4) & 0xffffffbf;
    FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_0217d92c);
    piVar1[2] = 0;
  }
  *(char *)(piVar1 + 3) = (char)piVar1[3] + '\x01';
  return;
}

