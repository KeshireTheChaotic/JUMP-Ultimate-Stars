
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-GAME DatabaseMenu::Database_MenuCreate [source-string] __FILE__="DatabaseMenu.cpp"
   __FUNCTION__="Database_MenuCreate" lines=[67] passed to 1 source-location call(s) */

int * DatabaseMenu::Database_MenuCreate(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  piVar1 = (int *)thunk_FUN_0201a228(0x5c,s_DatabaseMenu_cpp_02171710,s_Database_MenuCreate_021716e4
                                     ,0x43);
  FUN_020517fc(piVar1,0);
  func_0x021b65bc();
  piVar1[0x12] = param_1;
  *(bool *)(piVar1 + 0x16) = (DAT_020b0b90 & 0x100) != 0;
  *(bool *)((int)piVar1 + 0x59) = (DAT_020b0b90 & 0x400) != 0;
  *(bool *)((int)piVar1 + 0x5a) = (DAT_020b0b90 & 0x800) != 0;
  FUN_0216812c(piVar1,FUN_0216815c,0);
  iVar2 = FUN_02026f94();
  piVar1[3] = iVar2;
  local_28 = 0x80000;
  (**(code **)(**(int **)(iVar2 + 4) + 0xa0))(*(int **)(iVar2 + 4),&local_28);
  FUN_02028384(*(undefined4 *)(piVar1[3] + 4),FUN_02168164);
  (**(code **)(**(int **)(piVar1[3] + 4) + 0x24))(*(int **)(piVar1[3] + 4),piVar1);
  piVar3 = (int *)FUN_020101f4(s_database_database_aar_02171724,0);
  iVar2 = FUN_0203b414(2);
  iVar2 = FUN_0215e100(*(undefined4 *)(iVar2 + 0x88),1,4,0x8000,2,0x40,0x20,
                       s_database_top_bg_dig_0217173c,s_database_top_bg_atm_02171750,0);
  piVar1[6] = iVar2;
  local_58 = 0xfff00000;
  FUN_02150a10(piVar1[6],&local_58);
  (**(code **)(**(int **)(piVar1[6] + 4) + 0xd8))(*(int **)(piVar1[6] + 4),1);
  iVar2 = FUN_0203b414(1);
  iVar2 = FUN_0215e100(*(undefined4 *)(iVar2 + 0x88),1,4,0x8000,3,0x20,0x20,s_info_bg_dig_02171764,
                       s_info_bg_atm_02171770,0);
  piVar1[7] = iVar2;
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  iVar2 = FUN_0203b414(0);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar2 + 0x88) + 4),0);
  iVar2 = FUN_0203b414(0);
  local_54 = 0;
  piVar4 = *(int **)(*(int *)(iVar2 + 0x88) + 4);
  (**(code **)(*piVar4 + 0x10))(piVar4,&local_54);
  iVar2 = 0;
  do {
    iVar5 = FUN_020101f4((&DAT_021715e4)[iVar2],0);
    iVar8 = iVar2 + 1;
    piVar1[iVar2 + 4] = iVar5;
    iVar2 = iVar8;
  } while (iVar8 < 2);
  iVar2 = thunk_FUN_0201a228(0xcc,s_ALWidget_inl_0216f484,s_Create_021715dc,0x1de);
  piVar4 = (int *)0x0;
  if (iVar2 != 0) {
    piVar4 = (int *)func_0x021af26c(iVar2,FUN_02168318,FUN_021683b0,0);
  }
  if (piVar4[6] == 0) {
    (**(code **)(*piVar4 + 0x14))();
  }
  piVar4 = (int *)piVar4[6];
  func_0x021b3b7c(1,0,piVar4,0);
  iVar2 = (**(code **)(*(int *)piVar4[1] + 0xb0))((int *)piVar4[1],0x31305053);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_021504fc();
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 4) + 100);
  piVar7 = *(int **)(iVar2 + 0x2c);
  if (piVar7 == (int *)0x0) {
    piVar7 = (int *)FUN_02036430(*(undefined4 *)(iVar2 + 0x20));
  }
  if (piVar7[6] == 0) {
    (**(code **)(*piVar7 + 0x10))();
  }
  iVar2 = CommonPaletteAnime::CommonPaletteAnime_Create(piVar7[6],0x21,0xf,5,0x80);
  *piVar1 = iVar2;
  *(undefined2 *)(iVar2 + 0x18) = 0x870;
  *(undefined2 *)(iVar2 + 0x16) = 0x8df;
  *(undefined1 *)(iVar2 + 0x1a) = 0x1e;
  *(undefined1 *)(iVar2 + 0x1c) = 3;
  *(undefined1 *)(iVar2 + 0x1b) = 1;
  FUN_02028330(*(undefined4 *)(*(int *)*piVar1 + 4));
  (**(code **)(*piVar4 + 8))();
  if ((DAT_0217241c & 1) == 0) {
    DAT_0217241c = DAT_0217241c | 1;
  }
  FUN_0202c498(&local_30);
  _DAT_021d5154 = 1;
  iVar2 = ALWidgetBaseImp::Create(piVar1,0x80,0);
  piVar4 = &DAT_021715f8;
  piVar1[8] = iVar2;
  iVar5 = 0;
  do {
    if (iVar5 == 5) {
      iVar8 = FUN_0203b3e4();
      iVar8 = FUN_0215e2d4(*(undefined4 *)(iVar8 + 0x88),*piVar4,piVar4[1] - *piVar4,0,0,0x1f);
      (**(code **)(**(int **)(iVar8 + 4) + 0xd8))(*(int **)(iVar8 + 4),1);
      iVar8 = FUN_0215e9e4(iVar2,piVar4,iVar8,0x1f,0);
      piVar1[0xe] = iVar8;
    }
    else {
      iVar8 = FUN_0203b404();
      iVar8 = FUN_0215e2d4(*(undefined4 *)(iVar8 + 0x88),*piVar4,piVar4[1] - *piVar4,0,0,0x7f);
      (**(code **)(**(int **)(iVar8 + 4) + 0xd8))(*(int **)(iVar8 + 4),1);
      iVar8 = FUN_0215e9e4(iVar2,piVar4,iVar8,0x7f,0);
      piVar1[iVar5 + 9] = iVar8;
      *(code **)(*(int *)(iVar8 + 4) + 0xe4) = FUN_021684c0;
      local_34 = (*(short *)((int)piVar4 + 0x12) + 0xc0) * 0x1000;
      FUN_02150070(piVar1[iVar5 + 9],&local_34);
      *(short *)((int)piVar1 + iVar5 * 2 + 0x4c) = -(short)iVar5;
    }
    *(int *)(*(int *)(piVar1[iVar5 + 9] + 4) + 0x124) = iVar5;
    (**(code **)(**(int **)(piVar1[iVar5 + 9] + 4) + 0x24))(*(int **)(piVar1[iVar5 + 9] + 4),piVar1)
    ;
    iVar8 = iVar5 + 9;
    iVar5 = iVar5 + 1;
    *(undefined1 *)(*(int *)(piVar1[iVar8] + 4) + 0xb1) = 1;
    piVar4 = piVar4 + 9;
  } while (iVar5 < 6);
  if ((char)piVar1[0x16] == '\0') {
    FUN_02168428(piVar1[0xc],0x800007);
  }
  if (*(char *)((int)piVar1 + 0x59) == '\0') {
    FUN_02168428(piVar1[0xb],0x800007);
  }
  if (*(char *)((int)piVar1 + 0x5a) == '\0') {
    FUN_02168428(piVar1[0xd],0x800007);
  }
  iVar5 = 0;
  do {
    (**(code **)(**(int **)(piVar1[iVar5 + 9] + 4) + 0x160))
              (*(int **)(piVar1[iVar5 + 9] + 4),1,
               *(undefined4 *)(piVar1[(byte)(&DAT_0216d78c)[iVar5 * 4] + 9] + 4));
    (**(code **)(**(int **)(piVar1[iVar5 + 9] + 4) + 0x160))
              (*(int **)(piVar1[iVar5 + 9] + 4),2,
               *(undefined4 *)(piVar1[(byte)(&DAT_0216d78d)[iVar5 * 4] + 9] + 4));
    (**(code **)(**(int **)(piVar1[iVar5 + 9] + 4) + 0x160))
              (*(int **)(piVar1[iVar5 + 9] + 4),4,
               *(undefined4 *)(piVar1[(byte)(&DAT_0216d78e)[iVar5 * 4] + 9] + 4));
    (**(code **)(**(int **)(piVar1[iVar5 + 9] + 4) + 0x160))
              (*(int **)(piVar1[iVar5 + 9] + 4),8,
               *(undefined4 *)(piVar1[(byte)(&DAT_0216d78f)[iVar5 * 4] + 9] + 4));
    iVar5 = iVar5 + 1;
  } while (iVar5 < 5);
  func_0x021b6214(*(undefined4 *)(piVar1[param_1 + 9] + 4),1);
  FUN_02023940(*(undefined4 *)(iVar2 + 4));
  piVar4 = *(int **)(iVar2 + 4);
  uVar6 = FUN_020326b0(s_Position_0217177c);
  uVar6 = (**(code **)(*piVar4 + 0x40))(piVar4,s_Position_0217177c,&local_50,uVar6);
  FUN_0202c4a4(&local_3c,uVar6,local_50);
  local_2c = local_38;
  local_30 = local_3c;
  local_44 = 0;
  local_40 = 0;
  FUN_0214ce68(iVar2,&local_40,&local_44);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_30,0,local_2c);
  piVar4 = *(int **)(*(int *)(iVar2 + 4) + 0x68);
  (**(code **)(*piVar4 + 0xac))(piVar4,0);
  FUN_02023c70(*(undefined4 *)(iVar2 + 4),0x820000);
  FUN_020239a0(*(undefined4 *)(iVar2 + 4));
  local_4c = 0;
  local_48 = 0;
  FUN_0214ce68(iVar2,&local_48,&local_4c);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_30,0,local_2c);
  piVar4 = *(int **)(*(int *)(iVar2 + 4) + 0x68);
  (**(code **)(*piVar4 + 0xac))(piVar4,0);
  FUN_02023c70(*(undefined4 *)(iVar2 + 4),0x820001);
  func_0x021b6760(*(undefined4 *)(iVar2 + 4),0x10,FUN_02168424);
  func_0x021b4034(*(undefined4 *)(iVar2 + 4),0x820001);
  func_0x021b3f78(*(undefined4 *)(iVar2 + 4),0x820000);
  func_0x021b65d8(*(undefined4 *)(iVar2 + 4));
  func_0x021b6214(*(undefined4 *)(iVar2 + 4),1);
  (**(code **)(**(int **)(iVar2 + 4) + 0x148))(*(int **)(iVar2 + 4),0x10);
  iVar2 = FUN_0203b404();
  iVar2 = FUN_0215e2d4(*(undefined4 *)(iVar2 + 0x88),0x800000,0,0x80,0,0x80);
  piVar1[0xf] = iVar2;
  iVar2 = FUN_0203b404();
  iVar2 = FUN_0215e2d4(*(undefined4 *)(iVar2 + 0x88),0x800000,1,0x58,0x23,0x80);
  piVar1[0x10] = iVar2;
  iVar2 = FUN_0203b404();
  iVar2 = FUN_0215e2d4(*(undefined4 *)(iVar2 + 0x88),0x800000,9,0xba,0x98,0xe0);
  piVar1[0x11] = iVar2;
  (**(code **)(**(int **)(piVar1[0xf] + 4) + 0xd8))(*(int **)(piVar1[0xf] + 4),1);
  (**(code **)(**(int **)(piVar1[0x10] + 4) + 0xd8))(*(int **)(piVar1[0x10] + 4),1);
  (**(code **)(**(int **)(piVar1[0x11] + 4) + 0xd8))(*(int **)(piVar1[0x11] + 4),1);
  FUN_021500cc(piVar1[0x10],piVar1[6]);
  FUN_021500cc(piVar1[0x11],piVar1[6]);
  (**(code **)(*piVar3 + 0xc))();
  func_0x021b65d8(*(undefined4 *)(piVar1[8] + 4));
  return piVar1;
}

