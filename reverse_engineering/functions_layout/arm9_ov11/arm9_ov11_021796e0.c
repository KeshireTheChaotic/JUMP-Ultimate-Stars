
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021796e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short *psVar1;
  char cVar2;
  byte bVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  short sVar11;
  ushort uVar12;
  int iVar13;
  ushort uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  undefined *puVar20;
  undefined *unaff_r11;
  bool bVar21;
  short local_30 [4];
  undefined4 uStack_28;
  
  cVar2 = *(char *)(param_1 + 0x108);
  uStack_28 = param_4;
  if (cVar2 != '\x01') {
    if (cVar2 == '\0') {
      return;
    }
    if (cVar2 != '\x02') {
      if (cVar2 != '\x03') {
        return;
      }
      iVar10 = **(int **)(param_1 + 0x14);
      if (*(int *)(param_1 + 0xd8) == 0) {
        *(undefined4 *)(iVar10 + 0xe4) = 0x10;
      }
      else if (*(int *)(param_1 + 0xd8) == 10) {
        *(uint *)(iVar10 + 0xe4) = *(uint *)(iVar10 + 0xe4) & 0xffffffef;
      }
      iVar10 = *(int *)(param_1 + 0xd8);
      *(int *)(param_1 + 0xd8) = iVar10 + 1;
      if (iVar10 < 0x78) {
        return;
      }
      *(undefined4 *)(param_1 + 0xd8) = 0;
      return;
    }
    iVar10 = **(int **)(param_1 + 0x14);
    if (*(int *)(param_1 + 0xd8) == 0) {
      iVar10 = FUN_02173318();
      if (iVar10 == 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0xd8) = 1;
      return;
    }
    if (*(int *)(param_1 + 0xd8) != 1) {
      if ((*(uint *)(iVar10 + 0xe4) & 2) == 0) {
        *(undefined4 *)(param_1 + 0xd8) = 0;
        return;
      }
      if (*(char *)(*(int *)(param_1 + 0x20) + 0x18) != '\x03') {
        return;
      }
      if ((*(uint *)(*(int *)(*(int *)(*(int *)(param_1 + 0x20) + 0x1a8) + 0x10) + 0x40) & 0x1000)
          != 0) {
        *(undefined4 *)(param_1 + 0xd8) = 2;
      }
      if (*(int *)(param_1 + 0xd8) < 0x7a) {
        *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
        return;
      }
      *(uint *)(iVar10 + 0xe4) = *(uint *)(iVar10 + 0xe4) & 0xfffffffd;
      *(undefined4 *)(param_1 + 0xd8) = 0;
      return;
    }
    cVar2 = *(char *)(*(int *)(param_1 + 0x20) + 0x18);
    if (cVar2 == '\0') {
      *(undefined4 *)(iVar10 + 0xe4) = 2;
      *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
      return;
    }
    if (cVar2 == '\x03') {
      *(undefined4 *)(param_1 + 0xd8) = 2;
      return;
    }
    return;
  }
  iVar10 = 0;
  *(undefined1 *)(param_1 + 0x38) = 0xff;
  do {
    iVar13 = iVar10 * 2;
    iVar10 = iVar10 + 1;
    *(undefined2 *)(param_1 + iVar13 + 0xec) = 0;
  } while (iVar10 < 0xc);
  iVar10 = *(int *)(_DAT_02172960 + 0x154);
  if ((iVar10 != 7 && iVar10 != 8) && iVar10 != 9) {
    iVar10 = FUN_021791a4(*(undefined4 *)(param_1 + 0x2c));
    if (iVar10 != 0) {
      *(undefined1 *)(param_1 + 0x105) = 0;
      return;
    }
    iVar10 = FUN_02175628(*(undefined4 *)(param_1 + 0x1c));
    iVar13 = *(int *)(*(int *)(iVar10 + 4) + 0x10);
    iVar10 = FUN_0217a56c(*(undefined4 *)(param_1 + 0x2c),0x15);
    if ((((iVar10 == 0) && (iVar10 = FUN_0217920c(*(undefined4 *)(param_1 + 0x2c)), iVar10 != 0)) &&
        (iVar10 = FUN_02180910(param_1), iVar10 != 0)) && ((*(byte *)(iVar13 + 0x34) & 0x10) != 0))
    {
      *(undefined1 *)(param_1 + 0x105) = 0xb;
      return;
    }
    iVar10 = FUN_0217a56c(*(undefined4 *)(param_1 + 0x2c),0x13);
    if (iVar10 == 0) {
      piVar8 = *(int **)(param_1 + 0x24);
      if (*(byte *)(piVar8 + 0xf) < 2) {
        bVar21 = false;
      }
      else if ((uint)piVar8[0xb] < 0xb4) {
        bVar21 = false;
      }
      else {
        bVar21 = true;
      }
      if (bVar21) {
        if ((((piVar8[10] & 0x800000U) != 0) && ((*(uint *)(*piVar8 + 0x68) & 0x800000) == 0)) &&
           ((iVar10 = FUN_02179130(*(undefined4 *)(param_1 + 0x2c),0x22), iVar10 != 0 &&
            (*(char *)(param_1 + 0x83) == '\0')))) {
          *(undefined1 *)(param_1 + 0x105) = 8;
          FUN_0217e288(param_1);
          return;
        }
        iVar10 = FUN_021792fc(*(undefined4 *)(param_1 + 0x2c));
        if ((iVar10 != 0) && (*(char *)(param_1 + 0x84) == '\0')) {
          *(undefined1 *)(param_1 + 0x105) = 8;
          FUN_0217e26c(param_1);
          return;
        }
      }
    }
  }
  iVar10 = FUN_02175628(*(undefined4 *)(param_1 + 0x1c));
  iVar18 = 0;
  iVar10 = *(int *)(*(int *)(iVar10 + 4) + 0x10);
  iVar13 = iVar10 + 0xa8;
  do {
    local_30[iVar18] = 0;
    if (*(int *)(iVar13 + 0x20) == 0) {
      local_30[iVar18] = local_30[iVar18] + -0x1000;
    }
    else {
      iVar5 = FUN_021733dc(iVar13);
      if (iVar5 != 0) {
        local_30[iVar18] = local_30[iVar18] + -0x1000;
      }
      iVar5 = *(int *)(param_1 + iVar18 * 4 + 0xdc);
      if ((iVar5 < 0x8001) && (-1 < iVar5)) {
        *(short *)(param_1 + 0xf0) = *(short *)(param_1 + 0xf0) + 0x32;
      }
    }
    iVar18 = iVar18 + 1;
    iVar13 = iVar13 + 0x10c;
  } while (iVar18 < 4);
  uVar16 = 0xffffffff;
  uVar6 = *(uint *)(param_1 + 0xd4) >> 0x1c;
  bVar3 = *(byte *)(param_1 + 0x107);
  if (*(byte *)(param_1 + 0x104) < 3) {
    local_30[bVar3] = local_30[bVar3] + 100;
  }
  else {
    unaff_r11 = &DAT_02181378;
    iVar13 = iVar10 + 0xa8;
    uVar19 = 0;
    local_30[bVar3] = local_30[bVar3] + 10;
    do {
      if (*(int *)(iVar13 + 0x20) != 0 && uVar19 != uVar6) {
        iVar18 = FUN_0217a590(*(undefined4 *)(iVar13 + 0x24));
        if (iVar18 < 1) {
          local_30[uVar19] = local_30[uVar19] + -0x1000;
        }
        else if (iVar18 < 0x800) {
          local_30[uVar19] = local_30[uVar19] + 0x78;
        }
        else if (iVar18 < 0xc00) {
          local_30[uVar19] = local_30[uVar19] + 0x46;
        }
        else if (iVar18 < 0x1000) {
          local_30[uVar19] = local_30[uVar19] + 0x1e;
        }
        else {
          local_30[uVar19] = local_30[uVar19] + 10;
        }
        iVar18 = *(int *)(iVar13 + 0x20);
        local_30[uVar19] =
             local_30[uVar19] + *(short *)(&DAT_02181378 + (uint)*(ushort *)(iVar18 + 0x88) * 2);
        local_30[uVar19] =
             local_30[uVar19] + *(short *)(&DAT_02181378 + (uint)*(ushort *)(iVar18 + 0xa0) * 2);
      }
      uVar19 = uVar19 + 1;
      iVar13 = iVar13 + 0x10c;
    } while ((int)uVar19 < 4);
    iVar13 = (int)*(char *)(param_1 + 0x106);
    if (-1 < iVar13) {
      uVar19 = (uint)*(char *)(iVar10 + 0x35);
      if (uVar19 == uVar6) {
        iVar18 = iVar10 + 0xa8;
        local_30[*(char *)(iVar10 + 0x36)] = local_30[*(char *)(iVar10 + 0x36)] + 10;
        for (uVar19 = 0; (int)uVar19 < 4; uVar19 = uVar19 + 1) {
          if ((*(int *)(iVar18 + 0x20) != 0 && uVar19 != uVar6) &&
             ((int)*(char *)(iVar18 + 0x106) == iVar13 + 1)) {
            local_30[uVar19] = local_30[uVar19] + 0x50;
            break;
          }
          iVar18 = iVar18 + 0x10c;
        }
      }
      else {
        iVar18 = iVar10 + 0xa8;
        local_30[uVar19] = local_30[uVar19] + 100;
        local_30[*(char *)(iVar10 + 0x36)] = local_30[*(char *)(iVar10 + 0x36)] + 0x32;
        for (uVar19 = 0; (int)uVar19 < 4; uVar19 = uVar19 + 1) {
          if ((*(int *)(iVar18 + 0x20) != 0 && uVar19 != uVar6) &&
             ((int)*(char *)(iVar18 + 0x106) == iVar13 + -1)) {
            local_30[uVar19] = local_30[uVar19] + 0x32;
            break;
          }
          iVar18 = iVar18 + 0x10c;
        }
      }
    }
  }
  puVar20 = (undefined *)0xffff8000;
  uVar19 = 0;
  do {
    if (uVar6 != uVar19) {
      unaff_r11 = *(undefined **)(uVar19 * 0x10c + iVar10 + 200);
    }
    if ((uVar6 != uVar19 && unaff_r11 != (undefined *)0x0) &&
       (((*(int *)(_DAT_02172960 + 0x154) == 5 || DAT_020afebd == 0 ||
         (unaff_r11 = (undefined *)(int)(char)(&DAT_020afebe)[uVar19],
         (undefined *)(int)(char)(&DAT_020afebe)[uVar6] != unaff_r11)) &&
        (unaff_r11 = (undefined *)(int)local_30[uVar19], (int)puVar20 < (int)unaff_r11)))) {
      uVar16 = uVar19;
      puVar20 = unaff_r11;
    }
    uVar19 = uVar19 + 1;
  } while ((int)uVar19 < 4);
  if ((int)puVar20 < 0) {
    *(short *)(param_1 + 0xf0) = *(short *)(param_1 + 0xf0) + -0x100;
    *(char *)(param_1 + 0x38) = (char)uVar16;
  }
  else {
    if (uVar16 == 0xffffffff || uVar16 == uVar6) {
      do {
        do {
          uVar16 = FUN_02031070(*(undefined4 *)(DAT_020a0da8 + 4));
          uVar16 = uVar16 & 3;
        } while (*(int *)(uVar16 * 0x10c + iVar10 + 200) == 0 || uVar6 == uVar16);
        uVar19 = *(uint *)(_DAT_02172960 + 0x154);
        bVar21 = uVar19 != 5;
        if (bVar21) {
          uVar19 = (uint)DAT_020afebd;
        }
      } while ((bVar21 && uVar19 != 0) && ((&DAT_020afebe)[uVar6] == (&DAT_020afebe)[uVar16]));
    }
    *(short *)(param_1 + 0xf0) = *(short *)(param_1 + 0xf0) + (short)((int)puVar20 >> 1);
    *(char *)(param_1 + 0x38) = (char)uVar16;
  }
  iVar13 = FUN_0217a590(*(undefined4 *)(param_1 + 0x24));
  if ((-1 < iVar13) &&
     (iVar13 = FUN_0217a5a4(*(undefined4 *)(param_1 + 0x24)),
     iVar13 < (int)(uint)(byte)(&DAT_021812cc)[*(byte *)(param_1 + 0x104)])) {
    iVar13 = FUN_0217a56c(*(undefined4 *)(param_1 + 0x2c),0x13);
    if ((iVar13 == 0) &&
       (((1 < *(byte *)(*(int *)(param_1 + 0x24) + 0x3c) &&
         (iVar13 = FUN_021792a0(*(undefined4 *)(param_1 + 0x2c)), iVar13 != 0)) &&
        (*(char *)(param_1 + 0x85) == '\0')))) {
      *(short *)(param_1 + 0xfc) = *(short *)(param_1 + 0xfc) + 200;
      FUN_0217e250(param_1);
    }
    iVar13 = FUN_0217a56c(*(undefined4 *)(param_1 + 0x2c),0x12);
    if (iVar13 == 0) {
      uVar6 = *(uint *)(*(int *)(param_1 + 0x24) + 0x28);
      if ((((uVar6 & 0x1000) != 0) || ((uVar6 & 0x2000) != 0)) &&
         (*(char *)(*(int *)(param_1 + 0x24) + 0x36) != '\0')) {
        iVar13 = 0x7fffffff;
        uVar6 = 0;
        do {
          if (uVar6 != *(uint *)(param_1 + 0xd4) >> 0x1c) {
            iVar5 = *(int *)(param_1 + uVar6 * 4 + 0xdc);
            bVar21 = iVar5 == 0;
            iVar18 = iVar5;
            if (0 < iVar5) {
              iVar18 = iVar13 - iVar5;
              bVar21 = iVar13 == iVar5;
            }
            if (!bVar21 && iVar18 < 0 == (0 < iVar5 && SBORROW4(iVar13,iVar5))) {
              iVar13 = iVar5;
            }
          }
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < 4);
        if (0x6000 < iVar13) {
          iVar13 = (iVar13 >> 8) + -0x60;
          if (0x100 < iVar13) {
            iVar13 = 0x100;
          }
          *(short *)(param_1 + 0xfa) =
               *(short *)(param_1 + 0xfa) + (short)((uint)(iVar13 * 0x3c00) >> 0x10);
        }
      }
    }
    iVar13 = FUN_02175628(*(undefined4 *)(param_1 + 0x1c));
    iVar9 = *(int *)(*(int *)(iVar13 + 4) + 0x10);
    iVar18 = 0;
    piVar8 = *(int **)(iVar9 + (*(uint *)(param_1 + 0xd4) >> 0x1c) * 4 + 0x98);
    iVar9 = iVar9 + 0xa8;
    iVar5 = 0;
    iVar13 = 0x7fffffff;
    do {
      if (iVar9 != param_1) {
        uVar16 = *(uint *)(iVar9 + 0x24);
      }
      if (iVar9 != param_1 && uVar16 != 0) {
        uVar6 = *(uint *)(uVar16 + 0x24);
        bVar21 = (uVar6 & 4) != 0;
        if (bVar21) {
          uVar6 = *(uint *)(uVar16 + 4);
        }
        if (bVar21 && uVar6 != 0) {
          iVar10 = *(int *)(uVar6 + 0x24);
        }
        if ((bVar21 && uVar6 != 0) && iVar10 != 0) {
          psVar1 = (short *)(iVar10 + 0x36);
          iVar10 = (int)*(short *)(iVar10 + 0x34);
          uVar16 = *psVar1 * 0x100 - piVar8[1];
          if ((int)uVar16 < 0) {
            uVar16 = -uVar16;
          }
          iVar15 = iVar10 * 0x100 - *piVar8;
          if (iVar15 < 0) {
            iVar15 = -iVar15;
          }
          if ((int)(iVar15 + uVar16) < iVar13) {
            iVar13 = iVar15 + uVar16;
            iVar18 = iVar9;
          }
        }
      }
      iVar5 = iVar5 + 1;
      iVar9 = iVar9 + 0x10c;
    } while (iVar5 < 4);
    if (iVar13 != 0x7fffffff) {
      iVar13 = iVar13 >> 8;
      if (0x100 < iVar13) {
        iVar13 = 0x100;
      }
      *(short *)(param_1 + 0xfa) =
           *(short *)(param_1 + 0xfa) + (short)((uint)((0x100 - iVar13) * 100) >> 8);
      *(int *)(param_1 + 0xa4) = iVar18;
    }
    iVar10 = FUN_0217a56c(*(undefined4 *)(param_1 + 0x2c),0x11);
    if ((iVar10 == 0) && ((*(uint *)(**(int **)(param_1 + 0x24) + 0x68) & 0x80) != 0)) {
      iVar13 = FUN_0217a5a4();
      iVar10 = 0x7fffffff;
      uVar6 = 0;
      do {
        if (uVar6 != *(uint *)(param_1 + 0xd4) >> 0x1c) {
          iVar5 = *(int *)(param_1 + uVar6 * 4 + 0xdc);
          bVar21 = iVar5 == 0;
          iVar18 = iVar5;
          if (0 < iVar5) {
            iVar18 = iVar10 - iVar5;
            bVar21 = iVar10 == iVar5;
          }
          if (!bVar21 && iVar18 < 0 == (0 < iVar5 && SBORROW4(iVar10,iVar5))) {
            iVar10 = iVar5;
          }
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < 4);
      if (iVar10 < 0x6001) {
        FUN_0217a5b8(param_1);
      }
      else {
        iVar10 = (iVar10 >> 8) + -0x60;
        if (0x100 < iVar10) {
          iVar10 = 0x100;
        }
        *(short *)(param_1 + 0xfe) =
             *(short *)(param_1 + 0xfe) + (short)((uint)(iVar10 * 0x1e) >> 0x10);
        *(short *)(param_1 + 0xfe) =
             *(short *)(param_1 + 0xfe) + (short)((uint)((0x100 - iVar13) * 0x1e00) >> 0x10);
      }
    }
    iVar10 = FUN_0217a56c(*(undefined4 *)(param_1 + 0x2c),0x14);
    if (iVar10 == 0) {
      iVar10 = FUN_02175628(*(undefined4 *)(param_1 + 0x1c));
      iVar10 = *(int *)(iVar10 + 4);
      bVar21 = *(short *)(param_1 + 0xfc) == 0;
      iVar13 = *(int *)(iVar10 + 0x10);
      if (bVar21) {
        iVar10 = (int)*(short *)(param_1 + 0xfa);
      }
      if (bVar21 && iVar10 == 0) {
        uVar6 = *(uint *)(param_1 + 0xd4) >> 0x1c;
        iVar18 = **(int **)(iVar13 + *(char *)(param_1 + 0x38) * 4 + 0x98);
        iVar10 = **(int **)(iVar13 + uVar6 * 4 + 0x98);
        uVar16 = iVar18 - iVar10;
        for (puVar7 = *(undefined4 **)(iVar13 + 4); puVar7 != (undefined4 *)0x0;
            puVar7 = (undefined4 *)*puVar7) {
          iVar13 = 0;
          while( true ) {
            uVar19 = iVar13 * 2;
            uVar17 = (uint)(char)(&DAT_021812e0)[uVar19];
            if (((int)uVar17 < 0) ||
               (uVar19 = (uint)*(byte *)((int)puVar7 + 0x15), uVar19 == uVar17)) break;
            iVar13 = iVar13 + 1;
          }
          if (-1 < (int)uVar17) {
            bVar21 = iVar18 == iVar10;
            uVar17 = uVar16;
            if (0 < (int)uVar16) {
              uVar17 = puVar7[uVar6 * 2 + 6];
              bVar21 = uVar17 == 0;
              uVar19 = uVar17;
            }
            if (bVar21 || (int)uVar17 < 0) {
              if ((int)uVar16 < 0) {
                uVar19 = puVar7[uVar6 * 2 + 6];
              }
              if ((int)uVar16 >= 0 || -1 < (int)uVar19) {
                iVar10 = puVar7[uVar6 * 2 + 6];
                iVar18 = puVar7[uVar6 * 2 + 7];
                if (iVar10 < 0) {
                  iVar10 = -iVar10;
                }
                if (iVar18 < 0) {
                  iVar18 = -iVar18;
                }
                iVar10 = iVar10 + iVar18 >> 8;
                if (0x100 < iVar10) {
                  iVar10 = 0x100;
                }
                *(short *)(param_1 + 0xf6) =
                     *(short *)(param_1 + 0xf6) +
                     (short)((uint)(iVar10 * *(char *)(iVar13 * 2 + 0x21812e1) * 0x100) >> 0x10);
                break;
              }
            }
          }
        }
      }
    }
  }
  uVar12 = (ushort)*(byte *)(*(int *)(param_1 + 0x24) + 0x36);
  uVar14 = (ushort)*(byte *)(*(int *)(param_1 + 0x24) + 0x37);
  if (uVar12 != uVar14) {
    uVar6 = *(uint *)(param_1 + 0xd4) >> 0x1c;
    iVar10 = FUN_0217a56c(*(undefined4 *)(param_1 + 0x2c),0x14);
    if ((iVar10 == 0) && (iVar10 = FUN_02179228(*(undefined4 *)(param_1 + 0x2c)), iVar10 != 0)) {
      iVar10 = FUN_02175628(*(undefined4 *)(param_1 + 0x1c));
      for (puVar7 = *(undefined4 **)(*(int *)(*(int *)(iVar10 + 4) + 0x10) + 4);
          puVar7 != (undefined4 *)0x0; puVar7 = (undefined4 *)*puVar7) {
        for (iVar10 = 0;
            (uVar16 = (uint)(char)(&DAT_021812d4)[iVar10], -1 < (int)uVar16 &&
            (uVar16 != *(byte *)((int)puVar7 + 0x15))); iVar10 = iVar10 + 1) {
        }
        if (-1 < (int)uVar16) {
          iVar13 = puVar7[uVar6 * 2 + 6];
          iVar18 = puVar7[uVar6 * 2 + 7];
          if (iVar13 < 0) {
            iVar13 = -iVar13;
          }
          if (iVar18 < 0) {
            iVar18 = -iVar18;
          }
          iVar13 = iVar13 + iVar18 >> 8;
          if (0x100 < iVar13) {
            iVar13 = 0x100;
          }
          *(short *)(param_1 + 0xf6) =
               *(short *)(param_1 + 0xf6) + (short)((uint)((0x100 - iVar13) * 0x1400) >> 0x10);
          *(ushort *)(param_1 + 0xf6) =
               *(short *)(param_1 + 0xf6) + (short)*(char *)(iVar10 + 0x21812d6) * (uVar14 - uVar12)
          ;
        }
      }
    }
    iVar10 = FUN_0217a56c(*(undefined4 *)(param_1 + 0x2c),0x11);
    if (((iVar10 == 0) && ((*(uint *)(**(int **)(param_1 + 0x24) + 0x68) & 0x100) != 0)) &&
       (iVar10 = FUN_02179228(*(undefined4 *)(param_1 + 0x2c)), iVar10 != 0)) {
      iVar10 = 0x7fffffff;
      uVar16 = 0;
      do {
        if (uVar16 != uVar6) {
          iVar18 = *(int *)(param_1 + uVar16 * 4 + 0xdc);
          bVar21 = iVar18 == 0;
          iVar13 = iVar18;
          if (0 < iVar18) {
            iVar13 = iVar10 - iVar18;
            bVar21 = iVar10 == iVar18;
          }
          if (!bVar21 && iVar13 < 0 == (0 < iVar18 && SBORROW4(iVar10,iVar18))) {
            iVar10 = iVar18;
          }
        }
        uVar16 = uVar16 + 1;
      } while ((int)uVar16 < 4);
      if (iVar10 < 0x6001) {
        FUN_0217a5b8(param_1);
      }
      else {
        iVar10 = (iVar10 >> 8) + -0x60;
        if (0x100 < iVar10) {
          iVar10 = 0x100;
        }
        *(short *)(param_1 + 0xfe) =
             *(short *)(param_1 + 0xfe) + (short)((uint)(iVar10 * 0x3200) >> 0x10);
        *(ushort *)(param_1 + 0xfe) = *(short *)(param_1 + 0xfe) + (uVar14 - uVar12) * 10;
      }
    }
    FUN_0217a56c(*(undefined4 *)(param_1 + 0x2c),0x11);
  }
  sVar11 = *(short *)(*(int *)(param_1 + 0x20) + 0xa0);
  if (sVar11 != 0) {
    if (sVar11 == 0x1a) {
      *(short *)(param_1 + 0xf0) = *(short *)(param_1 + 0xf0) + -0x1000;
    }
    if (sVar11 == 0x19) {
      *(short *)(param_1 + 0xf8) = *(short *)(param_1 + 0xf8) + -0x1000;
      *(short *)(param_1 + 0xfa) = *(short *)(param_1 + 0xfa) + -0x1000;
    }
    if (sVar11 == 0x18) {
      *(short *)(param_1 + 0xfc) = *(short *)(param_1 + 0xfc) + -0x1000;
    }
    if ((*(uint *)(*(int *)(param_1 + 0x24) + 0x28) & 0xc0210) != 0) {
      *(short *)(param_1 + 0xfa) = *(short *)(param_1 + 0xfa) + 0x50;
    }
    iVar10 = func_0x0215922c(*(undefined4 *)(param_1 + 0x20));
    if (iVar10 != 0) {
      *(short *)(param_1 + 0x100) = *(short *)(param_1 + 0x100) + 0x100;
    }
  }
  uVar6 = (uint)*(ushort *)(*(int *)(param_1 + 0x20) + 0x88);
  if (uVar6 != 0) {
    *(short *)(param_1 + 0xf0) =
         *(short *)(param_1 + 0xf0) +
         (short)((uint)((int)*(short *)(&DAT_02181324 + uVar6 * 2) *
                        (int)*(short *)(&DAT_02181970 + (uint)*(byte *)(param_1 + 0x104) * 2) *
                       0x100) >> 0x10);
  }
  iVar10 = 0x100;
  if ((*(int *)(_DAT_02172960 + 0x154) != 5) && (DAT_020afea0 == 0xc)) {
    iVar10 = 0x300;
  }
  uVar16 = (uint)*(byte *)(*(int *)(param_1 + 0x2c) + 0x13);
  uVar6 = *(uint *)(param_1 + 0xd4) >> 0x1c;
  if (0x20 < uVar16) {
    uVar16 = 0x20;
  }
  iVar13 = FUN_02175628(*(undefined4 *)(param_1 + 0x1c));
  for (puVar7 = *(undefined4 **)(*(int *)(*(int *)(iVar13 + 4) + 0x10) + 4);
      puVar7 != (undefined4 *)0x0; puVar7 = (undefined4 *)*puVar7) {
    iVar13 = FUN_0217f8a4(*(undefined1 *)(puVar7 + 5),*(undefined1 *)((int)puVar7 + 0x15));
    if (-2 < iVar13) {
      iVar18 = puVar7[uVar6 * 2 + 6];
      iVar5 = puVar7[uVar6 * 2 + 7];
      if (iVar18 < 0) {
        iVar18 = -iVar18;
      }
      if (iVar5 < 0) {
        iVar5 = -iVar5;
      }
      iVar18 = iVar18 + iVar5 >> 8;
      if (0x100 < iVar18) {
        iVar18 = 0x100;
      }
      iVar13 = iVar13 * iVar10 * 0x100 >> 0x10;
      if (iVar10 != 0x100) {
        iVar13 = (int)(iVar13 * uVar16 * 0x1000) >> 0x10;
      }
      *(short *)(param_1 + 0xf6) =
           *(short *)(param_1 + 0xf6) + (short)((uint)(iVar13 * iVar18 * 0x100) >> 0x10);
    }
  }
  iVar10 = -1;
  sVar11 = 0;
  if (*(char *)(param_1 + 0x10b) != -1) {
    iVar13 = *(char *)(param_1 + 0x10b) * 2;
    *(short *)(param_1 + 0xec + iVar13) = *(short *)(param_1 + 0xec + iVar13) + -0x1000;
    *(undefined1 *)(param_1 + 0x10b) = 0xff;
  }
  iVar13 = 0;
  do {
    sVar4 = *(short *)(param_1 + iVar13 * 2 + 0xec);
    if (sVar11 < sVar4) {
      iVar10 = iVar13;
      sVar11 = sVar4;
    }
    iVar13 = iVar13 + 1;
  } while (iVar13 < 0xc);
  if (iVar10 < 0) {
    *(undefined1 *)(param_1 + 0x105) = 0;
  }
  else {
    *(char *)(param_1 + 0x105) = (char)iVar10;
  }
  if (*(code **)(&DAT_021812f4 + (uint)*(byte *)(param_1 + 0x105) * 4) != (code *)0x0) {
    (**(code **)(&DAT_021812f4 + (uint)*(byte *)(param_1 + 0x105) * 4))(param_1);
  }
  return;
}

