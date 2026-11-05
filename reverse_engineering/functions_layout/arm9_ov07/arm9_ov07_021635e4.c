
/* JUS-GAME SelectStandby::SelectStandby_Create [source-string] __FILE__="SelectStandby.cpp"
   __FUNCTION__="SelectStandby_Create" lines=[129, 751, 1219] passed to 3 source-location call(s);
   header inlines: ALControllerImp.h:Create, ALNodeImp.h:Create */

int * SelectStandby::SelectStandby_Create(int param_1,int param_2,undefined1 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  bool bVar9;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  char acStack_34 [12];
  int local_28;
  int local_24;
  undefined4 local_20;
  
  piVar1 = (int *)thunk_FUN_0201a228(0x6c,s_SelectStandby_cpp_0216a9e4,
                                     s_SelectStandby_Create_0216a960,0x81);
  piVar1[0x16] = param_1;
  piVar1[0x17] = param_2;
  *(undefined1 *)(piVar1 + 0x1a) = param_3;
  FUN_0203d0b4(*(undefined4 *)(param_1 + 4),3);
  FUN_0203d478(*(undefined4 *)(param_1 + 4),8);
  FUN_0203cfbc(*(undefined4 *)(param_1 + 4),0x40,0x40);
  (**(code **)(**(int **)(param_1 + 4) + 0x90))(*(int **)(param_1 + 4),0x8000);
  local_38 = 0x1000;
  (**(code **)(**(int **)(param_1 + 4) + 0x10))(*(int **)(param_1 + 4),&local_38);
  iVar2 = FUN_020101f4(s_deckselect_deckselect_aar_0216a9f8,0);
  piVar1[1] = iVar2;
  iVar2 = FUN_020101f4(s_deckselect_deck_standby_obj_aar_0216aa14,0);
  piVar1[2] = iVar2;
  iVar2 = FUN_020101f4(s_common_title_icon_2d_aar_0216aa34,0);
  piVar1[3] = iVar2;
  iVar2 = thunk_FUN_0201a228(0x78,s_ALNodeImp_h_0216a92c,s_Create_0216a914,0x4c3);
  if (iVar2 != 0) {
    jus_TagNDGR_0209c0b4::jus_TagNDGR_0209c0b4(iVar2,FUN_02024a30,1);
  }
  iVar2 = FUN_0214f340();
  *piVar1 = iVar2;
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  iVar2 = *(int *)(*(int *)(*piVar1 + 4) + 0x50);
  *(undefined4 *)(iVar2 + 0xc) = 0xfff00000;
  FUN_0214f240(iVar2,1);
  local_54 = 0xfff00000;
  local_50 = 0;
  local_4c = 0;
  FUN_02163ee0(acStack_34,&local_54,&local_50,&local_4c);
  pcVar8 = acStack_34;
  FUN_0214f2a4(&local_5c,*piVar1,s_Position_0216aa50);
  iVar2 = thunk_FUN_0201a228(0x4c,s_ALControllerImp_h_0216a94c,s_Create_0216a924,0x2ef);
  if (iVar2 != 0) {
    jus_TagIPMV::jus_TagIPMV(iVar2,0,local_5c,local_58,0x494c,pcVar8,8,0,0);
  }
  uVar3 = FUN_02163eb8();
  FUN_02020f38(*piVar1,uVar3);
  (**(code **)(**(int **)(*piVar1 + 4) + 0x24))(*(int **)(*piVar1 + 4),piVar1);
  FUN_02028384(*(undefined4 *)(*piVar1 + 4),FUN_02163fec);
  bVar9 = (char)piVar1[0x1a] != '\0';
  if (bVar9) {
    pcVar5 = s_deckselect_deck_standby00_dig_0216aa5c;
    pcVar8 = s_deckselect_deck_standby00_atm_0216aa7c;
  }
  else {
    pcVar5 = s_deckselect_deck_standby01_dig_0216aa9c;
  }
  if (!bVar9) {
    pcVar8 = s_deckselect_deck_standby01_atm_0216aabc;
  }
  FUN_02150e78(piVar1[0x16]);
  piVar4 = (int *)FUN_02035c90(pcVar5);
  if (piVar4[0xe] == 0) {
    (**(code **)(*piVar4 + 0x14))();
  }
  iVar6 = piVar4[0xe];
  FUN_02036ab8();
  iVar2 = FUN_0214f340();
  (**(code **)(**(int **)(iVar2 + 4) + 0x130))(*(int **)(iVar2 + 4),pcVar8);
  if (iVar6 == 0) {
    piVar4 = *(int **)(*(int *)(iVar2 + 4) + 100);
    (**(code **)(*piVar4 + 0x50))(piVar4,0,0);
  }
  else {
    piVar4 = *(int **)(*(int *)(iVar2 + 4) + 100);
    (**(code **)(*piVar4 + 0x50))(piVar4,*(undefined4 *)(iVar6 + 4),0);
  }
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  FUN_02034d7c(iVar6);
  FUN_0214f48c(*piVar1,iVar2);
  FUN_02152468(iVar2,*piVar1);
  piVar1[4] = iVar2;
  FUN_02150eb4();
  iVar2 = FUN_02163f2c(0xa01000,0xa01000,piVar1[0x17],*piVar1,100,&DAT_0216a848);
  piVar1[5] = iVar2;
  iVar2 = 1;
  do {
    iVar6 = FUN_02163f2c(0x885000,0x885000,piVar1[0x17],*piVar1,100,&DAT_0216a848 + iVar2 * 0xc);
    iVar7 = iVar2 + 1;
    piVar1[iVar2 + 5] = iVar6;
    iVar2 = iVar7;
  } while (iVar7 < 0x10);
  iVar2 = 9;
  do {
    local_40 = 0x63000;
    FUN_0214f27c(piVar1[iVar2 + 5],&local_40);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0xd);
  local_44 = 0x61000;
  FUN_0214f27c(piVar1[0x14],&local_44);
  local_48 = 0x62000;
  FUN_0214f27c(piVar1[0x13],&local_48);
  FUN_02023894(*(undefined4 *)(piVar1[0x14] + 4),0x885018,0);
  (**(code **)(**(int **)(*(int *)(piVar1[0x14] + 4) + 0x68) + 0x6c))();
  FUN_02023894(*(undefined4 *)(piVar1[0x13] + 4),0x885017,0);
  (**(code **)(**(int **)(*(int *)(piVar1[0x13] + 4) + 0x68) + 0x6c))();
  FUN_02023894(*(undefined4 *)(piVar1[0x12] + 4),0x88500f,0);
  (**(code **)(**(int **)(*(int *)(piVar1[0x12] + 4) + 0x68) + 0x6c))();
  iVar2 = DAT_020afe98;
  if ((char)piVar1[0x1a] == '\0') {
    iVar6 = FUN_02087724();
    if (iVar6 == 2) {
      (**(code **)(**(int **)(piVar1[0x14] + 4) + 0xd8))(*(int **)(piVar1[0x14] + 4),0);
      (**(code **)(**(int **)(piVar1[0x13] + 4) + 0xd8))(*(int **)(piVar1[0x13] + 4),0);
    }
    else {
      iVar2 = (iVar2 + 5) * 0xc;
      local_28 = *(int *)(&DAT_0216a848 + iVar2);
      local_24 = *(int *)(&DAT_0216a84c + iVar2);
      local_20 = *(undefined4 *)(&DAT_0216a850 + iVar2);
      FUN_02163efc(piVar1[0x13],&local_28);
      local_28 = local_28 + DAT_0216a8fc;
      local_24 = local_24 + DAT_0216a900;
      FUN_02163efc(piVar1[0x14],&local_28);
    }
  }
  else {
    iVar6 = 0;
    do {
      FUN_02163efc(piVar1[iVar6 + 5],&DAT_0216a7f4 + iVar6 * 0xc);
      iVar6 = iVar6 + 1;
    } while (iVar6 < 6);
    iVar6 = 6;
    do {
      (**(code **)(**(int **)(piVar1[iVar6 + 5] + 4) + 0xd8))(*(int **)(piVar1[iVar6 + 5] + 4),0);
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x10);
    FUN_02023894(*(undefined4 *)(piVar1[10] + 4),iVar2 + 0x885008,0);
    (**(code **)(**(int **)(*(int *)(piVar1[10] + 4) + 0x68) + 0x6c))();
  }
  iVar2 = *(int *)(*(int *)(piVar1[0x13] + 4) + 100);
  piVar4 = *(int **)(iVar2 + 0x2c);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)FUN_02036430(*(undefined4 *)(iVar2 + 0x20));
  }
  if (piVar4[6] == 0) {
    (**(code **)(*piVar4 + 0x10))();
  }
  iVar2 = CommonPaletteAnime::CommonPaletteAnime_Create(piVar4[6],0x21,3,5,0x80);
  *(undefined2 *)(iVar2 + 0x18) = 0;
  *(undefined2 *)(iVar2 + 0x16) = 0x8df;
  *(undefined1 *)(iVar2 + 0x1a) = 0x1e;
  *(undefined1 *)(iVar2 + 0x1c) = 1;
  *(undefined1 *)(iVar2 + 0x1b) = 1;
  piVar1[0x19] = iVar2;
  FUN_02150e78(piVar1[0x17]);
  iVar2 = func_0x021caa0c(s_font_jskfont_aft_0216aadc,0,0);
  func_0x021c5fb4(*(undefined4 *)(iVar2 + 4));
  iVar6 = FUN_0214f340();
  local_3c = 0x65000;
  FUN_0214f27c(iVar6,&local_3c);
  piVar4 = *(int **)(*(int *)(iVar6 + 4) + 100);
  (**(code **)(*piVar4 + 0xa8))(piVar4,0);
  (**(code **)(**(int **)(iVar6 + 4) + 0xd8))(*(int **)(iVar6 + 4),1);
  FUN_02152468(iVar6,*piVar1);
  FUN_0214f48c(*piVar1,iVar6);
  if ((char)piVar1[0x1a] == '\0') {
    FUN_02163efc(iVar6,&DAT_0216a908);
  }
  else {
    FUN_02163efc(iVar6,&DAT_0216a83c);
  }
  (**(code **)(**(int **)(iVar2 + 4) + 0xc))();
  FUN_02150eb4();
  piVar1[0x15] = iVar6;
  iVar2 = StageData::StageData_Create();
  piVar1[0x18] = iVar2;
  FUN_02163fec(*piVar1);
  return piVar1;
}

