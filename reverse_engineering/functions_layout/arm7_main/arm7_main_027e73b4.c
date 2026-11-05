
/* WARNING: Removing unreachable block (ram,0x027e7488) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4
FUN_027e73b4(ushort param_1,ushort param_2,ushort param_3,ushort *param_4,uint *param_5,int *param_6
            )

{
  uint uVar1;
  undefined2 uVar2;
  bool bVar3;
  ushort uVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ushort uVar12;
  int iVar13;
  ushort uVar14;
  int iVar15;
  ushort *puVar16;
  ushort *puVar17;
  ushort *puVar18;
  ushort *puVar19;
  uint uVar20;
  uint uVar21;
  ushort *puVar22;
  bool bVar23;
  bool bVar24;
  uint uStack_80;
  uint uStack_74;
  uint uStack_64;
  undefined2 *puStack_60;
  ushort *puStack_5c;
  uint uStack_58;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  
  iVar7 = DAT_027f97f0;
  uVar20 = (uint)*(ushort *)(DAT_027f97f0 + 0x38);
  puVar17 = *(ushort **)(DAT_027f97f0 + 0x7c);
  if ((uint)*(ushort *)(DAT_027f97f0 + 0x80) < (uVar20 + 0x1f & 0xffffffe0)) {
    return 1;
  }
  if (0xf < *(ushort *)(DAT_027f97f0 + 0x188)) {
    return 1;
  }
  if (*(short *)DAT_027f97f0 == 9) {
    bVar3 = true;
  }
  else {
    if (*(short *)DAT_027f97f0 != 10) {
      return 1;
    }
    bVar3 = false;
  }
  uStack_74 = 0;
  *param_4 = 0;
  *param_5 = 0;
  iVar15 = 0;
  *param_6 = 0;
  uVar4 = param_3;
  if (bVar3) {
    bVar23 = *(short *)(iVar7 + 0x92) != 0;
    if (bVar23) {
      uVar4 = param_2;
    }
    bVar23 = !bVar23;
  }
  else {
    bVar23 = false;
  }
  uStack_80 = 0;
  bVar5 = true;
  FUN_037fce24(iVar7 + 0x71c);
  if (*(int *)(iVar7 + 0x734) == 1) {
    FUN_037fcdb4(iVar7 + 0x71c);
    return 1;
  }
  *(undefined4 *)(iVar7 + 0x734) = 1;
  iVar8 = iVar7 + 0x2f8;
  uStack_64 = 0;
  puVar22 = (ushort *)(iVar7 + 0x70c);
  puStack_60 = (undefined2 *)(iVar7 + 0x6fc);
  iStack_38 = 0;
  iStack_3c = 2;
  iStack_34 = 0;
  iStack_30 = 0;
  while ((uStack_64 < 4 && (2 < (int)uVar20))) {
    uStack_58 = 0xffff;
    uVar21 = (uint)*puVar22;
    puStack_5c = puVar22;
    while ((uVar21 != 0xffff && (2 < (int)uVar20))) {
      puVar16 = (ushort *)(iVar8 + uVar21 * 0x20);
      uVar1 = 1 << (puVar16[1] & 0xff);
      uVar11 = uVar21;
      if ((uStack_80 & uVar1) == 0) {
        uStack_80 = uStack_80 | uVar1;
        uVar14 = puVar16[3] & uVar4;
        if ((!bVar23) || ((uVar14 & ~(param_3 & param_1)) == 0)) {
          bVar24 = (puVar16[1] & 8) != 0;
          if ((bVar3) && ((uVar14 | 1) != 0xffff)) {
            bVar6 = true;
          }
          else {
            bVar6 = false;
          }
          if ((puVar16[7] & 1) == 1) {
            puVar16[7] = puVar16[7] + 1;
          }
          if (bVar24) {
            iVar9 = iStack_3c;
          }
          else {
            iVar9 = iStack_38;
          }
          if (bVar5) {
            iVar13 = iStack_34;
          }
          else {
            iVar13 = iStack_3c;
          }
          if (bVar6) {
            iVar10 = iStack_3c;
          }
          else {
            iVar10 = iStack_30;
          }
          if ((int)(iVar10 + (uint)puVar16[7] + iVar13 + iVar9) <= (int)uVar20) {
            puVar18 = puVar17;
            if (!bVar5) {
              puVar18 = puVar17 + 1;
              *puVar17 = 0;
              iVar15 = iVar15 + 2;
              uVar20 = uVar20 - 2;
              param_4 = puVar17;
            }
            *param_4 = *param_4 | (puVar16[1] & 0xf) << 8 | puVar16[7] >> 1 & 0xff;
            MIi_CpuCopy16(*(undefined4 *)(puVar16 + 10),puVar18);
            uVar11 = (uint)puVar16[7];
            puVar18 = (ushort *)((int)puVar18 + (uVar11 & 0xfffffffe));
            iVar15 = iVar15 + uVar11;
            uVar20 = uVar20 - uVar11;
            puVar19 = puVar18;
            if (bVar24) {
              if ((puVar16[8] & 1) == 0) {
                uVar12 = (ushort)((int)(uint)puVar16[8] >> 1);
              }
              else {
                iVar9 = iVar7 + (uint)*(ushort *)(iVar7 + 0x188) * 0x10 + (puVar16[1] & 7) * 2;
                uVar12 = *(ushort *)(iVar9 + 0x1f8);
                *(ushort *)(iVar9 + 0x1f8) = uVar12 + 1;
                puVar16[8] = uVar12 << 1;
              }
              puVar19 = puVar18 + 1;
              *puVar18 = uVar12 & 0x7fff;
              iVar15 = iVar15 + 2;
              uVar20 = uVar20 - 2;
            }
            puVar17 = puVar19;
            if (bVar6) {
              *param_4 = *param_4 | 0x1000;
              puVar17 = puVar19 + 1;
              *puVar19 = uVar14;
              iVar15 = iVar15 + 2;
              uVar20 = uVar20 - 2;
            }
            if (bVar5) {
              bVar5 = false;
            }
            if (puVar22[1] == uVar21) {
              puVar22[1] = (ushort)uStack_58;
            }
            *puStack_5c = *puVar16;
            *puVar16 = 0xffff;
            uVar2 = (undefined2)uVar21;
            if ((ushort)puStack_60[1] == 0xffff) {
              *puStack_60 = uVar2;
            }
            else {
              *(undefined2 *)(iVar8 + (uint)(ushort)puStack_60[1] * 0x20) = uVar2;
            }
            puStack_60[1] = uVar2;
            puVar16[5] = uVar14;
            uStack_80 = uStack_80 & ~uVar1;
            uStack_74 = uStack_74 | puVar16[2];
            uVar11 = uStack_58;
            if (*(short *)(iVar7 + 0x94) == 1) goto LAB_027e78a4;
          }
        }
      }
      uStack_58 = uVar11;
      if (uVar11 == 0xffff) {
        uVar21 = (uint)*puVar22;
        puStack_5c = puVar22;
      }
      else {
        uVar21 = (uint)*(ushort *)(iVar8 + uVar11 * 0x20);
        puStack_5c = (ushort *)(iVar8 + uVar11 * 0x20);
      }
    }
    puVar22 = puVar22 + 2;
    puStack_60 = puStack_60 + 2;
    uStack_64 = uStack_64 + 1;
  }
LAB_027e78a4:
  *param_5 = uStack_74;
  *param_6 = iVar15;
  FUN_037fcdb4(iVar7 + 0x71c);
  return 0;
}

