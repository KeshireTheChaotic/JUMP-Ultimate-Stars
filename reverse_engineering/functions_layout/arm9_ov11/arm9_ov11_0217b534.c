
int FUN_0217b534(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  char *pcVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int extraout_r1;
  int iVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int unaff_r10;
  undefined4 uVar19;
  
  iVar7 = FUN_02175628(*(undefined4 *)(param_1 + 0x1c));
  piVar12 = *(int **)(iVar7 + 4);
  iVar7 = 0;
  uVar15 = 0;
  iVar18 = piVar12[4];
  uVar19 = *(undefined4 *)(**(int **)(param_1 + 0x24) + 0xc);
  iVar17 = -1;
  iVar8 = FUN_0217b078(*(undefined4 *)(param_1 + 0x2c),*(undefined1 *)(param_1 + 0x104));
  if (iVar8 != 0) {
    iVar18 = iVar18 + 0xa8;
    uVar11 = 0;
    do {
      if (param_1 != iVar18) {
        piVar12 = *(int **)(iVar18 + 0x24);
      }
      if (param_1 != iVar18 && piVar12 != (int *)0x0) {
        piVar2 = piVar12 + 1;
        if (((*(uint *)(*piVar12 + 0xa8) & 0x80) != 0) ||
           ((*(uint *)(*piVar12 + 0xa8) & 0x100) != 0)) {
          uVar15 = uVar15 | 1 << (uVar11 & 0xff) & 0xffU;
        }
        piVar12 = (int *)0x0;
        if ((*piVar2 != 0) && (piVar12 = *(int **)(*piVar2 + 0xa8), ((uint)piVar12 & 0x100) != 0)) {
          uVar1 = (1 << (uVar11 & 0xff)) << 4;
          piVar12 = (int *)(uVar15 | uVar1);
          uVar15 = uVar15 | uVar1 & 0xff;
        }
      }
      uVar11 = uVar11 + 1;
      iVar18 = iVar18 + 0x10c;
    } while ((int)uVar11 < 4);
  }
  uVar11 = 0;
  bVar6 = false;
  do {
    bVar4 = *(byte *)(param_2 + uVar11);
    (&DAT_021ac1b8)[uVar11] = 0xff;
    if (((-1 < (char)bVar4) && ((char)bVar4 < '\x18')) &&
       ((*(uint *)(param_1 + 0x4c) & 1 << (uint)bVar4) == 0)) {
      if ((uVar15 & *(uint *)(param_3 + uVar11 * 4)) == 0) {
LAB_0217b698:
        (&DAT_021ac1b8)[iVar7] = *(undefined1 *)(param_2 + uVar11);
        iVar7 = (iVar7 + 1) * 0x1000000 >> 0x18;
      }
      else {
        bVar6 = true;
        uVar9 = FUN_021733b4();
        iVar8 = FUN_0217b7cc(uVar19,uVar9);
        if (iVar8 != 0) {
          bVar5 = false;
          iVar13 = 0;
          iVar18 = iVar8 + 0x9c;
          while (iVar13 < (int)(uint)*(byte *)(iVar8 + 0xc)) {
            pcVar3 = (char *)(iVar18 + 0x18);
            iVar13 = iVar13 + 1;
            iVar18 = iVar18 + 0x20;
            if (*pcVar3 == '\x02' || *pcVar3 == '\x04') {
              bVar5 = true;
            }
          }
          if (bVar5) goto LAB_0217b698;
        }
      }
    }
    uVar11 = uVar11 + 1 & 0xff;
    if (1 < uVar11) {
      if (iVar7 == 0) {
        if (((bVar6) && (iVar7 = FUN_0217ab28(*(undefined4 *)(param_1 + 0x2c),4), iVar7 == 0)) &&
           (*(char *)((int)*(undefined4 **)(param_1 + 0x24) + 0x36) != '\0')) {
          iVar7 = 0x100;
          iVar18 = FUN_02174f4c(**(undefined4 **)(param_1 + 0x24));
          iVar8 = 0;
          do {
            iVar16 = iVar8 + (((iVar18 + -3) * 2 + 0xd) * 0x1000000 >> 0x18);
            uVar9 = FUN_021733b4(iVar16 * 0x1000000 >> 0x18);
            iVar13 = FUN_0217b7cc(uVar19,uVar9);
            iVar14 = iVar13 + 0x9c;
            for (iVar10 = 0; iVar10 < (int)(uint)*(byte *)(iVar13 + 0xc); iVar10 = iVar10 + 1) {
              if (*(char *)(iVar14 + 0x18) == '\x04') {
                unaff_r10 = (int)*(short *)(iVar14 + 0x14);
                break;
              }
              iVar14 = iVar14 + 0x20;
            }
            if (unaff_r10 < iVar7) {
              iVar17 = iVar16 * 0x1000000 >> 0x18;
              iVar7 = unaff_r10;
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < 2);
        }
      }
      else if (iVar7 == 1) {
        iVar17 = (int)DAT_021ac1b8;
      }
      else {
        uVar19 = FUN_02031070(*(undefined4 *)(DAT_020a0da8 + 4));
        FUN_0200d338(uVar19,iVar7);
        iVar17 = (int)(&DAT_021ac1b8)[extraout_r1];
      }
      return iVar17;
    }
  } while( true );
}

