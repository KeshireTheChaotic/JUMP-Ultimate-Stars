
void FUN_0206bdf4(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 0;
  piVar4 = *(int **)(*(int *)(param_1 + 4) + 0x10);
  do {
    iVar2 = iVar3 + 8;
    iVar3 = iVar3 + 1;
    *(undefined4 *)(*(int *)piVar4[iVar2] + 0xe0) = 0;
  } while (iVar3 < 4);
  *(byte *)(*(int *)(piVar4[0xc] + 4) + 0x14) = *(byte *)(*(int *)(piVar4[0xc] + 4) + 0x14) & 0xfe;
  uVar1 = *(ushort *)(piVar4 + 0x1b);
  *(short *)(piVar4 + 0x1b) = (short)piVar4[0x1b] + 1;
  if (*(ushort *)(piVar4 + 0x1c) < uVar1) {
    *(undefined2 *)(piVar4 + 0x1b) = 0;
    FUN_02028384(*(undefined4 *)(*piVar4 + 4),0x206bd8d);
  }
  FUN_0206bf14(piVar4);
  return;
}

