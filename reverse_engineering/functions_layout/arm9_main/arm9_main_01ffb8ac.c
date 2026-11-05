
void FUN_01ffb8ac(void)

{
  uint uVar1;
  int *piVar2;
  uint unaff_r4;
  byte *pbVar3;
  byte *pbVar4;
  ushort *puVar5;
  ushort *puVar6;
  int *piVar7;
  int *piVar8;
  uint *puVar9;
  uint *puVar10;
  uint unaff_r6;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  
  FUN_01ff9450();
  FUN_01ff9450();
  uVar11 = unaff_r6 & 0xfffffffe;
  iVar20 = (unaff_r6 & 0xfffffffe) + uVar11 * 0x80;
  FUN_01ff9450();
  FUN_01ff9450();
  piVar2 = (int *)FUN_01ff9450();
  pbVar3 = (byte *)(piVar2[-8] + unaff_r6 * 0x101 + *piVar2);
  piVar7 = (int *)(piVar2[-2] + *piVar2);
  uVar19 = unaff_r4;
  do {
    iVar18 = 2;
    do {
      piVar8 = piVar7;
      pbVar4 = pbVar3;
      iVar12 = (uint)*pbVar4 + uVar11 * 2;
      if (iVar12 < 0 != SCARRY4((uint)*pbVar4,uVar11 * 2)) {
        iVar12 = 0;
      }
      if (0xff < iVar12) {
        iVar12 = 0xff;
      }
      iVar15 = (uint)pbVar4[1] + uVar11 * 2;
      if (iVar15 < 0 != SCARRY4((uint)pbVar4[1],uVar11 * 2)) {
        iVar15 = 0;
      }
      if (0xff < iVar15) {
        iVar15 = 0xff;
      }
      iVar16 = (uint)pbVar4[2] + uVar11 * 2;
      if (iVar16 < 0 != SCARRY4((uint)pbVar4[2],uVar11 * 2)) {
        iVar16 = 0;
      }
      if (0xff < iVar16) {
        iVar16 = 0xff;
      }
      iVar17 = (uint)pbVar4[3] + uVar11 * 2;
      if (iVar17 < 0 != SCARRY4((uint)pbVar4[3],uVar11 * 2)) {
        iVar17 = 0;
      }
      if (0xff < iVar17) {
        iVar17 = 0xff;
      }
      *piVar8 = iVar12 + iVar15 * 0x100 + iVar16 * 0x10000 + iVar17 * 0x1000000;
      iVar18 = iVar18 + -1;
      pbVar3 = pbVar4 + 4;
      piVar7 = piVar8 + 1;
    } while (iVar18 != 0);
    pbVar3 = pbVar4 + 0xfc;
    piVar7 = piVar8 + 0x3f;
    uVar19 = uVar19 - 1;
  } while (uVar19 != 0);
  puVar5 = (ushort *)(piVar2[-7] + iVar20 + piVar2[1]);
  puVar9 = (uint *)(piVar2[-1] + piVar2[1]);
  uVar19 = unaff_r4 >> 1;
  do {
    iVar20 = 2;
    do {
      puVar10 = puVar9;
      puVar6 = puVar5;
      uVar13 = *puVar6 & 0xff;
      uVar1 = (uint)(*puVar6 >> 8);
      uVar14 = uVar13 + uVar11 * 2;
      if ((int)uVar14 < 0 != SCARRY4(uVar13,uVar11 * 2)) {
        uVar14 = 0;
      }
      if (0xff < (int)uVar14) {
        uVar14 = 0xff;
      }
      iVar18 = uVar1 + uVar11 * 2;
      if (iVar18 < 0 != SCARRY4(uVar1,uVar11 * 2)) {
        iVar18 = 0;
      }
      if (0xff < iVar18) {
        iVar18 = 0xff;
      }
      uVar13 = puVar6[1] & 0xff;
      uVar1 = (uint)(puVar6[1] >> 8);
      iVar12 = uVar13 + uVar11 * 2;
      if (iVar12 < 0 != SCARRY4(uVar13,uVar11 * 2)) {
        iVar12 = 0;
      }
      if (0xff < iVar12) {
        iVar12 = 0xff;
      }
      iVar15 = uVar1 + uVar11 * 2;
      if (iVar15 < 0 != SCARRY4(uVar1,uVar11 * 2)) {
        iVar15 = 0;
      }
      if (0xff < iVar15) {
        iVar15 = 0xff;
      }
      *puVar10 = uVar14 | iVar18 << 8 | iVar12 << 0x10 | iVar15 << 0x18;
      iVar20 = iVar20 + -1;
      puVar5 = puVar6 + 2;
      puVar9 = puVar10 + 1;
    } while (iVar20 != 0);
    puVar5 = puVar6 + 0x7e;
    puVar9 = puVar10 + 0x3f;
    uVar19 = uVar19 - 1;
  } while (uVar19 != 0);
  return;
}

