
void FUN_02040000(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int *unaff_r4;
  uint unaff_r5;
  uint uVar10;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  ushort *unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  int iVar11;
  undefined1 in_ZR;
  bool bVar12;
  int in_stack_00000004;
  int in_stack_00000008;
  uint in_stack_00000010;
  uint in_stack_00000014;
  uint in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000020;
  uint in_stack_00000024;
  int in_stack_00000028;
  uint in_stack_0000002c;
  int in_stack_00000030;
  uint in_stack_00000034;
  undefined4 in_stack_00000038;
  undefined4 in_stack_0000003c;
  uint in_stack_00000048;
  int in_stack_0000004c;
  uint in_stack_00000050;
  undefined4 uStack00000058;
  int in_stack_0000007c;
  int in_stack_00000080;
  int in_stack_00000084;
  int in_stack_00000088;
  undefined1 uStack0000008c;
  undefined1 uStack000000cc;
  
  do {
    if ((bool)in_ZR) {
      *(uint *)(unaff_r6 + 4) =
           *(uint *)(unaff_r6 + 4) & in_stack_00000050 | param_1 >> 6 & in_stack_00000050 >> 0x16;
    }
    unaff_r7 = unaff_r7 + 1;
    while (*(uint *)(&DAT_02094770 + in_stack_00000048 * 4) <= unaff_r7) {
      if ((in_stack_00000024 >> 5 & 1) != 0) {
        FUN_02045570(in_stack_0000003c,in_stack_00000020,0x20);
      }
LAB_02040058:
      do {
        unaff_r5 = unaff_r5 + 1;
        if (in_stack_00000034 <= unaff_r5) {
          *(int *)(unaff_r10 + 0x58) =
               (int)*(short *)(unaff_r10 + 0x4a) + (int)*(short *)(unaff_r10 + 0x4c);
          *(undefined4 *)(unaff_r10 + 0x5c) = *(undefined4 *)(*(int *)(unaff_r10 + 0x20) + 8);
          return;
        }
        unaff_r9 = (ushort *)(unaff_r5 * 6 + in_stack_00000030);
        uVar6 = (byte)unaff_r9[2] & 0xf;
        iVar11 = *(int *)(&DAT_02094740 + uVar6 * 4);
        iVar3 = *(int *)(&DAT_02094770 + uVar6 * 4);
        iVar9 = iVar11 * 4;
        iVar7 = iVar3 * 4;
        if (in_stack_00000004 == 0) {
          iVar9 = ((int)(*(int *)(unaff_r8 + 0x10) +
                        ((uint)(*(int *)(unaff_r8 + 0x10) >> 0xb) >> 0x14)) >> 0xc) -
                  ((iVar9 + (char)unaff_r9[1]) * ((uint)*(byte *)(unaff_r10 + 0x48) * 2 + -1) +
                  iVar9);
          iVar7 = ((int)(*(int *)(unaff_r8 + 0x14) +
                        ((uint)(*(int *)(unaff_r8 + 0x14) >> 0xb) >> 0x14)) >> 0xc) -
                  ((iVar7 + *(char *)((int)unaff_r9 + 3)) *
                   ((uint)*(byte *)(unaff_r10 + 0x49) * 2 + -1) + iVar7);
          if ((*(byte *)(unaff_r10 + 0x10) & 0x7f) >> 6 != 0) {
            bVar12 = SBORROW4(iVar9,0x100);
            iVar5 = iVar9 + -0x100;
            if (iVar9 < 0x100) {
              bVar12 = SBORROW4(iVar7,0xc0);
              iVar5 = iVar7 + -0xc0;
            }
            if (iVar5 < 0 != bVar12) {
              iVar11 = iVar9 + iVar11 * 8;
              if (0 < iVar11) {
                iVar11 = iVar7 + iVar3 * 8;
              }
              if (0 < iVar11) goto LAB_0203fce8;
            }
            if (unaff_r5 == 0) {
              unaff_r11 = FUN_0203f440();
            }
            iVar9 = *(int *)(&DAT_02094710 + ((byte)unaff_r9[2] & 0xf) * 4) * 0x20 + 0x3f;
            unaff_r11 = unaff_r11 + ((int)(iVar9 + ((uint)(iVar9 >> 5) >> 0x1a)) >> 6) * 0x40;
            goto LAB_02040058;
          }
LAB_0203fce8:
          iVar3 = *(int *)(in_stack_0000004c + 0x400) + -1;
          *(int *)(in_stack_0000004c + 0x400) = iVar3;
          unaff_r6 = in_stack_0000004c + 0x410 + iVar3 * 8;
          *(ushort *)(in_stack_0000004c + 0x410 + iVar3 * 8) =
               (ushort)iVar7 & 0xff | ((byte)unaff_r9[2] & 0xc) << 0xc |
               (ushort)(in_stack_00000018 << 0xc);
          uVar6 = (uint)(byte)unaff_r9[2];
          *(ushort *)(unaff_r6 + 2) =
               (ushort)iVar9 & 0x1ff |
               (ushort)(((uint)*(byte *)(unaff_r10 + 0x48) ^ (int)uVar6 >> 4 & 1U) << 0xc) |
               (ushort)(((uint)*(byte *)(unaff_r10 + 0x49) ^ (int)uVar6 >> 5 & 1U) << 0xd) |
               (ushort)((uVar6 & 3) << 0xe);
        }
        else {
          iVar9 = iVar9 + (char)unaff_r9[1];
          iVar7 = iVar7 + *(char *)((int)unaff_r9 + 3);
          if (in_stack_00000008 == 0) {
            iVar5 = iVar11 * -4 + (iVar9 * in_stack_0000007c >> 0xc);
            iVar9 = iVar3 * -4 + (iVar7 * in_stack_00000088 >> 0xc);
          }
          else {
            iVar5 = iVar11 * -4 + (iVar9 * in_stack_0000007c >> 0xc) +
                    (iVar7 * in_stack_00000084 >> 0xc);
            iVar9 = iVar3 * -4 + (iVar7 * in_stack_00000088 >> 0xc) +
                    (iVar9 * in_stack_00000080 >> 0xc);
          }
          uVar10 = ((int)(*(int *)(unaff_r8 + 0x10) +
                         ((uint)(*(int *)(unaff_r8 + 0x10) >> 0xb) >> 0x14)) >> 0xc) + iVar11 * -4 +
                   iVar5;
          uVar6 = ((int)(*(int *)(unaff_r8 + 0x14) +
                        ((uint)(*(int *)(unaff_r8 + 0x14) >> 0xb) >> 0x14)) >> 0xc) + iVar3 * -4 +
                  iVar9;
          if ((*(byte *)(unaff_r10 + 0x10) & 0x7f) >> 6 != 0) {
            bVar12 = SBORROW4(uVar10,0x100);
            iVar9 = uVar10 - 0x100;
            if ((int)uVar10 < 0x100) {
              bVar12 = SBORROW4(uVar6,0xc0);
              iVar9 = uVar6 - 0xc0;
            }
            if (iVar9 < 0 != bVar12) {
              iVar9 = in_stack_0000001c * iVar11 * 8 + uVar10;
              if (0 < iVar9) {
                iVar9 = in_stack_0000001c * iVar3 * 8 + uVar6;
              }
              if (0 < iVar9) goto LAB_0203fb74;
            }
            if (unaff_r5 == 0) {
              unaff_r11 = FUN_0203f440();
            }
            iVar9 = *(int *)(&DAT_02094710 + ((byte)unaff_r9[2] & 0xf) * 4) * 0x20 + 0x3f;
            unaff_r11 = unaff_r11 + ((int)(iVar9 + ((uint)(iVar9 >> 5) >> 0x1a)) >> 6) * 0x40;
            goto LAB_02040058;
          }
LAB_0203fb74:
          uVar6 = uVar6 & 0xff;
          iVar7 = *(int *)(in_stack_0000004c + 0x400) + -1;
          iVar9 = in_stack_0000004c + 0x410;
          *(int *)(in_stack_0000004c + 0x400) = iVar7;
          unaff_r6 = iVar9 + iVar7 * 8;
          *(undefined4 *)(iVar9 + iVar7 * 8) = 0;
          *(undefined2 *)(unaff_r6 + 4) = 0;
          uVar8 = *(uint *)(iVar9 + iVar7 * 8);
          uVar1 = (in_stack_00000018 & 1) << 0xc;
          uVar10 = (uVar10 & 0x1ff) << 0x10;
          *(uint *)(iVar9 + iVar7 * 8) = uVar8 & 0xfe00ef00 | uVar1 | uVar10 | uVar6;
          uVar2 = ((int)((byte)unaff_r9[2] & 0xc) >> 2) << 0xe;
          *(uint *)(iVar9 + iVar7 * 8) = uVar8 & 0xfe002f00 | uVar1 | uVar10 | uVar6 | uVar2;
          *(uint *)(iVar9 + iVar7 * 8) =
               uVar8 & 0x2c00 | uVar1 | uVar10 | uVar6 | uVar2 | (uint)(byte)unaff_r9[2] << 0x1e |
               (in_stack_00000014 & 3) << 8 | (in_stack_00000010 & 0x1f) << 0x19;
        }
        FUN_02011990(&uStack00000058);
        *(uint *)(unaff_r6 + 4) =
             *(uint *)(unaff_r6 + 4) & 0xfffff3ff |
             ((int)(uStack00000058 + ((uint)(uStack00000058 >> 0xb) >> 0x14)) >> 0x12 & 3U) << 10;
        iVar9 = -1;
        for (uVar6 = 0; uVar6 < in_stack_0000002c; uVar6 = uVar6 + 1) {
          if (*(uint *)(&uStack000000cc + uVar6 * 4) == (uint)*(byte *)((int)unaff_r9 + 5)) {
            iVar9 = *(int *)(&uStack0000008c + uVar6 * 4);
            break;
          }
        }
        if (iVar9 == -1) {
          uVar4 = FUN_02019ddc(unaff_r10 + 0x14);
          uVar4 = FUN_0204572c(in_stack_00000038,
                               in_stack_00000028 + (uint)*(byte *)((int)unaff_r9 + 5) * 0x20,0x20,
                               uVar4);
          *(undefined4 *)(&uStack0000008c + in_stack_0000002c * 4) = uVar4;
          iVar9 = *(int *)(&uStack0000008c + in_stack_0000002c * 4);
          *(uint *)(&uStack000000cc + in_stack_0000002c * 4) = (uint)*(byte *)((int)unaff_r9 + 5);
          in_stack_0000002c = in_stack_0000002c + 1;
        }
        *(uint *)(unaff_r6 + 4) = *(uint *)(unaff_r6 + 4) & 0xffff0fff | (iVar9 >> 5 & 0xfU) << 0xc;
        iVar9 = (**(code **)(*unaff_r4 + 0x20))();
        if (((iVar9 == 0x3442464e) ||
            (iVar9 = (**(code **)(*unaff_r4 + 0x20))(), iVar9 == 0x3443464e)) ||
           (iVar9 = (**(code **)(*unaff_r4 + 0x20))(), iVar9 == 0x344c4646)) {
          if (unaff_r5 == 0) {
            unaff_r11 = FUN_0203f440();
          }
          iVar9 = *(int *)(&DAT_02094710 + ((byte)unaff_r9[2] & 0xf) * 4) * 0x20 + 0x3f;
          *(uint *)(unaff_r6 + 4) = *(uint *)(unaff_r6 + 4) & 0xfffffc00 | unaff_r11 >> 6 & 0x3ff;
          unaff_r11 = unaff_r11 + ((int)(iVar9 + ((uint)(iVar9 >> 5) >> 0x1a)) >> 6) * 0x40;
          goto LAB_02040058;
        }
        iVar9 = (**(code **)(*unaff_r4 + 0x20))();
        if (iVar9 == 0x3147434e) {
          iVar9 = *(int *)(&DAT_02094710 + ((byte)unaff_r9[2] & 0xf) * 4) * 0x20 + 0x3f;
          unaff_r11 = FUN_02045570(in_stack_0000003c,in_stack_00000020 + (uint)*unaff_r9 * 0x20,
                                   ((int)(iVar9 + ((uint)(iVar9 >> 5) >> 0x1a)) >> 6) << 6);
          *(uint *)(unaff_r6 + 4) = *(uint *)(unaff_r6 + 4) & 0xfffffc00 | unaff_r11 >> 6 & 0x3ff;
          goto LAB_02040058;
        }
        iVar9 = (**(code **)(*unaff_r4 + 0x20))();
      } while (iVar9 != 0x3247434e);
      unaff_r7 = 0;
      in_stack_00000024 = 0;
      in_stack_00000050 = 0xfffffc00;
      in_stack_00000048 = (byte)unaff_r9[2] & 0xf;
    }
    in_stack_00000024 = in_stack_00000024 + *(int *)(&DAT_02094740 + in_stack_00000048 * 4) * 0x20;
    param_1 = FUN_02045570(in_stack_0000003c,
                           in_stack_00000020 + ((uint)*unaff_r9 + unaff_r7 * 0x20) * 0x20,
                           *(int *)(&DAT_02094740 + in_stack_00000048 * 4) << 5);
    in_ZR = unaff_r7 == 0;
  } while( true );
}

