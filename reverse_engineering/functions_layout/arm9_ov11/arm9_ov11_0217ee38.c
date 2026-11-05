
/* WARNING: Type propagation algorithm not settling */

void FUN_0217ee38(void)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  short *psVar17;
  bool bVar18;
  
  iVar5 = FUN_02175628();
  iVar5 = *(int *)(*(int *)(iVar5 + 4) + 0x10);
  if ((*(uint *)(iVar5 + 0xd4) & 1) == 0) {
    return;
  }
  iVar6 = FUN_0217fe50(iVar5);
  if (iVar6 != 0) {
    return;
  }
  bVar18 = false;
  *(undefined1 *)(iVar5 + 0x7f) = 0;
  if ((*(char *)(iVar5 + 0x108) == '\x01') && ((*(uint *)(iVar5 + 0xd4) & 0x100) == 0)) {
    if ((*(char *)(iVar5 + 0x105) == '\t') || (iVar6 = FUN_0217bfe0(iVar5), iVar6 == 0)) {
      iVar6 = FUN_02173318(iVar5);
      if (iVar6 == 0) {
        iVar6 = *(int *)(*(int *)(*(int *)(iVar5 + 0x20) + 0x1a8) + 0x10);
        psVar17 = *(short **)(iVar6 + 0x70);
        if (psVar17 == (short *)0x0) {
          bVar18 = false;
        }
        else {
          sVar1 = *psVar17;
          iVar14 = *(int *)(*(int *)(iVar6 + 0x5c) + 0xc);
          iVar12 = *(int *)(*(int *)(iVar6 + 0x5c) + 0x10);
          sVar2 = psVar17[1];
          sVar3 = psVar17[2];
          sVar4 = psVar17[3];
          uVar15 = *(uint *)(iVar6 + 0x34);
          iVar6 = **(int **)(iVar5 + 0x14);
          for (puVar7 = (undefined4 *)FUN_0208369c(0); puVar7 != (undefined4 *)0x0;
              puVar7 = (undefined4 *)*puVar7) {
            if (((*(uint *)(puVar7[2] + 0x2c) & 1) == 0) &&
               (iVar10 = *(int *)(puVar7[2] + 0x10), (uVar15 & *(uint *)(iVar10 + 0x3c)) == 0)) {
              psVar17 = *(short **)(iVar10 + 0x70);
              if (psVar17 != (short *)0x0) {
                iVar11 = (iVar14 + sVar1 * 0x100) -
                         (*(int *)(*(int *)(iVar10 + 0x5c) + 0xc) + *psVar17 * 0x100);
                if (iVar11 < 0) {
                  iVar11 = -iVar11;
                }
                if (iVar11 <= (psVar17[2] + 0x18) * 0x100 + sVar3 * 0x100) {
                  iVar10 = (iVar12 + sVar2 * 0x100) -
                           (*(int *)(*(int *)(iVar10 + 0x5c) + 0x10) + psVar17[1] * 0x100);
                  if (iVar10 < 0) {
                    iVar10 = -iVar10;
                  }
                  if (iVar10 <= (psVar17[3] + 0x18) * 0x100 + sVar4 * 0x100) {
                    FUN_0217ec78(*(undefined4 *)(iVar5 + 0x24));
                    FUN_02176d14();
                    FUN_0217aa58(iVar5);
                    *(undefined4 *)(iVar6 + 0xe8) = 2;
                    bVar18 = true;
                    *(undefined1 *)(iVar5 + 0x7f) = 1;
                    goto LAB_0217efd0;
                  }
                }
              }
            }
          }
          bVar18 = false;
        }
      }
      else {
        bVar18 = false;
      }
    }
    else {
      bVar18 = false;
    }
  }
