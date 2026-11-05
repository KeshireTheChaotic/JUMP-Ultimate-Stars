
void FUN_01ffc8b0(int *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  uint unaff_r4;
  uint *puVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  int unaff_r5;
  uint *puVar8;
  int unaff_r6;
  uint unaff_r11;
  uint uVar9;
  uint in_r12;
  int iVar10;
  
  uVar9 = unaff_r11 + in_r12 * 0x100;
  iVar10 = (unaff_r11 & 0xfffffffe) + (in_r12 & 0xfffffffe) * 0x80;
  *(uint *)param_1[4] = uVar9;
  switch(uVar9 & 3) {
  case 0:
    puVar4 = (undefined4 *)(unaff_r5 + uVar9 + *param_1);
    puVar7 = (undefined4 *)(param_1[-2] + *param_1);
    uVar9 = unaff_r4;
    break;
  case 1:
    puVar3 = (uint *)(unaff_r5 + uVar9 + -1 + *param_1);
    puVar8 = (uint *)(param_1[-2] + *param_1);
    uVar9 = unaff_r4;
    do {
      uVar9 = uVar9 - 1;
      *puVar8 = *puVar3 >> 8 | (uint)(byte)puVar3[1] << 0x18;
      puVar3 = puVar3 + 0x40;
      puVar8 = puVar8 + 0x40;
    } while (uVar9 != 0);
    uVar9 = unaff_r4 >> 1;
    puVar4 = (undefined4 *)(unaff_r6 + iVar10 + param_1[1]);
    puVar7 = (undefined4 *)(param_1[-1] + param_1[1]);
    do {
      uVar9 = uVar9 - 1;
      *puVar7 = *puVar4;
      puVar4 = puVar4 + 0x40;
      puVar7 = puVar7 + 0x40;
    } while (uVar9 != 0);
    return;
  case 2:
    puVar7 = (undefined4 *)(unaff_r5 + uVar9 + *param_1);
    puVar4 = (undefined4 *)(param_1[-2] + *param_1);
    uVar9 = unaff_r4;
    do {
      uVar2 = *puVar7;
      puVar7 = puVar7 + 0x40;
      uVar9 = uVar9 - 1;
      *puVar4 = uVar2;
      puVar4 = puVar4 + 0x40;
    } while (uVar9 != 0);
    puVar7 = (undefined4 *)(unaff_r6 + iVar10 + param_1[1]);
    uVar9 = unaff_r4 >> 1;
    puVar4 = (undefined4 *)(param_1[-1] + param_1[1]);
    do {
      uVar2 = *puVar7;
      puVar7 = puVar7 + 0x40;
      uVar9 = uVar9 - 1;
      *puVar4 = uVar2;
      puVar4 = puVar4 + 0x40;
    } while (uVar9 != 0);
    return;
  case 3:
    pbVar5 = (byte *)(unaff_r5 + uVar9 + *param_1);
    puVar3 = (uint *)(param_1[-2] + *param_1);
    uVar9 = unaff_r4;
    do {
      pbVar6 = pbVar5 + 1;
      bVar1 = *pbVar5;
      pbVar5 = pbVar5 + 0x100;
      uVar9 = uVar9 - 1;
      *puVar3 = (uint)bVar1 | *(int *)pbVar6 << 8;
      puVar3 = puVar3 + 0x40;
    } while (uVar9 != 0);
    puVar7 = (undefined4 *)(unaff_r6 + iVar10 + param_1[1]);
    uVar9 = unaff_r4 >> 1;
    puVar4 = (undefined4 *)(param_1[-1] + param_1[1]);
    do {
      uVar2 = *puVar7;
      puVar7 = puVar7 + 0x40;
      uVar9 = uVar9 - 1;
      *puVar4 = uVar2;
      puVar4 = puVar4 + 0x40;
    } while (uVar9 != 0);
    return;
  }
  do {
    uVar9 = uVar9 - 1;
    *puVar7 = *puVar4;
    puVar4 = puVar4 + 0x40;
    puVar7 = puVar7 + 0x40;
  } while (uVar9 != 0);
  uVar9 = unaff_r4 >> 1;
  puVar4 = (undefined4 *)(unaff_r6 + iVar10 + param_1[1]);
  puVar7 = (undefined4 *)(param_1[-1] + param_1[1]);
  do {
    uVar9 = uVar9 - 1;
    *puVar7 = *puVar4;
    puVar4 = puVar4 + 0x40;
    puVar7 = puVar7 + 0x40;
  } while (uVar9 != 0);
  return;
}

