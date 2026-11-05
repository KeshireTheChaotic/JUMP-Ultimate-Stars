
void FUN_01ffa178(int *param_1)

{
  ushort uVar1;
  uint unaff_r4;
  undefined4 *puVar2;
  byte *pbVar3;
  ushort *puVar4;
  int unaff_r5;
  uint *puVar5;
  undefined4 *puVar6;
  uint *puVar7;
  int unaff_r6;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  int iVar16;
  uint unaff_r11;
  uint uVar17;
  uint in_r12;
  int iVar18;
  
  uVar17 = unaff_r11 + in_r12 * 0x100;
  iVar18 = (unaff_r11 & 0xfffffffe) + (in_r12 & 0xfffffffe) * 0x80;
  *(uint *)param_1[4] = uVar17;
  switch(uVar17 & 3) {
  case 0:
    puVar2 = (undefined4 *)(unaff_r5 + uVar17 + *param_1);
    puVar6 = (undefined4 *)(param_1[-2] + *param_1);
    uVar17 = unaff_r4;
    break;
  case 1:
    puVar7 = (uint *)(unaff_r5 + uVar17 + -1 + *param_1);
    puVar5 = (uint *)(param_1[-2] + *param_1);
    uVar17 = unaff_r4;
    do {
      uVar12 = puVar7[1];
      uVar15 = puVar7[2];
      uVar13 = puVar7[3];
      uVar10 = puVar7[4];
      *puVar5 = *puVar7 >> 8 | uVar12 << 0x18;
      puVar5[1] = uVar12 >> 8 | uVar15 << 0x18;
      puVar5[2] = uVar15 >> 8 | uVar13 << 0x18;
      puVar5[3] = uVar13 >> 8 | (uint)(byte)uVar10 << 0x18;
      puVar7 = puVar7 + 0x40;
      puVar5 = puVar5 + 0x40;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
    puVar2 = (undefined4 *)(unaff_r6 + iVar18 + param_1[1]);
    puVar6 = (undefined4 *)(param_1[-1] + param_1[1]);
    uVar17 = unaff_r4 >> 1;
    do {
      uVar8 = *puVar2;
      uVar9 = puVar2[1];
      uVar11 = puVar2[2];
      uVar14 = puVar2[3];
      puVar2 = puVar2 + 0x40;
      uVar17 = uVar17 - 1;
      *puVar6 = uVar8;
      puVar6[1] = uVar9;
      puVar6[2] = uVar11;
      puVar6[3] = uVar14;
      puVar6 = puVar6 + 0x40;
    } while (uVar17 != 0);
    return;
  case 2:
    puVar4 = (ushort *)(unaff_r5 + uVar17 + *param_1);
    puVar7 = (uint *)(param_1[-2] + *param_1);
    uVar17 = unaff_r4;
    do {
      uVar10 = *(uint *)(puVar4 + 1);
      uVar12 = *(uint *)(puVar4 + 3);
      uVar15 = *(uint *)(puVar4 + 5);
      uVar1 = puVar4[7];
      *puVar7 = (uint)*puVar4 | uVar10 << 0x10;
      puVar7[1] = uVar10 >> 0x10 | uVar12 << 0x10;
      puVar7[2] = uVar12 >> 0x10 | uVar15 << 0x10;
      puVar7[3] = uVar15 >> 0x10 | (uint)uVar1 << 0x10;
      puVar4 = puVar4 + 0x80;
      puVar7 = puVar7 + 0x40;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
    puVar4 = (ushort *)(unaff_r6 + iVar18 + param_1[1]);
    puVar7 = (uint *)(param_1[-1] + param_1[1]);
    uVar17 = unaff_r4 >> 1;
    do {
      uVar10 = *(uint *)(puVar4 + 1);
      uVar12 = *(uint *)(puVar4 + 3);
      uVar15 = *(uint *)(puVar4 + 5);
      uVar1 = puVar4[7];
      *puVar7 = (uint)*puVar4 | uVar10 << 0x10;
      puVar7[1] = uVar10 >> 0x10 | uVar12 << 0x10;
      puVar7[2] = uVar12 >> 0x10 | uVar15 << 0x10;
      puVar7[3] = uVar15 >> 0x10 | (uint)uVar1 << 0x10;
      puVar4 = puVar4 + 0x80;
      puVar7 = puVar7 + 0x40;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
    return;
  case 3:
    pbVar3 = (byte *)(unaff_r5 + uVar17 + *param_1);
    puVar7 = (uint *)(param_1[-2] + *param_1);
    uVar17 = unaff_r4;
    do {
      uVar10 = *(uint *)(pbVar3 + 1);
      uVar12 = *(uint *)(pbVar3 + 5);
      uVar15 = *(uint *)(pbVar3 + 9);
      iVar16 = *(int *)(pbVar3 + 0xd);
      *puVar7 = (uint)*pbVar3 | uVar10 << 8;
      puVar7[1] = uVar10 >> 0x18 | uVar12 << 8;
      puVar7[2] = uVar12 >> 0x18 | uVar15 << 8;
      puVar7[3] = uVar15 >> 0x18 | iVar16 << 8;
      pbVar3 = pbVar3 + 0x100;
      puVar7 = puVar7 + 0x40;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
    puVar4 = (ushort *)(unaff_r6 + iVar18 + param_1[1]);
    puVar7 = (uint *)(param_1[-1] + param_1[1]);
    uVar17 = unaff_r4 >> 1;
    do {
      uVar10 = *(uint *)(puVar4 + 1);
      uVar12 = *(uint *)(puVar4 + 3);
      uVar15 = *(uint *)(puVar4 + 5);
      uVar1 = puVar4[7];
      *puVar7 = (uint)*puVar4 | uVar10 << 0x10;
      puVar7[1] = uVar10 >> 0x10 | uVar12 << 0x10;
      puVar7[2] = uVar12 >> 0x10 | uVar15 << 0x10;
      puVar7[3] = uVar15 >> 0x10 | (uint)uVar1 << 0x10;
      puVar4 = puVar4 + 0x80;
      puVar7 = puVar7 + 0x40;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
    return;
  }
  do {
    uVar8 = *puVar2;
    uVar9 = puVar2[1];
    uVar11 = puVar2[2];
    uVar14 = puVar2[3];
    puVar2 = puVar2 + 0x40;
    uVar17 = uVar17 - 1;
    *puVar6 = uVar8;
    puVar6[1] = uVar9;
    puVar6[2] = uVar11;
    puVar6[3] = uVar14;
    puVar6 = puVar6 + 0x40;
  } while (uVar17 != 0);
  puVar2 = (undefined4 *)(unaff_r6 + iVar18 + param_1[1]);
  puVar6 = (undefined4 *)(param_1[-1] + param_1[1]);
  uVar17 = unaff_r4 >> 1;
  do {
    uVar8 = *puVar2;
    uVar9 = puVar2[1];
    uVar11 = puVar2[2];
    uVar14 = puVar2[3];
    puVar2 = puVar2 + 0x40;
    uVar17 = uVar17 - 1;
    *puVar6 = uVar8;
    puVar6[1] = uVar9;
    puVar6[2] = uVar11;
    puVar6[3] = uVar14;
    puVar6 = puVar6 + 0x40;
  } while (uVar17 != 0);
  return;
}

