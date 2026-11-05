
void FUN_01ff9808(int param_1)

{
  ushort uVar1;
  uint unaff_r4;
  uint unaff_r5;
  uint *puVar2;
  ushort *puVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  
  uVar6 = *(uint *)(param_1 + 4);
  puVar4 = (uint *)(*(int *)(param_1 + -4) + uVar6);
  if (uVar6 == 0) {
    uVar6 = 0x80;
    uVar9 = 0x80;
  }
  else if ((uVar6 & 0xff) == 0) {
    iVar5 = 0;
    iVar10 = 0;
    uVar6 = unaff_r4 >> 1;
    puVar2 = puVar4 + -0x40;
    do {
      uVar6 = uVar6 - 1;
      iVar10 = iVar10 + (uint)(ushort)((ushort)*puVar2 >> 8);
      iVar5 = iVar5 + ((ushort)*puVar2 & 0xff);
      puVar2 = (uint *)((int)puVar2 + 2);
    } while (uVar6 != 0);
    uVar6 = iVar5 + (unaff_r4 >> 2) >> (&DAT_01ff9800)[unaff_r4 >> 2];
    uVar9 = iVar10 + (unaff_r4 >> 2) >> (&DAT_01ff9800)[unaff_r4 >> 2];
  }
  else if (uVar6 >> 8 == 0) {
    iVar5 = 0;
    iVar10 = 0;
    puVar3 = (ushort *)((int)puVar4 + -2);
    uVar6 = unaff_r5 >> 1;
    do {
      uVar1 = *puVar3;
      puVar3 = puVar3 + 0x80;
      uVar6 = uVar6 - 1;
      iVar10 = iVar10 + (uint)(uVar1 >> 8);
      iVar5 = iVar5 + (uVar1 & 0xff);
    } while (uVar6 != 0);
    uVar6 = iVar5 + (unaff_r5 >> 2) >> (&DAT_01ff9800)[unaff_r5 >> 2];
    uVar9 = iVar10 + (unaff_r5 >> 2) >> (&DAT_01ff9800)[unaff_r5 >> 2];
  }
  else {
    iVar5 = 0;
    iVar10 = 0;
    uVar6 = unaff_r4 >> 1;
    puVar2 = puVar4 + -0x40;
    do {
      uVar6 = uVar6 - 1;
      iVar10 = iVar10 + (uint)(ushort)((ushort)*puVar2 >> 8);
      iVar5 = iVar5 + ((ushort)*puVar2 & 0xff);
      puVar2 = (uint *)((int)puVar2 + 2);
    } while (uVar6 != 0);
    iVar11 = 0;
    iVar7 = 0;
    puVar3 = (ushort *)((int)puVar4 + -2);
    uVar6 = unaff_r5 >> 1;
    do {
      uVar1 = *puVar3;
      puVar3 = puVar3 + 0x80;
      uVar6 = uVar6 - 1;
      iVar7 = iVar7 + (uint)(uVar1 >> 8);
      iVar11 = iVar11 + (uVar1 & 0xff);
    } while (uVar6 != 0);
    uVar6 = (iVar5 + (unaff_r4 >> 2) >> (&DAT_01ff9800)[unaff_r4 >> 2]) +
            (iVar11 + (unaff_r5 >> 2) >> (&DAT_01ff9800)[unaff_r5 >> 2]) + 1 >> 1;
    uVar9 = (iVar10 + (unaff_r4 >> 2) >> (&DAT_01ff9800)[unaff_r4 >> 2]) +
            (iVar7 + (unaff_r5 >> 2) >> (&DAT_01ff9800)[unaff_r5 >> 2]) + 1 >> 1;
  }
  uVar6 = uVar6 | uVar9 << 8;
  uVar9 = unaff_r5 >> 1;
  while( true ) {
    uVar8 = unaff_r4 >> 1;
    do {
      puVar2 = puVar4;
      *puVar2 = uVar6 | uVar6 << 0x10;
      uVar8 = uVar8 - 2;
      puVar4 = puVar2 + 1;
    } while (uVar8 != 0);
    uVar9 = uVar9 - 1;
    if (uVar9 == 0) break;
    puVar4 = (uint *)((int)puVar2 + (0x104 - unaff_r4));
  }
  return;
}

