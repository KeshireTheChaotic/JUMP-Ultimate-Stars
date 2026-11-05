
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-GAME JQuizBattleRuleDisp::JQuizBattleRuleDisp_Add [source-string]
   __FILE__="JQuizBattleRuleDisp.cpp" __FUNCTION__="JQuizBattleRuleDisp_Add" lines=[62, 140] passed
   to 2 source-location call(s); header inlines: ALWidgetImp.h:Create */

undefined4 JQuizBattleRuleDisp::JQuizBattleRuleDisp_Add(void)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int local_90 [9];
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined2 local_50;
  undefined2 local_4e;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 *local_38;
  code *local_34;
  undefined1 *local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  
  puVar2 = (undefined4 *)
           thunk_FUN_0201a228(0xc4,s_JQuizBattleRuleDisp_cpp_02161b00,
                              s_JQuizBattleRuleDisp_Add_02161944,0x8c);
  FUN_0214fadc(puVar2,0xc4);
  FUN_0214fc10();
  uVar1 = FUN_02086d80();
  *(undefined1 *)(puVar2 + 0x2e) = uVar1;
  uVar1 = FUN_020876ac();
  *(undefined1 *)((int)puVar2 + 0xb9) = uVar1;
  FUN_0214f740(*(undefined1 *)(puVar2 + 0x2e));
  FUN_0214f718(*(undefined1 *)((int)puVar2 + 0xb9));
  DAT_020afe90 = FUN_0214f72c();
  DAT_020afe94 = FUN_0214f72c();
  DAT_020afe98 = FUN_0214f704();
  FUN_0214d208(0x20,0x40,0x4000);
  iVar3 = FUN_0203b414(3);
  uVar4 = JQuizCommon::JQuizCmn_BaseBG_Create(*(undefined4 *)(iVar3 + 0x88));
  puVar2[2] = uVar4;
  uVar4 = func_0x021bcf1c(0x13,2,1,0xffffffff);
  puVar2[0x2c] = uVar4;
  if (*(char *)((int)puVar2 + 0xb9) == '\0') {
    func_0x021bd730(puVar2[0x2c],0x74,0);
  }
  else {
    func_0x021bd730(puVar2[0x2c],0x75,0);
  }
  uVar4 = func_0x021ba49c(0,1,1);
  puVar2[0x2d] = uVar4;
  local_2c = &LAB_0215e2f4;
  local_34 = FUN_0215e2c0;
  local_30 = &LAB_0215e2e0;
  local_28 = puVar2[0x2d];
  local_38 = puVar2;
  uVar4 = CommWrapDisconnect::CommWrapDisconnect_Create(&local_38);
  puVar2[0x30] = uVar4;
  iVar3 = FUN_0203b414(2);
  uVar4 = FUN_0214e880(s_jquiz_com_rule00_atm_02161b18,s_jquiz_com_rule00_dig_02161b30,
                       *(undefined4 *)(iVar3 + 0x88));
  puVar2[5] = uVar4;
  uVar4 = FUN_020101f4(s_ruleselect_ruleselect_aar_02161b48,0);
  puVar2[0xc] = uVar4;
  uVar4 = FUN_020101f4(s_Common_button_aar_02161b64,0);
  puVar2[9] = uVar4;
  uVar4 = FUN_020101f4(s_jquiz_com_rule_obj_3d_aar_02161b78,0);
  puVar2[10] = uVar4;
  uVar4 = FUN_020101f4(&DAT_02161b94,0);
  puVar2[0xb] = uVar4;
  uVar4 = FUN_0214e4b0(puVar2[2]);
  puVar2[0x11] = uVar4;
  iVar3 = FUN_0203b404();
  FUN_0214e4e8(puVar2[2],0x810000,0,*(undefined4 *)(iVar3 + 0x88));
  iVar3 = FUN_0203b3e4();
  iVar3 = FUN_0214e548(puVar2[2],*(undefined4 *)(iVar3 + 0x88));
  (**(code **)(**(int **)(iVar3 + 4) + 0x24))(*(int **)(iVar3 + 4),puVar2);
  FUN_02027834(*(undefined4 *)(iVar3 + 4),8,FUN_0215e308);
  func_0x021b4104(*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 4),4);
  *(undefined4 *)(*(int *)(iVar3 + 4) + 0x124) = 2;
  puVar2[0x1b] = iVar3;
  uVar4 = _DAT_021d5154;
  uVar8 = *(undefined4 *)(puVar2[0x11] + 4);
  iVar3 = thunk_FUN_0201a228(0x134,s_ALWidgetImp_h_021608d4,s_Create_021618c4,0x3e);
  piVar5 = (int *)0x0;
  if (iVar3 != 0) {
    piVar5 = (int *)func_0x021af0f8(iVar3,uVar8,uVar4,ALWidgetBaseImp::CreateDrawFunc);
  }
  if (piVar5[6] == 0) {
    (**(code **)(*piVar5 + 0x14))();
  }
  iVar9 = piVar5[6];
  (**(code **)(**(int **)(iVar9 + 4) + 0xd8))(*(int **)(iVar9 + 4),1);
  (**(code **)(**(int **)(puVar2[5] + 4) + 0xd8))(*(int **)(puVar2[5] + 4),1);
  FUN_0214e478(iVar9,puVar2[5]);
  FUN_0202c498(&local_58);
  FUN_0202c498(&local_60);
  FUN_02023940(*(undefined4 *)(iVar9 + 4));
  FUN_02151ebc(&local_68,iVar9,0x2161bb0);
  local_58 = local_68;
  local_54 = local_64;
  FUN_02151ebc(local_90 + 8,iVar9,FUN_02161bbc);
  local_60 = local_90[8];
  local_5c = local_6c;
  (**(code **)(**(int **)(iVar9 + 4) + 0xd8))(*(int **)(iVar9 + 4),1);
  local_90[6] = 0xc0000;
  local_90[7] = 0;
  FUN_0214e1b8(iVar9,local_90 + 7,local_90 + 6);
  FUN_02023c60(*(undefined4 *)(iVar9 + 4),local_60,0,local_5c);
  FUN_02023c60(*(undefined4 *)(iVar9 + 4),local_58,0,local_54);
  local_90[4] = 0;
  local_90[5] = 0;
  FUN_0214e1b8(iVar9,local_90 + 5,local_90 + 4);
  FUN_02023c60(*(undefined4 *)(iVar9 + 4),local_58,8,local_54);
  piVar5 = *(int **)(*(int *)(iVar9 + 4) + 0x68);
  (**(code **)(*piVar5 + 0xac))(piVar5,0);
  FUN_02023c80(*(undefined4 *)(iVar9 + 4),local_58,0x494c,local_54);
  FUN_02023c70(*(undefined4 *)(iVar9 + 4),1);
  func_0x021b4034(*(undefined4 *)(iVar9 + 4),1);
  (**(code **)(**(int **)(iVar9 + 4) + 0xd8))(*(int **)(iVar9 + 4),0);
  iVar3 = func_0x021caa0c(0x2161bc4,0,0);
  iVar6 = FUN_0203b404();
  iVar6 = FUN_0214eaa0(*(undefined4 *)(iVar6 + 0x88),iVar3,0,0x80);
  piVar5 = *(int **)(*(int *)(iVar6 + 4) + 100);
  (**(code **)(*piVar5 + 0xa8))(piVar5,6);
  local_90[2] = 0x1c000;
  local_90[3] = 0x1c000;
  FUN_0214e1b8(iVar6,local_90 + 3,local_90 + 2);
  piVar5 = *(int **)(*(int *)(iVar6 + 4) + 100);
  (**(code **)(*piVar5 + 0x68))(piVar5,(&PTR_DAT_02161a20)[(*(char *)(puVar2 + 0x2e) + -2) * 9]);
  FUN_0214e478(iVar9,iVar6);
  iVar6 = 1;
  do {
    iVar7 = FUN_0203b404();
    iVar7 = FUN_0214eaa0(*(undefined4 *)(iVar7 + 0x88),iVar3,0,0x80);
    local_90[0] = ((iVar6 + -1) * 0x10 + 0x2f) * 0x1000;
    local_90[1] = 0x18000;
    FUN_0214e1b8(iVar7,local_90 + 1,local_90);
    piVar5 = *(int **)(*(int *)(iVar7 + 4) + 100);
    (**(code **)(*piVar5 + 0x68))
              (piVar5,*(undefined4 *)(&DAT_021619d8 + *(char *)(puVar2 + 0x2e) * 0x24 + iVar6 * 4));
    FUN_0214e478(iVar9,iVar7);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 9);
  (**(code **)(**(int **)(iVar3 + 4) + 0xc))();
  if (*(char *)((int)puVar2 + 0xb9) == '\0') {
    local_48 = 0xff;
    local_44 = 0xf;
    iVar3 = FUN_0203b404();
    uVar4 = FUN_0214e4b0(puVar2[2]);
    iVar3 = FUN_0214ee60(uVar4,*(undefined4 *)(iVar3 + 0x88),0x850000,2,0x20,&local_48);
    (**(code **)(**(int **)(iVar3 + 4) + 0x24))(*(int **)(iVar3 + 4),puVar2);
    *(undefined1 *)(*(int *)(iVar3 + 4) + 0xaa) = 1;
    func_0x021b77a8(*(undefined4 *)(iVar3 + 4),0x8000);
    local_50 = 0xff80;
    local_4e = 0;
    local_4c = 0;
    local_4a = 0x18;
    piVar5 = (int *)thunk_FUN_0201a228(0x70,FUN_021608f4,s_Create_021618bc,0x1b2);
    if (piVar5 != (int *)0x0) {
      func_0x021b054c(piVar5,0,&DAT_02093c8c);
      *piVar5 = (int)&jus_Class_0216094c::vftable;
      FUN_0214e6d0(piVar5 + 0x1a,&local_50);
      *piVar5 = 0x21d1c58;
    }
    if (piVar5[6] == 0) {
      (**(code **)(*piVar5 + 0x14))();
    }
    FUN_02020e98(iVar3,piVar5[6]);
    FUN_02023894(*(undefined4 *)(iVar3 + 4),0x850002,0);
    (**(code **)(**(int **)(*(int *)(iVar3 + 4) + 0x68) + 0x6c))();
    func_0x021b3f78(*(undefined4 *)(iVar3 + 4),0x850002);
    func_0x021b3fc4(*(undefined4 *)(iVar3 + 4),0x850004);
    FUN_02027834(*(undefined4 *)(iVar3 + 4),8,FUN_0215e36c);
    func_0x021b4104(*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 4),4);
  }
  uVar4 = FUN_02026f94();
  puVar2[1] = uVar4;
  local_3c = 0x80000;
  FUN_02152ca0(puVar2[1],&local_3c);
  FUN_02028384(*(undefined4 *)(puVar2[1] + 4),FUN_0215e3dc);
  (**(code **)(**(int **)(puVar2[1] + 4) + 0x24))(*(int **)(puVar2[1] + 4),puVar2);
  FUN_0214f568(0x14);
  FUN_0214f5dc();
  uVar4 = FUN_02026f94();
  puVar2[0x2f] = uVar4;
  local_40 = 0x80000;
  FUN_02152ca0(puVar2[0x2f],&local_40);
  FUN_02028384(*(undefined4 *)(puVar2[0x2f] + 4),FUN_0215e480);
  FUN_02027834(*(undefined4 *)(puVar2[0x2f] + 4),8,FUN_0215e56c);
  (**(code **)(**(int **)(puVar2[0x2f] + 4) + 0x24))(*(int **)(puVar2[0x2f] + 4),puVar2);
  FUN_02086cac(puVar2[0x2f]);
  if (*(char *)((int)puVar2 + 0xb9) == '\0') {
    JQuizCommonWork::JQuizCommonWork_Quiz_Shuffle_Core();
    FUN_02028384(*(undefined4 *)(puVar2[0x2f] + 4),FUN_0215e484);
  }
  FUN_02073ebc(2,1);
  return *puVar2;
}

