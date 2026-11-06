
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-GAME JArenaRankingMenu::JARankMenu_Add [source-string] __FILE__="JArenaRankingMenu.cpp"
   __FUNCTION__="JARankMenu_Add" lines=[162] passed to 1 source-location call(s) */

int JArenaRankingMenu::JARankMenu_Add(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  int local_70;
  int local_6c;
  undefined4 local_68;
  undefined4 local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c [2];
  
  puVar1 = (undefined1 *)thunk_FUN_0201a228(0x78,&DAT_0215ddfc,s_JARankMenu_Add_0215dd74,0xa2);
  FUN_020517fc(puVar1,0,0x78);
  FUN_0207038c();
  iVar2 = FUN_02020d90();
  local_2c[1] = 0x85000;
  (**(code **)(**(int **)(iVar2 + 4) + 0xa0))(*(int **)(iVar2 + 4),local_2c + 1);
  FUN_02028384(*(undefined4 *)(iVar2 + 4),FUN_0214fb9c);
  (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),puVar1);
  FUN_0214fb44(iVar2,param_1);
  *(int *)(puVar1 + 4) = iVar2;
  puVar1[1] = *(undefined1 *)(*(int *)(*(int *)(param_1 + 4) + 0x10) + 0x1d);
  *puVar1 = 0x21;
  uVar3 = FUN_02028920(0);
  *(undefined4 *)(puVar1 + 8) = uVar3;
  iVar9 = 0;
  do {
    iVar4 = FUN_0203b414(iVar9 + 1);
    uVar3 = FUN_0214d3a8((&DAT_0215dcc4)[iVar9],(&DAT_0215dcbc)[iVar9],*(undefined4 *)(iVar4 + 0x88)
                        );
    iVar4 = iVar9 * 4;
    iVar9 = iVar9 + 1;
    *(undefined4 *)(puVar1 + iVar4 + 0x18) = uVar3;
  } while (iVar9 < 2);
  iVar9 = 0;
  do {
    uVar3 = FUN_020101f4((&DAT_0215dccc)[iVar9],0);
    iVar4 = iVar9 * 4;
    iVar9 = iVar9 + 1;
    *(undefined4 *)(puVar1 + iVar4 + 0xc) = uVar3;
  } while (iVar9 < 3);
  FUN_02043264(1);
  FUN_0203d4e4();
  iVar9 = FUN_0203b414(0);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar9 + 0x88) + 4),0);
  iVar9 = FUN_0203b414(0);
  local_3c = 0x1000;
  piVar5 = *(int **)(*(int *)(iVar9 + 0x88) + 4);
  (**(code **)(*piVar5 + 0x10))(piVar5,&local_3c);
  iVar9 = FUN_0203b414(1);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar9 + 0x88) + 4),1);
  iVar9 = FUN_0203b414(1);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar9 + 0x88) + 4),4);
  iVar9 = FUN_0203b414(1);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar9 + 0x88) + 4),0x20,0x20);
  iVar9 = FUN_0203b414(1);
  piVar5 = *(int **)(*(int *)(iVar9 + 0x88) + 4);
  (**(code **)(*piVar5 + 0x90))(piVar5,0x8000);
  iVar9 = FUN_0203b414(1);
  local_38 = 0x3000;
  piVar5 = *(int **)(*(int *)(iVar9 + 0x88) + 4);
  (**(code **)(*piVar5 + 0x10))(piVar5,&local_38);
  iVar9 = FUN_0203b414(1);
  piVar5 = *(int **)(*(int *)(iVar9 + 0x88) + 4);
  (**(code **)(*piVar5 + 0x94))(piVar5,1);
  iVar9 = FUN_0203b414(2);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar9 + 0x88) + 4),1);
  iVar9 = FUN_0203b414(2);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar9 + 0x88) + 4),4);
  iVar9 = FUN_0203b414(2);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar9 + 0x88) + 4),0x40,0x20);
  iVar9 = FUN_0203b414(2);
  piVar5 = *(int **)(*(int *)(iVar9 + 0x88) + 4);
  (**(code **)(*piVar5 + 0x90))(piVar5,0x4000);
  iVar9 = FUN_0203b414(2);
  local_34 = 0x2000;
  piVar5 = *(int **)(*(int *)(iVar9 + 0x88) + 4);
  (**(code **)(*piVar5 + 0x10))(piVar5,&local_34);
  iVar9 = FUN_0203b414(3);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar9 + 0x88) + 4),1);
  iVar9 = FUN_0203b414(3);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar9 + 0x88) + 4),4);
  iVar9 = FUN_0203b414(3);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar9 + 0x88) + 4),0,0);
  iVar9 = FUN_0203b414(3);
  piVar5 = *(int **)(*(int *)(iVar9 + 0x88) + 4);
  (**(code **)(*piVar5 + 0x90))(piVar5,0);
  iVar9 = FUN_0203b414(3);
  local_30 = 0;
  piVar5 = *(int **)(*(int *)(iVar9 + 0x88) + 4);
  (**(code **)(*piVar5 + 0x10))(piVar5,&local_30);
  iVar9 = 0;
  do {
    iVar4 = FUN_0203b424(iVar9);
    FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar4 + 0x88) + 4),1);
    iVar4 = FUN_0203b424(iVar9);
    FUN_0203d478(*(undefined4 *)(*(int *)(iVar4 + 0x88) + 4),4);
    iVar4 = FUN_0203b424(iVar9);
    FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar4 + 0x88) + 4),0,0);
    iVar4 = FUN_0203b424(iVar9);
    piVar5 = *(int **)(*(int *)(iVar4 + 0x88) + 4);
    (**(code **)(*piVar5 + 0x90))(piVar5,0);
    iVar4 = FUN_0203b424(iVar9);
    local_2c[0] = iVar9 << 0xc;
    piVar5 = *(int **)(*(int *)(iVar4 + 0x88) + 4);
    (**(code **)(*piVar5 + 0x10))(piVar5,local_2c);
    iVar9 = iVar9 + 1;
  } while (iVar9 < 4);
  iVar9 = thunk_FUN_0201a228(0xcc,s_ALWidget_inl_0215dbec,s_Create_0215dcb4,0x1de);
  piVar5 = (int *)0x0;
  if (iVar9 != 0) {
    piVar5 = (int *)func_0x021af26c(iVar9,FUN_021501d0,FUN_02150288,0);
  }
  if (piVar5[6] == 0) {
    (**(code **)(*piVar5 + 0x14))();
  }
  piVar5 = (int *)piVar5[6];
  func_0x021b3b7c(1,0,piVar5,0);
  _DAT_021d5154 = 1;
  iVar9 = (**(code **)(*(int *)piVar5[1] + 0xb0))((int *)piVar5[1],0x31305053);
  if (iVar9 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = FUN_0214d47c();
  }
  iVar9 = *(int *)(*(int *)(iVar9 + 4) + 100);
  piVar8 = *(int **)(iVar9 + 0x2c);
  if (piVar8 == (int *)0x0) {
    piVar8 = (int *)FUN_02036430(*(undefined4 *)(iVar9 + 0x20));
  }
  if (piVar8[6] == 0) {
    (**(code **)(*piVar8 + 0x10))();
  }
  iVar9 = CommonPaletteAnime::CommonPaletteAnime_Create(piVar8[6],0x21,2,5,0x80);
  *(int *)(puVar1 + 0x6c) = iVar9;
  *(undefined2 *)(iVar9 + 0x18) = 0;
  *(undefined2 *)(iVar9 + 0x16) = 0x8df;
  *(undefined1 *)(iVar9 + 0x1a) = 0x1e;
  *(undefined1 *)(iVar9 + 0x1c) = 1;
  *(undefined1 *)(iVar9 + 0x1b) = 1;
  (**(code **)(*piVar5 + 8))();
  iVar9 = ALWidgetBaseImp::Create(puVar1);
  (**(code **)(**(int **)(iVar9 + 4) + 0xd8))(*(int **)(iVar9 + 4),1);
  *(undefined4 *)(*(int *)(iVar9 + 4) + 0x124) = 0x100;
  *(int *)(puVar1 + 0x20) = iVar9;
  iVar4 = ALWidgetImp::Create(iVar9,_DAT_021d5154);
  FUN_0214e908(iVar4,*(undefined4 *)(puVar1 + 0x18));
  (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),1);
  func_0x021b6214(*(undefined4 *)(iVar4 + 4),0);
  FUN_02028384(*(undefined4 *)(iVar4 + 4),FUN_02150330);
  (**(code **)(**(int **)(iVar4 + 4) + 0x24))(*(int **)(iVar4 + 4),puVar1);
  (**(code **)(**(int **)(*(int *)(puVar1 + 0x18) + 4) + 0xd8))
            (*(int **)(*(int *)(puVar1 + 0x18) + 4),1);
  *(int *)(puVar1 + 0x54) = iVar4;
  iVar4 = ALWidgetImp::Create(iVar9,_DAT_021d5154);
  FUN_0214e908(iVar4,*(undefined4 *)(puVar1 + 0x1c));
  (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),1);
  func_0x021b6214(*(undefined4 *)(iVar4 + 4),0);
  (**(code **)(**(int **)(*(int *)(puVar1 + 0x1c) + 4) + 0xd8))
            (*(int **)(*(int *)(puVar1 + 0x1c) + 4),1);
  *(int *)(puVar1 + 0x50) = iVar4;
  local_44 = 0x80;
  local_40 = 0;
  iVar4 = FUN_0203b404();
  iVar4 = ALWidgetImp::Create(iVar9,*(undefined4 *)(iVar4 + 0x88),0x810000,1,0x81,&local_44);
  (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),1);
  func_0x021b6214(*(undefined4 *)(iVar4 + 4),0);
  *(int *)(puVar1 + 0x48) = iVar4;
  local_44 = 0x100;
  local_40 = 0xc0;
  iVar4 = FUN_0203b3e4();
  iVar4 = ALWidgetImp::Create(iVar9,*(undefined4 *)(iVar4 + 0x88),0x510000,0,0xa0,&local_44);
  (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),1);
  *(undefined1 *)(*(int *)(iVar4 + 4) + 0xaa) = 1;
  func_0x021b77a8(*(undefined4 *)(iVar4 + 4),0x20);
  (**(code **)(**(int **)(iVar4 + 4) + 0x24))(*(int **)(iVar4 + 4),puVar1);
  uVar3 = FUN_0214e81c(0,&DAT_0215dce0,&DAT_02093c8c);
  FUN_02020e98(iVar4,uVar3);
  func_0x021b65e8(*(undefined4 *)(iVar4 + 4),4,FUN_02150130);
  func_0x021b6760(*(undefined4 *)(iVar4 + 4),4,FUN_02150148);
  FUN_02023894(*(undefined4 *)(iVar4 + 4),0x510001,0);
  func_0x021b3f78(*(undefined4 *)(iVar4 + 4),0x510000);
  func_0x021b3fc4(*(undefined4 *)(iVar4 + 4),0x510001);
  *(undefined4 *)(*(int *)(iVar4 + 4) + 0x124) = 9;
  *(int *)(puVar1 + 0x4c) = iVar4;
  local_44 = 0x40;
  local_40 = 0x6a;
  iVar4 = 5;
  do {
    iVar6 = FUN_0203b404();
    iVar7 = ALWidgetImp::Create(iVar9,*(undefined4 *)(iVar6 + 0x88),0x800000,(iVar4 + -5) * 2 + 1,
                                0x84 - (iVar4 + -5),&local_44);
    (**(code **)(**(int **)(iVar7 + 4) + 0xd8))(*(int **)(iVar7 + 4),1);
    func_0x021b6214(*(undefined4 *)(iVar7 + 4),0);
    iVar6 = iVar4 * 4;
    iVar4 = iVar4 + 1;
    *(int *)(puVar1 + iVar6 + 0x28) = iVar7;
  } while (iVar4 < 8);
  iVar9 = ALWidgetBaseImp::Create(puVar1);
  *(undefined4 *)(*(int *)(iVar9 + 4) + 0x140) = 4;
  func_0x021b7744(*(undefined4 *)(iVar9 + 4),1);
  *(undefined4 *)(*(int *)(iVar9 + 4) + 0x124) = 0x101;
  func_0x021b65e8(*(undefined4 *)(iVar9 + 4),0x10,FUN_02150380);
  func_0x021b6760(*(undefined4 *)(iVar9 + 4),0x10,FUN_02150390);
  *(int *)(puVar1 + 0x24) = iVar9;
  uVar10 = 0;
  do {
    local_6c = uVar10 * 0x1b + 0x2a;
    local_70 = 0xb8;
    if (uVar10 == 3) {
      FUN_0214fb7c(*(undefined4 *)(puVar1 + 4));
      iVar4 = FUN_0214fde8();
      uVar3 = uRam0215d47c;
      if (iVar4 != 0) {
        uVar3 = 0xd;
      }
    }
    else {
      uVar3 = (&DAT_0215d470)[uVar10];
    }
    iVar4 = FUN_0203b404();
    iVar4 = ALWidgetImp::Create(iVar9,*(undefined4 *)(iVar4 + 0x88),0x810000,uVar3,0x87,&local_70);
    FUN_02023940(*(undefined4 *)(iVar4 + 4));
    piVar5 = *(int **)(iVar4 + 4);
    uVar3 = FUN_020326b0(s_Position_0215de14);
    uVar3 = (**(code **)(*piVar5 + 0x40))(piVar5,s_Position_0215de14,&local_48,uVar3);
    FUN_0202c4a4(&local_68,uVar3,local_48);
    local_5c = local_6c << 0xc;
    local_60 = (local_70 + 0xa0) * 0x1000;
    FUN_0214e990(iVar4,&local_60,&local_5c);
    FUN_02023c60(*(undefined4 *)(iVar4 + 4),local_68,0,local_64);
    local_54 = local_6c << 0xc;
    local_58 = local_70 << 0xc;
    FUN_0214e990(iVar4,&local_58,&local_54);
    FUN_02023c60(*(undefined4 *)(iVar4 + 4),local_68,8,local_64);
    piVar5 = *(int **)(*(int *)(iVar4 + 4) + 0x68);
    (**(code **)(*piVar5 + 0xac))(piVar5,0);
    FUN_02023c80(*(undefined4 *)(iVar4 + 4),local_68,0x494c,local_64);
    FUN_02023c70(*(undefined4 *)(iVar4 + 4),3);
    func_0x021b4034(*(undefined4 *)(iVar4 + 4),3);
    uVar3 = FUN_0214e81c(0,&DAT_0215dcd8,&DAT_02093c8c);
    FUN_02020e98(iVar4,uVar3);
    func_0x021b65e8(*(undefined4 *)(iVar4 + 4),1,FUN_021502c0);
    func_0x021b65e8(*(undefined4 *)(iVar4 + 4),0x10,FUN_0214fe04);
    func_0x021b65e8(*(undefined4 *)(iVar4 + 4),4,FUN_0214fe38);
    func_0x021b6760(*(undefined4 *)(iVar4 + 4),4,FUN_0214fea4);
    *(uint *)(*(int *)(iVar4 + 4) + 0x124) = uVar10;
    (**(code **)(**(int **)(iVar4 + 4) + 0x24))(*(int **)(iVar4 + 4),puVar1);
    local_4c = local_6c << 0xc;
    local_50 = (local_70 + 0xa0) * 0x1000;
    FUN_0214e990(iVar4,&local_50,&local_4c);
    *(int *)(puVar1 + uVar10 * 4 + 0x28) = iVar4;
    if (uVar10 == (byte)puVar1[1]) {
      func_0x021b6214(*(undefined4 *)(iVar4 + 4),1);
    }
    uVar10 = uVar10 + 1;
  } while ((int)uVar10 < 5);
  iVar4 = 0;
  do {
    iVar6 = iVar4 + -1;
    if (iVar6 < 0) {
      iVar6 = 4;
    }
    iVar7 = iVar4 + 1;
    if (4 < iVar7) {
      iVar7 = 0;
    }
    piVar5 = *(int **)(*(int *)(puVar1 + iVar4 * 4 + 0x28) + 4);
    if (*(int *)(puVar1 + iVar6 * 4 + 0x28) == 0) {
      (**(code **)(*piVar5 + 0x164))(piVar5,1);
    }
    else {
      (**(code **)(*piVar5 + 0x160))
                (piVar5,1,*(undefined4 *)(*(int *)(puVar1 + iVar6 * 4 + 0x28) + 4));
    }
    piVar5 = *(int **)(*(int *)(puVar1 + iVar4 * 4 + 0x28) + 4);
    if (*(int *)(puVar1 + iVar7 * 4 + 0x28) == 0) {
      (**(code **)(*piVar5 + 0x164))(piVar5,2);
    }
    else {
      (**(code **)(*piVar5 + 0x160))
                (piVar5,2,*(undefined4 *)(*(int *)(puVar1 + iVar7 * 4 + 0x28) + 4));
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 5);
  local_70 = -0x40;
  local_6c = 0;
  iVar4 = 0xc;
  do {
    iVar6 = (**(code **)(iVar4 * 4 + 0x215d430))();
    if (iVar6 != 0) {
      iVar6 = FUN_0203b404();
      iVar6 = ALWidgetImp::Create(iVar9,*(undefined4 *)(iVar6 + 0x88),0x810000,4,0x81,&local_70);
      FUN_0214fb44(iVar6,*(undefined4 *)(puVar1 + iVar4 * 4 + -8));
      (**(code **)(**(int **)(iVar6 + 4) + 0xd8))(*(int **)(iVar6 + 4),1);
      *(int *)(puVar1 + iVar4 * 4 + 0x28) = iVar6;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x10);
  uVar3 = func_0x021bcf1c(2,1,1,0xffffffff);
  *(undefined4 *)(puVar1 + 0x68) = uVar3;
  FUN_021502d8(puVar1,puVar1[1]);
  FUN_02073ebc(2,1);
  (**(code **)(**(int **)(*(int *)(puVar1 + 0x24) + 4) + 0x148))
            (*(int **)(*(int *)(puVar1 + 0x24) + 4),0x10);
  if ((DAT_020aff26 != '\0') && (DAT_020afee6 == '\0')) {
    puVar1[2] = 1;
    iVar9 = 0;
    do {
      if (*(int *)(puVar1 + iVar9 * 4 + 0x20) != 0) {
        func_0x021b65d8(*(undefined4 *)(*(int *)(puVar1 + iVar9 * 4 + 0x20) + 4));
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < 2);
  }
  return iVar2;
}

