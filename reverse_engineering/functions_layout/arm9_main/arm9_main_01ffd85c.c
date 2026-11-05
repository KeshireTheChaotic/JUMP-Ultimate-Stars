
void FUN_01ffd85c(void)

{
  uint uVar1;
  byte *pbVar2;
  byte bVar3;
  ushort uVar4;
  int *piVar5;
  uint unaff_r4;
  byte *pbVar6;
  ushort *puVar7;
  short *psVar8;
  ushort *puVar9;
  uint unaff_r6;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  
  FUN_01ff9450();
  FUN_01ff9450();
  uVar10 = unaff_r6 & 0xfffffffe;
  iVar15 = (unaff_r6 & 0xfffffffe) + uVar10 * 0x80;
  FUN_01ff9450();
  FUN_01ff9450();
  piVar5 = (int *)FUN_01ff9450();
  pbVar6 = (byte *)(piVar5[-8] + unaff_r6 * 0x101 + *piVar5);
  psVar8 = (short *)(piVar5[-2] + *piVar5);
  uVar14 = unaff_r4;
  do {
    bVar3 = *pbVar6;
    pbVar2 = pbVar6 + 1;
    pbVar6 = pbVar6 + 0x100;
    iVar11 = (uint)bVar3 + uVar10 * 2;
    if (iVar11 < 0 != SCARRY4((uint)bVar3,uVar10 * 2)) {
      iVar11 = 0;
    }
    if (0xff < iVar11) {
      iVar11 = 0xff;
    }
    iVar13 = (uint)*pbVar2 + uVar10 * 2;
    if (iVar13 < 0 != SCARRY4((uint)*pbVar2,uVar10 * 2)) {
      iVar13 = 0;
    }
    if (0xff < iVar13) {
      iVar13 = 0xff;
    }
    *psVar8 = (short)iVar11 + (short)iVar13 * 0x100;
    psVar8 = psVar8 + 0x80;
    uVar14 = uVar14 - 1;
  } while (uVar14 != 0);
  puVar7 = (ushort *)(piVar5[-7] + iVar15 + piVar5[1]);
  puVar9 = (ushort *)(piVar5[-1] + piVar5[1]);
  uVar14 = unaff_r4 >> 1;
  do {
    uVar4 = *puVar7;
    puVar7 = puVar7 + 0x80;
    uVar12 = uVar4 & 0xff;
    uVar1 = (uint)(uVar4 >> 8);
    iVar15 = uVar12 + uVar10 * 2;
    if (iVar15 < 0 != SCARRY4(uVar12,uVar10 * 2)) {
      iVar15 = 0;
    }
    if (0xff < iVar15) {
      iVar15 = 0xff;
    }
    iVar11 = uVar1 + uVar10 * 2;
    if (iVar11 < 0 != SCARRY4(uVar1,uVar10 * 2)) {
      iVar11 = 0;
    }
    if (0xff < iVar11) {
      iVar11 = 0xff;
    }
    *puVar9 = (ushort)iVar15 | (ushort)(iVar11 << 8);
    puVar9 = puVar9 + 0x80;
    uVar14 = uVar14 - 1;
  } while (uVar14 != 0);
  return;
}

