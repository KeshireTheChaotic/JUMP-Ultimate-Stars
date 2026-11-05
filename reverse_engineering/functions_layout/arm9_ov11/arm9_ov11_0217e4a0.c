
void FUN_0217e4a0(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  bool bVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  char cVar16;
  uint uVar17;
  uint uVar18;
  undefined4 *puVar19;
  undefined4 uVar20;
  int iVar21;
  bool bVar22;
  int local_34;
  
  if ((*(uint *)(param_1 + 0xd4) & 0x100) == 0) {
    FUN_020517fc(param_1 + 0x58,0,0x24);
    iVar13 = 0;
    do {
      iVar9 = iVar13 * 0xc;
      iVar13 = iVar13 + 1;
      *(undefined1 *)(iVar9 + param_1 + 0x62) = 0xff;
    } while (iVar13 < 3);
    iVar13 = FUN_02175628(*(undefined4 *)(param_1 + 0x1c));
    uVar17 = *(uint *)(param_1 + 0xd4) >> 0x1c;
    iVar13 = *(int *)(*(int *)(iVar13 + 4) + 0x10) + 0xa8;
    uVar18 = 0;
    do {
      uVar8 = uVar17;
      if (uVar17 != uVar18) {
        uVar8 = *(uint *)(iVar13 + 0x24);
      }
      if ((uVar17 != uVar18 && uVar8 != 0) &&
         ((iVar9 = FUN_0217e9c4(), iVar9 != 0 ||
          (iVar9 = FUN_0217e9d8(*(undefined4 *)(iVar13 + 0x24)), iVar9 != 0)))) {
        local_34 = 0;
        do {
          if (local_34 == 0) {
            iVar9 = FUN_0217e9c4(*(undefined4 *)(iVar13 + 0x24));
            if (iVar9 != 0) {
              iVar15 = **(int **)(iVar13 + 0x24);
              uVar10 = *(undefined4 *)(iVar15 + 0xc);
              FUN_0217e9ec();
              uVar20 = FUN_021733b4();
              iVar9 = FUN_0217e9a0(uVar10,uVar20);
              goto LAB_0217e5d0;
            }
          }
          else {
            iVar9 = FUN_0217e9d8();
            if (iVar9 != 0) {
              iVar9 = *(int *)(iVar13 + 0x24);
              iVar15 = *(int *)(iVar9 + 4);
              if (iVar15 != 0) {
                iVar9 = (int)*(char *)(iVar15 + 0xc4);
              }
              uVar20 = *(undefined4 *)(iVar15 + 0xc);
              if (iVar15 == 0) {
                iVar9 = -1;
              }
              uVar10 = FUN_021733b4(iVar9);
              iVar9 = FUN_0217e9a0(uVar20,uVar10);
LAB_0217e5d0:
              iVar11 = 0;
              bVar6 = false;
              iVar21 = iVar9 + 0x9c;
              iVar12 = 0;
              iVar14 = 0x7fff;
              uVar8 = 0;
              for (bVar7 = 0; bVar7 < *(byte *)(iVar9 + 0xc); bVar7 = bVar7 + 1) {
                iVar1 = (int)(((int)*(short *)(iVar21 + 0x14) - (uint)*(ushort *)(iVar15 + 0xbe)) *
                             0x10000) >> 0x10;
                if (iVar1 < iVar14) {
                  iVar14 = iVar1;
                }
                iVar12 = (iVar12 + (short)*(undefined4 *)(iVar21 + 0xc)) * 0x10000 >> 0x10;
                iVar11 = (iVar11 + (short)*(undefined4 *)(iVar21 + 0x10)) * 0x10000 >> 0x10;
                bVar22 = *(char *)(iVar21 + 0x1c) != '\0';
                if (bVar22) {
                  bVar6 = true;
                }
                if (bVar22) {
                  uVar8 = uVar8 | 1;
                }
                cVar16 = *(char *)(iVar21 + 0x18);
                if (*(char *)(iVar21 + 0x1b) != '\0') {
                  uVar8 = uVar8 | 0x10;
                }
                iVar21 = iVar21 + 0x20;
                if (cVar16 == '\x02' || cVar16 == '\x04') {
                  uVar8 = uVar8 | 2;
                }
                if ((byte)(cVar16 - 4U) < 2) {
                  uVar8 = uVar8 | 8;
                }
              }
              uVar2 = (undefined1)uVar18;
              uVar3 = (undefined2)iVar14;
              uVar4 = (undefined2)iVar12;
              uVar5 = (undefined2)iVar11;
              if (-0x8000 < iVar12) {
                *(undefined1 *)(param_1 + 0x6e) = uVar2;
                *(undefined2 *)(param_1 + 0x6c) = uVar3;
                *(undefined2 *)(param_1 + 0x68) = uVar4;
                *(undefined2 *)(param_1 + 0x6a) = uVar5;
                *(uint *)(param_1 + 100) = uVar8;
              }
              if (iVar14 < 0x7fff) {
                *(undefined1 *)(param_1 + 0x62) = uVar2;
                *(undefined2 *)(param_1 + 0x60) = uVar3;
                *(undefined2 *)(param_1 + 0x5c) = uVar4;
                *(undefined2 *)(param_1 + 0x5e) = uVar5;
                *(uint *)(param_1 + 0x58) = uVar8;
              }
              if (bVar6) {
                *(undefined1 *)(param_1 + 0x7a) = uVar2;
                *(undefined2 *)(param_1 + 0x78) = uVar3;
                *(undefined2 *)(param_1 + 0x74) = uVar4;
                *(undefined2 *)(param_1 + 0x76) = uVar5;
                *(uint *)(param_1 + 0x70) = uVar8;
              }
            }
          }
          local_34 = local_34 + 1;
        } while (local_34 < 2);
      }
      uVar18 = uVar18 + 1;
      iVar13 = iVar13 + 0x10c;
    } while ((int)uVar18 < 4);
    if (((*(uint *)(param_1 + 0xd4) & 2) == 0) &&
       (iVar13 = FUN_02179130(*(undefined4 *)(param_1 + 0x2c),0x21), iVar13 != 0)) {
      *(undefined1 *)(param_1 + 0x7c) = 5;
    }
    else {
      *(undefined1 *)(param_1 + 0x7c) = 2;
      if ((-1 < *(char *)(param_1 + 0x62)) && ((*(uint *)(param_1 + 0x58) & 1) != 0)) {
        *(undefined1 *)(param_1 + 0x7c) = 3;
      }
      if ((((*(uint *)(*(int *)(param_1 + 0x24) + 0x28) & 0x30840) != 0) &&
          ((*(uint *)(param_1 + 0x58) & 2) == 0)) &&
         (iVar13 = FUN_0217e3f4(*(undefined4 *)(param_1 + 0x2c),*(undefined1 *)(param_1 + 0x104)),
         iVar13 != 0)) {
        iVar13 = **(int **)(param_1 + 0x24);
        if (((*(uint *)(iVar13 + 0x68) & 0x800) != 0) && ((*(uint *)(param_1 + 0x58) & 8) == 0)) {
          uVar10 = *(undefined4 *)(iVar13 + 0xc);
          uVar20 = FUN_021733b4(0xb);
          iVar9 = FUN_0217e9a0(uVar10,uVar20);
          if ((*(char *)(iVar9 + 0xc) != '\0') &&
             (*(short *)(iVar9 + 0xb0) < *(short *)(param_1 + 0x60))) {
            FUN_0217e3a0(param_1);
            FUN_0217ab84(param_1,0xb);
            *(uint *)(param_1 + 0xd4) = *(uint *)(param_1 + 0xd4) | 0x100;
            return;
          }
        }
        iVar9 = *(int *)(param_1 + 0x24);
        if (*(char *)(iVar9 + 0x36) != '\0') {
          if (((*(uint *)(iVar9 + 0x28) & 0x10000) != 0) ||
             ((*(uint *)(iVar9 + 0x28) & 0x20000) != 0)) {
            for (puVar19 = *(undefined4 **)(iVar9 + 0x1c); puVar19 != (undefined4 *)0x0;
                puVar19 = (undefined4 *)*puVar19) {
              iVar9 = puVar19[2];
              cVar16 = '\0';
              if (((*(uint *)(iVar9 + 0x68) & 0x10000) != 0) &&
                 (iVar15 = FUN_02174f4c(iVar9), iVar15 == 1)) {
                cVar16 = '\x01';
              }
              if (((*(uint *)(iVar9 + 0x68) & 0x20000) != 0) &&
                 (iVar15 = FUN_02174f4c(iVar9), iVar15 == 2)) {
                cVar16 = '\x02';
              }
              if (cVar16 != '\0') {
                uVar10 = *(undefined4 *)(iVar13 + 0xc);
                uVar20 = FUN_021733b4(cVar16);
                iVar15 = FUN_0217e9a0(uVar10,uVar20);
                if ((*(char *)(iVar15 + 0xc) != '\0') &&
                   (*(short *)(iVar15 + 0xb0) < *(short *)(param_1 + 0x60))) {
                  bVar7 = *(byte *)(iVar9 + 0xc3);
                  iVar13 = *(int *)(param_1 + 0x18);
                  *(ushort *)(iVar13 + 0xc) = (ushort)*(byte *)(iVar9 + 0xc2);
                  *(ushort *)(iVar13 + 0xe) = (ushort)bVar7;
                  *(undefined1 *)(iVar13 + 0x10) = 1;
                  *(undefined1 *)(iVar13 + 0x11) = 4;
                  return;
                }
              }
            }
          }
          if ((*(uint *)(iVar13 + 0x68) & 0x40) != 0) {
            iVar9 = FUN_02174f4c(iVar13);
            for (iVar15 = 0; iVar15 < 2; iVar15 = iVar15 + 1) {
              uVar17 = ((iVar9 + -3) * 2 + 0xdU & 0xff) + iVar15;
              uVar10 = *(undefined4 *)(iVar13 + 0xc);
              uVar20 = FUN_021733b4((int)(uVar17 * 0x1000000) >> 0x18);
              iVar12 = FUN_0217e9a0(uVar10,uVar20);
              if ((*(char *)(iVar12 + 0xc) != '\0') &&
                 (*(short *)(iVar12 + 0xb0) < *(short *)(param_1 + 0x60))) {
                FUN_0217e3a0(param_1);
                FUN_0217ab84(param_1,uVar17 & 0xff);
                *(uint *)(param_1 + 0xd4) = *(uint *)(param_1 + 0xd4) | 0x100;
                return;
              }
            }
          }
        }
      }
    }
  }
  return;
}

