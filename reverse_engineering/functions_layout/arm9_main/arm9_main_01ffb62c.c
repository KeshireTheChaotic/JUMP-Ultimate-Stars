
void FUN_01ffb62c(int *param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  uint unaff_r4;
  undefined4 *puVar4;
  byte *pbVar5;
  ushort *puVar6;
  int unaff_r5;
  uint *puVar7;
  undefined4 *puVar8;
  uint *puVar9;
  int unaff_r6;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  int iVar15;
  uint unaff_r11;
  uint uVar16;
  uint in_r12;
  int iVar17;
  
  uVar16 = unaff_r11 + in_r12 * 0x100;
  iVar17 = (unaff_r11 & 0xfffffffe) + (in_r12 & 0xfffffffe) * 0x80;
  *(uint *)param_1[4] = uVar16;
  switch(uVar16 & 3) {
  case 0:
    puVar4 = (undefined4 *)(unaff_r5 + uVar16 + *param_1);
    puVar8 = (undefined4 *)(param_1[-2] + *param_1);
    uVar16 = unaff_r4;
    break;
  case 1:
    puVar9 = (uint *)(unaff_r5 + uVar16 + -1 + *param_1);
    puVar7 = (uint *)(param_1[-2] + *param_1);
    uVar16 = unaff_r4;
    do {
      uVar10 = *puVar9;
      uVar12 = puVar9[1];
      uVar14 = puVar9[2];
      puVar9 = puVar9 + 0x40;
      *puVar7 = uVar10 >> 8 | uVar12 << 0x18;
      puVar7[1] = uVar12 >> 8 | (uint)(byte)uVar14 << 0x18;
      puVar7 = puVar7 + 0x40;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
    puVar4 = (undefined4 *)(unaff_r6 + iVar17 + param_1[1]);
    puVar8 = (undefined4 *)(param_1[-1] + param_1[1]);
    uVar16 = unaff_r4 >> 1;
    do {
      uVar11 = *puVar4;
      uVar13 = puVar4[1];
      puVar4 = puVar4 + 0x40;
      uVar16 = uVar16 - 1;
      *puVar8 = uVar11;
      puVar8[1] = uVar13;
      puVar8 = puVar8 + 0x40;
    } while (uVar16 != 0);
    return;
  case 2:
    puVar6 = (ushort *)(unaff_r5 + uVar16 + *param_1);
    puVar9 = (uint *)(param_1[-2] + *param_1);
    uVar16 = unaff_r4;
    do {
      puVar7 = (uint *)(puVar6 + 1);
      uVar2 = *puVar6;
      uVar3 = puVar6[3];
      puVar6 = puVar6 + 0x80;
      uVar14 = *puVar7;
      uVar16 = uVar16 - 1;
      *puVar9 = (uint)uVar2 | uVar14 << 0x10;
      puVar9[1] = uVar14 >> 0x10 | (uint)uVar3 << 0x10;
      puVar9 = puVar9 + 0x40;
    } while (uVar16 != 0);
    puVar6 = (ushort *)(unaff_r6 + iVar17 + param_1[1]);
    puVar9 = (uint *)(param_1[-1] + param_1[1]);
    uVar16 = unaff_r4 >> 1;
    do {
      puVar7 = (uint *)(puVar6 + 1);
      uVar2 = *puVar6;
      uVar3 = puVar6[3];
      puVar6 = puVar6 + 0x80;
      uVar14 = *puVar7;
      uVar16 = uVar16 - 1;
      *puVar9 = (uint)uVar2 | uVar14 << 0x10;
      puVar9[1] = uVar14 >> 0x10 | (uint)uVar3 << 0x10;
      puVar9 = puVar9 + 0x40;
    } while (uVar16 != 0);
    return;
  case 3:
    pbVar5 = (byte *)(unaff_r5 + uVar16 + *param_1);
    puVar9 = (uint *)(param_1[-2] + *param_1);
    uVar16 = unaff_r4;
    do {
      bVar1 = *pbVar5;
      uVar14 = *(uint *)(pbVar5 + 1);
      iVar15 = *(int *)(pbVar5 + 5);
      pbVar5 = pbVar5 + 0x100;
      uVar16 = uVar16 - 1;
      *puVar9 = (uint)bVar1 | uVar14 << 8;
      puVar9[1] = uVar14 >> 0x18 | iVar15 << 8;
      puVar9 = puVar9 + 0x40;
    } while (uVar16 != 0);
    puVar6 = (ushort *)(unaff_r6 + iVar17 + param_1[1]);
    puVar9 = (uint *)(param_1[-1] + param_1[1]);
    uVar16 = unaff_r4 >> 1;
    do {
      puVar7 = (uint *)(puVar6 + 1);
      uVar2 = *puVar6;
      uVar3 = puVar6[3];
      puVar6 = puVar6 + 0x80;
      uVar14 = *puVar7;
      uVar16 = uVar16 - 1;
      *puVar9 = (uint)uVar2 | uVar14 << 0x10;
      puVar9[1] = uVar14 >> 0x10 | (uint)uVar3 << 0x10;
      puVar9 = puVar9 + 0x40;
    } while (uVar16 != 0);
    return;
  }
  do {
    uVar11 = *puVar4;
    uVar13 = puVar4[1];
    puVar4 = puVar4 + 0x40;
    uVar16 = uVar16 - 1;
    *puVar8 = uVar11;
    puVar8[1] = uVar13;
    puVar8 = puVar8 + 0x40;
  } while (uVar16 != 0);
  puVar4 = (undefined4 *)(unaff_r6 + iVar17 + param_1[1]);
  puVar8 = (undefined4 *)(param_1[-1] + param_1[1]);
  uVar16 = unaff_r4 >> 1;
  do {
    uVar11 = *puVar4;
    uVar13 = puVar4[1];
    puVar4 = puVar4 + 0x40;
    uVar16 = uVar16 - 1;
    *puVar8 = uVar11;
    puVar8[1] = uVar13;
    puVar8 = puVar8 + 0x40;
  } while (uVar16 != 0);
  return;
}

