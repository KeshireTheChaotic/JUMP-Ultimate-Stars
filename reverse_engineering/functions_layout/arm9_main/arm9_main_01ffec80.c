
void FUN_01ffec80(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int *piVar19;
  int *piVar20;
  
  iVar4 = iRam01fff1dc;
  iVar16 = param_1[4];
  iVar2 = (param_1[3] - iVar16) * 2;
  pbVar7 = (byte *)param_1[1];
  piVar9 = (int *)param_1[2];
  pbVar5 = (byte *)*param_1;
  piVar19 = (int *)((int)piVar9 + param_1[3]);
  iVar17 = param_1[5];
  do {
    iVar18 = iVar16;
    do {
      uVar11 = (uint)*pbVar5;
      iVar15 = iVar4 - ((pbVar7[1] - 0x80) + ((int)(*pbVar7 - 0x80) >> 1));
      iVar13 = iVar4 + (pbVar7[1] - 0x80) * 2;
      iVar14 = iVar4 + (*pbVar7 - 0x80) * 2 + 0x300;
      iVar12 = pbVar5[1] - 4;
      bVar3 = pbVar5[0x100];
      *piVar9 = (uint)*(byte *)(iVar13 + uVar11) + (uint)*(byte *)(iVar15 + uVar11) * 0x20 +
                (uint)*(byte *)(iVar14 + uVar11) * 0x400 +
                (uint)*(byte *)(iVar15 + iVar12) * 0x200000 +
                (uint)*(byte *)(iVar13 + iVar12) * 0x10000 +
                (uint)*(byte *)(iVar14 + iVar12) * 0x4000000;
      iVar12 = bVar3 - 4;
      uVar11 = (uint)pbVar5[0x101];
      *piVar19 = (uint)*(byte *)(iVar13 + iVar12) + (uint)*(byte *)(iVar15 + iVar12) * 0x20 +
                 (uint)*(byte *)(iVar14 + iVar12) * 0x400 +
                 (uint)*(byte *)(iVar15 + uVar11) * 0x200000 +
                 (uint)*(byte *)(iVar13 + uVar11) * 0x10000 +
                 (uint)*(byte *)(iVar14 + uVar11) * 0x4000000;
      uVar11 = (uint)pbVar5[2];
      iVar15 = iVar4 - ((pbVar7[3] - 0x80) + ((int)(pbVar7[2] - 0x80) >> 1));
      iVar13 = iVar4 + (pbVar7[3] - 0x80) * 2;
      iVar14 = iVar4 + (pbVar7[2] - 0x80) * 2 + 0x300;
      iVar12 = pbVar5[3] - 4;
      bVar3 = pbVar5[0x102];
      piVar9[1] = (uint)*(byte *)(iVar13 + uVar11) + (uint)*(byte *)(iVar15 + uVar11) * 0x20 +
                  (uint)*(byte *)(iVar14 + uVar11) * 0x400 +
                  (uint)*(byte *)(iVar15 + iVar12) * 0x200000 +
                  (uint)*(byte *)(iVar13 + iVar12) * 0x10000 +
                  (uint)*(byte *)(iVar14 + iVar12) * 0x4000000;
      iVar12 = bVar3 - 4;
      uVar11 = (uint)pbVar5[0x103];
      piVar19[1] = (uint)*(byte *)(iVar13 + iVar12) + (uint)*(byte *)(iVar15 + iVar12) * 0x20 +
                   (uint)*(byte *)(iVar14 + iVar12) * 0x400 +
                   (uint)*(byte *)(iVar15 + uVar11) * 0x200000 +
                   (uint)*(byte *)(iVar13 + uVar11) * 0x10000 +
                   (uint)*(byte *)(iVar14 + uVar11) * 0x4000000;
      uVar11 = (uint)pbVar5[4];
      iVar15 = iVar4 - ((pbVar7[5] - 0x80) + ((int)(pbVar7[4] - 0x80) >> 1));
      iVar13 = iVar4 + (pbVar7[5] - 0x80) * 2;
      iVar14 = iVar4 + (pbVar7[4] - 0x80) * 2 + 0x300;
      iVar12 = pbVar5[5] - 4;
      bVar3 = pbVar5[0x104];
      piVar9[2] = (uint)*(byte *)(iVar13 + uVar11) + (uint)*(byte *)(iVar15 + uVar11) * 0x20 +
                  (uint)*(byte *)(iVar14 + uVar11) * 0x400 +
                  (uint)*(byte *)(iVar15 + iVar12) * 0x200000 +
                  (uint)*(byte *)(iVar13 + iVar12) * 0x10000 +
                  (uint)*(byte *)(iVar14 + iVar12) * 0x4000000;
      iVar12 = bVar3 - 4;
      uVar11 = (uint)pbVar5[0x105];
      piVar19[2] = (uint)*(byte *)(iVar13 + iVar12) + (uint)*(byte *)(iVar15 + iVar12) * 0x20 +
                   (uint)*(byte *)(iVar14 + iVar12) * 0x400 +
                   (uint)*(byte *)(iVar15 + uVar11) * 0x200000 +
                   (uint)*(byte *)(iVar13 + uVar11) * 0x10000 +
                   (uint)*(byte *)(iVar14 + uVar11) * 0x4000000;
      uVar11 = (uint)pbVar5[6];
      iVar15 = iVar4 - ((pbVar7[7] - 0x80) + ((int)(pbVar7[6] - 0x80) >> 1));
      iVar13 = iVar4 + (pbVar7[7] - 0x80) * 2;
      iVar14 = iVar4 + (pbVar7[6] - 0x80) * 2 + 0x300;
      iVar12 = pbVar5[7] - 4;
      bVar3 = pbVar5[0x106];
      piVar9[3] = (uint)*(byte *)(iVar13 + uVar11) + (uint)*(byte *)(iVar15 + uVar11) * 0x20 +
                  (uint)*(byte *)(iVar14 + uVar11) * 0x400 +
                  (uint)*(byte *)(iVar15 + iVar12) * 0x200000 +
                  (uint)*(byte *)(iVar13 + iVar12) * 0x10000 +
                  (uint)*(byte *)(iVar14 + iVar12) * 0x4000000;
      iVar12 = bVar3 - 4;
      uVar11 = (uint)pbVar5[0x107];
      piVar19[3] = (uint)*(byte *)(iVar13 + iVar12) + (uint)*(byte *)(iVar15 + iVar12) * 0x20 +
                   (uint)*(byte *)(iVar14 + iVar12) * 0x400 +
                   (uint)*(byte *)(iVar15 + uVar11) * 0x200000 +
                   (uint)*(byte *)(iVar13 + uVar11) * 0x10000 +
                   (uint)*(byte *)(iVar14 + uVar11) * 0x4000000;
      uVar11 = (uint)pbVar5[8];
      iVar15 = iVar4 - ((pbVar7[9] - 0x80) + ((int)(pbVar7[8] - 0x80) >> 1));
      iVar13 = iVar4 + (pbVar7[9] - 0x80) * 2;
      iVar14 = iVar4 + (pbVar7[8] - 0x80) * 2 + 0x300;
      iVar12 = pbVar5[9] - 4;
      bVar3 = pbVar5[0x108];
      piVar9[4] = (uint)*(byte *)(iVar13 + uVar11) + (uint)*(byte *)(iVar15 + uVar11) * 0x20 +
                  (uint)*(byte *)(iVar14 + uVar11) * 0x400 +
                  (uint)*(byte *)(iVar15 + iVar12) * 0x200000 +
                  (uint)*(byte *)(iVar13 + iVar12) * 0x10000 +
                  (uint)*(byte *)(iVar14 + iVar12) * 0x4000000;
      iVar12 = bVar3 - 4;
      uVar11 = (uint)pbVar5[0x109];
      piVar19[4] = (uint)*(byte *)(iVar13 + iVar12) + (uint)*(byte *)(iVar15 + iVar12) * 0x20 +
                   (uint)*(byte *)(iVar14 + iVar12) * 0x400 +
                   (uint)*(byte *)(iVar15 + uVar11) * 0x200000 +
                   (uint)*(byte *)(iVar13 + uVar11) * 0x10000 +
                   (uint)*(byte *)(iVar14 + uVar11) * 0x4000000;
      uVar11 = (uint)pbVar5[10];
      iVar15 = iVar4 - ((pbVar7[0xb] - 0x80) + ((int)(pbVar7[10] - 0x80) >> 1));
      iVar13 = iVar4 + (pbVar7[0xb] - 0x80) * 2;
      iVar14 = iVar4 + (pbVar7[10] - 0x80) * 2 + 0x300;
      iVar12 = pbVar5[0xb] - 4;
      bVar3 = pbVar5[0x10a];
      piVar9[5] = (uint)*(byte *)(iVar13 + uVar11) + (uint)*(byte *)(iVar15 + uVar11) * 0x20 +
                  (uint)*(byte *)(iVar14 + uVar11) * 0x400 +
                  (uint)*(byte *)(iVar15 + iVar12) * 0x200000 +
                  (uint)*(byte *)(iVar13 + iVar12) * 0x10000 +
                  (uint)*(byte *)(iVar14 + iVar12) * 0x4000000;
      iVar12 = bVar3 - 4;
      uVar11 = (uint)pbVar5[0x10b];
      piVar19[5] = (uint)*(byte *)(iVar13 + iVar12) + (uint)*(byte *)(iVar15 + iVar12) * 0x20 +
                   (uint)*(byte *)(iVar14 + iVar12) * 0x400 +
                   (uint)*(byte *)(iVar15 + uVar11) * 0x200000 +
                   (uint)*(byte *)(iVar13 + uVar11) * 0x10000 +
                   (uint)*(byte *)(iVar14 + uVar11) * 0x4000000;
      pbVar8 = pbVar7 + 0xe;
      uVar11 = (uint)pbVar5[0xc];
      iVar15 = iVar4 - ((pbVar7[0xd] - 0x80) + ((int)(pbVar7[0xc] - 0x80) >> 1));
      iVar13 = iVar4 + (pbVar7[0xd] - 0x80) * 2;
      iVar14 = iVar4 + (pbVar7[0xc] - 0x80) * 2 + 0x300;
      iVar12 = pbVar5[0xd] - 4;
      bVar3 = pbVar5[0x10c];
      piVar10 = piVar9 + 7;
      piVar9[6] = (uint)*(byte *)(iVar13 + uVar11) + (uint)*(byte *)(iVar15 + uVar11) * 0x20 +
                  (uint)*(byte *)(iVar14 + uVar11) * 0x400 +
                  (uint)*(byte *)(iVar15 + iVar12) * 0x200000 +
                  (uint)*(byte *)(iVar13 + iVar12) * 0x10000 +
                  (uint)*(byte *)(iVar14 + iVar12) * 0x4000000;
      iVar12 = bVar3 - 4;
      uVar11 = (uint)pbVar5[0x10d];
      piVar20 = piVar19 + 7;
      piVar19[6] = (uint)*(byte *)(iVar13 + iVar12) + (uint)*(byte *)(iVar15 + iVar12) * 0x20 +
                   (uint)*(byte *)(iVar14 + iVar12) * 0x400 +
                   (uint)*(byte *)(iVar15 + uVar11) * 0x200000 +
                   (uint)*(byte *)(iVar13 + uVar11) * 0x10000 +
                   (uint)*(byte *)(iVar14 + uVar11) * 0x4000000;
      pbVar6 = pbVar7 + 0xf;
      pbVar7 = pbVar7 + 0x10;
      uVar11 = (uint)pbVar5[0xe];
      iVar15 = iVar4 - ((*pbVar6 - 0x80) + ((int)(*pbVar8 - 0x80) >> 1));
      iVar13 = iVar4 + (*pbVar6 - 0x80) * 2;
      iVar14 = iVar4 + (*pbVar8 - 0x80) * 2 + 0x300;
      iVar12 = pbVar5[0xf] - 4;
      pbVar6 = pbVar5 + 0x10f;
      bVar3 = pbVar5[0x10e];
      piVar9 = piVar9 + 8;
      *piVar10 = (uint)*(byte *)(iVar13 + uVar11) + (uint)*(byte *)(iVar15 + uVar11) * 0x20 +
                 (uint)*(byte *)(iVar14 + uVar11) * 0x400 +
                 (uint)*(byte *)(iVar15 + iVar12) * 0x200000 +
                 (uint)*(byte *)(iVar13 + iVar12) * 0x10000 +
                 (uint)*(byte *)(iVar14 + iVar12) * 0x4000000;
      iVar12 = bVar3 - 4;
      pbVar5 = pbVar5 + 0x10;
      uVar11 = (uint)*pbVar6;
      piVar19 = piVar19 + 8;
      *piVar20 = (uint)*(byte *)(iVar13 + iVar12) + (uint)*(byte *)(iVar15 + iVar12) * 0x20 +
                 (uint)*(byte *)(iVar14 + iVar12) * 0x400 +
                 (uint)*(byte *)(iVar15 + uVar11) * 0x200000 +
                 (uint)*(byte *)(iVar13 + uVar11) * 0x10000 +
                 (uint)*(byte *)(iVar14 + uVar11) * 0x4000000;
      iVar12 = iVar18 + -0x10;
      bVar1 = 0xf < iVar18;
      iVar18 = iVar12;
    } while (iVar12 != 0 && bVar1);
    pbVar5 = pbVar5 + (0x200 - iVar16);
    pbVar7 = pbVar7 + (0x100 - iVar16);
    piVar9 = (int *)((int)piVar9 + iVar2);
    piVar19 = (int *)((int)piVar19 + iVar2);
    iVar18 = iVar17 + -2;
    bVar1 = 1 < iVar17;
    iVar17 = iVar18;
  } while (iVar18 != 0 && bVar1);
  return;
}

