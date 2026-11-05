
void FUN_0203bc4c(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  short local_2c;
  short local_2a;
  ushort local_28;
  short local_26;
  
  uVar1 = DAT_0209dd40;
  iVar4 = *(int *)(param_1 + 0x34);
  uVar5 = (uint)*(ushort *)(iVar4 + 0x8ca);
  uVar6 = (uint)*(ushort *)(iVar4 + 0x8c8);
  uVar7 = *(uint *)(iVar4 + 0x8e0);
  for (uVar8 = 0; uVar8 < *(ushort *)(*(int *)(param_2 + 8) + 0x14); uVar8 = uVar8 + 1) {
    uVar2 = FUN_0203be48(param_2,uVar8);
    FUN_02016ff0(&local_2c,uVar2);
    iVar11 = ((int)(short)local_28 >> 1) - ((int)local_2c >> 1);
    if (((int)local_2c & 1U) == 1) {
      for (uVar9 = (uint)local_2a; uVar9 < (uint)(int)local_26; uVar9 = uVar9 + 1) {
        uVar10 = uVar6 * (uVar9 & uVar5 - 1) + ((int)local_2c & uVar6 - 1) & 0xfffffffe;
        iVar3 = (**(code **)(iVar4 + 0x948))();
        *(ushort *)(uVar10 + iVar3) = *(ushort *)(uVar10 + iVar3) & 0xff | (ushort)(uVar7 << 8);
      }
    }
    if (0 < iVar11) {
      iVar11 = iVar11 * 2;
      for (uVar9 = (uint)local_2a; uVar9 < (uint)(int)local_26; uVar9 = uVar9 + 1) {
        if (uVar7 == 0) {
          uVar10 = (uint)local_2c;
          iVar3 = (**(code **)(iVar4 + 0x948))();
          FUN_0205157c(uVar1,uVar6 * (uVar9 & uVar5 - 1) + (uVar10 & uVar6 - 2) + iVar3,0,iVar11);
        }
        else {
          uVar10 = (uint)local_2c;
          iVar3 = (**(code **)(iVar4 + 0x948))();
          FUN_0205157c(uVar1,uVar6 * (uVar9 & uVar5 - 1) + (uVar10 & uVar6 - 2) + iVar3,
                       uVar7 & 0xffff,iVar11);
        }
      }
    }
    if ((local_28 & 1) == 1) {
      for (uVar9 = (uint)local_2a; uVar9 < (uint)(int)local_26; uVar9 = uVar9 + 1) {
        uVar10 = uVar6 * (uVar9 & uVar5 - 1) + ((int)(short)local_28 & uVar6 - 1) & 0xfffffffe;
        iVar11 = (**(code **)(iVar4 + 0x948))();
        *(ushort *)(uVar10 + iVar11) = *(ushort *)(uVar10 + iVar11) & 0xff00 | (ushort)uVar7;
      }
    }
  }
  return;
}

