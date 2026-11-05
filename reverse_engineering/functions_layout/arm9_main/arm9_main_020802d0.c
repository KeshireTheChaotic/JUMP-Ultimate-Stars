
void FUN_020802d0(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  short *psVar11;
  undefined1 *puVar12;
  int iVar13;
  int iVar14;
  short sVar15;
  undefined2 *puVar16;
  bool bVar17;
  undefined1 auStack_34 [4];
  int local_30;
  
  puVar10 = *(undefined4 **)(param_1 + 0x80);
  do {
    if (puVar10 == (undefined4 *)0x0) {
      return;
    }
    iVar14 = puVar10[2];
    bVar1 = false;
    iVar8 = *(int *)(iVar14 + 0x5c);
    puVar6 = *(undefined4 **)(iVar14 + 0x10);
    iVar9 = 0;
    iVar7 = 0x400;
    while (puVar6 != (undefined4 *)0x0) {
      iVar13 = puVar6[2];
      if ((int)puVar6[3] <= *(int *)(iVar14 + 0x84)) {
        iVar3 = 0;
        psVar11 = (short *)(iVar14 + 0x90);
        puVar16 = (undefined2 *)(iVar14 + 0x98);
        puVar12 = (undefined1 *)(iVar14 + 0x9c);
        while( true ) {
          if ((1 < iVar3) || (*psVar11 == *(short *)(iVar13 + 0xa0))) goto LAB_0208036c;
          if (*psVar11 < 0) break;
          iVar3 = iVar3 + 1;
          psVar11 = psVar11 + 1;
          puVar16 = puVar16 + 1;
          puVar12 = puVar12 + 1;
        }
        *psVar11 = *(short *)(iVar13 + 0xa0);
        *puVar16 = 0xffff;
        *puVar12 = 0xc;
      }
LAB_0208036c:
      puVar6 = (undefined4 *)*puVar6;
      iVar3 = *(int *)(iVar13 + 0x7c) - *(int *)(iVar8 + 0x10);
      if (iVar3 <= iVar7) {
        iVar9 = iVar13;
        iVar7 = iVar3;
      }
    }
    if (iVar9 != 0) {
      psVar11 = (short *)(iVar14 + 0x94);
      sVar15 = -1;
      iVar13 = 0;
      do {
        if (-1 < *psVar11) {
          uVar2 = FUN_0207d310(param_1,(int)*psVar11,auStack_34);
          iVar3 = FUN_0207d200(param_1,uVar2);
          if ((iVar3 == 0) &&
             ((iVar3 = local_30 - *(int *)(iVar8 + 0x10),
              (*(uint *)(*(int *)(iVar9 + 0x5c) + 0x34) & 4) != 0 || (iVar3 < iVar7)))) {
            iVar4 = *(int *)(iVar14 + 0x70);
            bVar17 = iVar4 != 0;
            iVar5 = 0;
            iVar7 = iVar3;
            if (bVar17) {
              iVar7 = (int)*(short *)(iVar4 + 2);
              iVar5 = (int)*(short *)(iVar4 + 6);
            }
            sVar15 = *psVar11;
            if (bVar17) {
              iVar5 = iVar7 + iVar5;
            }
            iVar4 = *(int *)(iVar14 + 0x5c);
            iVar7 = local_30;
            if (bVar17) {
              iVar7 = local_30 + iVar5 * -0x100;
            }
            *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(iVar4 + 0x14);
            *(int *)(iVar4 + 0x10) = iVar7;
            iVar7 = iVar3;
          }
        }
        iVar13 = iVar13 + 1;
        psVar11 = psVar11 + 1;
      } while (iVar13 < 2);
      if (sVar15 == -1) {
        bVar1 = true;
      }
    }
    if (bVar1) {
      *(uint *)(iVar14 + 0x78) = *(uint *)(iVar14 + 0x78) | 0x202;
      if (((*(uint *)(iVar14 + 0x34) & 0xf) != 0) && ((*(uint *)(iVar14 + 0x34) & 0xfffff0) == 0)) {
        *(uint *)(iVar9 + 0x78) = *(uint *)(iVar9 + 0x78) | 1;
      }
      FUN_020804e8(*(undefined4 *)(iVar14 + 0x5c),*(undefined4 *)(iVar8 + 0xc));
      FUN_0207bef4(iVar9,iVar14,0);
    }
    puVar10 = (undefined4 *)*puVar10;
  } while( true );
}

