
void FUN_01ffcad4(void)

{
  uint uVar1;
  ushort *puVar2;
  ushort uVar3;
  int *piVar4;
  uint unaff_r4;
  byte *pbVar5;
  ushort *puVar6;
  int *piVar7;
  uint *puVar8;
  uint unaff_r6;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  
  FUN_01ff9450();
  FUN_01ff9450();
  uVar9 = unaff_r6 & 0xfffffffe;
  iVar17 = (unaff_r6 & 0xfffffffe) + uVar9 * 0x80;
  FUN_01ff9450();
  FUN_01ff9450();
  piVar4 = (int *)FUN_01ff9450();
  pbVar5 = (byte *)(piVar4[-8] + unaff_r6 * 0x101 + *piVar4);
  piVar7 = (int *)(piVar4[-2] + *piVar4);
  uVar16 = unaff_r4;
  do {
    iVar10 = (uint)*pbVar5 + uVar9 * 2;
    if (iVar10 < 0 != SCARRY4((uint)*pbVar5,uVar9 * 2)) {
      iVar10 = 0;
    }
    if (0xff < iVar10) {
      iVar10 = 0xff;
    }
    iVar13 = (uint)pbVar5[1] + uVar9 * 2;
    if (iVar13 < 0 != SCARRY4((uint)pbVar5[1],uVar9 * 2)) {
      iVar13 = 0;
    }
    if (0xff < iVar13) {
      iVar13 = 0xff;
    }
    iVar14 = (uint)pbVar5[2] + uVar9 * 2;
    if (iVar14 < 0 != SCARRY4((uint)pbVar5[2],uVar9 * 2)) {
      iVar14 = 0;
    }
    if (0xff < iVar14) {
      iVar14 = 0xff;
    }
    iVar15 = (uint)pbVar5[3] + uVar9 * 2;
    if (iVar15 < 0 != SCARRY4((uint)pbVar5[3],uVar9 * 2)) {
      iVar15 = 0;
    }
    if (0xff < iVar15) {
      iVar15 = 0xff;
    }
    *piVar7 = iVar10 + iVar13 * 0x100 + iVar14 * 0x10000 + iVar15 * 0x1000000;
    uVar16 = uVar16 - 1;
    pbVar5 = pbVar5 + 0x100;
    piVar7 = piVar7 + 0x40;
  } while (uVar16 != 0);
  puVar6 = (ushort *)(piVar4[-7] + iVar17 + piVar4[1]);
  uVar16 = unaff_r4 >> 1;
  puVar8 = (uint *)(piVar4[-1] + piVar4[1]);
  do {
    uVar3 = *puVar6;
    puVar2 = puVar6 + 1;
    puVar6 = puVar6 + 0x80;
    uVar11 = uVar3 & 0xff;
    uVar1 = (uint)(uVar3 >> 8);
    uVar12 = uVar11 + uVar9 * 2;
    if ((int)uVar12 < 0 != SCARRY4(uVar11,uVar9 * 2)) {
      uVar12 = 0;
    }
    if (0xff < (int)uVar12) {
      uVar12 = 0xff;
    }
    iVar17 = uVar1 + uVar9 * 2;
    if (iVar17 < 0 != SCARRY4(uVar1,uVar9 * 2)) {
      iVar17 = 0;
    }
    if (0xff < iVar17) {
      iVar17 = 0xff;
    }
    uVar11 = *puVar2 & 0xff;
    uVar1 = (uint)(*puVar2 >> 8);
    iVar10 = uVar11 + uVar9 * 2;
    if (iVar10 < 0 != SCARRY4(uVar11,uVar9 * 2)) {
      iVar10 = 0;
    }
    if (0xff < iVar10) {
      iVar10 = 0xff;
    }
    iVar13 = uVar1 + uVar9 * 2;
    if (iVar13 < 0 != SCARRY4(uVar1,uVar9 * 2)) {
      iVar13 = 0;
    }
    if (0xff < iVar13) {
      iVar13 = 0xff;
    }
    *puVar8 = uVar12 | iVar17 << 8 | iVar10 << 0x10 | iVar13 << 0x18;
    uVar16 = uVar16 - 1;
    puVar8 = puVar8 + 0x40;
  } while (uVar16 != 0);
  return;
}

