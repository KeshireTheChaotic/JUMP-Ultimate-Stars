
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0215369c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 extraout_r1;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  undefined4 uStack_1cc;
  int iStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  int aiStack_11c [23];
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  int local_a0 [3];
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 auStack_68 [20];
  undefined2 local_54;
  undefined4 uStack_28;
  
  iVar13 = 0;
  *(undefined4 *)(param_1 + 0x55c) = 0;
  *(undefined4 *)(param_1 + 0x560) = 0;
  uStack_28 = param_4;
  do {
    iVar2 = ALWidgetBaseImp::Create(param_1);
    if (iVar13 == 0) {
      local_7c = 0xfff61000;
      local_78 = 0;
      FUN_0214e990(iVar2,&local_78,&local_7c);
      local_80 = 0x83000;
      FUN_02152730(iVar2,&local_80);
    }
    else {
      local_70 = 0x21000;
      local_6c = 0;
      FUN_0214e990(iVar2,&local_6c,&local_70);
      local_74 = 0x82000;
      FUN_02152730(iVar2,&local_74);
    }
    *(int *)(*(int *)(iVar2 + 4) + 0x124) = iVar13;
    (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
    func_0x021b6214(*(undefined4 *)(iVar2 + 4),0);
    (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),param_1);
    FUN_02028384(*(undefined4 *)(iVar2 + 4),FUN_02154b78);
    *(int *)(param_1 + iVar13 * 4 + 0x44) = iVar2;
    iVar3 = ALWidgetImp::Create(iVar2,_DAT_021d5154);
    FUN_0214fb44(iVar3,iVar2);
    local_88 = 0;
    local_84 = 0;
    FUN_0214e990(iVar3,&local_84,&local_88);
    (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),1);
    if (iVar13 == 0) {
      iVar4 = FUN_0203b424(1);
      uVar11 = *(undefined4 *)(iVar4 + 0x88);
      iVar4 = 5;
    }
    else {
      iVar4 = FUN_0203b414(2);
      uVar11 = *(undefined4 *)(iVar4 + 0x88);
      iVar4 = 2;
    }
    iVar4 = FUN_0214d3a8((&DAT_0215e17c)[iVar4],(&DAT_0215e194)[iVar4],uVar11);
    (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),1);
    local_90 = 0;
    local_8c = 0x9000;
    FUN_0214e990(iVar4,&local_8c,&local_90);
    FUN_0214e908(iVar3,iVar4);
    iVar3 = ALWidgetBaseImp::Create(param_1);
    (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),1);
    if (iVar13 == 0) {
      iVar4 = FUN_0203b424(0);
      uVar11 = *(undefined4 *)(iVar4 + 0x88);
      *(int *)(param_1 + 0x18c) = iVar3;
    }
    else {
      iVar4 = FUN_0203b414(3);
      uVar11 = *(undefined4 *)(iVar4 + 0x88);
      *(int *)(param_1 + 400) = iVar3;
    }
    iVar3 = ALWidgetImp::Create(iVar3,_DAT_021d5154);
    local_bc = 0;
    local_c0 = 0;
    FUN_0214e990(iVar3,&local_c0,&local_bc);
    (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),1);
    uVar10 = extraout_r1;
    if (iVar13 != 0) {
      uVar10 = 1;
    }
    if (iVar13 == 0) {
      uVar10 = 0;
    }
    *(undefined4 *)(*(int *)(iVar3 + 4) + 0x124) = uVar10;
    (**(code **)(**(int **)(iVar3 + 4) + 0x24))(*(int **)(iVar3 + 4),param_1);
    local_b8 = 0x84000;
    FUN_02152730(iVar3,&local_b8);
    FUN_02028384(*(undefined4 *)(iVar3 + 4),FUN_02155250);
    FUN_0214cf8c(uVar11);
    FUN_02036ab8();
    iVar4 = FUN_0214d47c();
    local_b0 = 0x10000;
    local_b4 = 0x2c000;
    FUN_0214e990(iVar4,&local_b4,&local_b0);
    piVar5 = *(int **)(*(int *)(iVar4 + 4) + 100);
    (**(code **)(*piVar5 + 0xa4))(piVar5,0x20,0x20);
    piVar5 = *(int **)(*(int *)(iVar4 + 4) + 100);
    (**(code **)(*piVar5 + 0x7c))(piVar5,0);
    (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),1);
    iVar6 = func_0x021ca3a4(0x10,0x10,s_font_dsfont_aft_0215e398,0,0);
    local_a8 = 0xe0000;
    local_ac = 0xe0000;
    FUN_0214e990(iVar6,&local_ac,&local_a8);
    piVar5 = *(int **)(iVar6 + 4);
    (**(code **)(*(int *)piVar5[0x19] + 0x70))();
    (**(code **)(*piVar5 + 0xc4))();
    piVar5 = *(int **)(*(int *)(iVar6 + 4) + 100);
    (**(code **)(*piVar5 + 0x6c))(piVar5,&DAT_0215d4ec,0xffffffff);
    (**(code **)(**(int **)(iVar6 + 4) + 0xd8))(*(int **)(iVar6 + 4),1);
    FUN_0214fb44(iVar6,iVar4);
    FUN_0214cfc8();
    FUN_0214e908(iVar3,iVar4);
    FUN_0214e908(iVar3,iVar6);
    iVar6 = FUN_0214fb7c(*(undefined4 *)(param_1 + 4));
    iVar14 = *(int *)(*(int *)(iVar6 + 4) + 0x10);
    FUN_0214cf8c(uVar11);
    iVar6 = 0;
    do {
      iVar7 = func_0x021ca3a4(0x100,0x10,s_font_dsfont_aft_0215e398,0,0);
      local_a4 = 0;
      local_a0[0] = iVar6 << 0x11;
      FUN_0214e990(iVar7,&local_a4,local_a0);
      piVar5 = *(int **)(iVar7 + 4);
      (**(code **)(*(int *)piVar5[0x19] + 0x70))();
      (**(code **)(*piVar5 + 0xc4))();
      FUN_0214fb44(iVar7,iVar4);
      (**(code **)(**(int **)(iVar7 + 4) + 0xd8))(*(int **)(iVar7 + 4),1);
      uVar11 = FUN_0214d784(*(undefined1 *)(param_1 + 2),*(undefined1 *)(iVar14 + iVar6 + 0x80));
      FUN_02051890(uVar11,auStack_68,0x14);
      local_54 = 0;
      piVar5 = *(int **)(*(int *)(iVar7 + 4) + 100);
      (**(code **)(*piVar5 + 0x6c))(piVar5,auStack_68,0xffffffff);
      FUN_0214e908(iVar3,iVar7);
      iVar6 = iVar6 + 1;
    } while (iVar6 < 8);
    FUN_0214cfc8();
    if (iVar13 == 0) {
      iVar3 = ALWidgetBaseImp::Create(param_1);
      (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),1);
      iVar4 = FUN_0203b424(2);
      uVar11 = *(undefined4 *)(iVar4 + 0x88);
      *(int *)(param_1 + 0x194) = iVar3;
      iVar3 = ALWidgetImp::Create(iVar3,_DAT_021d5154);
      aiStack_11c[0xf] = 0;
      aiStack_11c[0xe] = 0;
      FUN_0214e990(iVar3,aiStack_11c + 0xe,aiStack_11c + 0xf);
      (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),1);
      *(undefined4 *)(*(int *)(iVar3 + 4) + 0x124) = 2;
      (**(code **)(**(int **)(iVar3 + 4) + 0x24))(*(int **)(iVar3 + 4),param_1);
      aiStack_11c[0x10] = 0x84000;
      FUN_02152730(iVar3,aiStack_11c + 0x10);
      FUN_02028384(*(undefined4 *)(iVar3 + 4),FUN_021556d8);
      FUN_0214cf8c(uVar11);
      FUN_02036ab8();
      iVar4 = FUN_0214d47c();
      aiStack_11c[0x12] = 0x3000;
      aiStack_11c[0x11] = 0x2c000;
      FUN_0214e990(iVar4,aiStack_11c + 0x11,aiStack_11c + 0x12);
      piVar5 = *(int **)(*(int *)(iVar4 + 4) + 100);
      (**(code **)(*piVar5 + 0xa4))(piVar5,0x20,0x20);
      piVar5 = *(int **)(*(int *)(iVar4 + 4) + 100);
      (**(code **)(*piVar5 + 0x7c))(piVar5,0);
      (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),1);
      iVar6 = func_0x021ca3a4(0x10,0x10,s_font_JSKFont_aft_0215e3a8,0,0);
      aiStack_11c[0x14] = 0xf0000;
      aiStack_11c[0x13] = 0xf0000;
      FUN_0214e990(iVar6,aiStack_11c + 0x13,aiStack_11c + 0x14);
      piVar5 = *(int **)(iVar6 + 4);
      (**(code **)(*(int *)piVar5[0x19] + 0x70))();
      (**(code **)(*piVar5 + 0xc4))();
      piVar5 = *(int **)(*(int *)(iVar6 + 4) + 100);
      (**(code **)(*piVar5 + 0x68))(piVar5,&DAT_0215e3bc);
      (**(code **)(**(int **)(iVar6 + 4) + 0xd8))(*(int **)(iVar6 + 4),1);
      FUN_0214cfc8();
      FUN_0214e908(iVar3,iVar4);
      FUN_0214e908(iVar3,iVar6);
      iVar6 = FUN_0203b3f4();
      FUN_0214cf8c(*(undefined4 *)(iVar6 + 0x88));
      iVar6 = func_0x021caa0c(s_font_JSKFont_aft_0215e3a8,0,0);
      iVar14 = FUN_0214fb7c(*(undefined4 *)(param_1 + 4));
      iVar7 = 0;
      iVar14 = *(int *)(*(int *)(iVar14 + 4) + 0x10);
      do {
        func_0x021c5fb4(*(undefined4 *)(iVar6 + 4));
        iVar8 = FUN_0214d47c();
        aiStack_11c[0x15] = 0;
        aiStack_11c[0x16] = (iVar7 * 0x20 + -0x100) * 0x1000;
        FUN_0214e990(iVar8,aiStack_11c + 0x15,aiStack_11c + 0x16);
        piVar5 = *(int **)(iVar8 + 4);
        (**(code **)(*(int *)piVar5[0x19] + 0x70))();
        (**(code **)(*piVar5 + 0xc4))();
        FUN_0214fb44(iVar8,iVar4);
        (**(code **)(**(int **)(iVar8 + 4) + 0x24))(*(int **)(iVar8 + 4),iVar7 + 0xc);
        uVar11 = FUN_0214d79c(*(undefined4 *)(param_1 + 0x564),*(undefined1 *)(param_1 + 2),
                              *(undefined1 *)(iVar14 + iVar7 + 0x80));
        piVar5 = *(int **)(*(int *)(iVar8 + 4) + 100);
        (**(code **)(*piVar5 + 0x68))(piVar5,uVar11);
        FUN_0214e908(iVar3,iVar8);
        iVar7 = iVar7 + 1;
      } while (iVar7 < 8);
      (**(code **)(**(int **)(iVar6 + 4) + 0xc))();
      FUN_0214cfc8();
    }
    iVar3 = 0;
    do {
      iVar4 = ALWidgetBaseImp::Create(param_1);
      if (iVar13 == 0) {
        iVar6 = 0x14;
      }
      else {
        iVar6 = 0;
      }
      *(int *)(*(int *)(iVar4 + 4) + 0x124) = iVar3 + iVar6;
      uStack_94 = 0;
      local_a0[2] = iVar3 << 0x11;
      FUN_0214e990(iVar4,&uStack_94,local_a0 + 2);
      FUN_0214fb44(iVar4,iVar2);
      func_0x021b6214(*(undefined4 *)(iVar4 + 4),0);
      (**(code **)(**(int **)(iVar4 + 4) + 0x24))(*(int **)(iVar4 + 4),param_1);
      local_a0[1] = 0x84000;
      FUN_02152730(iVar4,local_a0 + 1);
      FUN_02028384(*(undefined4 *)(iVar4 + 4),FUN_021550e4);
      iVar6 = param_1 + iVar3 * 4;
      if (iVar13 == 0) {
        *(int *)(iVar6 + 0x13c) = iVar4;
      }
      else {
        *(int *)(iVar6 + 0xec) = iVar4;
      }
      iVar6 = ALWidgetImp::Create(iVar4,_DAT_021d5154);
      (**(code **)(**(int **)(iVar6 + 4) + 0x24))(*(int **)(iVar6 + 4),param_1);
      aiStack_11c[2] = 0x84000;
      FUN_02152730(iVar6,aiStack_11c + 2);
      aiStack_11c[3] = 0x9c000;
      FUN_0214d52c(iVar6,aiStack_11c + 3);
      aiStack_11c[5] = 0;
      aiStack_11c[4] = 0x3000;
      FUN_0214e990(iVar6,aiStack_11c + 4,aiStack_11c + 5);
      *(int *)(*(int *)(iVar6 + 4) + 0x124) = iVar3;
      (**(code **)(**(int **)(iVar6 + 4) + 0xd8))(*(int **)(iVar6 + 4),1);
      func_0x021b6214(*(undefined4 *)(iVar6 + 4),0);
      if (iVar13 == 0 && iVar3 == 0) {
        (**(code **)(**(int **)(iVar6 + 4) + 0xd8))(*(int **)(iVar6 + 4),0);
      }
      if (iVar13 == 0) {
        iVar14 = FUN_0203b3f4();
        uVar11 = *(undefined4 *)(iVar14 + 0x88);
        uStack_1bc = 0x851000;
      }
      else {
        iVar14 = FUN_0203b404();
        uVar11 = *(undefined4 *)(iVar14 + 0x88);
        uStack_1bc = 0x850000;
      }
      bVar1 = *(byte *)(param_1 + 2);
      iVar14 = FUN_0214fb7c(*(undefined4 *)(param_1 + 4));
      uVar12 = (uint)*(byte *)(iVar3 + (uint)bVar1 * 0x14 + *(int *)(*(int *)(iVar14 + 4) + 0x10) +
                              0x24);
      if (uVar12 < 3) {
        iVar14 = FUN_0214d4a4(uVar11,uStack_1bc,uVar12 + 0x18,0x9c);
        aiStack_11c[0xd] = 0x11000;
        aiStack_11c[0xc] = 0x1b000;
        FUN_0214e990(iVar14,aiStack_11c + 0xc,aiStack_11c + 0xd);
        (**(code **)(**(int **)(iVar14 + 4) + 0xd8))(*(int **)(iVar14 + 4),1);
        FUN_0214e908(iVar6,iVar14);
      }
      else {
        iVar14 = FUN_0200d12c(uVar12 + 1,10);
        if (iVar14 != 0) {
          iVar7 = FUN_0214d4a4(uVar11,uStack_1bc,iVar14 + 0x1b,0x9c);
          aiStack_11c[7] = 0x10000;
          aiStack_11c[6] = 0x18000;
          FUN_0214e990(iVar7,aiStack_11c + 6,aiStack_11c + 7);
          (**(code **)(**(int **)(iVar7 + 4) + 0xd8))(*(int **)(iVar7 + 4),1);
          FUN_0214e908(iVar6,iVar7);
        }
        iVar7 = FUN_0214d4a4(uVar11,uStack_1bc,uVar12 + 1 + iVar14 * -10 + 0x1b,0x9c);
        if (iVar14 == 0) {
          aiStack_11c[0xb] = 0x10000;
          aiStack_11c[10] = 0x1d000;
          FUN_0214e990(iVar7,aiStack_11c + 10,aiStack_11c + 0xb);
        }
        else {
          aiStack_11c[9] = 0x10000;
          aiStack_11c[8] = 0x20000;
          FUN_0214e990(iVar7,aiStack_11c + 8,aiStack_11c + 9);
        }
        (**(code **)(**(int **)(iVar7 + 4) + 0xd8))(*(int **)(iVar7 + 4),1);
        FUN_0214e908(iVar6,iVar7);
      }
      iVar6 = ALWidgetImp::Create(iVar4,_DAT_021d5154);
      (**(code **)(**(int **)(iVar6 + 4) + 0x24))(*(int **)(iVar6 + 4),param_1);
      uStack_144 = 0x84000;
      FUN_02152730(iVar6,&uStack_144);
      uStack_140 = 0x9c000;
      FUN_0214d52c(iVar6,&uStack_140);
      uStack_138 = 0xffffc000;
      uStack_13c = 0xc2000;
      FUN_0214e990(iVar6,&uStack_13c,&uStack_138);
      *(int *)(*(int *)(iVar6 + 4) + 0x124) = iVar3;
      (**(code **)(**(int **)(iVar6 + 4) + 0xd8))(*(int **)(iVar6 + 4),1);
      func_0x021b6214(*(undefined4 *)(iVar6 + 4),0);
      if (iVar13 == 0) {
        iVar14 = FUN_0203b3f4();
        uVar11 = *(undefined4 *)(iVar14 + 0x88);
        uStack_1cc = 0x851000;
      }
      else {
        iVar14 = FUN_0203b404();
        uVar11 = *(undefined4 *)(iVar14 + 0x88);
        uStack_1cc = 0x850000;
      }
      iVar14 = FUN_0214fb7c(*(undefined4 *)(param_1 + 4));
      iVar8 = (int)*(short *)(*(int *)(*(int *)(iVar14 + 4) + 0x10) + iVar3 * 2 + 0x88);
      iVar7 = FUN_0200d12c(iVar8,100);
      iVar8 = iVar8 + iVar7 * -100;
      iVar9 = FUN_0200d12c(iVar8,10);
      iVar14 = 0x1e;
      iStack_1c0 = 0x1e;
      if (iVar7 != 0) {
        iVar14 = FUN_0214d4a4(uVar11,uStack_1cc,iVar7 + 0x2d,0x9c);
        uStack_130 = 0x11000;
        uStack_134 = 0x16000;
        FUN_0214e990(iVar14,&uStack_134,&uStack_130);
        (**(code **)(**(int **)(iVar14 + 4) + 0xd8))(*(int **)(iVar14 + 4),1);
        iVar14 = FUN_0214e908(iVar6,iVar14);
      }
      if (iVar7 == 0) {
        iVar14 = iVar9;
      }
      if (iVar7 != 0 || iVar14 != 0) {
        iVar14 = FUN_0214d4a4(uVar11,uStack_1cc,iVar9 + 0x2d,0x9c);
        if (iVar7 == 0) {
          uStack_120 = 0x11000;
          uStack_124 = 0x1a000;
          FUN_0214e990(iVar14,&uStack_124,&uStack_120);
          iStack_1c0 = 0x22;
        }
        else {
          uStack_128 = 0x11000;
          uStack_12c = 0x1e000;
          FUN_0214e990(iVar14,&uStack_12c,&uStack_128);
          iStack_1c0 = 0x26;
        }
        (**(code **)(**(int **)(iVar14 + 4) + 0xd8))(*(int **)(iVar14 + 4),1);
        FUN_0214e908(iVar6,iVar14);
      }
      iVar14 = FUN_0214d4a4(uVar11,uStack_1cc,iVar8 + iVar9 * -10 + 0x2d,0x9c);
      aiStack_11c[0] = iStack_1c0 << 0xc;
      aiStack_11c[1] = 0x11000;
      FUN_0214e990(iVar14,aiStack_11c,aiStack_11c + 1);
      (**(code **)(**(int **)(iVar14 + 4) + 0xd8))(*(int **)(iVar14 + 4),1);
      FUN_0214e908(iVar6,iVar14);
      if (iVar3 == *(int *)(param_1 + 0x580)) {
        iVar6 = ALWidgetImp::Create(iVar4,_DAT_021d5154);
        (**(code **)(**(int **)(iVar6 + 4) + 0x24))(*(int **)(iVar6 + 4),param_1);
        uStack_15c = 0x84000;
        FUN_02152730(iVar6,&uStack_15c);
        uStack_158 = 0x9d000;
        FUN_0214d52c(iVar6,&uStack_158);
        uStack_150 = 0;
        uStack_154 = 0;
        FUN_0214e990(iVar6,&uStack_154,&uStack_150);
        *(int *)(*(int *)(iVar6 + 4) + 0x124) = iVar3;
        (**(code **)(**(int **)(iVar6 + 4) + 0xd8))(*(int **)(iVar6 + 4),1);
        func_0x021b6214(*(undefined4 *)(iVar6 + 4),0);
        if (iVar13 == 0) {
          iVar14 = FUN_0203b3f4();
          uVar11 = *(undefined4 *)(iVar14 + 0x88);
          uVar10 = 0x851000;
        }
        else {
          iVar14 = FUN_0203b404();
          uVar11 = *(undefined4 *)(iVar14 + 0x88);
          uVar10 = 0x850000;
        }
        iVar14 = FUN_0214d4a4(uVar11,uVar10,0xb,0x9d);
        uStack_148 = 0x10000;
        uStack_14c = 0x81000;
        FUN_0214e990(iVar14,&uStack_14c,&uStack_148);
        (**(code **)(**(int **)(iVar14 + 4) + 0xd8))(*(int **)(iVar14 + 4),1);
        FUN_0214e908(iVar6,iVar14);
        if (*(int *)(param_1 + (uint)(iVar13 != 0) * 4 + 0x55c) == 0) {
          iVar6 = *(int *)(*(int *)(iVar14 + 4) + 100);
          piVar5 = *(int **)(iVar6 + 0x2c);
          if (piVar5 == (int *)0x0) {
            piVar5 = (int *)FUN_02036430(*(undefined4 *)(iVar6 + 0x20));
          }
          if (piVar5[6] == 0) {
            (**(code **)(*piVar5 + 0x10))();
          }
          iVar6 = CommonPaletteAnime::CommonPaletteAnime_Create(piVar5[6],0x21,0xe,5,0x80);
          *(int *)(param_1 + (uint)(iVar13 != 0) * 4 + 0x55c) = iVar6;
          if (iVar6 != 0) {
            *(undefined2 *)(iVar6 + 0x18) = 0;
            *(undefined2 *)(iVar6 + 0x16) = 0x79f;
            *(undefined1 *)(iVar6 + 0x1a) = 0x1e;
            *(undefined1 *)(iVar6 + 0x1c) = 1;
            *(undefined1 *)(iVar6 + 0x1b) = 1;
          }
        }
      }
      iVar6 = ALWidgetImp::Create(iVar4,_DAT_021d5154);
      (**(code **)(**(int **)(iVar6 + 4) + 0x24))(*(int **)(iVar6 + 4),param_1);
      uStack_174 = 0x84000;
      FUN_02152730(iVar6,&uStack_174);
      uStack_170 = 0x9c000;
      FUN_0214d52c(iVar6,&uStack_170);
      uStack_168 = 0;
      uStack_16c = 0xaf000;
      FUN_0214e990(iVar6,&uStack_16c,&uStack_168);
      *(int *)(*(int *)(iVar6 + 4) + 0x124) = iVar3;
      (**(code **)(**(int **)(iVar6 + 4) + 0xd8))(*(int **)(iVar6 + 4),1);
      func_0x021b6214(*(undefined4 *)(iVar6 + 4),0);
      if (iVar13 == 0) {
        iVar14 = FUN_0203b3f4();
        uVar11 = *(undefined4 *)(iVar14 + 0x88);
        uVar10 = 0x851000;
      }
      else {
        iVar14 = FUN_0203b404();
        uVar11 = *(undefined4 *)(iVar14 + 0x88);
        uVar10 = 0x850000;
      }
      iVar14 = FUN_0214fb7c(*(undefined4 *)(param_1 + 4));
      iVar14 = FUN_0214d7d4(*(undefined1 *)(param_1 + 2),
                            *(undefined1 *)(*(int *)(*(int *)(iVar14 + 4) + 0x10) + iVar3 + 0x74));
      iVar14 = FUN_0214d4a4(uVar11,uVar10,s_________0215d518[iVar14],0x9c);
      uStack_160 = 0x10000;
      uStack_164 = 0x12000;
      FUN_0214e990(iVar14,&uStack_164,&uStack_160);
      (**(code **)(**(int **)(iVar14 + 4) + 0xd8))(*(int **)(iVar14 + 4),1);
      FUN_0214e908(iVar6,iVar14);
      iVar6 = FUN_0214fb7c(*(undefined4 *)(param_1 + 4));
      iVar6 = FUN_0214d808(*(undefined1 *)(param_1 + 2),
                           *(undefined1 *)(*(int *)(*(int *)(iVar6 + 4) + 0x10) + iVar3 + 0x74));
      if (iVar6 != 0) {
        iVar6 = ALWidgetImp::Create(iVar4,_DAT_021d5154);
        (**(code **)(**(int **)(iVar6 + 4) + 0x24))(*(int **)(iVar6 + 4),param_1);
        uStack_18c = 0x84000;
        FUN_02152730(iVar6,&uStack_18c);
        uStack_188 = 0x9c000;
        FUN_0214d52c(iVar6,&uStack_188);
        uStack_180 = 0x10000;
        uStack_184 = 0x9c000;
        FUN_0214e990(iVar6,&uStack_184,&uStack_180);
        *(int *)(*(int *)(iVar6 + 4) + 0x124) = iVar3;
        (**(code **)(**(int **)(iVar6 + 4) + 0xd8))(*(int **)(iVar6 + 4),1);
        func_0x021b6214(*(undefined4 *)(iVar6 + 4),0);
        if (iVar13 == 0) {
          iVar14 = FUN_0203b3f4();
          uVar11 = *(undefined4 *)(iVar14 + 0x88);
          uVar10 = 0x851000;
        }
        else {
          iVar14 = FUN_0203b404();
          uVar11 = *(undefined4 *)(iVar14 + 0x88);
          uVar10 = 0x850000;
        }
        iVar14 = FUN_0214d4a4(uVar11,uVar10,0x25,0x9c);
        uStack_178 = 0x8000;
        uStack_17c = 0x8000;
        FUN_0214e990(iVar14,&uStack_17c,&uStack_178);
        (**(code **)(**(int **)(iVar14 + 4) + 0xd8))(*(int **)(iVar14 + 4),1);
        FUN_0214e908(iVar6,iVar14);
      }
      if (iVar13 != 0) {
        iVar6 = FUN_0214fb7c(*(undefined4 *)(param_1 + 4));
        iVar14 = *(int *)(*(int *)(iVar6 + 4) + 0x10);
        iVar4 = ALWidgetImp::Create(iVar4,_DAT_021d5154);
        uStack_1a4 = 0x9c000;
        FUN_0214d52c(iVar4,&uStack_1a4);
        uStack_19c = 0;
        uStack_1a0 = 0x2b000;
        FUN_0214e990(iVar4,&uStack_1a0,&uStack_19c);
        *(int *)(*(int *)(iVar4 + 4) + 0x124) = iVar3;
        (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),1);
        func_0x021b6214(*(undefined4 *)(iVar4 + 4),0);
        iVar6 = FUN_0203b404();
        FUN_0214cf8c(*(undefined4 *)(iVar6 + 0x88));
        iVar6 = FUN_0214fb7c(*(undefined4 *)(param_1 + 4));
        func_0x021c5fb4(*(undefined4 *)(*(int *)(*(int *)(*(int *)(iVar6 + 4) + 0x10) + 0xc) + 4));
        iVar6 = FUN_0214d47c();
        uStack_194 = 0x3000;
        uStack_198 = 0;
        FUN_0214e990(iVar6,&uStack_198,&uStack_194);
        piVar5 = *(int **)(iVar6 + 4);
        (**(code **)(*(int *)piVar5[0x19] + 0x70))();
        (**(code **)(*piVar5 + 0xc4))();
        (**(code **)(**(int **)(iVar6 + 4) + 0xd8))(*(int **)(iVar6 + 4),1);
        uStack_190 = 0x9c000;
        FUN_0214d52c(iVar6,&uStack_190);
        uVar11 = FUN_0214d79c(*(undefined4 *)(param_1 + 0x564),*(undefined1 *)(param_1 + 2),
                              *(undefined1 *)(iVar14 + iVar3 + 0x74));
        piVar5 = *(int **)(*(int *)(iVar6 + 4) + 100);
        (**(code **)(*piVar5 + 0x68))(piVar5,uVar11);
        FUN_0214e908(iVar4,iVar6);
        FUN_0214cfc8();
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x14);
    iVar13 = iVar13 + 1;
  } while (iVar13 < 2);
  return;
}

