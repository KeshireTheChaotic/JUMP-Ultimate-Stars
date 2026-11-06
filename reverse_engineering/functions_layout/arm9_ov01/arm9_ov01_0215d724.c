
/* WARNING: Removing unreachable block (ram,0x0215d97a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-GAME DeckSelectPassword::DeckSelectPassword_Create [source-string]
   __FILE__="DeckSelectPassword.cpp" __FUNCTION__="DeckSelectPassword_Create" lines=[678, 751, 1219]
   passed to 5 source-location call(s); header inlines: ALControllerImp.h:Create,
   ALNodeImp.h:Create, ALWidgetBaseImp.h:Create */

void DeckSelectPassword::DeckSelectPassword_Create
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int iStack_bc;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [8];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [12];
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  *(undefined4 *)(param_1 + 0x304) = 0;
  *(uint *)(param_1 + 0x308) = (uint)DAT_020afeb4;
  uStack_18 = param_4;
  iVar1 = FUN_02071f54();
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x304) = 2;
  }
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0xac) + 4);
  func_0x021b4104(uVar2,uVar2,4);
  FUN_02159ea8(param_1,FUN_0215dd9c);
  FUN_0215aa74(param_1,1);
  FUN_0215a9cc(*(undefined4 *)(param_1 + 0x78));
  FUN_0215a9cc(*(undefined4 *)(param_1 + 0x74));
  uStack_34 = 0xce000;
  FUN_0214f764(*(undefined4 *)(param_1 + 0x7c),&uStack_34);
  FUN_0215ce50(param_1);
  piVar3 = (int *)thunk_FUN_0201a228(0x8c,s_DeckSelectPassword_cpp_0216ca1c,
                                     s_DeckSelectPassword_Create_0216c96c,0x143);
  if (piVar3 != (int *)0x0) {
    FUN_0215e2b4(piVar3 + 0x1b);
    FUN_0215e2b4(piVar3 + 0x1e);
  }
  FUN_020517fc(piVar3,0,0x8c);
  piVar3[0x18] = param_1;
  iVar1 = thunk_FUN_0201a228(0x78,s_ALNodeImp_h_0216bbd4,s_Create_0216c948,0x4c3);
  if (iVar1 != 0) {
    jus_TagNDGR_0209c0b4::jus_TagNDGR_0209c0b4(iVar1,FUN_02024a30,1);
  }
  iVar1 = FUN_0214d37c();
  *piVar3 = iVar1;
  (**(code **)(**(int **)(iVar1 + 4) + 0x24))(*(int **)(iVar1 + 4),piVar3);
  FUN_02028384(*(undefined4 *)(*piVar3 + 4),FUN_0215e544 + 1);
  FUN_020282f4(*(undefined4 *)(*piVar3 + 4));
  (**(code **)(**(int **)(*piVar3 + 4) + 0xd8))(*(int **)(*piVar3 + 4),0);
  iVar1 = FUN_0203b424(1);
  iVar1 = FUN_02158c38(s_deckselect_password_00_atm_0216ca34,s_deckselect_password_00_dig_0216ca50,
                       *(undefined4 *)(iVar1 + 0x88));
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),0);
  FUN_0214e688(*piVar3,iVar1);
  FUN_0214f714(&uStack_ac,iVar1,s_Position_0216ca6c);
  iVar4 = thunk_FUN_0201a228(0x4c,&DAT_0216c958,s_Create_0216c940,0x2ef);
  if (iVar4 != 0) {
    jus_TagIPMV::jus_TagIPMV(iVar4,0,uStack_ac,uStack_a8,0x494c,&DAT_02093c8c,8,0,0);
  }
  uVar2 = FUN_0215e28c();
  FUN_02020f38(iVar1,uVar2);
  piVar3[2] = iVar1;
  iVar1 = FUN_0203b424(2);
  iVar1 = FUN_02158c38(s_deckselect_password_01_atm_0216ca78,s_deckselect_password_01_dig_0216ca94,
                       *(undefined4 *)(iVar1 + 0x88));
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),0);
  uStack_a0 = 0;
  uStack_a4 = 0xffffd000;
  FUN_021511c8(iVar1,&uStack_a4,&uStack_a0);
  uStack_94 = 0xffffd000;
  uStack_90 = 0;
  uStack_8c = 0;
  FUN_0214dc68(auStack_30,&uStack_94,&uStack_90,&uStack_8c);
  FUN_0214f714(&uStack_9c,iVar1,s_Position_0216ca6c);
  iVar4 = thunk_FUN_0201a228(0x4c,&DAT_0216c958,s_Create_0216c940,0x2ef);
  if (iVar4 != 0) {
    jus_TagIPMV::jus_TagIPMV(iVar4,0,uStack_9c,uStack_98,0x494c,auStack_30,8,0,0);
  }
  uVar2 = FUN_0215e28c();
  FUN_02020f38(iVar1,uVar2);
  FUN_0214e688(*piVar3,iVar1);
  piVar3[1] = iVar1;
  iVar1 = FUN_0203b424(0);
  FUN_0214f7f8(*(undefined4 *)(iVar1 + 0x88));
  iVar1 = FUN_0203687c(0x20,0x20);
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
  FUN_0214e688(*piVar3,iVar1);
  FUN_0214f7c0(iVar1,piVar3[1]);
  piVar3[3] = iVar1;
  FUN_0214f834();
  _DAT_021d5154 = 0xffffffff;
  iVar1 = thunk_FUN_0201a228(0x14c,s_ALWidgetBaseImp_h_0216b9dc,s_Create_0216c950,0x2a6);
  if (iVar1 != 0) {
    func_0x021b7950(iVar1,0,0xffffffff,ALWidgetBaseImp::CreateDrawFunc);
  }
  iVar1 = FUN_0214d37c();
  piVar3[4] = iVar1;
  func_0x021b5898(*(undefined4 *)(iVar1 + 4));
  (**(code **)(**(int **)(piVar3[4] + 4) + 0xd8))(*(int **)(piVar3[4] + 4),1);
  FUN_0214f7c0(piVar3[4],*piVar3);
  iVar1 = FUN_02158dc8(param_1,&DAT_0216c5b0,piVar3[4]);
  func_0x021b6760(*(undefined4 *)(iVar1 + 4),4,FUN_0215e780 + 1);
  iVar1 = FUN_0203b3f4();
  uVar2 = FUN_02158ca4(0x883000,0x883000,*(undefined4 *)(iVar1 + 0x88),0xa1);
  uStack_84 = 0;
  uStack_88 = 0x80000;
  FUN_021511c8(uVar2,&uStack_88,&uStack_84);
  FUN_0214e688(*piVar3,uVar2);
  FUN_0214f7c0(uVar2,*piVar3);
  iVar1 = FUN_0203b3f4();
  uVar2 = FUN_02158ca4(0x883001,0x883000,*(undefined4 *)(iVar1 + 0x88),0x65);
  uStack_7c = 0x19000;
  uStack_80 = 0x2c000;
  FUN_021511c8(uVar2,&uStack_80,&uStack_7c);
  FUN_0214e688(*piVar3,uVar2);
  FUN_0214f7c0(uVar2,piVar3[2]);
  iVar1 = func_0x021bdd90();
  piVar3[0x21] = ((iVar1 + 0xfU >> 4) - 6) * -0x18;
  iVar1 = FUN_0203b3f4();
  iVar1 = FUN_02158ca4(0x883002,0x883000,*(undefined4 *)(iVar1 + 0x88),0x6f);
  uStack_50 = 0x28000;
  uStack_4c = 0xf3000;
  FUN_021511c8(iVar1,&uStack_4c,&uStack_50);
  FUN_0214e688(*piVar3,iVar1);
  FUN_0214f7c0(iVar1,piVar3[2]);
  piVar3[0x15] = iVar1;
  iVar1 = FUN_0203b3f4();
  iVar1 = FUN_02158ca4(0x883005,0x883000,*(undefined4 *)(iVar1 + 0x88),0x6f);
  uStack_58 = 0x38000;
  uStack_54 = 0xf3000;
  FUN_021511c8(iVar1,&uStack_54,&uStack_58);
  FUN_0214e688(*piVar3,iVar1);
  FUN_0214f7c0(iVar1,piVar3[2]);
  piVar3[0x16] = iVar1;
  iVar1 = FUN_0203b3f4();
  iVar1 = FUN_02158ca4(0x883007,0x883000,*(undefined4 *)(iVar1 + 0x88),0x6f);
  uStack_60 = 0x9e000;
  uStack_5c = 0xf3000;
  FUN_021511c8(iVar1,&uStack_5c,&uStack_60);
  FUN_0214e688(*piVar3,iVar1);
  FUN_0214f7c0(iVar1,piVar3[2]);
  piVar3[0x17] = iVar1;
  iVar1 = ALWidgetImp::Create(piVar3[4],_DAT_021d5154);
  (**(code **)(**(int **)(iVar1 + 4) + 0x24))(*(int **)(iVar1 + 4),piVar3);
  func_0x021b65e8(*(undefined4 *)(iVar1 + 4),4,FUN_0215e7b4 + 1);
  *(undefined1 *)(*(int *)(iVar1 + 4) + 0xaa) = 1;
  *(undefined1 *)(*(int *)(iVar1 + 4) + 0xab) = 0;
  *(undefined1 *)(*(int *)(iVar1 + 4) + 0xa5) = 1;
  uStack_64 = 0x65000;
  FUN_0214e6c0(iVar1,&uStack_64);
  uStack_6c = 0x28000;
  uStack_68 = 0xf3000;
  FUN_021511c8(iVar1,&uStack_68,&uStack_6c);
  uVar2 = FUN_02150a40(0,&DAT_0216c990,&DAT_02093c8c);
  FUN_02020e98(iVar1,uVar2);
  func_0x021b6214(*(undefined4 *)(iVar1 + 4),0);
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
  iVar1 = ALWidgetImp::Create(piVar3[4],_DAT_021d5154);
  (**(code **)(**(int **)(iVar1 + 4) + 0x24))(*(int **)(iVar1 + 4),piVar3);
  *(undefined1 *)(*(int *)(iVar1 + 4) + 0xab) = 0;
  func_0x021b65e8(*(undefined4 *)(iVar1 + 4),4,FUN_0215e7d4 + 1);
  *(undefined1 *)(*(int *)(iVar1 + 4) + 0xaa) = 1;
  *(undefined1 *)(*(int *)(iVar1 + 4) + 0xa5) = 1;
  uStack_70 = 0x65000;
  FUN_0214e6c0(iVar1,&uStack_70);
  uStack_78 = 0x9e000;
  uStack_74 = 0xf3000;
  FUN_021511c8(iVar1,&uStack_74,&uStack_78);
  uVar2 = FUN_02150a40(0,&DAT_0216c998,&DAT_02093c8c);
  FUN_02020e98(iVar1,uVar2);
  func_0x021b6214(*(undefined4 *)(iVar1 + 4),0);
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
  uVar5 = func_0x021bdd90();
  iVar1 = FUN_0203b424(0);
  FUN_0214f7f8(*(undefined4 *)(iVar1 + 0x88));
  uStack_40 = 0;
  uStack_3c = 0x20000;
  uStack_38 = 0x10000;
  FUN_0214dc68(&uStack_24,&uStack_38,&uStack_3c,&uStack_40);
  iStack_bc = 0;
  for (uVar7 = 0; uVar7 <= uVar5 >> 4; uVar7 = uVar7 + 1) {
    iVar1 = func_0x021ca3a4(0xe0,0x10,s_font_jskfont_aft_0216cab0,0,0);
    piVar3[iStack_bc + 5] = iVar1;
    iVar1 = *(int *)(*(int *)(iVar1 + 4) + 0x50);
    *(undefined4 *)(iVar1 + 0xc) = uStack_24;
    *(int *)(iVar1 + 0x10) = iStack_20;
    *(undefined4 *)(iVar1 + 0x14) = uStack_1c;
    FUN_0214f784(iVar1,1);
    FUN_0214e688(*piVar3,piVar3[iStack_bc + 5]);
    FUN_0214f7c0(piVar3[iStack_bc + 5],piVar3[1]);
    (**(code **)(**(int **)(piVar3[iStack_bc + 5] + 4) + 0xd8))
              (*(int **)(piVar3[iStack_bc + 5] + 4),0);
    piVar6 = *(int **)(*(int *)(piVar3[iStack_bc + 5] + 4) + 100);
    (**(code **)(*piVar6 + 0xa8))(piVar6,6 - (uVar7 & 1));
    iVar1 = FUN_020152d4();
    (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
    FUN_0214dc98(auStack_48,0,0,8,8);
    piVar6 = *(int **)(iVar1 + 4);
    func_0x021cb798(*(int *)(*(int *)(piVar3[iStack_bc + 5] + 4) + 100) + 0x40,piVar6,0xf0a2,
                    auStack_48);
    (**(code **)(*piVar6 + 0xc))();
    iStack_bc = iStack_bc + 1;
    iStack_20 = iStack_20 + 0x18000;
  }
  FUN_0214f834();
  func_0x021b65d8(*(undefined4 *)(piVar3[4] + 4));
  *(int **)(param_1 + 0x2e8) = piVar3;
  return;
}

