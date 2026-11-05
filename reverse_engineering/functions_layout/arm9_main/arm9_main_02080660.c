
void FUN_02080660(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  short *psVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  
  iVar6 = *(int *)(param_3 + 0xc);
  iVar11 = *(int *)(iVar6 + 0x1c);
  psVar12 = (short *)(param_2 + 0x98);
  iVar9 = 0;
  do {
    if (1 < iVar9) {
      bVar18 = false;
LAB_020806b0:
      if ((!bVar18) && (uVar2 = *(uint *)(param_2 + 0x78), (uVar2 & 0x80000) == 0)) {
        if ((uVar2 & 0x10) == 0) {
          iVar14 = *(int *)(param_3 + 8);
          iVar5 = *(int *)(*(int *)(iVar11 + 0xc) + 0x5c);
          iVar15 = *(int *)(param_2 + 0x5c);
          iVar8 = *(int *)(iVar15 + 0x10) +
                  ((int)*(short *)(iVar14 + 0x2e) + (int)*(short *)(iVar14 + 0x32)) * 0x100;
          iVar10 = *(int *)(iVar5 + 0x10) +
                   ((int)*(short *)(iVar6 + 0x2e) - (int)*(short *)(iVar6 + 0x32)) * 0x100;
          iVar17 = *(int *)(iVar15 + 0xc) + -0x400;
          iVar16 = *(int *)(iVar5 + 0xc) +
                   ((int)*(short *)(iVar6 + 0x2c) - (int)*(short *)(iVar6 + 0x30)) * 0x100;
          iVar7 = *(int *)(iVar5 + 0xc) +
                  ((int)*(short *)(iVar6 + 0x2c) + (int)*(short *)(iVar6 + 0x30)) * 0x100;
          bVar18 = SBORROW4(iVar16,iVar17);
          iVar9 = iVar16 - iVar17;
          iVar13 = *(int *)(iVar15 + 0xc) + 0x400;
          iVar1 = iVar16;
          if (iVar16 <= iVar17) {
            bVar18 = SBORROW4(iVar17,iVar7);
            iVar9 = iVar17 - iVar7;
            iVar1 = iVar7;
          }
          if (iVar1 != iVar17 && iVar9 < 0 == bVar18) {
            bVar18 = SBORROW4(iVar16,iVar13);
            iVar9 = iVar16 - iVar13;
            if (iVar16 <= iVar13) {
              bVar18 = SBORROW4(iVar13,iVar7);
              iVar9 = iVar13 - iVar7;
              iVar16 = iVar7;
            }
            if (iVar16 != iVar13 && iVar9 < 0 == bVar18) {
              return;
            }
          }
          if (((uVar2 & 0x20) == 0) || ((*(uint *)(iVar5 + 0x34) & 0x10) != 0)) {
            iVar9 = 0x1000;
          }
          else if ((uVar2 & 0x2000) == 0) {
            iVar9 = 0;
          }
          else {
            iVar9 = 0x300;
          }
          iVar16 = iVar8 - iVar9 >> 8;
          iVar9 = iVar10 >> 8;
          bVar18 = SBORROW4(iVar16,iVar9);
          iVar7 = iVar16 - iVar9;
          iVar1 = iVar8 >> 8;
          if (iVar16 <= iVar9) {
            bVar18 = SBORROW4(iVar9,iVar1);
            iVar7 = iVar9 - iVar1;
            iVar16 = iVar1;
          }
          if ((iVar16 != iVar9 && iVar7 < 0 == bVar18) &&
             ((iVar16 = *(int *)(iVar15 + 0x18) +
                        ((int)*(short *)(iVar14 + 0x36) + (int)*(short *)(iVar14 + 0x3a)) * 0x100 >>
                        8, iVar9 < iVar16 || (iVar1 < iVar9)))) {
            iVar6 = *(int *)(iVar5 + 0x18) +
                    ((int)*(short *)(iVar6 + 0x36) - (int)*(short *)(iVar6 + 0x3a)) * 0x100 >> 8;
            bVar18 = SBORROW4(iVar16,iVar6);
            iVar9 = iVar16 - iVar6;
            if (iVar16 <= iVar6) {
              bVar18 = SBORROW4(iVar6,iVar1);
              iVar9 = iVar6 - iVar1;
              iVar16 = iVar1;
            }
            if (iVar16 != iVar6 && iVar9 < 0 == bVar18) {
              return;
            }
          }
          if ((uVar2 & 0x20000) == 0) {
            iVar6 = *(int *)(param_1 + 0x20);
            FUN_02037c24(param_1 + 0x20,iVar6);
            *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(iVar11 + 0xc);
            *(int *)(iVar6 + 0xc) = iVar10 - iVar8;
            FUN_02037b98(param_2 + 0x10,iVar6);
            if (*(int *)(iVar6 + 0xc) < *(int *)(param_2 + 0x84)) {
              *(int *)(param_2 + 0x84) = *(int *)(iVar6 + 0xc);
            }
            *(uint *)(param_2 + 0x78) = *(uint *)(param_2 + 0x78) & 0xfffbffff;
          }
          else {
            psVar12 = (short *)(param_2 + 0x98);
            iVar6 = 0;
            do {
              iVar6 = iVar6 + 1;
              if (*psVar12 < 0) {
                *psVar12 = *(short *)(iVar11 + 0x28);
              }
              psVar12 = psVar12 + 1;
            } while (iVar6 < 2);
          }
        }
        else if ((uVar2 & 0x40000) == 0) {
          iVar6 = 0;
          puVar3 = (undefined2 *)(param_2 + 0x94);
          puVar4 = (undefined2 *)(param_2 + 0x98);
          do {
            iVar6 = iVar6 + 1;
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          } while (iVar6 < 2);
          *(uint *)(param_2 + 0x78) = *(uint *)(param_2 + 0x78) | 0x40000;
          *(undefined1 *)(param_2 + 0x9e) = 0;
        }
      }
      return;
    }
    if ((-1 < *psVar12) && (*psVar12 == *(short *)(iVar11 + 0x28))) {
      bVar18 = true;
      goto LAB_020806b0;
    }
    iVar9 = iVar9 + 1;
    psVar12 = psVar12 + 1;
  } while( true );
}

