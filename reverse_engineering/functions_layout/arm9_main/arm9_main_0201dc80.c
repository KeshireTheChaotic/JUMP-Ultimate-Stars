
void FUN_0201dc80(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  ushort uVar2;
  short *psVar3;
  uint uVar4;
  int iVar5;
  short *psVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  short sVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  int unaff_r10;
  int iVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  bool bVar19;
  int local_140;
  short local_130;
  short sStack_12e;
  short local_12c;
  short sStack_12a;
  uint local_128 [32];
  short local_a8 [64];
  undefined4 uStack_28;
  
  if (*(short *)(param_2 + 0x14) == 0) {
    *(undefined2 *)(param_1 + 0x14) = 0;
  }
  else if (*(short *)(param_1 + 0x14) != 0) {
    uStack_28 = param_4;
    psVar3 = (short *)FUN_0201d4c4(param_2);
    iVar7 = (int)*psVar3;
    iVar5 = (int)*(short *)(param_1 + 8);
    bVar19 = SBORROW4(iVar7,iVar5);
    iVar9 = iVar7 - iVar5;
    bVar18 = iVar7 == iVar5;
    if (iVar7 <= iVar5) {
      iVar7 = (int)psVar3[1];
      iVar5 = (int)*(short *)(param_1 + 10);
      bVar19 = SBORROW4(iVar7,iVar5);
      iVar9 = iVar7 - iVar5;
      bVar18 = iVar7 == iVar5;
    }
    if (bVar18 || iVar9 < 0 != bVar19) {
      iVar7 = (int)psVar3[2];
      iVar5 = (int)*(short *)(param_1 + 4);
      bVar18 = SBORROW4(iVar7,iVar5);
      iVar9 = iVar7 - iVar5;
      if (iVar5 <= iVar7) {
        bVar18 = SBORROW4((int)psVar3[3],(int)*(short *)(param_1 + 6));
        iVar9 = (int)psVar3[3] - (int)*(short *)(param_1 + 6);
      }
      if (iVar9 < 0 == bVar18) {
        uVar11 = 0;
        uVar12 = 0;
        do {
          uVar4 = (uint)*(ushort *)(param_1 + 0x14);
          if (uVar4 <= uVar12) {
            if (uVar11 != 0) {
              for (uVar12 = 0; uVar12 < uVar11; uVar12 = uVar12 + 1) {
                FUN_0201d544(param_1,local_a8 + uVar12 * 4);
              }
            }
            FUN_0201d558(param_1);
            return;
          }
          iVar15 = *(int *)(param_1 + 0x10);
          iVar7 = *(int *)(param_1 + 0xc);
          iVar14 = (int)*(short *)(iVar7 + uVar12 * iVar15);
          iVar5 = (int)*(short *)(param_1 + 8);
          psVar3 = (short *)(iVar7 + uVar12 * iVar15);
          bVar19 = SBORROW4(iVar14,iVar5);
          iVar9 = iVar14 - iVar5;
          bVar18 = iVar14 == iVar5;
          if (iVar14 <= iVar5) {
            unaff_r10 = (int)psVar3[1];
            iVar5 = (int)*(short *)(param_1 + 10);
            bVar19 = SBORROW4(unaff_r10,iVar5);
            iVar9 = unaff_r10 - iVar5;
            bVar18 = unaff_r10 == iVar5;
          }
          if (bVar18 || iVar9 < 0 != bVar19) {
            iVar5 = (int)psVar3[2];
            iVar8 = (int)*(short *)(param_1 + 4);
            bVar18 = SBORROW4(iVar5,iVar8);
            iVar9 = iVar5 - iVar8;
            if (iVar8 <= iVar5) {
              local_140 = (int)psVar3[3];
              bVar18 = SBORROW4(local_140,(int)*(short *)(param_1 + 6));
              iVar9 = local_140 - *(short *)(param_1 + 6);
            }
            if (iVar9 < 0 != bVar18) goto LAB_0201dd60;
            uVar2 = *(ushort *)(param_2 + 0x14);
            uVar17 = 0;
            for (uVar16 = 0; uVar16 < uVar2; uVar16 = uVar16 + 1) {
              psVar6 = (short *)(uVar16 * *(int *)(param_2 + 0x10) + *(int *)(param_2 + 0xc));
              iVar8 = (int)psVar6[2];
              bVar19 = SBORROW4(iVar14,iVar8);
              iVar9 = iVar14 - iVar8;
              bVar18 = iVar14 == iVar8;
              if (iVar14 <= iVar8) {
                iVar8 = (int)psVar6[3];
                bVar19 = SBORROW4(unaff_r10,iVar8);
                iVar9 = unaff_r10 - iVar8;
                bVar18 = unaff_r10 == iVar8;
              }
              if (bVar18 || iVar9 < 0 != bVar19) {
                iVar8 = (int)*psVar6;
                bVar18 = SBORROW4(iVar5,iVar8);
                iVar9 = iVar5 - iVar8;
                if (iVar8 <= iVar5) {
                  bVar18 = SBORROW4(local_140,(int)psVar6[1]);
                  iVar9 = local_140 - psVar6[1];
                }
                if (iVar9 < 0 == bVar18) {
                  local_128[uVar17] = uVar16;
                  uVar17 = uVar17 + 1;
                }
              }
            }
            if (uVar17 == 0) {
              FUN_02017004(psVar3,(uVar4 - 1) * iVar15 + iVar7);
              uVar12 = uVar12 - 1;
              *(short *)(param_1 + 0x14) = *(short *)(param_1 + 0x14) + -1;
            }
            else {
              psVar6 = (short *)(local_128[0] * *(int *)(param_2 + 0x10) + *(int *)(param_2 + 0xc));
              iVar9 = (int)psVar6[1];
              if (uVar17 == 1) {
                if (unaff_r10 <= iVar9) {
                  unaff_r10 = iVar9;
                }
                psVar3[1] = (short)unaff_r10;
                sVar10 = psVar3[3];
                if (psVar6[3] <= psVar3[3]) {
                  sVar10 = psVar6[3];
                }
                psVar3[3] = sVar10;
                sVar10 = *psVar3;
                if (*psVar3 <= *psVar6) {
                  sVar10 = *psVar6;
                }
                *psVar3 = sVar10;
                sVar10 = psVar3[2];
                if (psVar6[2] <= psVar3[2]) {
                  sVar10 = psVar6[2];
                }
                psVar3[2] = sVar10;
              }
              else {
                uVar13 = *(undefined4 *)psVar3;
                sVar10 = psVar3[1];
                if (psVar3[1] <= iVar9) {
                  sVar10 = psVar6[1];
                }
                psVar3[1] = sVar10;
                local_130 = (short)uVar13;
                sVar10 = psVar3[3];
                if (psVar6[3] <= psVar3[3]) {
                  sVar10 = psVar6[3];
                }
                psVar3[3] = sVar10;
                local_12c = (short)*(undefined4 *)(psVar3 + 2);
                sVar10 = *psVar3;
                if (*psVar3 <= *psVar6) {
                  sVar10 = *psVar6;
                }
                *psVar3 = sVar10;
                sStack_12a = (short)((uint)*(undefined4 *)(psVar3 + 2) >> 0x10);
                sVar10 = psVar3[2];
                if (psVar6[2] <= psVar3[2]) {
                  sVar10 = psVar6[2];
                }
                psVar3[2] = sVar10;
                sStack_12e = (short)((uint)uVar13 >> 0x10);
                uVar4 = 1;
                while (uVar4 < uVar17) {
                  puVar1 = local_128 + uVar4;
                  uVar4 = uVar4 + 1;
                  psVar3 = (short *)(*puVar1 * *(int *)(param_2 + 0x10) + *(int *)(param_2 + 0xc));
                  sVar10 = psVar3[1];
                  if (psVar3[1] < sStack_12e) {
                    sVar10 = sStack_12e;
                  }
                  local_a8[uVar11 * 4 + 1] = sVar10;
                  sVar10 = psVar3[3];
                  if (sStack_12a < psVar3[3]) {
                    sVar10 = sStack_12a;
                  }
                  local_a8[uVar11 * 4 + 3] = sVar10;
                  sVar10 = *psVar3;
                  if (*psVar3 < local_130) {
                    sVar10 = local_130;
                  }
                  local_a8[uVar11 * 4] = sVar10;
                  unaff_r10 = (int)psVar3[2];
                  if ((int)local_12c < (int)psVar3[2]) {
                    unaff_r10 = (int)local_12c;
                  }
                  local_a8[uVar11 * 4 + 2] = (short)unaff_r10;
                  uVar11 = uVar11 + 1;
                }
              }
            }
          }
          else {
LAB_0201dd60:
            FUN_02017004(psVar3,(uVar4 - 1) * iVar15 + iVar7);
            uVar12 = uVar12 - 1;
            *(short *)(param_1 + 0x14) = *(short *)(param_1 + 0x14) + -1;
          }
          uVar12 = uVar12 + 1;
        } while( true );
      }
    }
    *(undefined2 *)(param_1 + 0x14) = 0;
  }
  return;
}

