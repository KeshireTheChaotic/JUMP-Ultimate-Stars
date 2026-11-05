
void FUN_02040d70(int param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  short *psVar4;
  uint uVar5;
  int iVar6;
  short *psVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  iVar9 = *(int *)(param_1 + 0x34);
  uVar1 = *(ushort *)(iVar9 + 0x8ca);
  uVar2 = *(ushort *)(iVar9 + 0x8c8);
  uVar3 = *(undefined4 *)(iVar9 + 0x8e0);
  for (uVar10 = 0; uVar10 < *(ushort *)(*(int *)(param_2 + 8) + 0x14); uVar10 = uVar10 + 1) {
    psVar4 = (short *)FUN_0203be48(param_2,uVar10);
    uVar12 = (uint)*psVar4;
    uVar11 = (uint)psVar4[1];
    uVar5 = (uint)*(ushort *)(param_1 + 0x4e) * (uVar11 - (int)*(short *)(param_1 + 0x66)) +
            (uint)*(ushort *)(param_1 + 0x60) + (uVar12 - (int)*(short *)(param_1 + 100));
    for (; uVar11 < (uint)(int)psVar4[3]; uVar11 = uVar11 + 1) {
      iVar6 = (**(code **)(iVar9 + 0x948))();
      uVar8 = 0;
      psVar7 = (short *)(iVar6 + ((uint)uVar2 * (uVar11 & uVar1 - 1) + (uVar12 & uVar2 - 1)) * 2);
      while( true ) {
        uVar12 = (uint)*psVar4;
        if ((int)psVar4[2] - uVar12 <= uVar8) break;
        uVar8 = uVar8 + 1;
        *psVar7 = (short)uVar3 + (short)uVar5;
        uVar5 = (uVar5 & 0xffff) + 1;
        psVar7 = psVar7 + 1;
      }
      uVar5 = (uVar5 & 0xffff) + ((int)(uint)*(ushort *)(param_1 + 0x4e) >> 1);
    }
  }
  return;
}

