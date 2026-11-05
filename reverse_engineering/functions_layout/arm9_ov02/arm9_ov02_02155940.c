
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-GAME JGalaxyMenu::JGalaxyMenu_Create [source-string] __FILE__="JGalaxyMenu.cpp"
   __FUNCTION__="JGalaxyMenu_Create" lines=[125] passed to 1 source-location call(s) */

undefined4 *
JGalaxyMenu::JGalaxyMenu_Create(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
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
           thunk_FUN_0201a228(0x2c,s_JGalaxyMenu_cpp_0215c460,s_JGalaxyMenu_Create_0215c44c,0x7d);
  FUN_020517fc(puVar1,0,0x2c);
  *puVar1 = param_1;
  *(undefined1 *)((int)puVar1 + 0x26) = param_3;
  if ((DAT_0215cc10 & 1) == 0) {
    FUN_0214edbc(&DAT_0215c3fc,0xb2,0x2a,0xf6,100);
    DAT_0215cc10 = DAT_0215cc10 | 1;
  }
  if (*(char *)((int)puVar1 + 0x26) == '\0') {
    iVar2 = FUN_0203b3e4();
  }
  else {
    iVar2 = FUN_0203b3f4();
  }
  iVar2 = *(int *)(iVar2 + 0x88);
  iVar7 = *(int *)(iVar2 + 4);
  *(undefined1 *)(iVar7 + 0x901) = 1;
  *(undefined2 *)(iVar7 + 0x8d8) = DAT_0215c3fc;
  *(undefined2 *)(iVar7 + 0x8da) = DAT_0215c3fe;
  *(undefined2 *)(iVar7 + 0x8dc) = DAT_0215c400;
  *(undefined2 *)(iVar7 + 0x8de) = DAT_0215c402;
  iVar7 = *(int *)(iVar2 + 4);
  *(undefined1 *)(iVar7 + 0x901) = 1;
  *(undefined4 *)(iVar7 + 0x8c8) = 0x1f;
  iVar7 = *(int *)(iVar2 + 4);
  *(undefined1 *)(iVar7 + 0x901) = 1;
  *(undefined4 *)(iVar7 + 0x8d4) = 0x1f;
  iVar7 = *(int *)(iVar2 + 4);
  *(undefined1 *)(iVar7 + 0x901) = 1;
  *(undefined1 *)(iVar7 + 0x8fd) = 0;
  iVar7 = *(int *)(iVar2 + 4);
  *(undefined1 *)(iVar7 + 0x8ff) = 1;
  *(undefined1 *)(iVar7 + 0x901) = 1;
  FUN_0214ecc0(iVar2,0,0);
  if (*(char *)((int)puVar1 + 0x26) == '\0') {
    piVar3 = (int *)FUN_02156110(FUN_021561a8,FUN_0214d434,FUN_02156190);
  }
  else {
    piVar3 = (int *)FUN_02156110(FUN_02156214,FUN_0214d434,FUN_02156190);
  }
  FUN_02156180(piVar3,0x30,3);
  func_0x021b3b7c(0x20,0,piVar3,0);
  func_0x021b3b7c(0x21,0,piVar3,0);
  piVar4 = (int *)(**(code **)(*(int *)piVar3[1] + 0xb0))((int *)piVar3[1],0x31305053);
  if (piVar4 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    if (piVar4[6] == 0) {
      (**(code **)(*piVar4 + 0x14))();
    }
    iVar2 = piVar4[6];
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 4) + 100);
  piVar4 = *(int **)(iVar2 + 0x2c);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)FUN_02036430(*(undefined4 *)(iVar2 + 0x20));
  }
  if (piVar4[6] == 0) {
    (**(code **)(*piVar4 + 0x10))();
  }
  iVar2 = CommonPaletteAnime::CommonPaletteAnime_Create(piVar4[6],0x11,5,5,0x80);
  *(undefined2 *)(iVar2 + 0x18) = 0;
  *(undefined2 *)(iVar2 + 0x16) = 0x8df;
  *(undefined1 *)(iVar2 + 0x1a) = 0x1e;
  *(undefined1 *)(iVar2 + 0x1c) = 1;
  *(undefined1 *)(iVar2 + 0x1b) = 1;
  puVar1[6] = iVar2;
  (**(code **)(*piVar3 + 8))();
  if (*(char *)((int)puVar1 + 0x26) == '\0') {
    iVar2 = FUN_0203b414();
    uVar5 = FUN_02156d08(s_jgalaxy_win_sel_0215c470,*(undefined4 *)(iVar2 + 0x88));
  }
  else {
    iVar2 = FUN_0203b424(1);
    uVar5 = FUN_02156d08(s_jgalaxy_win_sel_0215c470,*(undefined4 *)(iVar2 + 0x88));
  }
  puVar1[5] = uVar5;
  _DAT_021d5154 = 0x20;
  iVar2 = ALWidgetBaseImp::Create(puVar1,0);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),0);
  func_0x021b7744(*(undefined4 *)(iVar2 + 4),1);
  local_64 = 0x2000;
  FUN_0214d650(iVar2,&local_64);
  func_0x021b6760(*(undefined4 *)(iVar2 + 4),0x20,FUN_0215652c);
  func_0x021b6760(*(undefined4 *)(iVar2 + 4),0x10,FUN_021564c4);
  iVar7 = 0;
  _DAT_021d5154 = 0x21;
  do {
    iVar6 = ALWidgetImp::Create(puVar1,iVar2,&DAT_0215c404 + iVar7 * 0x18,
                                &DAT_0215c410 + iVar7 * 0x18);
    local_60 = 0x2000;
    FUN_0214d650(iVar6,&local_60);
    puVar1[iVar7 + 2] = iVar6;
    func_0x021b65e8(*(undefined4 *)(iVar6 + 4),4,(&DAT_0215c418)[iVar7 * 6]);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 3);
  iVar7 = 0;
  do {
    if (iVar7 == 0) {
      FUN_02152f20(puVar1[2],puVar1[4]);
    }
    else {
      FUN_02152f20(puVar1[iVar7 + 2],puVar1[iVar7 + 1]);
    }
    if (iVar7 == 2) {
      FUN_02152f5c(puVar1[4],puVar1[2]);
    }
    else {
      FUN_02152f5c(puVar1[iVar7 + 2],puVar1[iVar7 + 3]);
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 3);
  iVar7 = ALWidgetImp::Create(puVar1,iVar2,&DAT_02093c8c,DAT_02093bf4);
  local_5c = 0x2000;
  FUN_0214d650(iVar7,&local_5c);
  func_0x021b65e8(*(undefined4 *)(iVar7 + 4),4,FUN_0215642c);
  FUN_02023820(*(undefined4 *)(iVar7 + 4),0);
  *(undefined1 *)(*(int *)(iVar7 + 4) + 0xab) = 0;
  *(undefined1 *)(*(int *)(iVar7 + 4) + 0xaa) = 1;
  func_0x021b77a8(*(undefined4 *)(iVar7 + 4),0x20);
  puVar1[1] = iVar2;
  FUN_02023940(*(undefined4 *)(iVar2 + 4));
  piVar3 = *(int **)(iVar2 + 4);
  uVar5 = FUN_020326b0(s_Position_0215c480);
  uVar5 = (**(code **)(*piVar3 + 0x40))(piVar3,s_Position_0215c480,&local_58,uVar5);
  FUN_0202c4a4(&local_2c,uVar5,local_58);
  local_34 = 0;
  local_30 = 0x100000;
  FUN_0214d4c0(iVar2,&local_30,&local_34);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_2c,0,local_28);
  local_3c = 0;
  local_38 = 0;
  FUN_0214d4c0(iVar2,&local_38,&local_3c);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_2c,10,local_28);
  piVar3 = *(int **)(*(int *)(iVar2 + 4) + 0x68);
  (**(code **)(*piVar3 + 0xac))(piVar3,0);
  FUN_02023c80(*(undefined4 *)(iVar2 + 4),local_2c,0x494c,local_28);
  FUN_02023c70(*(undefined4 *)(iVar2 + 4),1);
  FUN_020239a0(*(undefined4 *)(iVar2 + 4));
  local_44 = 0;
  local_40 = 0;
  FUN_0214d4c0(iVar2,&local_40,&local_44);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_2c,0,local_28);
  local_4c = 0;
  local_48 = 0x100000;
  FUN_0214d4c0(iVar2,&local_48,&local_4c);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_2c,10,local_28);
  piVar3 = *(int **)(*(int *)(iVar2 + 4) + 0x68);
  (**(code **)(*piVar3 + 0xac))(piVar3,0);
  FUN_02023c80(*(undefined4 *)(iVar2 + 4),local_2c,0x494c,local_28);
  FUN_02023c70(*(undefined4 *)(iVar2 + 4),2);
  FUN_020239a0(*(undefined4 *)(iVar2 + 4));
  local_54 = 0;
  local_50 = 0;
  FUN_0214d4c0(iVar2,&local_50,&local_54);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_2c,0,local_28);
  piVar3 = *(int **)(*(int *)(iVar2 + 4) + 0x68);
  (**(code **)(*piVar3 + 0xac))(piVar3,0);
  FUN_02023c70(*(undefined4 *)(iVar2 + 4),3);
  func_0x021b4034(*(undefined4 *)(iVar2 + 4),1);
  func_0x021b409c(*(undefined4 *)(iVar2 + 4),2);
  func_0x021b3f78(*(undefined4 *)(iVar2 + 4),3);
  func_0x021b3fb0(*(undefined4 *)(iVar2 + 4),3);
  piVar3 = *(int **)(puVar1[5] + 4);
  if (puVar1[1] == 0) {
    (**(code **)(*piVar3 + 0xd4))(piVar3,0);
  }
  else {
    (**(code **)(*piVar3 + 0xd4))(piVar3,*(undefined4 *)(puVar1[1] + 4));
  }
  piVar3 = *(int **)(puVar1[5] + 4);
  (**(code **)(**(int **)(puVar1[1] + 4) + 0xb4))(*(int **)(puVar1[1] + 4),piVar3);
  (**(code **)(*piVar3 + 0xc))();
  func_0x021b65d8(*(undefined4 *)(puVar1[1] + 4));
  return puVar1;
}

