
void FUN_0203be54(int param_1,int param_2)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  undefined4 uVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  uVar4 = DAT_0209dd40;
  iVar7 = *(int *)(param_1 + 0x34);
  uVar1 = *(ushort *)(iVar7 + 0x8ca);
  uVar8 = (uint)*(ushort *)(iVar7 + 0x8c8);
  uVar9 = *(uint *)(iVar7 + 0x8e0);
  for (uVar10 = 0; uVar10 < *(ushort *)(*(int *)(param_2 + 8) + 0x14); uVar10 = uVar10 + 1) {
    psVar5 = (short *)FUN_0203be48(param_2,uVar10);
    uVar12 = uVar1 - 1;
    for (uVar11 = (uint)psVar5[1]; uVar11 < (uint)(int)psVar5[3]; uVar11 = uVar11 + 1) {
      if (uVar9 == 0) {
        sVar2 = *psVar5;
        sVar3 = psVar5[2];
        iVar6 = (**(code **)(iVar7 + 0x948))();
        FUN_0205157c(uVar4,iVar6 + (uVar8 * (uVar11 & uVar12) + ((int)sVar2 & uVar8 - 1)) * 2,0,
                     ((int)sVar3 - (int)sVar2) * 2);
      }
      else {
        sVar2 = *psVar5;
        iVar6 = (**(code **)(iVar7 + 0x948))();
        FUN_0205157c(uVar4,iVar6 + (uVar8 * (uVar11 & uVar12) + ((int)sVar2 & uVar8 - 1)) * 2,
                     uVar9 & 0xffff,((int)psVar5[2] - (int)*psVar5) * 2);
      }
    }
  }
  return;
}

