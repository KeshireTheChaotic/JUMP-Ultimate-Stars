
void FUN_020406fc(int param_1,int param_2)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short *psVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ushort *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  
  iVar10 = *(int *)(param_1 + 0x34);
  uVar1 = *(ushort *)(iVar10 + 0x8ca);
  uVar11 = (uint)*(ushort *)(iVar10 + 0x8c8);
  for (uVar12 = 0; uVar12 < *(ushort *)(*(int *)(param_2 + 8) + 0x14); uVar12 = uVar12 + 1) {
    psVar5 = (short *)FUN_0203be48(param_2,uVar12);
    sVar2 = *psVar5;
    uVar14 = (uint)psVar5[1];
    iVar13 = (uint)*(ushort *)(param_1 + 0x4e) * (uVar14 - (int)*(short *)(param_1 + 0x66)) +
             *(int *)(param_1 + 0x54);
    sVar3 = psVar5[2];
    uVar6 = uVar1 - 1;
    for (; uVar14 < (uint)(int)psVar5[3]; uVar14 = uVar14 + 1) {
      sVar4 = *psVar5;
      if (((int)sVar4 & 1U) == 1) {
        iVar7 = (**(code **)(iVar10 + 0x948))();
        uVar8 = uVar11 * (uVar14 & uVar6) + ((int)sVar4 & uVar11 - 1) & 0xfffffffe;
        *(ushort *)(uVar8 + iVar7) =
             *(ushort *)(uVar8 + iVar7) & 0xff |
             (*(short *)(param_1 + 0x60) +
             (ushort)*(byte *)(iVar13 + ((int)*psVar5 - (int)*(short *)(param_1 + 100)))) * 0x100;
      }
      sVar4 = *psVar5;
      iVar15 = uVar11 * (uVar14 & uVar6);
      iVar7 = (**(code **)(iVar10 + 0x948))();
      puVar9 = (ushort *)(((int)sVar4 & uVar11 - 2) + iVar15 + iVar7);
      for (uVar8 = 0; uVar8 < (uint)(((int)sVar3 >> 1) - (sVar2 + 1 >> 1)); uVar8 = uVar8 + 1) {
        *puVar9 = *(short *)(param_1 + 0x60) +
                  (ushort)*(byte *)(iVar13 + (((int)*psVar5 + uVar8 * 2) -
                                             (int)*(short *)(param_1 + 100))) |
                  (*(short *)(param_1 + 0x60) +
                  (ushort)*(byte *)(iVar13 + (((int)*psVar5 + uVar8 * 2 + 1) -
                                             (int)*(short *)(param_1 + 100)))) * 0x100;
        puVar9 = puVar9 + 1;
      }
      sVar4 = psVar5[2];
      if (((int)sVar4 & 1U) == 1) {
        iVar7 = (**(code **)(iVar10 + 0x948))();
        uVar8 = ((int)sVar4 & uVar11 - 1) + iVar15 & 0xfffffffe;
        *(ushort *)(uVar8 + iVar7) =
             *(ushort *)(uVar8 + iVar7) & 0xff00 |
             *(short *)(param_1 + 0x60) +
             (ushort)*(byte *)(iVar13 + ((psVar5[2] + -1) - (int)*(short *)(param_1 + 100))) & 0xff;
      }
      iVar13 = iVar13 + (uint)*(ushort *)(param_1 + 0x4e);
    }
  }
  return;
}

