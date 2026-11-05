
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-GAME JQuizMainSinglePlay::JQuizMainSinglePlay_Add [source-string]
   __FILE__="JQuizMainSinglePlay.cpp" __FUNCTION__="JQuizMainSinglePlay_Add" lines=[62, 291] passed
   to 2 source-location call(s); header inlines: ALWidgetImp.h:Create */

undefined4 JQuizMainSinglePlay::JQuizMainSinglePlay_Add(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  puVar1 = (undefined4 *)
           jus_AllocDebug(0xf4,s_JQuizMainSinglePlay_cpp_021612f8,s_JQuizMainSinglePlay_Add_021612e0
                          ,0x123);
  FUN_0214fadc(puVar1,0xf4);
  FUN_0214fc78();
  FUN_0214dcd4();
  iVar2 = FUN_0203b414(3);
  uVar3 = JQuizCommon::JQuizCmn_BaseBG_Create(*(undefined4 *)(iVar2 + 0x88));
  puVar1[2] = uVar3;
  iVar2 = FUN_0203b424(3);
  uVar3 = JQuizCommon::JQuizCmn_BaseBG_Create(*(undefined4 *)(iVar2 + 0x88));
  puVar1[3] = uVar3;
  iVar2 = FUN_0203b414(2);
  uVar3 = FUN_0214e880(s_jquiz_quiz00_atm_02161310,s_jquiz_quiz00_dig_02161324,
                       *(undefined4 *)(iVar2 + 0x88));
  puVar1[5] = uVar3;
  iVar2 = FUN_0203b424(2);
  uVar3 = FUN_0214e880(s_jquiz_quiz00_b_atm_02161338,s_jquiz_quiz00_b_dig_0216134c,
                       *(undefined4 *)(iVar2 + 0x88));
  puVar1[6] = uVar3;
  uVar3 = FUN_020101f4(s_Common_button_aar_02161360,0);
  puVar1[9] = uVar3;
  uVar3 = FUN_020101f4(s_jquiz_quiz_obj_a_3d_aar_02161374,0);
  puVar1[10] = uVar3;
  uVar3 = FUN_020101f4(s_jquiz_quiz_obj_b_2d_aar_0216138c,0);
  puVar1[0xb] = uVar3;
  uVar3 = FUN_020101f4(s_jquiz_quiz_pose_obj_aar_021613a4,0);
  puVar1[0xc] = uVar3;
  iVar2 = FUN_0203b404();
  uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x88) + 4);
  DAT_02093c08 = DAT_02093c08 + -1;
  (&DAT_020a16d0)[DAT_02093c08] = DAT_020a0dd0;
  DAT_020a0dd0 = uVar3;
  piVar4 = (int *)FUN_02035e88(0x810000);
  if (piVar4[0xe] == 0) {
    (**(code **)(*piVar4 + 0x14))();
  }
  iVar2 = piVar4[0xe];
  puVar1[0x39] = iVar2;
  piVar4 = *(int **)(iVar2 + 4);
  (**(code **)(*piVar4 + 0x50))(piVar4,1);
  (**(code **)(**(int **)(puVar1[10] + 8) + 0x50))();
  DAT_020a0dd0 = (&DAT_020a16d0)[DAT_02093c08];
  DAT_02093c08 = DAT_02093c08 + 1;
  iVar2 = FUN_0214e4b0(puVar1[2]);
  puVar1[0x11] = iVar2;
  uVar3 = _DAT_021d5154;
  uVar8 = *(undefined4 *)(iVar2 + 4);
  iVar5 = jus_AllocDebug(0x134,s_ALWidgetImp_h_021608d4,s_Create_021612d8,0x3e);
  piVar4 = (int *)0x0;
  if (iVar5 != 0) {
    piVar4 = (int *)func_0x021af0f8(iVar5,uVar8,uVar3,ALWidgetBaseImp::CreateDrawFunc);
  }
  if (piVar4[6] == 0) {
    (**(code **)(*piVar4 + 0x14))();
  }
  iVar5 = piVar4[6];
  piVar4 = *(int **)(iVar5 + 4);
  (**(code **)(*piVar4 + 0xd8))(piVar4,1);
  (**(code **)(**(int **)(puVar1[5] + 4) + 0xd8))(*(int **)(puVar1[5] + 4),1);
  piVar4 = *(int **)(iVar5 + 4);
  piVar6 = *(int **)(puVar1[5] + 4);
  (**(code **)(*piVar4 + 0xb4))(piVar4,piVar6);
  (**(code **)(*piVar6 + 0xc))();
  iVar7 = -1;
  iVar5 = FUN_0214f5c8();
  if (iVar5 == 10) {
    iVar7 = 0x31;
  }
  else if (iVar5 == 0x1e) {
    iVar7 = 0x32;
  }
  else if (iVar5 == 0x32) {
    iVar7 = 0x33;
  }
  if (-1 < iVar7) {
    local_28 = 0xd4;
    local_24 = 0xd;
    iVar5 = FUN_0203b404();
    iVar5 = FUN_0214ee60(iVar2,*(undefined4 *)(iVar5 + 0x88),0x810000,iVar7,0x74,&local_28);
    (**(code **)(**(int **)(iVar5 + 4) + 0xd8))(*(int **)(iVar5 + 4),1);
  }
  uVar3 = JQuizMainCommon::JQuizMainCommonAnswerMixClass_Create();
  puVar1[0x36] = uVar3;
  iVar5 = FUN_0203b404();
  uVar3 = JQuizMainTimeGauge::JQuizMainTimeGaugeClass_Create(iVar2,*(undefined4 *)(iVar5 + 0x88));
  puVar1[0x2d] = uVar3;
  iVar5 = FUN_0203b404();
  uVar3 = JQuizMainTimePlate::JQuizMainTimePlateClass_Create(iVar2,*(undefined4 *)(iVar5 + 0x88));
  puVar1[0x2f] = uVar3;
  uVar3 = JQuizMainTimeGaugeBG::JQuizMainTimeGaugeBGClass_Create(puVar1[5]);
  puVar1[0x2e] = uVar3;
  uVar3 = JQuizMainQuestionMask::JQuizMainQuestionMaskClass_Create();
  puVar1[0x30] = uVar3;
  FUN_021555e8(uVar3,0);
  uVar3 = JQuizMainQuestionMask::JQuizMainAnswerMaskClass_Create();
  puVar1[0x31] = uVar3;
  FUN_02155790(uVar3,0);
  *(undefined2 *)(puVar1 + 0x3a) = 600;
  *(undefined1 *)((int)puVar1 + 0xeb) = 1;
  *(undefined2 *)(puVar1 + 0x3a) = 600;
  FUN_02159930(puVar1);
  uVar3 = JQuizMainQuizNoDisp::JQuizMainQuizNoDispClass_Create(iVar2);
  puVar1[0x32] = uVar3;
  uVar3 = JQuizMainResultDisp::JQuizMainResultDispClass_Create(iVar2);
  puVar1[0x33] = uVar3;
  uVar3 = JQuizMainSingleScore::JQuizMainSingleScoreClass_Create(iVar2);
  puVar1[0x34] = uVar3;
  iVar5 = FUN_0203b424(1);
  uVar3 = *(undefined4 *)(iVar5 + 0x88);
  iVar5 = FUN_0203b414(1);
  uVar3 = JQuizMainTextQDisp::JQuizMainTextQDispClass_Create
                    (iVar2,*(undefined4 *)(iVar5 + 0x88),uVar3);
  puVar1[0x35] = uVar3;
  uVar3 = puVar1[0x11];
  local_30 = 0x18;
  local_2c = 0xa8;
  iVar2 = FUN_0203b404();
  iVar2 = FUN_0214ee60(uVar3,*(undefined4 *)(iVar2 + 0x88),0x810000,0x3b,0x78,&local_30);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  iVar2 = ALWidgetBaseImp::Create(puVar1,puVar1[0x11]);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  func_0x021b6214(*(undefined4 *)(iVar2 + 4),1);
  uVar3 = JQuizMainSubScreenPlate::JQuizMainSubScreenPlateClass_Create(iVar2,puVar1[6],0);
  puVar1[0x37] = uVar3;
  uVar3 = JQuizMainSinglePause::JQuizMainSinglePauseClass_Create();
  puVar1[0x3c] = uVar3;
  uVar3 = FUN_02026f94();
  puVar1[1] = uVar3;
  local_1c = 0x80000;
  FUN_02152ca0(puVar1[1],&local_1c);
  FUN_02028384(*(undefined4 *)(puVar1[1] + 4),FUN_0215997c);
  (**(code **)(**(int **)(puVar1[1] + 4) + 0x24))(*(int **)(puVar1[1] + 4),puVar1);
  uVar3 = FUN_02026f94();
  puVar1[0x38] = uVar3;
  local_20 = 0x80000;
  FUN_02152ca0(puVar1[0x38],&local_20);
  FUN_02028384(*(undefined4 *)(puVar1[0x38] + 4),&DAT_0215a030);
  (**(code **)(**(int **)(puVar1[0x38] + 4) + 0x24))(*(int **)(puVar1[0x38] + 4),puVar1);
  FUN_02073ebc(2,1);
  return *puVar1;
}

