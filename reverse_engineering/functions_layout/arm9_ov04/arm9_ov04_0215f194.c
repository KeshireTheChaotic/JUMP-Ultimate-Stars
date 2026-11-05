
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-GAME JQuizBattleMainPlay::JQuizBattleMainPlay_Add [source-string]
   __FILE__="JQuizBattleMainPlay.cpp" __FUNCTION__="JQuizBattleMainPlay_Add" lines=[62, 190] passed
   to 2 source-location call(s); header inlines: ALWidgetImp.h:Create */

undefined4 JQuizBattleMainPlay::JQuizBattleMainPlay_Add(void)

{
  undefined1 uVar1;
  char cVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 in_r3;
  int *piVar9;
  undefined4 uVar10;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  uStack_1c = in_r3;
  puVar4 = (undefined4 *)
           thunk_FUN_0201a228(0x108,s_JQuizBattleMainPlay_cpp_02161cfc,
                              s_JQuizBattleMainPlay_Add_02161ce4,0xbe);
  FUN_0214fadc(puVar4,0x108);
  FUN_0214fc78();
  uVar1 = FUN_020876ac();
  FUN_0214f718(uVar1);
  uVar1 = FUN_02086d80();
  FUN_0214f740(uVar1);
  cVar2 = FUN_0214f72c();
  uVar5 = JQuizMainBattleInfo::JQuizMainBattleInfoClass_Create((int)cVar2);
  puVar4[0x3f] = uVar5;
  FUN_0214dcd4();
  iVar6 = FUN_0203b414(3);
  uVar5 = JQuizCommon::JQuizCmn_BaseBG_Create(*(undefined4 *)(iVar6 + 0x88));
  puVar4[2] = uVar5;
  iVar6 = FUN_0203b424(3);
  uVar5 = JQuizCommon::JQuizCmn_BaseBG_Create(*(undefined4 *)(iVar6 + 0x88));
  puVar4[3] = uVar5;
  iVar6 = FUN_0203b414(2);
  uVar5 = FUN_0214e880(s_jquiz_quiz00_atm_02161d14,s_jquiz_quiz00_dig_02161d28,
                       *(undefined4 *)(iVar6 + 0x88));
  puVar4[5] = uVar5;
  iVar6 = FUN_0203b424(2);
  uVar5 = FUN_0214e880(s_jquiz_quiz00_b_atm_02161d3c,s_jquiz_quiz00_b_dig_02161d50,
                       *(undefined4 *)(iVar6 + 0x88));
  puVar4[6] = uVar5;
  uVar5 = FUN_020101f4(s_Common_button_aar_02161d64,0);
  puVar4[9] = uVar5;
  uVar5 = FUN_020101f4(s_jquiz_quiz_obj_a_3d_aar_02161d78,0);
  puVar4[10] = uVar5;
  uVar5 = FUN_020101f4(s_jquiz_quiz_obj_b_2d_aar_02161d90,0);
  puVar4[0xb] = uVar5;
  uVar5 = FUN_020101f4(s_jquiz_com_quiz_obj_3d_aar_02161da8,0);
  puVar4[0xc] = uVar5;
  iVar6 = FUN_0203b404();
  DAT_02093c08 = DAT_02093c08 + -1;
  uVar5 = *(undefined4 *)(*(int *)(iVar6 + 0x88) + 4);
  (&DAT_020a16d0)[DAT_02093c08] = DAT_020a0dd0;
  DAT_020a0dd0 = uVar5;
  piVar7 = (int *)FUN_02035e88(0x810000);
  if (piVar7[0xe] == 0) {
    (**(code **)(*piVar7 + 0x14))();
  }
  iVar6 = piVar7[0xe];
  puVar4[0x3c] = iVar6;
  piVar7 = *(int **)(iVar6 + 4);
  (**(code **)(*piVar7 + 0x50))(piVar7,1);
  (**(code **)(**(int **)(puVar4[10] + 8) + 0x50))();
  DAT_020a0dd0 = (&DAT_020a16d0)[DAT_02093c08];
  DAT_02093c08 = DAT_02093c08 + 1;
  iVar6 = FUN_0214e4b0(puVar4[2]);
  puVar4[0x11] = iVar6;
  uVar5 = _DAT_021d5154;
  uVar10 = *(undefined4 *)(iVar6 + 4);
  iVar8 = thunk_FUN_0201a228(0x134,s_ALWidgetImp_h_021608d4,s_Create_02161cdc,0x3e);
  piVar7 = (int *)0x0;
  if (iVar8 != 0) {
    piVar7 = (int *)func_0x021af0f8(iVar8,uVar10,uVar5,ALWidgetBaseImp::CreateDrawFunc);
  }
  if (piVar7[6] == 0) {
    (**(code **)(*piVar7 + 0x14))();
  }
  iVar8 = piVar7[6];
  piVar7 = *(int **)(iVar8 + 4);
  (**(code **)(*piVar7 + 0xd8))(piVar7,1);
  (**(code **)(**(int **)(puVar4[5] + 4) + 0xd8))(*(int **)(puVar4[5] + 4),1);
  piVar7 = *(int **)(iVar8 + 4);
  piVar9 = *(int **)(puVar4[5] + 4);
  (**(code **)(*piVar7 + 0xb4))(piVar7,piVar9);
  (**(code **)(*piVar9 + 0xc))();
  local_30 = 0xd4;
  local_2c = 0xd;
  iVar8 = FUN_0203b404();
  iVar8 = FUN_0214ee60(iVar6,*(undefined4 *)(iVar8 + 0x88),0x810000,0x3c,0x74,&local_30);
  (**(code **)(**(int **)(iVar8 + 4) + 0xd8))(*(int **)(iVar8 + 4),1);
  uVar5 = JQuizMainCommon::JQuizMainCommonAnswerMixClass_Create();
  puVar4[0x37] = uVar5;
  iVar8 = FUN_0203b404();
  uVar5 = JQuizMainTimeGauge::JQuizMainTimeGaugeClass_Create(iVar6,*(undefined4 *)(iVar8 + 0x88));
  puVar4[0x2d] = uVar5;
  iVar8 = FUN_0203b404();
  uVar5 = JQuizMainTimePlate::JQuizMainTimePlateClass_Create(iVar6,*(undefined4 *)(iVar8 + 0x88));
  puVar4[0x2f] = uVar5;
  uVar5 = JQuizMainTimeGaugeBG::JQuizMainTimeGaugeBGClass_Create(puVar4[5]);
  puVar4[0x2e] = uVar5;
  uVar5 = JQuizMainQuestionMask::JQuizMainQuestionMaskClass_Create();
  puVar4[0x30] = uVar5;
  FUN_021555e8(uVar5,0);
  uVar5 = JQuizMainQuestionMask::JQuizMainAnswerMaskClass_Create();
  puVar4[0x31] = uVar5;
  FUN_02155790(uVar5,0);
  *(undefined2 *)(puVar4 + 0x3d) = 600;
  *(undefined1 *)((int)puVar4 + 0xf7) = 1;
  *(undefined2 *)(puVar4 + 0x3d) = 600;
  FUN_0215f8ec(puVar4);
  uVar5 = JQuizMainQuizNoDisp::JQuizMainQuizNoDispClass_Create(iVar6);
  puVar4[0x32] = uVar5;
  uVar5 = JQuizMainResultDisp::JQuizMainResultDispClass_Create(iVar6);
  puVar4[0x33] = uVar5;
  uVar5 = JQuizMainAnswerDisp::JQuizMainAnswerDispClass_Create(iVar6);
  puVar4[0x34] = uVar5;
  cVar2 = FUN_0214f704();
  cVar3 = FUN_0214f72c();
  uVar5 = JQuizMainMultiScore::JQuizMainMultiScoreClass_Create((int)cVar2,(int)cVar3,iVar6);
  puVar4[0x35] = uVar5;
  iVar8 = FUN_0203b424(1);
  uVar5 = *(undefined4 *)(iVar8 + 0x88);
  iVar8 = FUN_0203b414(1);
  uVar5 = JQuizMainTextQDisp::JQuizMainTextQDispClass_Create
                    (iVar6,*(undefined4 *)(iVar8 + 0x88),uVar5);
  puVar4[0x36] = uVar5;
  iVar6 = ALWidgetBaseImp::Create(puVar4,puVar4[0x11]);
  (**(code **)(**(int **)(iVar6 + 4) + 0xd8))(*(int **)(iVar6 + 4),1);
  func_0x021b6214(*(undefined4 *)(iVar6 + 4),1);
  uVar5 = JQuizMainSubScreenPlate::JQuizMainSubScreenPlateClass_Create(iVar6,puVar4[6],1);
  puVar4[0x38] = uVar5;
  uVar5 = JQuizMainSubPlayerMark::JQuizMainSubPlayerMarkClass_Create(iVar6);
  puVar4[0x39] = uVar5;
  uVar5 = JQuizMainSubWaitPlayer::JQuizMainSubWaitPlayerClass_Create(iVar6);
  puVar4[0x3a] = uVar5;
  FUN_020879dc(0,0xf7,0xd);
  uVar5 = FUN_02026f94();
  puVar4[1] = uVar5;
  local_20 = 0x80000;
  FUN_02152ca0(puVar4[1],&local_20);
  FUN_02028384(*(undefined4 *)(puVar4[1] + 4),FUN_0215f938);
  (**(code **)(**(int **)(puVar4[1] + 4) + 0x24))(*(int **)(puVar4[1] + 4),puVar4);
  uVar5 = FUN_02026f94();
  puVar4[0x3b] = uVar5;
  local_24 = 0x81000;
  FUN_02152ca0(puVar4[0x3b],&local_24);
  FUN_02028384(*(undefined4 *)(puVar4[0x3b] + 4),FUN_0216024c);
  (**(code **)(**(int **)(puVar4[0x3b] + 4) + 0x24))(*(int **)(puVar4[0x3b] + 4),puVar4);
  uVar5 = FUN_02026f94();
  puVar4[0x40] = uVar5;
  local_28 = 0x82000;
  FUN_02152ca0(puVar4[0x40],&local_28);
  (**(code **)(**(int **)(puVar4[0x40] + 4) + 0x24))(*(int **)(puVar4[0x40] + 4),puVar4);
  FUN_02028384(*(undefined4 *)(puVar4[0x40] + 4),FUN_0216031c);
  FUN_02027834(*(undefined4 *)(puVar4[0x40] + 4),8,FUN_0216035c);
  FUN_02086cac(puVar4[0x40]);
  FUN_02073ebc(2,1);
  return *puVar4;
}

