
void FUN_0217dac4(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  
  piVar3 = *(int **)(*(int *)(param_1 + 4) + 0x10);
  iVar2 = FUN_02175628();
  bVar4 = (*(uint *)(*(int *)(*(int *)(iVar2 + 4) + 0x10) + 0xd4) & 0x80) != 0;
  if (bVar4) {
    param_4 = 8;
  }
  cVar1 = (char)piVar3[3];
  if (!bVar4) {
    param_4 = 4;
  }
  if (cVar1 == '\0') {
    *(uint *)(*piVar3 + 0xe4) = *(uint *)(*piVar3 + 0xe4) | param_4;
  }
  else if (cVar1 == '\x01') {
    *(uint *)(*piVar3 + 0xe4) = *(uint *)(*piVar3 + 0xe4) | 0x80;
  }
  else if (cVar1 == '\x05') {
    *(uint *)(*piVar3 + 0xe4) = *(uint *)(*piVar3 + 0xe4) & ~(param_4 | 0x80);
    FUN_02028384(*(undefined4 *)(param_1 + 4),&LAB_0217d92c);
    piVar3[2] = 0;
  }
  *(char *)(piVar3 + 3) = (char)piVar3[3] + '\x01';
  return;
}

