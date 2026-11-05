
/* JUS-CLASS jus_TagSPD2::vfunc_07 [class-virtual] slot 7 of vtable 02096068 (own slot, not
   inherited) */

void jus_TagSPD2::vfunc_07(int param_1)

{
  uint uVar1;
  short sVar2;
  char cVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int *unaff_r5;
  uint uVar17;
  int *piVar18;
  int iVar19;
  uint uVar20;
  int *piVar21;
  int iVar22;
  ushort *puVar23;
  uint unaff_r11;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  uint local_120;
  uint local_118;
  uint local_10c;
  uint local_104;
  undefined2 *local_100;
  uint local_fc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4 [16];
  uint local_64 [16];
  
  bVar25 = *(short *)(param_1 + 0x4a) == -1;
  piVar4 = (int *)0xffffffff;
  if (!bVar25) {
    unaff_r5 = *(int **)(param_1 + 0x20);
    piVar4 = DAT_020a1054;
  }
  if (bVar25 || unaff_r5 == piVar4) {
    return;
  }
  (**(code **)(*unaff_r5 + 0x34))(unaff_r5,0);
  piVar4 = (int *)(**(code **)(*unaff_r5 + 0x3c))();
  if (piVar4 == (int *)0x0) {
    return;
  }
  piVar5 = (int *)(**(code **)(**(int **)(*(int *)(param_1 + 0x38) + 0x50) + 0x4c))();
  piVar18 = *(int **)(param_1 + 0x34);
  cVar3 = '\0';
  bVar25 = *(char *)((int)piVar18 + 0x903) != '\0';
  if (bVar25) {
    cVar3 = *(char *)(param_1 + 100);
  }
  bVar25 = bVar25 && cVar3 != '\0';
  local_118 = (uint)bVar25;
  iVar6 = (**(code **)(*piVar4 + 0x20))();
  bVar26 = iVar6 != 0x3443464e;
  if (!bVar26) {
    iVar6 = *(int *)(param_1 + 0x50);
  }
  if (bVar26 || iVar6 != 0) {
    iVar6 = (**(code **)(*piVar4 + 0x20))();
    iVar13 = 0x3442464e;
    if (iVar6 != 0x3442464e) {
      iVar6 = (**(code **)(*piVar4 + 0x20))();
      iVar13 = 0x344c4646;
      if (iVar6 != 0x344c4646) goto LAB_0203f748;
    }
    iVar9 = *(int *)(param_1 + 0x50);
    if (iVar9 != 0) {
      iVar13 = *(int *)(param_1 + 0x5c);
      iVar6 = *(int *)(*(int *)(param_1 + 0x20) + 8);
    }
    if ((iVar9 != 0 && iVar13 != iVar6) && (*(uint *)(param_1 + 0x54) < (uint)piVar4[9])) {
      iVar6 = FUN_0201a9ec(iVar9);
      if (iVar6 == 0) {
        FUN_0201a958(iVar9,1);
      }
      *(undefined4 *)(param_1 + 0x50) = 0;
    }
    if (*(int *)(param_1 + 0x50) == 0) {
      *(int *)(param_1 + 0x54) = piVar4[9];
      uVar7 = FUN_0201a228();
      *(undefined4 *)(param_1 + 0x50) = uVar7;
    }
  }
  else {
    uVar7 = FUN_0201a418(DAT_020a0dd8,0,0x2000);
    *(undefined4 *)(param_1 + 0x50) = uVar7;
  }
LAB_0203f748:
  iVar13 = piVar4[3];
  uVar7 = (**(code **)(*piVar18 + 0x80))();
  uVar8 = (**(code **)(*piVar18 + 0x84))();
  bVar26 = piVar5[2] != 0;
  iVar6 = 0;
  if (bVar26) {
    iVar6 = piVar5[1];
  }
  bVar27 = iVar6 != 0;
  iVar6 = *piVar5;
  bVar28 = iVar6 == 0x1000;
  if (bVar28) {
    iVar6 = piVar5[3];
  }
  bVar24 = bVar28 && iVar6 == 0x1000;
  if (bVar28 && iVar6 == 0x1000) {
    bVar24 = !bVar26 || !bVar27;
  }
  local_fc = FUN_02043c18(unaff_r5,(int)*(short *)(param_1 + 0x4a) + (int)*(short *)(param_1 + 0x4c)
                         );
  local_120 = 0;
  local_104 = 0;
  iVar6 = FUN_02019ddc(param_1 + 0x14);
  iVar6 = *(int *)(iVar6 + 0x10);
  if (!bVar24) {
    if (!bVar26 || !bVar27) {
      iVar9 = 0;
      if (*piVar5 != 0) {
        iVar9 = piVar5[3];
      }
      if (*piVar5 == 0 || iVar9 == 0) {
        return;
      }
    }
    if (bVar26 && bVar27) {
      local_c4 = *piVar5;
      local_c0 = piVar5[1];
      local_bc = piVar5[2];
      local_b8 = piVar5[3];
      local_b4 = *piVar5;
      local_b0 = piVar5[1];
      local_ac = piVar5[2];
      local_a8 = piVar5[3];
    }
    else {
      local_d4 = (int)DAT_0208dcae;
      local_d0 = (int)DAT_0208dcac;
      local_cc = -local_d0;
      iVar19 = *piVar5;
      local_c8 = local_d4;
      iVar9 = FUN_0200d12c(0x1000000,iVar19);
      iVar22 = piVar5[3];
      iVar10 = FUN_0200d12c(0x1000000,iVar22);
      bVar28 = *(char *)(param_1 + 0x48) != '\0';
      if (bVar28) {
        iVar9 = -iVar9;
      }
      if (bVar28) {
        iVar19 = -iVar19;
      }
      if (*(char *)(param_1 + 0x49) != '\0') {
        iVar10 = -iVar10;
        iVar22 = -iVar22;
      }
      FUN_020506ec(&local_d4,&local_c4,iVar9,iVar10);
      FUN_020506ec(&local_d4,&local_b4,iVar19,iVar22);
    }
    local_120 = FUN_0204121c(piVar18 + 0x129,&local_c4);
  }
  if (local_fc == 0) {
    iVar9 = (**(code **)(*(int *)unaff_r5[7] + 0x14))();
    if (iVar9 == 0) {
      return;
    }
    local_fc = 1;
    sVar2 = (short)piVar4[2];
    bVar28 = sVar2 == 0x20;
    if (bVar28) {
      sVar2 = *(short *)((int)piVar4 + 10);
    }
    if (bVar28 && sVar2 == 0x20) {
      DAT_020a10ac = 0;
      DAT_020a10ae = 0;
      DAT_020a10af = 0;
      DAT_020a10b0 = 2;
      DAT_020a10b1 = 0;
    }
    local_100 = &DAT_020a10ac;
  }
  else {
    local_100 = (undefined2 *)
                FUN_02043c5c(unaff_r5,(int)*(short *)(param_1 + 0x4a) +
                                      (int)*(short *)(param_1 + 0x4c));
  }
  uVar17 = 0;
  do {
    if (local_fc <= uVar17) {
      *(int *)(param_1 + 0x58) = (int)*(short *)(param_1 + 0x4a) + (int)*(short *)(param_1 + 0x4c);
      *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(*(int *)(param_1 + 0x20) + 8);
      return;
    }
    puVar23 = local_100 + uVar17 * 3;
    uVar15 = (byte)puVar23[2] & 0xf;
    iVar22 = *(int *)(&DAT_02094740 + uVar15 * 4);
    iVar10 = *(int *)(&DAT_02094770 + uVar15 * 4);
    iVar9 = iVar22 * 4;
    iVar19 = iVar10 * 4;
    if (!bVar24) {
      iVar9 = iVar9 + (char)puVar23[1];
      iVar19 = iVar19 + *(char *)((int)puVar23 + 3);
      if (bVar26 && bVar27) {
        iVar14 = iVar22 * -4 + (iVar9 * local_b4 >> 0xc) + (iVar19 * local_ac >> 0xc);
        iVar9 = iVar10 * -4 + (iVar19 * local_a8 >> 0xc) + (iVar9 * local_b0 >> 0xc);
      }
      else {
        iVar14 = iVar22 * -4 + (iVar9 * local_b4 >> 0xc);
        iVar9 = iVar10 * -4 + (iVar19 * local_a8 >> 0xc);
      }
      uVar20 = ((int)(piVar5[4] + ((uint)(piVar5[4] >> 0xb) >> 0x14)) >> 0xc) + iVar22 * -4 + iVar14
      ;
      uVar15 = ((int)(piVar5[5] + ((uint)(piVar5[5] >> 0xb) >> 0x14)) >> 0xc) + iVar10 * -4 + iVar9;
      if ((*(byte *)(param_1 + 0x10) & 0x7f) >> 6 == 0) {
LAB_0203fb74:
        uVar15 = uVar15 & 0xff;
        iVar9 = piVar18[0x129] + -1;
        piVar18[0x129] = iVar9;
        piVar21 = piVar18 + iVar9 * 2 + 0x12d;
        piVar18[iVar9 * 2 + 0x12d] = 0;
        *(undefined2 *)(piVar21 + 1) = 0;
        uVar16 = piVar18[iVar9 * 2 + 0x12d];
        uVar12 = local_118 << 0xc;
        uVar20 = (uVar20 & 0x1ff) << 0x10;
        piVar18[iVar9 * 2 + 0x12d] = uVar16 & 0xfe00ef00 | uVar12 | uVar20 | uVar15;
        uVar1 = ((int)((byte)puVar23[2] & 0xc) >> 2) << 0xe;
        piVar18[iVar9 * 2 + 0x12d] = uVar16 & 0xfe002f00 | uVar12 | uVar20 | uVar15 | uVar1;
        piVar18[iVar9 * 2 + 0x12d] =
             uVar16 & 0x2c00 | uVar12 | uVar20 | uVar15 | uVar1 | (uint)(byte)puVar23[2] << 0x1e |
             0x300 | (local_120 & 0x1f) << 0x19;
LAB_0203fd60:
        FUN_02011990(&local_d8,param_1);
        piVar21[1] = piVar21[1] & 0xfffff3ffU |
                     ((int)(local_d8 + ((uint)(local_d8 >> 0xb) >> 0x14)) >> 0x12 & 3U) << 10;
        iVar9 = -1;
        for (uVar15 = 0; uVar15 < local_104; uVar15 = uVar15 + 1) {
          if (local_64[uVar15] == (uint)*(byte *)((int)puVar23 + 5)) {
            iVar9 = local_a4[uVar15];
            break;
          }
        }
        if (iVar9 == -1) {
          uVar11 = FUN_02019ddc(param_1 + 0x14);
          iVar9 = FUN_0204572c(uVar8,iVar6 + (uint)*(byte *)((int)puVar23 + 5) * 0x20,0x20,uVar11,
                               *(undefined1 *)((int)puVar23 + 5));
          local_a4[local_104] = iVar9;
          iVar9 = local_a4[local_104];
          local_64[local_104] = (uint)*(byte *)((int)puVar23 + 5);
          local_104 = local_104 + 1;
        }
        piVar21[1] = piVar21[1] & 0xffff0fffU | (iVar9 >> 5 & 0xfU) << 0xc;
        iVar9 = (**(code **)(*piVar4 + 0x20))();
        if (((iVar9 == 0x3442464e) || (iVar9 = (**(code **)(*piVar4 + 0x20))(), iVar9 == 0x3443464e)
            ) || (iVar9 = (**(code **)(*piVar4 + 0x20))(), iVar9 == 0x344c4646)) {
          if (uVar17 == 0) {
            unaff_r11 = FUN_0203f440(param_1,piVar4,uVar7,local_100);
          }
          iVar9 = *(int *)(&DAT_02094710 + ((byte)puVar23[2] & 0xf) * 4) * 0x20 + 0x3f;
          piVar21[1] = piVar21[1] & 0xfffffc00U | unaff_r11 >> 6 & 0x3ff;
          unaff_r11 = unaff_r11 + ((int)(iVar9 + ((uint)(iVar9 >> 5) >> 0x1a)) >> 6) * 0x40;
        }
        else {
          iVar9 = (**(code **)(*piVar4 + 0x20))();
          if (iVar9 == 0x3147434e) {
            iVar9 = *(int *)(&DAT_02094710 + ((byte)puVar23[2] & 0xf) * 4) * 0x20 + 0x3f;
            unaff_r11 = FUN_02045570(uVar7,iVar13 + (uint)*puVar23 * 0x20,
                                     ((int)(iVar9 + ((uint)(iVar9 >> 5) >> 0x1a)) >> 6) << 6);
            piVar21[1] = piVar21[1] & 0xfffffc00U | unaff_r11 >> 6 & 0x3ff;
          }
          else {
            iVar9 = (**(code **)(*piVar4 + 0x20))();
            if (iVar9 == 0x3247434e) {
              local_10c = 0;
              uVar15 = (byte)puVar23[2] & 0xf;
              for (uVar20 = 0; uVar20 < *(uint *)(&DAT_02094770 + uVar15 * 4); uVar20 = uVar20 + 1)
              {
                local_10c = local_10c + *(int *)(&DAT_02094740 + uVar15 * 4) * 0x20;
                uVar12 = FUN_02045570(uVar7,iVar13 + ((uint)*puVar23 + uVar20 * 0x20) * 0x20,
                                      *(int *)(&DAT_02094740 + uVar15 * 4) << 5);
                if (uVar20 == 0) {
                  piVar21[1] = piVar21[1] & 0xfffffc00U | uVar12 >> 6 & 0x3ff;
                }
              }
              if ((local_10c >> 5 & 1) != 0) {
                FUN_02045570(uVar7,iVar13,0x20);
              }
            }
          }
        }
      }
      else {
        bVar28 = SBORROW4(uVar20,0x100);
        iVar9 = uVar20 - 0x100;
        if ((int)uVar20 < 0x100) {
          bVar28 = SBORROW4(uVar15,0xc0);
          iVar9 = uVar15 - 0xc0;
        }
        if (iVar9 < 0 != bVar28) {
          iVar9 = iVar22 * 0x10 + uVar20;
          if (0 < iVar9) {
            iVar9 = iVar10 * 0x10 + uVar15;
          }
          if (0 < iVar9) goto LAB_0203fb74;
        }
        if (uVar17 == 0) {
          unaff_r11 = FUN_0203f440(param_1,piVar4,uVar7,local_100);
        }
        iVar9 = *(int *)(&DAT_02094710 + ((byte)puVar23[2] & 0xf) * 4) * 0x20 + 0x3f;
        unaff_r11 = unaff_r11 + ((int)(iVar9 + ((uint)(iVar9 >> 5) >> 0x1a)) >> 6) * 0x40;
      }
    }
    else {
      iVar9 = ((int)(piVar5[4] + ((uint)(piVar5[4] >> 0xb) >> 0x14)) >> 0xc) -
              ((iVar9 + (char)puVar23[1]) * ((uint)*(byte *)(param_1 + 0x48) * 2 + -1) + iVar9);
      iVar19 = ((int)(piVar5[5] + ((uint)(piVar5[5] >> 0xb) >> 0x14)) >> 0xc) -
               ((iVar19 + *(char *)((int)puVar23 + 3)) * ((uint)*(byte *)(param_1 + 0x49) * 2 + -1)
               + iVar19);
      if ((*(byte *)(param_1 + 0x10) & 0x7f) >> 6 == 0) {
LAB_0203fce8:
        iVar10 = piVar18[0x129] + -1;
        piVar18[0x129] = iVar10;
        piVar21 = piVar18 + iVar10 * 2 + 0x12d;
        *(ushort *)(piVar18 + iVar10 * 2 + 0x12d) =
             (ushort)iVar19 & 0xff | ((byte)puVar23[2] & 0xc) << 0xc | (ushort)bVar25 << 0xc;
        uVar15 = (uint)(byte)puVar23[2];
        *(ushort *)((int)piVar21 + 2) =
             (ushort)iVar9 & 0x1ff |
             (ushort)(((uint)*(byte *)(param_1 + 0x48) ^ (int)uVar15 >> 4 & 1U) << 0xc) |
             (ushort)(((uint)*(byte *)(param_1 + 0x49) ^ (int)uVar15 >> 5 & 1U) << 0xd) |
             (ushort)((uVar15 & 3) << 0xe);
        goto LAB_0203fd60;
      }
      bVar28 = SBORROW4(iVar9,0x100);
      iVar14 = iVar9 + -0x100;
      if (iVar9 < 0x100) {
        bVar28 = SBORROW4(iVar19,0xc0);
        iVar14 = iVar19 + -0xc0;
      }
      if (iVar14 < 0 != bVar28) {
        iVar22 = iVar9 + iVar22 * 8;
        if (0 < iVar22) {
          iVar22 = iVar19 + iVar10 * 8;
        }
        if (0 < iVar22) goto LAB_0203fce8;
      }
      if (uVar17 == 0) {
        unaff_r11 = FUN_0203f440(param_1,piVar4,uVar7,local_100);
      }
      iVar9 = *(int *)(&DAT_02094710 + ((byte)puVar23[2] & 0xf) * 4) * 0x20 + 0x3f;
      unaff_r11 = unaff_r11 + ((int)(iVar9 + ((uint)(iVar9 >> 5) >> 0x1a)) >> 6) * 0x40;
    }
    uVar17 = uVar17 + 1;
  } while( true );
}

