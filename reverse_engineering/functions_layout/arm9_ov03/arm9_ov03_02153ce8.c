
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02153ce8(int *param_1,undefined *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 extraout_r1;
  undefined4 uVar10;
  uint uVar11;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int iVar12;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  undefined4 uStack0000001c;
  int iStack00000028;
  undefined4 uStack0000002c;
  undefined4 uStack00000044;
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
  undefined4 uStack00000074;
  undefined4 uStack00000078;
  undefined4 uStack0000007c;
  undefined4 uStack00000080;
  undefined4 uStack00000084;
  undefined4 uStack00000088;
  undefined4 uStack0000008c;
  undefined4 uStack00000090;
  undefined4 uStack00000094;
  undefined4 uStack00000098;
  undefined4 uStack0000009c;
  undefined4 uStack000000a0;
  undefined4 uStack000000a4;
  undefined4 uStack000000a8;
  undefined4 uStack000000ac;
  undefined4 uStack000000b0;
  undefined4 uStack000000b4;
  undefined4 uStack000000b8;
  undefined4 uStack000000bc;
  undefined4 uStack000000c0;
  undefined4 uStack000000c4;
  undefined4 uStack000000c8;
  undefined4 uStack000000cc;
  undefined4 uStack000000d0;
  undefined4 uStack000000d4;
  undefined4 uStack000000d8;
  undefined4 uStack000000dc;
  undefined4 uStack000000e0;
  undefined4 uStack000000e4;
  undefined4 uStack000000e8;
  undefined4 uStack000000ec;
  undefined4 uStack000000f0;
  undefined4 uStack000000f4;
  undefined4 uStack000000f8;
  undefined4 uStack000000fc;
  undefined4 uStack00000100;
  undefined4 uStack00000104;
  undefined4 uStack00000108;
  undefined4 uStack0000010c;
  undefined4 uStack00000110;
  undefined4 uStack00000114;
  undefined4 uStack00000118;
  undefined4 uStack0000011c;
  undefined4 uStack00000120;
  undefined4 uStack00000124;
  undefined4 uStack00000128;
  undefined4 uStack0000012c;
  undefined4 uStack00000130;
  undefined4 uStack00000134;
  undefined4 uStack00000138;
  undefined4 uStack0000013c;
  undefined4 uStack00000140;
  undefined4 uStack00000144;
  undefined4 uStack00000148;
  undefined4 uStack0000014c;
  undefined4 uStack00000150;
  undefined4 uStack00000154;
  undefined4 uStack00000158;
  undefined4 uStack0000015c;
  undefined4 uStack00000160;
  undefined4 uStack00000164;
  undefined4 uStack00000168;
  undefined4 uStack0000016c;
  undefined4 uStack00000170;
  undefined4 uStack00000174;
  undefined4 uStack00000178;
  undefined4 uStack0000017c;
  undefined1 uStack00000180;
  undefined2 in_stack_00000194;
  
  do {
    (**(code **)(param_3 + 0x68))(param_1,param_2);
    (**(code **)(**(int **)(unaff_r4 + 4) + 0xd8))(*(int **)(unaff_r4 + 4),1);
    FUN_0214cfc8();
    FUN_0214e908(unaff_r8,unaff_r9);
    FUN_0214e908(unaff_r8,unaff_r4);
    iVar2 = FUN_0203b3f4();
    FUN_0214cf8c(*(undefined4 *)(iVar2 + 0x88));
    iVar2 = func_0x021caa0c(&DAT_0215e3a8,0,0);
    iVar3 = FUN_0214fb7c(*(undefined4 *)(unaff_r10 + 4));
    iVar12 = 0;
    iVar3 = *(int *)(*(int *)(iVar3 + 4) + 0x10);
    do {
      func_0x021c5fb4(*(undefined4 *)(iVar2 + 4));
      iVar4 = FUN_0214d47c();
      uStack00000120 = 0;
      uStack00000124 = (iVar12 * 0x20 + -0x100) * 0x1000;
      FUN_0214e990(iVar4,&uStack00000120,&uStack00000124);
      piVar5 = *(int **)(iVar4 + 4);
      (**(code **)(*(int *)piVar5[0x19] + 0x70))();
      (**(code **)(*piVar5 + 0xc4))();
      FUN_0214fb44(iVar4,unaff_r9);
      (**(code **)(**(int **)(iVar4 + 4) + 0x24))(*(int **)(iVar4 + 4),iVar12 + 0xc);
      uVar6 = FUN_0214d79c(*(undefined4 *)(unaff_r10 + 0x564),*(undefined1 *)(unaff_r10 + 2),
                           *(undefined1 *)(iVar3 + iVar12 + 0x80));
      piVar5 = *(int **)(*(int *)(iVar4 + 4) + 100);
      (**(code **)(*piVar5 + 0x68))(piVar5,uVar6);
      FUN_0214e908(unaff_r8,iVar4);
      iVar12 = iVar12 + 1;
    } while (iVar12 < 8);
    (**(code **)(**(int **)(iVar2 + 4) + 0xc))();
    FUN_0214cfc8();
    do {
      iVar2 = 0;
      do {
        iVar3 = ALWidgetBaseImp::Create();
        if (unaff_r6 == 0) {
          iVar12 = 0x14;
        }
        else {
          iVar12 = 0;
        }
        *(int *)(*(int *)(iVar3 + 4) + 0x124) = iVar2 + iVar12;
        uStack00000154 = 0;
        uStack00000150 = iVar2 << 0x11;
        FUN_0214e990(iVar3,&uStack00000154,&uStack00000150);
        FUN_0214fb44(iVar3,unaff_r5);
        func_0x021b6214(*(undefined4 *)(iVar3 + 4),0);
        (**(code **)(**(int **)(iVar3 + 4) + 0x24))();
        uStack0000014c = 0x84000;
        FUN_02152730(iVar3,&uStack0000014c);
        FUN_02028384(*(undefined4 *)(iVar3 + 4),FUN_021550e4);
        iVar12 = unaff_r10 + iVar2 * 4;
        if (unaff_r6 == 0) {
          *(int *)(iVar12 + 0x13c) = iVar3;
        }
        else {
          *(int *)(iVar12 + 0xec) = iVar3;
        }
        iVar12 = ALWidgetImp::Create(iVar3,_DAT_021d5154);
        (**(code **)(**(int **)(iVar12 + 4) + 0x24))();
        uStack000000d4 = 0x84000;
        FUN_02152730(iVar12,&uStack000000d4);
        uStack000000d8 = 0x9c000;
        FUN_0214d52c(iVar12,&uStack000000d8);
        uStack000000e0 = 0;
        uStack000000dc = 0x3000;
        FUN_0214e990(iVar12,&uStack000000dc,&uStack000000e0);
        *(int *)(*(int *)(iVar12 + 4) + 0x124) = iVar2;
        (**(code **)(**(int **)(iVar12 + 4) + 0xd8))(*(int **)(iVar12 + 4),1);
        func_0x021b6214(*(undefined4 *)(iVar12 + 4),0);
        if (unaff_r6 == 0 && iVar2 == 0) {
          (**(code **)(**(int **)(iVar12 + 4) + 0xd8))(*(int **)(iVar12 + 4),0);
        }
        if (unaff_r6 == 0) {
          iVar4 = FUN_0203b3f4();
          uVar6 = *(undefined4 *)(iVar4 + 0x88);
          uStack0000002c = 0x851000;
        }
        else {
          iVar4 = FUN_0203b404();
          uVar6 = *(undefined4 *)(iVar4 + 0x88);
          uStack0000002c = 0x850000;
        }
        bVar1 = *(byte *)(unaff_r10 + 2);
        iVar4 = FUN_0214fb7c(*(undefined4 *)(unaff_r10 + 4));
        uVar11 = (uint)*(byte *)(iVar2 + (uint)bVar1 * 0x14 + *(int *)(*(int *)(iVar4 + 4) + 0x10) +
                                0x24);
        if (uVar11 < 3) {
          iVar4 = FUN_0214d4a4(uVar6,uStack0000002c,uVar11 + 0x18,0x9c);
          uStack00000100 = 0x11000;
          uStack000000fc = 0x1b000;
          FUN_0214e990(iVar4,&uStack000000fc,&uStack00000100);
          (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),1);
          FUN_0214e908(iVar12,iVar4);
        }
        else {
          iVar4 = FUN_0200d12c(uVar11 + 1,10);
          if (iVar4 != 0) {
            iVar7 = FUN_0214d4a4(uVar6,uStack0000002c,iVar4 + 0x1b,0x9c);
            uStack000000e8 = 0x10000;
            uStack000000e4 = 0x18000;
            FUN_0214e990(iVar7,&uStack000000e4,&uStack000000e8);
            (**(code **)(**(int **)(iVar7 + 4) + 0xd8))(*(int **)(iVar7 + 4),1);
            FUN_0214e908(iVar12,iVar7);
          }
          iVar7 = FUN_0214d4a4(uVar6,uStack0000002c,uVar11 + 1 + iVar4 * -10 + 0x1b,0x9c);
          if (iVar4 == 0) {
            uStack000000f8 = 0x10000;
            uStack000000f4 = 0x1d000;
            FUN_0214e990(iVar7,&uStack000000f4,&uStack000000f8);
          }
          else {
            uStack000000f0 = 0x10000;
            uStack000000ec = 0x20000;
            FUN_0214e990(iVar7,&uStack000000ec,&uStack000000f0);
          }
          (**(code **)(**(int **)(iVar7 + 4) + 0xd8))(*(int **)(iVar7 + 4),1);
          FUN_0214e908(iVar12,iVar7);
        }
        iVar12 = ALWidgetImp::Create(iVar3,_DAT_021d5154);
        (**(code **)(**(int **)(iVar12 + 4) + 0x24))();
        uStack000000a4 = 0x84000;
        FUN_02152730(iVar12,&uStack000000a4);
        uStack000000a8 = 0x9c000;
        FUN_0214d52c(iVar12,&uStack000000a8);
        uStack000000b0 = 0xffffc000;
        uStack000000ac = 0xc2000;
        FUN_0214e990(iVar12,&uStack000000ac,&uStack000000b0);
        *(int *)(*(int *)(iVar12 + 4) + 0x124) = iVar2;
        (**(code **)(**(int **)(iVar12 + 4) + 0xd8))(*(int **)(iVar12 + 4),1);
        func_0x021b6214(*(undefined4 *)(iVar12 + 4),0);
        if (unaff_r6 == 0) {
          iVar4 = FUN_0203b3f4();
          uVar6 = *(undefined4 *)(iVar4 + 0x88);
          uStack0000001c = 0x851000;
        }
        else {
          iVar4 = FUN_0203b404();
          uVar6 = *(undefined4 *)(iVar4 + 0x88);
          uStack0000001c = 0x850000;
        }
        iVar4 = FUN_0214fb7c(*(undefined4 *)(unaff_r10 + 4));
        iVar8 = (int)*(short *)(*(int *)(*(int *)(iVar4 + 4) + 0x10) + iVar2 * 2 + 0x88);
        iVar7 = FUN_0200d12c(iVar8,100);
        iVar8 = iVar8 + iVar7 * -100;
        iVar9 = FUN_0200d12c(iVar8,10);
        iVar4 = 0x1e;
        iStack00000028 = 0x1e;
        if (iVar7 != 0) {
          iVar4 = FUN_0214d4a4(uVar6,uStack0000001c,iVar7 + 0x2d,0x9c);
          uStack000000b8 = 0x11000;
          uStack000000b4 = 0x16000;
          FUN_0214e990(iVar4,&uStack000000b4,&uStack000000b8);
          (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),1);
          iVar4 = FUN_0214e908(iVar12,iVar4);
        }
        if (iVar7 == 0) {
          iVar4 = iVar9;
        }
        if (iVar7 != 0 || iVar4 != 0) {
          iVar4 = FUN_0214d4a4(uVar6,uStack0000001c,iVar9 + 0x2d,0x9c);
          if (iVar7 == 0) {
            uStack000000c8 = 0x11000;
            uStack000000c4 = 0x1a000;
            FUN_0214e990(iVar4,&uStack000000c4,&uStack000000c8);
            iStack00000028 = 0x22;
          }
          else {
            uStack000000c0 = 0x11000;
            uStack000000bc = 0x1e000;
            FUN_0214e990(iVar4,&uStack000000bc,&uStack000000c0);
            iStack00000028 = 0x26;
          }
          (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),1);
          FUN_0214e908(iVar12,iVar4);
        }
        iVar4 = FUN_0214d4a4(uVar6,uStack0000001c,iVar8 + iVar9 * -10 + 0x2d,0x9c);
        uStack000000cc = iStack00000028 << 0xc;
        uStack000000d0 = 0x11000;
        FUN_0214e990(iVar4,&uStack000000cc,&uStack000000d0);
        (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),1);
        FUN_0214e908(iVar12,iVar4);
        if (iVar2 == *(int *)(unaff_r10 + 0x580)) {
          iVar12 = ALWidgetImp::Create(iVar3,_DAT_021d5154);
          (**(code **)(**(int **)(iVar12 + 4) + 0x24))();
          uStack0000008c = 0x84000;
          FUN_02152730(iVar12,&uStack0000008c);
          uStack00000090 = 0x9d000;
          FUN_0214d52c(iVar12,&uStack00000090);
          uStack00000098 = 0;
          uStack00000094 = 0;
          FUN_0214e990(iVar12,&uStack00000094,&uStack00000098);
          *(int *)(*(int *)(iVar12 + 4) + 0x124) = iVar2;
          (**(code **)(**(int **)(iVar12 + 4) + 0xd8))(*(int **)(iVar12 + 4),1);
          func_0x021b6214(*(undefined4 *)(iVar12 + 4),0);
          if (unaff_r6 == 0) {
            iVar4 = FUN_0203b3f4();
            uVar6 = *(undefined4 *)(iVar4 + 0x88);
            uVar10 = 0x851000;
          }
          else {
            iVar4 = FUN_0203b404();
            uVar6 = *(undefined4 *)(iVar4 + 0x88);
            uVar10 = 0x850000;
          }
          iVar4 = FUN_0214d4a4(uVar6,uVar10,0xb,0x9d);
          uStack000000a0 = 0x10000;
          uStack0000009c = 0x81000;
          FUN_0214e990(iVar4,&uStack0000009c,&uStack000000a0);
          (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),1);
          FUN_0214e908(iVar12,iVar4);
          if (*(int *)(unaff_r10 + (uint)(unaff_r6 != 0) * 4 + 0x55c) == 0) {
            iVar12 = *(int *)(*(int *)(iVar4 + 4) + 100);
            piVar5 = *(int **)(iVar12 + 0x2c);
            if (piVar5 == (int *)0x0) {
              piVar5 = (int *)FUN_02036430(*(undefined4 *)(iVar12 + 0x20));
            }
            if (piVar5[6] == 0) {
              (**(code **)(*piVar5 + 0x10))();
            }
            iVar12 = CommonPaletteAnime::CommonPaletteAnime_Create(piVar5[6],0x21,0xe,5);
            *(int *)(unaff_r10 + (uint)(unaff_r6 != 0) * 4 + 0x55c) = iVar12;
            if (iVar12 != 0) {
              *(undefined2 *)(iVar12 + 0x18) = 0;
              *(undefined2 *)(iVar12 + 0x16) = 0x79f;
              *(undefined1 *)(iVar12 + 0x1a) = 0x1e;
              *(undefined1 *)(iVar12 + 0x1c) = 1;
              *(undefined1 *)(iVar12 + 0x1b) = 1;
            }
          }
        }
        iVar12 = ALWidgetImp::Create(iVar3,_DAT_021d5154);
        (**(code **)(**(int **)(iVar12 + 4) + 0x24))();
        uStack00000074 = 0x84000;
        FUN_02152730(iVar12,&uStack00000074);
        uStack00000078 = 0x9c000;
        FUN_0214d52c(iVar12,&uStack00000078);
        uStack00000080 = 0;
        uStack0000007c = 0xaf000;
        FUN_0214e990(iVar12,&uStack0000007c,&uStack00000080);
        *(int *)(*(int *)(iVar12 + 4) + 0x124) = iVar2;
        (**(code **)(**(int **)(iVar12 + 4) + 0xd8))(*(int **)(iVar12 + 4),1);
        func_0x021b6214(*(undefined4 *)(iVar12 + 4),0);
        if (unaff_r6 == 0) {
          iVar4 = FUN_0203b3f4();
          uVar6 = *(undefined4 *)(iVar4 + 0x88);
          uVar10 = 0x851000;
        }
        else {
          iVar4 = FUN_0203b404();
          uVar6 = *(undefined4 *)(iVar4 + 0x88);
          uVar10 = 0x850000;
        }
        iVar4 = FUN_0214fb7c(*(undefined4 *)(unaff_r10 + 4));
        iVar4 = FUN_0214d7d4(*(undefined1 *)(unaff_r10 + 2),
                             *(undefined1 *)(*(int *)(*(int *)(iVar4 + 4) + 0x10) + iVar2 + 0x74));
        iVar4 = FUN_0214d4a4(uVar6,uVar10,s_________0215d518[iVar4],0x9c);
        uStack00000088 = 0x10000;
        uStack00000084 = 0x12000;
        FUN_0214e990(iVar4,&uStack00000084,&uStack00000088);
        (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),1);
        FUN_0214e908(iVar12,iVar4);
        iVar12 = FUN_0214fb7c(*(undefined4 *)(unaff_r10 + 4));
        iVar12 = FUN_0214d808(*(undefined1 *)(unaff_r10 + 2),
                              *(undefined1 *)(*(int *)(*(int *)(iVar12 + 4) + 0x10) + iVar2 + 0x74))
        ;
        if (iVar12 != 0) {
          iVar12 = ALWidgetImp::Create(iVar3,_DAT_021d5154);
          (**(code **)(**(int **)(iVar12 + 4) + 0x24))();
          uStack0000005c = 0x84000;
          FUN_02152730(iVar12,&uStack0000005c);
          uStack00000060 = 0x9c000;
          FUN_0214d52c(iVar12,&uStack00000060);
          uStack00000068 = 0x10000;
          uStack00000064 = 0x9c000;
          FUN_0214e990(iVar12,&uStack00000064,&uStack00000068);
          *(int *)(*(int *)(iVar12 + 4) + 0x124) = iVar2;
          (**(code **)(**(int **)(iVar12 + 4) + 0xd8))(*(int **)(iVar12 + 4),1);
          func_0x021b6214(*(undefined4 *)(iVar12 + 4),0);
          if (unaff_r6 == 0) {
            iVar4 = FUN_0203b3f4();
            uVar6 = *(undefined4 *)(iVar4 + 0x88);
            uVar10 = 0x851000;
          }
          else {
            iVar4 = FUN_0203b404();
            uVar6 = *(undefined4 *)(iVar4 + 0x88);
            uVar10 = 0x850000;
          }
          iVar4 = FUN_0214d4a4(uVar6,uVar10,0x25,0x9c);
          uStack00000070 = 0x8000;
          uStack0000006c = 0x8000;
          FUN_0214e990(iVar4,&uStack0000006c,&uStack00000070);
          (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),1);
          FUN_0214e908(iVar12,iVar4);
        }
        if (unaff_r6 != 0) {
          iVar12 = FUN_0214fb7c(*(undefined4 *)(unaff_r10 + 4));
          iVar4 = *(int *)(*(int *)(iVar12 + 4) + 0x10);
          iVar3 = ALWidgetImp::Create(iVar3,_DAT_021d5154);
          uStack00000044 = 0x9c000;
          FUN_0214d52c(iVar3,&uStack00000044);
          uStack0000004c = 0;
          uStack00000048 = 0x2b000;
          FUN_0214e990(iVar3,&uStack00000048,&uStack0000004c);
          *(int *)(*(int *)(iVar3 + 4) + 0x124) = iVar2;
          (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),1);
          func_0x021b6214(*(undefined4 *)(iVar3 + 4),0);
          iVar12 = FUN_0203b404();
          FUN_0214cf8c(*(undefined4 *)(iVar12 + 0x88));
          iVar12 = FUN_0214fb7c(*(undefined4 *)(unaff_r10 + 4));
          func_0x021c5fb4(*(undefined4 *)(*(int *)(*(int *)(*(int *)(iVar12 + 4) + 0x10) + 0xc) + 4)
                         );
          iVar12 = FUN_0214d47c();
          uStack00000054 = 0x3000;
          uStack00000050 = 0;
          FUN_0214e990(iVar12,&uStack00000050,&uStack00000054);
          piVar5 = *(int **)(iVar12 + 4);
          (**(code **)(*(int *)piVar5[0x19] + 0x70))();
          (**(code **)(*piVar5 + 0xc4))();
          (**(code **)(**(int **)(iVar12 + 4) + 0xd8))(*(int **)(iVar12 + 4),1);
          uStack00000058 = 0x9c000;
          FUN_0214d52c(iVar12,&uStack00000058);
          uVar6 = FUN_0214d79c(*(undefined4 *)(unaff_r10 + 0x564),*(undefined1 *)(unaff_r10 + 2),
                               *(undefined1 *)(iVar4 + iVar2 + 0x74));
          piVar5 = *(int **)(*(int *)(iVar12 + 4) + 100);
          (**(code **)(*piVar5 + 0x68))(piVar5,uVar6);
          FUN_0214e908(iVar3,iVar12);
          FUN_0214cfc8();
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x14);
      unaff_r6 = unaff_r6 + 1;
      if (1 < unaff_r6) {
        return;
      }
      unaff_r5 = ALWidgetBaseImp::Create();
      if (unaff_r6 == 0) {
        uStack0000016c = 0xfff61000;
        uStack00000170 = 0;
        FUN_0214e990(unaff_r5,&uStack00000170,&uStack0000016c);
        uStack00000168 = 0x83000;
        FUN_02152730(unaff_r5,&uStack00000168);
      }
      else {
        uStack00000178 = 0x21000;
        uStack0000017c = 0;
        FUN_0214e990(unaff_r5,&uStack0000017c,&uStack00000178);
        uStack00000174 = 0x82000;
        FUN_02152730(unaff_r5,&uStack00000174);
      }
      *(int *)(*(int *)(unaff_r5 + 4) + 0x124) = unaff_r6;
      (**(code **)(**(int **)(unaff_r5 + 4) + 0xd8))(*(int **)(unaff_r5 + 4),1);
      func_0x021b6214(*(undefined4 *)(unaff_r5 + 4),0);
      (**(code **)(**(int **)(unaff_r5 + 4) + 0x24))();
      FUN_02028384(*(undefined4 *)(unaff_r5 + 4),FUN_02154b78);
      *(int *)(unaff_r10 + unaff_r6 * 4 + 0x44) = unaff_r5;
      iVar2 = ALWidgetImp::Create(unaff_r5,_DAT_021d5154);
      FUN_0214fb44(iVar2,unaff_r5);
      uStack00000160 = 0;
      uStack00000164 = 0;
      FUN_0214e990(iVar2,&uStack00000164,&uStack00000160);
      (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
      if (unaff_r6 == 0) {
        iVar3 = FUN_0203b424(1);
        uVar6 = *(undefined4 *)(iVar3 + 0x88);
        iVar3 = 5;
      }
      else {
        iVar3 = FUN_0203b414(2);
        uVar6 = *(undefined4 *)(iVar3 + 0x88);
        iVar3 = 2;
      }
      iVar3 = FUN_0214d3a8((&DAT_0215e17c)[iVar3],(&DAT_0215e194)[iVar3],uVar6);
      (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),1);
      uStack00000158 = 0;
      uStack0000015c = 0x9000;
      FUN_0214e990(iVar3,&uStack0000015c,&uStack00000158);
      FUN_0214e908(iVar2,iVar3);
      iVar2 = ALWidgetBaseImp::Create();
      (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
      if (unaff_r6 == 0) {
        iVar3 = FUN_0203b424(0);
        uVar6 = *(undefined4 *)(iVar3 + 0x88);
        *(int *)(unaff_r10 + 0x18c) = iVar2;
      }
      else {
        iVar3 = FUN_0203b414(3);
        uVar6 = *(undefined4 *)(iVar3 + 0x88);
        *(int *)(unaff_r10 + 400) = iVar2;
      }
      iVar2 = ALWidgetImp::Create(iVar2,_DAT_021d5154);
      uStack0000012c = 0;
      uStack00000128 = 0;
      FUN_0214e990(iVar2,&uStack00000128,&uStack0000012c);
      (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
      uVar10 = extraout_r1;
      if (unaff_r6 != 0) {
        uVar10 = 1;
      }
      if (unaff_r6 == 0) {
        uVar10 = 0;
      }
      *(undefined4 *)(*(int *)(iVar2 + 4) + 0x124) = uVar10;
      (**(code **)(**(int **)(iVar2 + 4) + 0x24))();
      uStack00000130 = 0x84000;
      FUN_02152730(iVar2,&uStack00000130);
      FUN_02028384(*(undefined4 *)(iVar2 + 4),FUN_02155250);
      FUN_0214cf8c(uVar6);
      FUN_02036ab8();
      iVar3 = FUN_0214d47c();
      uStack00000138 = 0x10000;
      uStack00000134 = 0x2c000;
      FUN_0214e990(iVar3,&uStack00000134,&uStack00000138);
      piVar5 = *(int **)(*(int *)(iVar3 + 4) + 100);
      (**(code **)(*piVar5 + 0xa4))(piVar5,0x20,0x20);
      piVar5 = *(int **)(*(int *)(iVar3 + 4) + 100);
      (**(code **)(*piVar5 + 0x7c))(piVar5,0);
      (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),1);
      iVar12 = func_0x021ca3a4(0x10,0x10,s_font_dsfont_aft_0215e398);
      uStack00000140 = 0xe0000;
      uStack0000013c = 0xe0000;
      FUN_0214e990(iVar12,&uStack0000013c,&uStack00000140);
      piVar5 = *(int **)(iVar12 + 4);
      (**(code **)(*(int *)piVar5[0x19] + 0x70))();
      (**(code **)(*piVar5 + 0xc4))();
      piVar5 = *(int **)(*(int *)(iVar12 + 4) + 100);
      (**(code **)(*piVar5 + 0x6c))(piVar5,&DAT_0215d4ec,0xffffffff);
      (**(code **)(**(int **)(iVar12 + 4) + 0xd8))(*(int **)(iVar12 + 4),1);
      FUN_0214fb44(iVar12,iVar3);
      FUN_0214cfc8();
      FUN_0214e908(iVar2,iVar3);
      FUN_0214e908(iVar2,iVar12);
      iVar12 = FUN_0214fb7c(*(undefined4 *)(unaff_r10 + 4));
      iVar4 = *(int *)(*(int *)(iVar12 + 4) + 0x10);
      FUN_0214cf8c(uVar6);
      iVar12 = 0;
      do {
        iVar7 = func_0x021ca3a4(0x100,0x10,s_font_dsfont_aft_0215e398,0);
        uStack00000144 = 0;
        uStack00000148 = iVar12 << 0x11;
        FUN_0214e990(iVar7,&uStack00000144,&uStack00000148);
        piVar5 = *(int **)(iVar7 + 4);
        (**(code **)(*(int *)piVar5[0x19] + 0x70))();
        (**(code **)(*piVar5 + 0xc4))();
        FUN_0214fb44(iVar7,iVar3);
        (**(code **)(**(int **)(iVar7 + 4) + 0xd8))(*(int **)(iVar7 + 4),1);
        uVar6 = FUN_0214d784(*(undefined1 *)(unaff_r10 + 2),*(undefined1 *)(iVar4 + iVar12 + 0x80));
        FUN_02051890(uVar6,&uStack00000180,0x14);
        in_stack_00000194 = 0;
        piVar5 = *(int **)(*(int *)(iVar7 + 4) + 100);
        (**(code **)(*piVar5 + 0x6c))(piVar5,&uStack00000180,0xffffffff);
        FUN_0214e908(iVar2,iVar7);
        iVar12 = iVar12 + 1;
      } while (iVar12 < 8);
      FUN_0214cfc8();
    } while (unaff_r6 != 0);
    iVar2 = ALWidgetBaseImp::Create();
    (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
    iVar3 = FUN_0203b424(2);
    uVar6 = *(undefined4 *)(iVar3 + 0x88);
    *(int *)(unaff_r10 + 0x194) = iVar2;
    unaff_r8 = ALWidgetImp::Create(iVar2,_DAT_021d5154);
    uStack00000108 = 0;
    uStack00000104 = 0;
    FUN_0214e990(unaff_r8,&uStack00000104,&uStack00000108);
    (**(code **)(**(int **)(unaff_r8 + 4) + 0xd8))(*(int **)(unaff_r8 + 4),1);
    *(undefined4 *)(*(int *)(unaff_r8 + 4) + 0x124) = 2;
    (**(code **)(**(int **)(unaff_r8 + 4) + 0x24))();
    uStack0000010c = 0x84000;
    FUN_02152730(unaff_r8,&uStack0000010c);
    FUN_02028384(*(undefined4 *)(unaff_r8 + 4),FUN_021556d8);
    FUN_0214cf8c(uVar6);
    FUN_02036ab8();
    unaff_r9 = FUN_0214d47c();
    uStack00000114 = 0x3000;
    uStack00000110 = 0x2c000;
    FUN_0214e990(unaff_r9,&uStack00000110,&uStack00000114);
    piVar5 = *(int **)(*(int *)(unaff_r9 + 4) + 100);
    (**(code **)(*piVar5 + 0xa4))(piVar5,0x20,0x20);
    piVar5 = *(int **)(*(int *)(unaff_r9 + 4) + 100);
    (**(code **)(*piVar5 + 0x7c))(piVar5,0);
    (**(code **)(**(int **)(unaff_r9 + 4) + 0xd8))(*(int **)(unaff_r9 + 4),1);
    unaff_r4 = func_0x021ca3a4(0x10,0x10,&DAT_0215e3a8);
    uStack0000011c = 0xf0000;
    uStack00000118 = 0xf0000;
    FUN_0214e990(unaff_r4,&uStack00000118,&uStack0000011c);
    piVar5 = *(int **)(unaff_r4 + 4);
    (**(code **)(*(int *)piVar5[0x19] + 0x70))();
    (**(code **)(*piVar5 + 0xc4))();
    param_2 = &DAT_0215e3bc;
    param_1 = *(int **)(*(int *)(unaff_r4 + 4) + 100);
    param_3 = *param_1;
  } while( true );
}

