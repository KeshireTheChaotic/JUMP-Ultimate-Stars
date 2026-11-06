
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0215754c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  undefined4 uVar11;
  int local_17c;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined1 auStack_140 [8];
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [8];
  undefined4 local_110;
  undefined1 auStack_10c [8];
  undefined1 auStack_104 [8];
  undefined4 local_fc;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [8];
  undefined4 local_e8;
  undefined1 auStack_e4 [8];
  undefined1 auStack_dc [8];
  undefined4 local_d4;
  undefined1 auStack_d0 [8];
  undefined4 local_c8;
  undefined1 auStack_c4 [8];
  undefined4 local_bc;
  undefined1 auStack_b8 [8];
  undefined4 local_b0;
  undefined1 auStack_ac [8];
  undefined4 local_a4;
  undefined1 auStack_a0 [8];
  undefined4 local_98;
  undefined4 local_94;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  int local_54 [8];
  undefined4 local_34;
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [12];
  undefined4 uStack_18;
  
  uStack_18 = param_4;
                    /* JUS-TAG source_file_inferred="DeckSelect.cpp" */
  uVar1 = FUN_020101f4(s_deckselect_deckselect_aar_0216c6d8,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  uVar1 = FUN_020101f4(s_deckselect_deck_sel_tex_aar_0216c6f4,0);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  uVar1 = FUN_020101f4(s_deckselect_deck_sel_obj00_aar_0216c710,0);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar1 = FUN_020101f4(s_deckselect_deck_sel_obj01_aar_0216c730,0);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = FUN_020101f4(s_deckselect_password_obj_aar_0216c750,0);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  uVar1 = FUN_020101f4(s_common_button_aar_0216c76c,0);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  iVar2 = FUN_0203b424(1);
  uVar1 = FUN_02158c38(s_deckselect_deck_sel00_atm_0216c780,s_deckselect_deck_sel00_dig_0216c79c,
                       *(undefined4 *)(iVar2 + 0x88));
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  iVar2 = FUN_0203b424(2);
  uVar1 = FUN_02158c38(s_deckselect_deck_sel01_atm_0216c7b8,s_deckselect_deck_sel01_dig_0216c7d4,
                       *(undefined4 *)(iVar2 + 0x88));
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  iVar2 = FUN_0203b414(2);
  uVar1 = FUN_02158c38(s_deckselect_deck_base_atm_0216c7f0,s_deckselect_deck_base_dig_0216c80c,
                       *(undefined4 *)(iVar2 + 0x88));
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  iVar2 = FUN_0203b424(3);
  uVar1 = FUN_02158c38(s_info_bg_atm_0216c828,s_info_bg_dig_0216c834,*(undefined4 *)(iVar2 + 0x88));
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x24) + 4) + 0x50);
  *(undefined4 *)(iVar2 + 0x10) = 0x8000;
  FUN_0214f784(iVar2,1);
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  local_54[1] = 0;
  local_54[2] = 0xfff00000;
  local_54[3] = 0x100000;
  FUN_0214dc68(auStack_30,local_54 + 3,local_54 + 2,local_54 + 1);
  local_54[4] = 0;
  local_54[5] = 0;
  local_54[6] = 0;
  FUN_0214dc68(auStack_24,local_54 + 6,local_54 + 5,local_54 + 4);
  FUN_0214f714(local_54 + 7,uVar1,s_Position_0216c840);
  iVar2 = thunk_FUN_0201a228(0x4c,s_ALControllerImp_h_0216bbe0,s_Create_0216c42c,0x2b9);
  piVar3 = (int *)0x0;
  if (iVar2 != 0) {
    piVar3 = (int *)jus_TagIPCT::jus_TagIPCT
                              (iVar2,0,local_54[7],local_34,0x494c,auStack_24,auStack_30,0x400,2);
  }
  if (piVar3[6] == 0) {
    (**(code **)(*piVar3 + 0x14))();
  }
  FUN_02020f38(uVar1,piVar3[6]);
  iVar2 = func_0x021caa0c(s_font_jskfont_aft_0216c84c,0,0);
  iVar4 = func_0x021caa0c(s_font_DSFont_aft_0216c860,0,0);
  iVar5 = FUN_0203b3f4();
  FUN_0214f7f8(*(undefined4 *)(iVar5 + 0x88));
  iVar5 = 0;
  do {
    iVar6 = FUN_020152d4();
    (**(code **)(**(int **)(iVar6 + 4) + 0xd8))(*(int **)(iVar6 + 4),1);
    local_124 = 0x68000;
    FUN_0214e6c0(iVar6,&local_124);
    iVar7 = FUN_0203b3f4();
    uVar1 = FUN_02158ca4(iVar5 + 0x88001b,0x880000,*(undefined4 *)(iVar7 + 0x88),0x68);
    FUN_0214e688(iVar6,uVar1);
    FUN_0214f7c0(uVar1,iVar6);
    FUN_0214dc98(auStack_120,0,0xfffffff4,7,8);
    func_0x021cb4d4(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar6 + 4),iVar5 + 0xf080,auStack_120
                   );
    FUN_0214dc98(auStack_118,0,0xfffffff4,7,8);
    func_0x021cb4d4(*(undefined4 *)(iVar4 + 4),*(undefined4 *)(iVar6 + 4),iVar5 + 0xf080,auStack_118
                   );
    (**(code **)(**(int **)(iVar6 + 4) + 0xd8))(*(int **)(iVar6 + 4),0);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 10);
  iVar5 = 0;
  do {
    iVar6 = FUN_020152d4();
    (**(code **)(**(int **)(iVar6 + 4) + 0xd8))(*(int **)(iVar6 + 4),1);
    local_110 = 0x68000;
    FUN_0214e6c0(iVar6,&local_110);
    iVar7 = FUN_0203b3f4();
    uVar1 = FUN_02158ca4(iVar5 + 0x880025,0x880000,*(undefined4 *)(iVar7 + 0x88),0x68);
    FUN_0214e688(iVar6,uVar1);
    FUN_0214f7c0(uVar1,iVar6);
    FUN_0214dc98(auStack_10c,0,0xfffffff4,7,8);
    func_0x021cb4d4(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar6 + 4),iVar5 + 0xf090,auStack_10c
                   );
    FUN_0214dc98(auStack_104,0,0xfffffff4,7,8);
    func_0x021cb4d4(*(undefined4 *)(iVar4 + 4),*(undefined4 *)(iVar6 + 4),iVar5 + 0xf090,auStack_104
                   );
    (**(code **)(**(int **)(iVar6 + 4) + 0xd8))(*(int **)(iVar6 + 4),0);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 10);
  iVar5 = FUN_020152d4();
  (**(code **)(**(int **)(iVar5 + 4) + 0xd8))(*(int **)(iVar5 + 4),1);
  local_fc = 0x68000;
  FUN_0214e6c0(iVar5,&local_fc);
  FUN_0214dc98(auStack_f8,0,0,4,8);
  func_0x021cb4d4(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar5 + 4),0xf0a0,auStack_f8);
  FUN_0214dc98(auStack_f0,0,0,4,8);
  func_0x021cb4d4(*(undefined4 *)(iVar4 + 4),*(undefined4 *)(iVar5 + 4),0xf0a0,auStack_f0);
  (**(code **)(**(int **)(iVar5 + 4) + 0xd8))(*(int **)(iVar5 + 4),0);
  iVar5 = FUN_020152d4();
  (**(code **)(**(int **)(iVar5 + 4) + 0xd8))(*(int **)(iVar5 + 4),1);
  local_e8 = 0x68000;
  FUN_0214e6c0(iVar5,&local_e8);
  FUN_0214dc98(auStack_e4,0,0,3,8);
  func_0x021cb4d4(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar5 + 4),0xf0a1,auStack_e4);
  FUN_0214dc98(auStack_dc,0,0,3,8);
  func_0x021cb4d4(*(undefined4 *)(iVar4 + 4),*(undefined4 *)(iVar5 + 4),0xf0a1,auStack_dc);
  (**(code **)(**(int **)(iVar5 + 4) + 0xd8))(*(int **)(iVar5 + 4),0);
  iVar5 = 0;
  do {
    iVar6 = FUN_020152d4();
    (**(code **)(**(int **)(iVar6 + 4) + 0xd8))(*(int **)(iVar6 + 4),1);
    local_d4 = 0x68000;
    FUN_0214e6c0(iVar6,&local_d4);
    iVar7 = FUN_0203b3f4();
    uVar1 = FUN_02158ca4(iVar5 + 0x88002f,0x880000,*(undefined4 *)(iVar7 + 0x88),0x68);
    FUN_0214e688(iVar6,uVar1);
    FUN_0214f7c0(uVar1,iVar6);
    FUN_0214dc98(auStack_d0,0xfffffff5,0xfffffff3,4,8);
    func_0x021cb4d4(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar6 + 4),iVar5 + 0xf180,auStack_d0)
    ;
    (**(code **)(**(int **)(iVar6 + 4) + 0xd8))(*(int **)(iVar6 + 4),0);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x15);
  iVar5 = FUN_020152d4();
  (**(code **)(**(int **)(iVar5 + 4) + 0xd8))(*(int **)(iVar5 + 4),1);
  local_c8 = 0x68000;
  FUN_0214e6c0(iVar5,&local_c8);
  iVar6 = FUN_0203b3f4();
  uVar1 = FUN_02158ca4(0x88002f,0x880000,*(undefined4 *)(iVar6 + 0x88),0x68);
  FUN_0214e688(iVar5,uVar1);
  FUN_0214f7c0(uVar1,iVar5);
  FUN_0214dc98(auStack_c4,0xfffffff5,0xfffffff3,4,8);
  func_0x021cb4d4(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar5 + 4),0xf280,auStack_c4);
  (**(code **)(**(int **)(iVar5 + 4) + 0xd8))(*(int **)(iVar5 + 4),0);
  iVar5 = 0;
  do {
    iVar6 = FUN_020152d4();
    (**(code **)(**(int **)(iVar6 + 4) + 0xd8))(*(int **)(iVar6 + 4),1);
    local_bc = 0x68000;
    FUN_0214e6c0(iVar6,&local_bc);
    iVar7 = FUN_0203b3f4();
    uVar1 = FUN_02158ca4(iVar5 + 0x880044,0x880000,*(undefined4 *)(iVar7 + 0x88),0x68);
    FUN_0214e688(iVar6,uVar1);
    FUN_0214f7c0(uVar1,iVar6);
    FUN_0214dc98(auStack_b8,0xfffffff5,0xfffffff3,4,8);
    func_0x021cb4d4(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar6 + 4),iVar5 + 0xf281,auStack_b8)
    ;
    (**(code **)(**(int **)(iVar6 + 4) + 0xd8))(*(int **)(iVar6 + 4),0);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x14);
  iVar5 = 0;
  do {
    iVar6 = FUN_020152d4();
    (**(code **)(**(int **)(iVar6 + 4) + 0xd8))(*(int **)(iVar6 + 4),1);
    local_b0 = 0x68000;
    FUN_0214e6c0(iVar6,&local_b0);
    iVar7 = FUN_0203b3f4();
    uVar1 = FUN_02158ca4(iVar5 + 0x880059,0x880000,*(undefined4 *)(iVar7 + 0x88),0x68);
    FUN_0214e688(iVar6,uVar1);
    FUN_0214f7c0(uVar1,iVar6);
    FUN_0214dc98(auStack_ac,0xffffffe9,0xfffffff8,0x18,8);
    func_0x021cb4d4(*(undefined4 *)(iVar4 + 4),*(undefined4 *)(iVar6 + 4),iVar5 + 0xf3a0,auStack_ac)
    ;
    (**(code **)(**(int **)(iVar6 + 4) + 0xd8))(*(int **)(iVar6 + 4),0);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 5);
  iVar5 = 0;
  do {
    iVar6 = FUN_020152d4();
    (**(code **)(**(int **)(iVar6 + 4) + 0xd8))(*(int **)(iVar6 + 4),1);
    local_a4 = 0x68000;
    FUN_0214e6c0(iVar6,&local_a4);
    iVar7 = FUN_0203b3f4();
    uVar1 = FUN_02158ca4(iVar5 + 0x88005e,0x880000,*(undefined4 *)(iVar7 + 0x88),0x68);
    FUN_0214e688(iVar6,uVar1);
    FUN_0214f7c0(uVar1,iVar6);
    FUN_0214dc98(auStack_a0,0xfffffff9,0xfffffff8,10,8);
    func_0x021cb4d4(*(undefined4 *)(iVar4 + 4),*(undefined4 *)(iVar6 + 4),iVar5 + 0xf3b0,auStack_a0)
    ;
    (**(code **)(**(int **)(iVar6 + 4) + 0xd8))(*(int **)(iVar6 + 4),0);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 3);
  iVar5 = FUN_020152d4();
  (**(code **)(**(int **)(iVar5 + 4) + 0xd8))(*(int **)(iVar5 + 4),1);
  local_98 = 0x68000;
  FUN_0214e6c0(iVar5,&local_98);
  iVar6 = FUN_0203b3f4();
  uVar1 = FUN_02158ca4(0x880019,0x880000,*(undefined4 *)(iVar6 + 0x88),0x68);
  FUN_0214e688(iVar5,uVar1);
  FUN_0214f7c0(uVar1,iVar5);
  local_94 = 0xfffe8000;
  FUN_0214f764(uVar1,&local_94);
  FUN_0214dc98(auStack_90,0,0xfffffff1,0,8);
  func_0x021cb4d4(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar5 + 4),0xf3c0,auStack_90);
  (**(code **)(**(int **)(iVar5 + 4) + 0xd8))(*(int **)(iVar5 + 4),0);
  iVar5 = FUN_0203b3f4();
  iVar5 = FUN_02158ca4(0x880019,0x880000,*(undefined4 *)(iVar5 + 0x88),0x68);
  FUN_0214dc98(auStack_88,0xfffffffe,0xfffffff1,0x18,8);
  func_0x021cb4d4(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar5 + 4),0xf380,auStack_88);
  FUN_0214dc98(auStack_80,0xfffffffe,0xfffffff1,0x18,8);
  func_0x021cb4d4(*(undefined4 *)(iVar4 + 4),*(undefined4 *)(iVar5 + 4),0xf380,auStack_80);
  (**(code **)(**(int **)(iVar5 + 4) + 0xd8))(*(int **)(iVar5 + 4),0);
  iVar5 = FUN_0203b3f4();
  iVar5 = FUN_02158ca4(0x88001a,0x880000,*(undefined4 *)(iVar5 + 0x88),0x68);
  FUN_0214dc98(auStack_78,0xfffffffe,0xfffffff1,0x18,8);
  func_0x021cb4d4(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar5 + 4),0xf390,auStack_78);
  (**(code **)(**(int **)(iVar5 + 4) + 0xd8))(*(int **)(iVar5 + 4),0);
  FUN_0214f834();
  FUN_02157528(iVar2);
  *(int *)(param_1 + 0x144) = iVar2;
  *(int *)(param_1 + 0x148) = iVar4;
  switch(*(undefined1 *)(param_1 + 0x310)) {
  case 0:
  case 2:
  case 3:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
    FUN_0215853c(*(undefined4 *)(param_1 + 0x20),0);
    iVar2 = FUN_02034db8();
    FUN_0201710c(*(undefined4 *)(iVar2 + 4),s_deckselect_deck_t_sel00_ncl_0216c88c);
    FUN_0215853c(*(undefined4 *)(param_1 + 0x28),0);
    iVar2 = FUN_02034db8();
    FUN_0201710c(*(undefined4 *)(iVar2 + 4),s_commu_com_bg_ncl_0216c8a8);
    local_170 = 0x880002;
    local_174 = 2;
    break;
  case 1:
  case 4:
    FUN_0215853c(*(undefined4 *)(param_1 + 0x20),0);
    iVar2 = FUN_02034db8();
    FUN_0201710c(*(undefined4 *)(iVar2 + 4),s_deckselect_deck_a_sel00_ncl_0216c8bc);
    FUN_0215853c(*(undefined4 *)(param_1 + 0x28),0);
    iVar2 = FUN_02034db8();
    FUN_0201710c(*(undefined4 *)(iVar2 + 4),s_Jarena_arena_bg_ncl_0216c8d8);
    local_170 = 0x880001;
    local_174 = 1;
    break;
  case 5:
  case 7:
    local_170 = 0x880000;
    local_174 = 0;
    break;
  case 6:
    FUN_0215853c(*(undefined4 *)(param_1 + 0x20),0);
    iVar2 = FUN_02034db8();
    FUN_0201710c(*(undefined4 *)(iVar2 + 4),s_deckselect_deck_c_sel00_ncl_0216c870);
    local_170 = 0x880003;
    local_174 = 0;
  }
  uVar1 = DeckSelectPersonal::DeckSelect_PersonalCreate(local_174,0);
  *(undefined4 *)(param_1 + 0x2f4) = uVar1;
  FUN_0215f008(*(undefined4 *)(param_1 + 0x2f4),0);
  iVar2 = thunk_FUN_0201a228(0x78,s_ALNodeImp_h_0216bbd4,s_Create_0216c424,0x4c3);
  if (iVar2 != 0) {
    jus_TagNDGR_0209c0b4::jus_TagNDGR_0209c0b4(iVar2,FUN_02024a30,1);
  }
  uVar1 = FUN_0214d37c();
  *(undefined4 *)(param_1 + 0x154) = uVar1;
  iVar2 = thunk_FUN_0201a228(0x78,s_ALNodeImp_h_0216bbd4,s_Create_0216c424,0x4c3);
  if (iVar2 != 0) {
    jus_TagNDGR_0209c0b4::jus_TagNDGR_0209c0b4(iVar2,FUN_02024a30,1);
  }
  uVar1 = FUN_0214d37c();
  *(undefined4 *)(param_1 + 0x150) = uVar1;
  iVar2 = 0;
  do {
    if (iVar2 < 0xb) {
      iVar4 = FUN_0203b3f4();
      iVar5 = param_1 + iVar2 * 4;
      uVar1 = FUN_02158ca4((&DAT_0216c4f8)[iVar2 * 4],(&DAT_0216c4fc)[iVar2 * 4],
                           *(undefined4 *)(iVar4 + 0x88),0x6d);
      *(undefined4 *)(iVar5 + 0x30) = uVar1;
      FUN_0214f7c0(uVar1,*(undefined4 *)(param_1 + 0x150));
    }
    else {
      iVar4 = FUN_0203b3e4();
      iVar5 = param_1 + iVar2 * 4;
      uVar1 = FUN_02158ca4((&DAT_0216c4f8)[iVar2 * 4],(&DAT_0216c4fc)[iVar2 * 4],
                           *(undefined4 *)(iVar4 + 0x88),0xa0);
      *(undefined4 *)(iVar5 + 0x30) = uVar1;
      FUN_0214e688(*(undefined4 *)(param_1 + 0x154));
      FUN_0214f7c0(*(undefined4 *)(iVar5 + 0x30),*(undefined4 *)(param_1 + 0x154));
    }
    local_58 = (&DAT_0216c4f4)[iVar2 * 4] << 0xc;
    local_54[0] = (&DAT_0216c4f0)[iVar2 * 4] << 0xc;
    FUN_021511c8(*(undefined4 *)(iVar5 + 0x30),local_54,&local_58);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0xc);
  FUN_0214e688(*(undefined4 *)(param_1 + 0x150),*(undefined4 *)(param_1 + 0x30));
  local_5c = 0x64000;
  FUN_0214e6c0(*(undefined4 *)(param_1 + 0x54),&local_5c);
  local_60 = 0x64000;
  FUN_0214e6c0(*(undefined4 *)(param_1 + 0x58),&local_60);
  local_64 = 0x63000;
  FUN_0214e6c0(*(undefined4 *)(param_1 + 0x4c),&local_64);
  local_68 = 0x63000;
  FUN_0214e6c0(*(undefined4 *)(param_1 + 0x50),&local_68);
  local_6c = 0x61000;
  FUN_0214e6c0(*(undefined4 *)(param_1 + 0x34),&local_6c);
  FUN_02023894(*(undefined4 *)(*(int *)(param_1 + 0x30) + 4),local_170,0);
  (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0x30) + 4) + 0x68) + 0x6c))();
  local_70 = 0xa1000;
  FUN_0214e6c0(*(undefined4 *)(param_1 + 0x30),&local_70);
  FUN_0214f7c0(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x154));
  piVar3 = (int *)FUN_0214d37c(_DAT_021d5140);
  uVar1 = FUN_02020f0c();
  *(undefined4 *)(param_1 + 0x14c) = uVar1;
  iVar2 = FUN_0203b3f4();
  (**(code **)(*piVar3 + 0x54))(piVar3,*(undefined4 *)(iVar2 + 0x88));
  iVar2 = FUN_0203b3f4();
  FUN_0214f7f8(*(undefined4 *)(iVar2 + 0x88));
  iVar2 = thunk_FUN_0201a228(0xcc,s_ALWidget_inl_0216bd74,s_Create_0216c43c,0x1de);
  if (iVar2 != 0) {
    func_0x021af26c(iVar2,0x2158eb9,0x2158f7d,0);
  }
  piVar3 = (int *)FUN_02158a78();
  iVar2 = thunk_FUN_0201a228(0xcc,s_ALWidget_inl_0216bd74,s_Create_0216c43c,0x1de);
  if (iVar2 != 0) {
    func_0x021af26c(iVar2,0x2158f19,0x2158f7d,0);
  }
  piVar8 = (int *)FUN_02158a78();
  iVar2 = thunk_FUN_0201a228(0xbc,s_ALWidget_inl_0216bd64,s_Create_0216c41c,0x212);
  piVar9 = (int *)0x0;
  if (iVar2 != 0) {
    piVar9 = (int *)func_0x021af358(iVar2,0x2158fc1,0);
  }
  if (piVar9[6] == 0) {
    (**(code **)(*piVar9 + 0x14))();
  }
  piVar9 = (int *)piVar9[6];
  iVar2 = piVar9[1];
  *(undefined4 *)(iVar2 + 0x94) = 0x10;
  *(undefined4 *)(iVar2 + 0x98) = 0x88;
  *(undefined4 *)(piVar9[1] + 0x9c) = 0xc;
  local_148 = 0xf5000;
  FUN_0214e6c0(piVar9,&local_148);
  iVar2 = (**(code **)(*(int *)piVar3[1] + 0xb0))((int *)piVar3[1],0x31305053);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_0214d37c();
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 4) + 100);
  piVar10 = *(int **)(iVar2 + 0x2c);
  if (piVar10 == (int *)0x0) {
    piVar10 = (int *)FUN_02036430(*(undefined4 *)(iVar2 + 0x20));
  }
  if (piVar10[6] == 0) {
    (**(code **)(*piVar10 + 0x10))();
  }
  uVar1 = CommonPaletteAnime::CommonPaletteAnime_Create(piVar10[6],0x21,5,5,0x80);
  *(undefined4 *)(param_1 + 0x2dc) = uVar1;
  iVar2 = *(int *)(param_1 + 0x2dc);
  *(undefined2 *)(iVar2 + 0x18) = 0;
  *(undefined2 *)(iVar2 + 0x16) = 0x8df;
  *(undefined1 *)(iVar2 + 0x1a) = 0x1e;
  *(undefined1 *)(iVar2 + 0x1c) = 1;
  *(undefined1 *)(iVar2 + 0x1b) = 1;
  func_0x021b3b7c(1,0,piVar8,0);
  func_0x021b3b7c(2,0,piVar3,piVar9);
  (**(code **)(*piVar8 + 8))();
  (**(code **)(*piVar3 + 8))();
  (**(code **)(*piVar9 + 8))();
  _DAT_021d5154 = 0xffffffff;
  uVar1 = ALWidgetBaseImp::Create(0);
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  uVar1 = ALWidgetBaseImp::Create();
  *(undefined4 *)(param_1 + 100) = uVar1;
  FUN_0214e688(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x34));
  FUN_0214e688(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x38));
  FUN_0214e688(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x3c));
  FUN_0214e688(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x40));
  FUN_0214e688(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x44));
  FUN_0214e688(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x48));
  iVar2 = 2;
  _DAT_021d5154 = 1;
  do {
    iVar4 = param_1 + iVar2 * 4;
    uVar1 = ALWidgetBaseImp::Create(*(undefined4 *)(param_1 + 0x60));
    *(undefined4 *)(iVar4 + 0x60) = uVar1;
    local_154 = 0x100000;
    FUN_0214f764(*(undefined4 *)(iVar4 + 0x60),&local_154);
    func_0x021b7744(*(undefined4 *)(*(int *)(iVar4 + 0x60) + 4),1);
    local_150 = 0x20000;
    FUN_0214e6c0(*(undefined4 *)(iVar4 + 0x60),&local_150);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  FUN_0214e688(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x4c));
  FUN_0214e688(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x54));
  FUN_0214f7c0(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x68));
  FUN_0214e688(*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x50));
  FUN_0214e688(*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x58));
  FUN_0214f7c0(*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x6c));
  iVar2 = 0;
  do {
    iVar4 = param_1 + iVar2 * 4;
    uVar1 = FUN_02158dc8(param_1,&DAT_0216c5b0 + iVar2 * 0x28,*(undefined4 *)(param_1 + 100));
    *(undefined4 *)(iVar4 + 0x70) = uVar1;
    iVar4 = *(int *)(iVar4 + 0x70);
    if (iVar2 < 4) {
      func_0x021b6760(*(undefined4 *)(iVar4 + 4),4,(&DAT_0216c5c8)[iVar2 * 10]);
    }
    else {
      func_0x021b65e8(*(undefined4 *)(iVar4 + 4),4,(&DAT_0216c5c8)[iVar2 * 10]);
    }
    iVar4 = param_1 + iVar2 * 4;
    *(undefined1 *)(*(int *)(*(int *)(iVar4 + 0x70) + 4) + 0xab) = 0;
    local_14c = 0x40000;
    FUN_0214e6c0(*(undefined4 *)(iVar4 + 0x70),&local_14c);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 7);
  FUN_0214f7c0(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x80));
  FUN_0214f7c0(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x84));
  FUN_0214f7c0(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x88));
  iVar2 = ALWidgetImp::Create(*(undefined4 *)(param_1 + 0x60),_DAT_021d5154);
  (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),param_1);
  func_0x021b4104(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 4),4);
  FUN_02027834(*(undefined4 *)(iVar2 + 4),8,0x215a4fd);
  *(undefined1 *)(*(int *)(iVar2 + 4) + 0xaa) = 1;
  func_0x021b77a8(*(undefined4 *)(iVar2 + 4),0x20);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  *(int *)(param_1 + 0x8c) = iVar2;
  func_0x021b65d8(*(undefined4 *)(*(int *)(param_1 + 0x8c) + 4));
  _DAT_021d5154 = 2;
  FUN_02157528(*(undefined4 *)(param_1 + 0x144));
  iVar2 = FUN_0203b3f4();
  FUN_0214f7f8(*(undefined4 *)(iVar2 + 0x88));
  uVar1 = _DAT_021d5154;
  uVar11 = *(undefined4 *)(*(int *)(param_1 + 0x60) + 4);
  iVar2 = thunk_FUN_0201a228(400,s_ALWidgetImp_h_0216bd84,s_Create_0216c44c,0x159);
  if (iVar2 != 0) {
    func_0x021ae114(iVar2,uVar11,uVar1,ALWidgetImp::CreateDrawFunc);
  }
  iVar2 = FUN_0214d37c();
  (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),param_1);
  FUN_0214d354(iVar2,0);
  func_0x021b5900(*(undefined4 *)(iVar2 + 4),0xe0,0x78);
  iVar4 = *(int *)(iVar2 + 4);
  *(undefined4 *)(iVar4 + 0x170) = 0xe0;
  *(undefined4 *)(iVar4 + 0x174) = 0x18;
  *(undefined4 *)(*(int *)(iVar2 + 4) + 0x180) = 5;
  local_128 = 0xfa000;
  FUN_0214e6c0(iVar2,&local_128);
  local_130 = 0x30000;
  local_12c = 0xa000;
  FUN_021511c8(iVar2,&local_12c,&local_130);
  *(undefined4 *)(*(int *)(iVar2 + 4) + 0x13c) = 1;
  *(undefined1 *)(*(int *)(iVar2 + 4) + 0x114) = 1;
  *(undefined1 *)(*(int *)(iVar2 + 4) + 0x140) = 1;
  *(undefined1 *)(*(int *)(iVar2 + 4) + 0x141) = 1;
  iVar4 = 0;
  *(undefined4 *)(*(int *)(iVar2 + 4) + 0x144) = 0;
  (**(code **)(**(int **)(iVar2 + 4) + 0x1a8))();
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  func_0x021b6214(*(undefined4 *)(iVar2 + 4),1);
  FUN_02157528(*(undefined4 *)(param_1 + 0x144));
  do {
    func_0x021c5fb4(0);
    iVar5 = FUN_0214d37c();
    local_134 = 0x69000;
    FUN_0214e6c0(iVar5,&local_134);
    (**(code **)(**(int **)(iVar5 + 4) + 0xd8))(*(int **)(iVar5 + 4),0);
    iVar6 = iVar4 * 4;
    iVar4 = iVar4 + 1;
    *(int *)(param_1 + iVar6 + 0x158) = iVar5;
  } while (iVar4 < 5);
  local_17c = 0;
  do {
    func_0x021ae3a4(*(undefined4 *)(iVar2 + 4));
    iVar4 = FUN_0214d37c();
    FUN_0214d354(iVar4,0);
    *(undefined4 *)(*(int *)(iVar4 + 4) + 0xdc) = 0x215a635;
    (**(code **)(**(int **)(iVar4 + 4) + 0x24))(*(int **)(iVar4 + 4),param_1);
    local_138 = 0xfa000;
    FUN_0214e6c0(iVar4,&local_138);
    (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),1);
    iVar5 = ALWidgetImp::Create(iVar4,_DAT_021d5154);
    func_0x021b6214(*(undefined4 *)(iVar5 + 4),0);
    *(undefined4 *)(*(int *)(iVar5 + 4) + 0xdc) = *(undefined4 *)(param_1 + 0x2f8);
    *(undefined4 *)(*(int *)(iVar5 + 4) + 0xe0) = 0x215a659;
    func_0x021b4104(*(undefined4 *)(iVar5 + 4),*(undefined4 *)(iVar5 + 4),4);
    FUN_02027834(*(undefined4 *)(iVar5 + 4),8,*(undefined4 *)(param_1 + 0x2fc));
    (**(code **)(**(int **)(iVar5 + 4) + 0x24))(*(int **)(iVar5 + 4),param_1);
    FUN_0214dc98(auStack_140,0,0,0xe0,0x18);
    uVar1 = FUN_02150a40(0,auStack_140,&DAT_02093c8c);
    FUN_02020e98(iVar5,uVar1);
    *(int *)(*(int *)(iVar5 + 4) + 0x124) = local_17c;
    local_144 = 0xfa000;
    FUN_0214e6c0(iVar5,&local_144);
    (**(code **)(**(int **)(iVar5 + 4) + 0xd8))(*(int **)(iVar5 + 4),1);
    func_0x021b6214(*(undefined4 *)(iVar4 + 4),0);
    local_17c = local_17c + 1;
  } while (local_17c < 0x50);
  FUN_0214f834();
  *(int *)(param_1 + 0xac) = iVar2;
  FUN_0214f7c0(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x60));
  FUN_0214f7c0(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x60));
  FUN_0214f7c0(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x60));
  FUN_0214f7c0(*(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x60));
  FUN_0214f7c0(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x60));
  FUN_0214f7c0(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x150));
  _DAT_021d514c = 0x2158a65;
  func_0x021b7260(1,0x30078);
  func_0x021b7260(2,0x30078);
  func_0x021b7260(8,0x30078);
  func_0x021b7260(4,0x30078);
  func_0x021b7260(0x10000,0x30078);
  FUN_0214f834();
  return;
}

