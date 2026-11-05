
void FUN_02080f14(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  int *piVar12;
  uint extraout_r1;
  int iVar13;
  undefined *puVar14;
  int iVar15;
  int iVar16;
  code *pcVar17;
  int iVar18;
  int iVar19;
  undefined4 *puVar20;
  int iVar21;
  short sVar22;
  undefined4 *puVar23;
  undefined4 *puVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  bool bVar28;
  undefined1 uVar29;
  int local_58;
  int local_54;
  undefined4 *local_4c;
  sbyte local_3c [8];
  code *local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 uStack_28;
  
  puVar24 = *(undefined4 **)(param_1 + 0x30);
  uStack_28 = param_4;
  while (puVar24 != (undefined4 *)0x0) {
    bVar5 = false;
    iVar6 = *(int *)(*(int *)(puVar24[2] + 8) + 0x1c);
    iVar7 = *(int *)(*(int *)(puVar24[2] + 0xc) + 0x1c);
    uVar26 = *(uint *)(iVar6 + 0x14) & 0xffffff;
    puVar23 = (undefined4 *)*puVar24;
    if (((*(ushort *)(iVar7 + 0x20) & uVar26) != 0) || ((*(ushort *)(iVar7 + 0x24) & uVar26) != 0))
    {
      bVar5 = true;
    }
    if (((*(uint *)(iVar7 + 0x18) & 0x200) != 0) &&
       ((*(uint *)(*(int *)(iVar6 + 0xc) + 0x78) & 0x20) == 0)) {
      bVar5 = true;
    }
    uVar26 = *(uint *)(iVar7 + 0x14);
    bVar28 = (uVar26 & 0x1000000) != 0;
    if (bVar28) {
      uVar26 = *(uint *)(*(int *)(iVar6 + 0xc) + 100);
    }
    if (bVar28 && uVar26 != 0) {
      bVar5 = true;
    }
    if (bVar5) {
      FUN_02037c24(param_1 + 0x30,puVar24);
      puVar24[2] = 0;
      FUN_02037b98(param_1 + 0xd8,puVar24);
    }
    puVar24 = puVar23;
  }
  puVar24 = *(undefined4 **)(param_1 + 0x30);
  while (puVar24 != (undefined4 *)0x0) {
    piVar12 = puVar24 + 2;
    puVar24 = (undefined4 *)*puVar24;
    iVar6 = *(int *)(*(int *)(*piVar12 + 8) + 0x1c);
    if (((((*(uint *)(*(int *)(*(int *)(*piVar12 + 0xc) + 0x1c) + 0x14) & 0x4000000) != 0) &&
         ((*(uint *)(iVar6 + 0x14) & 0x1000) == 0)) && ((*(uint *)(iVar6 + 0x14) & 0x700) != 0)) &&
       ((*(ushort *)(iVar6 + 0x20) & 0xff) != 0)) {
      uVar27 = 0;
      uVar26 = 0;
      do {
        if (((uint)*(ushort *)(iVar6 + 0x20) & 1 << uVar26) != 0) {
          local_3c[uVar27] = (sbyte)uVar26;
          uVar27 = uVar27 + 1 & 0xff;
        }
        uVar26 = uVar26 + 1 & 0xff;
      } while (uVar26 < 8);
      if (1 < uVar27) {
        uVar11 = FUN_02031070(*(undefined4 *)(DAT_020a0da8 + 4));
        FUN_0200d338(uVar11,uVar27);
        puVar23 = *(undefined4 **)(param_1 + 0x30);
        while (puVar23 != (undefined4 *)0x0) {
          puVar20 = (undefined4 *)*puVar23;
          if ((iVar6 == *(int *)(*(int *)(puVar23[2] + 8) + 0x1c)) &&
             ((*(uint *)(*(int *)(*(int *)(puVar23[2] + 0xc) + 0x1c) + 0x14) &
              1 << local_3c[extraout_r1 & 0xff]) == 0)) {
            if (puVar24 == puVar23) {
              puVar24 = puVar20;
            }
            FUN_02037c24(param_1 + 0x30,puVar23);
            puVar23[2] = 0;
            FUN_02037b98(param_1 + 0xd8,puVar23);
          }
          puVar23 = puVar20;
        }
        *(ushort *)(iVar6 + 0x20) = *(ushort *)(iVar6 + 0x20) & 0xff00;
        *(ushort *)(iVar6 + 0x20) =
             *(ushort *)(iVar6 + 0x20) | (ushort)(1 << local_3c[extraout_r1 & 0xff]);
      }
    }
  }
  local_4c = *(undefined4 **)(param_1 + 0x30);
  do {
    if (local_4c == (undefined4 *)0x0) {
      return;
    }
    iVar6 = local_4c[2];
    iVar19 = *(int *)(*(int *)(iVar6 + 8) + 0x1c);
    iVar21 = *(int *)(*(int *)(iVar6 + 0xc) + 0x1c);
    iVar7 = *(int *)(iVar19 + 0xc);
    iVar18 = *(int *)(iVar21 + 0xc);
    iVar15 = *(int *)(iVar7 + 0x5c);
    uVar26 = *(uint *)(iVar21 + 0x14);
    iVar16 = *(int *)(iVar18 + 0x5c);
    iVar25 = iVar7 + 0xa4;
    uVar27 = *(uint *)(iVar19 + 0x14);
    if ((uVar26 & 0x3000000) == 0) {
LAB_020811a8:
      *(uint *)(iVar7 + 0x40) = *(uint *)(iVar7 + 0x40) | 0x10;
      *(uint *)(*(int *)(iVar19 + 0xc) + 0x40) =
           *(uint *)(*(int *)(iVar19 + 0xc) + 0x40) & 0xfffdf7ff;
      if ((*(uint *)(*(int *)(iVar19 + 0xc) + 0x40) & 6) != 0) {
        FUN_0207d180();
      }
      if (*(int *)(*(int *)(iVar19 + 0xc) + 100) != 0) {
        FUN_0207c070();
      }
      if ((*(uint *)(*(int *)(iVar19 + 0xc) + 0x44) & 2) == 0) {
        iVar8 = *(int *)(*(int *)(iVar19 + 0xc) + 0x28);
        while (iVar8 != 0) {
          FUN_0207c070(*(undefined4 *)(iVar8 + 8));
          iVar8 = *(int *)(*(int *)(iVar19 + 0xc) + 0x28);
        }
      }
      if (((uVar27 & 0x100) == 0) || ((uVar26 & 0x10000000) == 0)) {
        local_54 = (int)*(char *)(*(int *)(iVar21 + 0x10) + 0xf);
      }
      else {
        local_54 = -1;
      }
      if (((uVar27 & 0x1600) == 0) || ((uVar26 & 0x100) == 0)) {
        local_58 = (int)*(char *)(*(int *)(iVar21 + 0x10) + 0xe);
      }
      else {
        local_58 = -1;
      }
      uVar9 = FUN_020823e4(iVar19,iVar21);
      uVar29 = (uVar9 & 2) != 0;
      iVar8 = (int)*(char *)(*(int *)(iVar21 + 0x10) + 5);
      if ((uVar9 & 1) != 0) {
        uVar29 = 2;
      }
      iVar1 = iVar8 * 0x100;
      iVar10 = FUN_02081a58(uVar26,*(undefined4 *)(iVar21 + 0x18));
      iVar13 = iVar25 + iVar10 * 4;
      *(int *)(iVar25 + iVar10 * 4) = *(int *)(iVar25 + iVar10 * 4) + local_2c;
      *(int *)(iVar13 + 0x48) = *(int *)(iVar13 + 0x48) + iVar8 * 0x100;
      *(char *)(iVar7 + 0x171) = *(char *)(iVar7 + 0x171) + *(char *)(*(int *)(iVar21 + 0x10) + 7);
      if ((uVar27 & 0x37f0) == 0) {
        iVar25 = FUN_02081a58(uVar27 & 0xf,0);
        if ((*(uint *)(iVar21 + 0x18) & 0x100) == 0) {
          if ((*(uint *)(iVar21 + 0x18) & 0xc0) == 0) {
            if ((uVar26 & 0xf0) == 0) {
              if ((uVar26 & 0xf) != 0) {
                iVar8 = FUN_02081a58(uVar26 & 0xf,0);
                piVar12 = (int *)(iVar25 * 0x30 + iVar8 * 0xc0 + param_1 + 0x154);
                if ((uVar26 & 0x1700) == 0) {
                  *piVar12 = *piVar12 + local_2c;
                  piVar12[6] = piVar12[6] + iVar1;
                }
                else {
                  piVar12[1] = piVar12[1] + local_2c;
                  piVar12[7] = piVar12[7] + iVar1;
                }
              }
            }
            else {
              iVar8 = FUN_02081a58((uVar26 & 0xf0) >> 4,0);
              iVar25 = iVar25 * 0x30 + iVar8 * 0xc0 + param_1 + 0x154;
              *(int *)(iVar25 + 8) = *(int *)(iVar25 + 8) + local_2c;
              *(int *)(iVar25 + 0x20) = *(int *)(iVar25 + 0x20) + iVar1;
            }
          }
          else {
            iVar8 = FUN_02081a58(uVar26 & 0xf,0);
            iVar25 = iVar25 * 0x30 + iVar8 * 0xc0 + param_1 + 0x154;
            *(int *)(iVar25 + 0xc) = *(int *)(iVar25 + 0xc) + local_2c;
            *(int *)(iVar25 + 0x24) = *(int *)(iVar25 + 0x24) + iVar1;
          }
        }
        else {
          iVar8 = FUN_02081a58((uVar26 & 0xf0) >> 4,0);
          iVar25 = iVar25 * 0x30 + iVar8 * 0xc0 + param_1 + 0x154;
          *(int *)(iVar25 + 0x10) = *(int *)(iVar25 + 0x10) + local_2c;
          *(int *)(iVar25 + 0x28) = *(int *)(iVar25 + 0x28) + iVar1;
        }
      }
      if ((*(uint *)(*(int *)(iVar21 + 0x10) + 8) & 0x8000) != 0) {
        if (*(int *)(iVar7 + 0x17c) < local_2c) {
          *(int *)(iVar18 + 0x140) = *(int *)(iVar18 + 0x140) + *(int *)(iVar7 + 0x17c);
          *(undefined4 *)(iVar7 + 0x17c) = 0;
        }
        else {
          *(int *)(iVar18 + 0x140) = *(int *)(iVar18 + 0x140) + local_2c;
          *(int *)(iVar7 + 0x17c) = *(int *)(iVar7 + 0x17c) - local_2c;
        }
      }
      if ((*(uint *)(*(int *)(iVar21 + 0x10) + 8) & 0x10000) != 0) {
        if (*(short *)(iVar7 + 0x176) * 0x100 < iVar1) {
          *(int *)(iVar18 + 0x144) = *(int *)(iVar18 + 0x144) + *(short *)(iVar7 + 0x176) * 0x100;
          *(undefined2 *)(iVar7 + 0x176) = 0;
        }
        else {
          *(int *)(iVar18 + 0x144) = *(int *)(iVar18 + 0x144) + iVar1;
          *(short *)(iVar7 + 0x176) = *(short *)(iVar7 + 0x176) - (short)((uint)iVar1 >> 8);
        }
      }
      iVar8 = *(int *)(*(int *)(iVar6 + 0xc) + 0x20);
      iVar25 = *(int *)(*(int *)(iVar6 + 8) + 0x20);
      FUN_02080d28(*(int *)(iVar6 + 8) + 0x3c + (uint)*(byte *)(iVar6 + 0x11) * 8,
                   *(int *)(iVar6 + 0xc) + 0x3c + (uint)*(byte *)(iVar6 + 0x12) * 8,
                   (int)*(short *)(iVar25 + 0x34),(int)*(short *)(iVar25 + 0x36),
                   (int)*(short *)(iVar8 + 0x34),(int)*(short *)(iVar8 + 0x36),&local_30,&local_34);
      *(uint *)(iVar7 + 0x150) = *(uint *)(iVar7 + 0x150) | *(uint *)(iVar21 + 0x14) & 0x3ffffff;
      *(uint *)(iVar7 + 0x154) = *(uint *)(iVar7 + 0x154) | *(uint *)(iVar21 + 0x18);
      *(uint *)(iVar18 + 0x158) = *(uint *)(iVar18 + 0x158) | *(uint *)(iVar19 + 0x14) & 0xffffff;
      *(uint *)(iVar18 + 0x15c) = *(uint *)(iVar18 + 0x15c) | *(uint *)(iVar19 + 0x18);
      iVar18 = *(int *)(*(int *)(iVar21 + 0xc) + 0x68);
      pcVar17 = (code *)0x0;
      if (iVar18 != 0) {
        *(uint *)(iVar18 + 0x160) = *(uint *)(iVar18 + 0x160) | *(uint *)(iVar19 + 0x14) & 0xffffff;
        pcVar17 = *(code **)(*(int *)(iVar21 + 0xc) + 0x68);
        *(uint *)(pcVar17 + 0x164) = *(uint *)(pcVar17 + 0x164) | *(uint *)(iVar19 + 0x18);
      }
      bVar2 = *(byte *)(*(int *)(iVar21 + 0x10) + 1);
      if (*(ushort *)(iVar7 + 0x16c) < (ushort)bVar2) {
        *(ushort *)(iVar7 + 0x16c) = (ushort)bVar2;
      }
      bVar2 = *(byte *)(*(int *)(iVar21 + 0x10) + 2);
      if (bVar2 != 0) {
        bVar3 = *(byte *)(iVar7 + 0x174);
        if (bVar3 == 0) {
          *(byte *)(iVar7 + 0x174) = bVar2;
          *(short *)(iVar7 + 0x14c) = (short)local_30;
          *(short *)(iVar7 + 0x14e) = (short)local_34;
          bVar5 = true;
        }
        else {
          if (bVar2 < bVar3) {
            *(byte *)(iVar7 + 0x174) = bVar2;
            *(short *)(iVar7 + 0x14c) = (short)local_30;
            *(short *)(iVar7 + 0x14e) = (short)local_34;
          }
          bVar5 = bVar2 < bVar3;
        }
        pcVar17 = local_34;
        if (bVar5) {
          iVar18 = FUN_0206c7fc(*(undefined4 *)(&DAT_0209fee4 + (uint)*(byte *)(iVar7 + 0x174) * 4),
                                (int)*(short *)(iVar7 + 0x14c),(int)*(short *)(iVar7 + 0x14e),0);
          uVar11 = FUN_0206cf28(*(undefined4 *)(*(int *)(iVar19 + 0xc) + 0x30));
          piVar12 = *(int **)(*(int *)(iVar18 + 4) + 100);
          pcVar17 = *(code **)(*piVar12 + 0x5c);
          (*pcVar17)(piVar12,uVar11);
        }
      }
      cVar4 = *(char *)(*(int *)(iVar21 + 0x10) + 3);
      iVar18 = (int)cVar4;
      if (iVar18 != 0) {
        if (iVar18 < 1) {
          if (*(char *)(iVar7 + 0x173) == 0) {
            *(char *)(iVar7 + 0x173) = cVar4;
            *(ushort *)(iVar7 + 0x16a) = (ushort)*(undefined4 *)(iVar21 + 0x14) & 0xff;
          }
          else if (iVar18 < *(char *)(iVar7 + 0x173)) {
            *(char *)(iVar7 + 0x173) = cVar4;
            *(ushort *)(iVar7 + 0x16a) = (ushort)*(undefined4 *)(iVar21 + 0x14) & 0xff;
          }
          if (iVar18 < 0) {
            iVar18 = -iVar18;
          }
          if (iVar18 == 0x17) {
            *(byte *)(iVar7 + 0x182) =
                 *(byte *)(iVar7 + 0x182) | (byte)*(undefined4 *)(iVar21 + 0x14);
          }
        }
        else if (*(char *)(iVar7 + 0x172) == 0) {
          *(char *)(iVar7 + 0x172) = cVar4;
          *(ushort *)(iVar7 + 0x168) = (ushort)*(undefined4 *)(iVar21 + 0x14) & 0xff;
        }
        else if (iVar18 < *(char *)(iVar7 + 0x172)) {
          *(char *)(iVar7 + 0x172) = cVar4;
          *(ushort *)(iVar7 + 0x168) = (ushort)*(undefined4 *)(iVar21 + 0x14) & 0xff;
        }
      }
      puVar14 = *(undefined **)(iVar19 + 0xc);
      if ((*(uint *)(puVar14 + 0x40) & 0x4000) != 0) {
        *(uint *)(puVar14 + 0x40) = *(uint *)(puVar14 + 0x40) | 0x10000;
        *(char *)(iVar7 + 0x171) = *(char *)(iVar7 + 0x171) + '<';
      }
      if ((*(uint *)(iVar19 + 0x14) & 0x700) != 0) {
        puVar14 = *(undefined **)(iVar21 + 0x14);
        if (((uint)puVar14 & 0x4000000) == 0) {
          if ((*(uint *)(*(int *)(iVar19 + 0xc) + 0x40) & 0x10000) != 0) {
            uVar26 = (uint)puVar14 & 0x3ffffff;
            puVar14 = *(undefined **)(iVar7 + 0x150);
            *(uint *)(iVar7 + 0x150) = (uint)puVar14 & ~uVar26;
          }
        }
        else {
          uVar26 = *(uint *)(iVar7 + 0x150) & 0xfc000000;
          *(uint *)(iVar7 + 0x150) = uVar26;
          *(uint *)(iVar7 + 0x150) = uVar26 | *(uint *)(iVar21 + 0x14) & 0x3ffffff;
          *(uint *)(*(int *)(iVar19 + 0xc) + 0x40) =
               *(uint *)(*(int *)(iVar19 + 0xc) + 0x40) | 0x10000;
          puVar14 = *(undefined **)(iVar21 + 0xc);
          *(uint *)(puVar14 + 0x44) = *(uint *)(puVar14 + 0x44) | 8;
        }
      }
      if ((*(uint *)(iVar21 + 0x18) & 0x400) != 0) {
        puVar14 = *(undefined **)(iVar19 + 0xc);
        *(uint *)(puVar14 + 0x40) = *(uint *)(puVar14 + 0x40) | 0x40;
      }
      iVar18 = *(int *)(iVar21 + 0x10);
      cVar4 = *(char *)(iVar18 + 1);
      if (cVar4 == '\x06') {
        pcVar17 = (code *)(int)*(short *)(iVar7 + 0x16e);
        puVar14 = &DAT_0209fb64;
      }
      if (cVar4 == '\x06') {
        iVar25 = *(int *)(puVar14 + ((int)pcVar17 >> 6) * 4);
      }
      else {
        iVar25 = 0x100;
      }
      iVar8 = iVar25 * *(char *)(iVar18 + 0xc) * 0x80 >> 8;
      iVar18 = iVar25 * *(char *)(iVar18 + 0xd) * -0x9e >> 8;
      if ((uVar9 & 1) != 0) {
        iVar8 = iVar8 << 1;
        iVar18 = iVar18 << 1;
      }
      if (cVar4 == '\x06') {
        uVar26 = *(uint *)(*(int *)(iVar19 + 0xc) + 0x44);
        if ((uVar26 & 0x80) != 0) {
          iVar8 = iVar8 - (iVar8 >> 1);
          iVar18 = iVar18 - (iVar18 >> 1);
        }
        if ((uVar26 & 0x8000) != 0) {
          iVar8 = iVar8 + (iVar8 >> 1);
          iVar18 = iVar18 + (iVar18 >> 1);
        }
      }
      if ((*(uint *)(iVar21 + 0x14) & 0x1000000) != 0) {
        iVar8 = 0;
        iVar18 = iVar8;
      }
      sVar22 = (short)iVar8;
      if (((*(uint *)(iVar21 + 0x14) & 0x4000000) != 0) && ((*(uint *)(iVar19 + 0x14) & 0x700) != 0)
         ) {
        sVar22 = 0x300;
        iVar18 = -0x500;
      }
      if ((*(uint *)(iVar21 + 0x18) & 4) == 0) {
        iVar15 = FUN_0206cf28(*(undefined4 *)(*(int *)(iVar21 + 0xc) + 0x30));
        iVar16 = *(int *)(iVar19 + 0xc);
        if (iVar15 == 0) {
          *(uint *)(iVar16 + 0x40) = *(uint *)(iVar16 + 0x40) | 0x20;
          *(short *)(iVar7 + 0x148) = *(short *)(iVar7 + 0x148) + sVar22;
        }
        else {
          *(uint *)(iVar16 + 0x40) = *(uint *)(iVar16 + 0x40) & 0xffffffdf;
          *(short *)(iVar7 + 0x148) = *(short *)(iVar7 + 0x148) - sVar22;
        }
      }
      else {
        iVar25 = *(int *)(iVar19 + 0xc);
        if (*(int *)(iVar16 + 0xc) < *(int *)(iVar15 + 0xc)) {
          *(uint *)(iVar25 + 0x40) = *(uint *)(iVar25 + 0x40) | 0x20;
          *(short *)(iVar7 + 0x148) = *(short *)(iVar7 + 0x148) + sVar22;
        }
        else {
          *(uint *)(iVar25 + 0x40) = *(uint *)(iVar25 + 0x40) & 0xffffffdf;
          *(short *)(iVar7 + 0x148) = *(short *)(iVar7 + 0x148) - sVar22;
        }
      }
      if (*(short *)(iVar7 + 0x16c) == 8) {
        iVar15 = FUN_0206cf28(*(undefined4 *)(*(int *)(iVar19 + 0xc) + 0x30));
        iVar16 = *(int *)(iVar19 + 0xc);
        if (iVar15 == 0) {
          *(uint *)(iVar16 + 0x40) = *(uint *)(iVar16 + 0x40) & 0xffffffdf;
        }
        else {
          *(uint *)(iVar16 + 0x40) = *(uint *)(iVar16 + 0x40) | 0x20;
        }
      }
      *(short *)(iVar7 + 0x14a) = *(short *)(iVar7 + 0x14a) + (short)((uint)(iVar18 * 0xdf) >> 8);
      if (0 < *(short *)(iVar7 + 0x14a)) {
        *(uint *)(*(int *)(iVar19 + 0xc) + 0x78) =
             *(uint *)(*(int *)(iVar19 + 0xc) + 0x78) | 0x80000;
        *(undefined1 *)(*(int *)(iVar19 + 0xc) + 0x9e) = 0;
      }
      if ((((*(uint *)(iVar21 + 0x14) & 0x3000000) != 0) && ((uVar27 & 0x37f0) == 0)) &&
         ((*(uint *)(*(int *)(iVar19 + 0xc) + 0x40) & 0x4000000) == 0)) {
        FUN_02081ab0(param_1,iVar21,iVar6);
      }
      iVar6 = *(int *)(iVar21 + 0x10);
      uVar11 = FUN_0206cf28(*(undefined4 *)(*(int *)(iVar21 + 0xc) + 0x30));
      func_0x02153ce8(*(undefined4 *)(*(int *)(iVar21 + 0xc) + 0x6c),local_58,local_54,local_30,
                      local_34,uVar11,*(undefined1 *)(iVar6 + 0x10),*(undefined1 *)(iVar6 + 0x11),
                      uVar29);
    }
    else {
      bVar5 = false;
      for (puVar24 = *(undefined4 **)(iVar7 + 0x28); puVar24 != (undefined4 *)0x0;
          puVar24 = (undefined4 *)*puVar24) {
        if (*(int *)(puVar24[2] + 0x10) == *(int *)(iVar6 + 0xc)) {
          bVar5 = true;
          break;
        }
      }
      if (!bVar5) goto LAB_020811a8;
    }
    local_4c = (undefined4 *)*local_4c;
  } while( true );
}

