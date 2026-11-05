
void FUN_02048688(int param_1,int param_2)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  undefined4 uVar5;
  short *psVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  short *psVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  short *local_3c;
  
  uVar5 = DAT_0209dd40;
  iVar14 = *(int *)(param_1 + 0x34);
  uVar2 = *(ushort *)(iVar14 + 0x8c8);
  uVar3 = *(ushort *)(iVar14 + 0x8ca);
  uVar1 = (uint)(uVar2 >> 5);
  iVar15 = *(int *)(iVar14 + 0x8e0);
  for (uVar16 = 0; uVar16 < *(ushort *)(*(int *)(param_2 + 8) + 0x14); uVar16 = uVar16 + 1) {
    psVar6 = (short *)FUN_0203be48(param_2,uVar16);
    uVar17 = (uint)psVar6[1];
    uVar7 = uVar2 - 1;
    if (iVar15 == 0) {
      for (; uVar17 < (uint)(int)psVar6[3]; uVar17 = uVar17 + 1) {
        sVar4 = *psVar6;
        iVar8 = (**(code **)(iVar14 + 0x948))();
        FUN_02051504(uVar5,*(int *)(param_1 + 0xac) +
                           (uVar17 * *(int *)(param_1 + 0x6c) + (int)*psVar6) * 2,
                     (uVar17 & 0x1f) * 0x40 + ((int)sVar4 & 0x1fU) * 2 +
                     (uVar1 * ((uVar17 & uVar3 - 1) >> 5) + (((int)sVar4 & uVar7) >> 5)) * 0x800 +
                     iVar8,((int)psVar6[2] - (int)*psVar6) * 2);
      }
    }
    else {
      for (; uVar17 < (uint)(int)psVar6[3]; uVar17 = uVar17 + 1) {
        uVar9 = (uint)*psVar6;
        iVar13 = *(int *)(param_1 + 0x6c);
        iVar8 = *(int *)(param_1 + 0xac);
        iVar10 = (**(code **)(iVar14 + 0x948))();
        psVar12 = (short *)((uVar17 & 0x1f) * 0x40 + (uVar9 & 0x1f) * 2 +
                            (uVar1 * ((uVar17 & uVar3 - 1) >> 5) + ((uVar9 & uVar7) >> 5)) * 0x800 +
                           iVar10);
        local_3c = (short *)(iVar8 + (uVar17 * iVar13 + uVar9) * 2);
        for (uVar11 = 0; uVar11 < (uint)((int)psVar6[2] - (int)*psVar6); uVar11 = uVar11 + 1) {
          *local_3c = (short)iVar15 + *psVar12;
          psVar12 = psVar12 + 1;
          local_3c = local_3c + 1;
        }
      }
    }
  }
  return;
}

