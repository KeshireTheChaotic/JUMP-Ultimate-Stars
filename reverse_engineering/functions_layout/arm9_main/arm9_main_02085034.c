
void FUN_02085034(int param_1)

{
  short sVar1;
  byte bVar2;
  uint uVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  uVar3 = (uint)*(byte *)(iVar6 + 0x15);
  psVar4 = *(short **)(iVar6 + 0xc);
  iVar5 = *(int *)(iVar6 + 0x10);
  sVar1 = psVar4[uVar3 * 4 + 5];
  *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + (int)psVar4[uVar3 * 4 + 4];
  *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + (int)sVar1;
  if ((char)psVar4[3] == '\x01') {
    return;
  }
  *(short *)(iVar6 + 0x16) = *(short *)(iVar6 + 0x16) + 1;
  if (*(ushort *)(iVar6 + 0x16) <= (ushort)psVar4[uVar3 * 4 + 6]) {
    return;
  }
  *(undefined2 *)(iVar6 + 0x16) = 0;
  bVar2 = *(char *)(iVar6 + 0x15) + 1;
  *(byte *)(iVar6 + 0x15) = bVar2;
  if (bVar2 < *(byte *)(psVar4 + 3)) {
    return;
  }
  *(undefined1 *)(iVar6 + 0x15) = 0;
  *(int *)(iVar5 + 4) = (int)*psVar4 << 0xc;
  *(uint *)(iVar5 + 8) = ((int)psVar4[1] + (uint)(ushort)psVar4[2] * 8) * 0x1000;
  return;
}

