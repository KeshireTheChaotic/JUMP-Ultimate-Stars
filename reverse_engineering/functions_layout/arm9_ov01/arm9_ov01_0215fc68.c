
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0215fc68(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  undefined *puVar11;
  undefined *puVar12;
  uint uVar13;
  bool bVar14;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined1 auStack_1ac [8];
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined1 auStack_19c [8];
  undefined4 local_194;
  undefined4 local_190;
  undefined1 auStack_18c [8];
  undefined4 local_184;
  undefined4 local_180;
  undefined1 auStack_17c [8];
  undefined4 local_174;
  undefined4 local_170;
  undefined1 auStack_16c [8];
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined1 auStack_13c [12];
  undefined1 auStack_130 [12];
  undefined1 local_124 [256];
  
  iVar10 = 0;
  uVar7 = 0x800000;
  do {
    uVar2 = FUN_020101f4((&DAT_0216cc08)[iVar10],0);
    iVar3 = iVar10 * 4;
    iVar10 = iVar10 + 1;
    *(undefined4 *)(param_1 + iVar3 + 0x10) = uVar2;
  } while (iVar10 < 4);
  iVar10 = 0;
  do {
    iVar3 = FUN_0203b424(iVar10 + 1);
    puVar12 = (&PTR_s_stageselect_st_sel01_dig_0216cbfc)[iVar10];
    puVar11 = (&PTR_s_stageselect_st_sel01_atm_0216cbf0)[iVar10];
    FUN_0214f7f8(*(undefined4 *)(iVar3 + 0x88));
    FUN_02035c90(puVar12);
    iVar3 = FUN_02158558();
    FUN_02036ab8();
    iVar4 = FUN_0214d37c();
    (**(code **)(**(int **)(iVar4 + 4) + 0x130))(*(int **)(iVar4 + 4),puVar11);
    if (iVar3 == 0) {
      piVar5 = *(int **)(*(int *)(iVar4 + 4) + 100);
      (**(code **)(*piVar5 + 0x50))(piVar5,0,0);
    }
    else {
      piVar5 = *(int **)(*(int *)(iVar4 + 4) + 100);
      (**(code **)(*piVar5 + 0x50))(piVar5,*(undefined4 *)(iVar3 + 4),0);
    }
    (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),1);
    FUN_02034d7c(iVar3);
    FUN_0214f834();
    iVar3 = iVar10 * 4;
    iVar10 = iVar10 + 1;
    *(int *)(param_1 + iVar3 + 0x20) = iVar4;
  } while (iVar10 < 3);
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  local_15c = 0;
  local_158 = 0xfff00000;
  local_154 = 0x100000;
  FUN_0214dc68(auStack_13c,&local_154,&local_158,&local_15c);
  local_150 = 0;
  local_14c = 0;
  local_148 = 0;
  FUN_0214dc68(auStack_130,&local_148,&local_14c,&local_150);
  FUN_0214f714(&local_144,uVar2,s_Position_0216cda8);
  iVar10 = jus_AllocDebug(0x4c,s_ALControllerImp_h_0216bbe0,s_Create_0216cbc0,0x2b9);
  piVar5 = (int *)0x0;
  if (iVar10 != 0) {
    piVar5 = (int *)jus_TagIPCT::jus_TagIPCT
                              (iVar10,0,local_144,local_140,0x494c,auStack_130,auStack_13c,0x400,2);
  }
  if (piVar5[6] == 0) {
    (**(code **)(*piVar5 + 0x14))();
  }
  FUN_02020f38(uVar2,piVar5[6]);
  if (*(char *)(param_1 + 0xac) == '\0') {
    FUN_0215853c(uVar2,0);
    iVar10 = FUN_02034db8();
    FUN_0201710c(*(undefined4 *)(iVar10 + 4),s_Jarena_arena_bg_ncl_0216cdb4);
  }
  else {
    FUN_0215853c(*(undefined4 *)(param_1 + 0x20),0);
    iVar10 = FUN_02034db8();
    FUN_0201710c(*(undefined4 *)(iVar10 + 4),s_stageselect_st_t_sel00_ncl_0216cdc8);
    FUN_0215853c(*(undefined4 *)(param_1 + 0x24),0);
    iVar10 = FUN_02034db8();
    FUN_0201710c(*(undefined4 *)(iVar10 + 4),s_stageselect_st_t_sel01_ncl_0216cde4);
    FUN_0215853c(uVar2,0);
    iVar10 = FUN_02034db8();
    FUN_0201710c(*(undefined4 *)(iVar10 + 4),s_commu_com_bg_ncl_0216ce00);
    uVar7 = 0x800001;
  }
  iVar10 = func_0x021caa0c(s_font_jskfont_aft_0216ce14,0,0);
  iVar3 = FUN_0203b3f4();
  FUN_0214f7f8(*(undefined4 *)(iVar3 + 0x88));
  iVar3 = 0;
  do {
    iVar4 = FUN_0203b3f4();
    iVar4 = FUN_02160d54(iVar3 + 0xa01000,0xa01000,*(undefined4 *)(iVar4 + 0x88),0xa2);
    FUN_0214dc98(auStack_19c,0xfffffffb,0xfffffffa,0xe,8);
    func_0x021cb4d4(*(undefined4 *)(iVar10 + 4),*(undefined4 *)(iVar4 + 4),iVar3 + 0xf080,
                    auStack_19c);
    (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),0);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x32);
  iVar3 = FUN_020152d4();
  (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),1);
  local_194 = 0xa1000;
  FUN_0214e6c0(iVar3,&local_194);
  iVar4 = FUN_0203b3f4();
  uVar2 = FUN_02160d54(0x800009,0x800000,*(undefined4 *)(iVar4 + 0x88),0xa1);
  local_190 = 0x5000;
  FUN_0214f764(uVar2,&local_190);
  FUN_0214e688(iVar3,uVar2);
  FUN_0214f7c0(uVar2,iVar3);
  FUN_0214dc98(auStack_18c,0,0xfffffffa,0,8);
  func_0x021cb4d4(*(undefined4 *)(iVar10 + 4),*(undefined4 *)(iVar3 + 4),0xf180,auStack_18c);
  (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),0);
  iVar3 = 0;
  do {
    iVar4 = FUN_020152d4();
    (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),1);
    local_184 = 0xa2000;
    FUN_0214e6c0(iVar4,&local_184);
    iVar6 = FUN_0203b3f4();
    uVar2 = FUN_02160d54(iVar3 + 0x80000a,0x800000,*(undefined4 *)(iVar6 + 0x88),0xa2);
    local_180 = 0xd6000;
    FUN_0214f764(uVar2,&local_180);
    FUN_0214e688(iVar4,uVar2);
    FUN_0214f7c0(uVar2,iVar4);
    FUN_0214dc98(auStack_17c,0,0xfffffffb,0,8);
    func_0x021cb4d4(*(undefined4 *)(iVar10 + 4),*(undefined4 *)(iVar4 + 4),iVar3 + 0xf190,
                    auStack_17c);
    (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),0);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  iVar3 = 0;
  do {
    iVar4 = FUN_020152d4();
    (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),1);
    local_174 = 0xa2000;
    FUN_0214e6c0(iVar4,&local_174);
    iVar6 = FUN_0203b3f4();
    uVar2 = FUN_02160d54(iVar3 + 0x80000d,0x800000,*(undefined4 *)(iVar6 + 0x88),0xa2);
    local_170 = 0xbe000;
    FUN_0214f764(uVar2,&local_170);
    FUN_0214e688(iVar4,uVar2);
    FUN_0214f7c0(uVar2,iVar4);
    FUN_0214dc98(auStack_16c,0,0xfffffffa,0,8);
    func_0x021cb4d4(*(undefined4 *)(iVar10 + 4),*(undefined4 *)(iVar4 + 4),iVar3 + 0xf1a0,
                    auStack_16c);
    (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),0);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  FUN_0214f834();
  FUN_02157528(iVar10);
  (**(code **)(**(int **)(iVar10 + 4) + 0xc))();
  iVar10 = FUN_0203b3f4();
  uVar7 = FUN_02160d54(uVar7,0x800000,*(undefined4 *)(iVar10 + 0x88),0x20);
  *(undefined4 *)(param_1 + 0x2c) = uVar7;
  local_164 = 0;
  local_160 = 0x80000;
  FUN_021511c8(*(undefined4 *)(param_1 + 0x2c),&local_160,&local_164);
  iVar10 = jus_AllocDebug(0xcc,s_ALWidget_inl_0216bd74,s_Create_0216cbd0,0x1de);
  piVar5 = (int *)0x0;
  if (iVar10 != 0) {
    piVar5 = (int *)func_0x021af26c(iVar10,FUN_021610f0,FUN_02161420,0);
  }
  if (piVar5[6] == 0) {
    (**(code **)(*piVar5 + 0x14))();
  }
  piVar8 = (int *)piVar5[6];
  iVar10 = jus_AllocDebug(0xbc,s_ALWidget_inl_0216bd64,s_Create_0216cbb8,0x212);
  piVar5 = (int *)0x0;
  if (iVar10 != 0) {
    piVar5 = (int *)func_0x021af358(iVar10,FUN_02161170,0);
  }
  if (piVar5[6] == 0) {
    (**(code **)(*piVar5 + 0x14))();
  }
  piVar9 = (int *)piVar5[6];
  iVar10 = piVar9[1];
  *(undefined4 *)(iVar10 + 0x94) = 0xf;
  *(undefined4 *)(iVar10 + 0x98) = 0xf;
  *(undefined4 *)(piVar9[1] + 0x9c) = 0xc;
  local_1b8 = 0x59000;
  FUN_0214e6c0(piVar9,&local_1b8);
  func_0x021b3b7c(1,0,piVar8,piVar9);
  _DAT_021d5154 = 1;
  iVar10 = FUN_02155a9c(piVar8,0x31305053);
  iVar10 = *(int *)(*(int *)(iVar10 + 4) + 100);
  piVar5 = *(int **)(iVar10 + 0x2c);
  if (piVar5 == (int *)0x0) {
    piVar5 = (int *)FUN_02036430(*(undefined4 *)(iVar10 + 0x20));
  }
  if (piVar5[6] == 0) {
    (**(code **)(*piVar5 + 0x10))();
  }
  iVar10 = CommonPaletteAnime::CommonPaletteAnime_Create(piVar5[6],0x11,3,5,0x80);
  *(int *)(param_1 + 0x38) = iVar10;
  *(undefined2 *)(iVar10 + 0x18) = 0;
  *(undefined2 *)(iVar10 + 0x16) = 0x8df;
  *(undefined1 *)(iVar10 + 0x1a) = 0x1e;
  *(undefined1 *)(iVar10 + 0x1c) = 1;
  *(undefined1 *)(iVar10 + 0x1b) = 1;
  (**(code **)(*piVar8 + 8))();
  (**(code **)(*piVar9 + 8))();
  uVar7 = ALWidgetBaseImp::Create(param_1,0);
  *(undefined4 *)(param_1 + 0x48) = uVar7;
  uVar7 = ALWidgetBaseImp::Create(param_1,uVar7);
  *(undefined4 *)(param_1 + 0x4c) = uVar7;
  uVar7 = ALWidgetBaseImp::Create(param_1,*(undefined4 *)(param_1 + 0x48));
  *(undefined4 *)(param_1 + 0x50) = uVar7;
  uVar7 = ALWidgetBaseImp::Create(param_1,*(undefined4 *)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x54) = uVar7;
  iVar10 = 0;
  do {
    iVar3 = FUN_0203b3f4();
    uVar7 = ALWidgetImp::Create(param_1,&DAT_02169e70 + iVar10 * 0x18,*(undefined4 *)(iVar3 + 0x88),
                                *(undefined4 *)(param_1 + 0x54));
    iVar3 = iVar10 * 4;
    iVar10 = iVar10 + 1;
    *(undefined4 *)(param_1 + iVar3 + 100) = uVar7;
  } while (iVar10 < 4);
  iVar10 = 1;
  do {
    iVar3 = FUN_0203b3e4();
    uVar7 = ALWidgetImp::Create(param_1,iVar10 * 0x18 + 0x2169e28,*(undefined4 *)(iVar3 + 0x88),
                                *(undefined4 *)(param_1 + 0x4c));
    iVar3 = iVar10 * 4;
    iVar10 = iVar10 + 1;
    *(undefined4 *)(param_1 + iVar3 + 0x58) = uVar7;
  } while (iVar10 < 3);
  iVar3 = *(int *)(param_1 + 0x50);
  iVar10 = FUN_0203b3f4();
  FUN_0214f7f8(*(undefined4 *)(iVar10 + 0x88));
  uVar7 = _DAT_021d5154;
  uVar2 = *(undefined4 *)(iVar3 + 4);
  iVar10 = jus_AllocDebug(0x17c,s_ALWidgetImp_h_0216cca4,s_Create_0216cbc8,0xb5);
  if (iVar10 != 0) {
    func_0x021acb3c(iVar10,uVar2,uVar7,ALWidgetBaseImp::CreateDrawFunc);
  }
  iVar10 = FUN_0214d37c();
  FUN_0214d354(iVar10,0);
  *(undefined1 *)(*(int *)(iVar10 + 4) + 0x164) = 0;
  func_0x021b5900(*(undefined4 *)(iVar10 + 4),0x100,0x90);
  local_1a4 = 0x18000;
  local_1a0 = 0;
  FUN_021511c8(iVar10,&local_1a0,&local_1a4);
  func_0x021ad6cc(*(undefined4 *)(iVar10 + 4),0x18);
  FUN_0214dc98(auStack_1ac,10,10,0,0);
  FUN_0214dad4(*(int *)(iVar10 + 4) + 0x154,auStack_1ac);
  *(code **)(*(int *)(iVar10 + 4) + 0x14c) = FUN_02161d94;
  func_0x021b65e8(*(undefined4 *)(iVar10 + 4),4,FUN_02161cb0);
  *(undefined4 *)(*(int *)(iVar10 + 4) + 0x13c) = 1;
  *(undefined1 *)(*(int *)(iVar10 + 4) + 0x114) = 1;
  *(undefined1 *)(*(int *)(iVar10 + 4) + 0x140) = 1;
  *(undefined1 *)(*(int *)(iVar10 + 4) + 0x141) = 1;
  *(undefined4 *)(*(int *)(iVar10 + 4) + 0x144) = 0;
  func_0x021ac948(*(undefined4 *)(iVar10 + 4));
  (**(code **)(**(int **)(iVar10 + 4) + 0x1a8))(*(int **)(iVar10 + 4),1);
  *(undefined1 *)(*(int *)(iVar10 + 4) + 0x165) = 0;
  local_1b0 = 0xa3000;
  FUN_0214e6c0(iVar10,&local_1b0);
  (**(code **)(**(int **)(iVar10 + 4) + 0xd8))(*(int **)(iVar10 + 4),1);
  iVar3 = FUN_0214d37c(*(undefined4 *)(*(int *)(iVar10 + 4) + 0x160));
  piVar5 = *(int **)(*(int *)(iVar3 + 4) + 100);
  (**(code **)(*piVar5 + 0xa8))(piVar5,0);
  local_1b4 = 0xa3000;
  FUN_0214e6c0(iVar3,&local_1b4);
  FUN_0214f834();
  *(int *)(param_1 + 0x74) = iVar10;
  (**(code **)(**(int **)(iVar10 + 4) + 0x24))(*(int **)(iVar10 + 4),param_1);
  iVar3 = *(int *)(param_1 + 0x50);
  FUN_0214f7c0(*(undefined4 *)(param_1 + 0x20),iVar3);
  FUN_0214f7c0(*(undefined4 *)(param_1 + 0x24),iVar3);
  FUN_020239a0(*(undefined4 *)(iVar3 + 4));
  FUN_0214f714(&local_1ec,iVar3,s_Position_x_0216ce28);
  piVar5 = *(int **)(*(int *)(iVar3 + 4) + 0x68);
  (**(code **)(*piVar5 + 0xac))(piVar5,0);
  local_1c8 = 0;
  local_1cc = 0x100000;
  FUN_021511c8(iVar3,&local_1cc,&local_1c8);
  FUN_02023c60(*(undefined4 *)(iVar3 + 4),local_1ec,0,local_1e8);
  local_1c0 = 0;
  local_1c4 = 0;
  FUN_021511c8(iVar3,&local_1c4,&local_1c0);
  FUN_02023c60(*(undefined4 *)(iVar3 + 4),local_1ec,8,local_1e8);
  iVar10 = 0;
  do {
    FUN_0214f714(&local_1e4,*(undefined4 *)(param_1 + iVar10 * 4 + 100),&DAT_0216ce34);
    piVar5 = *(int **)(*(int *)(param_1 + iVar10 * 4 + 100) + 4);
    (**(code **)(*piVar5 + 0xd8))(piVar5,0);
    FUN_02023c60(*(undefined4 *)(iVar3 + 4),local_1e4,0,local_1e0);
    piVar5 = *(int **)(*(int *)(param_1 + iVar10 * 4 + 100) + 4);
    (**(code **)(*piVar5 + 0xd8))(piVar5,1);
    FUN_02023c60(*(undefined4 *)(iVar3 + 4),local_1e4,8,local_1e0);
    iVar10 = iVar10 + 1;
  } while (iVar10 < 4);
  FUN_02023c80(*(undefined4 *)(iVar3 + 4),local_1ec,0x494c,local_1e8);
  FUN_02023c70(*(undefined4 *)(iVar3 + 4),2);
  FUN_020239a0(*(undefined4 *)(iVar3 + 4));
  piVar5 = *(int **)(*(int *)(iVar3 + 4) + 0x68);
  (**(code **)(*piVar5 + 0xac))(piVar5,0);
  iVar10 = 0;
  do {
    FUN_0214f714(&local_1dc,*(undefined4 *)(param_1 + iVar10 * 4 + 100),&DAT_0216ce34);
    piVar5 = *(int **)(*(int *)(param_1 + iVar10 * 4 + 100) + 4);
    (**(code **)(*piVar5 + 0xd8))(piVar5,0);
    FUN_02023c60(*(undefined4 *)(iVar3 + 4),local_1dc,0,local_1d8);
    iVar10 = iVar10 + 1;
  } while (iVar10 < 4);
  FUN_02023c70(*(undefined4 *)(iVar3 + 4),3);
  FUN_020239a0(*(undefined4 *)(iVar3 + 4));
  piVar5 = *(int **)(*(int *)(iVar3 + 4) + 0x68);
  (**(code **)(*piVar5 + 0xac))(piVar5,0);
  iVar10 = 0;
  do {
    FUN_0214f714(&local_1d4,*(undefined4 *)(param_1 + iVar10 * 4 + 100),&DAT_0216ce34);
    piVar5 = *(int **)(*(int *)(param_1 + iVar10 * 4 + 100) + 4);
    (**(code **)(*piVar5 + 0xd8))(piVar5,1);
    FUN_02023c60(*(undefined4 *)(iVar3 + 4),local_1d4,0,local_1d0);
    iVar10 = iVar10 + 1;
  } while (iVar10 < 4);
  FUN_02023c70(*(undefined4 *)(iVar3 + 4),4);
  func_0x021b4034(*(undefined4 *)(iVar3 + 4),2);
  func_0x021b3f78(*(undefined4 *)(iVar3 + 4),3);
  func_0x021b3fb0(*(undefined4 *)(iVar3 + 4),4);
  if (*(char *)(param_1 + 0xac) != '\0') {
    iVar10 = FUN_02155a9c(*(undefined4 *)(param_1 + 0x68),0x31305053);
    (**(code **)(**(int **)(iVar10 + 4) + 0xd8))(*(int **)(iVar10 + 4),0);
    iVar10 = FUN_02155a9c(*(undefined4 *)(param_1 + 0x6c),0x31305053);
    (**(code **)(**(int **)(iVar10 + 4) + 0xd8))(*(int **)(iVar10 + 4),0);
    iVar10 = FUN_02155a9c(*(undefined4 *)(param_1 + 0x70),0x31305053);
    (**(code **)(**(int **)(iVar10 + 4) + 0xd8))(*(int **)(iVar10 + 4),0);
    FUN_02023820(*(undefined4 *)(*(int *)(param_1 + 0x68) + 4),0);
    FUN_02023820(*(undefined4 *)(*(int *)(param_1 + 0x6c) + 4),0);
    FUN_02023820(*(undefined4 *)(*(int *)(param_1 + 0x70) + 4),0);
    if ((byte)(*(char *)(param_1 + 0xac) - 2U) < 2) {
      func_0x021b77dc(*(undefined4 *)(*(int *)(param_1 + 100) + 4));
      iVar10 = FUN_02155a9c(*(undefined4 *)(param_1 + 100),0x31305053);
      (**(code **)(**(int **)(iVar10 + 4) + 0xd8))(*(int **)(iVar10 + 4),0);
      piVar5 = *(int **)(*(int *)(param_1 + 100) + 4);
      (**(code **)(*piVar5 + 0xd8))(piVar5,0);
      func_0x021b65d8(*(undefined4 *)(*(int *)(param_1 + 100) + 4));
      piVar5 = *(int **)(*(int *)(param_1 + 100) + 4);
      (**(code **)(*piVar5 + 0x148))(piVar5,8);
    }
  }
  _DAT_021d514c = &LAB_02161458;
  func_0x021b7260(1,0x30078);
  func_0x021b7260(2,0x30078);
  func_0x021b7260(8,0x30078);
  func_0x021b7260(4,0x30078);
  func_0x021b7260(0x10000,0x30078);
  local_1bc = 0x100000;
  FUN_0214f764(iVar3,&local_1bc);
  uVar7 = StageData::StageData_Create();
  *(undefined4 *)(param_1 + 0x34) = uVar7;
  local_1f0 = 0;
  *(undefined1 *)(param_1 + 0xad) = 0;
  uVar13 = 0;
  do {
    iVar10 = FUN_02161df4(uVar13);
    if (iVar10 != 0) {
      iVar10 = 0;
      *(char *)(param_1 + (uint)*(byte *)(param_1 + 0xad) + 0x88) = (char)uVar13;
      *(char *)(param_1 + 0xad) = *(char *)(param_1 + 0xad) + '\x01';
      bVar14 = ((&DAT_020b0c9c)[uVar13 >> 5] & 1 << (uVar13 & 0x1f)) == 0;
      if (!bVar14) {
        local_124[0] = 0xf1;
        local_124[1] = 0x80;
        iVar10 = 2;
        local_124[2] = bVar14;
      }
      iVar3 = FUN_020751b4(*(undefined4 *)(param_1 + 0x34),uVar13);
      uVar1 = iVar3 + 0xf1a0U & 0xffff;
      local_124[iVar10] = (char)(uVar1 >> 8);
      local_124[iVar10 + 1] = (char)uVar1;
      local_124[iVar10 + 2] = 0;
      iVar3 = FUN_020751c4(*(undefined4 *)(param_1 + 0x34),uVar13);
      uVar1 = iVar3 + 0xf190U & 0xffff;
      local_124[iVar10 + 2] = (char)(uVar1 >> 8);
      local_124[iVar10 + 3] = (char)uVar1;
      local_124[iVar10 + 4] = 0;
      iVar3 = FUN_020751a4(*(undefined4 *)(param_1 + 0x34),uVar13);
      if (iVar3 == -1) {
        iVar3 = 0x2f;
      }
      else if (iVar3 == -2) {
        if (uVar13 < 0x13) {
          iVar3 = uVar13 + 0x1d;
        }
        else {
          iVar3 = uVar13 + 0xe;
        }
      }
      iVar3 = (iVar3 + 0xf080) * 0x10000;
      local_124[iVar10 + 4] = (char)((uint)iVar3 >> 0x18);
      local_124[iVar10 + 5] = (char)((uint)iVar3 >> 0x10);
      local_124[iVar10 + 6] = 0;
      uVar7 = FUN_02075190(*(undefined4 *)(param_1 + 0x34),uVar13);
      thunk_FUN_020741c4(local_124,uVar7);
      uVar7 = func_0x021ace90(*(undefined4 *)(*(int *)(param_1 + 0x74) + 4),local_124,0);
      if (uVar13 == param_2) {
        local_1f0 = uVar7;
      }
    }
    uVar13 = uVar13 + 1 & 0xff;
  } while (uVar13 < 0x24);
  piVar5 = *(int **)(*(int *)(param_1 + 0x74) + 4);
  (**(code **)(*piVar5 + 0x1a0))(piVar5,local_1f0,0);
  piVar5 = *(int **)(*(int *)(param_1 + 0x74) + 4);
  (**(code **)(*piVar5 + 0x198))(piVar5,local_1f0);
  if (*(char *)(param_1 + 0xac) == '\x01') {
    iVar10 = FUN_0203b3f4();
    iVar10 = SelectStandbyBar::SelectStandbyBar_Create(*(undefined4 *)(iVar10 + 0x88),0x56,0);
    *(int *)(param_1 + 0x3c) = iVar10;
    *(code **)(iVar10 + 0x4c) = FUN_02161e4c;
    *(int *)(iVar10 + 0x50) = param_1;
  }
  else if ((byte)(*(char *)(param_1 + 0xac) - 2U) < 2) {
    iVar10 = FUN_0203b3f4();
    iVar10 = SelectStandbyBar::SelectStandbyBar_Create(*(undefined4 *)(iVar10 + 0x88),0x56,1);
    *(int *)(param_1 + 0x3c) = iVar10;
    *(code **)(iVar10 + 0x4c) = FUN_02161e4c;
    *(int *)(iVar10 + 0x50) = param_1;
    iVar10 = *(int *)(param_1 + 0x3c);
    *(code **)(iVar10 + 0x38) = FUN_02161e78;
    *(int *)(iVar10 + 0x50) = param_1;
  }
  return;
}