LAB_0217efd0:
  if (bVar18) {
    return;
  }
  iVar6 = FUN_02175628(*(undefined4 *)(iVar5 + 0x1c));
  uVar15 = *(uint *)(iVar5 + 0xd4) >> 0x1c;
  iVar6 = *(int *)(*(int *)(iVar6 + 4) + 0x10);
  uVar13 = 0;
  if (((*(char *)(iVar5 + 0x108) == '\x01') && ((*(uint *)(iVar5 + 0xd4) & 0x100) == 0)) &&
     ((*(char *)(iVar5 + 0x105) == '\t' || (iVar12 = FUN_0217bfe0(iVar5), iVar12 == 0)))) {
    uVar8 = FUN_02173318(iVar5);
    bVar18 = uVar8 == 0;
    if (bVar18) {
      uVar8 = (uint)*(byte *)(iVar5 + 0x7c);
    }
    if (bVar18 && uVar8 == 0) {
      uVar16 = 0;
      *(undefined1 *)(iVar5 + 0x7c) = 0;
      uVar8 = *(uint *)(*(int *)(iVar5 + 0x2c) + 0x34);
      if ((uVar8 & 0x2000) == 0) {
        iVar12 = iVar6 + 0xa8;
        do {
          if (uVar15 != uVar16) {
            uVar8 = *(uint *)(iVar12 + 0x24);
          }
          if (uVar15 != uVar16 && uVar8 != 0) {
            uVar9 = FUN_0217e9c4();
            uVar8 = FUN_0217e9d8(*(undefined4 *)(iVar12 + 0x24));
            uVar13 = uVar13 | uVar9 | uVar8;
          }
          uVar16 = uVar16 + 1;
          iVar12 = iVar12 + 0x10c;
        } while ((int)uVar16 < 4);
      }
      if (((uVar13 & 1 << uVar15) == 0) || (iVar12 = FUN_0217e3b0(iVar5), iVar12 == 0)) {
        if (-1 < *(char *)(iVar5 + 0x38)) {
          iVar12 = *(char *)(iVar5 + 0x38) * 0x10c + iVar6 + 0xa8;
          iVar6 = FUN_0217bfe0(iVar12);
          if (iVar6 != 0) {
            if (**(int **)(iVar12 + 0x24) == 0) {
              bVar18 = false;
            }
            else {
              bVar18 = (*(uint *)(**(int **)(iVar12 + 0x24) + 0xa8) & 0x10) != 0;
            }
            if ((((!bVar18) && (iVar6 = FUN_0217ab68(iVar5), iVar6 == 0)) &&
                (iVar6 = FUN_0217bfe0(iVar5), iVar6 == 0)) && (*(char *)(iVar5 + 0x7c) != '\x04')) {
              if (**(int **)(iVar12 + 0x24) == 0) {
                bVar18 = false;
              }
              else {
                bVar18 = (*(uint *)(**(int **)(iVar12 + 0x24) + 0xa8) & 8) != 0;
              }
              if (((!bVar18) && ((*(uint *)(iVar5 + 0xd4) & 0x1000) == 0)) &&
                 (iVar6 = FUN_0217e3f4(*(undefined4 *)(iVar5 + 0x2c),
                                       *(char *)(iVar5 + 0x104) + '\x01'), iVar6 != 0)) {
                FUN_0217ab4c(iVar5,*(undefined1 *)(iVar5 + 0x38));
                *(uint *)(iVar5 + 0xd4) = *(uint *)(iVar5 + 0xd4) | 0x1000;
              }
            }
          }
        }
      }
      else {
        FUN_0217ec78(*(undefined4 *)(iVar5 + 0x24));
        FUN_02176d14();
        FUN_0217aa58(iVar5);
        *(undefined1 *)(iVar5 + 0x7c) = 1;
        *(undefined1 *)(iVar5 + 0x7d) = 0;
      }
    }
  }
  (**(code **)(&DAT_02181a30 + (uint)*(byte *)(iVar5 + 0x7c) * 4))(iVar5);
  return;
}

