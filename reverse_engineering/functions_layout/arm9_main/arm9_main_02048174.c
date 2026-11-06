
void FUN_02048174(int param_1,int param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  
  uVar2 = DAT_0209dd40;
  iVar10 = *(int *)(param_1 + 0x34);
  uVar6 = (uint)*(ushort *)(iVar10 + 0x8ca);
  uVar7 = (uint)*(ushort *)(iVar10 + 0x8c8);
  for (uVar8 = 0; uVar8 < *(ushort *)(*(int *)(param_2 + 8) + 0x14); uVar8 = uVar8 + 1) {
    puVar3 = (ushort *)FUN_0203be48(param_2,uVar8);
    if ((*puVar3 & 1) == 1) {
      for (uVar9 = (uint)(short)puVar3[1]; uVar9 < (uint)(int)(short)puVar3[3]; uVar9 = uVar9 + 1) {
        uVar11 = uVar7 * (uVar9 & uVar6 - 1) + ((int)(short)*puVar3 & uVar7 - 1) & 0xfffffffe;
        iVar4 = (**(code **)(iVar10 + 0x948))();
        *(ushort *)(uVar11 + iVar4) =
             *(ushort *)(uVar11 + iVar4) & 0xff |
             *(ushort *)
              (*(int *)(param_1 + 0xac) +
              (uVar9 * *(int *)(param_1 + 0x6c) + (int)(short)*puVar3 & 0xfffffffe)) & 0xff00;
      }
    }
    iVar4 = ((int)(short)puVar3[2] >> 1) - ((short)*puVar3 + 1 >> 1);
    if (0 < iVar4) {
      for (uVar9 = (uint)(short)puVar3[1]; uVar9 < (uint)(int)(short)puVar3[3]; uVar9 = uVar9 + 1) {
        uVar1 = *puVar3;
        iVar5 = (**(code **)(iVar10 + 0x948))();
        MI_DmaCopy16(uVar2,*(int *)(param_1 + 0xac) +
                           (uVar9 * *(int *)(param_1 + 0x6c) + (int)(short)*puVar3 + 1 & 0xfffffffe)
                     ,uVar7 * (uVar9 & uVar6 - 1) + ((int)(short)uVar1 & uVar7 - 2) + iVar5,
                     iVar4 * 2);
      }
    }
    if ((puVar3[2] & 1) == 1) {
      for (uVar9 = (uint)(short)puVar3[1]; uVar9 < (uint)(int)(short)puVar3[3]; uVar9 = uVar9 + 1) {
        uVar11 = uVar7 * (uVar9 & uVar6 - 1) + ((int)(short)puVar3[2] & uVar7 - 1) & 0xfffffffe;
        iVar4 = (**(code **)(iVar10 + 0x948))();
        *(ushort *)(uVar11 + iVar4) =
             *(ushort *)(uVar11 + iVar4) & 0xff00 |
             *(ushort *)
              (*(int *)(param_1 + 0xac) +
              (uVar9 * *(int *)(param_1 + 0x6c) + (int)(short)puVar3[2] & 0xfffffffe)) & 0xff;
      }
    }
  }
  return;
}

