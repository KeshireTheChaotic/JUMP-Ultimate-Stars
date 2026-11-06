
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-GAME CommuMenuWrlsLeaderSel::CommuMenuWrlsLeaderSel_Add [source-string-entry]
   __FILE__="CommuMenuWrlsLeaderSel.cpp" __FUNCTION__="CommuMenuWrlsLeaderSel_Add" lines=[295, 345,
   988, 989, 990]; candidates ['ALWidgetImp.h:Create',
   'CommuMenuWrlsLeaderSel.cpp:CommuMenuWLLeaderSel_InitWidget_forItem',
   'CommuMenuWrlsLeaderSel.cpp:CommuMenuWrlsLeaderSel_Add']: the only entry point (_Create/_Add)
   among same-file candidates */

undefined4 CommuMenuWrlsLeaderSel::CommuMenuWrlsLeaderSel_Add(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
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
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  puVar1 = (undefined4 *)
           thunk_FUN_0201a228(0x88,s_CommuMenuWrlsLeaderSel_cpp_0216a354,
                              s_CommuMenuWrlsLeaderSel_Add_0216a2d8,0x127);
  FUN_020517fc(puVar1,0,0x88);
  thunk_FUN_02070414();
  FUN_02087688();
  CommuMenuWrlsEntryObj::CommuMenuWrlsEntryObj_Init();
  FUN_02158e40(0);
  FUN_020883b0();
  iVar2 = FUN_020310f4();
  puVar1[1] = iVar2;
  DAT_02093c04 = DAT_02093c04 + -1;
  *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4) = DAT_020a0e80;
  FUN_020314a0(*(undefined4 *)(iVar2 + 4));
  CommuMenuCommon::CMMenuCmn_PackArc_InitLoad(puVar1[1]);
  func_0x021b65bc();
  uVar3 = CommuMenuWLLeaderState::CommuMenuWLLeaderState_Create();
  puVar1[0x1f] = uVar3;
  uVar3 = FUN_02159aec();
  puVar1[0x1d] = uVar3;
  uVar3 = FUN_02028920(0);
  puVar1[4] = uVar3;
  FUN_02150678(0x20,0x40,0x4000,1);
  iVar2 = FUN_0203b414(3);
  uVar3 = CommuMenuCommon::CMMenuCmn_BaseBG_Create(*(undefined4 *)(iVar2 + 0x88));
  *puVar1 = uVar3;
  iVar2 = FUN_0203b404();
  FUN_02150e14(*(undefined4 *)(iVar2 + 0x88));
  iVar2 = FUN_0203b414(2);
  uVar3 = FUN_02150f80(DAT_0216a1f4,DAT_0216a1ec,*(undefined4 *)(iVar2 + 0x88));
  puVar1[6] = uVar3;
  iVar2 = FUN_0203b414(2);
  uVar3 = FUN_02150f54(DAT_0216a1f0,*(undefined4 *)(iVar2 + 0x88));
  puVar1[10] = uVar3;
  iVar2 = 0;
  do {
    uVar3 = FUN_020101f4((&DAT_0216a1f8)[iVar2],0);
    iVar8 = iVar2 + 1;
    puVar1[iVar2 + 8] = uVar3;
    iVar2 = iVar8;
  } while (iVar8 < 2);
  piVar4 = (int *)FUN_0215b880(0x215b8f1,0x215b971,0x215b96d);
  iVar2 = thunk_FUN_0201a228(0xbc,FUN_021699c4,s_Create_0216a2a4,0x212);
  piVar5 = (int *)0x0;
  if (iVar2 != 0) {
    piVar5 = (int *)func_0x021af358(iVar2,0x215b6e1,0);
  }
  if (piVar5[6] == 0) {
    (**(code **)(*piVar5 + 0x14))();
  }
  iVar8 = piVar5[6];
  iVar2 = *(int *)(iVar8 + 4);
  *(undefined4 *)(iVar2 + 0x94) = 0x10;
  *(undefined4 *)(iVar2 + 0x98) = 0x10;
  *(undefined4 *)(*(int *)(iVar8 + 4) + 0x9c) = 0xb;
  func_0x021b3b7c(1,0,piVar4);
  _DAT_021d5154 = 1;
  iVar2 = FUN_0214f898(piVar4,0x31305053);
  iVar2 = *(int *)(*(int *)(iVar2 + 4) + 100);
  piVar5 = *(int **)(iVar2 + 0x2c);
  if (piVar5 == (int *)0x0) {
    piVar5 = (int *)FUN_02036430(*(undefined4 *)(iVar2 + 0x20));
  }
  if (piVar5[6] == 0) {
    (**(code **)(*piVar5 + 0x10))();
  }
  iVar2 = CommonPaletteAnime::CommonPaletteAnime_Create(piVar5[6],0x11,4,5,0x80);
  puVar1[0x19] = iVar2;
  *(undefined2 *)(iVar2 + 0x18) = 0;
  *(undefined2 *)(iVar2 + 0x16) = 0x8df;
  *(undefined1 *)(iVar2 + 0x1a) = 0x1e;
  *(undefined1 *)(iVar2 + 0x1c) = 1;
  *(undefined1 *)(iVar2 + 0x1b) = 1;
  (**(code **)(*piVar4 + 8))();
  piVar5 = (int *)FUN_0215b880(0x215baf1,0x215bb4d,0);
  iVar2 = piVar5[1];
  *(undefined2 *)(iVar2 + 0xbc) = 0x10;
  *(undefined2 *)(iVar2 + 0xbe) = 3;
  func_0x021b3b7c(2,0,piVar5,0);
  (**(code **)(*piVar5 + 8))();
  uVar3 = FUN_02150b44(*puVar1);
  puVar1[0xb] = uVar3;
  iVar2 = FUN_0203b404();
  FUN_02150b7c(*puVar1,0x8e0000,0,*(undefined4 *)(iVar2 + 0x88));
  iVar2 = FUN_0203b3e4();
  iVar2 = FUN_02150bdc(*puVar1,*(undefined4 *)(iVar2 + 0x88));
  (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),puVar1);
  FUN_02027834(*(undefined4 *)(iVar2 + 4),8,0x215b689);
  func_0x021b4104(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 4),4);
  *(undefined4 *)(*(int *)(iVar2 + 4) + 0x124) = 2;
  puVar1[0xf] = iVar2;
  iVar2 = ALWidgetBaseImp::Create(puVar1,puVar1[0xb]);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  *(undefined4 *)(*(int *)(iVar2 + 4) + 0x124) = 0x101;
  puVar1[0xc] = iVar2;
  func_0x021b6214(*(undefined4 *)(iVar2 + 4),1);
  func_0x021b7744(*(undefined4 *)(iVar2 + 4),0);
  FUN_02023940(*(undefined4 *)(iVar2 + 4));
  FUN_0214f2a4(&local_30,iVar2,s_Position_0216a370);
  FUN_0214f2a4(&local_38,iVar2,&DAT_0216a37c);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  local_40 = 0xc0000;
  local_3c = 0;
  FUN_0214f218(iVar2,&local_3c,&local_40);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_30,0,local_2c);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_30,0x10,local_2c);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_38,0,local_34);
  local_48 = 0;
  local_44 = 0;
  FUN_0214f218(iVar2,&local_44,&local_48);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_30,0x18,local_2c);
  piVar5 = *(int **)(*(int *)(iVar2 + 4) + 0x68);
  (**(code **)(*piVar5 + 0xac))(piVar5,0);
  FUN_02023c80(*(undefined4 *)(iVar2 + 4),local_30,0x494c,local_2c);
  FUN_02023c70(*(undefined4 *)(iVar2 + 4),1);
  FUN_020239a0(*(undefined4 *)(iVar2 + 4));
  local_50 = 0;
  local_4c = 0;
  FUN_0214f218(iVar2,&local_4c,&local_50);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_30,0,local_2c);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_38,0,local_34);
  piVar5 = *(int **)(*(int *)(iVar2 + 4) + 0x68);
  (**(code **)(*piVar5 + 0xac))(piVar5,0);
  FUN_02023c70(*(undefined4 *)(iVar2 + 4),2);
  func_0x021b4034(*(undefined4 *)(iVar2 + 4),1);
  func_0x021b3f78(*(undefined4 *)(iVar2 + 4),2);
  func_0x021b65e8(*(undefined4 *)(iVar2 + 4),0x10,0x215b3d9);
  func_0x021b6760(*(undefined4 *)(iVar2 + 4),0x10,0x215b455);
  iVar8 = ALWidgetImp::Create(iVar2,_DAT_021d5154);
  (**(code **)(**(int **)(iVar8 + 4) + 0xd8))(*(int **)(iVar8 + 4),1);
  (**(code **)(**(int **)(iVar8 + 4) + 0x24))(*(int **)(iVar8 + 4),puVar1);
  *(undefined4 *)(*(int *)(iVar8 + 4) + 0x124) = 3;
  puVar1[0x10] = iVar8;
  iVar9 = puVar1[6];
  if (iVar9 != 0) {
    (**(code **)(**(int **)(iVar9 + 4) + 0xd8))(*(int **)(iVar9 + 4),1);
    FUN_0214f48c(iVar8,iVar9);
  }
  uVar3 = _DAT_021d5154;
  uVar7 = *(undefined4 *)(iVar2 + 4);
  iVar2 = thunk_FUN_0201a228(400,s_ALWidgetImp_h_021699e4,s_Create_0216a294,0x159);
  if (iVar2 != 0) {
    func_0x021ae114(iVar2,uVar7,uVar3,ALWidgetImp::CreateDrawFunc);
  }
  iVar2 = FUN_0214f340();
  *(undefined4 *)(*(int *)(iVar2 + 4) + 0x124) = 0xef0000;
  func_0x021b6214(*(undefined4 *)(iVar2 + 4),0);
  iVar8 = *(int *)(iVar2 + 4);
  *(undefined4 *)(iVar8 + 0x170) = 0xa8;
  *(undefined4 *)(iVar8 + 0x174) = 0x10;
  *(undefined4 *)(*(int *)(iVar2 + 4) + 0x180) = 6;
  FUN_02152468(iVar2,puVar1[0x10]);
  local_60 = 0x48000;
  local_64 = 0x20000;
  FUN_0214f218(iVar2,&local_64,&local_60);
  FUN_021524a0(iVar2,0);
  *(undefined1 *)(*(int *)(iVar2 + 4) + 0x114) = 1;
  (**(code **)(**(int **)(iVar2 + 4) + 0x1a8))();
  FUN_02023940(*(undefined4 *)(iVar2 + 4));
  FUN_0214f2a4(&local_8c,iVar2,&DAT_0216a37c);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_8c,0,local_88);
  piVar5 = *(int **)(*(int *)(iVar2 + 4) + 0x68);
  (**(code **)(*piVar5 + 0xac))(piVar5,0);
  FUN_02023c70(*(undefined4 *)(iVar2 + 4),0);
  func_0x021b3fc4(*(undefined4 *)(iVar2 + 4),0);
  (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),puVar1);
  FUN_02028384(*(undefined4 *)(iVar2 + 4),0x215be89);
  local_5c = 0x84000;
  FUN_0214ed20(iVar2,&local_5c);
  FUN_02027834(*(undefined4 *)(iVar2 + 4),8,0x215b11d);
  func_0x021b4104(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 4),4);
  *(undefined4 *)(*(int *)(iVar2 + 4) + 0x13c) = 1;
  puVar1[0x11] = iVar2;
  iVar8 = *(int *)(puVar1[0x1d] + 4);
  puVar1[0x15] = iVar8;
  iVar8 = iVar8 + 6;
  puVar1[0x16] = iVar8;
  uVar3 = thunk_FUN_0201a228(iVar8 * 4,s_CommuMenuWrlsLeaderSel_cpp_0216a354,
                             s_CommuMenuWLLeaderSel_InitWidget__0216a32c,0x3dc);
  puVar1[0x12] = uVar3;
  uVar3 = thunk_FUN_0201a228(puVar1[0x16] << 2,s_CommuMenuWrlsLeaderSel_cpp_0216a354,
                             s_CommuMenuWLLeaderSel_InitWidget__0216a32c,0x3dd);
  puVar1[0x13] = uVar3;
  uVar3 = thunk_FUN_0201a228(puVar1[0x16] << 2,s_CommuMenuWrlsLeaderSel_cpp_0216a354,
                             s_CommuMenuWLLeaderSel_InitWidget__0216a32c,0x3de);
  puVar1[0x14] = uVar3;
  _DAT_021d5154 = 2;
  for (uVar10 = 0; (int)uVar10 < (int)puVar1[0x16]; uVar10 = uVar10 + 1) {
    func_0x021ae3a4(*(undefined4 *)(iVar2 + 4));
    iVar8 = FUN_0214f340();
    *(int *)(puVar1[0x12] + uVar10 * 4) = iVar8;
    FUN_021524a0(iVar8,0);
    (**(code **)(**(int **)(iVar8 + 4) + 0x24))(*(int **)(iVar8 + 4),puVar1);
    (**(code **)(**(int **)(iVar8 + 4) + 0xd8))(*(int **)(iVar8 + 4),1);
    *(uint *)(*(int *)(iVar8 + 4) + 0x124) = uVar10 + 0x800;
    iVar9 = ALWidgetImp::Create(iVar8,_DAT_021d5154);
    iVar6 = FUN_0203b414(2);
    DAT_02093c08 = DAT_02093c08 + -1;
    uVar3 = *(undefined4 *)(*(int *)(iVar6 + 0x88) + 4);
    (&DAT_020a16d0)[DAT_02093c08] = DAT_020a0dd0;
    DAT_020a0dd0 = uVar3;
    FUN_02032a4c(*(undefined4 *)(puVar1[10] + 4));
    iVar6 = FUN_0214f340();
    *(undefined4 *)(*(int *)(iVar6 + 4) + 0x54) = 0x67625053;
    local_58 = 0xc4000;
    FUN_0214f27c(iVar6,&local_58);
    (**(code **)(**(int **)(iVar6 + 4) + 0xd8))(*(int **)(iVar6 + 4),1);
    FUN_02152468(iVar6,iVar9);
    FUN_0214f48c(iVar9,iVar6);
    local_54 = 0xc4000;
    FUN_0214f27c(iVar9,&local_54);
    DAT_020a0dd0 = (&DAT_020a16d0)[DAT_02093c08];
    DAT_02093c08 = DAT_02093c08 + 1;
    *(int *)(puVar1[0x13] + uVar10 * 4) = iVar9;
    (**(code **)(**(int **)(iVar9 + 4) + 0x24))(*(int **)(iVar9 + 4),puVar1);
    *(uint *)(*(int *)(iVar9 + 4) + 0x124) = uVar10;
    (**(code **)(**(int **)(iVar9 + 4) + 0xd8))(*(int **)(iVar9 + 4),1);
    func_0x021b6214(*(undefined4 *)(iVar9 + 4),0);
    func_0x021b7744(*(undefined4 *)(iVar9 + 4),1);
    *(undefined1 *)(*(int *)(iVar9 + 4) + 0xac) = 0;
    FUN_02023940(*(undefined4 *)(iVar9 + 4));
    FUN_0214f2a4(&local_84,iVar9,&DAT_0216a37c);
    (**(code **)(**(int **)(iVar9 + 4) + 0xd8))(*(int **)(iVar9 + 4),1);
    FUN_02023c60(*(undefined4 *)(iVar9 + 4),local_84,0,local_80);
    piVar5 = *(int **)(*(int *)(iVar9 + 4) + 0x68);
    (**(code **)(*piVar5 + 0xac))(piVar5,0);
    FUN_02023c70(*(undefined4 *)(iVar9 + 4),0);
    func_0x021b3fc4(*(undefined4 *)(iVar9 + 4),0);
    FUN_02027834(*(undefined4 *)(iVar9 + 4),8,0x215b11d);
    func_0x021b4104(*(undefined4 *)(iVar9 + 4),*(undefined4 *)(iVar9 + 4),7);
    local_7c = DAT_0216a208;
    local_78 = DAT_0216a20c;
    uVar3 = FUN_0214f3bc(0,&local_7c,&DAT_02093c8c);
    FUN_02020e98(iVar9,uVar3);
    uVar3 = FUN_0214f474(&local_7c);
    uVar7 = FUN_0214f45c(&local_7c);
    func_0x021b5900(*(undefined4 *)(iVar9 + 4),uVar7,uVar3);
    *(undefined4 *)(*(int *)(iVar9 + 4) + 0xec) = 0x215b295;
    iVar8 = ALWidgetImp::Create(iVar8,_DAT_021d5154);
    (**(code **)(**(int **)(iVar8 + 4) + 0xd8))(*(int **)(iVar8 + 4),0);
    func_0x021b6214(*(undefined4 *)(iVar8 + 4),0);
    func_0x021b7744(*(undefined4 *)(iVar8 + 4),1);
    *(undefined1 *)(*(int *)(iVar8 + 4) + 0xac) = 0;
    *(int *)(puVar1[0x14] + uVar10 * 4) = iVar8;
    (**(code **)(**(int **)(iVar8 + 4) + 0x24))(*(int **)(iVar8 + 4),puVar1);
    *(uint *)(*(int *)(iVar8 + 4) + 0x124) = uVar10 | 0x2000;
    FUN_02027834(*(undefined4 *)(iVar8 + 4),8,0x215b11d);
    func_0x021b4104(*(undefined4 *)(iVar8 + 4),*(undefined4 *)(iVar8 + 4),7);
    local_74 = DAT_0216a210;
    local_70 = DAT_0216a214;
    uVar3 = FUN_0214f3bc(0,&local_74,&DAT_02093c8c);
    FUN_02020e98(iVar8,uVar3);
    uVar3 = FUN_0214f474(&local_74);
    uVar7 = FUN_0214f45c(&local_74);
    func_0x021b5900(*(undefined4 *)(iVar8 + 4),uVar7,uVar3);
    *(undefined4 *)(*(int *)(iVar8 + 4) + 0xec) = 0x215b295;
    FUN_02023940(*(undefined4 *)(iVar8 + 4));
    FUN_0214f2a4(&local_6c,iVar8,&DAT_0216a37c);
    (**(code **)(**(int **)(iVar8 + 4) + 0xd8))(*(int **)(iVar8 + 4),1);
    FUN_02023c60(*(undefined4 *)(iVar8 + 4),local_6c,0,local_68);
    piVar5 = *(int **)(*(int *)(iVar8 + 4) + 0x68);
    (**(code **)(*piVar5 + 0xac))(piVar5,0);
    FUN_02023c70(*(undefined4 *)(iVar8 + 4),0);
    func_0x021b3fc4(*(undefined4 *)(iVar8 + 4),0);
  }
  *(undefined4 *)(puVar1[0x1d] + 0xc) = 0;
  iVar2 = FUN_0215bcac(puVar1);
  if (iVar2 != 0) {
    FUN_0215bcd4(puVar1);
    FUN_0215bd4c(puVar1);
  }
  FUN_02150dbc(puVar1[1]);
  uVar3 = func_0x021bcf1c(10,0,1,0xffffffff);
  puVar1[0x18] = uVar3;
  func_0x021bd730(uVar3,0x62,0);
  uVar3 = func_0x021ba49c(0,1,1);
  puVar1[0x1a] = uVar3;
  (*DAT_020a0e18)();
  FUN_02073ebc(2,1);
  FUN_020734e0(5);
  FUN_0207361c(5,0);
  iVar2 = FUN_02026f94();
  puVar1[2] = iVar2;
  (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),puVar1);
  FUN_02028384(*(undefined4 *)(puVar1[2] + 4),0x215b049);
  local_28 = 0x80000;
  FUN_0214ed20(puVar1[2],&local_28);
  func_0x021b65bc();
  (**(code **)(**(int **)(puVar1[0xc] + 4) + 0x148))(*(int **)(puVar1[0xc] + 4),0x10);
  (**(code **)(**(int **)(puVar1[0xf] + 4) + 0x148))(*(int **)(puVar1[0xf] + 4),8);
  *(undefined1 *)(DAT_020a0f64 + 0x430) = 1;
  return puVar1[1];
}

