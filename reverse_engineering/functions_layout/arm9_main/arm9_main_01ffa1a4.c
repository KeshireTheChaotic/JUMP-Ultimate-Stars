
void FUN_01ffa1a4(void)

{
  ushort uVar1;
  int *piVar2;
  uint unaff_r4;
  undefined4 *puVar3;
  byte *pbVar4;
  ushort *puVar5;
  int unaff_r5;
  uint *puVar6;
  undefined4 *puVar7;
  uint *puVar8;
  int unaff_r6;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  uint uVar16;
  int iVar17;
  int unaff_r11;
  uint uVar18;
  int in_r12;
  int iVar19;
  
  FUN_01ff9450();
  piVar2 = (int *)FUN_01ff9450();
  uVar18 = unaff_r11 + unaff_r6 + (in_r12 + unaff_r6) * 0x100;
  iVar19 = (unaff_r11 + unaff_r6 & 0xfffffffeU) + (in_r12 + unaff_r6 & 0xfffffffeU) * 0x80;
  *(uint *)piVar2[4] = uVar18;
  switch(uVar18 & 3) {
  case 0:
    puVar3 = (undefined4 *)(unaff_r5 + uVar18 + *piVar2);
    puVar7 = (undefined4 *)(piVar2[-2] + *piVar2);
    uVar18 = unaff_r4;
    break;
  case 1:
    puVar8 = (uint *)(unaff_r5 + uVar18 + -1 + *piVar2);
    puVar6 = (uint *)(piVar2[-2] + *piVar2);
    uVar18 = unaff_r4;
    do {
      uVar13 = puVar8[1];
      uVar16 = puVar8[2];
      uVar14 = puVar8[3];
      uVar11 = puVar8[4];
      *puVar6 = *puVar8 >> 8 | uVar13 << 0x18;
      puVar6[1] = uVar13 >> 8 | uVar16 << 0x18;
      puVar6[2] = uVar16 >> 8 | uVar14 << 0x18;
      puVar6[3] = uVar14 >> 8 | (uint)(byte)uVar11 << 0x18;
      puVar8 = puVar8 + 0x40;
      puVar6 = puVar6 + 0x40;
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
    puVar3 = (undefined4 *)(unaff_r6 + iVar19 + piVar2[1]);
    puVar7 = (undefined4 *)(piVar2[-1] + piVar2[1]);
    uVar18 = unaff_r4 >> 1;
    do {
      uVar9 = *puVar3;
      uVar10 = puVar3[1];
      uVar12 = puVar3[2];
      uVar15 = puVar3[3];
      puVar3 = puVar3 + 0x40;
      uVar18 = uVar18 - 1;
      *puVar7 = uVar9;
      puVar7[1] = uVar10;
      puVar7[2] = uVar12;
      puVar7[3] = uVar15;
      puVar7 = puVar7 + 0x40;
    } while (uVar18 != 0);
    return;
  case 2:
    puVar5 = (ushort *)(unaff_r5 + uVar18 + *piVar2);
    puVar8 = (uint *)(piVar2[-2] + *piVar2);
    uVar18 = unaff_r4;
    do {
      uVar11 = *(uint *)(puVar5 + 1);
      uVar13 = *(uint *)(puVar5 + 3);
      uVar16 = *(uint *)(puVar5 + 5);
      uVar1 = puVar5[7];
      *puVar8 = (uint)*puVar5 | uVar11 << 0x10;
      puVar8[1] = uVar11 >> 0x10 | uVar13 << 0x10;
      puVar8[2] = uVar13 >> 0x10 | uVar16 << 0x10;
      puVar8[3] = uVar16 >> 0x10 | (uint)uVar1 << 0x10;
      puVar5 = puVar5 + 0x80;
      puVar8 = puVar8 + 0x40;
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
    puVar5 = (ushort *)(unaff_r6 + iVar19 + piVar2[1]);
    puVar8 = (uint *)(piVar2[-1] + piVar2[1]);
    uVar18 = unaff_r4 >> 1;
    do {
      uVar11 = *(uint *)(puVar5 + 1);
      uVar13 = *(uint *)(puVar5 + 3);
      uVar16 = *(uint *)(puVar5 + 5);
      uVar1 = puVar5[7];
      *puVar8 = (uint)*puVar5 | uVar11 << 0x10;
      puVar8[1] = uVar11 >> 0x10 | uVar13 << 0x10;
      puVar8[2] = uVar13 >> 0x10 | uVar16 << 0x10;
      puVar8[3] = uVar16 >> 0x10 | (uint)uVar1 << 0x10;
      puVar5 = puVar5 + 0x80;
      puVar8 = puVar8 + 0x40;
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
    return;
  case 3:
    pbVar4 = (byte *)(unaff_r5 + uVar18 + *piVar2);
    puVar8 = (uint *)(piVar2[-2] + *piVar2);
    uVar18 = unaff_r4;
    do {
      uVar11 = *(uint *)(pbVar4 + 1);
      uVar13 = *(uint *)(pbVar4 + 5);
      uVar16 = *(uint *)(pbVar4 + 9);
      iVar17 = *(int *)(pbVar4 + 0xd);
      *puVar8 = (uint)*pbVar4 | uVar11 << 8;
      puVar8[1] = uVar11 >> 0x18 | uVar13 << 8;
      puVar8[2] = uVar13 >> 0x18 | uVar16 << 8;
      puVar8[3] = uVar16 >> 0x18 | iVar17 << 8;
      pbVar4 = pbVar4 + 0x100;
      puVar8 = puVar8 + 0x40;
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
    puVar5 = (ushort *)(unaff_r6 + iVar19 + piVar2[1]);
    puVar8 = (uint *)(piVar2[-1] + piVar2[1]);
    uVar18 = unaff_r4 >> 1;
    do {
      uVar11 = *(uint *)(puVar5 + 1);
      uVar13 = *(uint *)(puVar5 + 3);
      uVar16 = *(uint *)(puVar5 + 5);
      uVar1 = puVar5[7];
      *puVar8 = (uint)*puVar5 | uVar11 << 0x10;
      puVar8[1] = uVar11 >> 0x10 | uVar13 << 0x10;
      puVar8[2] = uVar13 >> 0x10 | uVar16 << 0x10;
      puVar8[3] = uVar16 >> 0x10 | (uint)uVar1 << 0x10;
      puVar5 = puVar5 + 0x80;
      puVar8 = puVar8 + 0x40;
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
    return;
  }
  do {
    uVar9 = *puVar3;
    uVar10 = puVar3[1];
    uVar12 = puVar3[2];
    uVar15 = puVar3[3];
    puVar3 = puVar3 + 0x40;
    uVar18 = uVar18 - 1;
    *puVar7 = uVar9;
    puVar7[1] = uVar10;
    puVar7[2] = uVar12;
    puVar7[3] = uVar15;
    puVar7 = puVar7 + 0x40;
  } while (uVar18 != 0);
  puVar3 = (undefined4 *)(unaff_r6 + iVar19 + piVar2[1]);
  puVar7 = (undefined4 *)(piVar2[-1] + piVar2[1]);
  uVar18 = unaff_r4 >> 1;
  do {
    uVar9 = *puVar3;
    uVar10 = puVar3[1];
    uVar12 = puVar3[2];
    uVar15 = puVar3[3];
    puVar3 = puVar3 + 0x40;
    uVar18 = uVar18 - 1;
    *puVar7 = uVar9;
    puVar7[1] = uVar10;
    puVar7[2] = uVar12;
    puVar7[3] = uVar15;
    puVar7 = puVar7 + 0x40;
  } while (uVar18 != 0);
  return;
}

