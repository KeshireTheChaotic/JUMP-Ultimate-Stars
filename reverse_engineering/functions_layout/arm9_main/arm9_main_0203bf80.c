
void FUN_0203bf80(int param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  undefined4 uVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  
  uVar4 = DAT_0209dd40;
  iVar7 = *(int *)(param_1 + 0x34);
  uVar1 = *(ushort *)(iVar7 + 0x8c8);
  uVar2 = *(ushort *)(iVar7 + 0x8ca);
  uVar8 = *(uint *)(iVar7 + 0x8e0);
  for (uVar9 = 0; uVar9 < *(ushort *)(*(int *)(param_2 + 8) + 0x14); uVar9 = uVar9 + 1) {
    psVar5 = (short *)FUN_0203be48(param_2,uVar9);
    for (uVar10 = (uint)psVar5[1]; uVar10 < (uint)(int)psVar5[3]; uVar10 = uVar10 + 1) {
      uVar12 = (uint)*psVar5;
      iVar11 = (uint)(uVar1 >> 5) * ((uVar10 & uVar2 - 1) >> 5) + ((uVar12 & uVar1 - 1) >> 5);
      if (uVar8 == 0) {
        sVar3 = psVar5[2];
        iVar6 = (**(code **)(iVar7 + 0x948))();
        FUN_0205157c(uVar4,(uVar10 & 0x1f) * 0x40 + (uVar12 & 0x1f) * 2 + iVar11 * 0x800 + iVar6,0,
                     ((int)sVar3 - uVar12) * 2);
      }
      else {
        iVar6 = (**(code **)(iVar7 + 0x948))();
        FUN_0205157c(uVar4,(uVar10 & 0x1f) * 0x40 + (uVar12 & 0x1f) * 2 + iVar11 * 0x800 + iVar6,
                     uVar8 & 0xffff,((int)psVar5[2] - (int)*psVar5) * 2);
      }
    }
  }
  return;
}

