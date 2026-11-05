
/* WARNING: Removing unreachable block (ram,0x0216c88c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-GAME DatabaseLocation::Database_LocationCreate [source-string]
   __FILE__="DatabaseLocation.cpp" __FUNCTION__="Database_LocationCreate" lines=[62, 181] passed to
   2 source-location call(s); header inlines: ALWidgetImp.h:Create */

int * DatabaseLocation::Database_LocationCreate(void)

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
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  piVar1 = (int *)jus_AllocDebug(0x84,s_DatabaseLocation_cpp_02172178,
                                 s_Database_LocationCreate_0217212c,0x3e);
  func_0x021b65bc();
  FUN_020517fc(piVar1,0,0x84);
  piVar1[2] = (int)&LAB_0216cb6c;
  piVar1[3] = 0;
  iVar2 = FUN_02026f94();
  piVar1[4] = iVar2;
  local_28 = 0x80000;
  (**(code **)(**(int **)(iVar2 + 4) + 0xa0))(*(int **)(iVar2 + 4),&local_28);
  FUN_02028384(*(undefined4 *)(piVar1[4] + 4),&LAB_0216cb74);
  (**(code **)(**(int **)(piVar1[4] + 4) + 0x24))(*(int **)(piVar1[4] + 4),piVar1);
  iVar2 = LocationData::LocationData_Create();
  piVar1[1] = iVar2;
  piVar3 = (int *)FUN_020101f4(s_database_database_aar_02172190,0);
  iVar2 = FUN_0203b414(1);
  iVar2 = FUN_0215e100(*(undefined4 *)(iVar2 + 0x88),1,4,0x4000,1,0x20,0x40,
                       s_database_home_bg_dig_021721a8,s_database_home_bg_atm_021721c0,0);
  piVar1[9] = iVar2;
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  iVar2 = FUN_0203b414(2);
  iVar2 = FUN_0215e100(*(undefined4 *)(iVar2 + 0x88),1,4,0x4000,3,0x20,0x40,
                       s_database_home_bg_dig_021721a8,s_database_home_list_atm_021721d8,0);
  piVar1[10] = iVar2;
  iVar2 = *(int *)(*(int *)(iVar2 + 4) + 0x50);
  *(undefined4 *)(iVar2 + 0x10) = 0xfffc0000;
  FUN_02150090(iVar2,1);
  (**(code **)(**(int **)(piVar1[10] + 4) + 0xd8))(*(int **)(piVar1[10] + 4),1);
  FUN_021500cc(piVar1[10],piVar1[9]);
  iVar2 = FUN_0203b414(0);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar2 + 0x88) + 4),0);
  iVar2 = FUN_0203b414(0);
  local_68 = 0;
  piVar4 = *(int **)(*(int *)(iVar2 + 0x88) + 4);
  (**(code **)(*piVar4 + 0x10))(piVar4,&local_68);
  iVar2 = 0;
  do {
    iVar5 = FUN_020101f4((&DAT_02171e64)[iVar2],0);
    iVar9 = iVar2 + 1;
    piVar1[iVar2 + 5] = iVar5;
    iVar2 = iVar9;
  } while (iVar9 < 4);
  iVar2 = FUN_0203b3e4();
  iVar2 = FUN_0215e2d4(*(undefined4 *)(iVar2 + 0x88),0x810000,0,0x80,0,0x1f);
  piVar1[0x1c] = iVar2;
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  iVar2 = FUN_0203b3e4();
  iVar2 = FUN_0215e2d4(*(undefined4 *)(iVar2 + 0x88),0x810000,1,0x80,0,0x1f);
  piVar1[0x1d] = iVar2;
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  iVar2 = jus_AllocDebug(0xcc,s_ALWidget_inl_0216f484,s_Create_02171e5c,0x1de);
  piVar4 = (int *)0x0;
  if (iVar2 != 0) {
    piVar4 = (int *)func_0x021af26c(iVar2,FUN_0216cb80,FUN_0216cc00,0);
  }
  if (piVar4[6] == 0) {
    (**(code **)(*piVar4 + 0x14))();
  }
  piVar7 = (int *)piVar4[6];
  iVar2 = jus_AllocDebug(0xbc,s_ALWidget_inl_0216f464,s_Create_02171e54,0x212);
  piVar4 = (int *)0x0;
  if (iVar2 != 0) {
    piVar4 = (int *)func_0x021af358(iVar2,FUN_0216cc74,0);
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
  iVar2 = CommonPaletteAnime::CommonPaletteAnime_Create(piVar4[6],0x11,0xf,5,0x80);
  *piVar1 = iVar2;
  *(undefined2 *)(iVar2 + 0x18) = 0x870;
  *(undefined2 *)(iVar2 + 0x16) = 0x8df;
  *(undefined1 *)(iVar2 + 0x1a) = 0x1e;
  *(undefined1 *)(iVar2 + 0x1c) = 3;
  *(undefined1 *)(iVar2 + 0x1b) = 1;
  FUN_02028330(*(undefined4 *)(*(int *)*piVar1 + 4));
  (**(code **)(*piVar7 + 8))();
  _DAT_021d5154 = 1;
  iVar2 = ALWidgetBaseImp::Create(piVar1,0x60,0,0);
  iVar5 = 0;
  piVar4 = &DAT_02171ee8;
  piVar1[0xb] = iVar2;
  do {
    iVar9 = FUN_0203b3e4();
    iVar9 = FUN_0215e2d4(*(undefined4 *)(iVar9 + 0x88),*piVar4,piVar4[1] - *piVar4,0,0,0x1f);
    if (iVar9 != 0) {
      (**(code **)(**(int **)(iVar9 + 4) + 0xd8))(*(int **)(iVar9 + 4),1);
    }
    iVar9 = FUN_0215e9e4(iVar2,piVar4,iVar9,0x5f,0);
    piVar1[iVar5 + 0xd] = iVar9;
    *(int *)(*(int *)(iVar9 + 4) + 0x124) = iVar5;
    (**(code **)(**(int **)(piVar1[iVar5 + 0xd] + 4) + 0x24))
              (*(int **)(piVar1[iVar5 + 0xd] + 4),piVar1);
    iVar9 = iVar5 + 0xd;
    iVar5 = iVar5 + 1;
    *(undefined1 *)(*(int *)(piVar1[iVar9] + 4) + 0xaa) = 1;
    piVar4 = piVar4 + 9;
  } while (iVar5 < 0xf);
  piVar1[0x20] = 0;
  func_0x021b6214(*(undefined4 *)(piVar1[0xd] + 4),1);
  FUN_0216d010(piVar1);
  *(undefined1 *)(*(int *)(piVar1[0x1b] + 4) + 0xb1) = 1;
  FUN_02023940(*(undefined4 *)(iVar2 + 4));
  piVar4 = *(int **)(iVar2 + 4);
  uVar6 = FUN_020326b0(s_Position_021721f0);
  uVar6 = (**(code **)(*piVar4 + 0x40))(piVar4,s_Position_021721f0,&local_64,uVar6);
  FUN_0202c4a4(&local_48,uVar6,local_64);
  local_50 = 0;
  local_4c = 0;
  FUN_0214ce68(iVar2,&local_4c,&local_50);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_48,0,local_44);
  piVar4 = *(int **)(*(int *)(iVar2 + 4) + 0x68);
  (**(code **)(*piVar4 + 0xac))(piVar4,0);
  FUN_02023c70(*(undefined4 *)(iVar2 + 4),0x820000);
  FUN_020239a0(*(undefined4 *)(iVar2 + 4));
  local_58 = 0xfff40000;
  local_54 = 0;
  FUN_0214ce68(iVar2,&local_54,&local_58);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_48,0,local_44);
  local_60 = 0;
  local_5c = 0;
  FUN_0214ce68(iVar2,&local_5c,&local_60);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_48,8,local_44);
  piVar4 = *(int **)(*(int *)(iVar2 + 4) + 0x68);
  (**(code **)(*piVar4 + 0xac))(piVar4,0);
  FUN_02023c80(*(undefined4 *)(iVar2 + 4),local_48,0x494c,local_44);
  FUN_02023c70(*(undefined4 *)(iVar2 + 4),0x820001);
  func_0x021b6760(*(undefined4 *)(iVar2 + 4),0x10,&LAB_0216cefc);
  func_0x021b4034(*(undefined4 *)(iVar2 + 4),0x820001);
  func_0x021b3f78(*(undefined4 *)(iVar2 + 4),0x820000);
  func_0x021b6214(*(undefined4 *)(iVar2 + 4),1);
  (**(code **)(**(int **)(iVar2 + 4) + 0x148))(*(int **)(iVar2 + 4),0x10);
  FUN_0214d438();
  iVar2 = FUN_0203b404();
  DAT_020a0dd0 = *(undefined4 *)(*(int *)(iVar2 + 0x88) + 4);
  iVar2 = func_0x021caa0c(s_font_jskfont_aft_021721fc,0,0);
  FUN_02150104();
  iVar5 = FUN_0203b3e4();
  iVar5 = FUN_0215e2d4(*(undefined4 *)(iVar5 + 0x88),0xa01000,0x2a,0,0,0x5f);
  FUN_021509f8(auStack_38,0xfffffff4,0xfffffff8,8,8);
  func_0x021cb4d4(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar5 + 4),0x8740,auStack_38);
  iVar5 = 0;
  do {
    iVar9 = FUN_0203b3e4();
    iVar9 = FUN_0215e2d4(*(undefined4 *)(iVar9 + 0x88),0xa01000,iVar5,0,0,0x5f);
    FUN_021509f8(auStack_40,0xfffffff4,0xfffffff8,8,8);
    func_0x021cb4d4(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar9 + 4),iVar5 + 0x8741,auStack_40)
    ;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x2a);
  (**(code **)(**(int **)(iVar2 + 4) + 0xc))();
  FUN_0214d4cc();
  iVar5 = piVar1[0xb];
  FUN_0214d438();
  iVar2 = FUN_0203b404();
  uVar6 = _DAT_021d5154;
  DAT_020a0dd0 = *(undefined4 *)(*(int *)(iVar2 + 0x88) + 4);
  uVar8 = *(undefined4 *)(iVar5 + 4);
  iVar2 = jus_AllocDebug(0x17c,s_ALWidgetImp_h_0216f4a4,s_Create_02171e44,0xb5);
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
  func_0x021b5900(*(undefined4 *)(iVar2 + 4),0xce,0x70);
  local_30 = 0x38000;
  local_2c = 0x10000;
  FUN_0214ce68(iVar2,&local_2c,&local_30);
  func_0x021ad6cc(*(undefined4 *)(iVar2 + 4),0x10);
  func_0x021b65e8(*(undefined4 *)(iVar2 + 4),4,FUN_0216d078);
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
  piVar1[0xc] = iVar2;
  FUN_0216d108(piVar1,0,0);
  func_0x021b65d8(*(undefined4 *)(piVar1[0xb] + 4));
  func_0x021b6214(*(undefined4 *)(piVar1[0xb] + 4),1);
  func_0x021b6214(*(undefined4 *)(piVar1[0xc] + 4),1);
  FUN_021500cc(piVar1[9],piVar1[0xb]);
  FUN_021500cc(piVar1[0x1d],piVar1[0xb]);
  (**(code **)(*piVar3 + 0xc))();
  return piVar1;
}

