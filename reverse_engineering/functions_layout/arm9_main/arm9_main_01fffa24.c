
void FUN_01fffa24(ushort *param_1,int param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  ushort uVar5;
  ushort *puVar6;
  int *piVar7;
  int *piVar8;
  uint unaff_r5;
  int iVar9;
  uint uVar10;
  uint uVar11;
  
  *(byte *)(param_2 + 0x70) = (byte)unaff_r5 & 0x3f;
  uVar5 = *param_1;
  iVar3 = (int)*(short *)(param_2 + 0x14c0 + (unaff_r5 >> 6 & 7) * 2) * *(int *)(param_2 + 0x68) >>
          0xd;
  *(int *)(param_2 + 0x68) = iVar3;
  *(byte *)(param_2 + 0x71) = (byte)(uVar5 >> 6) & 0x3f;
  *(byte *)(param_2 + 0x72) = (byte)uVar5 & 0x3f;
  uVar11 = uVar5 >> 0xc & 3;
  *(char *)(param_2 + 0x73) = (char)uVar11;
  if ((uVar5 >> 0xc & 3) == 0) {
    piVar7 = (int *)(param_4 + 0x200 + (uint)(uVar5 >> 0xe) * 4);
    iVar2 = iVar3 * 2;
    iVar3 = iVar3 * -7;
    iVar9 = 8;
    puVar6 = param_1 + 1;
    uVar11 = 0;
    do {
      uVar10 = uVar11;
      uVar5 = *puVar6;
      uVar11 = 0xd;
      do {
        piVar8 = piVar7;
        piVar7 = piVar8 + 3;
        *piVar8 = *piVar8 + iVar2 * (uVar5 >> (uVar11 & 0xff) & 7) + iVar3;
        bVar1 = 2 < (int)uVar11;
        uVar11 = uVar11 - 3;
      } while (bVar1);
      iVar9 = iVar9 + -1;
      puVar6 = puVar6 + 1;
      uVar11 = uVar5 & 1 | uVar10 << 1;
    } while (iVar9 != 0);
    *piVar7 = *piVar7 + iVar2 * ((uVar10 & 0x7fffffff) >> 4 & 7) + iVar3;
    piVar8[6] = piVar8[6] + iVar2 * ((uVar10 & 0x7fffffff) >> 1 & 7) + iVar3;
    return;
  }
  iVar2 = uVar11 * 2;
  uVar11 = (uint)(byte)(&DAT_01fffa16)[iVar2];
  bVar4 = (&DAT_01fffa17)[iVar2];
  piVar7 = (int *)(param_4 + 0x200 + (uint)(uVar5 >> 0xe) * 4);
  puVar6 = param_1 + 1;
  do {
    uVar5 = *puVar6;
    piVar8 = piVar7;
    uVar10 = 0xe;
    do {
      piVar7 = (int *)((int)piVar8 + (uint)bVar4);
      *piVar8 = *piVar8 + iVar3 * 2 * (uVar5 >> (uVar10 & 0xff) & 3) + iVar3 * -3;
      bVar1 = 1 < (int)uVar10;
      piVar8 = piVar7;
      uVar10 = uVar10 - 2;
    } while (bVar1);
    uVar11 = uVar11 - 1;
    puVar6 = puVar6 + 1;
  } while (uVar11 != 0);
  return;
}

