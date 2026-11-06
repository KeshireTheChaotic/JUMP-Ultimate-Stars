
void FUN_02048498(int param_1,int param_2)

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
  
  uVar4 = DAT_0209dd40;
  iVar7 = *(int *)(param_1 + 0x34);
  uVar1 = *(ushort *)(iVar7 + 0x8ca);
  uVar2 = *(ushort *)(iVar7 + 0x8c8);
  for (uVar8 = 0; uVar8 < *(ushort *)(*(int *)(param_2 + 8) + 0x14); uVar8 = uVar8 + 1) {
    psVar5 = (short *)FUN_0203be48(param_2,uVar8);
    for (uVar9 = (uint)psVar5[1]; uVar9 < (uint)(int)psVar5[3]; uVar9 = uVar9 + 1) {
      sVar3 = *psVar5;
      iVar6 = (**(code **)(iVar7 + 0x948))();
      MI_DmaCopy16(uVar4,*(int *)(param_1 + 0xac) +
                         (uVar9 * *(int *)(param_1 + 0x6c) + (int)*psVar5) * 2,
                   iVar6 + ((uint)uVar2 * (uVar9 & uVar1 - 1) + ((int)sVar3 & uVar2 - 1)) * 2,
                   ((int)psVar5[2] - (int)*psVar5) * 2);
    }
  }
  return;
}

