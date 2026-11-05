
void FUN_0201e07c(int param_1,short *param_2)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  
  psVar2 = (short *)FUN_0201d4c4();
  iVar4 = (int)*param_2;
  iVar3 = (int)*psVar2;
  bVar10 = SBORROW4(iVar4,iVar3);
  iVar1 = iVar4 - iVar3;
  if (iVar4 < iVar3) {
    bVar10 = SBORROW4((int)param_2[1],(int)psVar2[1]);
    iVar1 = (int)param_2[1] - (int)psVar2[1];
  }
  if (iVar1 < 0 != bVar10) {
    iVar4 = (int)param_2[2];
    iVar3 = (int)psVar2[2];
    bVar11 = SBORROW4(iVar4,iVar3);
    iVar1 = iVar4 - iVar3;
    bVar10 = iVar4 == iVar3;
    if (iVar3 < iVar4) {
      iVar4 = (int)param_2[3];
      iVar3 = (int)psVar2[3];
      bVar11 = SBORROW4(iVar4,iVar3);
      iVar1 = iVar4 - iVar3;
      bVar10 = iVar4 == iVar3;
    }
    if (!bVar10 && iVar1 < 0 == bVar11) {
      return;
    }
  }
  uVar6 = 0;
  do {
    uVar5 = (uint)*(ushort *)(param_1 + 0x14);
    if (uVar5 <= uVar6) {
      if (uVar5 < 2) {
        return;
      }
      sVar7 = *(short *)(param_1 + 4);
      if (*(short *)(param_1 + 4) <= *param_2) {
        sVar7 = *param_2;
      }
      *(short *)(param_1 + 4) = sVar7;
      sVar7 = *(short *)(param_1 + 6);
      if (*(short *)(param_1 + 6) <= param_2[1]) {
        sVar7 = param_2[1];
      }
      *(short *)(param_1 + 6) = sVar7;
      sVar7 = *(short *)(param_1 + 8);
      if (param_2[2] <= *(short *)(param_1 + 8)) {
        sVar7 = param_2[2];
      }
      *(short *)(param_1 + 8) = sVar7;
      sVar7 = *(short *)(param_1 + 10);
      if (param_2[3] <= *(short *)(param_1 + 10)) {
        sVar7 = param_2[3];
      }
      *(short *)(param_1 + 10) = sVar7;
      return;
    }
    iVar3 = (int)*param_2;
    psVar2 = (short *)(uVar6 * *(int *)(param_1 + 0x10) + *(int *)(param_1 + 0xc));
    iVar4 = (int)psVar2[2];
    bVar10 = SBORROW4(iVar3,iVar4);
    iVar1 = iVar3 - iVar4;
    if (iVar3 < iVar4) {
      bVar10 = SBORROW4((int)param_2[1],(int)psVar2[3]);
      iVar1 = (int)param_2[1] - (int)psVar2[3];
    }
    if (iVar1 < 0 == bVar10) {
LAB_0201e110:
      FUN_02017004(psVar2,(uVar5 - 1) * *(int *)(param_1 + 0x10) + *(int *)(param_1 + 0xc));
      uVar6 = uVar6 - 1;
      *(short *)(param_1 + 0x14) = *(short *)(param_1 + 0x14) + -1;
    }
    else {
      iVar8 = (int)*psVar2;
      iVar4 = (int)param_2[2];
      bVar11 = SBORROW4(iVar4,iVar8);
      iVar1 = iVar4 - iVar8;
      bVar10 = iVar4 == iVar8;
      if (iVar8 < iVar4) {
        iVar4 = (int)param_2[3];
        iVar9 = (int)psVar2[1];
        bVar11 = SBORROW4(iVar4,iVar9);
        iVar1 = iVar4 - iVar9;
        bVar10 = iVar4 == iVar9;
      }
      if (bVar10 || iVar1 < 0 != bVar11) goto LAB_0201e110;
      sVar7 = *psVar2;
      if (iVar8 <= iVar3) {
        sVar7 = *param_2;
      }
      *psVar2 = sVar7;
      sVar7 = psVar2[1];
      if (psVar2[1] <= param_2[1]) {
        sVar7 = param_2[1];
      }
      psVar2[1] = sVar7;
      sVar7 = psVar2[2];
      if (param_2[2] <= psVar2[2]) {
        sVar7 = param_2[2];
      }
      psVar2[2] = sVar7;
      sVar7 = psVar2[3];
      if (param_2[3] <= psVar2[3]) {
        sVar7 = param_2[3];
      }
      psVar2[3] = sVar7;
    }
    uVar6 = uVar6 + 1;
  } while( true );
}

