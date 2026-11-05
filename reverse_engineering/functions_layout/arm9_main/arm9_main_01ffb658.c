
void FUN_01ffb658(void)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  int *piVar4;
  uint unaff_r4;
  undefined4 *puVar5;
  byte *pbVar6;
  ushort *puVar7;
  int unaff_r5;
  uint *puVar8;
  undefined4 *puVar9;
  uint *puVar10;
  int unaff_r6;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  int iVar16;
  int unaff_r11;
  uint uVar17;
  int in_r12;
  int iVar18;
  
  FUN_01ff9450();
  piVar4 = (int *)FUN_01ff9450();
  uVar17 = unaff_r11 + unaff_r6 + (in_r12 + unaff_r6) * 0x100;
  iVar18 = (unaff_r11 + unaff_r6 & 0xfffffffeU) + (in_r12 + unaff_r6 & 0xfffffffeU) * 0x80;
  *(uint *)piVar4[4] = uVar17;
  switch(uVar17 & 3) {
  case 0:
    puVar5 = (undefined4 *)(unaff_r5 + uVar17 + *piVar4);
    puVar9 = (undefined4 *)(piVar4[-2] + *piVar4);
    uVar17 = unaff_r4;
    break;
  case 1:
    puVar10 = (uint *)(unaff_r5 + uVar17 + -1 + *piVar4);
    puVar8 = (uint *)(piVar4[-2] + *piVar4);
    uVar17 = unaff_r4;
    do {
      uVar11 = *puVar10;
      uVar13 = puVar10[1];
      uVar15 = puVar10[2];
      puVar10 = puVar10 + 0x40;
      *puVar8 = uVar11 >> 8 | uVar13 << 0x18;
      puVar8[1] = uVar13 >> 8 | (uint)(byte)uVar15 << 0x18;
      puVar8 = puVar8 + 0x40;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
    puVar5 = (undefined4 *)(unaff_r6 + iVar18 + piVar4[1]);
    puVar9 = (undefined4 *)(piVar4[-1] + piVar4[1]);
    uVar17 = unaff_r4 >> 1;
    do {
      uVar12 = *puVar5;
      uVar14 = puVar5[1];
      puVar5 = puVar5 + 0x40;
      uVar17 = uVar17 - 1;
      *puVar9 = uVar12;
      puVar9[1] = uVar14;
      puVar9 = puVar9 + 0x40;
    } while (uVar17 != 0);
    return;
  case 2:
    puVar7 = (ushort *)(unaff_r5 + uVar17 + *piVar4);
    puVar10 = (uint *)(piVar4[-2] + *piVar4);
    uVar17 = unaff_r4;
    do {
      puVar8 = (uint *)(puVar7 + 1);
      uVar2 = *puVar7;
      uVar3 = puVar7[3];
      puVar7 = puVar7 + 0x80;
      uVar15 = *puVar8;
      uVar17 = uVar17 - 1;
      *puVar10 = (uint)uVar2 | uVar15 << 0x10;
      puVar10[1] = uVar15 >> 0x10 | (uint)uVar3 << 0x10;
      puVar10 = puVar10 + 0x40;
    } while (uVar17 != 0);
    puVar7 = (ushort *)(unaff_r6 + iVar18 + piVar4[1]);
    puVar10 = (uint *)(piVar4[-1] + piVar4[1]);
    uVar17 = unaff_r4 >> 1;
    do {
      puVar8 = (uint *)(puVar7 + 1);
      uVar2 = *puVar7;
      uVar3 = puVar7[3];
      puVar7 = puVar7 + 0x80;
      uVar15 = *puVar8;
      uVar17 = uVar17 - 1;
      *puVar10 = (uint)uVar2 | uVar15 << 0x10;
      puVar10[1] = uVar15 >> 0x10 | (uint)uVar3 << 0x10;
      puVar10 = puVar10 + 0x40;
    } while (uVar17 != 0);
    return;
  case 3:
    pbVar6 = (byte *)(unaff_r5 + uVar17 + *piVar4);
    puVar10 = (uint *)(piVar4[-2] + *piVar4);
    uVar17 = unaff_r4;
    do {
      bVar1 = *pbVar6;
      uVar15 = *(uint *)(pbVar6 + 1);
      iVar16 = *(int *)(pbVar6 + 5);
      pbVar6 = pbVar6 + 0x100;
      uVar17 = uVar17 - 1;
      *puVar10 = (uint)bVar1 | uVar15 << 8;
      puVar10[1] = uVar15 >> 0x18 | iVar16 << 8;
      puVar10 = puVar10 + 0x40;
    } while (uVar17 != 0);
    puVar7 = (ushort *)(unaff_r6 + iVar18 + piVar4[1]);
    puVar10 = (uint *)(piVar4[-1] + piVar4[1]);
    uVar17 = unaff_r4 >> 1;
    do {
      puVar8 = (uint *)(puVar7 + 1);
      uVar2 = *puVar7;
      uVar3 = puVar7[3];
      puVar7 = puVar7 + 0x80;
      uVar15 = *puVar8;
      uVar17 = uVar17 - 1;
      *puVar10 = (uint)uVar2 | uVar15 << 0x10;
      puVar10[1] = uVar15 >> 0x10 | (uint)uVar3 << 0x10;
      puVar10 = puVar10 + 0x40;
    } while (uVar17 != 0);
    return;
  }
  do {
    uVar12 = *puVar5;
    uVar14 = puVar5[1];
    puVar5 = puVar5 + 0x40;
    uVar17 = uVar17 - 1;
    *puVar9 = uVar12;
    puVar9[1] = uVar14;
    puVar9 = puVar9 + 0x40;
  } while (uVar17 != 0);
  puVar5 = (undefined4 *)(unaff_r6 + iVar18 + piVar4[1]);
  puVar9 = (undefined4 *)(piVar4[-1] + piVar4[1]);
  uVar17 = unaff_r4 >> 1;
  do {
    uVar12 = *puVar5;
    uVar14 = puVar5[1];
    puVar5 = puVar5 + 0x40;
    uVar17 = uVar17 - 1;
    *puVar9 = uVar12;
    puVar9[1] = uVar14;
    puVar9 = puVar9 + 0x40;
  } while (uVar17 != 0);
  return;
}

