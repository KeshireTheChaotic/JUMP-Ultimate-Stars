
/* JUS-GAME JQuizMainMultiScore::JQuizMainMultiScoreOneClass_Create [source-string]
   __FILE__="JQuizMainMultiScore.cpp" __FUNCTION__="JQuizMainMultiScoreOneClass_Create" lines=[74]
   passed to 1 source-location call(s) */

char * JQuizMainMultiScore::JQuizMainMultiScoreOneClass_Create
                 (undefined4 param_1,int param_2,int param_3,char param_4)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int local_30 [6];
  
  pcVar2 = (char *)jus_AllocDebug(0x1c,s_JQuizMainMultiScore_cpp_0216119c,
                                  s_JQuizMainMultiScoreOneClass_Crea_02161178,0x4a);
  cVar1 = FUN_020517fc(pcVar2,0,0x1c);
  *pcVar2 = (char)param_2;
  if (param_2 < param_3) {
    cVar1 = '\x01';
  }
  pcVar2[2] = param_4;
  if (param_3 <= param_2) {
    cVar1 = '\0';
  }
  pcVar2[1] = cVar1;
  iVar3 = ALWidgetBaseImp::Create(pcVar2,param_1);
  (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),1);
  local_30[1] = 0xc0000;
  local_30[0] = (*pcVar2 * 0x40 + 0x20) * 0x1000;
  FUN_0214e1b8(iVar3,local_30,local_30 + 1);
  if (pcVar2[1] != '\0') {
    iVar4 = FUN_0203b404();
    uVar5 = ALWidgetImp::Create(iVar3,*(undefined4 *)(iVar4 + 0x88),3,0x818000,8,0xb,0x10,0x6e);
    *(undefined4 *)(pcVar2 + 4) = uVar5;
    FUN_021501e4(uVar5,4,0xfffffffc);
    FUN_02150270(*(undefined4 *)(pcVar2 + 4),0);
    FUN_021502f0(*(undefined4 *)(pcVar2 + 4),0x19);
    FUN_021502fc(*(undefined4 *)(pcVar2 + 4),3);
    uVar5 = JQuizMainMultiRankFuki::JQuizMainMultiRankFukiClass_Create(iVar3);
    *(undefined4 *)(pcVar2 + 8) = uVar5;
  }
  if (pcVar2[2] != '\0') {
    iVar4 = FUN_0203b404();
    iVar4 = FUN_0214e9f0(*(undefined4 *)(iVar4 + 0x88),0x818000,7,0x6e);
    local_30[3] = 0xfffe4000;
    local_30[2] = 0x8000;
    FUN_0214e1b8(iVar4,local_30 + 2,local_30 + 3);
    (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),1);
    FUN_0214e478(iVar3,iVar4);
  }
  if (pcVar2[1] == '\0') {
    iVar4 = 6;
  }
  else {
    iVar4 = *pcVar2 + 2;
  }
  iVar6 = FUN_0203b404();
  iVar4 = FUN_0214e9f0(*(undefined4 *)(iVar6 + 0x88),0x818000,iVar4,0x80);
  local_30[5] = 0;
  local_30[4] = 0;
  FUN_0214e1b8(iVar4,local_30 + 4,local_30 + 5);
  (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),1);
  *(int *)(pcVar2 + 0xc) = iVar4;
  FUN_0214e478(iVar3,iVar4);
  uVar5 = FUN_021545b0(iVar4);
  uVar5 = CommonPaletteAnime::CommonPaletteAnime_Create(uVar5,*pcVar2 * 0x10 + 0x21,1,7,0x80);
  *(undefined4 *)(pcVar2 + 0x14) = uVar5;
  FUN_02157ffc(uVar5,1);
  uVar5 = FUN_021545b0(iVar4);
  uVar5 = CommonPaletteAnime::CommonPaletteAnime_Create(uVar5,*pcVar2 * 0x10 + 0x21,1,6,0x80);
  *(undefined4 *)(pcVar2 + 0x10) = uVar5;
  FUN_02157ffc(uVar5,1);
  uVar5 = FUN_021545b0(iVar4);
  uVar5 = CommonPaletteAnime::CommonPaletteAnime_Create(uVar5,*pcVar2 * 0x10 + 0x21,1,3,0x80);
  *(undefined4 *)(pcVar2 + 0x18) = uVar5;
  FUN_02157ffc(uVar5,1);
  return pcVar2;
}

