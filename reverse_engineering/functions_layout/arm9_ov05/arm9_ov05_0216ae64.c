
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-GAME DatabasePersonal::Database_PersonalCreate [source-string]
   __FILE__="DatabasePersonal.cpp" __FUNCTION__="Database_PersonalCreate" lines=[79] passed to 1
   source-location call(s) */

int * DatabasePersonal::Database_PersonalCreate(int param_1)

{
  byte bVar1;
  undefined1 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  char *pcVar12;
  uint uVar13;
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
  
  piVar3 = (int *)thunk_FUN_0201a228(0x1ac,s_DatabasePersonal_cpp_02171da8,
                                     s_Database_PersonalCreate_02171d74,0x4f);
  func_0x021b65bc();
  FUN_020517fc(piVar3,0,0x1ac);
  piVar3[0x68] = param_1;
  FUN_0216baa0(piVar3,FUN_0216bad4,0);
  iVar4 = FUN_02026f94();
  piVar3[5] = iVar4;
  local_28 = 0x80000;
  (**(code **)(**(int **)(iVar4 + 4) + 0xa0))(*(int **)(iVar4 + 4),&local_28);
  FUN_02028384(*(undefined4 *)(piVar3[5] + 4),FUN_0216badc);
  (**(code **)(**(int **)(piVar3[5] + 4) + 0x24))(*(int **)(piVar3[5] + 4),piVar3);
  iVar4 = LocationData::LocationData_Create();
  piVar3[1] = iVar4;
  iVar4 = PopularNameData::PopularNameData_Create();
  piVar3[2] = iVar4;
  piVar5 = (int *)FUN_020101f4(s_database_database_aar_02171dc0,0);
  iVar4 = FUN_0203b414(1);
  iVar4 = FUN_0215e100(*(undefined4 *)(iVar4 + 0x88),1,4,0x8000,3,0x20,0x40,
                       s_database_personal_bg_dig_02171dd8,s_database_personal_bg_atm_02171df4,0);
  piVar3[8] = iVar4;
  (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),1);
  iVar4 = FUN_0203b414(0);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar4 + 0x88) + 4),0);
  iVar4 = FUN_0203b414(0);
  local_60 = 0;
  piVar6 = *(int **)(*(int *)(iVar4 + 0x88) + 4);
  (**(code **)(*piVar6 + 0x10))(piVar6,&local_60);
  iVar4 = 0;
  do {
    iVar7 = FUN_020101f4((&DAT_02171b90)[iVar4],0);
    iVar11 = iVar4 + 1;
    piVar3[iVar4 + 6] = iVar7;
    iVar4 = iVar11;
  } while (iVar11 < 2);
  iVar4 = FUN_0203b3e4();
  iVar4 = FUN_0215e2d4(*(undefined4 *)(iVar4 + 0x88),0x800000,0,0x80,0,0x1f);
  piVar3[0x1c] = iVar4;
  (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),1);
  piVar6 = (int *)FUN_02160ae0(FUN_0216bcf8,FUN_0216bdc8,0);
  func_0x021b3b7c(1,0,piVar6,0);
  iVar4 = (**(code **)(*(int *)piVar6[1] + 0xb0))((int *)piVar6[1],0x31305053);
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_021504fc();
  }
  iVar4 = *(int *)(*(int *)(iVar4 + 4) + 100);
  piVar10 = *(int **)(iVar4 + 0x2c);
  if (piVar10 == (int *)0x0) {
    piVar10 = (int *)FUN_02036430(*(undefined4 *)(iVar4 + 0x20));
  }
  if (piVar10[6] == 0) {
    (**(code **)(*piVar10 + 0x10))();
  }
  iVar4 = CommonPaletteAnime::CommonPaletteAnime_Create(piVar10[6],0x31,0xf,5,0x80);
  *piVar3 = iVar4;
  *(undefined2 *)(iVar4 + 0x18) = 0x870;
  *(undefined2 *)(iVar4 + 0x16) = 0x8df;
  *(undefined1 *)(iVar4 + 0x1a) = 0x1e;
  *(undefined1 *)(iVar4 + 0x1c) = 3;
  *(undefined1 *)(iVar4 + 0x1b) = 1;
  FUN_02028330(*(undefined4 *)(*(int *)*piVar3 + 4));
  (**(code **)(*piVar6 + 8))();
  piVar6 = (int *)FUN_02160ae0(FUN_0216bd08,FUN_0216bdc8,0);
  func_0x021b3b7c(2,0,piVar6,0);
  (**(code **)(*piVar6 + 8))();
  if ((DAT_021724f0 & 1) == 0) {
    DAT_021724f0 = DAT_021724f0 | 1;
  }
  _DAT_021d5154 = 2;
  iVar7 = ALWidgetBaseImp::Create(piVar3,0x60,0,1);
  piVar6 = &DAT_02171bb0;
  piVar3[9] = iVar7;
  iVar4 = 0;
  do {
    iVar11 = FUN_0203b3e4();
    iVar11 = FUN_0215e2d4(*(undefined4 *)(iVar11 + 0x88),*piVar6,piVar6[1] - *piVar6,0,0,0x1f);
    if (iVar11 != 0) {
      (**(code **)(**(int **)(iVar11 + 4) + 0xd8))(*(int **)(iVar11 + 4),1);
    }
    iVar11 = FUN_0215e9e4(iVar7,piVar6,iVar11,0x9f,0);
    piVar3[iVar4 + 10] = iVar11;
    func_0x021b7744(*(undefined4 *)(iVar11 + 4),1);
    *(int *)(*(int *)(piVar3[iVar4 + 10] + 4) + 0x124) = iVar4;
    (**(code **)(**(int **)(piVar3[iVar4 + 10] + 4) + 0x24))
              (*(int **)(piVar3[iVar4 + 10] + 4),piVar3);
    iVar11 = iVar4 + 1;
    *(undefined1 **)(*(int *)(piVar3[iVar4 + 10] + 4) + 0xec) = &LAB_0216be54;
    piVar6 = piVar6 + 9;
    *(code **)(*(int *)(piVar3[iVar4 + 10] + 4) + 0xdc) = FUN_0216bf78;
    iVar4 = iVar11;
  } while (iVar11 < 0xc);
  iVar4 = 0;
  do {
    (**(code **)(**(int **)(piVar3[iVar4 + 0xb] + 4) + 0x160))
              (*(int **)(piVar3[iVar4 + 0xb] + 4),1,*(undefined4 *)(piVar3[iVar4 + 10] + 4));
    (**(code **)(**(int **)(piVar3[iVar4 + 10] + 4) + 0x160))
              (*(int **)(piVar3[iVar4 + 10] + 4),2,*(undefined4 *)(piVar3[iVar4 + 0xb] + 4));
    iVar4 = iVar4 + 1;
  } while (iVar4 < 3);
  iVar4 = 4;
  do {
    (**(code **)(**(int **)(piVar3[iVar4 + 0xb] + 4) + 0x160))
              (*(int **)(piVar3[iVar4 + 0xb] + 4),8,*(undefined4 *)(piVar3[iVar4 + 10] + 4));
    (**(code **)(**(int **)(piVar3[iVar4 + 10] + 4) + 0x160))
              (*(int **)(piVar3[iVar4 + 10] + 4),4,*(undefined4 *)(piVar3[iVar4 + 0xb] + 4));
    iVar4 = iVar4 + 1;
  } while (iVar4 < 6);
  iVar4 = 7;
  do {
    (**(code **)(**(int **)(piVar3[iVar4 + 0xb] + 4) + 0x160))
              (*(int **)(piVar3[iVar4 + 0xb] + 4),8,*(undefined4 *)(piVar3[iVar4 + 10] + 4));
    (**(code **)(**(int **)(piVar3[iVar4 + 10] + 4) + 0x160))
              (*(int **)(piVar3[iVar4 + 10] + 4),4,*(undefined4 *)(piVar3[iVar4 + 0xb] + 4));
    iVar4 = iVar4 + 1;
  } while (iVar4 < 10);
  func_0x021b6214(*(undefined4 *)(piVar3[param_1 + 10] + 4),1);
  *(undefined1 *)(*(int *)(piVar3[0x15] + 4) + 0xb1) = 1;
  *(undefined1 *)(*(int *)(piVar3[0xc] + 4) + 0xb1) = 1;
  *(undefined1 *)(*(int *)(piVar3[0xd] + 4) + 0xb1) = 1;
  FUN_02023940(*(undefined4 *)(iVar7 + 4));
  piVar6 = *(int **)(iVar7 + 4);
  uVar8 = FUN_020326b0(s_Position_02171e10);
  uVar8 = (**(code **)(*piVar6 + 0x40))(piVar6,s_Position_02171e10,&local_5c,uVar8);
  FUN_0202c4a4(&local_40,uVar8,local_5c);
  local_48 = 0;
  local_44 = 0;
  FUN_0214ce68(iVar7,&local_44,&local_48);
  FUN_02023c60(*(undefined4 *)(iVar7 + 4),local_40,0,local_3c);
  piVar6 = *(int **)(*(int *)(iVar7 + 4) + 0x68);
  (**(code **)(*piVar6 + 0xac))(piVar6,0);
  FUN_02023c70(*(undefined4 *)(iVar7 + 4),0x810000);
  FUN_020239a0(*(undefined4 *)(iVar7 + 4));
  local_50 = 0xc0000;
  local_4c = 0;
  FUN_0214ce68(iVar7,&local_4c,&local_50);
  FUN_02023c60(*(undefined4 *)(iVar7 + 4),local_40,0,local_3c);
  local_58 = 0;
  local_54 = 0;
  FUN_0214ce68(iVar7,&local_54,&local_58);
  FUN_02023c60(*(undefined4 *)(iVar7 + 4),local_40,8,local_3c);
  piVar6 = *(int **)(*(int *)(iVar7 + 4) + 0x68);
  (**(code **)(*piVar6 + 0xac))(piVar6,0);
  FUN_02023c80(*(undefined4 *)(iVar7 + 4),local_40,0x494c,local_3c);
  FUN_02023c70(*(undefined4 *)(iVar7 + 4),0x810001);
  func_0x021b6760(*(undefined4 *)(iVar7 + 4),0x10,FUN_0216be3c);
  func_0x021b4034(*(undefined4 *)(iVar7 + 4),0x810001);
  func_0x021b3f78(*(undefined4 *)(iVar7 + 4),0x810000);
  func_0x021b65d8(*(undefined4 *)(iVar7 + 4));
  func_0x021b6214(*(undefined4 *)(iVar7 + 4),1);
  (**(code **)(**(int **)(iVar7 + 4) + 0x148))(*(int **)(iVar7 + 4),0x10);
  piVar3[0x69] = 4;
  piVar3[0x6a] = 7;
  DAT_02093c08 = DAT_02093c08 + -1;
  (&DAT_020a16d0)[DAT_02093c08] = DAT_020a0dd0;
  pcVar12 = &DAT_0216d7b0;
  iVar4 = FUN_0203b404();
  DAT_020a0dd0 = *(undefined4 *)(*(int *)(iVar4 + 0x88) + 4);
  iVar4 = func_0x021caa0c(s_font_jskfont_aft_02171e1c,0,0);
  piVar3[0x16] = iVar4;
  iVar4 = func_0x021caa0c(s_font_DSFont_aft_02171e30,0,0);
  iVar7 = 0;
  piVar3[0x17] = iVar4;
  DAT_020a0dd0 = (&DAT_020a16d0)[DAT_02093c08];
  DAT_02093c08 = DAT_02093c08 + 1;
  do {
    if (*pcVar12 == '\0') {
      iVar4 = piVar3[0x16];
    }
    else {
      iVar4 = piVar3[0x17];
    }
    iVar4 = FUN_0215e660(iVar4,&DAT_02171e40,pcVar12[1],pcVar12[2],0x7f,(int)pcVar12[3],0);
    piVar3[iVar7 + 0x18] = iVar4;
    FUN_021500cc(iVar4,piVar3[8]);
    (**(code **)(**(int **)(piVar3[iVar7 + 0x18] + 4) + 0xd8))
              (*(int **)(piVar3[iVar7 + 0x18] + 4),1);
    if (*pcVar12 != '\0') {
      local_2c = 0x1000;
      local_30 = 0;
      local_34 = 0;
      local_38 = 0;
      (**(code **)(**(int **)(piVar3[iVar7 + 0x18] + 4) + 0x100))
                (*(int **)(piVar3[iVar7 + 0x18] + 4),&local_38,&local_34,&local_30,&local_2c);
    }
    iVar7 = iVar7 + 1;
    pcVar12 = pcVar12 + 4;
  } while (iVar7 < 4);
  iVar4 = FUN_02071f08();
  iVar7 = FUN_02070cdc(0);
  iVar11 = 0;
  do {
    piVar6 = *(int **)(piVar3[iVar11 + 0x18] + 4);
    (**(code **)(*(int *)piVar6[0x19] + 0x70))();
    (**(code **)(*piVar6 + 0xc4))();
    iVar11 = iVar11 + 1;
  } while (iVar11 < 4);
  bVar1 = *(byte *)(iVar4 + 0x34);
  uVar2 = *(undefined1 *)(iVar7 + 0x35);
  iVar11 = FUN_02075780(piVar3[2]);
  uVar13 = (uint)bVar1;
  if ((int)(iVar11 - 1U) < (int)(uint)bVar1) {
    uVar13 = iVar11 - 1U;
  }
  FUN_020517fc(&DAT_021724f4,0,0x20);
  FUN_02051890(iVar4,&DAT_021724f4,0x14);
  piVar6 = *(int **)(*(int *)(piVar3[0x18] + 4) + 100);
  (**(code **)(*piVar6 + 0x6c))(piVar6,&DAT_021724f4,0xffffffff);
  uVar8 = FUN_02075788(piVar3[2],uVar13);
  FUN_02074178(&DAT_02172538,uVar8,0xc);
  piVar6 = *(int **)(*(int *)(piVar3[0x19] + 4) + 100);
  (**(code **)(*piVar6 + 0x68))(piVar6,&DAT_02172538);
  uVar8 = FUN_02075678(piVar3[1],uVar2);
  FUN_02074178(&DAT_02172538,uVar8,0x10);
  piVar6 = *(int **)(*(int *)(piVar3[0x1a] + 4) + 100);
  (**(code **)(*piVar6 + 0x68))(piVar6,&DAT_02172538);
  FUN_02074178(&DAT_02172538,iVar7 + 0x14,0x10);
  piVar6 = *(int **)(*(int *)(piVar3[0x1b] + 4) + 100);
  (**(code **)(*piVar6 + 0x68))(piVar6,&DAT_02172538);
  pcVar12 = &DAT_0216d7c0;
  iVar4 = 0;
  do {
    for (iVar7 = 0; iVar7 < *pcVar12; iVar7 = iVar7 + 1) {
      if (pcVar12[3] == '\x03') {
        iVar11 = 7;
      }
      else {
        iVar11 = 6;
      }
      iVar9 = FUN_0203b3e4();
      iVar11 = FUN_0215e2d4(*(undefined4 *)(iVar9 + 0x88),0x800000,pcVar12[3],
                            iVar7 * iVar11 + (uint)(byte)pcVar12[1],pcVar12[2],0x1f);
      piVar3[iVar4 * 5 + iVar7 + 0x1d] = iVar11;
      FUN_021500cc(iVar11,piVar3[8]);
      (**(code **)(**(int **)(piVar3[iVar4 * 5 + iVar7 + 0x1d] + 4) + 0xd8))
                (*(int **)(piVar3[iVar4 * 5 + iVar7 + 0x1d] + 4),1);
    }
    iVar4 = iVar4 + 1;
    pcVar12 = pcVar12 + 6;
  } while (iVar4 < 0xf);
  FUN_0216baf4(piVar3,1);
  FUN_021500cc(piVar3[8],piVar3[9]);
  (**(code **)(*piVar5 + 0xc))();
  return piVar3;
}

