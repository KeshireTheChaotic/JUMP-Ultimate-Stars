
void FUN_01ffe654(int param_1,undefined4 param_2,int param_3,uint param_4)

{
  short sVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int unaff_r4;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int unaff_r10;
  uint uVar17;
  undefined4 uVar18;
  int iVar19;
  byte *unaff_r11;
  byte *pbVar20;
  byte *pbVar21;
  undefined1 *in_r12;
  bool bVar22;
  undefined4 local_50 [17];
  
  if (unaff_r10 < 8) {
    uVar10 = (uint)*(char *)((uint)(byte)(&DAT_027c00cc)[unaff_r10] * 0x10 + 0x27c01a8 +
                            (param_4 >> 0x1c));
    if ((((int)uVar10 < 0) &&
        (uVar10 = (uint)*(char *)(uVar10 * -0x10 + 0x27c01a8 + ((param_4 & 0xfffffff) >> 0x18)),
        (int)uVar10 < 0)) &&
       (uVar10 = (uint)*(char *)(uVar10 * -0x10 + 0x27c01a8 + ((param_4 & 0xffffff) >> 0x14)),
       (int)uVar10 < 0)) {
      uVar10 = (uint)*(char *)(uVar10 * -0x10 + 0x27c01a8 + ((param_4 & 0xfffff) >> 0x10));
    }
    uVar13 = (uint)(byte)(&DAT_027c00cc)[uVar10 + (byte)(&DAT_027c00d4)[unaff_r10]];
    uVar8 = uVar10 & 3;
    uVar15 = param_4 << uVar13;
    iVar4 = param_3 - uVar13;
    if (param_3 < (int)uVar13) {
      param_1 = FUN_01ff943c();
    }
    uVar10 = uVar10 >> 2;
    *in_r12 = (char)uVar10;
    if (uVar10 == 0) {
      return;
    }
  }
  else {
    uVar15 = param_4 << 6;
    iVar4 = param_3 + -6;
    if (param_3 < 6) {
      param_1 = FUN_01ff943c();
    }
    uVar8 = param_4 >> 0x1a & 3;
    uVar13 = (param_4 >> 0x1c) + 1;
    uVar10 = uVar13;
    if (uVar13 < uVar8) {
      uVar10 = 0;
    }
    *in_r12 = (char)uVar10;
    if (uVar13 < uVar8) {
      return;
    }
  }
  puVar12 = local_50 + 1;
  if (uVar10 == 0x10) {
    uVar13 = 0;
    iVar5 = iVar4;
  }
  else {
    uVar13 = (uint)*(byte *)(*(int *)(&DAT_027c0060 + (uVar10 + 3) * 4) +
                            (uVar15 >> (0x20 - (byte)(&DAT_027c005f)[uVar10] & 0xff)) + 0x10);
    uVar14 = (uint)*(byte *)(*(int *)(&DAT_027c0060 + (uVar10 + 3) * 4) + uVar13);
    uVar15 = uVar15 << uVar14;
    iVar5 = iVar4 - uVar14;
    if (iVar4 < (int)uVar14) {
      param_1 = FUN_01ff943c();
    }
    for (iVar4 = 0x10 - (uVar10 + uVar13); iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar12 = puVar12 + -1;
      *puVar12 = 0;
    }
  }
  uVar14 = 0;
  do {
    do {
      uVar9 = uVar8 - 1;
      if ((int)uVar8 < 1) {
        iVar4 = LZCOUNT(uVar15);
        uVar8 = (uVar15 << iVar4) * 2;
        iVar6 = (iVar5 - iVar4) + -1;
        if (iVar5 - iVar4 < 1) {
          param_1 = FUN_01ff943c();
        }
        if (iVar4 == 0xf) {
          iVar4 = (uVar8 >> 0x15) + (0xf << (uVar14 & 0xff));
          if ((int)(&DAT_01ffe5e4)[uVar14] < iVar4) {
            uVar14 = uVar14 + 1;
          }
          uVar15 = uVar8 << 0xc;
          iVar4 = iVar4 + 1;
          if ((bool)((byte)(uVar8 >> 0x14) & 1)) {
            iVar4 = -iVar4;
          }
          puVar12[-1] = iVar4;
          iVar4 = iVar6 + -0xc;
          if (iVar6 < 0xc) {
            param_1 = FUN_01ff943c();
          }
        }
        else {
          uVar16 = (uVar8 >> (0x20 - uVar14 & 0xff)) + (iVar4 << (uVar14 & 0xff));
          puVar3 = &DAT_01ffe5e4 + uVar14;
          uVar17 = uVar14 + 1;
          if ((int)*puVar3 < (int)uVar16) {
            uVar14 = uVar14 + 1;
          }
          uVar2 = uVar17 & 0xff;
          uVar15 = uVar8 << uVar2;
          iVar4 = uVar16 + 1;
          if (uVar2 == 0 && *puVar3 <= uVar16 ||
              uVar2 != 0 && (bool)((byte)(uVar8 >> 0x20 - uVar2) & 1)) {
            iVar4 = -iVar4;
          }
          puVar12[-1] = iVar4;
          iVar4 = iVar6 - uVar17;
          if (iVar6 < (int)uVar17) {
            param_1 = FUN_01ff943c();
          }
        }
      }
      else {
        bVar22 = CARRY4(uVar15,uVar15);
        uVar15 = uVar15 * 2;
        if (bVar22) {
          uVar18 = 0xffffffff;
        }
        else {
          uVar18 = 1;
        }
        puVar12[-1] = uVar18;
        iVar4 = iVar5 + -1;
        if (iVar5 < 1) {
          param_1 = FUN_01ff943c();
        }
      }
      puVar12 = puVar12 + -1;
      uVar10 = uVar10 - 1;
      if (uVar10 == 0) {
        for (; uVar13 != 0; uVar13 = uVar13 - 1) {
          puVar12 = puVar12 + -1;
          *puVar12 = 0;
        }
        sVar1 = (short)*(undefined4 *)(param_1 + 0x14);
        iVar4 = (int)(short)*puVar12 * (int)sVar1;
        iVar5 = (int)(short)puVar12[3] * (int)sVar1;
        iVar11 = iVar4 + iVar5;
        iVar4 = iVar4 - iVar5;
        sVar1 = (short)*(undefined4 *)(param_1 + 0x24);
        iVar5 = (int)(short)puVar12[2] * (int)sVar1;
        iVar6 = (int)(short)puVar12[9] * (int)sVar1;
        iVar7 = (iVar5 >> 1) - iVar6;
        iVar5 = iVar5 + (iVar6 >> 1);
        puVar12[0x10] = iVar11 + iVar5;
        puVar12[0x14] = iVar4 + iVar7;
        puVar12[0x18] = iVar4 - iVar7;
        puVar12[0x1c] = iVar11 - iVar5;
        sVar1 = (short)*(undefined4 *)(param_1 + 0x18);
        iVar4 = (int)(short)puVar12[1] * (int)sVar1;
        iVar5 = (int)(short)puVar12[8] * (int)sVar1;
        iVar11 = iVar4 + iVar5;
        iVar4 = iVar4 - iVar5;
        sVar1 = (short)*(undefined4 *)(param_1 + 0x28);
        iVar5 = (int)(short)puVar12[4] * (int)sVar1;
        iVar6 = (int)(short)puVar12[10] * (int)sVar1;
        iVar7 = (iVar5 >> 1) - iVar6;
        iVar5 = iVar5 + (iVar6 >> 1);
        puVar12[0x11] = iVar11 + iVar5;
        puVar12[0x15] = iVar4 + iVar7;
        puVar12[0x19] = iVar4 - iVar7;
        puVar12[0x1d] = iVar11 - iVar5;
        sVar1 = (short)*(undefined4 *)(param_1 + 0x1c);
        iVar4 = (int)(short)puVar12[5] * (int)sVar1;
        iVar5 = (int)(short)puVar12[0xb] * (int)sVar1;
        iVar11 = iVar4 + iVar5;
        iVar4 = iVar4 - iVar5;
        sVar1 = (short)*(undefined4 *)(param_1 + 0x2c);
        iVar5 = (int)(short)puVar12[7] * (int)sVar1;
        iVar6 = (int)(short)puVar12[0xe] * (int)sVar1;
        iVar7 = (iVar5 >> 1) - iVar6;
        iVar5 = iVar5 + (iVar6 >> 1);
        puVar12[0x12] = iVar11 + iVar5;
        puVar12[0x16] = iVar4 + iVar7;
        puVar12[0x1a] = iVar4 - iVar7;
        puVar12[0x1e] = iVar11 - iVar5;
        sVar1 = (short)*(undefined4 *)(param_1 + 0x20);
        iVar4 = (int)(short)puVar12[6] * (int)sVar1;
        iVar5 = (int)(short)puVar12[0xd] * (int)sVar1;
        iVar11 = iVar4 + iVar5;
        iVar4 = iVar4 - iVar5;
        sVar1 = (short)*(undefined4 *)(param_1 + 0x30);
        iVar5 = (int)(short)puVar12[0xc] * (int)sVar1;
        iVar6 = (int)(short)puVar12[0xf] * (int)sVar1;
        iVar7 = (iVar5 >> 1) - iVar6;
        iVar5 = iVar5 + (iVar6 >> 1);
        puVar12[0x13] = iVar11 + iVar5;
        puVar12[0x17] = iVar4 + iVar7;
        puVar12[0x1b] = iVar4 - iVar7;
        puVar12[0x1f] = iVar11 - iVar5;
        iVar11 = puVar12[0x10] + puVar12[0x12];
        iVar19 = puVar12[0x10] - puVar12[0x12];
        iVar5 = ((int)puVar12[0x11] >> 1) - puVar12[0x13];
        iVar6 = puVar12[0x11] + ((int)puVar12[0x13] >> 1);
        iVar4 = iVar11 + iVar6 + 0x20 >> 6;
        iVar7 = (uint)*unaff_r11 + iVar4;
        if (iVar7 < 0 != SCARRY4((uint)*unaff_r11,iVar4)) {
          iVar7 = 0;
        }
        if (0xff < iVar7) {
          iVar7 = 0xff;
        }
        pbVar20 = unaff_r11 + unaff_r4;
        *unaff_r11 = (byte)iVar7;
        iVar4 = iVar19 + iVar5 + 0x20 >> 6;
        iVar7 = (uint)*pbVar20 + iVar4;
        if (iVar7 < 0 != SCARRY4((uint)*pbVar20,iVar4)) {
          iVar7 = 0;
        }
        if (0xff < iVar7) {
          iVar7 = 0xff;
        }
        pbVar21 = pbVar20 + unaff_r4;
        *pbVar20 = (byte)iVar7;
        iVar4 = (iVar19 - iVar5) + 0x20 >> 6;
        iVar5 = (uint)*pbVar21 + iVar4;
        if (iVar5 < 0 != SCARRY4((uint)*pbVar21,iVar4)) {
          iVar5 = 0;
        }
        if (0xff < iVar5) {
          iVar5 = 0xff;
        }
        pbVar20 = pbVar21 + unaff_r4;
        *pbVar21 = (byte)iVar5;
        iVar4 = (iVar11 - iVar6) + 0x20 >> 6;
        iVar5 = (uint)*pbVar20 + iVar4;
        if (iVar5 < 0 != SCARRY4((uint)*pbVar20,iVar4)) {
          iVar5 = 0;
        }
        if (0xff < iVar5) {
          iVar5 = 0xff;
        }
        *pbVar20 = (byte)iVar5;
        pbVar20 = pbVar20 + unaff_r4 * -3 + 0x100;
        iVar11 = puVar12[0x14] + puVar12[0x16];
        iVar19 = puVar12[0x14] - puVar12[0x16];
        iVar5 = ((int)puVar12[0x15] >> 1) - puVar12[0x17];
        iVar6 = puVar12[0x15] + ((int)puVar12[0x17] >> 1);
        iVar4 = iVar11 + iVar6 + 0x20 >> 6;
        iVar7 = (uint)*pbVar20 + iVar4;
        if (iVar7 < 0 != SCARRY4((uint)*pbVar20,iVar4)) {
          iVar7 = 0;
        }
        if (0xff < iVar7) {
          iVar7 = 0xff;
        }
        pbVar21 = pbVar20 + unaff_r4;
        *pbVar20 = (byte)iVar7;
        iVar4 = iVar19 + iVar5 + 0x20 >> 6;
        iVar7 = (uint)*pbVar21 + iVar4;
        if (iVar7 < 0 != SCARRY4((uint)*pbVar21,iVar4)) {
          iVar7 = 0;
        }
        if (0xff < iVar7) {
          iVar7 = 0xff;
        }
        pbVar20 = pbVar21 + unaff_r4;
        *pbVar21 = (byte)iVar7;
        iVar4 = (iVar19 - iVar5) + 0x20 >> 6;
        iVar5 = (uint)*pbVar20 + iVar4;
        if (iVar5 < 0 != SCARRY4((uint)*pbVar20,iVar4)) {
          iVar5 = 0;
        }
        if (0xff < iVar5) {
          iVar5 = 0xff;
        }
        pbVar21 = pbVar20 + unaff_r4;
        *pbVar20 = (byte)iVar5;
        iVar4 = (iVar11 - iVar6) + 0x20 >> 6;
        iVar5 = (uint)*pbVar21 + iVar4;
        if (iVar5 < 0 != SCARRY4((uint)*pbVar21,iVar4)) {
          iVar5 = 0;
        }
        if (0xff < iVar5) {
          iVar5 = 0xff;
        }
        *pbVar21 = (byte)iVar5;
        pbVar21 = pbVar21 + unaff_r4 * -3 + 0x100;
        iVar11 = puVar12[0x18] + puVar12[0x1a];
        iVar19 = puVar12[0x18] - puVar12[0x1a];
        iVar5 = ((int)puVar12[0x19] >> 1) - puVar12[0x1b];
        iVar6 = puVar12[0x19] + ((int)puVar12[0x1b] >> 1);
        iVar4 = iVar11 + iVar6 + 0x20 >> 6;
        iVar7 = (uint)*pbVar21 + iVar4;
        if (iVar7 < 0 != SCARRY4((uint)*pbVar21,iVar4)) {
          iVar7 = 0;
        }
        if (0xff < iVar7) {
          iVar7 = 0xff;
        }
        pbVar20 = pbVar21 + unaff_r4;
        *pbVar21 = (byte)iVar7;
        iVar4 = iVar19 + iVar5 + 0x20 >> 6;
        iVar7 = (uint)*pbVar20 + iVar4;
        if (iVar7 < 0 != SCARRY4((uint)*pbVar20,iVar4)) {
          iVar7 = 0;
        }
        if (0xff < iVar7) {
          iVar7 = 0xff;
        }
        pbVar21 = pbVar20 + unaff_r4;
        *pbVar20 = (byte)iVar7;
        iVar4 = (iVar19 - iVar5) + 0x20 >> 6;
        iVar5 = (uint)*pbVar21 + iVar4;
        if (iVar5 < 0 != SCARRY4((uint)*pbVar21,iVar4)) {
          iVar5 = 0;
        }
        if (0xff < iVar5) {
          iVar5 = 0xff;
        }
        pbVar20 = pbVar21 + unaff_r4;
        *pbVar21 = (byte)iVar5;
        iVar4 = (iVar11 - iVar6) + 0x20 >> 6;
        iVar5 = (uint)*pbVar20 + iVar4;
        if (iVar5 < 0 != SCARRY4((uint)*pbVar20,iVar4)) {
          iVar5 = 0;
        }
        if (0xff < iVar5) {
          iVar5 = 0xff;
        }
        *pbVar20 = (byte)iVar5;
        pbVar20 = pbVar20 + unaff_r4 * -3 + 0x100;
        iVar11 = puVar12[0x1c] + puVar12[0x1e];
        iVar19 = puVar12[0x1c] - puVar12[0x1e];
        iVar5 = ((int)puVar12[0x1d] >> 1) - puVar12[0x1f];
        iVar6 = puVar12[0x1d] + ((int)puVar12[0x1f] >> 1);
        iVar4 = iVar11 + iVar6 + 0x20 >> 6;
        iVar7 = (uint)*pbVar20 + iVar4;
        if (iVar7 < 0 != SCARRY4((uint)*pbVar20,iVar4)) {
          iVar7 = 0;
        }
        if (0xff < iVar7) {
          iVar7 = 0xff;
        }
        pbVar21 = pbVar20 + unaff_r4;
        *pbVar20 = (byte)iVar7;
        iVar4 = iVar19 + iVar5 + 0x20 >> 6;
        iVar7 = (uint)*pbVar21 + iVar4;
        if (iVar7 < 0 != SCARRY4((uint)*pbVar21,iVar4)) {
          iVar7 = 0;
        }
        if (0xff < iVar7) {
          iVar7 = 0xff;
        }
        pbVar20 = pbVar21 + unaff_r4;
        *pbVar21 = (byte)iVar7;
        iVar4 = (iVar19 - iVar5) + 0x20 >> 6;
        iVar5 = (uint)*pbVar20 + iVar4;
        if (iVar5 < 0 != SCARRY4((uint)*pbVar20,iVar4)) {
          iVar5 = 0;
        }
        if (0xff < iVar5) {
          iVar5 = 0xff;
        }
        *pbVar20 = (byte)iVar5;
        uVar15 = (uint)pbVar20[unaff_r4];
        iVar4 = (iVar11 - iVar6) + 0x20 >> 6;
        iVar5 = uVar15 + iVar4;
        if (iVar5 < 0 != SCARRY4(uVar15,iVar4)) {
          iVar5 = 0;
        }
        if (0xff < iVar5) {
          iVar5 = 0xff;
        }
        pbVar20[unaff_r4] = (byte)iVar5;
        return;
      }
      iVar5 = iVar4;
      uVar8 = uVar9;
    } while ((int)uVar13 < 1);
    if ((int)(uVar13 - 1) < 6) {
      uVar16 = (uint)*(byte *)(*(int *)(&DAT_027c00ac + (uVar13 + 1) * 4) +
                              (uVar15 >> (0x20 - (byte)(&DAT_027c00ab)[uVar13] & 0xff)) + 0x10);
      uVar9 = (uint)*(byte *)(*(int *)(&DAT_027c00ac + (uVar13 + 1) * 4) + uVar16);
LAB_01ffe7f0:
      uVar15 = uVar15 << uVar9;
      bVar22 = SBORROW4(iVar4,uVar9);
      iVar5 = iVar4 - uVar9;
    }
    else {
      uVar9 = LZCOUNT(uVar15) + 1;
      if (3 < uVar9) {
        uVar16 = LZCOUNT(uVar15) + 4;
        goto LAB_01ffe7f0;
      }
      uVar16 = 7 - (uVar15 >> 0x1d);
      uVar15 = uVar15 << 3;
      bVar22 = SBORROW4(iVar4,3);
      iVar5 = iVar4 + -3;
    }
    if (iVar5 < 0 != bVar22) {
      param_1 = FUN_01ff943c();
    }
    if (uVar16 != 0) {
      uVar13 = uVar13 - uVar16;
      do {
        puVar12 = puVar12 + -1;
        *puVar12 = 0;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
  } while( true );
}

