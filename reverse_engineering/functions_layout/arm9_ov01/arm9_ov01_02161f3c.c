
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x02162ad4) */
/* WARNING: Removing unreachable block (ram,0x02162af8) */
/* WARNING: Removing unreachable block (ram,0x02162b00) */
/* WARNING: Removing unreachable block (ram,0x02162b04) */
/* WARNING: Removing unreachable block (ram,0x02162b08) */
/* WARNING: Removing unreachable block (ram,0x02162b0c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-GAME RuleSelect::RuleSelect_Add [source-string] __FILE__="RuleSelect.cpp"
   __FUNCTION__="RuleSelect_Add" lines=[697] passed to 2 source-location call(s); header inlines:
   ALControllerImp.h:Create */

int RuleSelect::RuleSelect_Add
              (undefined1 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  char cVar2;
  uint *puVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  uint extraout_r1;
  uint uVar11;
  int extraout_r1_00;
  dword *pdVar12;
  int *piVar13;
  uint *puVar14;
  uint unaff_r8;
  uint unaff_r10;
  uint unaff_r11;
  uint in_r12;
  dword *pdVar15;
  uint uVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  undefined4 in_cr1;
  undefined8 uVar21;
  dword dStack_180;
  undefined1 *puStack_17c;
  undefined1 **ppuStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  int iStack_16c;
  uint uStack_168;
  int iStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  int iStack_158;
  int iStack_154;
  int iStack_150;
  int iStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  dword adStack_130 [3];
  int aiStack_124 [6];
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  dword adStack_f8 [5];
  undefined4 uStack_e4;
  undefined1 auStack_e0 [12];
  undefined1 *puStack_d4;
  uint uStack_d0;
  undefined4 uStack_cc;
  undefined1 auStack_c8 [28];
  uint uStack_ac;
  uint *puStack_a8;
  undefined1 auStack_a0 [44];
  undefined1 auStack_74 [64];
  undefined1 auStack_34 [28];
  undefined4 uStack_18;
  
  pdVar15 = &dStack_180;
  uStack_18 = param_4;
  piVar4 = (int *)thunk_FUN_0201a228(0xe8,s_RuleSelect_cpp_0216d218,s_RuleSelect_Add_0216ce64,0x179)
  ;
  FUN_020517fc(piVar4,0,0xe8);
  *(undefined1 *)((int)piVar4 + 0xe1) = param_1;
  iVar5 = FUN_02026f94();
  piVar4[1] = iVar5;
  (**(code **)(**(int **)(iVar5 + 4) + 0x24))(*(int **)(iVar5 + 4),piVar4);
  FUN_02028384(*(undefined4 *)(piVar4[1] + 4),FUN_02163808 + 1);
  iVar5 = FUN_020310f4();
  *piVar4 = iVar5;
  DAT_02093c04 = DAT_02093c04 + -1;
  *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4) = DAT_020a0e80;
  FUN_020314a0(*(undefined4 *)(iVar5 + 4));
  FUN_02043264(1);
  iVar5 = FUN_0203b414(0);
  aiStack_124[4] = 0x1000;
  piVar6 = *(int **)(*(int *)(iVar5 + 0x88) + 4);
  (**(code **)(*piVar6 + 0x10))(piVar6,aiStack_124 + 4);
  iVar5 = FUN_0203b414(1);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar5 + 0x88) + 4),1);
  iVar5 = FUN_0203b414(1);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar5 + 0x88) + 4),4);
  iVar5 = FUN_0203b414(1);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar5 + 0x88) + 4),0x20,0x20);
  iVar5 = FUN_0203b414(1);
  piVar6 = *(int **)(*(int *)(iVar5 + 0x88) + 4);
  (**(code **)(*piVar6 + 0x90))(piVar6,0x4000);
  iVar5 = FUN_0203b414(1);
  aiStack_124[3] = 0;
  piVar6 = *(int **)(*(int *)(iVar5 + 0x88) + 4);
  (**(code **)(*piVar6 + 0x10))(piVar6,aiStack_124 + 3);
  iVar5 = FUN_0203b414(2);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar5 + 0x88) + 4),1);
  iVar5 = FUN_0203b414(2);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar5 + 0x88) + 4),4);
  iVar5 = FUN_0203b414(2);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar5 + 0x88) + 4),0x20,0x40);
  iVar5 = FUN_0203b414(2);
  piVar6 = *(int **)(*(int *)(iVar5 + 0x88) + 4);
  (**(code **)(*piVar6 + 0x90))(piVar6,0x4000);
  iVar5 = FUN_0203b414(2);
  aiStack_124[2] = 0x2000;
  piVar6 = *(int **)(*(int *)(iVar5 + 0x88) + 4);
  (**(code **)(*piVar6 + 0x10))(piVar6,aiStack_124 + 2);
  iVar5 = FUN_0203b414(3);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar5 + 0x88) + 4),1);
  iVar5 = FUN_0203b414(3);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar5 + 0x88) + 4),4);
  iVar5 = FUN_0203b414(3);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar5 + 0x88) + 4),0x20,0x20);
  iVar5 = FUN_0203b414(3);
  piVar6 = *(int **)(*(int *)(iVar5 + 0x88) + 4);
  (**(code **)(*piVar6 + 0x90))(piVar6,0x8000);
  iVar5 = FUN_0203b414(3);
  aiStack_124[1] = 0x3000;
  piVar6 = *(int **)(*(int *)(iVar5 + 0x88) + 4);
  (**(code **)(*piVar6 + 0x10))(piVar6,aiStack_124 + 1);
  iVar5 = FUN_0203b414(3);
  piVar6 = *(int **)(*(int *)(iVar5 + 0x88) + 4);
  (**(code **)(*piVar6 + 0x94))(piVar6,1);
  iVar5 = FUN_020101f4(s_ruleselect_ruleselect_aar_0216d228,0);
  piVar4[2] = iVar5;
  iVar5 = FUN_020101f4(s_ruleselect_rule_button_aar_0216d244,0);
  piVar4[3] = iVar5;
  iVar5 = FUN_020101f4(s_common_button_aar_0216d260,0);
  piVar4[4] = iVar5;
  iVar5 = FUN_0203b414(2);
  iVar5 = FUN_02162da4(s_ruleselect_rule_sel00_atm_0216d274,s_ruleselect_rule_sel00_dig_0216d290,
                       *(undefined4 *)(iVar5 + 0x88));
  piVar4[5] = iVar5;
  iVar5 = FUN_0203b414(3);
  iVar5 = FUN_02162da4(s_info_bg_atm_0216d2ac,s_info_bg_dig_0216d2b8,*(undefined4 *)(iVar5 + 0x88));
  piVar4[6] = iVar5;
  adStack_130[1] = 0;
  adStack_130[0] = 0xfff00000;
  uStack_134 = 0x100000;
  FUN_0214dc68(&puStack_d4,&uStack_134,adStack_130,adStack_130 + 1);
  uStack_138 = 0;
  uStack_13c = 0;
  uStack_140 = 0;
  FUN_0214dc68(auStack_e0,&uStack_140,&uStack_13c,&uStack_138);
  FUN_0214f714(&uStack_148,piVar4[6],s_Position_0216d2c4);
  iVar5 = thunk_FUN_0201a228(0x4c,s_ALControllerImp_h_0216bbe0,s_Create_0216ce54,0x2b9);
  piVar6 = (int *)0x0;
  if (iVar5 != 0) {
    dStack_180 = 0x494c;
    puStack_17c = auStack_e0;
    ppuStack_178 = &puStack_d4;
    uStack_174 = 0x400;
    uStack_170 = 2;
    piVar6 = (int *)jus_TagIPCT::jus_TagIPCT(iVar5,0,uStack_148,uStack_144);
  }
  if (piVar6[6] == 0) {
    (**(code **)(*piVar6 + 0x14))();
  }
  FUN_02020f38(piVar4[6],piVar6[6]);
  iVar5 = thunk_FUN_0201a228(0xcc,0x216bd74,0x216ce3c,0x1de);
  piVar6 = (int *)0x0;
  if (iVar5 != 0) {
    piVar6 = (int *)func_0x021af26c(iVar5,0x21630a9,0x21630ed,0);
  }
  if (piVar6[6] == 0) {
    (**(code **)(*piVar6 + 0x14))();
  }
  piVar13 = (int *)piVar6[6];
  func_0x021b3b7c(1,0,piVar13,0);
  _DAT_021d5154 = 1;
  iVar5 = FUN_02155a9c(piVar13,0x31305053);
  iVar5 = *(int *)(*(int *)(iVar5 + 4) + 100);
  piVar6 = *(int **)(iVar5 + 0x2c);
  if (piVar6 == (int *)0x0) {
    piVar6 = (int *)FUN_02036430(*(undefined4 *)(iVar5 + 0x20));
  }
  if (piVar6[6] == 0) {
    (**(code **)(*piVar6 + 0x10))();
  }
  dStack_180 = 0x80;
  iVar5 = CommonPaletteAnime::CommonPaletteAnime_Create(piVar6[6],0x32,4,5);
  piVar4[0x35] = iVar5;
  iVar5 = piVar4[0x35];
  *(undefined2 *)(iVar5 + 0x18) = 0;
  *(undefined2 *)(iVar5 + 0x16) = 0x8df;
  *(undefined1 *)(iVar5 + 0x1a) = 0x1e;
  *(undefined1 *)(iVar5 + 0x1c) = 1;
  *(undefined1 *)(iVar5 + 0x1b) = 1;
  (**(code **)(*piVar13 + 8))();
  iVar5 = ALWidgetBaseImp::Create();
  piVar4[0x1f] = iVar5;
  FUN_0214f7c0(piVar4[5],piVar4[0x1f]);
  _DAT_021d5154 = 0xffffffff;
  iVar5 = ALWidgetBaseImp::Create();
  piVar4[0x20] = iVar5;
  func_0x021b7744(*(undefined4 *)(piVar4[0x20] + 4),0);
  iVar5 = FUN_0203b3e4();
  iVar5 = ALWidgetImp::Create(piVar4,0x216cee8,piVar4[0x20],*(undefined4 *)(iVar5 + 0x88));
  piVar4[0x21] = iVar5;
  *(undefined4 *)(*(int *)(piVar4[0x21] + 4) + 0x54) = 0;
  *(undefined4 *)(*(int *)(piVar4[0x21] + 4) + 0xdc) = 0;
  func_0x021b3fb0(*(undefined4 *)(piVar4[0x21] + 4),uRam0216cef0);
  *(undefined1 *)(*(int *)(piVar4[0x21] + 4) + 0xab) = 0;
  func_0x021b6760(*(undefined4 *)(piVar4[0x21] + 4),4,0x21639f5);
  *(undefined1 *)(*(int *)(piVar4[0x21] + 4) + 0xb1) = 1;
  iVar5 = FUN_0203b404();
  iVar5 = ALWidgetImp::Create(piVar4,0x216cf18,piVar4[0x20],*(undefined4 *)(iVar5 + 0x88));
  piVar4[0x22] = iVar5;
  *(undefined4 *)(*(int *)(piVar4[0x22] + 4) + 0x54) = 1;
  *(undefined4 *)(*(int *)(piVar4[0x22] + 4) + 0xdc) = 0;
  func_0x021b6760(*(undefined4 *)(piVar4[0x22] + 4),4,uRam0216cf40);
  iVar5 = 2;
  *(undefined1 *)(*(int *)(piVar4[0x22] + 4) + 0xb1) = 1;
  _DAT_021d5154 = 1;
  do {
    iVar7 = FUN_0203b404();
    iVar7 = ALWidgetImp::Create(piVar4,iVar5 * 0x30 + 0x216cee8,piVar4[0x1f],
                                *(undefined4 *)(iVar7 + 0x88));
    piVar4[iVar5 + 0x21] = iVar7;
    *(int *)(*(int *)(piVar4[iVar5 + 0x21] + 4) + 0x124) = iVar5;
    func_0x021b6760(*(undefined4 *)(piVar4[iVar5 + 0x21] + 4),4,0x21639e9);
    func_0x021b65e8(*(undefined4 *)(piVar4[iVar5 + 0x21] + 4),4,
                    *(undefined4 *)(iVar5 * 0x30 + 0x216cf10));
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x11);
  iVar5 = 1;
  do {
    func_0x021b400c(*(undefined4 *)(piVar4[iVar5 + 0x21] + 4),0x85003e);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0xe);
  *(undefined1 *)(*(int *)(piVar4[0x21] + 4) + 0xaa) = 1;
  func_0x021b77a8(*(undefined4 *)(piVar4[0x21] + 4),0x20);
  func_0x021b3fc4(*(undefined4 *)(piVar4[0x21] + 4),0x510001);
  *(undefined1 *)(*(int *)(piVar4[0x22] + 4) + 0xaa) = 1;
  func_0x021b77a8(*(undefined4 *)(piVar4[0x22] + 4),0x8000);
  func_0x021b3fc4(*(undefined4 *)(piVar4[0x22] + 4),0x850004);
  func_0x021b3fb0(*(undefined4 *)(piVar4[0x22] + 4),0x850003);
  iVar5 = 0xe;
  do {
    func_0x021b65e8(*(undefined4 *)(piVar4[iVar5 + 0x21] + 4),4,&LAB_021641b8_1);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x11);
  iVar5 = 2;
  *(code **)(*(int *)(piVar4[0x23] + 4) + 0xdc) = FUN_021639b8 + 1;
  do {
    iStack_16c = iVar5 * 0x30 + 0x216cee8;
    iStack_150 = iVar5 * 4;
    piVar6 = *(int **)(piVar4[iVar5 + 0x21] + 4);
    if (piVar4[*(byte *)(iVar5 * 0x30 + 0x216cf04) + 0x21] == 0) {
      (**(code **)(*piVar6 + 0x164))(piVar6,8);
    }
    else {
      (**(code **)(*piVar6 + 0x160))
                (piVar6,8,*(undefined4 *)(piVar4[*(byte *)(iVar5 * 0x30 + 0x216cf04) + 0x21] + 4));
    }
    FUN_0215b838(piVar4[iVar5 + 0x21],piVar4[*(byte *)(iVar5 * 0x30 + 0x216cf05) + 0x21]);
    piVar6 = *(int **)(piVar4[iVar5 + 0x21] + 4);
    if (piVar4[*(byte *)(iVar5 * 0x30 + 0x216cf06) + 0x21] == 0) {
      (**(code **)(*piVar6 + 0x164))(piVar6,4);
    }
    else {
      (**(code **)(*piVar6 + 0x160))
                (piVar6,4,*(undefined4 *)(piVar4[*(byte *)(iVar5 * 0x30 + 0x216cf06) + 0x21] + 4));
    }
    FUN_0215b7fc(*(undefined4 *)((int)piVar4 + iStack_150 + 0x84),
                 piVar4[*(byte *)(iStack_16c + 0x1f) + 0x21]);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x11);
  iVar5 = piVar4[0x1f];
  FUN_020239a0(*(undefined4 *)(iVar5 + 4));
  piVar6 = *(int **)(*(int *)(iVar5 + 4) + 0x68);
  (**(code **)(*piVar6 + 0xac))(piVar6,0);
  FUN_0214f714(aiStack_124 + 5,iVar5,s_Position_0216d2c4);
  FUN_0214f714(&uStack_108,piVar4[0x21],&DAT_0216d2d0);
  FUN_0214f714(&uStack_100,piVar4[0x22],&DAT_0216d2d0);
  adStack_f8[0] = 0xfff00000;
  FUN_0215b3f4(iVar5,adStack_f8);
  (**(code **)(**(int **)(piVar4[0x21] + 4) + 0xd8))(*(int **)(piVar4[0x21] + 4),0);
  (**(code **)(**(int **)(piVar4[0x22] + 4) + 0xd8))(*(int **)(piVar4[0x22] + 4),0);
  FUN_02023c60(*(undefined4 *)(iVar5 + 4),aiStack_124[5],0,uStack_10c);
  FUN_02023c60(*(undefined4 *)(iVar5 + 4),uStack_108,0,uStack_104);
  FUN_02023c60(*(undefined4 *)(iVar5 + 4),uStack_100,0,uStack_fc);
  adStack_f8[1] = 0;
  FUN_0215b3f4(iVar5,adStack_f8 + 1);
  (**(code **)(**(int **)(piVar4[0x21] + 4) + 0xd8))(*(int **)(piVar4[0x21] + 4),1);
  (**(code **)(**(int **)(piVar4[0x22] + 4) + 0xd8))(*(int **)(piVar4[0x22] + 4),1);
  FUN_02023c60(*(undefined4 *)(iVar5 + 4),aiStack_124[5],8,uStack_10c);
  FUN_02023c60(*(undefined4 *)(iVar5 + 4),uStack_108,8,uStack_104);
  FUN_02023c60(*(undefined4 *)(iVar5 + 4),uStack_100,8,uStack_fc);
  FUN_02023c80(*(undefined4 *)(iVar5 + 4),aiStack_124[5],0x494c,uStack_10c);
  FUN_02023c70(*(undefined4 *)(iVar5 + 4),1);
  adStack_f8[2] = 0xfff00000;
  FUN_0215b3f4(iVar5,adStack_f8 + 2);
  func_0x021b4034(*(undefined4 *)(iVar5 + 4),1);
  iVar5 = 0;
  do {
    iVar7 = iVar5 * 0x14;
    iStack_14c = iVar7;
    iVar8 = FUN_0203b404();
    iVar8 = FUN_02162e10(*(undefined4 *)(iVar7 + 0x2169ef0),*(undefined4 *)(iVar7 + 0x2169ef4),
                         *(undefined4 *)(iVar8 + 0x88),*(undefined4 *)(iVar7 + 0x2169ef8));
    piVar4[iVar5 + 7] = iVar8;
    aiStack_124[0] = *(int *)(iVar7 + 0x2169eec) << 0xc;
    adStack_130[2] = *(int *)(iStack_14c + 0x2169ee8) << 0xc;
    FUN_021511c8(piVar4[iVar5 + 7],adStack_130 + 2,aiStack_124);
    FUN_0214f7c0(piVar4[iVar5 + 7],piVar4[0x1f]);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x14);
  iVar5 = 0;
  do {
    FUN_0214f7c0(piVar4[iVar5 + 0x15],piVar4[iVar5 + 0x29]);
    FUN_0214f7c0(piVar4[iVar5 + 0x18],piVar4[iVar5 + 0x2c]);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 3);
  iVar5 = func_0x02162d88(*(undefined1 *)((int)piVar4 + 0xe1));
  if (iVar5 == 0) {
    FUN_0215853c(piVar4[6],0);
    iVar5 = FUN_02034db8();
    FUN_0201710c(*(undefined4 *)(iVar5 + 4),s_Jarena_arena_bg_ncl_0216d308);
  }
  else {
    FUN_0215853c(piVar4[5],0);
    iVar5 = FUN_02034db8();
    FUN_0201710c(*(undefined4 *)(iVar5 + 4),s_ruleselect_rule_t_sel00_ncl_0216d2d8);
    FUN_0215853c(piVar4[6],0);
    iVar5 = FUN_02034db8();
    FUN_0201710c(*(undefined4 *)(iVar5 + 4),s_commu_com_bg_ncl_0216d2f4);
    FUN_02023894(*(undefined4 *)(piVar4[7] + 4),0x850001,0);
    (**(code **)(**(int **)(*(int *)(piVar4[7] + 4) + 0x68) + 0x6c))();
  }
  iVar5 = FUN_0203b404();
  FUN_0214f7f8(*(undefined4 *)(iVar5 + 0x88));
  iStack_154 = func_0x021caa0c(s_font_DSFont_aft_0216d31c,0,0);
  iStack_158 = func_0x021caa0c(s_font_jskfont_aft_0216d32c,0,0);
  uStack_15c = ComicDeck::ComicDeckCreate(0,1);
  uStack_160 = FUN_02076908();
  iVar5 = 0;
  do {
    iVar7 = FUN_02086bd4();
    if ((iVar7 == 0) || (DAT_020afe94 <= iVar5)) {
      if ((&DAT_020afeb0)[iVar5] == '\0') {
        uVar10 = FUN_02071f10((&DAT_020afeb4)[iVar5]);
        FUN_020769cc(uStack_160,uVar10);
        iVar7 = FUN_0207879c(uStack_160);
        if (iVar7 != 0) {
          (&DAT_020afeb0)[iVar5] = 1;
          (&DAT_020afeb4)[iVar5] = 0;
        }
      }
      adStack_f8[3] = 0;
      adStack_f8[4] = (iVar5 * 0x18 + 0x51) * 0x1000;
      uStack_e4 = 0x20000;
      pdVar12 = adStack_f8 + 3;
      FUN_0214dc68(&uStack_ac,&uStack_e4,adStack_f8 + 4);
      puVar3 = puStack_a8;
      puVar14 = &uStack_ac;
      uStack_168 = (uint)(byte)(&DAT_020afeb4)[iVar5];
      cVar2 = (&DAT_020afeb0)[iVar5];
      switch(cVar2) {
      case '\0':
        iVar7 = FUN_02071f10(uStack_168);
        puVar14 = puStack_a8;
        iStack_164 = func_0x02162e80(piVar4,iStack_158,
                                     (int)(uStack_ac + ((uint)((int)uStack_ac >> 0xb) >> 0x14)) >>
                                     0xc,(int)((int)puStack_a8 +
                                              ((uint)((int)puStack_a8 >> 0xb) >> 0x14)) >> 0xc);
        piVar6 = *(int **)(*(int *)(iStack_164 + 4) + 100);
        (**(code **)(*piVar6 + 0x68))(piVar6,iVar7 + 0x40);
        break;
      case '\x01':
      case '\a':
      case '\b':
        iStack_164 = func_0x02162e80(piVar4,iStack_158,
                                     (int)(uStack_ac + ((uint)((int)uStack_ac >> 0xb) >> 0x14)) >>
                                     0xc,(int)((int)puStack_a8 +
                                              ((uint)((int)puStack_a8 >> 0xb) >> 0x14)) >> 0xc);
        FUN_02070a28(auStack_74,(int)cVar2,uStack_168);
        piVar6 = *(int **)(*(int *)(iStack_164 + 4) + 100);
        (**(code **)(*piVar6 + 0x68))(piVar6,auStack_34);
        puVar14 = puVar3;
        break;
      case '\x02':
        uVar9 = FUN_02072050(uStack_168);
        FUN_020517fc(auStack_c8,0,0x1c);
        bVar20 = false;
        bVar18 = false;
        uVar11 = 0x14;
        bVar19 = false;
        bVar17 = false;
        FUN_02051890(uVar9,auStack_c8);
        if (bVar20) {
          uStack_cc = 0x2162944;
          puStack_d4 = auStack_c8;
          uStack_d0 = unaff_r11;
        }
        if (bVar17) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (bVar20 && !bVar19) {
          puVar14 = (uint *)(uVar11 & (uint)pdVar12 >> (unaff_r8 & 0xff));
          pdVar12 = (dword *)(uVar11 + (unaff_r10 << (unaff_r10 & 0xff)));
        }
        if (bVar19) {
          coprocessor_load(2,in_cr1,uVar11 - 0x368);
        }
        uVar16 = extraout_r1;
        if (bVar18) {
          in_r12 = *puVar14;
          unaff_r11 = puVar14[-1];
          uVar9 = puVar14[-2];
          piVar4 = (int *)puVar14[-3];
          pdVar12 = (dword *)puVar14[-4];
          uVar16 = puVar14[-5];
          puVar14 = puVar14 + -6;
        }
        if (bVar20 && !bVar19) {
          uVar11 = uVar16 - ((int)auStack_c8 * 4 + (uint)!bVar20);
        }
        if (bVar19) {
          coprocessor_load(2,in_cr1,unaff_r11 - 0x3cc);
        }
        if (!bVar20 || bVar19) {
          *(uint *)(unaff_r11 - 4) = in_r12;
          *(uint *)(unaff_r11 - 8) = unaff_r11;
          *(uint *)(unaff_r11 - 0xc) = uVar9;
          *(uint **)(unaff_r11 - 0x10) = puVar14;
          *(int *)(unaff_r11 - 0x14) = iVar5;
          *(int **)(unaff_r11 - 0x18) = piVar4;
          *(uint *)(unaff_r11 - 0x1c) = uVar16;
          *(undefined1 **)(unaff_r11 - 0x20) = auStack_c8;
        }
        iStack_164 = func_0x02162e80(piVar4,uVar16,(int)uVar11 >> 0xc,(int)pdVar12 >> 0xc);
        piVar6 = *(int **)(*(int *)(iStack_164 + 4) + 100);
        (**(code **)(*piVar6 + 0x6c))(piVar6,auStack_c8,0xffffffff);
      }
      piVar4[iVar5 + 0x1b] = iStack_164;
    }
    else {
      FUN_020517fc(auStack_a0,0,0x16);
      puVar14 = (uint *)(piVar4 + iVar5);
      uVar9 = func_0x02162e80(piVar4,iStack_154,0x20,iVar5 * 0x18 + 0x51);
      puVar14[0x1b] = uVar9;
      uVar10 = FUN_02070cdc(iVar5);
      FUN_02051890(uVar10,auStack_a0,0x14);
      piVar6 = *(int **)(*(int *)(puVar14[0x1b] + 4) + 100);
      (**(code **)(*piVar6 + 0x6c))(piVar6,auStack_a0,0xffffffff);
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 4);
  (**(code **)(**(int **)(iStack_154 + 4) + 0xc))();
  (**(code **)(**(int **)(iStack_158 + 4) + 0xc))();
  FUN_0207698c(uStack_160);
  FUN_020763e0(uStack_15c);
  FUN_0214f834();
  cVar2 = *(char *)((int)piVar4 + 0xe1);
  if ((cVar2 == '\0') || (cVar2 == '\x01')) {
    iVar7 = FUN_0203b3e4();
    iVar7 = SelectStandbyBar::SelectStandbyBar_Create(*(undefined4 *)(iVar7 + 0x88),0x20,0);
    piVar4[0x36] = iVar7;
    iVar7 = piVar4[0x36];
    *(undefined4 *)(iVar7 + 0x4c) = 0x2164321;
    *(int **)(iVar7 + 0x50) = piVar4;
  }
  else if ((byte)(cVar2 - 6U) < 3) {
    iVar7 = FUN_0203b3e4();
    iVar7 = SelectStandbyBar::SelectStandbyBar_Create(*(undefined4 *)(iVar7 + 0x88),0x20,1);
    piVar4[0x36] = iVar7;
    iVar7 = piVar4[0x36];
    *(undefined4 *)(iVar7 + 0x4c) = 0x2164321;
    *(int **)(iVar7 + 0x50) = piVar4;
    iVar7 = piVar4[0x36];
    *(undefined4 *)(iVar7 + 0x38) = 0x21642a8;
    *(int **)(iVar7 + 0x50) = piVar4;
  }
  iVar7 = func_0x021ba49c(0,1,1);
  piVar4[0x34] = iVar7;
  iVar7 = func_0x02162d88(*(undefined1 *)((int)piVar4 + 0xe1));
  if (iVar7 == 0) {
    iVar5 = func_0x021bcf1c(6,1,1,0xffffffff);
    piVar4[0x33] = iVar5;
  }
  else {
    iVar7 = 1;
    uVar10 = 0xffffffff;
    bVar19 = true;
    bVar20 = false;
    bVar17 = false;
    uVar16 = 0x2162a81;
    uVar21 = func_0x021bcf1c(0x11,0);
    uVar11 = (uint)((ulonglong)uVar21 >> 0x20);
    uVar9 = (uint)uVar21;
    if (!bVar17) {
      uVar11 = in_r12 & ~(uVar11 >> 0x18);
    }
    if (bVar19) {
      uVar16 = 0x9040481e;
      pdVar15 = (dword *)0x903f943e;
      uVar10 = FUN_02162a80;
    }
    if (!bVar17 || bVar20) {
      uVar1 = (uint)piVar4 & 0xff;
      bVar17 = uVar1 == 0 && bVar17 || uVar1 != 0 && (bool)((byte)(uVar16 >> uVar1 - 1) & 1);
      bVar20 = uVar16 >> uVar1 == 0x2162a90;
    }
    piVar6 = piVar4;
    if (!bVar17 || bVar20) {
      piVar6 = (int *)(uVar11 - (uVar16 << (unaff_r8 & 0xff)));
    }
    if (!bVar17) {
      bVar17 = uVar9 >> 0x18 < uVar9;
      bVar20 = uVar9 == (uVar9 >> 0x18) + 1;
    }
    if (!bVar17 || bVar20) {
      puVar14 = (uint *)(iVar7 + uVar9 * -0x10000);
    }
    iVar8 = CommWrapDisconnect::CommWrapDisconnect_Create((undefined1 *)((int)pdVar15 + 0xf8));
    piVar6[0x37] = iVar8;
    *(int *)(piVar6[0x36] + 0x54) = piVar6[0x37];
    piVar4 = piVar6;
    if ((byte)(*(char *)((int)piVar6 + 0xe1) - 6U) < 3) {
      func_0x021b77dc(*(undefined4 *)(piVar6[0x21] + 4));
      piVar4 = (int *)(unaff_r11 & (int)pdVar15 << 0x12);
      bVar17 = (piVar4 == (int *)0x0 &&
               (undefined1 *)((uint)puVar14 & 0x8000000d) == (undefined1 *)0x0) &&
               (undefined1 *)((uint)puVar14 & 0x4000000f) == (undefined1 *)0x0;
      if (bVar17) {
        piVar6 = (int *)(iVar5 + extraout_r1_00);
      }
                    /* WARNING: Jumptable at 0x02162af4 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
      if (((bVar17 && (undefined1 *)((uint)puVar14 & 0x20000000) == (undefined1 *)0x0) &&
          (undefined1 *)((uint)puVar14 & 0x70000000) == (undefined1 *)0x0) &&
          (undefined1 *)((uint)puVar14 & 0xb0000000) == (undefined1 *)0x0) {
        iVar5 = (*(code *)(unaff_r10 & 0x900))();
        return iVar5;
      }
      *(undefined4 *)(iVar7 + extraout_r1_00) = uVar10;
      iVar5 = FUN_02155a9c(piVar6,extraout_r1_00 + 0x30);
      (**(code **)(**(int **)(iVar5 + 4) + 0xd8))(*(int **)(iVar5 + 4),0);
      (**(code **)(**(int **)(piVar4[0x21] + 4) + 0xd8))(*(int **)(piVar4[0x21] + 4),0);
      func_0x021b65d8(*(undefined4 *)(piVar4[0x21] + 4));
      (**(code **)(**(int **)(piVar4[0x21] + 4) + 0x148))(*(int **)(piVar4[0x21] + 4),8);
    }
  }
  iVar5 = FUN_02086bd4();
  if ((iVar5 == 0) && (DAT_020afec3 < '\x01')) {
    DAT_020afec3 = '\x01';
    DAT_020afe90 = DAT_020afe90 + 1;
  }
  cVar2 = *(char *)((int)piVar4 + 0xe1);
  if ((cVar2 == '\x04') || (cVar2 == '\x05')) {
    (**(code **)(**(int **)(piVar4[9] + 4) + 0xd8))(*(int **)(piVar4[9] + 4),1);
    (**(code **)(**(int **)(piVar4[10] + 4) + 0xd8))(*(int **)(piVar4[10] + 4),1);
    (**(code **)(**(int **)(piVar4[0xb] + 4) + 0xd8))(*(int **)(piVar4[0xb] + 4),0);
    (**(code **)(**(int **)(piVar4[0x12] + 4) + 0xd8))(*(int **)(piVar4[0x12] + 4),0);
    (**(code **)(**(int **)(piVar4[0x13] + 4) + 0xd8))(*(int **)(piVar4[0x13] + 4),0);
    FUN_0215b838(piVar4[0x26],piVar4[0x25]);
    FUN_0215b838(piVar4[0x27],piVar4[0x25]);
  }
  else {
    if ((byte)(cVar2 - 6U) < 3) {
      (**(code **)(**(int **)(piVar4[0x14] + 4) + 0xd8))(*(int **)(piVar4[0x14] + 4),0);
      (**(code **)(**(int **)(piVar4[0xb] + 4) + 0xd8))(*(int **)(piVar4[0xb] + 4),1);
      FUN_0215b7fc(piVar4[0x2b],piVar4[0x24]);
    }
    else {
      (**(code **)(**(int **)(piVar4[0xb] + 4) + 0xd8))(*(int **)(piVar4[0xb] + 4),0);
    }
    (**(code **)(**(int **)(piVar4[9] + 4) + 0xd8))(*(int **)(piVar4[9] + 4),0);
    (**(code **)(**(int **)(piVar4[10] + 4) + 0xd8))(*(int **)(piVar4[10] + 4),0);
    (**(code **)(**(int **)(piVar4[0x12] + 4) + 0xd8))(*(int **)(piVar4[0x12] + 4),1);
    (**(code **)(**(int **)(piVar4[0x13] + 4) + 0xd8))(*(int **)(piVar4[0x13] + 4),1);
  }
  iVar5 = 0;
  do {
    if ((&DAT_020afec4)[iVar5] == '\0') {
      (&DAT_020afec4)[iVar5] = 3;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 4);
  iVar5 = FUN_02086bd4();
  if ((iVar5 == 0) || (DAT_020afe98 != 0)) {
    *(undefined1 *)(piVar4 + 0x38) = 0;
  }
  else {
    *(undefined1 *)(piVar4 + 0x38) = 1;
  }
  func_0x02163168(piVar4);
  bVar17 = false;
  uVar9 = (uint)(byte)(*(char *)((int)piVar4 + 0xe1) - 1);
  if ((uVar9 < 8) && ((1 << uVar9 & 0x95U) != 0)) {
    bVar17 = true;
  }
  if (bVar17) {
    func_0x021b6214(*(undefined4 *)(piVar4[DAT_020afedd + 0x2e] + 4));
    func_0x021bd730(piVar4[0x33],0x12,0);
  }
  else if (*(char *)((int)piVar4 + 0xe1) == '\x04') {
    func_0x021b6214(*(undefined4 *)(piVar4[0x26] + 4),1);
    func_0x021bd730(piVar4[0x33],0xe,0);
  }
  else {
    func_0x021b6214(*(undefined4 *)(piVar4[0x23] + 4),1);
    func_0x021bd730(piVar4[0x33],DAT_020afea0 + 10,0);
  }
  FUN_02073ebc(2,1);
  FUN_020734e0(0x2f);
  FUN_0207361c(0x2f,0);
  (**(code **)(**(int **)(piVar4[0x1f] + 4) + 0x148))(*(int **)(piVar4[0x1f] + 4),0x10);
  func_0x021b65bc();
  return *piVar4;
}

