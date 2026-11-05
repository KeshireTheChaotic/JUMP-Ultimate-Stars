
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-GAME ALControllerImp::Create [source-string-template] __FILE__="ALControllerImp.h"
   __FUNCTION__="Create"; one of 4 instantiations in arm9_ov02 */

void ALControllerImp::Create(undefined1 *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  int iVar11;
  int iVar12;
  int unaff_r8;
  uint uVar13;
  int iVar14;
  int unaff_r9;
  int iVar15;
  int unaff_r10;
  int unaff_r11;
  int iVar16;
  uint uStack00000014;
  uint uStack00000030;
  undefined4 uStack00000038;
  undefined4 uStack0000003c;
  undefined4 uStack00000040;
  undefined4 in_stack_00000044;
  undefined4 uStack00000048;
  undefined4 uStack0000004c;
  undefined4 uStack00000050;
  undefined4 uStack00000054;
  undefined4 uStack00000058;
  undefined4 uStack0000005c;
  undefined4 uStack00000060;
  undefined4 uStack00000064;
  undefined4 uStack00000068;
  undefined4 uStack0000006c;
  undefined4 uStack00000070;
  undefined1 uStack00000074;
  undefined1 uStack000000b0;
  undefined1 uStack000000bc;
  undefined1 uStack000000f8;
  
  do {
    thunk_FUN_0207400c(param_1,s_jgalaxy__0215c328);
    uVar3 = FUN_0214e008(*(undefined1 *)(unaff_r9 + 0x2d));
    thunk_FUN_020741c4(&uStack000000f8,uVar3);
    thunk_FUN_020741c4(&uStack000000f8,s__planet_aar_0215c334);
    uVar3 = FUN_020101f4(&uStack000000f8,0);
    *(undefined4 *)(unaff_r10 + unaff_r6 * 4 + 0x58) = uVar3;
    unaff_r6 = unaff_r6 + 1;
    unaff_r4 = unaff_r4 + 1;
    while ((int)(uint)*(byte *)(unaff_r8 + 0x44) <= unaff_r4) {
      unaff_r5 = unaff_r5 + 1;
      if ((int)(uint)*(byte *)(unaff_r7 + 0x2c) <= unaff_r5) {
        iVar4 = FUN_0203b404();
        uVar3 = FUN_0214d53c(0x11000,0x11000,*(undefined4 *)(iVar4 + 0x88),0);
        *(undefined4 *)(unaff_r10 + 0x28) = uVar3;
        FUN_0214f960(uVar3,&DAT_0215cba4);
        iVar4 = 1;
        do {
          iVar5 = FUN_0203b3e4();
          uVar3 = FUN_0214d53c(0x12001,0x12000,*(undefined4 *)(iVar5 + 0x88),0);
          *(undefined4 *)(unaff_r10 + iVar4 * 4 + 0x28) = uVar3;
          FUN_0214f960(uVar3,&DAT_0215cba4 + iVar4 * 0xc);
          iVar4 = iVar4 + 1;
        } while (iVar4 < 8);
        FUN_02023894(*(undefined4 *)(*(int *)(unaff_r10 + 0x44) + 4),0x12014,0);
        (**(code **)(**(int **)(*(int *)(*(int *)(unaff_r10 + 0x44) + 4) + 0x68) + 0x6c))();
        iVar4 = FUN_0203b3e4();
        iVar4 = FUN_0214d53c(0xa01000,0xa01000,*(undefined4 *)(iVar4 + 0x88),0);
        *(int *)(unaff_r10 + 0x4c) = iVar4;
        (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),0);
        uStack0000006c = 0x16000;
        uStack00000070 = 0xe000;
        FUN_0214d4c0(*(undefined4 *)(unaff_r10 + 0x4c),&uStack00000070,&uStack0000006c);
        iVar4 = FUN_0203b404();
        uVar3 = FUN_0214d53c(0x11002,0x11000,*(undefined4 *)(iVar4 + 0x88),0);
        *(undefined4 *)(unaff_r10 + 0x48) = uVar3;
        FUN_0214f960(uVar3,&DAT_0215cba4);
        uVar3 = FUN_0214d718(0,0x42);
        *(undefined4 *)(unaff_r10 + 0x20) = uVar3;
        iVar4 = jus_AllocDebug(0xcc,s_ALWidget_inl_0215bfc0,s_Create_0215c1a0,0x1de);
        if (iVar4 != 0) {
          func_0x021af26c(iVar4,FUN_02153084,FUN_0215313c,0);
        }
        piVar6 = (int *)FUN_0214ed94();
        (**(code **)(*(int *)piVar6[1] + 0x24))();
        func_0x021b3b7c(0x10,0,piVar6,0);
        (**(code **)(*piVar6 + 8))();
        iVar4 = jus_AllocDebug(0xcc,s_ALWidget_inl_0215bfc0,s_Create_0215c1a0,0x1de);
        if (iVar4 != 0) {
          func_0x021af26c(iVar4,FUN_021530e0,FUN_0214d434,0);
        }
        piVar6 = (int *)FUN_0214ed94();
        func_0x021b3b7c(0x11,0,piVar6,0);
        iVar4 = FUN_02153010(piVar6,0x31305053);
        FUN_02153060(*(int *)(*(int *)(iVar4 + 4) + 100) + 0x14);
        uVar3 = FUN_02153038();
        iVar4 = CommonPaletteAnime::CommonPaletteAnime_Create(uVar3,0x11,0xf,5);
        *(undefined2 *)(iVar4 + 0x18) = 0;
        *(undefined2 *)(iVar4 + 0x16) = 0x8df;
        *(undefined1 *)(iVar4 + 0x1a) = 0x1e;
        *(undefined1 *)(iVar4 + 0x1c) = 1;
        *(undefined1 *)(iVar4 + 0x1b) = 1;
        *(int *)(unaff_r10 + 0x334) = iVar4;
        (**(code **)(*piVar6 + 8))();
        _DAT_021d5154 = 0xffffffff;
        uVar3 = ALWidgetBaseImp::Create();
        FUN_021506bc(uVar3,0);
        *(undefined4 *)(unaff_r10 + 0x10) = uVar3;
        _DAT_021d5154 = 0x10;
        iVar4 = ALWidgetBaseImp::Create();
        func_0x021b7744(*(undefined4 *)(iVar4 + 4),1);
        FUN_0214d678(iVar4,*(undefined4 *)(unaff_r10 + 0xc));
        FUN_021506bc(iVar4,0);
        uStack0000003c = 0xc5000;
        FUN_0214d650(iVar4,&uStack0000003c);
        *(int *)(unaff_r10 + 0x14) = iVar4;
        _DAT_021d5154 = 0x11;
        iVar4 = ALWidgetBaseImp::Create();
        func_0x021b7744(*(undefined4 *)(iVar4 + 4),1);
        FUN_0214d678(iVar4,*(undefined4 *)(unaff_r10 + 0xc));
        FUN_021506bc(iVar4,0);
        uStack00000038 = 0x84000;
        FUN_0214d650(iVar4,&uStack00000038);
        *(int *)(unaff_r10 + 0x18) = iVar4;
        iVar4 = (uint)*(byte *)(unaff_r10 + 0x35d) * 0x3c +
                *(int *)(*(int *)(unaff_r10 + 0x330) + 0x30);
        for (iVar5 = 0; iVar5 < (int)(uint)*(byte *)(iVar4 + 0x2c); iVar5 = iVar5 + 1) {
          iVar15 = (uint)*(byte *)(iVar4 + iVar5 + 0x2d) * 0x48 +
                   *(int *)(*(int *)(unaff_r10 + 0x330) + 0x34);
          if ((DAT_0215cc0c & 1) == 0) {
            FUN_0214edbc(&DAT_0215c1b8,0xffffffe0,0xffffffe0);
            FUN_0214edbc(&DAT_0215c1c0,0xffffffd8,0xffffffe0,0x28);
            FUN_0214edbc(&DAT_0215c1c8,0xffffffd8,0xffffffe0);
            FUN_0214edbc(&DAT_0215c1d0,0xffffffd8,0xffffffd8);
            DAT_0215cc0c = DAT_0215cc0c | 1;
          }
          if ((DAT_0215cc08 & 1) == 0) {
            FUN_0214edbc(&DAT_0215c1b0,0xffffffe0,0xffffffe0);
            DAT_0215cc08 = DAT_0215cc08 | 1;
          }
          uStack00000050 = 0;
          _DAT_021d5154 = 0x10;
          uStack00000054 = (int)*(short *)(iVar15 + 0x2e) << 0xc;
          uStack00000058 = (int)*(short *)(iVar15 + 0x2c) << 0xc;
          FUN_0214e39c(&uStack000000b0,&uStack00000058,&uStack00000054,&uStack00000050);
          iVar12 = ALWidgetImp::Create();
          func_0x021b65e8(*(undefined4 *)(iVar12 + 4),4,FUN_02153e8c);
          func_0x021b65e8(*(undefined4 *)(iVar12 + 4),1,FUN_02154558);
          *(code **)(*(int *)(iVar12 + 4) + 0xdc) = FUN_021543ac;
          uStack0000004c = 0x84000;
          FUN_0214d650(iVar12,&uStack0000004c);
          func_0x021b7454(*(undefined4 *)(iVar12 + 4),1,0x4007b);
          func_0x021b7454(*(undefined4 *)(iVar12 + 4),2,0x4007b);
          func_0x021b7454(*(undefined4 *)(iVar12 + 4),8,0x4007b);
          func_0x021b7454(*(undefined4 *)(iVar12 + 4),4,0x4007b);
          func_0x021b7454(*(undefined4 *)(iVar12 + 4),0x10000,0x4007b);
          func_0x021b7454(*(undefined4 *)(iVar12 + 4),0x100,0x4007b);
          func_0x021b7454(*(undefined4 *)(iVar12 + 4),0x200,0x4007b);
          _DAT_021d5154 = 0x11;
          iVar14 = unaff_r10 + iVar5 * 0x28;
          iVar9 = unaff_r10 + 0xdc + iVar5 * 0x28;
          for (iVar11 = 0; iVar11 < (int)(uint)*(byte *)(iVar15 + 0x44); iVar11 = iVar11 + 1) {
            iVar16 = iVar15 + iVar11;
            iVar10 = *(int *)(*(int *)(unaff_r10 + 0x330) + 0x38);
            bVar1 = *(byte *)(iVar16 + 0x38);
            iVar7 = ALWidgetImp::Create();
            *(int *)(iVar9 + iVar11 * 4) = iVar7;
            func_0x021b65e8(*(undefined4 *)(iVar7 + 4),4,FUN_02153eb0);
            *(code **)(*(int *)(*(int *)(iVar9 + iVar11 * 4) + 4) + 0xdc) = FUN_02154098;
            uStack00000048 = 0x84000;
            FUN_0214d650(*(undefined4 *)(iVar9 + iVar11 * 4),&uStack00000048);
            *(uint *)(*(int *)(*(int *)(iVar9 + iVar11 * 4) + 4) + 0x124) =
                 (uint)*(byte *)(iVar16 + 0x38);
            FUN_0214d678(*(undefined4 *)(iVar9 + iVar11 * 4),iVar12);
            func_0x021b7454(*(undefined4 *)(*(int *)(iVar9 + iVar11 * 4) + 4),0x100,0x30078);
            func_0x021b7454(*(undefined4 *)(*(int *)(iVar9 + iVar11 * 4) + 4),0x200,0x30078);
            bVar1 = *(byte *)(iVar10 + (uint)bVar1 * 0x40 + 0x2d);
            uStack00000030 = (uint)(byte)(bVar1 - 1);
            if ((0x2f < bVar1) && (bVar1 < 0x35)) {
              uStack00000030 = 0x2f;
            }
            iVar7 = FUN_0214df2c(*(undefined4 *)(unaff_r10 + 0x330),*(undefined1 *)(iVar16 + 0x38));
            uStack00000014 = (uint)(iVar7 == 0);
            iVar10 = FUN_0203b404();
            iVar10 = FUN_0214d53c(uStack00000014 * 2 + 0x30001 + uStack00000030 * 0x10,
                                  uStack00000030 * 0x10 + 0x30000,*(undefined4 *)(iVar10 + 0x88),0);
            FUN_0214d678(iVar10,*(undefined4 *)(iVar9 + iVar11 * 4));
            (**(code **)(**(int **)(iVar10 + 4) + 0x24))(*(int **)(iVar10 + 4),uStack00000030);
            FUN_020282f4(*(undefined4 *)(iVar10 + 4));
            FUN_0214ef10(&uStack00000040,iVar10,s_Position_0215c31c);
            uVar8 = in_stack_00000044;
            uVar3 = uStack00000040;
            iVar16 = jus_AllocDebug(0x4c,s_ALControllerImp_h_0215c008,s_Create_0215c198,0x2ef);
            if (iVar16 != 0) {
              jus_TagIPMV::jus_TagIPMV(iVar16,0,uVar3,uVar8);
            }
            uVar3 = FUN_0214f194();
            FUN_02020f38(iVar10,uVar3);
            *(int *)(iVar14 + iVar11 * 4 + 0xec) = iVar10;
            *(bool *)(iVar14 + iVar11 + 0xfc) = iVar7 == 0;
          }
          if (1 < *(byte *)(iVar15 + 0x44)) {
            for (iVar14 = 0; iVar14 < (int)(uint)*(byte *)(iVar15 + 0x44); iVar14 = iVar14 + 1) {
              if ((char)(&DAT_0215b024)[(uint)*(byte *)(iVar15 + 0x44) * 0x10 + iVar14 * 4] != -1) {
                FUN_02152f98(*(undefined4 *)(iVar9 + iVar14 * 4),
                             *(undefined4 *)
                              (iVar9 + (char)(&DAT_0215b024)
                                             [(uint)*(byte *)(iVar15 + 0x44) * 0x10 + iVar14 * 4] *
                                       4));
              }
              if ((char)(&DAT_0215b025)[(uint)*(byte *)(iVar15 + 0x44) * 0x10 + iVar14 * 4] != -1) {
                FUN_02152f20(*(undefined4 *)(iVar9 + iVar14 * 4),
                             *(undefined4 *)
                              (iVar9 + (char)(&DAT_0215b025)
                                             [(uint)*(byte *)(iVar15 + 0x44) * 0x10 + iVar14 * 4] *
                                       4));
              }
              if ((char)(&DAT_0215b026)[(uint)*(byte *)(iVar15 + 0x44) * 0x10 + iVar14 * 4] != -1) {
                FUN_02152fd4(*(undefined4 *)(iVar9 + iVar14 * 4),
                             *(undefined4 *)
                              (iVar9 + (char)(&DAT_0215b026)
                                             [(uint)*(byte *)(iVar15 + 0x44) * 0x10 + iVar14 * 4] *
                                       4));
              }
              if ((char)(&DAT_0215b027)[(uint)*(byte *)(iVar15 + 0x44) * 0x10 + iVar14 * 4] != -1) {
                FUN_02152f5c(*(undefined4 *)(iVar9 + iVar14 * 4),
                             *(undefined4 *)
                              (iVar9 + (char)(&DAT_0215b027)
                                             [(uint)*(byte *)(iVar15 + 0x44) * 0x10 + iVar14 * 4] *
                                       4));
              }
            }
          }
          *(uint *)(*(int *)(iVar12 + 4) + 0x124) = (uint)*(byte *)(iVar4 + iVar5 + 0x2d);
          uVar2 = *(undefined1 *)(iVar4 + iVar5 + 0x2d);
          uVar3 = *(undefined4 *)(unaff_r10 + 0x330);
          *(int *)(&uStack00000074 + iVar5 * 4) = iVar12;
          iVar14 = FUN_0214de0c(uVar3,uVar2);
          if (iVar14 == 0) {
            (**(code **)(**(int **)(iVar12 + 4) + 0x148))(*(int **)(iVar12 + 4),8);
            iVar9 = iVar5 * 0x28 + unaff_r10;
            for (iVar14 = 0; iVar14 < (int)(uint)*(byte *)(iVar15 + 0x44); iVar14 = iVar14 + 1) {
              piVar6 = *(int **)(*(int *)(iVar9 + iVar14 * 4 + 0xdc) + 4);
              (**(code **)(*piVar6 + 0x148))(piVar6,8);
              piVar6 = *(int **)(*(int *)(iVar9 + iVar14 * 4 + 0xdc) + 4);
              (**(code **)(*piVar6 + 0xd8))(piVar6,0);
            }
          }
          *(int *)(iVar5 * 0x28 + unaff_r10 + 0xd8) = iVar12;
        }
        for (iVar5 = 0; iVar5 < (int)(uint)*(byte *)(iVar4 + 0x2c); iVar5 = iVar5 + 1) {
          iVar15 = (uint)*(byte *)(iVar4 + iVar5 + 0x2d) * 0x48 +
                   *(int *)(*(int *)(unaff_r10 + 0x330) + 0x34);
          if (*(char *)(iVar15 + 0x3d) != -1) {
            FUN_02152f20(*(undefined4 *)(&uStack00000074 + iVar5 * 4),
                         *(undefined4 *)(&uStack00000074 + *(char *)(iVar15 + 0x3d) * 4));
          }
          if (*(char *)(iVar15 + 0x3f) != -1) {
            FUN_02152f5c(*(undefined4 *)(&uStack00000074 + iVar5 * 4),
                         *(undefined4 *)(&uStack00000074 + *(char *)(iVar15 + 0x3f) * 4));
          }
          if (*(char *)(iVar15 + 0x3c) != -1) {
            FUN_02152f98(*(undefined4 *)(&uStack00000074 + iVar5 * 4),
                         *(undefined4 *)(&uStack00000074 + *(char *)(iVar15 + 0x3c) * 4));
          }
          if (*(char *)(iVar15 + 0x3e) != -1) {
            FUN_02152fd4(*(undefined4 *)(&uStack00000074 + iVar5 * 4),
                         *(undefined4 *)(&uStack00000074 + *(char *)(iVar15 + 0x3e) * 4));
          }
          if (*(char *)(iVar15 + 0x41) != -1) {
            iVar14 = *(int *)(*(char *)(iVar15 + 0x41) * 0x28 + unaff_r10 + 0xdc);
            iVar12 = 0;
            while ((iVar12 < 4 &&
                   (iVar9 = *(int *)(iVar5 * 0x28 + unaff_r10 + iVar12 * 4 + 0xdc), iVar9 != 0))) {
              piVar6 = *(int **)(iVar9 + 4);
              (**(code **)(*piVar6 + 0x160))(piVar6,0x100,*(undefined4 *)(iVar14 + 4));
              iVar12 = iVar12 + 1;
            }
          }
          if (*(char *)(iVar15 + 0x40) != -1) {
            iVar12 = *(int *)(*(char *)(iVar15 + 0x40) * 0x28 + unaff_r10 + 0xdc);
            iVar15 = 0;
            while ((iVar15 < 4 &&
                   (iVar14 = *(int *)(iVar5 * 0x28 + unaff_r10 + iVar15 * 4 + 0xdc), iVar14 != 0)))
            {
              piVar6 = *(int **)(iVar14 + 4);
              (**(code **)(*piVar6 + 0x160))(piVar6,0x200,*(undefined4 *)(iVar12 + 4));
              iVar15 = iVar15 + 1;
            }
          }
        }
        iVar5 = *(int *)(unaff_r10 + 0x330);
        iVar15 = (uint)*(byte *)(unaff_r10 + 0x35d) * 0x3c + *(int *)(iVar5 + 0x30);
        uVar13 = (uint)*(byte *)(iVar15 + 0x2c);
        for (iVar4 = 0; iVar4 < (int)uVar13; iVar4 = iVar4 + 1) {
          *(int *)(&uStack000000bc + iVar4 * 4) = iVar4;
        }
        for (iVar4 = 0; iVar4 < (int)(uVar13 - 1); iVar4 = iVar4 + 1) {
          iVar11 = *(int *)(iVar5 + 0x34);
          iVar9 = (uint)*(byte *)(iVar15 + *(int *)(&uStack000000bc + iVar4 * 4) + 0x2d) * 0x48 +
                  iVar11;
          iVar14 = *(int *)(&uStack000000bc + iVar4 * 4);
          iVar12 = iVar4;
          while (iVar12 = iVar12 + 1, iVar12 < (int)uVar13) {
            iVar7 = *(int *)(&uStack000000bc + iVar12 * 4);
            if (*(short *)(iVar9 + 0x2e) <
                *(short *)((uint)*(byte *)(iVar15 + iVar7 + 0x2d) * 0x48 + iVar11 + 0x2e)) {
              *(int *)(&uStack000000bc + iVar12 * 4) = iVar14;
              *(int *)(&uStack000000bc + iVar4 * 4) = iVar7;
              iVar9 = (uint)*(byte *)(iVar15 + iVar7 + 0x2d) * 0x48 + iVar11;
              iVar14 = iVar7;
            }
          }
        }
        iVar4 = 0x84;
        for (iVar5 = 0; iVar5 < (int)(uint)*(byte *)(iVar15 + 0x2c); iVar5 = iVar5 + 1) {
          uStack00000064 = iVar4 << 0xc;
          iVar12 = unaff_r10 + 0xd8 + *(int *)(&uStack000000bc + iVar5 * 4) * 0x28;
          FUN_0214d650(*(undefined4 *)
                        (unaff_r10 + 0xd8 + *(int *)(&uStack000000bc + iVar5 * 4) * 0x28),
                       &uStack00000064);
          iVar14 = 0;
          do {
            iVar9 = iVar12 + iVar14 * 4;
            if (*(int *)(iVar9 + 4) != 0) {
              uStack00000060 = iVar4 << 0xc;
              FUN_0214d650(*(undefined4 *)(iVar9 + 4),&uStack00000060);
              uStack0000005c = iVar4 << 0xc;
              FUN_0214d650(*(undefined4 *)(iVar12 + iVar14 * 4 + 0x14),&uStack0000005c);
            }
            iVar14 = iVar14 + 1;
            iVar4 = iVar4 + 1;
          } while (iVar14 < 4);
        }
        _DAT_021d5154 = 0xffffffff;
        uVar3 = ALWidgetBaseImp::Create();
        FUN_021506bc(uVar3,0);
        iVar4 = 0;
        do {
          FUN_0203b3e4();
          uVar8 = FUN_0214da4c();
          iVar5 = unaff_r10 + iVar4 * 4;
          *(undefined4 *)(iVar5 + 0x50) = uVar8;
          if ((&DAT_0215c1fc)[iVar4 * 10] != 0) {
            func_0x021b6760(*(undefined4 *)(*(int *)(iVar5 + 0x50) + 4),4);
          }
          iVar5 = unaff_r10 + iVar4 * 4;
          *(undefined1 *)(*(int *)(*(int *)(iVar5 + 0x50) + 4) + 0xaa) = 1;
          uStack00000068 = 0x41000;
          FUN_0214d650(*(undefined4 *)(iVar5 + 0x50),&uStack00000068);
          iVar5 = iVar4 * 4;
          iVar4 = iVar4 + 1;
          *(undefined1 *)(*(int *)(*(int *)(unaff_r10 + iVar5 + 0x50) + 4) + 0xb1) = 1;
        } while (iVar4 < 2);
        func_0x021b77a8(*(undefined4 *)(*(int *)(unaff_r10 + 0x50) + 4),0x20);
        func_0x021b77a8(*(undefined4 *)(*(int *)(unaff_r10 + 0x54) + 4),0x80);
        if ((DAT_020b0b90 & 0x10) == 0) {
          func_0x021b400c(*(undefined4 *)(*(int *)(unaff_r10 + 0x54) + 4),0x510013);
          piVar6 = *(int **)(*(int *)(unaff_r10 + 0x54) + 4);
          (**(code **)(*piVar6 + 0x148))(piVar6,8);
        }
        *(undefined4 *)(unaff_r10 + 0x1c) = uVar3;
        iVar4 = JGalaxyMenu::JGalaxyMenu_Create
                          (*(undefined4 *)(unaff_r10 + 0x330),*(undefined4 *)(unaff_r10 + 0x10),0);
        *(int *)(unaff_r10 + 0x33c) = iVar4;
        *(code **)(iVar4 + 0x1c) = FUN_02153e14;
        *(int *)(iVar4 + 0x20) = unaff_r10;
        return;
      }
      unaff_r4 = 0;
      unaff_r8 = (uint)*(byte *)(unaff_r7 + unaff_r5 + 0x2d) * unaff_r11 +
                 *(int *)(*(int *)(unaff_r10 + 0x330) + 0x34);
    }
    param_1 = &uStack000000f8;
    unaff_r9 = *(int *)(*(int *)(unaff_r10 + 0x330) + 0x38) +
               (uint)*(byte *)(unaff_r8 + unaff_r4 + 0x38) * 0x40;
  } while( true );
}

