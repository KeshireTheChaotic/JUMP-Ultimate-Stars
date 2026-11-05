
void FUN_02040c68(int param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  short sVar5;
  short *psVar6;
  int iVar7;
  short *psVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  
  iVar11 = *(int *)(param_1 + 0x34);
  uVar1 = *(ushort *)(iVar11 + 0x8ca);
  uVar2 = *(ushort *)(iVar11 + 0x8c8);
  for (uVar12 = 0; uVar12 < *(ushort *)(*(int *)(param_2 + 8) + 0x14); uVar12 = uVar12 + 1) {
    psVar6 = (short *)FUN_0203be48(param_2,uVar12);
    for (uVar13 = (uint)psVar6[1]; uVar13 < (uint)(int)psVar6[3]; uVar13 = uVar13 + 1) {
      sVar4 = *psVar6;
      sVar5 = *(short *)(param_1 + 0x66);
      uVar3 = *(ushort *)(param_1 + 0x4e);
      iVar10 = *(int *)(param_1 + 0x54);
      iVar7 = (**(code **)(iVar11 + 0x948))();
      psVar8 = (short *)(iVar7 + ((uint)uVar2 * (uVar13 & uVar1 - 1) + ((int)sVar4 & uVar2 - 1)) * 2
                        );
      for (uVar9 = 0; uVar9 < (uint)((int)psVar6[2] - (int)*psVar6); uVar9 = uVar9 + 1) {
        *psVar8 = *(short *)(param_1 + 0x60) +
                  *(short *)((uint)uVar3 * (uVar13 - (int)sVar5) + iVar10 +
                            ((uVar9 + (int)*psVar6) - (int)*(short *)(param_1 + 100)) * 2);
        psVar8 = psVar8 + 1;
      }
    }
  }
  return;
}

