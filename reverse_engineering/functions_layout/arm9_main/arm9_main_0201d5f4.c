
bool FUN_0201d5f4(int param_1,short *param_2)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int unaff_r4;
  int unaff_r7;
  uint uVar9;
  int iVar10;
  short *psVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  undefined8 uVar20;
  undefined1 auStack_7c [8];
  undefined1 auStack_74 [8];
  undefined1 auStack_6c [8];
  undefined1 auStack_64 [8];
  undefined1 auStack_5c [8];
  undefined1 auStack_54 [8];
  undefined1 auStack_4c [8];
  undefined1 auStack_44 [8];
  undefined1 auStack_3c [8];
  undefined1 auStack_34 [8];
  undefined1 auStack_2c [8];
  
  bVar17 = *param_2 == 0;
  iVar1 = param_1;
  if (bVar17) {
    iVar1 = (int)param_2[2];
  }
  bVar18 = bVar17 && iVar1 == 0;
  if (bVar17 && iVar1 == 0) {
    bVar18 = param_2[1] == 0;
  }
  bVar17 = false;
  if (bVar18) {
    bVar17 = param_2[3] == 0;
  }
  if ((!bVar17) && (*(short *)(param_1 + 0x14) != 0)) {
    iVar16 = 0x201d644;
    uVar20 = FUN_0201d4c4(param_1);
    psVar11 = (short *)uVar20;
    iVar12 = (int)psVar11[2];
    iVar10 = (int)*param_2;
    bVar17 = SBORROW4(iVar10,iVar12);
    iVar1 = iVar10 - iVar12;
    if (iVar10 < iVar12) {
      unaff_r7 = (int)psVar11[3];
      unaff_r4 = (int)param_2[1];
      bVar17 = SBORROW4(unaff_r4,unaff_r7);
      iVar1 = unaff_r4 - unaff_r7;
    }
    if (iVar1 < 0 != bVar17) {
      iVar8 = (int)*psVar11;
      iVar7 = (int)param_2[2];
      bVar18 = SBORROW4(iVar7,iVar8);
      iVar1 = iVar7 - iVar8;
      bVar17 = iVar7 == iVar8;
      if (iVar8 < iVar7) {
        iVar5 = (int)psVar11[1];
        iVar2 = (int)param_2[3];
        uVar20 = CONCAT44(iVar5,iVar2);
        bVar18 = SBORROW4(iVar2,iVar5);
        iVar1 = iVar2 - iVar5;
        bVar17 = iVar2 == iVar5;
      }
      iVar2 = (int)((ulonglong)uVar20 >> 0x20);
      if (!bVar17 && iVar1 < 0 == bVar18) {
        bVar18 = SBORROW4(iVar10,iVar8);
        iVar1 = iVar10 - iVar8;
        bVar17 = iVar10 == iVar8;
        if (iVar10 <= iVar8) {
          bVar18 = SBORROW4(unaff_r4,iVar2);
          iVar1 = unaff_r4 - iVar2;
          bVar17 = unaff_r4 == iVar2;
        }
        if (bVar17 || iVar1 < 0 != bVar18) {
          bVar17 = SBORROW4(iVar7,iVar12);
          iVar1 = iVar7 - iVar12;
          if (iVar12 <= iVar7) {
            bVar17 = SBORROW4((int)uVar20,unaff_r7);
            iVar1 = (int)uVar20 - unaff_r7;
          }
          if (iVar1 < 0 == bVar17) {
            *(undefined2 *)(param_1 + 0x14) = 0;
            return false;
          }
        }
        bVar17 = false;
        uVar9 = 0;
        do {
          uVar13 = (uint)*(ushort *)(param_1 + 0x14);
          if (uVar13 <= uVar9) {
            return bVar17;
          }
          iVar7 = *(int *)(param_1 + 0x10);
          iVar8 = *(int *)(param_1 + 0xc);
          iVar2 = (int)*param_2;
          psVar11 = (short *)(uVar9 * iVar7 + iVar8);
          iVar5 = (int)psVar11[2];
          bVar18 = SBORROW4(iVar2,iVar5);
          iVar1 = iVar2 - iVar5;
          iVar10 = iVar7;
          if (iVar2 < iVar5) {
            iVar16 = (int)psVar11[3];
            iVar10 = (int)param_2[1];
            bVar18 = SBORROW4(iVar10,iVar16);
            iVar1 = iVar10 - iVar16;
          }
          if (iVar1 < 0 != bVar18) {
            iVar14 = (int)*psVar11;
            iVar15 = (int)param_2[2];
            bVar19 = SBORROW4(iVar15,iVar14);
            iVar1 = iVar15 - iVar14;
            bVar18 = iVar15 == iVar14;
            iVar6 = iVar8;
            if (iVar14 < iVar15) {
              iVar6 = (int)psVar11[1];
              iVar12 = (int)param_2[3];
              bVar19 = SBORROW4(iVar12,iVar6);
              iVar1 = iVar12 - iVar6;
              bVar18 = iVar12 == iVar6;
            }
            if (!bVar18 && iVar1 < 0 == bVar19) {
              bVar19 = SBORROW4(iVar2,iVar14);
              iVar1 = iVar2 - iVar14;
              bVar18 = iVar2 == iVar14;
              if (iVar2 <= iVar14) {
                bVar19 = SBORROW4(iVar10,iVar6);
                iVar1 = iVar10 - iVar6;
                bVar18 = iVar10 == iVar6;
              }
              if (bVar18 || iVar1 < 0 != bVar19) {
                bVar18 = SBORROW4(iVar15,iVar5);
                iVar1 = iVar15 - iVar5;
                if (iVar5 <= iVar15) {
                  bVar18 = SBORROW4(iVar12,iVar16);
                  iVar1 = iVar12 - iVar16;
                }
                if (iVar1 < 0 == bVar18) {
                  if (uVar9 != uVar13 - 1) {
                    iVar16 = 0x201d73c;
                    FUN_02017004(psVar11,(uVar13 - 1) * iVar7 + iVar8);
                  }
                  uVar9 = uVar9 - 1;
                  bVar17 = true;
                  *(short *)(param_1 + 0x14) = *(short *)(param_1 + 0x14) + -1;
                  goto LAB_0201dc4c;
                }
              }
              if ((iVar14 < iVar2) || (iVar15 < iVar5)) {
                if ((iVar6 < iVar10) || (iVar12 < iVar16)) {
                  bVar19 = SBORROW4(iVar2,iVar14);
                  iVar1 = iVar2 - iVar14;
                  bVar18 = iVar2 == iVar14;
                  if (iVar14 < iVar2) {
                    bVar19 = SBORROW4(iVar10,iVar6);
                    iVar1 = iVar10 - iVar6;
                    bVar18 = iVar10 == iVar6;
                  }
                  if (!bVar18 && iVar1 < 0 == bVar19) {
                    bVar18 = SBORROW4(iVar15,iVar5);
                    iVar1 = iVar15 - iVar5;
                    if (iVar15 < iVar5) {
                      bVar18 = SBORROW4(iVar12,iVar16);
                      iVar1 = iVar12 - iVar16;
                    }
                    if (iVar1 < 0 != bVar18) {
                      if (uVar13 == 1) {
                        FUN_02017004(param_1 + 4,psVar11);
                      }
                      FUN_0201dc68(auStack_3c,(int)*psVar11,(int)param_2[3],(int)psVar11[2],
                                   (int)psVar11[3]);
                      FUN_0201d544(param_1,auStack_3c);
                      FUN_0201dc68(auStack_44,
                                   (int)*(short *)(*(int *)(param_1 + 0xc) +
                                                  uVar9 * *(int *)(param_1 + 0x10)),(int)param_2[1],
                                   (int)*param_2,(int)param_2[3]);
                      FUN_0201d544(param_1,auStack_44);
                      FUN_0201dc68(auStack_4c,(int)param_2[2],(int)param_2[1],
                                   (int)*(short *)(uVar9 * *(int *)(param_1 + 0x10) +
                                                   *(int *)(param_1 + 0xc) + 4),(int)param_2[3]);
                      iVar16 = 0x201da10;
                      FUN_0201d544(param_1,auStack_4c);
                      *(short *)(uVar9 * *(int *)(param_1 + 0x10) + *(int *)(param_1 + 0xc) + 6) =
                           param_2[1];
                      goto LAB_0201dc4c;
                    }
                  }
                  if (uVar13 == 1) {
                    FUN_02017004(param_1 + 4,psVar11);
                  }
                  iVar12 = (int)*param_2;
                  iVar16 = (int)*psVar11;
                  bVar18 = SBORROW4(iVar16,iVar12);
                  iVar1 = iVar16 - iVar12;
                  if (iVar16 < iVar12) {
                    bVar18 = SBORROW4((int)param_2[2],(int)psVar11[2]);
                    iVar1 = (int)param_2[2] - (int)psVar11[2];
                  }
                  if (iVar1 < 0 == bVar18) {
                    bVar18 = SBORROW4(iVar12,iVar16);
                    iVar1 = iVar12 - iVar16;
                    if (iVar16 <= iVar12) {
                      bVar18 = SBORROW4((int)param_2[2],(int)psVar11[2]);
                      iVar1 = (int)param_2[2] - (int)psVar11[2];
                    }
                    if (iVar1 < 0 == bVar18) {
                      FUN_0201dc68(auStack_74,iVar16,(int)psVar11[1],iVar12,(int)psVar11[3]);
                      iVar16 = 0x201dbc4;
                      FUN_0201d544(param_1,auStack_74);
                      iVar1 = uVar9 * *(int *)(param_1 + 0x10);
                      iVar10 = *(int *)(param_1 + 0xc);
                      *(short *)(iVar10 + iVar1) = *param_2;
                      psVar11 = (short *)(iVar10 + iVar1);
                    }
                    else {
                      FUN_0201dc68(auStack_6c,(int)param_2[2],(int)psVar11[1],(int)psVar11[2],
                                   (int)psVar11[3]);
                      iVar16 = 0x201db88;
                      FUN_0201d544(param_1,auStack_6c);
                      psVar11 = (short *)(uVar9 * *(int *)(param_1 + 0x10) + *(int *)(param_1 + 0xc)
                                         );
                      psVar11[2] = param_2[2];
                    }
                    iVar10 = (int)param_2[1];
                    sVar4 = psVar11[1];
                    iVar1 = (int)sVar4;
                    if (iVar1 < iVar10) {
                      if ((int)param_2[3] < (int)psVar11[3]) {
                        FUN_0201dc68(auStack_7c,(int)*psVar11,(int)param_2[3],(int)psVar11[2],
                                     (int)psVar11[3]);
                        iVar16 = 0x201dc1c;
                        FUN_0201d544(param_1,auStack_7c);
                        *(short *)(uVar9 * *(int *)(param_1 + 0x10) + *(int *)(param_1 + 0xc) + 6) =
                             param_2[1];
                        goto LAB_0201dc4c;
                      }
                    }
                    bVar18 = SBORROW4(iVar1,iVar10);
                    iVar7 = iVar1 - iVar10;
                    if (iVar10 <= iVar1) {
                      sVar4 = param_2[3];
                      bVar18 = SBORROW4((int)psVar11[3],(int)sVar4);
                      iVar7 = (int)psVar11[3] - (int)sVar4;
                    }
                    if (iVar7 < 0 == bVar18) {
                      psVar11[1] = sVar4;
                    }
                    else {
                      psVar11[3] = param_2[1];
                    }
                  }
                  else {
                    iVar10 = (int)psVar11[1];
                    iVar7 = (int)param_2[1];
                    bVar18 = SBORROW4(iVar7,iVar10);
                    iVar1 = iVar7 - iVar10;
                    if (iVar10 <= iVar7) {
                      iVar12 = (int)param_2[3];
                      bVar18 = SBORROW4(iVar12,(int)psVar11[3]);
                      iVar1 = iVar12 - psVar11[3];
                    }
                    if (iVar1 < 0 == bVar18) {
                      FUN_0201dc68(auStack_5c);
                      iVar16 = 0x201dac4;
                      FUN_0201d544(param_1,auStack_5c);
                      iVar1 = *(int *)(param_1 + 0x10);
                      psVar11 = (short *)(uVar9 * iVar1 + *(int *)(param_1 + 0xc));
                      psVar11[1] = param_2[1];
                    }
                    else {
                      FUN_0201dc68(auStack_54,iVar16,(int)param_2[3]);
                      iVar16 = 0x201da94;
                      FUN_0201d544(param_1,auStack_54);
                      iVar1 = *(int *)(param_1 + 0x10);
                      psVar11 = (short *)(uVar9 * iVar1 + *(int *)(param_1 + 0xc));
                      psVar11[3] = param_2[3];
                    }
                    sVar4 = (short)iVar1;
                    iVar10 = (int)*param_2;
                    iVar1 = (int)*psVar11;
                    if (iVar1 < iVar10) {
                      sVar4 = param_2[2];
                      if ((int)sVar4 < (int)psVar11[2]) {
                        FUN_0201dc68(auStack_64,(int)sVar4,(int)psVar11[1],(int)psVar11[2],
                                     (int)psVar11[3]);
                        iVar16 = 0x201db18;
                        FUN_0201d544(param_1,auStack_64);
                        *(short *)(uVar9 * *(int *)(param_1 + 0x10) + *(int *)(param_1 + 0xc) + 4) =
                             *param_2;
                        goto LAB_0201dc4c;
                      }
                    }
                    bVar18 = SBORROW4(iVar1,iVar10);
                    iVar7 = iVar1 - iVar10;
                    if (iVar10 <= iVar1) {
                      sVar4 = param_2[2];
                      bVar18 = SBORROW4((int)psVar11[2],(int)sVar4);
                      iVar7 = (int)psVar11[2] - (int)sVar4;
                    }
                    if (iVar7 < 0 == bVar18) {
                      *psVar11 = sVar4;
                    }
                    else {
                      psVar11[2] = *param_2;
                    }
                  }
                }
                else if ((iVar14 < iVar2) && (iVar15 < iVar5)) {
                  if (uVar13 == 1) {
                    FUN_02017004(param_1 + 4,psVar11);
                  }
                  FUN_0201dc68(auStack_34,(int)param_2[2],(int)psVar11[1],(int)psVar11[2],
                               (int)psVar11[3]);
                  iVar16 = 0x201d8b0;
                  FUN_0201d544(param_1,auStack_34);
                  *(short *)(uVar9 * *(int *)(param_1 + 0x10) + *(int *)(param_1 + 0xc) + 4) =
                       *param_2;
                }
                else {
                  bVar18 = SBORROW4(iVar14,iVar2);
                  iVar1 = iVar14 - iVar2;
                  if (iVar2 <= iVar14) {
                    bVar18 = SBORROW4(iVar5,iVar15);
                    iVar1 = iVar5 - iVar15;
                  }
                  if (iVar1 < 0 == bVar18) {
                    if (uVar13 < 2) {
LAB_0201d938:
                      bVar18 = false;
                    }
                    else {
                      iVar16 = 0x201d924;
                      psVar3 = (short *)FUN_0201d4c4(param_1);
                      if (*psVar11 != *psVar3) goto LAB_0201d938;
                      bVar18 = true;
                    }
                    bVar17 = bVar17 != false || bVar18;
                    *psVar11 = param_2[2];
                  }
                  else {
                    if (uVar13 < 2) {
LAB_0201d8f8:
                      bVar18 = false;
                    }
                    else {
                      iVar16 = 0x201d8e4;
                      iVar1 = FUN_0201d4c4(param_1);
                      if (psVar11[2] != *(short *)(iVar1 + 4)) goto LAB_0201d8f8;
                      bVar18 = true;
                    }
                    bVar17 = bVar17 != false || bVar18;
                    psVar11[2] = *param_2;
                  }
                }
              }
              else {
                if ((iVar6 < iVar10) && (iVar12 < iVar16)) {
                  if (uVar13 == 1) {
                    FUN_02017004(param_1 + 4,psVar11);
                  }
                  FUN_0201dc68(auStack_2c,(int)*psVar11,(int)param_2[3],(int)psVar11[2],
                               (int)psVar11[3]);
                  iVar16 = 0x201d7b0;
                  FUN_0201d544(param_1,auStack_2c);
                  *(short *)(uVar9 * *(int *)(param_1 + 0x10) + *(int *)(param_1 + 0xc) + 6) =
                       param_2[1];
                  goto LAB_0201dc4c;
                }
                bVar18 = SBORROW4(iVar6,iVar10);
                iVar1 = iVar6 - iVar10;
                if (iVar10 <= iVar6) {
                  bVar18 = SBORROW4(iVar16,iVar12);
                  iVar1 = iVar16 - iVar12;
                }
                if (iVar1 < 0 == bVar18) {
                  if (uVar13 < 2) {
LAB_0201d838:
                    bVar18 = false;
                  }
                  else {
                    iVar16 = 0x201d824;
                    iVar1 = FUN_0201d4c4(param_1);
                    if (psVar11[1] != *(short *)(iVar1 + 2)) goto LAB_0201d838;
                    bVar18 = true;
                  }
                  bVar17 = bVar17 != false || bVar18;
                  psVar11[1] = param_2[3];
                  goto LAB_0201dc4c;
                }
                if (uVar13 < 2) {
LAB_0201d7f8:
                  bVar18 = false;
                }
                else {
                  iVar16 = 0x201d7e4;
                  iVar1 = FUN_0201d4c4(param_1);
                  if (psVar11[3] != *(short *)(iVar1 + 6)) goto LAB_0201d7f8;
                  bVar18 = true;
                }
                bVar17 = bVar17 != false || bVar18;
                psVar11[3] = param_2[1];
              }
            }
          }
LAB_0201dc4c:
          uVar9 = uVar9 + 1;
        } while( true );
      }
    }
  }
  return false;
}

