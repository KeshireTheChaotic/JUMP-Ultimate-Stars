
/* JUS-GAME ResultMission::ResultMission_Create [source-string] __FILE__="ResultMission.cpp"
   __FUNCTION__="ResultMission_Create" lines=[149, 697, 1219] passed to 5 source-location call(s);
   header inlines: ALControllerImp.h:Create, ALNodeImp.h:Create */

int ResultMission::ResultMission_Create(undefined1 param_1)

{
  undefined2 *puVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined4 uVar14;
  char *pcVar15;
  int iVar16;
  undefined8 uVar17;
  int local_210;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
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
  int local_1b8 [8];
  undefined1 auStack_198 [12];
  undefined1 auStack_18c [12];
  int local_180 [6];
  int local_168;
  undefined4 local_164;
  int local_15c [3];
  undefined4 local_150 [3];
  undefined1 auStack_144 [12];
  undefined1 auStack_138 [8];
  int local_130 [4];
  undefined1 auStack_120 [12];
  undefined1 auStack_114 [256];
  
  iVar4 = thunk_FUN_0201a228(0x78,s_ResultMission_cpp_0216db0c,s_ResultMission_Create_0216da94,0x95)
  ;
  FUN_020517fc(iVar4,0,0x78);
  *(undefined1 *)(iVar4 + 0x74) = param_1;
  iVar5 = FUN_0203b414(0);
  local_1b8[4] = 0;
  piVar6 = *(int **)(*(int *)(iVar5 + 0x88) + 4);
  (**(code **)(*piVar6 + 0x10))(piVar6,local_1b8 + 4);
  iVar5 = FUN_0203b414(1);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar5 + 0x88) + 4),1);
  iVar5 = FUN_0203b414(1);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar5 + 0x88) + 4),4);
  iVar5 = FUN_0203b414(1);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar5 + 0x88) + 4),0x20,0x20);
  iVar5 = FUN_0203b414(1);
  piVar6 = *(int **)(*(int *)(iVar5 + 0x88) + 4);
  (**(code **)(*piVar6 + 0x90))(piVar6,0x8000);
  iVar5 = FUN_0203b414(1);
  local_1b8[5] = 0x3000;
  piVar6 = *(int **)(*(int *)(iVar5 + 0x88) + 4);
  (**(code **)(*piVar6 + 0x10))(piVar6,local_1b8 + 5);
  iVar5 = FUN_0203b414(1);
  piVar6 = *(int **)(*(int *)(iVar5 + 0x88) + 4);
  (**(code **)(*piVar6 + 0x94))(piVar6,1);
  iVar5 = FUN_0203b414(2);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar5 + 0x88) + 4),1);
  iVar5 = FUN_0203b414(2);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar5 + 0x88) + 4),4);
  iVar5 = FUN_0203b414(2);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar5 + 0x88) + 4),0x40,0x20);
  iVar5 = FUN_0203b414(2);
  piVar6 = *(int **)(*(int *)(iVar5 + 0x88) + 4);
  (**(code **)(*piVar6 + 0x90))(piVar6,0x8000);
  iVar5 = FUN_0203b414(2);
  local_1b8[6] = 0x2000;
  piVar6 = *(int **)(*(int *)(iVar5 + 0x88) + 4);
  (**(code **)(*piVar6 + 0x10))(piVar6,local_1b8 + 6);
  iVar5 = FUN_0203b414(3);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar5 + 0x88) + 4),3);
  iVar5 = FUN_0203b414(3);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar5 + 0x88) + 4),8);
  iVar5 = FUN_0203b414(3);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar5 + 0x88) + 4),0x40,0x40);
  iVar5 = FUN_0203b414(3);
  piVar6 = *(int **)(*(int *)(iVar5 + 0x88) + 4);
  (**(code **)(*piVar6 + 0x90))(piVar6,0x8000);
  iVar5 = FUN_0203b414(3);
  local_1b8[7] = 0x1000;
  piVar6 = *(int **)(*(int *)(iVar5 + 0x88) + 4);
  (**(code **)(*piVar6 + 0x10))(piVar6,local_1b8 + 7);
  piVar6 = (int *)FUN_020101f4(s_chr_ChrArc_aar_0216db20,0);
  uVar7 = RuleData::RuleData_Create();
  *(int *)(iVar4 + 0x50) = (int)DAT_020afeee;
  *(byte *)(iVar4 + 0x76) = DAT_020afee4 & 1 | *(byte *)(iVar4 + 0x76) & 0xfe;
  FUN_020707dc(iVar4 + 0x54,iVar4 + 0x58,iVar4 + 0x5c);
  *(int *)(iVar4 + 0x60) = (int)DAT_020afef2;
  *(undefined4 *)(iVar4 + 100) = DAT_020aff0c;
  uVar3 = FUN_0216446c(uVar7,DAT_020afea0);
  *(undefined1 *)(iVar4 + 0x75) = uVar3;
  iVar5 = 0;
  do {
    iVar13 = iVar5 * 2;
    puVar1 = &DAT_020aff3c + iVar5;
    iVar5 = iVar5 + 1;
    *(undefined2 *)(iVar4 + iVar13 + 0x68) = *puVar1;
  } while (iVar5 < 6);
  FUN_0216442c(uVar7);
  iVar5 = 0;
  do {
    iVar13 = iVar5 * 4;
    uVar7 = FUN_020101f4((&DAT_0216d9d8)[iVar5],0);
    iVar5 = iVar5 + 1;
    *(undefined4 *)(iVar4 + iVar13) = uVar7;
  } while (iVar5 < 5);
  iVar5 = thunk_FUN_0201a228(0x78,s_ALNodeImp_h_0216bbd4,s_Create_0216d9b4,0x4c3);
  if (iVar5 != 0) {
    jus_TagNDGR_0209c0b4::jus_TagNDGR_0209c0b4(iVar5,FUN_02024a30,1);
  }
  uVar7 = FUN_0214d37c();
  *(undefined4 *)(iVar4 + 0x20) = uVar7;
  iVar5 = thunk_FUN_0201a228(0x78,s_ALNodeImp_h_0216bbd4,s_Create_0216d9b4,0x4c3);
  if (iVar5 != 0) {
    jus_TagNDGR_0209c0b4::jus_TagNDGR_0209c0b4(iVar5,FUN_02024a30,1);
  }
  iVar5 = FUN_0214d37c();
  FUN_02023940(*(undefined4 *)(iVar5 + 4));
  piVar8 = *(int **)(*(int *)(iVar5 + 4) + 0x68);
  (**(code **)(*piVar8 + 0xac))(piVar8,0);
  FUN_0214f714(&local_1e0,iVar5,s_Position_0216db30);
  local_1e4 = 0x100000;
  FUN_0214f764(iVar5,&local_1e4);
  FUN_02023c60(*(undefined4 *)(iVar5 + 4),local_1e0,0,local_1dc);
  local_1e8 = 0;
  FUN_0214f764(iVar5,&local_1e8);
  FUN_02023c60(*(undefined4 *)(iVar5 + 4),local_1e0,8,local_1dc);
  FUN_02023c80(*(undefined4 *)(iVar5 + 4),local_1e0,0x494c,local_1dc);
  local_1ec = 0x100000;
  FUN_0214f764(iVar5,&local_1ec);
  (**(code **)(**(int **)(*(int *)(iVar5 + 4) + 0x68) + 0x70))();
  FUN_0214e688(*(undefined4 *)(iVar4 + 0x20),iVar5);
  *(int *)(iVar4 + 0x28) = iVar5;
  iVar5 = thunk_FUN_0201a228(0x78,s_ALNodeImp_h_0216bbd4,s_Create_0216d9b4,0x4c3);
  if (iVar5 != 0) {
    jus_TagNDGR_0209c0b4::jus_TagNDGR_0209c0b4(iVar5,FUN_02024a30,1);
  }
  iVar5 = FUN_0214d37c();
  FUN_02023940(*(undefined4 *)(iVar5 + 4));
  piVar8 = *(int **)(*(int *)(iVar5 + 4) + 0x68);
  (**(code **)(*piVar8 + 0xac))(piVar8,0);
  FUN_0214f714(&local_1f4,iVar5,s_Position_0216db30);
  local_1e0 = local_1f4;
  local_1dc = local_1f0;
  local_1f8 = 0xfff00000;
  FUN_0214f764(iVar5,&local_1f8);
  FUN_02023c60(*(undefined4 *)(iVar5 + 4),local_1e0,0,local_1dc);
  local_1fc = 0;
  FUN_0214f764(iVar5,&local_1fc);
  FUN_02023c60(*(undefined4 *)(iVar5 + 4),local_1e0,8,local_1dc);
  FUN_02023c80(*(undefined4 *)(iVar5 + 4),local_1e0,0x494c,local_1dc);
  local_200 = 0xfff00000;
  FUN_0214f764(iVar5,&local_200);
  (**(code **)(**(int **)(*(int *)(iVar5 + 4) + 0x68) + 0x70))();
  FUN_0214e688(*(undefined4 *)(iVar4 + 0x20),iVar5);
  *(int *)(iVar4 + 0x24) = iVar5;
  CommonEffect::CommonEffect_Init(*(undefined4 *)(iVar4 + 0x28));
  if ((int)((uint)*(byte *)(iVar4 + 0x76) << 0x1f) < 0) {
    iVar5 = FUN_0203b414(2);
    uVar7 = FUN_0216840c(s_result_g_result_win_0216db3c,*(undefined4 *)(iVar5 + 0x88));
    *(undefined4 *)(iVar4 + 0x18) = uVar7;
    pcVar15 = s_result_a_result_win_ncl_0216db50;
  }
  else {
    iVar5 = FUN_0203b414(2);
    uVar7 = FUN_0216840c(s_result_g_result_lose_0216db68,*(undefined4 *)(iVar5 + 0x88));
    pcVar15 = s_result_a_result_lose_ncl_0216db80;
    *(undefined4 *)(iVar4 + 0x18) = uVar7;
  }
  thunk_FUN_0207400c(auStack_114,s_result__0216db9c);
  thunk_FUN_020741c4(auStack_114,*(undefined4 *)(&DAT_020924b0 + *(int *)(iVar4 + 0x50) * 8));
  iVar5 = FUN_0203b414(3);
  uVar7 = FUN_0216840c(auStack_114,*(undefined4 *)(iVar5 + 0x88));
  *(undefined4 *)(iVar4 + 0x1c) = uVar7;
  iVar5 = FUN_0203b414(1);
  uVar7 = FUN_0216840c(s_info_bg_0216dba4,*(undefined4 *)(iVar5 + 0x88));
  *(undefined4 *)(iVar4 + 0x14) = uVar7;
  local_1d8 = 0;
  local_1d4 = 0xfff00000;
  local_1d0 = 0x100000;
  FUN_0214dc68(auStack_198,&local_1d0,&local_1d4,&local_1d8);
  local_1cc = 0;
  local_1c8 = 0;
  local_1c4 = 0;
  FUN_0214dc68(auStack_18c,&local_1c4,&local_1c8,&local_1cc);
  FUN_0214f714(&local_1c0,uVar7,s_Position_0216db30);
  iVar5 = thunk_FUN_0201a228(0x4c,s_ALControllerImp_h_0216bbe0,s_Create_0216d9bc,0x2b9);
  piVar8 = (int *)0x0;
  if (iVar5 != 0) {
    piVar8 = (int *)jus_TagIPCT::jus_TagIPCT
                              (iVar5,0,local_1c0,local_1bc,0x494c,auStack_18c,auStack_198,0x400,2);
  }
  if (piVar8[6] == 0) {
    (**(code **)(*piVar8 + 0x14))();
  }
  FUN_02020f38(uVar7,piVar8[6]);
  if (*(char *)(iVar4 + 0x74) == '\x01') {
    FUN_0215853c(*(undefined4 *)(iVar4 + 0x18),0);
    iVar5 = FUN_02034db8();
    FUN_0201710c(*(undefined4 *)(iVar5 + 4),pcVar15);
    FUN_0215853c(uVar7,0);
    iVar5 = FUN_02034db8();
    FUN_0201710c(*(undefined4 *)(iVar5 + 4),s_Jarena_arena_bg_ncl_0216dbac);
  }
  FUN_0214f7c0(*(undefined4 *)(iVar4 + 0x18),*(undefined4 *)(iVar4 + 0x24));
  FUN_0214f7c0(*(undefined4 *)(iVar4 + 0x1c),*(undefined4 *)(iVar4 + 0x24));
  cVar2 = *(char *)(iVar4 + 0x75);
  uVar14 = *(undefined4 *)(iVar4 + 0x24);
  uVar7 = *(undefined4 *)(iVar4 + 0x28);
  if (cVar2 == '\0') {
    local_210 = 0x804005;
    FUN_0214f894(local_130,&DAT_0216da28);
    if ((*(int *)(iVar4 + 0x60) < -999) || (999 < *(int *)(iVar4 + 0x60))) {
      *(undefined4 *)(iVar4 + 0x60) = 999;
    }
    iVar5 = 0;
    do {
      iVar13 = FUN_0203b404();
      iVar13 = FUN_021684c0(0x80401d,0x804000,0xd2,local_130,uVar7,*(undefined4 *)(iVar13 + 0x88));
      local_130[iVar5 + 3] = iVar13;
      local_130[0] = local_130[0] + 0xa000;
      iVar5 = iVar5 + 1;
    } while (iVar5 < 4);
    iVar5 = *(int *)(iVar4 + 0x60);
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    else {
      (**(code **)(**(int **)(local_130[3] + 4) + 0xd8))(*(int **)(local_130[3] + 4),0);
    }
    iVar5 = FUN_0216835c(iVar5,auStack_120,3,0x804012,0);
    local_1b8[2] = *(int *)(*(int *)(*(int *)(local_130[3] + 4) + 0x50) + 0xc) +
                   (3 - iVar5) * 0xa000;
    FUN_0214f764(local_130[3],local_1b8 + 2);
  }
  else if (cVar2 == '\x01') {
    local_210 = 0x804004;
    FUN_0214f894(local_15c,&DAT_0216da1c);
    if ((*(int *)(iVar4 + 0x54) < 0) || (99 < *(int *)(iVar4 + 0x54))) {
      *(undefined4 *)(iVar4 + 0x54) = 99;
    }
    if ((*(int *)(iVar4 + 0x58) < 0) || (99 < *(int *)(iVar4 + 0x58))) {
      *(undefined4 *)(iVar4 + 0x58) = 99;
    }
    if ((*(int *)(iVar4 + 0x5c) < 0) || (99 < *(int *)(iVar4 + 0x5c))) {
      *(undefined4 *)(iVar4 + 0x5c) = 99;
    }
    iVar5 = 0;
    do {
      iVar13 = FUN_0203b404();
      uVar9 = FUN_021684c0(0x80401c,0x804000,0xd2,local_15c,uVar7,*(undefined4 *)(iVar13 + 0x88));
      local_150[iVar5] = uVar9;
      local_15c[0] = local_15c[0] + 0xa000;
      iVar5 = iVar5 + 1;
    } while (iVar5 < 8);
    FUN_0216835c(*(undefined4 *)(iVar4 + 0x54),local_150,2,0x804012,1);
    FUN_0216835c(*(undefined4 *)(iVar4 + 0x58),auStack_144,2,0x804012,1);
    FUN_0216835c(*(undefined4 *)(iVar4 + 0x5c),auStack_138,2,0x804012,1);
  }
  else if (cVar2 == '\x02') {
    local_210 = 0x804004;
    FUN_0214f894(&local_168,&DAT_0216da34);
    if ((*(int *)(iVar4 + 100) < 0) || (99 < *(int *)(iVar4 + 100))) {
      *(undefined4 *)(iVar4 + 100) = 0;
    }
    iVar5 = 0;
    do {
      iVar13 = FUN_0203b404();
      iVar13 = FUN_021684c0(0x804012,0x804000,0xd2,&local_168,uVar7,*(undefined4 *)(iVar13 + 0x88));
      local_1b8[iVar5] = iVar13;
      local_168 = local_168 + 0xa000;
      iVar5 = iVar5 + 1;
    } while (iVar5 < 2);
    iVar5 = FUN_0216835c(*(undefined4 *)(iVar4 + 100),local_1b8,2,0x804012,0);
    if (iVar5 == 1) {
      FUN_0215e750(&local_168,&DAT_0216da34);
      iVar5 = *(int *)(*(int *)(local_1b8[1] + 4) + 0x50);
      *(int *)(iVar5 + 0xc) = local_168 + 0x5000;
      *(undefined4 *)(iVar5 + 0x10) = local_164;
      FUN_0214f784(iVar5,1);
    }
  }
  if (*(char *)(iVar4 + 0x74) == '\0') {
    iVar5 = FUN_0203b404();
    uVar9 = FUN_021684c0(0x804000,0x804000,0xd3,&DAT_0216d9ec,0,*(undefined4 *)(iVar5 + 0x88));
    FUN_0214e688(*(undefined4 *)(iVar4 + 0x20),uVar9);
    iVar5 = FUN_0203b404();
    FUN_021684c0(local_210,0x804000,0xd3,&DAT_0216da04,uVar7,*(undefined4 *)(iVar5 + 0x88));
  }
  else {
    iVar5 = FUN_0203b404();
    uVar9 = FUN_021684c0(0x804001,0x804000,0xd3,&DAT_0216d9ec,0,*(undefined4 *)(iVar5 + 0x88));
    FUN_0214e688(*(undefined4 *)(iVar4 + 0x20),uVar9);
    iVar5 = FUN_0203b404();
    FUN_021684c0(local_210 + 2,0x804000,0xd3,&DAT_0216da04,uVar7,*(undefined4 *)(iVar5 + 0x88));
  }
  if ((int)((uint)*(byte *)(iVar4 + 0x76) << 0x1f) < 0) {
    iVar5 = FUN_0203b404();
    uVar9 = FUN_021684c0(0x804002,0x804000,0xd1,&DAT_0216d9f8,0,*(undefined4 *)(iVar5 + 0x88));
    *(undefined4 *)(iVar4 + 0x2c) = uVar9;
    FUN_0214e688(uVar7,*(undefined4 *)(iVar4 + 0x2c));
    iVar5 = FUN_0203b3e4();
    FUN_021684c0(0x800000,0x800000,0xe1,&DAT_0216da10,uVar14,*(undefined4 *)(iVar5 + 0x88));
    iVar5 = FUN_0203b3e4();
    FUN_021684c0(0x800001,0x800000,0xe0,&DAT_0216da10,uVar14,*(undefined4 *)(iVar5 + 0x88));
    uVar14 = FUN_02155920();
    uVar14 = CommonPaletteAnime::CommonPaletteAnime_Load
                       (uVar14,s_result_result_c00_bin_0216dbc0,0x80);
    *(undefined4 *)(iVar4 + 0x34) = uVar14;
  }
  else {
    iVar5 = FUN_0203b404();
    uVar9 = FUN_021684c0(0x804003,0x804000,0xd1,&DAT_0216d9f8,0,*(undefined4 *)(iVar5 + 0x88));
    *(undefined4 *)(iVar4 + 0x2c) = uVar9;
    FUN_0214e688(uVar7,*(undefined4 *)(iVar4 + 0x2c));
    iVar5 = FUN_0203b3e4();
    FUN_021684c0(0x801000,0x801000,0xe1,&DAT_0216da10,uVar14,*(undefined4 *)(iVar5 + 0x88));
    uVar9 = FUN_02155920();
    uVar9 = CommonPaletteAnime::CommonPaletteAnime_Load(uVar9,s_result_result_c01_bin_0216dbd8,0x80)
    ;
    *(undefined4 *)(iVar4 + 0x34) = uVar9;
    iVar5 = FUN_0203b3e4();
    FUN_021684c0(0x802000,0x802000,0xe0,&DAT_0216da10,uVar14,*(undefined4 *)(iVar5 + 0x88));
    uVar14 = FUN_02155920();
    uVar14 = CommonPaletteAnime::CommonPaletteAnime_Load
                       (uVar14,s_result_result_c02_bin_0216dbf0,0x80);
    *(undefined4 *)(iVar4 + 0x38) = uVar14;
  }
  (**(code **)(**(int **)(*(int *)(*(int *)(iVar4 + 0x2c) + 4) + 0x68) + 0x70))();
  iVar5 = 0;
  do {
    iVar13 = iVar4 + iVar5 * 2;
    if ((*(short *)(iVar13 + 0x68) < 0) || (999 < *(short *)(iVar13 + 0x68))) {
      *(undefined2 *)(iVar13 + 0x68) = 999;
    }
    iVar10 = (iVar5 + 7) * 0xc;
    FUN_0214f894(local_180 + 3,&DAT_0216d9ec + iVar10);
    iVar16 = 0;
    do {
      iVar11 = FUN_0203b404();
      iVar11 = FUN_021684c0(0x804008,0x804000,0xd2,local_180 + 3,uVar7,
                            *(undefined4 *)(iVar11 + 0x88));
      local_180[iVar16] = iVar11;
      local_180[3] = local_180[3] + 0xa000;
      iVar16 = iVar16 + 1;
    } while (iVar16 < 3);
    FUN_0216835c((int)*(short *)(iVar13 + 0x68),local_180,3,0x804008,0);
    FUN_0215e750(local_180 + 3,&DAT_0216d9ec + iVar10);
    iVar13 = 0;
    do {
      FUN_0214f864(local_180[iVar13],local_180 + 3);
      uVar12 = (uint)*(byte *)(*(int *)(*(int *)(local_180[iVar13] + 4) + 100) + 0x10);
      if (((int)(uVar12 << 0x18) < 0) && ((int)(uVar12 << 0x1e) < 0)) {
        local_180[3] = local_180[3] + 0xa000;
      }
      else {
        local_180[3] = local_180[3] + 0x5000;
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < 3);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 6);
  iVar5 = FUN_0203b3e4();
  uVar7 = CharaData::CharaData_Create
                    (3,*(undefined4 *)(iVar4 + 0x50),*(undefined4 *)(iVar5 + 0x88),0,1);
  *(undefined4 *)(iVar4 + 0x30) = uVar7;
  FUN_0207506c(uVar7,1);
  FUN_0214f864(*(undefined4 *)(*(int *)(iVar4 + 0x30) + 8),&DAT_0216da88);
  FUN_02168304(*(undefined4 *)(iVar4 + 0x30),0);
  local_1b8[3] = 0x60000;
  FUN_0214e6c0(*(undefined4 *)(*(int *)(iVar4 + 0x30) + 8),local_1b8 + 3);
  FUN_0214f7c0(*(undefined4 *)(*(int *)(iVar4 + 0x30) + 8),*(undefined4 *)(iVar4 + 0x28));
  (**(code **)(*piVar6 + 0xc))();
  piVar6 = *(int **)(*(int *)(iVar4 + 0x20) + 4);
  (**(code **)(*piVar6 + 0x24))(piVar6,iVar4);
  FUN_02028384(*(undefined4 *)(*(int *)(iVar4 + 0x20) + 4),0x21682a1);
  uVar17 = OS_GetTick();
  *(undefined8 *)(iVar4 + 0x48) = uVar17;
  if ((int)((uint)*(byte *)(iVar4 + 0x76) << 0x1f) < 0) {
    FUN_020734e0(0x30);
    FUN_0207361c(0x30,0);
  }
  else {
    FUN_020734e0(0x31);
    FUN_0207361c(0x31,0);
  }
  iVar5 = FUN_0203b3e4();
  iVar5 = *(int *)(*(int *)(iVar5 + 0x88) + 4);
  *(undefined4 *)(iVar5 + 0x8e8) = 4;
  *(undefined4 *)(iVar5 + 0x8ec) = 0x10;
  *(undefined4 *)(iVar5 + 0x8f0) = 1;
  *(undefined1 *)(iVar5 + 0x902) = 1;
  iVar5 = FUN_0203b3e4();
  iVar5 = *(int *)(*(int *)(iVar5 + 0x88) + 4);
  *(undefined4 *)(iVar5 + 0x8c0) = 8;
  *(undefined4 *)(iVar5 + 0x8c4) = 8;
  *(undefined4 *)(iVar5 + 0x8f0) = 1;
  *(undefined1 *)(iVar5 + 0x902) = 1;
  return iVar4;
}

