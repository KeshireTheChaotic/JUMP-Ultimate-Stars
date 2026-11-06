
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-CLASS jus_TagSPD3::vfunc_07 [class-virtual] slot 7 of vtable 020960dc (own slot, not
   inherited) */

void jus_TagSPD3::vfunc_07(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int *unaff_r4;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  ushort *puVar24;
  int iVar25;
  int iVar26;
  bool bVar27;
  bool bVar28;
  int local_ac;
  uint local_a0;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  undefined1 auStack_3c [20];
  undefined4 uStack_28;
  
                    /* JUS-TAG hw={"GX_3D":5}
                       io=["04000440","04000454","0400046c","04000470","04000480"] */
  if (*(short *)(param_1 + 0x4a) != -1) {
    uStack_28 = param_4;
    FUN_0202534c(&local_40,param_1 + 0x14);
    uVar11 = (uint)(local_40 * 0x1f) >> 0xc;
    piVar10 = (int *)(local_40 * 0x1f);
    if (uVar11 != 0) {
      unaff_r4 = *(int **)(param_1 + 0x20);
      piVar10 = DAT_020a1054;
    }
    if (uVar11 != 0 && unaff_r4 != piVar10) {
      (**(code **)(*unaff_r4 + 0x34))(unaff_r4,0);
      FUN_0203ae18(0,0,3,0x1f,uVar11,0);
      iVar9 = FUN_02019ddc(param_1 + 0x14);
      piVar10 = (int *)FUN_02019ddc(param_1 + 0x14);
      (**(code **)(*piVar10 + 0x18))();
      piVar10 = (int *)(**(code **)(**(int **)(*(int *)(param_1 + 0x38) + 0x50) + 0x4c))();
      _DAT_04000480 = *(ushort *)(param_1 + 0x24) & 0x7fff;
      uVar11 = FUN_02043c18(unaff_r4,(int)*(short *)(param_1 + 0x4a));
      if (uVar11 != 0) {
        iVar12 = FUN_02043c5c(unaff_r4,(int)*(short *)(param_1 + 0x4a));
        uVar3 = (*(byte *)(*(int *)(*(int *)(param_1 + 0x38) + 0x50) + 0x25) & 3) >> 1;
        if (((char)unaff_r4[0x1f] != '\0') && (uVar3 == 0)) {
          bVar6 = *(byte *)(param_1 + 0x49);
          iVar20 = uVar11 * 6 + iVar12;
          local_44 = (int)*(short *)(iVar20 + ((uint)bVar6 * 2 + 1) * 2) << 0xc;
          FUN_02018ac8(&local_44,piVar10 + 3);
          if (0xbffff < (int)(local_44 * ((uint)bVar6 * -2 + 1) + piVar10[5])) {
            return;
          }
          bVar6 = *(byte *)(param_1 + 0x49);
          local_48 = (int)*(short *)(iVar20 + ((1 - (uint)bVar6) * 2 + 1) * 2) << 0xc;
          FUN_02018ac8(&local_48,piVar10 + 3);
          if ((int)(local_48 * ((uint)bVar6 * -2 + 1) + piVar10[5]) < 1) {
            return;
          }
          bVar6 = *(byte *)(param_1 + 0x48);
          local_4c = (int)*(short *)(iVar20 + (uint)bVar6 * 4) << 0xc;
          FUN_02018ac8(&local_4c,piVar10);
          if (0xfffff < (int)(local_4c * ((uint)bVar6 * -2 + 1) + piVar10[4])) {
            return;
          }
          bVar6 = *(byte *)(param_1 + 0x48);
          local_50 = (int)*(short *)(iVar20 + (1 - (uint)bVar6) * 4) << 0xc;
          FUN_02018ac8(&local_50,piVar10);
          if ((int)(local_50 * ((uint)bVar6 * -2 + 1) + piVar10[4]) < 1) {
            return;
          }
        }
        _DAT_04000440 = 1;
        _DAT_04000454 = 0;
        uVar17 = piVar10[4];
        _DAT_04000470 = *(int *)(*(int *)(param_1 + 0x34) + 0x4bc) << 8;
        if (uVar3 == 0) {
          uVar17 = (int)(piVar10[3] * 0x1000 + ((uint)(piVar10[3] * 0x1000 >> 5) >> 0x1a)) >> 6;
        }
        _DAT_0400046c = 0x1000;
        uVar21 = uVar11 * 0x40 + 8;
        iVar9 = *(int *)(iVar9 + 0x20);
        iVar20 = unaff_r4[0x14];
        if (*(uint *)(param_1 + 0x68) < uVar21) {
          iVar18 = *(int *)(param_1 + 100);
          if ((iVar18 != 0) && (iVar13 = FUN_0201a9ec(iVar18), iVar13 == 0)) {
            FUN_0201a958(iVar18,1);
          }
          uVar14 = FUN_0201a228(uVar21);
          *(undefined4 *)(param_1 + 100) = uVar14;
          *(uint *)(param_1 + 0x68) = uVar21;
        }
        bVar27 = uVar3 == 0;
        uVar15 = (uint)*(byte *)(param_1 + 0x48) | (uint)*(byte *)(param_1 + 0x49) << 1;
        uVar21 = uVar3;
        if (bVar27) {
          uVar17 = *(uint *)(param_1 + 0x58);
          uVar21 = (int)*(short *)(param_1 + 0x4a) + (int)*(short *)(param_1 + 0x4c);
        }
        bVar28 = bVar27 && uVar17 == uVar21;
        if (bVar27 && uVar17 == uVar21) {
          bVar28 = *(int *)(param_1 + 0x5c) == *(int *)(*(int *)(param_1 + 0x20) + 8);
        }
        bVar27 = false;
        if (bVar28) {
          bVar27 = iVar9 == *(int *)(param_1 + 0x50);
        }
        bVar28 = false;
        if (bVar27) {
          bVar28 = *(uint *)(param_1 + 0x60) == uVar15;
        }
        bVar27 = false;
        if (bVar28) {
          bVar27 = iVar20 == *(int *)(param_1 + 0x54);
        }
        if (!bVar27) {
          *(int *)(param_1 + 0x58) =
               (int)*(short *)(param_1 + 0x4a) + (int)*(short *)(param_1 + 0x4c);
          *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(*(int *)(param_1 + 0x20) + 8);
          *(uint *)(param_1 + 0x60) = uVar15;
          FUN_02067278(auStack_3c,*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68));
          FUN_02066080(auStack_3c,1);
          for (local_a0 = 0; local_a0 < uVar11; local_a0 = local_a0 + 1) {
            puVar24 = (ushort *)(local_a0 * 6 + iVar12);
            if ((puVar24[2] & 0x40) == 0) {
              FUN_020660d0(auStack_3c,3,1,unaff_r4[0x1d],unaff_r4[0x1e],0,0,1,unaff_r4[0x14]);
              FUN_0206609c(auStack_3c,iVar9 + (uint)*(byte *)((int)puVar24 + 5) * 0x20,3);
            }
            else {
              FUN_020660d0(auStack_3c,2,1,unaff_r4[0x1d] + 1,unaff_r4[0x1e],0,0,1,unaff_r4[0x14]);
              FUN_0206609c(auStack_3c,iVar9 + (uint)*(byte *)((int)puVar24 + 5) * 0x20,2);
            }
            bVar6 = (byte)puVar24[2];
            bVar7 = *(byte *)(param_1 + 0x48);
            iVar18 = (*puVar24 & 0x1f) * 0x8000;
            iVar13 = ((int)(uint)*puVar24 >> 5) * 0x8000;
            iVar25 = iVar18 + *(int *)(&DAT_02094740 + (bVar6 & 0xf) * 4) * 0x8000;
            iVar22 = *(int *)(&DAT_02094740 + (bVar6 & 0xf) * 4) * 0x80;
            iVar26 = *(int *)(&DAT_02094770 + (bVar6 & 0xf) * 4) * 0x80;
            iVar23 = iVar13 + *(int *)(&DAT_02094770 + (bVar6 & 0xf) * 4) * 0x8000;
            iVar4 = (int)((((uint)bVar7 * -2 + 1) * (char)puVar24[1] * 0x10 - (uint)bVar7 * iVar22)
                         * 0x10000) >> 0x10;
            bVar8 = *(byte *)(param_1 + 0x49);
            iVar5 = (int)((((uint)bVar8 * -2 + 1) * *(char *)((int)puVar24 + 3) * 0x10 -
                          (uint)bVar8 * iVar26) * 0x10000) >> 0x10;
            bVar7 = bVar7 ^ (bVar6 & 0x10) != 0;
            iVar19 = iVar18;
            if (bVar7 != 0) {
              iVar19 = iVar25 + -0x800;
              iVar25 = iVar18 + -0x800;
            }
            bVar8 = bVar8 ^ (bVar6 & 0x20) != 0;
            iVar18 = iVar13;
            if (bVar8 != 0) {
              iVar18 = iVar23 + -0x800;
              iVar23 = iVar13 + -0x800;
            }
            if (uVar3 == 0) {
              FUN_02066178(auStack_3c,iVar19,iVar18);
              FUN_02066124(auStack_3c,iVar4,iVar5);
              FUN_02066178(auStack_3c,iVar25,iVar18);
              FUN_02066124(auStack_3c,
                           (iVar4 + *(int *)(&DAT_02094740 + ((byte)puVar24[2] & 0xf) * 4) * 0x80) *
                           0x10000 >> 0x10,iVar5);
              FUN_02066178(auStack_3c,iVar25,iVar23);
              uVar17 = (byte)puVar24[2] & 0xf;
              FUN_02066124(auStack_3c,
                           (iVar4 + *(int *)(&DAT_02094740 + uVar17 * 4) * 0x80) * 0x10000 >> 0x10,
                           (iVar5 + *(int *)(&DAT_02094770 + uVar17 * 4) * 0x80) * 0x10000 >> 0x10);
              FUN_02066178(auStack_3c,iVar19,iVar23);
              FUN_02066124(auStack_3c,iVar4,
                           (iVar5 + *(int *)(&DAT_02094770 + ((byte)puVar24[2] & 0xf) * 4) * 0x80) *
                           0x10000 >> 0x10);
            }
            else {
              local_ac = 0;
              iVar13 = 0;
              if (DAT_020a0c4d != '\0') {
                if (bVar7 == 0) {
                  iVar19 = iVar19 + 0x1000;
                  local_ac = *piVar10 + piVar10[1];
                  iVar25 = iVar25 + -0x1000;
                }
                else {
                  iVar19 = iVar19 + -0x1000;
                  local_ac = -(*piVar10 + piVar10[1]);
                  iVar25 = iVar25 + 0x1000;
                }
                local_ac = local_ac >> 1;
                if (bVar8 == 0) {
                  iVar18 = iVar18 + 0x1000;
                  iVar23 = iVar23 + -0x1000;
                  iVar13 = piVar10[2] + piVar10[3] >> 1;
                }
                else {
                  iVar18 = iVar18 + -0x1000;
                  iVar23 = iVar23 + 0x1000;
                  iVar13 = -(piVar10[2] + piVar10[3]) >> 1;
                }
              }
              FUN_02066178(auStack_3c,local_ac + iVar19,iVar13 + iVar18);
              iVar1 = iVar5 << 0xc;
              local_60 = iVar1;
              FUN_02018ac8(&local_60,piVar10 + 3);
              iVar2 = iVar4 << 0xc;
              local_5c = iVar2;
              FUN_02018ac8(&local_5c,piVar10 + 1);
              iVar16 = local_5c + local_60;
              local_58 = iVar1;
              FUN_02018ac8(&local_58,piVar10 + 2);
              local_54 = iVar2;
              FUN_02018ac8(&local_54,piVar10);
              FUN_02066124(auStack_3c,
                           (int)((local_54 + local_58 + ((uint)(local_54 + local_58 >> 0xb) >> 0x14)
                                 ) * 0x10) >> 0x10,
                           (int)((iVar16 + ((uint)(iVar16 >> 0xb) >> 0x14)) * 0x10) >> 0x10);
              FUN_02066178(auStack_3c,local_ac + iVar25,iVar13 + iVar18);
              local_70 = iVar1;
              FUN_02018ac8(&local_70,piVar10 + 3);
              iVar18 = (iVar4 + iVar22) * 0x1000;
              local_6c = iVar18;
              FUN_02018ac8(&local_6c,piVar10 + 1);
              iVar22 = local_6c + local_70;
              local_68 = iVar1;
              FUN_02018ac8(&local_68,piVar10 + 2);
              local_64 = iVar18;
              FUN_02018ac8(&local_64,piVar10);
              FUN_02066124(auStack_3c,
                           (int)((local_64 + local_68 + ((uint)(local_64 + local_68 >> 0xb) >> 0x14)
                                 ) * 0x10) >> 0x10,
                           (int)((iVar22 + ((uint)(iVar22 >> 0xb) >> 0x14)) * 0x10) >> 0x10);
              FUN_02066178(auStack_3c,local_ac + iVar25,iVar13 + iVar23);
              iVar22 = (iVar5 + iVar26) * 0x1000;
              local_80 = iVar22;
              FUN_02018ac8(&local_80,piVar10 + 3);
              local_7c = iVar18;
              FUN_02018ac8(&local_7c,piVar10 + 1);
              iVar26 = local_7c + local_80;
              local_78 = iVar22;
              FUN_02018ac8(&local_78,piVar10 + 2);
              local_74 = iVar18;
              FUN_02018ac8(&local_74,piVar10);
              FUN_02066124(auStack_3c,
                           (int)((local_74 + local_78 + ((uint)(local_74 + local_78 >> 0xb) >> 0x14)
                                 ) * 0x10) >> 0x10,
                           (int)((iVar26 + ((uint)(iVar26 >> 0xb) >> 0x14)) * 0x10) >> 0x10);
              FUN_02066178(auStack_3c,local_ac + iVar19,iVar13 + iVar23);
              local_90 = iVar22;
              FUN_02018ac8(&local_90,piVar10 + 3);
              local_8c = iVar2;
              FUN_02018ac8(&local_8c,piVar10 + 1);
              iVar18 = local_8c + local_90;
              local_88 = iVar22;
              FUN_02018ac8(&local_88,piVar10 + 2);
              local_84 = iVar2;
              FUN_02018ac8(&local_84,piVar10);
              FUN_02066124(auStack_3c,
                           (int)((local_84 + local_88 + ((uint)(local_84 + local_88 >> 0xb) >> 0x14)
                                 ) * 0x10) >> 0x10,
                           (int)((iVar18 + ((uint)(iVar18 >> 0xb) >> 0x14)) * 0x10) >> 0x10);
            }
            FUN_020661c4(auStack_3c,0,0,0x100);
          }
          FUN_02066068(auStack_3c);
          uVar14 = FUN_020671c8(auStack_3c);
          *(undefined4 *)(param_1 + 0x6c) = uVar14;
          DC_FlushRange(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x6c));
          *(int *)(param_1 + 0x50) = iVar9;
          *(int *)(param_1 + 0x54) = iVar20;
        }
        MI_SendGXCommand(DAT_0209dd40,*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x6c)
                        );
        *(uint *)(*(int *)(param_1 + 0x34) + 0x4bc) =
             uVar11 + *(int *)(*(int *)(param_1 + 0x34) + 0x4bc);
      }
    }
  }
  return;
}

