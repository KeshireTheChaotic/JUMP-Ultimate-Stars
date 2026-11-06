
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-GAME JQuizTop::JQuizTop_Add [source-string] __FILE__="JQuizTop.cpp"
   __FUNCTION__="JQuizTop_Add" lines=[62, 174] passed to 2 source-location call(s); header inlines:
   ALWidgetImp.h:Create */

undefined4 JQuizTop::JQuizTop_Add(int param_1)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int extraout_r1;
  int *piVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 local_d8;
  uint local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  int local_88 [18];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  puVar2 = (undefined4 *)
           thunk_FUN_0201a228(0xcc,s_JQuizTop_cpp_02160c1c,s_JQuizTop_Add_02160bfc,0xae);
  FUN_0214fadc(puVar2,0xcc);
  FUN_0214fc10();
  if (param_1 == 0) {
    param_1 = 1;
  }
  puVar2[0x2e] = param_1;
  func_0x021b65bc();
  FUN_0214d208(0x20,0x40,0x2000);
  iVar3 = FUN_0203b414(3);
  uVar4 = JQuizCommon::JQuizCmn_BaseBG_Create(*(undefined4 *)(iVar3 + 0x88));
  puVar2[2] = uVar4;
  iVar3 = FUN_0203b414(2);
  uVar4 = FUN_0214e880(s_jquiz_top00_atm_02160c2c,s_jquiz_top00_dig_02160c3c,
                       *(undefined4 *)(iVar3 + 0x88));
  puVar2[5] = uVar4;
  uVar4 = FUN_020101f4(s_Common_button_aar_02160c4c,0);
  puVar2[9] = uVar4;
  uVar4 = FUN_020101f4(s_jquiz_top_obj_3d_aar_02160c60,0);
  puVar2[10] = uVar4;
  iVar3 = thunk_FUN_0201a228(0xcc,s_ALWidget_inl_02160c0c,s_Create_02160b78,0x1de);
  piVar5 = (int *)0x0;
  if (iVar3 != 0) {
    piVar5 = (int *)func_0x021af26c(iVar3,FUN_02151db8,FUN_02151e04,FUN_02151eb8);
  }
  if (piVar5[6] == 0) {
    (**(code **)(*piVar5 + 0x14))();
  }
  piVar10 = (int *)piVar5[6];
  iVar3 = piVar10[1];
  *(undefined2 *)(iVar3 + 0xbc) = 0x10;
  *(undefined2 *)(iVar3 + 0xbe) = 3;
  func_0x021b3b7c(1,0,piVar10,0);
  _DAT_021d5154 = 1;
  iVar3 = FUN_02151d90(piVar10,0x31305053);
  iVar3 = *(int *)(*(int *)(iVar3 + 4) + 100);
  piVar5 = *(int **)(iVar3 + 0x2c);
  if (piVar5 == (int *)0x0) {
    piVar5 = (int *)FUN_02036430(*(undefined4 *)(iVar3 + 0x20));
  }
  if (piVar5[6] == 0) {
    (**(code **)(*piVar5 + 0x10))();
  }
  iVar3 = CommonPaletteAnime::CommonPaletteAnime_Create(piVar5[6],0x11,2,5,0x80);
  puVar2[0x2f] = iVar3;
  *(undefined2 *)(iVar3 + 0x18) = 0;
  *(undefined2 *)(iVar3 + 0x16) = 0x7fff;
  *(undefined1 *)(iVar3 + 0x1a) = 0x1e;
  *(undefined1 *)(iVar3 + 0x1c) = 1;
  *(undefined1 *)(iVar3 + 0x1b) = 1;
  (**(code **)(*piVar10 + 8))();
  iVar3 = FUN_0214e4b0(puVar2[2]);
  puVar2[0x11] = iVar3;
  func_0x021b6214(*(undefined4 *)(iVar3 + 4),1);
  iVar3 = FUN_0203b404();
  FUN_0214e4e8(puVar2[2],0x810000,0,*(undefined4 *)(iVar3 + 0x88));
  iVar3 = FUN_0203b3e4();
  iVar3 = FUN_0214e548(puVar2[2],*(undefined4 *)(iVar3 + 0x88));
  (**(code **)(**(int **)(iVar3 + 4) + 0x24))(*(int **)(iVar3 + 4),puVar2);
  FUN_02027834(*(undefined4 *)(iVar3 + 4),8,FUN_02151f0c);
  func_0x021b4104(*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 4),4);
  *(undefined4 *)(*(int *)(iVar3 + 4) + 0x124) = 2;
  puVar2[0x1b] = iVar3;
  uVar4 = FUN_0214e4b0(puVar2[2]);
  iVar3 = ALWidgetBaseImp::Create(puVar2,uVar4);
  puVar2[0x12] = iVar3;
  func_0x021b6214(*(undefined4 *)(iVar3 + 4),1);
  FUN_02023940(*(undefined4 *)(iVar3 + 4));
  FUN_02151ebc(&local_c8,iVar3,s_Position_02160c78);
  FUN_02151ebc(&local_c0,iVar3,&DAT_02160c84);
  (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),1);
  local_b4 = 0xfff40000;
  local_b8 = 0;
  FUN_0214e1b8(iVar3,&local_b8,&local_b4);
  FUN_02023c60(*(undefined4 *)(iVar3 + 4),local_c8,0,local_c4);
  FUN_02023c60(*(undefined4 *)(iVar3 + 4),local_c0,0,local_bc);
  local_ac = 0x8000;
  local_b0 = 0;
  FUN_0214e1b8(iVar3,&local_b0,&local_ac);
  FUN_02023c60(*(undefined4 *)(iVar3 + 4),local_c8,8,local_c4);
  piVar5 = *(int **)(*(int *)(iVar3 + 4) + 0x68);
  (**(code **)(*piVar5 + 0xac))(piVar5,0);
  FUN_02023c80(*(undefined4 *)(iVar3 + 4),local_c8,0x494c,local_c4);
  FUN_02023c70(*(undefined4 *)(iVar3 + 4),1);
  func_0x021b4034(*(undefined4 *)(iVar3 + 4),1);
  func_0x021b6760(*(undefined4 *)(iVar3 + 4),0x10,FUN_02151f8c);
  uVar4 = _DAT_021d5154;
  uVar11 = *(undefined4 *)(iVar3 + 4);
  iVar3 = thunk_FUN_0201a228(0x134,s_ALWidgetImp_h_021608d4,s_Create_02160b68,0x3e);
  if (iVar3 != 0) {
    func_0x021af0f8(iVar3,uVar11,uVar4,ALWidgetBaseImp::CreateDrawFunc);
  }
  iVar3 = FUN_0214e3ec();
  (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),1);
  (**(code **)(**(int **)(puVar2[5] + 4) + 0xd8))(*(int **)(puVar2[5] + 4),1);
  FUN_0214e478(iVar3,puVar2[5]);
  local_2c = 0;
  local_28 = 0;
  iVar3 = FUN_0203b404();
  iVar3 = FUN_0214ee60(puVar2[0x12],*(undefined4 *)(iVar3 + 0x88),0x810000,1,0x70,&local_2c);
  FUN_02023940(*(undefined4 *)(iVar3 + 4));
  FUN_02151ebc(&local_34,iVar3,s_Position_02160c78);
  FUN_02151ebc(&local_3c,iVar3,&DAT_02160c84);
  (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),0);
  local_88[0xf] = 0x19000;
  local_88[0x10] = 0x148000;
  FUN_0214e1b8(iVar3,local_88 + 0x10,local_88 + 0xf);
  FUN_02023c60(*(undefined4 *)(iVar3 + 4),local_34,0,local_30);
  FUN_02023c60(*(undefined4 *)(iVar3 + 4),local_3c,0,local_38);
  (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),1);
  FUN_02023c60(*(undefined4 *)(iVar3 + 4),local_3c,8,local_38);
  local_88[0xd] = 0x19000;
  local_88[0xe] = 0x88000;
  FUN_0214e1b8(iVar3,local_88 + 0xe,local_88 + 0xd);
  FUN_02023c60(*(undefined4 *)(iVar3 + 4),local_34,0x10,local_30);
  piVar5 = *(int **)(*(int *)(iVar3 + 4) + 0x68);
  (**(code **)(*piVar5 + 0xac))(piVar5,0);
  FUN_02023c80(*(undefined4 *)(iVar3 + 4),local_34,0x494c,local_30);
  FUN_02023c70(*(undefined4 *)(iVar3 + 4),1);
  func_0x021b4034(*(undefined4 *)(iVar3 + 4),1);
  iVar3 = ALWidgetBaseImp::Create(puVar2,puVar2[0x12]);
  puVar2[0x13] = iVar3;
  FUN_02023940(*(undefined4 *)(iVar3 + 4));
  FUN_02151ebc(local_88 + 0x11,iVar3,&DAT_02160c84);
  (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),1);
  FUN_02023c60(*(undefined4 *)(iVar3 + 4),local_88[0x11],0,local_40);
  piVar5 = *(int **)(*(int *)(iVar3 + 4) + 0x68);
  (**(code **)(*piVar5 + 0xac))(piVar5,0);
  FUN_02023c70(*(undefined4 *)(iVar3 + 4),1);
  func_0x021b4034(*(undefined4 *)(iVar3 + 4),1);
  func_0x021b6214(*(undefined4 *)(iVar3 + 4),0);
  func_0x021b7744(*(undefined4 *)(iVar3 + 4),1);
  iVar3 = 0;
  do {
    uVar4 = puVar2[0x13];
    local_a8 = 0;
    local_a4 = 0;
    iVar6 = FUN_0203b404();
    iVar6 = FUN_0214ee60(uVar4,*(undefined4 *)(iVar6 + 0x88),0x810000,iVar3 + 2,0x70,&local_a8);
    *(int *)(*(int *)(iVar6 + 4) + 0x124) = iVar3 + 0x40;
    puVar2[iVar3 + 0x1c] = iVar6;
    piVar5 = (int *)thunk_FUN_0201a228(0x70,FUN_021608f4,s_Create_02160b70,0x1b2);
    if (piVar5 != (int *)0x0) {
      func_0x021b054c(piVar5,0,&DAT_02093c8c);
      *piVar5 = (int)&jus_Class_0216094c::vftable;
      FUN_0214e6d0(piVar5 + 0x1a,&DAT_02160b80);
      *piVar5 = 0x21d1c58;
    }
    if (piVar5[6] == 0) {
      (**(code **)(*piVar5 + 0x14))();
    }
    FUN_02020e98(iVar6,piVar5[6]);
    iVar9 = (int)DAT_02160b80;
    iVar7 = (int)DAT_02160b84;
    if (iVar9 < iVar7) {
      iVar7 = iVar7 - iVar9;
    }
    else {
      iVar7 = iVar9 - iVar7;
    }
    func_0x021b5900(*(undefined4 *)(iVar6 + 4),iVar7);
    (**(code **)(**(int **)(iVar6 + 4) + 0x24))(*(int **)(iVar6 + 4),puVar2);
    FUN_02027834(*(undefined4 *)(iVar6 + 4),8,FUN_02151ff8);
    func_0x021b4104(*(undefined4 *)(iVar6 + 4),*(undefined4 *)(iVar6 + 4),5);
    *(undefined1 *)(*(int *)(iVar6 + 4) + 0xb1) = 1;
    *(code **)(*(int *)(iVar6 + 4) + 0xec) = FUN_02151f9c;
    uVar12 = (uint)(byte)(&DAT_020b7654)[iVar3];
    uVar1 = (&DAT_020b7658)[iVar3];
    uVar11 = puVar2[iVar3 + 0x1c];
    iVar7 = FUN_0203b404();
    uVar4 = JQuizCommonTime::JQuizCommonTimeClass_Create
                      (uVar11,*(undefined4 *)(iVar7 + 0x88),0x810000,6,0x13,0x11,8,8,4,0x6f);
    puVar2[iVar3 + 0x30] = uVar4;
    FUN_02150d9c(uVar4,0x1c,0x3d);
    FUN_02150e8c(puVar2[iVar3 + 0x30],uVar1);
    iVar7 = FUN_0203b404();
    uVar4 = *(undefined4 *)(*(int *)(iVar7 + 0x88) + 4);
    DAT_02093c08 = DAT_02093c08 + -1;
    (&DAT_020a16d0)[DAT_02093c08] = DAT_020a0dd0;
    DAT_020a0dd0 = uVar4;
    uVar8 = FUN_0214f554(iVar3);
    if (uVar12 == uVar8) {
      local_d8 = 0x1b5f;
    }
    else {
      local_d8 = 0x7fff;
    }
    if (uVar12 == 0) {
      uVar8 = 0x13;
      local_d0 = 0x13;
    }
    else {
      iVar7 = FUN_0200d12c(uVar12,10);
      local_d0 = iVar7 + 6;
      FUN_0200d12c(uVar12,10);
      uVar8 = extraout_r1 + 6;
    }
    FUN_020329ec(0x810000);
    iVar7 = FUN_0214e3ec();
    FUN_0214e478(uVar11,iVar7);
    local_88[0xb] = 0x2e000;
    local_88[0xc] = 0;
    FUN_0214e1b8(iVar7,local_88 + 0xc,local_88 + 0xb);
    (**(code **)(**(int **)(iVar7 + 4) + 0x104))(*(int **)(iVar7 + 4),local_d8);
    local_88[10] = 0x6f000;
    FUN_0214ea78(iVar7,local_88 + 10);
    FUN_02023894(*(undefined4 *)(iVar7 + 4),local_d0 | 0x810000,0);
    (**(code **)(**(int **)(*(int *)(iVar7 + 4) + 0x68) + 0x6c))();
    (**(code **)(**(int **)(iVar7 + 4) + 0xd8))(*(int **)(iVar7 + 4),1);
    FUN_020329ec(0x810000);
    iVar7 = FUN_0214e3ec();
    FUN_0214e478(uVar11,iVar7);
    local_88[8] = 0x2e000;
    local_88[9] = 0x8000;
    FUN_0214e1b8(iVar7,local_88 + 9,local_88 + 8);
    (**(code **)(**(int **)(iVar7 + 4) + 0x104))(*(int **)(iVar7 + 4),local_d8);
    local_88[7] = 0x6f000;
    FUN_0214ea78(iVar7,local_88 + 7);
    FUN_02023894(*(undefined4 *)(iVar7 + 4),uVar8 | 0x810000,0);
    (**(code **)(**(int **)(*(int *)(iVar7 + 4) + 0x68) + 0x6c))();
    (**(code **)(**(int **)(iVar7 + 4) + 0xd8))(*(int **)(iVar7 + 4),1);
    FUN_020329ec(0x810000);
    iVar7 = FUN_0214e3ec();
    FUN_0214e478(uVar11,iVar7);
    local_88[5] = 0x2e000;
    local_88[6] = 0x10000;
    FUN_0214e1b8(iVar7,local_88 + 6,local_88 + 5);
    (**(code **)(**(int **)(iVar7 + 4) + 0x104))(*(int **)(iVar7 + 4),local_d8);
    local_88[4] = 0x6f000;
    FUN_0214ea78(iVar7,local_88 + 4);
    FUN_02023894(*(undefined4 *)(iVar7 + 4),0x810010,0);
    (**(code **)(**(int **)(*(int *)(iVar7 + 4) + 0x68) + 0x6c))();
    (**(code **)(**(int **)(iVar7 + 4) + 0xd8))(*(int **)(iVar7 + 4),1);
    DAT_020a0dd0 = (&DAT_020a16d0)[DAT_02093c08];
    DAT_02093c08 = DAT_02093c08 + 1;
    iVar7 = FUN_0214f5b4();
    if (iVar3 == iVar7) {
      iVar7 = FUN_0203b404();
      iVar7 = FUN_0214e9f0(*(undefined4 *)(iVar7 + 0x88),0x810000,0x12,0x6f);
      local_88[2] = 0x2b000;
      local_88[3] = 0xffff0000;
      FUN_0214e1b8(iVar7,local_88 + 3,local_88 + 2);
      (**(code **)(**(int **)(iVar7 + 4) + 0xd8))(*(int **)(iVar7 + 4),1);
      FUN_0214e478(uVar11,iVar7);
      FUN_0214f59c();
    }
    FUN_02023940(*(undefined4 *)(iVar6 + 4));
    FUN_02151ebc(&local_a0,iVar6,s_Position_02160c78);
    FUN_02151ebc(&local_98,iVar6,&DAT_02160c84);
    (**(code **)(**(int **)(iVar6 + 4) + 0xd8))(*(int **)(iVar6 + 4),0);
    local_8c = 0x61000;
    local_90 = 0x128000;
    FUN_0214e1b8(iVar6,&local_90,&local_8c);
    FUN_02023c60(*(undefined4 *)(iVar6 + 4),local_a0,0,local_9c);
    FUN_02023c60(*(undefined4 *)(iVar6 + 4),local_98,0,local_94);
    (**(code **)(**(int **)(iVar6 + 4) + 0xd8))(*(int **)(iVar6 + 4),1);
    FUN_02023c60(*(undefined4 *)(iVar6 + 4),local_a0,iVar3 * 8 + 0x10,local_9c);
    FUN_02023c60(*(undefined4 *)(iVar6 + 4),local_98,iVar3 * 8 + 0x10,local_94);
    local_88[0] = (iVar3 * 0x50 + 0x30) * 0x1000;
    local_88[1] = 0x61000;
    FUN_0214e1b8(iVar6,local_88,local_88 + 1);
    FUN_02023c60(*(undefined4 *)(iVar6 + 4),local_a0,(iVar3 + 1) * 8 + 0x10,local_9c);
    piVar5 = *(int **)(*(int *)(iVar6 + 4) + 0x68);
    (**(code **)(*piVar5 + 0xac))(piVar5,0);
    FUN_02023c80(*(undefined4 *)(iVar6 + 4),local_a0,0x494c,local_9c);
    FUN_02023c70(*(undefined4 *)(iVar6 + 4),1);
    func_0x021b4034(*(undefined4 *)(iVar6 + 4),1);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  func_0x021b6760(*(undefined4 *)(puVar2[0x1c] + 4),0x10,thunk_EXT_FUN_021b65cc);
  uVar4 = func_0x021bcf1c(0x12,2,1,0xffffffff);
  puVar2[0x2c] = uVar4;
  func_0x021bd730(uVar4,puVar2[0x2e] + 0x3d,0);
  iVar3 = FUN_02026f94();
  puVar2[1] = iVar3;
  local_cc = 0x80000;
  (**(code **)(**(int **)(iVar3 + 4) + 0xa0))(*(int **)(iVar3 + 4),&local_cc);
  FUN_02028384(*(undefined4 *)(puVar2[1] + 4),FUN_021520dc);
  (**(code **)(**(int **)(puVar2[1] + 4) + 0x24))(*(int **)(puVar2[1] + 4),puVar2);
  func_0x021b6214(*(undefined4 *)(puVar2[0x13] + 4),1);
  func_0x021b6214(*(undefined4 *)(puVar2[puVar2[0x2e] + 0x1b] + 4),1);
  (**(code **)(**(int **)(puVar2[0x12] + 4) + 0x148))(*(int **)(puVar2[0x12] + 4),0x10);
  FUN_02073ebc(2,1);
  return *puVar2;
}

