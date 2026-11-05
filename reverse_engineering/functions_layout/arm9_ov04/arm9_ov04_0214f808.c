
void FUN_0214f808(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  int local_40 [4];
  int local_30 [4];
  
  iVar2 = DAT_02161de8;
  uVar9 = (uint)*(byte *)(DAT_02161de8 + 0x15);
  for (iVar5 = 0; iVar5 < (int)uVar9; iVar5 = iVar5 + 1) {
    local_30[iVar5] = -1;
    local_40[iVar5] = iVar5;
  }
  iVar5 = 0;
  for (uVar6 = uVar9; 0 < (int)uVar6; uVar6 = uVar6 - iVar4) {
    bVar7 = 0;
    for (iVar4 = 0; iVar4 < (int)uVar9; iVar4 = iVar4 + 1) {
      iVar8 = local_40[iVar4];
      if ((-1 < iVar8) && (local_30[iVar8] < 0)) {
        bVar1 = *(byte *)(iVar2 + iVar8 + 0x16);
        if (bVar7 < bVar1) {
          bVar7 = bVar1;
        }
      }
    }
    iVar4 = 0;
    for (iVar8 = 0; iVar8 < (int)uVar9; iVar8 = iVar8 + 1) {
      iVar3 = local_40[iVar8];
      if (((-1 < iVar3) && (local_30[iVar3] < 0)) && (bVar7 == *(byte *)(iVar2 + iVar3 + 0x16))) {
        local_30[iVar3] = iVar5;
        iVar4 = iVar4 + 1;
      }
    }
    iVar5 = iVar5 + iVar4;
  }
  for (iVar5 = 0; iVar5 < (int)uVar9; iVar5 = iVar5 + 1) {
    iVar4 = local_30[iVar5];
    (&DAT_020afef2)[iVar5] = (ushort)*(byte *)(iVar2 + iVar5 + 0x16);
    (&DAT_020afee6)[iVar5] = (char)iVar4;
  }
  return;
}

