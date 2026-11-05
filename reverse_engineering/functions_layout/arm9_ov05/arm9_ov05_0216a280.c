
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-GAME DatabasePiece::Database_PieceCreate [source-string] __FILE__="DatabasePiece.cpp"
   __FUNCTION__="Database_PieceCreate" lines=[46] passed to 1 source-location call(s) */

undefined4 * DatabasePiece::Database_PieceCreate(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int extraout_r1;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
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
  undefined1 auStack_54 [24];
  undefined1 auStack_3c [24];
  
  puVar1 = (undefined4 *)
           jus_AllocDebug(0xa4,s_DatabasePiece_cpp_02171aa8,s_Database_PieceCreate_02171a60,0x2e);
  func_0x021b65bc();
  FUN_020517fc(puVar1,0,0xa4);
  puVar1[1] = &LAB_0216ac44;
  puVar1[2] = 0;
  iVar2 = FUN_02026f94();
  puVar1[3] = iVar2;
  local_58 = 0x80000;
  (**(code **)(**(int **)(iVar2 + 4) + 0xa0))(*(int **)(iVar2 + 4),&local_58);
  FUN_02028384(*(undefined4 *)(puVar1[3] + 4),FUN_0216ac4c);
  (**(code **)(**(int **)(puVar1[3] + 4) + 0x24))(*(int **)(puVar1[3] + 4),puVar1);
  uVar3 = PieceData::PieceData_Create();
  *puVar1 = uVar3;
  piVar4 = (int *)FUN_020101f4(s_database_comic_comic_aar_02171abc,0);
  thunk_FUN_0207400c(auStack_54,s_database_comic__02171ad8);
  thunk_FUN_020741c4(auStack_54,(&PTR_DAT_0209e840)[param_1 + 1]);
  thunk_FUN_0207400c(auStack_3c,auStack_54);
  thunk_FUN_020741c4(auStack_54,&DAT_02171ae8);
  thunk_FUN_020741c4(auStack_3c,&DAT_02171af0);
  iVar2 = FUN_0203b424(2);
  uVar3 = FUN_0215e100(*(undefined4 *)(iVar2 + 0x88),3,8,0x8000,2,0x40,0x40,auStack_54,auStack_3c,0)
  ;
  puVar1[8] = uVar3;
  local_88 = 0xc0000;
  FUN_02150070(puVar1[8],&local_88);
  (**(code **)(**(int **)(puVar1[8] + 4) + 0xd8))(*(int **)(puVar1[8] + 4),1);
  (**(code **)(*piVar4 + 0xc))();
  piVar4 = (int *)FUN_020101f4(s_database_database_aar_02171af8,0);
  iVar2 = FUN_0203b424(1);
  uVar8 = *(undefined4 *)(iVar2 + 0x88);
  uVar3 = FUN_0215e100(uVar8,1,4,0x4000,2,0x40,0x20,s_database_story_bg0_dig_02171b10,
                       s_database_story_bg0_atm_02171b28,0);
  puVar1[9] = uVar3;
  local_84 = 0x100000;
  FUN_02150a10(puVar1[9],&local_84);
  (**(code **)(**(int **)(puVar1[9] + 4) + 0xd8))(*(int **)(puVar1[9] + 4),1);
  iVar2 = 0;
  do {
    uVar3 = FUN_0216d37c(*puVar1,param_1,iVar2);
    uVar3 = FUN_0215e7bc(uVar8,uVar3,0x80,(int)(short)(&DAT_0216d7a8)[iVar2],0x1e,6,0,0x78,1);
    puVar1[iVar2 + 0xd] = uVar3;
    FUN_021500cc(uVar3,puVar1[9]);
    (**(code **)(**(int **)(puVar1[iVar2 + 0xd] + 4) + 0xd8))(*(int **)(puVar1[iVar2 + 0xd] + 4),1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  iVar2 = FUN_0203b414(1);
  iVar2 = FUN_0215e100(*(undefined4 *)(iVar2 + 0x88),1,4,0x2000,3,0x20,0x40,
                       s_database_story_bg1_dig_02171b40,s_database_story_bg1_atm_02171b58,0);
  puVar1[7] = iVar2;
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  iVar2 = FUN_0203b414(0);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar2 + 0x88) + 4),0);
  iVar2 = FUN_0203b414(0);
  local_80 = 0x1000;
  piVar5 = *(int **)(*(int *)(iVar2 + 0x88) + 4);
  (**(code **)(*piVar5 + 0x10))(piVar5,&local_80);
  iVar2 = 0;
  do {
    uVar3 = FUN_020101f4((&DAT_021719f8)[iVar2],0);
    iVar6 = iVar2 + 1;
    puVar1[iVar2 + 4] = uVar3;
    iVar2 = iVar6;
  } while (iVar6 < 3);
  iVar2 = FUN_0203b3f4();
  iVar2 = FUN_0215e2d4(*(undefined4 *)(iVar2 + 0x88),0x800000,0,0x80,0,0x1f);
  puVar1[0x26] = iVar2;
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  iVar2 = 0;
  do {
    iVar6 = FUN_0203b3e4();
    iVar6 = FUN_0215e2d4(*(undefined4 *)(iVar6 + 0x88),0x810000,2,iVar2 * 0x10 + 0x8a,0xae,0x1f);
    puVar1[iVar2 + 0x24] = iVar6;
    (**(code **)(**(int **)(iVar6 + 4) + 0xd8))(*(int **)(iVar6 + 4),1);
    FUN_021500cc(puVar1[iVar2 + 0x24],puVar1[7]);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  iVar2 = FUN_0216d3b4(*puVar1,param_1);
  if (0x12 < iVar2) {
    iVar2 = 0x12;
  }
  uVar3 = FUN_0200d12c(iVar2 + -1,9);
  puVar1[0x28] = uVar3;
  FUN_02023894(*(undefined4 *)(puVar1[0x25] + 4),puVar1[0x28] + 0x810002,0);
  DAT_02093c08 = DAT_02093c08 + -1;
  (&DAT_020a16d0)[DAT_02093c08] = DAT_020a0dd0;
  iVar6 = FUN_0203b404();
  DAT_020a0dd0 = *(undefined4 *)(*(int *)(iVar6 + 0x88) + 4);
  uVar3 = func_0x021caa0c(s_font_jskfont_aft_02171b70,0,0);
  puVar1[0x11] = uVar3;
  DAT_020a0dd0 = (&DAT_020a16d0)[DAT_02093c08];
  DAT_02093c08 = DAT_02093c08 + 1;
  for (iVar6 = 0; iVar6 < iVar2; iVar6 = iVar6 + 1) {
    uVar3 = FUN_0216d37c(*puVar1,param_1,iVar6 + 4);
    FUN_0200d12c(iVar6,9);
    uVar3 = FUN_0215e660(puVar1[0x11],uVar3,8,extraout_r1 * 0x10 + 0x18,0x80,6,0);
    puVar1[iVar6 + 0x12] = uVar3;
    FUN_021500cc(uVar3,puVar1[7]);
  }
  FUN_0216ad04(puVar1,0);
  if ((DAT_021724c8 & 1) == 0) {
    DAT_021724c8 = DAT_021724c8 | 1;
  }
  _DAT_021d5154 = 1;
  iVar2 = ALWidgetBaseImp::Create(puVar1,0x60,0,0);
  iVar6 = 0;
  piVar5 = &DAT_02171a04;
  puVar1[10] = iVar2;
  do {
    if ((iVar6 == 1) && ((int)puVar1[0x28] < 1)) {
      iVar7 = 0;
    }
    else {
      iVar7 = FUN_0203b3e4();
      iVar7 = FUN_0215e2d4(*(undefined4 *)(iVar7 + 0x88),*piVar5,piVar5[1] - *piVar5,0,0,0x1f);
      (**(code **)(**(int **)(iVar7 + 4) + 0xd8))(*(int **)(iVar7 + 4),1);
    }
    iVar7 = FUN_0215e9e4(iVar2,piVar5,iVar7,0x9f,0);
    puVar1[iVar6 + 0xb] = iVar7;
    *(int *)(*(int *)(iVar7 + 4) + 0x124) = iVar6;
    (**(code **)(**(int **)(puVar1[iVar6 + 0xb] + 4) + 0x24))
              (*(int **)(puVar1[iVar6 + 0xb] + 4),puVar1);
    iVar7 = iVar6 + 0xb;
    iVar6 = iVar6 + 1;
    *(undefined1 *)(*(int *)(puVar1[iVar7] + 4) + 0xb1) = 1;
    piVar5 = piVar5 + 9;
  } while (iVar6 < 2);
  func_0x021b6214(*(undefined4 *)(puVar1[0xc] + 4),1);
  FUN_02023940(*(undefined4 *)(iVar2 + 4));
  piVar5 = *(int **)(iVar2 + 4);
  uVar3 = FUN_020326b0(s_Position_02171b84);
  uVar3 = (**(code **)(*piVar5 + 0x40))(piVar5,s_Position_02171b84,&local_7c,uVar3);
  FUN_0202c4a4(&local_60,uVar3,local_7c);
  local_68 = 0;
  local_64 = 0;
  FUN_0214ce68(iVar2,&local_64,&local_68);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_60,0,local_5c);
  piVar5 = *(int **)(*(int *)(iVar2 + 4) + 0x68);
  (**(code **)(*piVar5 + 0xac))(piVar5,0);
  FUN_02023c70(*(undefined4 *)(iVar2 + 4),0x820000);
  FUN_020239a0(*(undefined4 *)(iVar2 + 4));
  local_70 = 0xfff40000;
  local_6c = 0;
  FUN_0214ce68(iVar2,&local_6c,&local_70);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_60,0,local_5c);
  local_78 = 0;
  local_74 = 0;
  FUN_0214ce68(iVar2,&local_74,&local_78);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_60,8,local_5c);
  piVar5 = *(int **)(*(int *)(iVar2 + 4) + 0x68);
  (**(code **)(*piVar5 + 0xac))(piVar5,0);
  FUN_02023c80(*(undefined4 *)(iVar2 + 4),local_60,0x494c,local_5c);
  FUN_02023c70(*(undefined4 *)(iVar2 + 4),0x820001);
  func_0x021b6760(*(undefined4 *)(iVar2 + 4),0x10,FUN_0216ada4);
  func_0x021b4034(*(undefined4 *)(iVar2 + 4),0x820001);
  func_0x021b3f78(*(undefined4 *)(iVar2 + 4),0x820000);
  func_0x021b65d8(*(undefined4 *)(iVar2 + 4));
  func_0x021b6214(*(undefined4 *)(iVar2 + 4),1);
  (**(code **)(**(int **)(iVar2 + 4) + 0x148))(*(int **)(iVar2 + 4),0x10);
  FUN_021500cc(puVar1[7],puVar1[10]);
  (**(code **)(*piVar4 + 0xc))();
  return puVar1;
}

