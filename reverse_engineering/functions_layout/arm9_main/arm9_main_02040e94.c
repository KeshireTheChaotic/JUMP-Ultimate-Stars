
void FUN_02040e94(int param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  short *psVar4;
  uint uVar5;
  int iVar6;
  short *psVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  iVar10 = *(int *)(param_1 + 0x34);
  uVar1 = *(ushort *)(iVar10 + 0x8c8);
  uVar2 = *(ushort *)(iVar10 + 0x8ca);
  uVar3 = *(undefined4 *)(iVar10 + 0x8e0);
  for (uVar11 = 0; uVar11 < *(ushort *)(*(int *)(param_2 + 8) + 0x14); uVar11 = uVar11 + 1) {
    psVar4 = (short *)FUN_0203be48(param_2,uVar11);
    uVar13 = (uint)*psVar4;
    uVar12 = (uint)psVar4[1];
    uVar5 = (uint)*(ushort *)(param_1 + 0x4e) * (uVar12 - (int)*(short *)(param_1 + 0x66)) +
            (uint)*(ushort *)(param_1 + 0x60) + (uVar13 - (int)*(short *)(param_1 + 100));
    for (; uVar12 < (uint)(int)psVar4[3]; uVar12 = uVar12 + 1) {
      iVar6 = (**(code **)(iVar10 + 0x948))();
      psVar7 = (short *)((uVar12 & 0x1f) * 0x40 + (uVar13 & 0x1f) * 2 +
                         ((uint)(uVar1 >> 5) * ((uVar12 & uVar2 - 1) >> 5) +
                         ((uVar13 & uVar1 - 1) >> 5)) * 0x800 + iVar6);
      uVar9 = uVar5 & 0xffff;
      for (uVar8 = 0; uVar13 = (uint)*psVar4, uVar8 < (int)psVar4[2] - uVar13; uVar8 = uVar8 + 1) {
        *psVar7 = (short)uVar3 + (short)uVar9;
        uVar9 = uVar9 + 1 & 0xffff;
        psVar7 = psVar7 + 1;
      }
      uVar5 = (uVar5 & 0xffff) + ((int)(uint)*(ushort *)(param_1 + 0x4e) >> 1);
    }
  }
  return;
}

