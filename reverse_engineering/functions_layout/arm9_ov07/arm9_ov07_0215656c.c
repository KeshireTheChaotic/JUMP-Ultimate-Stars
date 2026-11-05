
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0215656c(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  int *piVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
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
           thunk_FUN_0201a228(0x7c,s_CommuMenuCmnLeaderSel_cpp_02169f34,
                              s_CommuMenuCmnLeaderSel_Add_02169ef0,0xe0);
  FUN_020517fc(puVar1,0,0x7c);
  iVar2 = FUN_020310f4();
  puVar1[1] = iVar2;
  (**(code **)(**(int **)(iVar2 + 4) + 0x18))(*(int **)(iVar2 + 4),puVar1);
  iVar2 = puVar1[1];
  DAT_02093c04 = DAT_02093c04 + -1;
  *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4) = DAT_020a0e80;
  FUN_020314a0(*(undefined4 *)(iVar2 + 4));
  CommuMenuCommon::CMMenuCmn_PackArc_InitLoad(puVar1[1]);
  func_0x021b65bc();
  FUN_02087688();
  puVar1[0x1c] = param_1;
  if (*(code **)(param_1 + 0x14) != (code *)0x0) {
    (**(code **)(param_1 + 0x14))(*(undefined4 *)(param_1 + 0x10));
  }
  uVar3 = FUN_02028920(0);
  puVar1[4] = uVar3;
  *(undefined1 *)((int)puVar1 + 0x6d) = 1;
  FUN_02150678(0x20,0x40,0x4000);
  iVar2 = FUN_0203b414(3);
  uVar3 = CommuMenuCommon::CMMenuCmn_BaseBG_Create(*(undefined4 *)(iVar2 + 0x88));
  *puVar1 = uVar3;
  iVar2 = FUN_0203b404();
  FUN_02150e14(*(undefined4 *)(iVar2 + 0x88));
  iVar2 = FUN_0203b414(2);
  uVar3 = FUN_02150f80(DAT_02169df4,DAT_02169dec,*(undefined4 *)(iVar2 + 0x88));
  puVar1[6] = uVar3;
  iVar2 = FUN_0203b414(2);
  uVar3 = FUN_02150f54(DAT_02169df0,*(undefined4 *)(iVar2 + 0x88));
  puVar1[10] = uVar3;
  iVar2 = 0;
  do {
    uVar3 = FUN_020101f4((&DAT_02169df8)[iVar2],0);
    iVar10 = iVar2 + 1;
    puVar1[iVar2 + 8] = uVar3;
    iVar2 = iVar10;
  } while (iVar10 < 2);
  iVar2 = thunk_FUN_0201a228(0xcc,s_ALWidget_inl_02169644,s_Create_02169e7c,0x1de);
  piVar4 = (int *)0x0;
  if (iVar2 != 0) {
    piVar4 = (int *)func_0x021af26c(iVar2,0x215775d,0x21577b9,0);
  }
  if (piVar4[6] == 0) {
    (**(code **)(*piVar4 + 0x14))();
  }
  piVar8 = (int *)piVar4[6];
  iVar2 = thunk_FUN_0201a228(0xbc,FUN_021699c4,&DAT_02169e8c,0x212);
  piVar4 = (int *)0x0;
  if (iVar2 != 0) {
    piVar4 = (int *)func_0x021af358(iVar2,0x21575bd,0);
  }
  if (piVar4[6] == 0) {
    (**(code **)(*piVar4 + 0x14))();
  }
  iVar10 = piVar4[6];
  iVar2 = *(int *)(iVar10 + 4);
  *(undefined4 *)(iVar2 + 0x94) = 0x10;
  *(undefined4 *)(iVar2 + 0x98) = 0x10;
  *(undefined4 *)(*(int *)(iVar10 + 4) + 0x9c) = 0xb;
  func_0x021b3b7c(1,0,piVar8);
  _DAT_021d5154 = 1;
  iVar2 = FUN_0214f898(piVar8,0x31305053);
  iVar2 = *(int *)(*(int *)(iVar2 + 4) + 100);
  piVar4 = *(int **)(iVar2 + 0x2c);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)FUN_02036430(*(undefined4 *)(iVar2 + 0x20));
  }
  if (piVar4[6] == 0) {
    (**(code **)(*piVar4 + 0x10))();
  }
  iVar2 = CommonPaletteAnime::CommonPaletteAnime_Create(piVar4[6],0x11,4,5,0x80);
  puVar1[0x18] = iVar2;
  *(undefined2 *)(iVar2 + 0x18) = 0;
  *(undefined2 *)(iVar2 + 0x16) = 0x8df;
  *(undefined1 *)(iVar2 + 0x1a) = 0x1e;
  *(undefined1 *)(iVar2 + 0x1c) = 1;
  *(undefined1 *)(iVar2 + 0x1b) = 1;
  (**(code **)(*piVar8 + 8))();
  uVar3 = FUN_02150b44(*puVar1);
  puVar1[0xb] = uVar3;
  iVar2 = FUN_0203b404();
  FUN_02150b7c(*puVar1,0x8e0000,0,*(undefined4 *)(iVar2 + 0x88));
  iVar2 = FUN_0203b3e4();
  iVar2 = FUN_02150bdc(*puVar1,*(undefined4 *)(iVar2 + 0x88));
  (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),puVar1);
  FUN_02027834(*(undefined4 *)(iVar2 + 4),8,0x215749d);
  func_0x021b4104(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 4),4);
  *(undefined4 *)(*(int *)(iVar2 + 4) + 0x124) = 2;
  puVar1[0xf] = iVar2;
  iVar2 = ALWidgetBaseImp::Create(puVar1,puVar1[0xb]);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  *(undefined4 *)(*(int *)(iVar2 + 4) + 0x124) = 0x101;
  puVar1[0xc] = iVar2;
  func_0x021b6214(*(undefined4 *)(iVar2 + 4),1);
  FUN_02023940(*(undefined4 *)(iVar2 + 4));
  FUN_0214f2a4(&local_30,iVar2,s_Position_02169f50);
  FUN_0214f2a4(&local_38,iVar2,&DAT_02169f5c);
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
  piVar4 = *(int **)(*(int *)(iVar2 + 4) + 0x68);
  (**(code **)(*piVar4 + 0xac))(piVar4,0);
  FUN_02023c80(*(undefined4 *)(iVar2 + 4),local_30,0x494c,local_2c);
  FUN_02023c70(*(undefined4 *)(iVar2 + 4),1);
  FUN_020239a0(*(undefined4 *)(iVar2 + 4));
  local_50 = 0;
  local_4c = 0;
  FUN_0214f218(iVar2,&local_4c,&local_50);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_30,0,local_2c);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_38,0,local_34);
  piVar4 = *(int **)(*(int *)(iVar2 + 4) + 0x68);
  (**(code **)(*piVar4 + 0xac))(piVar4,0);
  FUN_02023c70(*(undefined4 *)(iVar2 + 4),2);
  func_0x021b4034(*(undefined4 *)(iVar2 + 4),1);
  func_0x021b3f78(*(undefined4 *)(iVar2 + 4),2);
  func_0x021b65e8(*(undefined4 *)(iVar2 + 4),0x10,0x21573e5);
  func_0x021b6760(*(undefined4 *)(iVar2 + 4),0x10,0x2157455);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),0);
  iVar10 = ALWidgetImp::Create(iVar2,_DAT_021d5154);
  (**(code **)(**(int **)(iVar10 + 4) + 0xd8))(*(int **)(iVar10 + 4),1);
  (**(code **)(**(int **)(iVar10 + 4) + 0x24))(*(int **)(iVar10 + 4),puVar1);
  *(undefined4 *)(*(int *)(iVar10 + 4) + 0x124) = 3;
  puVar1[0x10] = iVar10;
  iVar11 = puVar1[6];
  if (iVar11 != 0) {
    (**(code **)(**(int **)(iVar11 + 4) + 0xd8))(*(int **)(iVar11 + 4),1);
    FUN_0214f48c(iVar10,iVar11);
  }
  uVar3 = _DAT_021d5154;
  uVar9 = *(undefined4 *)(iVar2 + 4);
  iVar2 = thunk_FUN_0201a228(400,s_ALWidgetImp_h_021699e4,&DAT_02169e84,0x159);
  if (iVar2 != 0) {
    func_0x021ae114(iVar2,uVar9,uVar3,ALWidgetImp::CreateDrawFunc);
  }
  iVar2 = FUN_0214f340();
  func_0x021b6214(*(undefined4 *)(iVar2 + 4),0);
  iVar10 = *(int *)(iVar2 + 4);
  *(undefined4 *)(iVar10 + 0x170) = 0x90;
  *(undefined4 *)(iVar10 + 0x174) = 0x10;
  *(undefined4 *)(*(int *)(iVar2 + 4) + 0x180) = 6;
  FUN_02152468(iVar2,puVar1[0x10]);
  local_60 = 0x48000;
  local_64 = 0x30000;
  FUN_0214f218(iVar2,&local_64,&local_60);
  FUN_021524a0(iVar2,0);
  *(undefined1 *)(*(int *)(iVar2 + 4) + 0x114) = 1;
  (**(code **)(**(int **)(iVar2 + 4) + 0x1a8))();
  (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),puVar1);
  FUN_02028384(*(undefined4 *)(iVar2 + 4),0x21578dd);
  local_5c = 0x80000;
  FUN_0214ed20(iVar2,&local_5c);
  *(undefined4 *)(*(int *)(iVar2 + 4) + 0x13c) = 1;
  puVar1[0x11] = iVar2;
  iVar10 = *(int *)(puVar1[0x1c] + 4);
  puVar1[0x14] = iVar10;
  iVar10 = iVar10 + 6;
  puVar1[0x15] = iVar10;
  uVar3 = thunk_FUN_0201a228(iVar10 * 4,s_CommuMenuCmnLeaderSel_cpp_02169f34,
                             s_CommuMenuLeaderSel_InitWidget_fo_02169f0c,0x2e6);
  puVar1[0x12] = uVar3;
  uVar3 = thunk_FUN_0201a228(puVar1[0x15] << 2,s_CommuMenuCmnLeaderSel_cpp_02169f34,
                             s_CommuMenuLeaderSel_InitWidget_fo_02169f0c,0x2e7);
  puVar1[0x13] = uVar3;
  for (iVar10 = 0; iVar10 < (int)puVar1[0x15]; iVar10 = iVar10 + 1) {
    func_0x021ae3a4(*(undefined4 *)(iVar2 + 4));
    iVar11 = FUN_0214f340();
    *(int *)(puVar1[0x12] + iVar10 * 4) = iVar11;
    FUN_021524a0(iVar11,0);
    (**(code **)(**(int **)(iVar11 + 4) + 0x24))(*(int **)(iVar11 + 4),puVar1);
    piVar4 = *(int **)(iVar11 + 4);
    if (iVar10 < 6) {
      (**(code **)(*piVar4 + 0xd8))(piVar4,1);
    }
    else {
      (**(code **)(*piVar4 + 0xd8))(piVar4,0);
    }
    iVar5 = ALWidgetImp::Create(iVar11,_DAT_021d5154);
    iVar6 = FUN_0203b414(2);
    DAT_02093c08 = DAT_02093c08 + -1;
    uVar3 = *(undefined4 *)(*(int *)(iVar6 + 0x88) + 4);
    (&DAT_020a16d0)[DAT_02093c08] = DAT_020a0dd0;
    DAT_020a0dd0 = uVar3;
    FUN_02032a4c(*(undefined4 *)(puVar1[10] + 4));
    iVar6 = FUN_0214f340();
    FUN_021524c8(iVar6,2);
    *(undefined4 *)(*(int *)(iVar6 + 4) + 0x54) = 0x67625053;
    local_58 = 0xc4000;
    FUN_0214f27c(iVar6,&local_58);
    (**(code **)(**(int **)(iVar6 + 4) + 0xd8))(*(int **)(iVar6 + 4),1);
    FUN_02152468(iVar6,iVar5);
    FUN_0214f48c(iVar5,iVar6);
    local_54 = 0xc4000;
    DAT_020a0dd0 = (&DAT_020a16d0)[DAT_02093c08];
    DAT_02093c08 = DAT_02093c08 + 1;
    FUN_0214f27c(iVar5,&local_54);
    (**(code **)(**(int **)(iVar5 + 4) + 0xd8))(*(int **)(iVar5 + 4),1);
    func_0x021b6214(*(undefined4 *)(iVar5 + 4),1);
    *(undefined1 *)(*(int *)(iVar5 + 4) + 0xac) = 0;
    *(int *)(puVar1[0x13] + iVar10 * 4) = iVar5;
    (**(code **)(**(int **)(iVar5 + 4) + 0x24))(*(int **)(iVar5 + 4),puVar1);
    *(int *)(*(int *)(iVar5 + 4) + 0x124) = iVar10;
    FUN_02023940(*(undefined4 *)(iVar5 + 4));
    FUN_0214f2a4(&local_6c,iVar5,&DAT_02169f5c);
    (**(code **)(**(int **)(iVar5 + 4) + 0xd8))(*(int **)(iVar5 + 4),1);
    FUN_02023c60(*(undefined4 *)(iVar5 + 4),local_6c,0,local_68);
    piVar4 = *(int **)(*(int *)(iVar5 + 4) + 0x68);
    (**(code **)(*piVar4 + 0xac))(piVar4,0);
    FUN_02023c70(*(undefined4 *)(iVar5 + 4),0);
    func_0x021b3fc4(*(undefined4 *)(iVar5 + 4),0);
    FUN_02027834(*(undefined4 *)(iVar5 + 4),8,0x21574f1);
    func_0x021b4104(*(undefined4 *)(iVar5 + 4),*(undefined4 *)(iVar5 + 4),7);
    uVar3 = FUN_0214f3bc(0,&DAT_02169e00,&DAT_02093c8c);
    FUN_02020e98(iVar5,uVar3);
    uVar3 = FUN_0214f474(&DAT_02169e00);
    uVar9 = FUN_0214f45c(&DAT_02169e00);
    func_0x021b5900(*(undefined4 *)(iVar5 + 4),uVar9,uVar3);
    (**(code **)(**(int **)(iVar11 + 4) + 0x24))(*(int **)(iVar11 + 4),puVar1);
    *(int *)(*(int *)(iVar11 + 4) + 0x124) = iVar10;
  }
  *(undefined4 *)(puVar1[0x1c] + 0xc) = 0;
  FUN_02150dbc(puVar1[1]);
  uVar3 = func_0x021bcf1c(10,0,1,0xffffffff);
  puVar1[0x17] = uVar3;
  if (*(char *)(puVar1[0x1c] + 2) == '\0') {
    func_0x021bd730(puVar1[0x17],0x62,0);
  }
  else {
    func_0x021bd730(puVar1[0x17],99,0);
  }
  uVar3 = func_0x021ba49c(0,1,1);
  puVar1[0x19] = uVar3;
  pcVar7 = *(code **)(puVar1[0x1c] + 0x28);
  if (pcVar7 != (code *)0x0) {
    (*pcVar7)(*(undefined4 *)(puVar1[0x1c] + 0x10),puVar1[0x19]);
  }
  (*DAT_020a0e18)();
  FUN_02073ebc(2,1);
  FUN_020734e0(5);
  FUN_0207361c(5,0);
  iVar2 = FUN_02026f94();
  puVar1[2] = iVar2;
  (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),puVar1);
  FUN_02028384(*(undefined4 *)(puVar1[2] + 4),0x2157149);
  local_28 = 0x80000;
  FUN_0214ed20(puVar1[2],&local_28);
  func_0x021b65bc();
  if (*(int *)(puVar1[0x1c] + 0x30) == 0) {
    (**(code **)(**(int **)(puVar1[0xc] + 4) + 0x148))(*(int **)(puVar1[0xc] + 4),0x10);
  }
  (**(code **)(**(int **)(puVar1[0xf] + 4) + 0x148))(*(int **)(puVar1[0xf] + 4),8);
  iVar2 = thunk_FUN_0208c51c();
  if (iVar2 == 0) {
    *(undefined1 *)(DAT_020a0f64 + 0x430) = 1;
  }
  return puVar1[1];
}

