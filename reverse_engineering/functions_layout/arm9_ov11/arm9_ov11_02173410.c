
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02173410(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  short *psVar14;
  int iVar15;
  char cVar16;
  char cVar17;
  int iVar18;
  int iVar19;
  bool bVar20;
  bool bVar21;
  int local_30;
  char local_2c [4];
  undefined4 uStack_28;
  
  uStack_28 = param_4;
  iVar18 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if ((*(byte *)(iVar18 + 0x34) & 0xf) != 0) {
    cVar17 = '\x7f';
    bVar21 = false;
    cVar16 = -0x80;
    local_30 = 0x200;
    for (iVar10 = 0; -1 < (int)(&DAT_021810c0)[iVar10]; iVar10 = iVar10 + 1) {
      if (*(int *)(_DAT_02172960 + 8) == (&DAT_021810c0)[iVar10]) {
        bVar21 = true;
        break;
      }
    }
    *(undefined1 *)(iVar18 + 0x36) = 0xff;
    iVar15 = iVar18 + 0xa8;
    iVar10 = 0;
    *(undefined1 *)(iVar18 + 0x35) = *(undefined1 *)(iVar18 + 0x36);
    do {
      iVar11 = 0;
      do {
        iVar8 = iVar11 * 4;
        iVar11 = iVar11 + 1;
        *(undefined4 *)(iVar15 + iVar8 + 0xdc) = 0xffffffff;
      } while (iVar11 < 4);
      if (*(int *)(iVar15 + 0x20) == 0) {
        *(undefined1 *)(iVar15 + 0x106) = 0xff;
      }
      else {
        if (bVar21) {
          *(char *)(iVar15 + 0x106) = (char)*(undefined4 *)(_DAT_02172960 + iVar10 * 4 + 0x4c);
          cVar2 = *(char *)(iVar15 + 0x106);
          if ((-1 < cVar2) && (cVar2 < '\x04')) {
            if (cVar16 < cVar2) {
              *(char *)(iVar18 + 0x36) = cVar2;
              cVar16 = *(char *)(iVar18 + 0x36);
            }
            if (*(char *)(iVar15 + 0x106) < cVar17) {
              *(char *)(iVar18 + 0x35) = *(char *)(iVar15 + 0x106);
              cVar17 = *(char *)(iVar18 + 0x35);
            }
          }
        }
        else {
          *(undefined1 *)(iVar15 + 0x106) = 0xff;
        }
        iVar11 = -1;
        if (*(int *)(iVar15 + 0x24) != 0) {
          iVar11 = FUN_02173c40();
        }
        if ((0 < iVar11) && (iVar11 < local_30)) {
          *(char *)(iVar18 + 0x37) = (char)iVar10;
          local_30 = iVar11;
        }
        piVar12 = *(int **)(iVar18 + iVar10 * 4 + 0x98);
        puVar4 = &DAT_020afe90;
        iVar8 = iVar18 + 0xa8;
        iVar11 = 0x7fffffff;
        iVar19 = 0;
        do {
          if (iVar10 != iVar19) {
            puVar4 = *(undefined4 **)(iVar8 + 0x20);
          }
          if (iVar10 != iVar19 && puVar4 != (undefined4 *)0x0) {
            piVar5 = *(int **)(iVar18 + iVar19 * 4 + 0x98);
            iVar13 = *piVar12 - *piVar5;
            if (iVar13 < 0) {
              iVar13 = -iVar13;
            }
            iVar6 = piVar12[1] - piVar5[1];
            if (iVar6 < 0) {
              iVar6 = -iVar6;
            }
            iVar13 = iVar13 + iVar6;
            puVar4 = (undefined4 *)(iVar15 + iVar19 * 4);
            puVar4[0x37] = iVar13;
            if (iVar13 < iVar11) {
              puVar4 = *(undefined4 **)(_DAT_02172960 + 0x154);
              bVar20 = puVar4 == (undefined4 *)0x5;
              if (!bVar20) {
                puVar4 = (undefined4 *)(uint)DAT_020afebd;
              }
              if ((bVar20 || puVar4 == (undefined4 *)0x0) ||
                 (puVar4 = (undefined4 *)(int)(char)(&DAT_020afebe)[iVar10],
                 puVar4 != (undefined4 *)(int)(char)(&DAT_020afebe)[iVar19])) {
                *(char *)(iVar15 + 0x107) = (char)iVar19;
                iVar11 = iVar13;
              }
            }
          }
          iVar19 = iVar19 + 1;
          iVar8 = iVar8 + 0x10c;
        } while (iVar19 < 4);
      }
      iVar10 = iVar10 + 1;
      iVar15 = iVar15 + 0x10c;
    } while (iVar10 < 4);
    iVar15 = 0;
    iVar10 = 0;
    do {
      local_2c[iVar15] = '\0';
      iVar15 = iVar15 + 1;
    } while (iVar15 < 4);
    iVar15 = iVar18 + 0xa8;
    do {
      iVar11 = *(int *)(iVar15 + 0x24);
      if (iVar11 != 0) {
        iVar19 = iVar18 + 0xa8;
        iVar8 = 0;
        do {
          piVar12 = *(int **)(iVar19 + 0x24);
          iVar19 = iVar19 + 0x10c;
          bVar21 = piVar12 != (int *)0x0;
          bVar20 = iVar10 != iVar8;
          if (bVar21 && bVar20) {
            piVar12 = (int *)*piVar12;
          }
          iVar8 = iVar8 + 1;
          if ((bVar21 && bVar20) && piVar12 != (int *)0x0) {
            local_2c[*(byte *)(*piVar12 + 0x13)] = local_2c[*(byte *)(*piVar12 + 0x13)] + '\x01';
          }
        } while (iVar8 < 4);
        for (puVar4 = *(undefined4 **)(iVar11 + 0x14); puVar4 != (undefined4 *)0x0;
            puVar4 = (undefined4 *)*puVar4) {
          piVar12 = (int *)puVar4[2];
          iVar11 = 0;
          *(undefined1 *)((int)piVar12 + 0xc6) = 0;
          do {
            pcVar1 = local_2c + iVar11;
            iVar8 = iVar11 + (uint)*(byte *)(*piVar12 + 0x13) * 4;
            iVar11 = iVar11 + 1;
            *(char *)((int)piVar12 + 0xc6) =
                 *(char *)((int)piVar12 + 0xc6) + *pcVar1 * (&DAT_021810b0)[iVar8] * '\x02';
          } while (iVar11 < 3);
        }
      }
      iVar10 = iVar10 + 1;
      iVar15 = iVar15 + 0x10c;
    } while (iVar10 < 4);
    FUN_021768dc();
    iVar10 = *(int *)(iVar18 + 0x14);
    while (iVar10 != 0) {
      FUN_02037c24(iVar18 + 0x14,iVar10);
      FUN_020517fc(iVar10,0,0xc);
      FUN_02037b98(iVar18 + 0x1c,iVar10);
      iVar10 = *(int *)(iVar18 + 0x14);
    }
    for (puVar4 = (undefined4 *)FUN_0208369c(0); puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)*puVar4) {
      iVar10 = puVar4[2];
      if ((((*(uint *)(iVar10 + 0x2c) & 9) == 0) && (*(int *)(*(int *)(iVar10 + 0x10) + 0x70) != 0))
         && ((*(uint *)(*(int *)(iVar10 + 0x10) + 0x34) & 0x2000) != 0)) {
        iVar15 = *(int *)(iVar18 + 0x1c);
        FUN_02037c24(iVar18 + 0x1c,iVar15);
        FUN_02037b98(iVar18 + 0x14,iVar15);
        *(int *)(iVar15 + 8) = iVar10;
      }
    }
    for (puVar4 = (undefined4 *)FUN_0208369c(5); puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)*puVar4) {
      iVar10 = puVar4[2];
      if (((*(uint *)(iVar10 + 0x2c) & 9) == 0) && (*(int *)(*(int *)(iVar10 + 0x10) + 0x70) != 0))
      {
        iVar15 = *(int *)(iVar18 + 0x1c);
        FUN_02037c24(iVar18 + 0x1c,iVar15);
        FUN_02037b98(iVar18 + 0x14,iVar15);
        *(int *)(iVar15 + 8) = iVar10;
      }
    }
    for (puVar4 = *(undefined4 **)(iVar18 + 0x14); puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)*puVar4) {
      iVar10 = FUN_02176834();
      iVar15 = puVar4[2];
      if (iVar15 == 0) goto LAB_02173b18;
      psVar14 = *(short **)(*(int *)(iVar15 + 0x10) + 0x70);
      iVar11 = *(int *)(*(int *)(iVar15 + 0x10) + 0x5c);
      if (psVar14 == (short *)0x0) {
        *(undefined2 *)(iVar10 + 0xe) = 0;
        *(undefined2 *)(iVar10 + 10) = 0;
        *(undefined2 *)(iVar10 + 0xc) = 0;
        *(undefined2 *)(iVar10 + 8) = 0;
        goto LAB_02173b18;
      }
      uVar3 = *(undefined1 *)(iVar15 + 0x39);
      switch(uVar3) {
      case 0:
        break;
      case 1:
        goto LAB_02173a84;
      case 2:
        goto LAB_02173afc;
      case 3:
        goto LAB_02173a84;
      case 4:
        break;
      case 5:
        for (puVar7 = (undefined4 *)FUN_02176848(); puVar7 != (undefined4 *)0x0;
            puVar7 = (undefined4 *)*puVar7) {
          if (*(char *)(puVar7 + 6) == '\x05') {
            iVar15 = *(int *)(iVar11 + 0xc) >> 8;
            if ((*(short *)(puVar7 + 2) <= iVar15) && (iVar15 <= *(short *)(puVar7 + 3))) {
              iVar10 = ((*psVar14 + iVar15) - (psVar14[2] + 0x10)) * 0x10000;
              iVar19 = (int)psVar14[1] + (*(int *)(iVar11 + 0x10) >> 8);
              iVar8 = (iVar19 - (psVar14[3] + 8)) * 0x10000;
              iVar15 = (psVar14[2] + 0x10 + *psVar14 + iVar15) * 0x10000;
              iVar19 = (psVar14[3] + 8 + iVar19) * 0x10000;
              if (iVar10 >> 0x10 < (int)*(short *)(puVar7 + 2)) {
                *(short *)(puVar7 + 2) = (short)((uint)iVar10 >> 0x10);
              }
              if ((int)*(short *)(puVar7 + 3) < iVar15 >> 0x10) {
                *(short *)(puVar7 + 3) = (short)((uint)iVar15 >> 0x10);
              }
              iVar10 = 0;
              if (iVar8 >> 0x10 < (int)*(short *)((int)puVar7 + 10)) {
                *(short *)((int)puVar7 + 10) = (short)((uint)iVar8 >> 0x10);
              }
              if ((int)*(short *)((int)puVar7 + 0xe) < iVar19 >> 0x10) {
                *(short *)((int)puVar7 + 0xe) = (short)((uint)iVar19 >> 0x10);
              }
              *(short *)(puVar7 + 5) =
                   (short)((int)*(short *)(puVar7 + 3) - (int)*(short *)(puVar7 + 2) >> 1);
              *(short *)((int)puVar7 + 0x16) =
                   (short)((int)*(short *)((int)puVar7 + 0xe) - (int)*(short *)((int)puVar7 + 10) >>
                          1);
              *(short *)(puVar7 + 4) = *(short *)(puVar7 + 2) + *(short *)(puVar7 + 5);
              *(short *)((int)puVar7 + 0x12) =
                   *(short *)((int)puVar7 + 10) + *(short *)((int)puVar7 + 0x16);
              break;
            }
          }
        }
        if (iVar10 != 0) {
          *(undefined1 *)(iVar10 + 0x18) = 5;
          *(short *)(iVar10 + 8) =
               (*psVar14 + (short)((uint)*(undefined4 *)(iVar11 + 0xc) >> 8)) - (psVar14[2] + 8);
          *(short *)(iVar10 + 0xc) =
               psVar14[2] + 8 + *psVar14 + (short)((uint)*(undefined4 *)(iVar11 + 0xc) >> 8);
          *(short *)(iVar10 + 10) =
               (psVar14[1] + (short)((uint)*(undefined4 *)(iVar11 + 0x10) >> 8)) - (psVar14[3] + 8);
          *(short *)(iVar10 + 0xe) =
               psVar14[3] + 8 + psVar14[1] + (short)((uint)*(undefined4 *)(iVar11 + 0x10) >> 8);
        }
        break;
      case 6:
        goto LAB_02173a0c;
      case 7:
LAB_02173a0c:
        *(undefined1 *)(iVar10 + 0x18) = uVar3;
        *(short *)(iVar10 + 8) =
             (*psVar14 + (short)((uint)*(undefined4 *)(iVar11 + 0xc) >> 8)) - (psVar14[2] + 0x10);
        *(short *)(iVar10 + 0xc) =
             psVar14[2] + 0x10 + *psVar14 + (short)((uint)*(undefined4 *)(iVar11 + 0xc) >> 8);
        *(short *)(iVar10 + 10) =
             (psVar14[1] + (short)((uint)*(undefined4 *)(iVar11 + 0x10) >> 8)) - (psVar14[3] + 0x10)
        ;
        *(short *)(iVar10 + 0xe) =
             psVar14[3] + 0x40 + psVar14[1] + (short)((uint)*(undefined4 *)(iVar11 + 0x10) >> 8);
        break;
      case 8:
        goto LAB_02173afc;
      case 9:
LAB_02173afc:
        *(byte *)(iVar18 + 0x34) = *(byte *)(iVar18 + 0x34) | 0x10;
        break;
      case 10:
        break;
      case 0xb:
LAB_02173a84:
        *(undefined1 *)(iVar10 + 0x18) = uVar3;
        *(short *)(iVar10 + 8) =
             (*psVar14 - (psVar14[2] + 8)) + (short)((uint)*(undefined4 *)(iVar11 + 0xc) >> 8);
        *(short *)(iVar10 + 0xc) =
             *psVar14 + psVar14[2] + 8 + (short)((uint)*(undefined4 *)(iVar11 + 0xc) >> 8);
        *(short *)(iVar10 + 10) =
             (psVar14[1] - (psVar14[3] + 8)) + (short)((uint)*(undefined4 *)(iVar11 + 0x10) >> 8);
        *(short *)(iVar10 + 0xe) =
             psVar14[1] + psVar14[3] + 8 + (short)((uint)*(undefined4 *)(iVar11 + 0x10) >> 8);
      }
      if (iVar10 != 0) {
        FUN_0217685c(iVar10);
      }
LAB_02173b18:
    }
    for (puVar4 = (undefined4 *)FUN_0208369c(3); puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)*puVar4) {
      iVar10 = FUN_02176834();
      iVar15 = puVar4[2];
      if ((*(uint *)(iVar15 + 0x2c) & 9) == 0) {
        psVar14 = *(short **)(*(int *)(iVar15 + 0x10) + 0x70);
        if ((psVar14 != (short *)0x0) &&
           (iVar11 = *(int *)(*(int *)(iVar15 + 0x10) + 0x5c), psVar14 != (short *)0x0)) {
          sVar9 = *(short *)(*(int *)(iVar15 + 0x30) + 0x20);
          if (sVar9 < 1) {
            sVar9 = 0x30;
          }
          else if (sVar9 < 0x3c) {
            sVar9 = 0x10;
          }
          else {
            sVar9 = 4;
          }
          *(short *)(iVar10 + 8) =
               (*psVar14 + (short)((uint)*(undefined4 *)(iVar11 + 0xc) >> 8)) - (psVar14[2] + sVar9)
          ;
          *(short *)(iVar10 + 10) =
               (psVar14[1] + (short)((uint)*(undefined4 *)(iVar11 + 0x10) >> 8)) -
               (psVar14[3] + sVar9);
          *(short *)(iVar10 + 0xc) =
               *psVar14 + (short)((uint)*(undefined4 *)(iVar11 + 0xc) >> 8) + psVar14[2] + sVar9;
          *(short *)(iVar10 + 0xe) =
               psVar14[1] + (short)((uint)*(undefined4 *)(iVar11 + 0x10) >> 8) + psVar14[3] + sVar9;
          FUN_0217685c();
        }
      }
    }
    FUN_0217f244(iVar18);
    *(undefined4 *)(iVar18 + 0x30) = DAT_020a0f10;
  }
  return;
}

