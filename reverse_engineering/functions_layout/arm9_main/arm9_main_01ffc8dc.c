
void FUN_01ffc8dc(void)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  uint unaff_r4;
  uint *puVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  int unaff_r5;
  uint *puVar9;
  int unaff_r6;
  int unaff_r11;
  uint uVar10;
  int in_r12;
  int iVar11;
  
  FUN_01ff9450();
  piVar3 = (int *)FUN_01ff9450();
  uVar10 = unaff_r11 + unaff_r6 + (in_r12 + unaff_r6) * 0x100;
  iVar11 = (unaff_r11 + unaff_r6 & 0xfffffffeU) + (in_r12 + unaff_r6 & 0xfffffffeU) * 0x80;
  *(uint *)piVar3[4] = uVar10;
  switch(uVar10 & 3) {
  case 0:
    puVar5 = (undefined4 *)(unaff_r5 + uVar10 + *piVar3);
    puVar8 = (undefined4 *)(piVar3[-2] + *piVar3);
    uVar10 = unaff_r4;
    break;
  case 1:
    puVar4 = (uint *)(unaff_r5 + uVar10 + -1 + *piVar3);
    puVar9 = (uint *)(piVar3[-2] + *piVar3);
    uVar10 = unaff_r4;
    do {
      uVar10 = uVar10 - 1;
      *puVar9 = *puVar4 >> 8 | (uint)(byte)puVar4[1] << 0x18;
      puVar4 = puVar4 + 0x40;
      puVar9 = puVar9 + 0x40;
    } while (uVar10 != 0);
    uVar10 = unaff_r4 >> 1;
    puVar5 = (undefined4 *)(unaff_r6 + iVar11 + piVar3[1]);
    puVar8 = (undefined4 *)(piVar3[-1] + piVar3[1]);
    do {
      uVar10 = uVar10 - 1;
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 0x40;
      puVar8 = puVar8 + 0x40;
    } while (uVar10 != 0);
    return;
  case 2:
    puVar8 = (undefined4 *)(unaff_r5 + uVar10 + *piVar3);
    puVar5 = (undefined4 *)(piVar3[-2] + *piVar3);
    uVar10 = unaff_r4;
    do {
      uVar2 = *puVar8;
      puVar8 = puVar8 + 0x40;
      uVar10 = uVar10 - 1;
      *puVar5 = uVar2;
      puVar5 = puVar5 + 0x40;
    } while (uVar10 != 0);
    puVar8 = (undefined4 *)(unaff_r6 + iVar11 + piVar3[1]);
    uVar10 = unaff_r4 >> 1;
    puVar5 = (undefined4 *)(piVar3[-1] + piVar3[1]);
    do {
      uVar2 = *puVar8;
      puVar8 = puVar8 + 0x40;
      uVar10 = uVar10 - 1;
      *puVar5 = uVar2;
      puVar5 = puVar5 + 0x40;
    } while (uVar10 != 0);
    return;
  case 3:
    pbVar6 = (byte *)(unaff_r5 + uVar10 + *piVar3);
    puVar4 = (uint *)(piVar3[-2] + *piVar3);
    uVar10 = unaff_r4;
    do {
      pbVar7 = pbVar6 + 1;
      bVar1 = *pbVar6;
      pbVar6 = pbVar6 + 0x100;
      uVar10 = uVar10 - 1;
      *puVar4 = (uint)bVar1 | *(int *)pbVar7 << 8;
      puVar4 = puVar4 + 0x40;
    } while (uVar10 != 0);
    puVar8 = (undefined4 *)(unaff_r6 + iVar11 + piVar3[1]);
    uVar10 = unaff_r4 >> 1;
    puVar5 = (undefined4 *)(piVar3[-1] + piVar3[1]);
    do {
      uVar2 = *puVar8;
      puVar8 = puVar8 + 0x40;
      uVar10 = uVar10 - 1;
      *puVar5 = uVar2;
      puVar5 = puVar5 + 0x40;
    } while (uVar10 != 0);
    return;
  }
  do {
    uVar10 = uVar10 - 1;
    *puVar8 = *puVar5;
    puVar5 = puVar5 + 0x40;
    puVar8 = puVar8 + 0x40;
  } while (uVar10 != 0);
  uVar10 = unaff_r4 >> 1;
  puVar5 = (undefined4 *)(unaff_r6 + iVar11 + piVar3[1]);
  puVar8 = (undefined4 *)(piVar3[-1] + piVar3[1]);
  do {
    uVar10 = uVar10 - 1;
    *puVar8 = *puVar5;
    puVar5 = puVar5 + 0x40;
    puVar8 = puVar8 + 0x40;
  } while (uVar10 != 0);
  return;
}

