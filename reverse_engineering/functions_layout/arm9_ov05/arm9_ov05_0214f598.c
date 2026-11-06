
/* JUS-GAME KomaList::KomaList_Create [source-string] __FILE__="KomaList.cpp"
   __FUNCTION__="KomaList_Create" lines=[147] passed to 1 source-location call(s) */

undefined4 *
KomaList::KomaList_Create
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
          char param_6)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 local_30;
  undefined4 local_2c;
  int iStack_28;
  
  iStack_28 = param_4;
  puVar1 = (undefined4 *)
           thunk_FUN_0201a228(0x554,s_KomaList_cpp_0216f94c,s_KomaList_Create_0216f4d4,0x93);
  func_0x021b65bc();
  FUN_020517fc(puVar1,0,0x554);
  puVar1[0xfc] = param_1;
  *puVar1 = param_2;
  iVar2 = FUN_02026f94();
  puVar1[0xe] = iVar2;
  local_2c = 0x80000;
  (**(code **)(**(int **)(iVar2 + 4) + 0xa0))(*(int **)(iVar2 + 4),&local_2c);
  (**(code **)(**(int **)(puVar1[0xe] + 4) + 0x24))(*(int **)(puVar1[0xe] + 4),puVar1);
  iVar2 = 0;
  do {
    if (param_5 == 0) {
      puVar1[iVar2 + 5] = 0;
    }
    else {
      puVar1[iVar2 + 5] = *(undefined4 *)(param_5 + iVar2 * 4);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 6);
  if (puVar1[0xfc] == 1) {
    uVar3 = JPowerData::JPowerData_Create();
    puVar1[3] = uVar3;
    uVar3 = DemoData::DemoData_Create();
    puVar1[4] = uVar3;
  }
  FUN_0214fdb0(puVar1,FUN_0214fe14,0);
  uVar3 = TitleData::TitleData_Create();
  puVar1[1] = uVar3;
  piVar4 = (int *)FUN_020101f4(s_deckmake_deckmake_aar_0216f95c,0);
  iVar2 = FUN_0203b424(3);
  uVar3 = FUN_0215e100(*(undefined4 *)(iVar2 + 0x88),1,4,0x2000,3,0x20,0x20,
                       s_deckmake_list00_dig_0216f974,s_deckmake_list00_atm_0216f988,0);
  puVar1[0x13] = uVar3;
  local_30 = 0xffff8000;
  FUN_02150070(puVar1[0x13],&local_30);
  (**(code **)(**(int **)(puVar1[0x13] + 4) + 0xd8))(*(int **)(puVar1[0x13] + 4),1);
  iVar2 = FUN_0203b424(2);
  uVar3 = *(undefined4 *)(iVar2 + 0x88);
  FUN_0215e244(uVar3,1,4,0x8000,3,0x20,0x20);
  iVar2 = FUN_0203b424(1);
  uVar7 = *(undefined4 *)(iVar2 + 0x88);
  iVar2 = FUN_0215e100(uVar7,1,4,0x2000,2,0x20,0x20,FUN_0216f99c,s_deckmake_list01_atm_0216f9b0,
                       puVar1 + 0x15);
  puVar1[0x14] = iVar2;
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  iVar2 = FUN_0203b424(0);
  uVar8 = *(undefined4 *)(iVar2 + 0x88);
  iVar2 = FUN_0215e100(uVar8,1,4,0x8000,1,0x40,0x20,s_deckmake_list02_dtx_0216f9c4,0,puVar1 + 0x17);
  puVar1[0x16] = iVar2;
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),0);
  if (puVar1[0xfc] == 1) {
    uVar5 = FUN_0215e4e8(uVar8,puVar1[0x17],1,0,0,0x1f);
  }
  else {
    uVar5 = FUN_0215e4e8(uVar8,puVar1[0x17],0,0,0,0x1f);
  }
  puVar1[0x61] = uVar5;
  iVar2 = 0;
  do {
    uVar5 = FUN_020101f4((&DAT_0216f4f4)[iVar2],0);
    iVar6 = iVar2 + 1;
    puVar1[iVar2 + 0xf] = uVar5;
    iVar2 = iVar6;
  } while (iVar6 < 4);
  FUN_0215019c(puVar1);
  uVar3 = ALWidgetImp::Create(puVar1,uVar7,puVar1[0x15],uVar3);
  puVar1[0x19] = uVar3;
  FUN_02153a7c(puVar1);
  FUN_02151888(puVar1,0,param_3,1);
  uVar3 = FUN_021522e4(puVar1);
  puVar1[0x2c] = uVar3;
  FUN_021500cc(puVar1[0x61],puVar1[0x2c]);
  uVar3 = FUN_02151cd8(puVar1,uVar7,puVar1[0x15]);
  puVar1[0x24] = uVar3;
  uVar3 = FUN_021529a8(puVar1);
  puVar1[0x33] = uVar3;
  FUN_021533b0(puVar1,uVar8,puVar1[0x17],puVar1[0x33]);
  if (param_4 != 0) {
    FUN_02153a24(puVar1,param_4);
  }
  FUN_0215224c(puVar1);
  FUN_02151888(puVar1,(int)*(char *)(puVar1 + 0x10e),param_3,0);
  FUN_0214fe54(puVar1);
  iVar2 = FUN_0203b3f4();
  uVar3 = FUN_0215e2d4(*(undefined4 *)(iVar2 + 0x88),0x510000,0x1e,0,0,0x5f);
  puVar1[0x68] = uVar3;
  FUN_021500cc(uVar3,puVar1[0x23]);
  func_0x021b6214(*(undefined4 *)(puVar1[0x19] + 4),1);
  func_0x021b6214(*(undefined4 *)(puVar1[0x1a] + 4),1);
  (**(code **)(*piVar4 + 0xc))();
  FUN_0214e5f0(*puVar1,puVar1 + 0xfd,puVar1 + 0x10d);
  if (param_6 == '\0') {
    FUN_02028384(*(undefined4 *)(puVar1[0xe] + 4),FUN_0214ff54);
  }
  else {
    FUN_02073ef0(0xf,0);
    FUN_02028384(*(undefined4 *)(puVar1[0xe] + 4),FUN_0214ff24);
  }
  return puVar1;
}

