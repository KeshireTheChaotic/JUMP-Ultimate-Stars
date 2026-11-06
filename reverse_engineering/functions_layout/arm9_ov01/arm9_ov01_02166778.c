
/* WARNING: Removing unreachable block (ram,0x02167222) */
/* JUS-GAME ALNodeImp::Create [source-string] __FILE__="ALNodeImp.h" __FUNCTION__="Create"
   lines=[1219] passed to 7 source-location call(s) */

void ALNodeImp::Create(int param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  undefined4 unaff_r11;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined4 in_cr2;
  uint uStack_174;
  int iStack_170;
  int iStack_16c;
  int iStack_14c;
  undefined2 uStack_144;
  undefined2 uStack_142;
  undefined2 uStack_140;
  undefined2 uStack_13e;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  int iStack_128;
  int iStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  dword adStack_f4 [5];
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  dword adStack_d0 [12];
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  int aiStack_80 [3];
  int aiStack_74 [6];
  int iStack_5c;
  int iStack_58;
  undefined1 auStack_50 [12];
  undefined1 auStack_44 [12];
  undefined1 auStack_38 [12];
  undefined1 auStack_2c [12];
  undefined1 auStack_20 [12];
  
  uVar7 = FUN_020101f4(s_result_result_aar_0216d8a0,0);
  *(undefined4 *)(param_1 + 0xc) = uVar7;
  uVar7 = FUN_020101f4(s_common_button_aar_0216d8b4,0);
  *(undefined4 *)(param_1 + 0x10) = uVar7;
  uVar7 = FUN_020101f4(s_result_result_vs_obj_aar_0216d8c8,0);
  *(undefined4 *)(param_1 + 0x14) = uVar7;
  uVar7 = FUN_020101f4(s_result_result_dir_obj_aar_0216d8e4,0);
  *(undefined4 *)(param_1 + 0x18) = uVar7;
  iVar8 = thunk_FUN_0201a228(0x78,s_ALNodeImp_h_0216bbd4,s_Create_0216d6b4,0x4c3);
  if (iVar8 != 0) {
    jus_TagNDGR_0209c0b4::jus_TagNDGR_0209c0b4(iVar8,0x2024a30,1);
  }
  iVar8 = FUN_0214d37c();
  *(int *)(param_1 + 0x34) = iVar8;
  (**(code **)(**(int **)(iVar8 + 4) + 0xd8))(*(int **)(iVar8 + 4),1);
  iVar8 = thunk_FUN_0201a228(0x78,s_ALNodeImp_h_0216bbd4,s_Create_0216d6b4,0x4c3);
  if (iVar8 != 0) {
    jus_TagNDGR_0209c0b4::jus_TagNDGR_0209c0b4(iVar8,0x2024a30,1);
  }
  uVar7 = FUN_0214d37c();
  FUN_0214e688(*(undefined4 *)(param_1 + 0x34),uVar7);
  adStack_d0[1] = 0;
  adStack_d0[0] = 0xfff00000;
  FUN_021511c8(uVar7,adStack_d0,adStack_d0 + 1);
  adStack_d0[2] = 0xa0000;
  FUN_0214e6c0(uVar7,adStack_d0 + 2);
  *(undefined4 *)(param_1 + 0x58) = uVar7;
  iVar8 = thunk_FUN_0201a228(0x78,s_ALNodeImp_h_0216bbd4,s_Create_0216d6b4,0x4c3);
  if (iVar8 != 0) {
    jus_TagNDGR_0209c0b4::jus_TagNDGR_0209c0b4(iVar8,0x2024a30,1);
  }
  uVar7 = FUN_0214d37c();
  FUN_0214e688(*(undefined4 *)(param_1 + 0x34),uVar7);
  adStack_d0[4] = 0;
  adStack_d0[3] = 0x100000;
  FUN_021511c8(uVar7,adStack_d0 + 3,adStack_d0 + 4);
  *(undefined4 *)(param_1 + 0x5c) = uVar7;
  iVar8 = 0;
  do {
    iVar9 = thunk_FUN_0201a228(0x78,s_ALNodeImp_h_0216bbd4,s_Create_0216d6b4,0x4c3);
    if (iVar9 != 0) {
      jus_TagNDGR_0209c0b4::jus_TagNDGR_0209c0b4(iVar9,0x2024a30,1);
    }
    iVar9 = FUN_0214d37c();
    FUN_0214f864(iVar9,&DAT_0216d780 + (iVar8 + 1) * 0xc);
    (**(code **)(**(int **)(iVar9 + 4) + 0xd8))(*(int **)(iVar9 + 4),1);
    FUN_0214e688(*(undefined4 *)(param_1 + 0x5c),iVar9);
    FUN_0214f7c0(iVar9,*(undefined4 *)(param_1 + 0x5c));
    iVar10 = iVar8 * 4;
    iVar8 = iVar8 + 1;
    *(int *)(param_1 + iVar10 + 0x38) = iVar9;
  } while (iVar8 < 5);
  FUN_0214f7c0(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x58));
  FUN_0214f7c0(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x58));
  iVar8 = thunk_FUN_0201a228(0x78,s_ALNodeImp_h_0216bbd4,s_Create_0216d6b4,0x4c3);
  if (iVar8 != 0) {
    jus_TagNDGR_0209c0b4::jus_TagNDGR_0209c0b4(iVar8,0x2024a30,1);
  }
  iVar8 = FUN_0214d37c();
  FUN_0214e688(*(undefined4 *)(param_1 + 0x34),iVar8);
  adStack_d0[5] = 0xe0000;
  FUN_0214e6c0(iVar8,adStack_d0 + 5);
  (**(code **)(**(int **)(iVar8 + 4) + 0xd8))(*(int **)(iVar8 + 4),0);
  *(int *)(param_1 + 0x4c) = iVar8;
  iVar8 = thunk_FUN_0201a228(0x78,s_ALNodeImp_h_0216bbd4,s_Create_0216d6b4,0x4c3);
  if (iVar8 != 0) {
    jus_TagNDGR_0209c0b4::jus_TagNDGR_0209c0b4(iVar8,0x2024a30,1);
  }
  uVar7 = FUN_0214d37c();
  FUN_0214e688(*(undefined4 *)(param_1 + 0x34),uVar7);
  adStack_d0[7] = 0;
  adStack_d0[6] = 0xfff00000;
  FUN_021511c8(uVar7,adStack_d0 + 6,adStack_d0 + 7);
  *(undefined4 *)(param_1 + 0x50) = uVar7;
  iVar8 = thunk_FUN_0201a228(0x78,s_ALNodeImp_h_0216bbd4,s_Create_0216d6b4,0x4c3);
  if (iVar8 != 0) {
    jus_TagNDGR_0209c0b4::jus_TagNDGR_0209c0b4(iVar8,0x2024a30,1);
  }
  uVar7 = FUN_0214d37c();
  FUN_0214e688(*(undefined4 *)(param_1 + 0x34),uVar7);
  adStack_d0[9] = 0;
  adStack_d0[8] = 0x100000;
  uVar17 = 0;
  FUN_021511c8(uVar7,adStack_d0 + 8,adStack_d0 + 9);
  *(undefined4 *)(param_1 + 0x54) = uVar7;
  uVar16 = 1;
  uVar15 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  FUN_0214dc68(auStack_2c,&uStack_a0,&uStack_9c,&uStack_98);
  uVar11 = FUN_0214f714(adStack_d0 + 10,*(undefined4 *)(param_1 + 0x54),&DAT_0216d88c);
  if ((bool)uVar15) {
    func_0x03b39334(uVar11,&DAT_0216c958);
  }
  if (!(bool)uVar17 || (bool)uVar16) {
    coprocessor_load(0,in_cr2,unaff_r11);
  }
  iVar8 = thunk_FUN_0201a228();
  if (iVar8 != 0) {
    jus_TagIPMV::jus_TagIPMV(iVar8,0,adStack_d0[10],uVar7,uRam02166b38,auStack_2c,8,0,1);
  }
  iVar8 = FUN_0215e28c();
  uVar7 = *(undefined4 *)(iVar8 + 4);
  iVar8 = thunk_FUN_0201a228(0x48,uRam02166b3c,uRam02166b40,uRam02166b44);
  if (iVar8 != 0) {
    jus_TagDLST::jus_TagDLST(iVar8,0,uVar7,8,1);
  }
  uVar7 = FUN_0215e28c();
  FUN_02020f38(*(undefined4 *)(param_1 + 0x54),uVar7);
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  FUN_0214dc68(auStack_20,&uStack_8c,&uStack_88,&uStack_84);
  FUN_0214f714(&uStack_94,*(undefined4 *)(param_1 + 0x50),&DAT_0216d88c);
  iVar8 = thunk_FUN_0201a228(0x4c,&DAT_0216c958,PTR_s_Create_02166b30,uRam02166b34);
  if (iVar8 != 0) {
    jus_TagIPMV::jus_TagIPMV(iVar8,0,uStack_94,uStack_90,uRam02166b38,auStack_20,8,0,1);
  }
  iVar8 = FUN_0215e28c();
  uVar7 = *(undefined4 *)(iVar8 + 4);
  iVar8 = thunk_FUN_0201a228(0x48,uRam02166b3c,uRam02166b40,uRam02166b44);
  if (iVar8 != 0) {
    jus_TagDLST::jus_TagDLST(iVar8,0,uVar7,8,1);
  }
  uVar7 = FUN_0215e28c();
  FUN_02020f38(*(undefined4 *)(param_1 + 0x50),uVar7);
  CommonEffect::CommonEffect_Init(*(undefined4 *)(param_1 + 0x34));
  iVar8 = FUN_0203b414(2);
  uVar7 = func_0x021674bc(PTR_s_result_result_vs_02166b48,*(undefined4 *)(iVar8 + 0x88));
  *(undefined4 *)(param_1 + 0x20) = uVar7;
  iVar8 = FUN_0203b414(3);
  uVar7 = func_0x021674bc(PTR_s_info_bg_02166b4c,*(undefined4 *)(iVar8 + 0x88));
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  iVar8 = FUN_0203b414(1);
  FUN_0214f7f8(*(undefined4 *)(iVar8 + 0x88));
  FUN_02035c90(PTR_s_result_result_dir_dtx_02166b50);
  piVar12 = (int *)FUN_02158558();
  *(int **)(param_1 + 0x1c) = piVar12;
  FUN_0214f834();
  uVar7 = *(undefined4 *)(param_1 + 0x24);
  uStack_f8 = 0x100000;
  adStack_f4[0] = 0xfff00000;
  adStack_f4[1] = 0;
  FUN_0214dc68(auStack_44,&uStack_f8,adStack_f4,adStack_f4 + 1);
  uStack_104 = 0;
  uStack_100 = 0;
  uStack_fc = 0;
  FUN_0214dc68(auStack_50,&uStack_104,&uStack_100,&uStack_fc);
  FUN_0214f714(&uStack_10c,uVar7,&DAT_0216d88c);
  iVar8 = thunk_FUN_0201a228(0x4c,PTR_s_ALControllerImp_h_02166b54,PTR_s_Create_02166b58,
                             uRam02166b5c);
  if (iVar8 != 0) {
    jus_TagIPCT::jus_TagIPCT
              (iVar8,0,uStack_10c,uStack_108,uRam02166ee4,auStack_50,auStack_44,0x400,2);
  }
  uVar11 = FUN_0215e28c();
  FUN_02020f38(uVar7,uVar11);
  adStack_f4[3] = 0;
  adStack_f4[2] = 0x100000;
  FUN_021511c8(*(undefined4 *)(param_1 + 0x20),adStack_f4 + 2,adStack_f4 + 3);
  puVar4 = PTR_s_Commu_com_bg_ncl_02166eec;
  puVar3 = PTR_s_Jarena_arena_bg_ncl_02166ee8;
  if (*(char *)(param_1 + 0x94) == '\0') {
    FUN_0215853c(*(undefined4 *)(param_1 + 0x24),0);
    iVar8 = FUN_02034db8();
    FUN_0201710c(*(undefined4 *)(iVar8 + 4),puVar3);
  }
  else {
    FUN_0215853c(*(undefined4 *)(param_1 + 0x24),0);
    iVar8 = FUN_02034db8();
    FUN_0201710c(*(undefined4 *)(iVar8 + 4),puVar4);
    puVar3 = PTR_s_result_t_result_vs_ncl_02166ef0;
    FUN_0215853c(*(undefined4 *)(param_1 + 0x20),0);
    iVar8 = FUN_02034db8();
    FUN_0201710c(*(undefined4 *)(iVar8 + 4),puVar3);
    puVar3 = PTR_s_result_t_result_dir_ncl_02166ef4;
    iVar8 = FUN_02034db8(*(undefined4 *)(param_1 + 0x1c));
    FUN_0201710c(*(undefined4 *)(iVar8 + 4),puVar3);
  }
  uVar7 = (**(code **)(*piVar12 + 8))();
  uVar7 = CommonPaletteAnime::CommonPaletteAnime_Load
                    (uVar7,PTR_s_result_result_dir_bin_02166ef8,0x80);
  *(undefined4 *)(param_1 + 0x78) = uVar7;
  uStack_dc = 0;
  uStack_d8 = 0;
  uStack_d4 = 0;
  FUN_0214dc68(auStack_38,&uStack_dc,&uStack_d8,&uStack_d4);
  FUN_0214f714(adStack_f4 + 4,*(undefined4 *)(param_1 + 0x20),PTR_DAT_02166efc);
  iVar8 = thunk_FUN_0201a228(0x4c,PTR_DAT_02166f00,PTR_s_Create_02166f04,uRam02166f08);
  if (iVar8 != 0) {
    jus_TagIPMV::jus_TagIPMV(iVar8,0,adStack_f4[4],uStack_e0,uRam02166ee4,auStack_38,8,0,1);
  }
  uVar7 = FUN_0215e28c();
  FUN_02020f38(*(undefined4 *)(param_1 + 0x20),uVar7);
  if ((*(char *)(param_1 + 0x94) == '\0') || (*(char *)(param_1 + 0x94) == '\x04')) {
    iVar8 = FUN_0203b3e4();
    func_0x02167570(*(int *)(iRam02166f14 + 0x10) + iRam02166f10,iRam02166f10 + -8,
                    *(undefined4 *)(iVar8 + 0x88),*(undefined4 *)(param_1 + 0x34),iRam02166f0c,0x61)
    ;
  }
  else {
    iVar8 = FUN_0203b3e4();
    func_0x02167570(*(int *)(iRam02166f14 + 0x10) + iRam02166f18,iRam02166f18 + -0xb,
                    *(undefined4 *)(iVar8 + 0x88),*(undefined4 *)(param_1 + 0x34),iRam02166f0c,0x61)
    ;
    iVar8 = FUN_0203b404();
    func_0x02167570(uRam02166f20,uRam02166f20,*(undefined4 *)(iVar8 + 0x88),
                    *(undefined4 *)(param_1 + 0x5c),uRam02166f1c,0x22);
    iVar8 = 0;
    do {
      FUN_0214f894(aiStack_80,iRam02166f0c + (iVar8 + 0xd) * 0xc);
      iVar9 = 0;
      do {
        iVar10 = FUN_0203b404();
        iVar10 = func_0x02167570(iRam02166f24,iRam02166f24 + -1,*(undefined4 *)(iVar10 + 0x88),
                                 *(undefined4 *)(param_1 + 0x5c),aiStack_80,0x21);
        aiStack_74[iVar9] = iVar10;
        aiStack_80[0] = aiStack_80[0] + 0x8000;
        iVar9 = iVar9 + 1;
      } while (iVar9 < 3);
      uStack_174 = (uint)*(ushort *)(param_1 + iVar8 * 2 + 0x88);
      bVar2 = false;
      iStack_16c = 100;
      FUN_0214f894(aiStack_74 + 3,*(int *)(*(int *)(aiStack_74[0] + 4) + 0x50) + 0xc);
      iStack_170 = 0;
      do {
        iVar9 = FUN_0200d12c(uStack_174,iStack_16c);
        iVar10 = aiStack_74[iStack_170];
        FUN_02023894(*(undefined4 *)(iVar10 + 4),iVar9 + iRam02166f24,0);
        (**(code **)(**(int **)(*(int *)(iVar10 + 4) + 0x68) + 0x6c))();
        FUN_0214f864(iVar10,aiStack_74 + 3);
        if ((bVar2) || (iVar9 != 0)) {
          (**(code **)(**(int **)(iVar10 + 4) + 0xd8))(*(int **)(iVar10 + 4),1);
          bVar2 = true;
          aiStack_74[3] = aiStack_74[3] + 0x8000;
        }
        else {
          (**(code **)(**(int **)(iVar10 + 4) + 0xd8))(*(int **)(iVar10 + 4),0);
          aiStack_74[3] = aiStack_74[3] + 0x4000;
        }
        uStack_174 = uStack_174 - iStack_16c * iVar9;
        iStack_16c = FUN_0200d12c(iStack_16c,10);
        iStack_170 = iStack_170 + 1;
      } while (iStack_170 < 3);
      (**(code **)(**(int **)(aiStack_74[2] + 4) + 0xd8))(*(int **)(aiStack_74[2] + 4),1);
      iVar8 = iVar8 + 1;
    } while (iVar8 < 6);
  }
  for (uVar13 = 0; puVar3 = PTR_DAT_02166f2c, (int)uVar13 < *piRam021672fc; uVar13 = uVar13 + 1) {
    iVar8 = *(int *)(param_1 + uVar13 * 4 + 0x38);
    if (PTR_DAT_02166f28[0xd] == '\0') {
      cVar1 = PTR_DAT_02166f2c[uVar13 + 10];
    }
    else {
      cVar1 = PTR_DAT_02166f2c[uVar13 + 0xe];
    }
    iStack_14c = (int)cVar1;
    iVar9 = FUN_0203b3e4();
    iVar10 = param_1 + uVar13 * 4;
    iVar9 = CharaData::CharaData_Create
                      (3,(int)(char)puVar3[uVar13 + 0x12],*(undefined4 *)(iVar9 + 0x88),0,0);
    *(int *)(iVar10 + 0x60) = iVar9;
    uStack_134 = 0x60000;
    FUN_0214e6c0(*(undefined4 *)(iVar9 + 8),&uStack_134);
    FUN_0216638c(*(undefined4 *)(iVar10 + 0x60),0);
    (**(code **)(**(int **)(*(int *)(*(int *)(*(int *)(iVar10 + 0x60) + 0xc) + 4) + 0x68) + 0x6c))()
    ;
    FUN_0214f894(&iStack_5c,PTR_DAT_02166f30);
    FUN_02164d3c(&iStack_110,iVar8);
    iStack_5c = iStack_5c + iStack_110;
    iStack_58 = iStack_58 + *(int *)(*(int *)(*(int *)(iVar8 + 4) + 0x50) + 0x10);
    uVar7 = *(undefined4 *)(*(int *)(iVar10 + 0x60) + 8);
    FUN_0214f864(uVar7,&iStack_5c);
    uVar14 = uVar13 & 1;
    if (uVar14 == 0) {
      FUN_02164d3c(&iStack_128,uVar7);
      iStack_124 = iStack_128 + -0x100000;
      FUN_0214f764(uVar7,&iStack_124);
      FUN_0214f714(&uStack_130,uVar7,PTR_DAT_021672c8);
      uVar6 = uStack_12c;
      uVar11 = uStack_130;
      iVar9 = thunk_FUN_0201a228(0x4c,PTR_DAT_021672cc,PTR_s_Create_021672d0,uRam021672d4);
      if (iVar9 != 0) {
        jus_TagIPMV::jus_TagIPMV(iVar9,0,uVar11,uVar6,uRam021672d8,&iStack_5c,8,0,1);
      }
      iVar9 = FUN_0215e28c();
      uVar11 = *(undefined4 *)(iVar9 + 4);
      iVar9 = thunk_FUN_0201a228(0x48,uRam021672bc,uRam021672c0,uRam021672c4);
      if (iVar9 != 0) {
        jus_TagDLST::jus_TagDLST(iVar9,0,uVar11,8,1);
      }
      uVar11 = FUN_0215e28c();
      FUN_02020f38(uVar7,uVar11);
    }
    else {
      FUN_02164d3c(&iStack_118,uVar7);
      iStack_114 = iStack_118 + 0x100000;
      FUN_0214f764(uVar7,&iStack_114);
      FUN_0214f714(&uStack_120,uVar7,PTR_DAT_02166efc);
      uVar6 = uStack_11c;
      uVar11 = uStack_120;
      iVar9 = thunk_FUN_0201a228(0x4c,PTR_DAT_02166f00,PTR_s_Create_02166f04,uRam02166f08);
      if (iVar9 != 0) {
        jus_TagIPMV::jus_TagIPMV(iVar9,0,uVar11,uVar6,uRam02166ee4,&iStack_5c,8,0,1);
      }
      iVar9 = FUN_0215e28c();
      uVar11 = *(undefined4 *)(iVar9 + 4);
      iVar9 = thunk_FUN_0201a228(0x48,uRam021672bc,uRam021672c0,uRam021672c4);
      if (iVar9 != 0) {
        jus_TagDLST::jus_TagDLST(iVar9,0,uVar11,8,1);
      }
      uVar11 = FUN_0215e28c();
      FUN_02020f38(uVar7,uVar11);
    }
    if (iStack_14c == 0) {
      if (uVar14 == 0) {
        iVar9 = FUN_0203b414(1);
        func_0x021675e8(*(undefined4 *)(param_1 + 0x1c),0,*(undefined4 *)(iVar9 + 0x88),iVar8,
                        PTR_DAT_021672e0);
      }
      else {
        iVar9 = FUN_0203b414(1);
        func_0x021675e8(*(undefined4 *)(param_1 + 0x1c),uVar14,*(undefined4 *)(iVar9 + 0x88),iVar8,
                        PTR_DAT_021672dc);
      }
      iVar9 = FUN_0203b404();
      func_0x02167570(iRam021672ec,iRam021672ec + -0xb,*(undefined4 *)(iVar9 + 0x88),
                      *(undefined4 *)(param_1 + 0x4c),PTR_DAT_021672e4 + (uVar13 + 7) * 0xc,0xe0);
    }
    else {
      if (uVar14 == 0) {
        iVar9 = FUN_0203b414(1);
        func_0x021675e8(*(undefined4 *)(param_1 + 0x1c),2,*(undefined4 *)(iVar9 + 0x88),iVar8,
                        PTR_DAT_021672e0);
      }
      else {
        iVar9 = FUN_0203b414(1);
        func_0x021675e8(*(undefined4 *)(param_1 + 0x1c),uVar14 + 2,*(undefined4 *)(iVar9 + 0x88),
                        iVar8,PTR_DAT_021672dc);
      }
      iVar9 = FUN_0203b404();
      func_0x02167570(iRam021672e8,iRam021672e8 + -0xc,*(undefined4 *)(iVar9 + 0x88),
                      *(undefined4 *)(param_1 + 0x4c),PTR_DAT_021672e4 + (uVar13 + 7) * 0xc,0xe0);
    }
    iVar9 = FUN_0203b3e4();
    func_0x02167570(iStack_14c + iRam021672f4,iRam021672f4,*(undefined4 *)(iVar9 + 0x88),iVar8,
                    uRam021672f0,0xa0);
    iVar9 = FUN_0203b3e4();
    func_0x02167570(iStack_14c + iRam021672f8,iRam021672f4,*(undefined4 *)(iVar9 + 0x88),iVar8,
                    uRam021672f0,0x62);
    iVar9 = FUN_02087724();
    if ((iVar9 != 2) && (uVar13 == piRam021672fc[2])) {
      iVar9 = FUN_0203b404();
      func_0x02167570(iRam02167304,iRam02167304 + -0xd,*(undefined4 *)(iVar9 + 0x88),iVar8,
                      uRam02167300,0xe1);
      if (iStack_14c == 0) {
        iVar9 = FUN_0203b3e4();
        iVar8 = func_0x02167570(iRam0216730c,iRam0216730c + -0xe,*(undefined4 *)(iVar9 + 0x88),iVar8
                                ,uRam021672f0,99);
      }
      else {
        iVar9 = FUN_0203b3e4();
        iVar8 = func_0x02167570(iRam02167308,iRam02167308 + -0xf,*(undefined4 *)(iVar9 + 0x88),iVar8
                                ,uRam021672f0,99);
      }
      iVar8 = *(int *)(*(int *)(iVar8 + 4) + 100);
      piVar12 = *(int **)(iVar8 + 0x2c);
      if (piVar12 == (int *)0x0) {
        piVar12 = (int *)FUN_02036430(*(undefined4 *)(iVar8 + 0x20));
      }
      if (piVar12[6] == 0) {
        (**(code **)(*piVar12 + 0x10))();
      }
      iVar8 = CommonPaletteAnime::CommonPaletteAnime_Create(piVar12[6],0x61,0xe,5,0x80);
      *(undefined2 *)(iVar8 + 0x18) = 0;
      *(short *)(iVar8 + 0x16) = (short)uRam02167310;
      *(undefined1 *)(iVar8 + 0x1a) = 0x1e;
      *(undefined1 *)(iVar8 + 0x1c) = 1;
      *(undefined1 *)(iVar8 + 0x1b) = 1;
      *(int *)(param_1 + 0x74) = iVar8;
    }
  }
  *puRam02167314 = 0xffffffff;
  iVar8 = thunk_FUN_0201a228(0x14c,uRam02167318,uRam0216731c,uRam02167320);
  if (iVar8 != 0) {
    func_0x021b7950(iVar8,0,0xffffffff,PTR_CreateDrawFunc_02167324);
  }
  iVar8 = FUN_0214d37c();
  func_0x021b5898(*(undefined4 *)(iVar8 + 4));
  (**(code **)(**(int **)(iVar8 + 4) + 0x24))(*(int **)(iVar8 + 4),param_1);
  (**(code **)(**(int **)(iVar8 + 4) + 0xd8))(*(int **)(iVar8 + 4),1);
  *(int *)(param_1 + 0x2c) = iVar8;
  uVar11 = *puRam02167314;
  uVar7 = *(undefined4 *)(iVar8 + 4);
  iVar8 = thunk_FUN_0201a228(0x134,PTR_s_ALWidgetImp_h_02167328,PTR_s_Create_0216732c,0x3e);
  if (iVar8 != 0) {
    func_0x021af0f8(iVar8,uVar7,uVar11,PTR_CreateDrawFunc_02167324);
  }
  iVar8 = FUN_0214d37c();
  iVar9 = FUN_0203b3f4();
  func_0x02167570(iRam02167330,iRam02167330 + -0x14,*(undefined4 *)(iVar9 + 0x88),iVar8,uRam021672f0
                  ,0xa1);
  FUN_02023894(*(undefined4 *)(iVar8 + 4),iRam02167330,0);
  (**(code **)(**(int **)(*(int *)(iVar8 + 4) + 0x68) + 0x6c))();
  func_0x021b3f78(*(undefined4 *)(iVar8 + 4),iRam02167330);
  func_0x021b3fb0(*(undefined4 *)(iVar8 + 4),iRam02167330);
  func_0x021b400c(*(undefined4 *)(iVar8 + 4),uRam02167334);
  func_0x021b3fc4(*(undefined4 *)(iVar8 + 4),uRam02167338);
  (**(code **)(**(int **)(iVar8 + 4) + 0x24))(*(int **)(iVar8 + 4),param_1);
  uStack_144 = 0xffd0;
  uStack_142 = 0xfff0;
  uStack_140 = 0;
  uStack_13e = 0;
  piVar12 = (int *)thunk_FUN_0201a228(0x70,uRam021673f4,uRam021673f8,uRam021673fc);
  if (piVar12 != (int *)0x0) {
    func_0x021b054c(piVar12,0,uRam02167400);
    *piVar12 = iRam02167404;
    FUN_0214dad4(piVar12 + 0x1a,&uStack_144);
    *piVar12 = iRam02167408;
  }
  if (piVar12[6] == 0) {
    (**(code **)(*piVar12 + 0x14))();
  }
  FUN_02020e98(iVar8,piVar12[6]);
  uStack_138 = 0xc0000;
  uStack_13c = 0x100000;
  FUN_021511c8(iVar8,&uStack_13c,&uStack_138);
  func_0x021b6760(*(undefined4 *)(iVar8 + 4),4,uRam0216740c);
  *(undefined1 *)(*(int *)(iVar8 + 4) + 0xaa) = 1;
  func_0x021b77a8(*(undefined4 *)(iVar8 + 4),0x10);
  (**(code **)(**(int **)(iVar8 + 4) + 0x148))(*(int **)(iVar8 + 4),8);
  (**(code **)(**(int **)(iVar8 + 4) + 0xd8))(*(int **)(iVar8 + 4),1);
  puVar5 = puRam02167410;
  *(int *)(param_1 + 0x30) = iVar8;
  *puVar5 = 0;
  return;
}

