
undefined4 FUN_0201d1a0(int param_1,short *param_2,undefined4 param_3,uint param_4)

{
  short *psVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  short sVar7;
  int iVar8;
  uint unaff_r7;
  short *psVar9;
  int iVar10;
  int iVar11;
  short *psVar12;
  int unaff_r9;
  int unaff_r10;
  int iVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  
  psVar1 = (short *)FUN_0201d4c4();
  uVar3 = (uint)*(ushort *)(param_1 + 0x14);
  if (uVar3 != 0) {
    iVar10 = (int)psVar1[2];
    iVar6 = (int)*param_2;
    bVar15 = SBORROW4(iVar6,iVar10);
    iVar4 = iVar6 - iVar10;
    bVar14 = iVar6 == iVar10;
    if (iVar6 <= iVar10) {
      unaff_r7 = (uint)psVar1[3];
      param_4 = (uint)param_2[1];
      bVar15 = SBORROW4(param_4,unaff_r7);
      iVar4 = param_4 - unaff_r7;
      bVar14 = param_4 == unaff_r7;
    }
    if (bVar14 || iVar4 < 0 != bVar15) {
      iVar8 = (int)*psVar1;
      iVar13 = (int)param_2[2];
      bVar14 = SBORROW4(iVar13,iVar8);
      iVar4 = iVar13 - iVar8;
      if (iVar8 <= iVar13) {
        uVar3 = (uint)psVar1[1];
        psVar1 = (short *)(int)param_2[3];
        bVar14 = SBORROW4((int)psVar1,uVar3);
        iVar4 = (int)psVar1 - uVar3;
      }
      if (iVar4 < 0 == bVar14) {
        bVar15 = SBORROW4(iVar6,iVar8);
        iVar4 = iVar6 - iVar8;
        bVar14 = iVar6 == iVar8;
        if (iVar6 <= iVar8) {
          bVar15 = SBORROW4(param_4,uVar3);
          iVar4 = param_4 - uVar3;
          bVar14 = param_4 == uVar3;
        }
        if (bVar14 || iVar4 < 0 != bVar15) {
          bVar14 = SBORROW4(iVar13,iVar10);
          iVar4 = iVar13 - iVar10;
          if (iVar10 <= iVar13) {
            bVar14 = SBORROW4((int)psVar1,unaff_r7);
            iVar4 = (int)psVar1 - unaff_r7;
          }
          if (iVar4 < 0 == bVar14) {
            *(undefined2 *)(param_1 + 0x14) = 0;
            puVar2 = (undefined4 *)FUN_02037f84(param_1 + 0xc);
            *puVar2 = *(undefined4 *)param_2;
            puVar2[1] = *(undefined4 *)(param_2 + 2);
            return 0;
          }
        }
        uVar3 = 0;
        bVar14 = false;
        do {
          if (*(ushort *)(param_1 + 0x14) <= uVar3) {
LAB_0201d474:
            if (bVar14) {
              FUN_0201d5f4(param_1,param_2);
              FUN_0201d4e0(param_1,param_2);
              FUN_0201d544(param_1,param_2);
              return 1;
            }
            FUN_0201d4e0();
            FUN_0201d544(param_1,param_2);
            return 0;
          }
          iVar4 = uVar3 * *(int *)(param_1 + 0x10);
          iVar10 = (int)*(short *)(*(int *)(param_1 + 0xc) + iVar4);
          psVar5 = (short *)(*(int *)(param_1 + 0xc) + iVar4);
          bVar15 = SBORROW4(iVar6,iVar10);
          iVar4 = iVar6 - iVar10;
          if (iVar10 <= iVar6) {
            bVar15 = SBORROW4((int)param_2[1],(int)psVar5[1]);
            iVar4 = (int)param_2[1] - (int)psVar5[1];
          }
          if (iVar4 < 0 == bVar15) {
            iVar11 = (int)param_2[2];
            iVar8 = (int)psVar5[2];
            bVar16 = SBORROW4(iVar11,iVar8);
            iVar4 = iVar11 - iVar8;
            bVar15 = iVar11 == iVar8;
            if (iVar11 <= iVar8) {
              iVar11 = (int)param_2[3];
              iVar8 = (int)psVar5[3];
              bVar16 = SBORROW4(iVar11,iVar8);
              iVar4 = iVar11 - iVar8;
              bVar15 = iVar11 == iVar8;
            }
            if (bVar15 || iVar4 < 0 != bVar16) {
              return 0;
            }
          }
          psVar12 = (short *)(int)param_2[1];
          psVar9 = (short *)(int)psVar5[1];
          if (psVar9 == psVar12) {
            unaff_r10 = (int)psVar5[3];
            unaff_r9 = (int)param_2[3];
          }
          if (psVar9 == psVar12 && unaff_r10 == unaff_r9) {
            if (psVar5[2] == iVar6) {
              psVar5[2] = param_2[2];
              sVar7 = psVar5[2];
              iVar4 = FUN_0201d4c4(param_1);
              if (sVar7 < *(short *)(iVar4 + 4)) {
                iVar4 = FUN_0201d4c4(param_1);
                sVar7 = *(short *)(iVar4 + 4);
              }
              *(short *)(param_1 + 8) = sVar7;
              if (1 < *(ushort *)(param_1 + 0x14)) {
                FUN_0201d040(param_1,uVar3);
              }
              return 0;
            }
            if (iVar10 == iVar13) {
              *psVar5 = *param_2;
              sVar7 = *psVar5;
              psVar1 = (short *)FUN_0201d4c4(param_1);
              if (*psVar1 < sVar7) {
                psVar1 = (short *)FUN_0201d4c4(param_1);
                sVar7 = *psVar1;
              }
              *(short *)(param_1 + 4) = sVar7;
              if (1 < *(ushort *)(param_1 + 0x14)) {
                FUN_0201d040(param_1,uVar3);
              }
              return 0;
            }
LAB_0201d45c:
            bVar14 = true;
            goto LAB_0201d474;
          }
          if (iVar10 == iVar6) {
            unaff_r10 = (int)psVar5[2];
            unaff_r9 = (int)param_2[2];
          }
          if (iVar10 == iVar6 && unaff_r10 == unaff_r9) {
            if ((int)psVar5[3] == param_4) {
              psVar5[3] = (short)psVar1;
              sVar7 = psVar5[3];
              iVar4 = FUN_0201d4c4(param_1);
              if (sVar7 < *(short *)(iVar4 + 6)) {
                iVar4 = FUN_0201d4c4(param_1);
                sVar7 = *(short *)(iVar4 + 6);
              }
              *(short *)(param_1 + 10) = sVar7;
              if (1 < *(ushort *)(param_1 + 0x14)) {
                FUN_0201d040(param_1,uVar3);
              }
              return 0;
            }
            if (psVar9 == psVar1) {
              psVar5[1] = (short)param_4;
              sVar7 = psVar5[1];
              iVar4 = FUN_0201d4c4(param_1);
              if (*(short *)(iVar4 + 2) < sVar7) {
                iVar4 = FUN_0201d4c4(param_1);
                sVar7 = *(short *)(iVar4 + 2);
              }
              *(short *)(param_1 + 6) = sVar7;
              if (1 < *(ushort *)(param_1 + 0x14)) {
                FUN_0201d040(param_1,uVar3);
              }
              return 0;
            }
            goto LAB_0201d45c;
          }
          unaff_r9 = (int)param_2[2];
          bVar15 = SBORROW4(iVar10,unaff_r9);
          iVar4 = iVar10 - unaff_r9;
          if (unaff_r9 <= iVar10) {
            unaff_r9 = (int)param_2[3];
            bVar15 = SBORROW4((int)psVar9,unaff_r9);
            iVar4 = (int)psVar9 - unaff_r9;
          }
          if (iVar4 < 0 == bVar15) {
            iVar10 = (int)psVar5[2];
            bVar16 = SBORROW4(iVar10,iVar6);
            iVar4 = iVar10 - iVar6;
            bVar15 = iVar10 == iVar6;
            if (iVar10 <= iVar6) {
              psVar5 = (short *)(int)psVar5[3];
              bVar16 = SBORROW4((int)psVar5,(int)psVar12);
              iVar4 = (int)psVar5 - (int)psVar12;
              bVar15 = psVar5 == psVar12;
            }
            if (bVar15 || iVar4 < 0 != bVar16) goto LAB_0201d45c;
          }
          uVar3 = uVar3 + 1;
        } while( true );
      }
    }
  }
  FUN_0201d4e0(param_1,param_2);
  FUN_0201d544(param_1,param_2);
  return 0;
}

