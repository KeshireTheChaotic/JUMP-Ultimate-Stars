
/* WARNING: Removing unreachable block (ram,0x02168fb0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-GAME DatabaseList::Database_ListCreate [source-string] __FILE__="DatabaseList.cpp"
   __FUNCTION__="Database_ListCreate" lines=[82, 181] passed to 2 source-location call(s); header
   inlines: ALWidgetImp.h:Create */

int * DatabaseList::Database_ListCreate
                (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
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
  undefined1 auStack_44 [8];
  undefined1 auStack_3c [8];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  uStack_28 = param_4;
  piVar1 = (int *)jus_AllocDebug(0x74,s_DatabaseList_cpp_02171944,s_Database_ListCreate_021718b4,
                                 0x52);
  func_0x021b65bc();
  FUN_020517fc(piVar1,0,0x74);
  piVar1[0x17] = param_1;
  piVar1[4] = (int)&LAB_0216937c;
  piVar1[5] = 0;
  FUN_02169624(piVar1,piVar1[0x19]);
  iVar2 = FUN_02026f94();
  piVar1[6] = iVar2;
  local_2c = 0x80000;
  (**(code **)(**(int **)(iVar2 + 4) + 0xa0))(*(int **)(iVar2 + 4),&local_2c);
  FUN_02028384(*(undefined4 *)(piVar1[6] + 4),FUN_02169384);
  (**(code **)(**(int **)(piVar1[6] + 4) + 0x24))(*(int **)(piVar1[6] + 4),piVar1);
  iVar2 = PieceData::PieceData_Create();
  piVar1[1] = iVar2;
  iVar2 = BgmData::BgmData_Create();
  piVar1[2] = iVar2;
  iVar2 = DemoData::DemoData_Create();
  piVar1[3] = iVar2;
  piVar3 = (int *)FUN_020101f4(s_database_database_aar_02171958,0);
  thunk_FUN_0207400c(&DAT_0217246c,DAT_02171788);
  thunk_FUN_0207400c(&DAT_02172486,DAT_02171788);
  thunk_FUN_020741c4(&DAT_0217246c,&DAT_02171970);
  thunk_FUN_020741c4(&DAT_02172486,&DAT_02171974);
  DAT_0217247c = (char)piVar1[0x17] + '0';
  DAT_02172496 = DAT_0217247c;
  iVar2 = FUN_0203b414(1);
  iVar2 = FUN_0215e100(*(undefined4 *)(iVar2 + 0x88),1,4,0x8000,1,0x20,0x40,&DAT_0217246c,
                       &DAT_02172486,0);
  piVar1[0xb] = iVar2;
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  iVar2 = FUN_0203b414(2);
  iVar2 = FUN_0215e100(*(undefined4 *)(iVar2 + 0x88),1,4,0x2000,3,0x20,0x40,
                       s_database_list_dig_02171978,s_database_list_atm_0217198c,0);
  piVar1[0xc] = iVar2;
  iVar2 = *(int *)(*(int *)(iVar2 + 4) + 0x50);
  *(undefined4 *)(iVar2 + 0x10) = 0xfffc0000;
  FUN_02150090(iVar2,1);
  (**(code **)(**(int **)(piVar1[0xc] + 4) + 0xd8))(*(int **)(piVar1[0xc] + 4),1);
  FUN_021500cc(piVar1[0xc],piVar1[0xb]);
  iVar2 = FUN_0203b414(3);
  uVar6 = *(undefined4 *)(iVar2 + 0x88);
  iVar2 = FUN_0215e100(uVar6,1,4,0x4000,0,0x40,0x20,s_database_playing_dig_021719a0,
                       s_database_playing_atm_021719b8,piVar1 + 0xe);
  piVar1[0xd] = iVar2;
  iVar2 = FUN_0215e7bc(uVar6,&DAT_021719d0,0,0x58,0x1e,0,0,0xd8,0);
  piVar1[0xf] = iVar2;
  FUN_021500cc(iVar2,piVar1[0xd]);
  local_78 = 0x10000;
  FUN_02150a10(piVar1[0xf],&local_78);
  iVar2 = FUN_0203b414(0);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar2 + 0x88) + 4),0);
  iVar2 = FUN_0203b414(0);
  local_74 = 0x2000;
  piVar4 = *(int **)(*(int *)(iVar2 + 0x88) + 4);
  (**(code **)(*piVar4 + 0x10))(piVar4,&local_74);
  iVar2 = 0;
  do {
    iVar5 = FUN_020101f4((&DAT_021717a4)[iVar2],0);
    iVar9 = iVar2 + 1;
    piVar1[iVar2 + 7] = iVar5;
    iVar2 = iVar9;
  } while (iVar9 < 3);
  iVar2 = FUN_020101f4((&PTR_s_database_list_obj0_aar_0217178c)[piVar1[0x17]],0);
  piVar1[10] = iVar2;
  iVar2 = FUN_0203b3e4();
  iVar2 = FUN_0215e2d4(*(undefined4 *)(iVar2 + 0x88),0x810000,0,0x80,0,0x1f);
  piVar1[0x14] = iVar2;
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  if (piVar1[0x17] != 0) {
    if (piVar1[0x17] == 1) {
      uVar6 = 0x10;
    }
    else {
      uVar6 = 0x12;
    }
    iVar2 = FUN_0203b3e4();
    iVar2 = FUN_0215e2d4(*(undefined4 *)(iVar2 + 0x88),0x810000,1,uVar6,0x20,0x5f);
    piVar1[0x15] = iVar2;
    (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
    FUN_021500cc(piVar1[0x15],piVar1[0xb]);
  }
  iVar2 = jus_AllocDebug(0xcc,s_ALWidget_inl_0216f484,s_Create_02171874,0x1de);
  piVar4 = (int *)0x0;
  if (iVar2 != 0) {
    piVar4 = (int *)func_0x021af26c(iVar2,FUN_021696ec,FUN_02169760,0);
  }
  if (piVar4[6] == 0) {
    (**(code **)(*piVar4 + 0x14))();
  }
  piVar7 = (int *)piVar4[6];
  iVar2 = jus_AllocDebug(0xbc,s_ALWidget_inl_0216f464,s_Create_0217187c,0x212);
  piVar4 = (int *)0x0;
  if (iVar2 != 0) {
    piVar4 = (int *)func_0x021af358(iVar2,FUN_021697d4,0);
  }
  if (piVar4[6] == 0) {
    (**(code **)(*piVar4 + 0x14))();
  }
  iVar5 = piVar4[6];
  iVar2 = *(int *)(iVar5 + 4);
  *(undefined4 *)(iVar2 + 0x94) = 0xe;
  *(undefined4 *)(iVar2 + 0x98) = 0xe;
  *(undefined4 *)(*(int *)(iVar5 + 4) + 0x9c) = 0xe;
  func_0x021b3b7c(1,0,piVar7);
  iVar2 = (**(code **)(*(int *)piVar7[1] + 0xb0))((int *)piVar7[1],0x31305053);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_021504fc();
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 4) + 100);
  piVar4 = *(int **)(iVar2 + 0x2c);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)FUN_02036430(*(undefined4 *)(iVar2 + 0x20));
  }
  if (piVar4[6] == 0) {
    (**(code **)(*piVar4 + 0x10))();
  }
  iVar2 = CommonPaletteAnime::CommonPaletteAnime_Create(piVar4[6],0x11,2,5,0x80);
  *piVar1 = iVar2;
  *(undefined2 *)(iVar2 + 0x18) = 0x870;
  *(undefined2 *)(iVar2 + 0x16) = 0x8df;
  *(undefined1 *)(iVar2 + 0x1a) = 0x1e;
  *(undefined1 *)(iVar2 + 0x1c) = 3;
  *(undefined1 *)(iVar2 + 0x1b) = 1;
  FUN_02028330(*(undefined4 *)(*(int *)*piVar1 + 4));
  (**(code **)(*piVar7 + 8))();
  if ((DAT_02172444 & 1) == 0) {
    DAT_02172444 = DAT_02172444 | 1;
  }
  _DAT_021d5154 = 1;
  iVar2 = ALWidgetBaseImp::Create(piVar1,0x60,0,0);
  piVar4 = &DAT_021717b0;
  piVar1[0x10] = iVar2;
  iVar5 = 0;
  do {
    iVar9 = FUN_0203b3e4();
    iVar9 = FUN_0215e2d4(*(undefined4 *)(iVar9 + 0x88),*piVar4,piVar4[1] - *piVar4,0,0,0x1f);
    if (iVar9 != 0) {
      (**(code **)(**(int **)(iVar9 + 4) + 0xd8))(*(int **)(iVar9 + 4),1);
    }
    iVar9 = FUN_0215e9e4(iVar2,piVar4,iVar9,0x5f,0);
    piVar1[iVar5 + 0x12] = iVar9;
    *(int *)(*(int *)(iVar9 + 4) + 0x124) = iVar5;
    (**(code **)(**(int **)(piVar1[iVar5 + 0x12] + 4) + 0x24))
              (*(int **)(piVar1[iVar5 + 0x12] + 4),piVar1);
    iVar9 = iVar5 + 0x12;
    iVar5 = iVar5 + 1;
    *(undefined1 *)(*(int *)(piVar1[iVar9] + 4) + 0xb1) = 1;
    piVar4 = piVar4 + 9;
  } while (iVar5 < 2);
  local_50 = 0x1f000;
  FUN_0214d494(piVar1[0x13],&local_50);
  local_54 = 0x100000;
  FUN_02150a10(piVar1[0x13],&local_54);
  FUN_02023940(*(undefined4 *)(iVar2 + 4));
  piVar4 = *(int **)(iVar2 + 4);
  uVar6 = FUN_020326b0(s_Position_021719d4);
  uVar6 = (**(code **)(*piVar4 + 0x40))(piVar4,s_Position_021719d4,&local_70,uVar6);
  FUN_0202c4a4(&local_4c,uVar6,local_70);
  local_5c = 0;
  local_58 = 0;
  FUN_0214ce68(iVar2,&local_58,&local_5c);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_4c,0,local_48);
  piVar4 = *(int **)(*(int *)(iVar2 + 4) + 0x68);
  (**(code **)(*piVar4 + 0xac))(piVar4,0);
  FUN_02023c70(*(undefined4 *)(iVar2 + 4),0x820000);
  FUN_020239a0(*(undefined4 *)(iVar2 + 4));
  local_64 = 0xfff40000;
  local_60 = 0;
  FUN_0214ce68(iVar2,&local_60,&local_64);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_4c,0,local_48);
  local_6c = 0;
  local_68 = 0;
  FUN_0214ce68(iVar2,&local_68,&local_6c);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_4c,8,local_48);
  piVar4 = *(int **)(*(int *)(iVar2 + 4) + 0x68);
  (**(code **)(*piVar4 + 0xac))(piVar4,0);
  FUN_02023c80(*(undefined4 *)(iVar2 + 4),local_4c,0x494c,local_48);
  FUN_02023c70(*(undefined4 *)(iVar2 + 4),0x820001);
  func_0x021b6760(*(undefined4 *)(iVar2 + 4),0x10,&LAB_02169a58);
  func_0x021b4034(*(undefined4 *)(iVar2 + 4),0x820001);
  func_0x021b3f78(*(undefined4 *)(iVar2 + 4),0x820000);
  func_0x021b6214(*(undefined4 *)(iVar2 + 4),1);
  (**(code **)(**(int **)(iVar2 + 4) + 0x148))(*(int **)(iVar2 + 4),0x10);
  FUN_0214d438();
  iVar2 = FUN_0203b404();
  DAT_020a0dd0 = *(undefined4 *)(*(int *)(iVar2 + 0x88) + 4);
  iVar2 = func_0x021caa0c(s_font_jskfont_aft_021719e0,0,0);
  FUN_02150104();
  iVar5 = 0;
  do {
    iVar9 = FUN_0203b3e4();
    iVar9 = FUN_0215e2d4(*(undefined4 *)(iVar9 + 0x88),0xa01000,iVar5,0,0,0x5f);
    FUN_021509f8(auStack_3c,0xfffffff4,0xfffffff8,8,8);
    func_0x021cb4d4(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar9 + 4),iVar5 + 0x875f,auStack_3c)
    ;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x2a);
  iVar5 = FUN_0203b3e4();
  iVar5 = FUN_0215e2d4(*(undefined4 *)(iVar5 + 0x88),0x800000,6,0,0,0x5f);
  FUN_021509f8(auStack_44,0,0xfffffff8,0,8);
  func_0x021cb4d4(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar5 + 4),0x8740,auStack_44);
  (**(code **)(**(int **)(iVar2 + 4) + 0xc))();
  FUN_0214d4cc();
  iVar5 = piVar1[0x10];
  FUN_0214d438();
  iVar2 = FUN_0203b404();
  uVar6 = _DAT_021d5154;
  DAT_020a0dd0 = *(undefined4 *)(*(int *)(iVar2 + 0x88) + 4);
  uVar8 = *(undefined4 *)(iVar5 + 4);
  iVar2 = jus_AllocDebug(0x17c,s_ALWidgetImp_h_0216f4a4,s_Create_02171884,0xb5);
  if (iVar2 != 0) {
    func_0x021acb3c(iVar2,uVar8,uVar6,ALWidgetBaseImp::CreateDrawFunc);
  }
  iVar2 = FUN_021504fc();
  *(undefined1 *)(*(int *)(iVar2 + 4) + 0x165) = 0;
  *(undefined1 *)(*(int *)(iVar2 + 4) + 0x164) = 0;
  *(undefined1 *)(*(int *)(iVar2 + 4) + 0x114) = 1;
  *(undefined1 *)(*(int *)(iVar2 + 4) + 0x140) = 1;
  *(undefined1 *)(*(int *)(iVar2 + 4) + 0x141) = 1;
  *(undefined4 *)(*(int *)(iVar2 + 4) + 0x144) = 0;
  *(undefined4 *)(*(int *)(iVar2 + 4) + 0x13c) = 1;
  func_0x021b5898(*(undefined4 *)(iVar2 + 4));
  func_0x021b5900(*(undefined4 *)(iVar2 + 4),0xee,0x70);
  local_34 = 0x30000;
  local_30 = 0;
  FUN_0214ce68(iVar2,&local_30,&local_34);
  func_0x021ad6cc(*(undefined4 *)(iVar2 + 4),0x10);
  *(code **)(*(int *)(iVar2 + 4) + 0x14c) = FUN_02169be0;
  func_0x021b65e8(*(undefined4 *)(iVar2 + 4),4,FUN_02169c18);
  *(undefined1 *)(*(int *)(iVar2 + 4) + 0xb1) = 1;
  func_0x021ac948(*(undefined4 *)(iVar2 + 4));
  (**(code **)(**(int **)(iVar2 + 4) + 0x1a8))(*(int **)(iVar2 + 4),1);
  (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),piVar1);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  iVar5 = FUN_021504fc(*(undefined4 *)(*(int *)(iVar2 + 4) + 0x160));
  piVar4 = *(int **)(*(int *)(iVar5 + 4) + 100);
  (**(code **)(*piVar4 + 0xa4))(piVar4,0);
  piVar4 = *(int **)(*(int *)(iVar5 + 4) + 100);
  (**(code **)(*piVar4 + 0xa8))(piVar4,6);
  FUN_0214d4cc();
  piVar1[0x11] = iVar2;
  (*(code *)(&PTR_FUN_02171798)[piVar1[0x17]])(piVar1,param_2);
  FUN_02169b3c(piVar1,0);
  func_0x021b65d8(*(undefined4 *)(piVar1[0x10] + 4));
  func_0x021b6214(*(undefined4 *)(piVar1[0x10] + 4),1);
  func_0x021b6214(*(undefined4 *)(piVar1[0x11] + 4),1);
  FUN_021500cc(piVar1[0xb],piVar1[0x10]);
  (**(code **)(*piVar3 + 0xc))();
  return piVar1;
}

