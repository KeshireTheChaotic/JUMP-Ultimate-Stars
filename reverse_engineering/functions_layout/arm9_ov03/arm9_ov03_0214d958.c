
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-GAME JArenaTopMenu::JATopMenu_Add [source-string] __FILE__="JArenaTopMenu.cpp"
   __FUNCTION__="JATopMenu_Add" lines=[144] passed to 1 source-location call(s) */

undefined4
JArenaTopMenu::JATopMenu_Add(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  int iStack_70;
  int iStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int aiStack_4c [8];
  undefined4 local_2c;
  undefined4 uStack_28;
  
  uStack_28 = param_4;
  puVar1 = (undefined1 *)
           thunk_FUN_0201a228(0x6c,s_JArenaTopMenu_cpp_0215dc94,s_JATopMenu_Add_0215dbfc,0x90);
  FUN_020517fc(puVar1,0,0x6c);
  iVar2 = FUN_02020d90();
  local_2c = 0x85000;
  (**(code **)(**(int **)(iVar2 + 4) + 0xa0))(*(int **)(iVar2 + 4),&local_2c);
  FUN_02028384(*(undefined4 *)(iVar2 + 4),FUN_0214e6c4);
  (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),puVar1);
  piVar3 = *(int **)(iVar2 + 4);
  if (param_1 == 0) {
    (**(code **)(*piVar3 + 0xd4))(piVar3,0);
  }
  else {
    (**(code **)(*piVar3 + 0xd4))(piVar3,*(undefined4 *)(param_1 + 4));
  }
  *(int *)(puVar1 + 4) = iVar2;
  puVar1[1] = *(undefined1 *)(*(int *)(*(int *)(param_1 + 4) + 0x10) + 0x1d);
  *puVar1 = 0x21;
  uVar4 = FUN_02028920(0);
  *(undefined4 *)(puVar1 + 8) = uVar4;
  FUN_02043264(1);
  iVar2 = FUN_0203b414(0);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar2 + 0x88) + 4),0);
  iVar2 = FUN_0203b414(0);
  aiStack_4c[3] = 0;
  piVar3 = *(int **)(*(int *)(iVar2 + 0x88) + 4);
  (**(code **)(*piVar3 + 0x10))(piVar3,aiStack_4c + 3);
  iVar2 = FUN_0203b414(1);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar2 + 0x88) + 4),1);
  iVar2 = FUN_0203b414(1);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar2 + 0x88) + 4),4);
  iVar2 = FUN_0203b414(1);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar2 + 0x88) + 4),0x20,0x20);
  iVar2 = FUN_0203b414(1);
  piVar3 = *(int **)(*(int *)(iVar2 + 0x88) + 4);
  (**(code **)(*piVar3 + 0x90))(piVar3,0x8000);
  iVar2 = FUN_0203b414(1);
  aiStack_4c[4] = 0x3000;
  piVar3 = *(int **)(*(int *)(iVar2 + 0x88) + 4);
  (**(code **)(*piVar3 + 0x10))(piVar3,aiStack_4c + 4);
  iVar2 = FUN_0203b414(1);
  piVar3 = *(int **)(*(int *)(iVar2 + 0x88) + 4);
  (**(code **)(*piVar3 + 0x94))(piVar3,1);
  iVar2 = FUN_0203b414(2);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar2 + 0x88) + 4),1);
  iVar2 = FUN_0203b414(2);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar2 + 0x88) + 4),4);
  iVar2 = FUN_0203b414(2);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar2 + 0x88) + 4),0x40,0x20);
  iVar2 = FUN_0203b414(2);
  piVar3 = *(int **)(*(int *)(iVar2 + 0x88) + 4);
  (**(code **)(*piVar3 + 0x90))(piVar3,0x4000);
  iVar2 = FUN_0203b414(2);
  aiStack_4c[5] = 0x2000;
  piVar3 = *(int **)(*(int *)(iVar2 + 0x88) + 4);
  (**(code **)(*piVar3 + 0x10))(piVar3,aiStack_4c + 5);
  iVar2 = FUN_0203b414(3);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar2 + 0x88) + 4),1);
  iVar2 = FUN_0203b414(3);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar2 + 0x88) + 4),4);
  iVar2 = FUN_0203b414(3);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar2 + 0x88) + 4),0,0);
  iVar2 = FUN_0203b414(3);
  piVar3 = *(int **)(*(int *)(iVar2 + 0x88) + 4);
  (**(code **)(*piVar3 + 0x90))(piVar3,0);
  iVar2 = FUN_0203b414(3);
  aiStack_4c[6] = 0x1000;
  piVar3 = *(int **)(*(int *)(iVar2 + 0x88) + 4);
  (**(code **)(*piVar3 + 0x10))(piVar3,aiStack_4c + 6);
  iVar2 = 0;
  do {
    iVar5 = FUN_0203b424(iVar2);
    FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar5 + 0x88) + 4),1);
    iVar5 = FUN_0203b424(iVar2);
    FUN_0203d478(*(undefined4 *)(*(int *)(iVar5 + 0x88) + 4),4);
    iVar5 = FUN_0203b424(iVar2);
    FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar5 + 0x88) + 4),0,0);
    iVar5 = FUN_0203b424(iVar2);
    piVar3 = *(int **)(*(int *)(iVar5 + 0x88) + 4);
    (**(code **)(*piVar3 + 0x90))(piVar3,0);
    iVar5 = FUN_0203b424(iVar2);
    aiStack_4c[7] = iVar2 << 0xc;
    piVar3 = *(int **)(*(int *)(iVar5 + 0x88) + 4);
    (**(code **)(*piVar3 + 0x10))(piVar3,aiStack_4c + 7);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  iVar2 = 0;
  do {
    iVar5 = FUN_0203b414(iVar2 + 1);
    uVar4 = FUN_0214d3a8((&DAT_0215db3c)[iVar2],(&DAT_0215db34)[iVar2],*(undefined4 *)(iVar5 + 0x88)
                        );
    iVar5 = iVar2 * 4;
    iVar2 = iVar2 + 1;
    *(undefined4 *)(puVar1 + iVar5 + 0x18) = uVar4;
  } while (iVar2 < 2);
  iVar2 = 0;
  do {
    uVar4 = FUN_020101f4((&DAT_0215db44)[iVar2],0);
    iVar5 = iVar2 * 4;
    iVar2 = iVar2 + 1;
    *(undefined4 *)(puVar1 + iVar5 + 0xc) = uVar4;
  } while (iVar2 < 3);
  iVar2 = thunk_FUN_0201a228(0xcc,s_ALWidget_inl_0215dbec,&DAT_0215db1c,0x1de);
  piVar3 = (int *)0x0;
  if (iVar2 != 0) {
    piVar3 = (int *)func_0x021af26c(iVar2,FUN_0214ec20,FUN_0214eccc,0);
  }
  if (piVar3[6] == 0) {
    (**(code **)(*piVar3 + 0x14))();
  }
  piVar3 = (int *)piVar3[6];
  func_0x021b3b7c(1,0,piVar3,0);
  _DAT_021d5154 = 1;
  iVar2 = (**(code **)(*(int *)piVar3[1] + 0xb0))((int *)piVar3[1],0x31305053);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_0214d47c();
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 4) + 100);
  piVar6 = *(int **)(iVar2 + 0x2c);
  if (piVar6 == (int *)0x0) {
    piVar6 = (int *)FUN_02036430(*(undefined4 *)(iVar2 + 0x20));
  }
  if (piVar6[6] == 0) {
    (**(code **)(*piVar6 + 0x10))();
  }
  iVar2 = CommonPaletteAnime::CommonPaletteAnime_Create(piVar6[6],0x21,2,5,0x80);
  *(int *)(puVar1 + 0x60) = iVar2;
  if (iVar2 != 0) {
    *(undefined2 *)(iVar2 + 0x18) = 0;
    *(undefined2 *)(iVar2 + 0x16) = 0x8df;
    *(undefined1 *)(iVar2 + 0x1a) = 0x1e;
    *(undefined1 *)(iVar2 + 0x1c) = 1;
    *(undefined1 *)(iVar2 + 0x1b) = 1;
  }
  (**(code **)(*piVar3 + 8))();
  iVar2 = ALWidgetBaseImp::Create(puVar1);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  *(undefined4 *)(*(int *)(iVar2 + 4) + 0x124) = 0x100;
  *(int *)(puVar1 + 0x20) = iVar2;
  aiStack_4c[1] = 0x100;
  aiStack_4c[2] = 0xc0;
  iVar2 = FUN_0203b3e4();
  iVar2 = ALWidgetImp::Create(*(undefined4 *)(puVar1 + 0x20),*(undefined4 *)(iVar2 + 0x88),0x510000,
                              0,0xa0,aiStack_4c + 1);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  *(undefined1 *)(*(int *)(iVar2 + 4) + 0xaa) = 1;
  *(undefined1 *)(*(int *)(iVar2 + 4) + 0xab) = 0;
  func_0x021b77a8(*(undefined4 *)(iVar2 + 4),0x20);
  (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),puVar1);
  uVar4 = FUN_0214e81c(0,&DAT_0215db58,&DAT_02093c8c);
  FUN_02020e98(iVar2,uVar4);
  func_0x021b65e8(*(undefined4 *)(iVar2 + 4),4,FUN_0214eb7c);
  func_0x021b6760(*(undefined4 *)(iVar2 + 4),4,FUN_0214eb94);
  FUN_02023894(*(undefined4 *)(iVar2 + 4),0x510000,0);
  func_0x021b3f78(*(undefined4 *)(iVar2 + 4),0x510000);
  func_0x021b3fc4(*(undefined4 *)(iVar2 + 4),0x510001);
  *(undefined4 *)(*(int *)(iVar2 + 4) + 0x124) = 4;
  *(int *)(puVar1 + 0x40) = iVar2;
  aiStack_4c[1] = 0x80;
  aiStack_4c[2] = 0;
  iVar2 = FUN_0203b404();
  iVar2 = ALWidgetImp::Create(*(undefined4 *)(puVar1 + 0x20),*(undefined4 *)(iVar2 + 0x88),0x810000,
                              0,0x81,aiStack_4c + 1);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  func_0x021b6214(*(undefined4 *)(iVar2 + 4),0);
  *(int *)(puVar1 + 0x44) = iVar2;
  iVar2 = ALWidgetImp::Create(*(undefined4 *)(puVar1 + 0x20),_DAT_021d5154);
  FUN_0214e908(iVar2,*(undefined4 *)(puVar1 + 0x18));
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  func_0x021b6214(*(undefined4 *)(iVar2 + 4),0);
  FUN_02028384(*(undefined4 *)(iVar2 + 4),FUN_0214ed44);
  (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),puVar1);
  (**(code **)(**(int **)(*(int *)(puVar1 + 0x18) + 4) + 0xd8))
            (*(int **)(*(int *)(puVar1 + 0x18) + 4),1);
  *(int *)(puVar1 + 0x4c) = iVar2;
  iVar2 = ALWidgetBaseImp::Create(puVar1);
  *(undefined4 *)(*(int *)(iVar2 + 4) + 0x140) = 4;
  func_0x021b7744(*(undefined4 *)(iVar2 + 4),1);
  *(undefined4 *)(*(int *)(iVar2 + 4) + 0x124) = 0x101;
  func_0x021b65e8(*(undefined4 *)(iVar2 + 4),0x10,FUN_0214ea38);
  func_0x021b6760(*(undefined4 *)(iVar2 + 4),0x10,FUN_0214ea48);
  *(int *)(puVar1 + 0x24) = iVar2;
  uVar8 = 0;
  do {
    iStack_6c = uVar8 * 0x20 + 0x30;
    iStack_70 = 0xb8;
    iVar2 = FUN_0203b404();
    iVar2 = ALWidgetImp::Create(*(undefined4 *)(puVar1 + 0x24),*(undefined4 *)(iVar2 + 0x88),
                                0x810000,uVar8 + 5,0x86,&iStack_70);
    FUN_02023940(*(undefined4 *)(iVar2 + 4));
    FUN_0214e940(&uStack_68,iVar2,s_Position_0215dca8);
    iStack_5c = iStack_6c << 0xc;
    iStack_60 = (iStack_70 + 0xa0) * 0x1000;
    FUN_0214e990(iVar2,&iStack_60,&iStack_5c);
    FUN_02023c60(*(undefined4 *)(iVar2 + 4),uStack_68,0,uStack_64);
    iStack_54 = iStack_6c << 0xc;
    iStack_58 = iStack_70 << 0xc;
    FUN_0214e990(iVar2,&iStack_58,&iStack_54);
    FUN_02023c60(*(undefined4 *)(iVar2 + 4),uStack_68,8,uStack_64);
    piVar3 = *(int **)(*(int *)(iVar2 + 4) + 0x68);
    (**(code **)(*piVar3 + 0xac))(piVar3,0);
    FUN_02023c80(*(undefined4 *)(iVar2 + 4),uStack_68,0x494c,uStack_64);
    FUN_02023c70(*(undefined4 *)(iVar2 + 4),2);
    func_0x021b4034(*(undefined4 *)(iVar2 + 4),2);
    uVar4 = FUN_0214e81c(0,&DAT_0215db50,&DAT_02093c8c);
    FUN_02020e98(iVar2,uVar4);
    func_0x021b65e8(*(undefined4 *)(iVar2 + 4),1,FUN_0214ed04);
    func_0x021b65e8(*(undefined4 *)(iVar2 + 4),4,FUN_0214eab0);
    func_0x021b6760(*(undefined4 *)(iVar2 + 4),4,FUN_0214eac8);
    func_0x021b65e8(*(undefined4 *)(iVar2 + 4),0x10,FUN_0214ea7c);
    *(uint *)(*(int *)(iVar2 + 4) + 0x124) = uVar8;
    (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),puVar1);
    aiStack_4c[0] = iStack_6c << 0xc;
    iStack_50 = (iStack_70 + 0xa0) * 0x1000;
    FUN_0214e990(iVar2,&iStack_50,aiStack_4c);
    *(int *)(puVar1 + uVar8 * 4 + 0x30) = iVar2;
    if (uVar8 == (byte)puVar1[1]) {
      func_0x021b6214(*(undefined4 *)(iVar2 + 4),1);
    }
    uVar8 = uVar8 + 1;
  } while ((int)uVar8 < 4);
  iVar2 = 0;
  do {
    iVar5 = iVar2 + -1;
    if (iVar5 < 0) {
      iVar5 = 3;
    }
    iVar7 = iVar2 + 1;
    if (3 < iVar7) {
      iVar7 = 0;
    }
    piVar3 = *(int **)(*(int *)(puVar1 + iVar2 * 4 + 0x30) + 4);
    if (*(int *)(puVar1 + iVar5 * 4 + 0x30) == 0) {
      (**(code **)(*piVar3 + 0x164))(piVar3,1);
    }
    else {
      (**(code **)(*piVar3 + 0x160))
                (piVar3,1,*(undefined4 *)(*(int *)(puVar1 + iVar5 * 4 + 0x30) + 4));
    }
    piVar3 = *(int **)(*(int *)(puVar1 + iVar2 * 4 + 0x30) + 4);
    if (*(int *)(puVar1 + iVar7 * 4 + 0x30) == 0) {
      (**(code **)(*piVar3 + 0x164))(piVar3,2);
    }
    else {
      (**(code **)(*piVar3 + 0x160))
                (piVar3,2,*(undefined4 *)(*(int *)(puVar1 + iVar7 * 4 + 0x30) + 4));
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  iVar2 = ALWidgetBaseImp::Create(puVar1);
  *(undefined4 *)(*(int *)(iVar2 + 4) + 0x124) = 0x103;
  func_0x021b65e8(*(undefined4 *)(iVar2 + 4),0x10,FUN_0214ea38);
  func_0x021b6760(*(undefined4 *)(iVar2 + 4),0x10,FUN_0214ea48);
  *(int *)(puVar1 + 0x2c) = iVar2;
  uStack_78 = 0x40;
  uStack_74 = 0x6a;
  iVar2 = 8;
  do {
    uVar8 = (iVar2 + -8) * 2;
    iVar5 = FUN_0203b404();
    iVar5 = ALWidgetImp::Create(*(undefined4 *)(puVar1 + 0x2c),*(undefined4 *)(iVar5 + 0x88),
                                0x800000,uVar8 + 1,0x84 - (iVar2 + -8),&uStack_78);
    *(int *)(puVar1 + iVar2 * 4 + 0x30) = iVar5;
    FUN_02023894(*(undefined4 *)(iVar5 + 4),uVar8 | 0x800000,0);
    func_0x021b3f78(*(undefined4 *)(*(int *)(puVar1 + iVar2 * 4 + 0x30) + 4),uVar8 + 1 | 0x800000);
    func_0x021b4034(*(undefined4 *)(*(int *)(puVar1 + iVar2 * 4 + 0x30) + 4),uVar8 | 0x800000);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0xb);
  iVar2 = ALWidgetBaseImp::Create(puVar1);
  (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),puVar1);
  *(undefined4 *)(*(int *)(iVar2 + 4) + 0x124) = 0x102;
  func_0x021b65e8(*(undefined4 *)(iVar2 + 4),0x10,FUN_0214e9dc);
  func_0x021b6760(*(undefined4 *)(iVar2 + 4),0x10,FUN_0214e9ec);
  *(int *)(puVar1 + 0x28) = iVar2;
  iVar2 = ALWidgetImp::Create(iVar2,_DAT_021d5154);
  FUN_0214e908(iVar2,*(undefined4 *)(puVar1 + 0x1c));
  (**(code **)(**(int **)(*(int *)(puVar1 + 0x1c) + 4) + 0xd8))
            (*(int **)(*(int *)(puVar1 + 0x1c) + 4),1);
  FUN_02023940(*(undefined4 *)(iVar2 + 4));
  FUN_0214e940(&uStack_98,iVar2,s_Position_0215dca8);
  uStack_8c = 0;
  uStack_90 = 0x100000;
  FUN_0214e990(iVar2,&uStack_90,&uStack_8c);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),uStack_98,0,uStack_94);
  uStack_84 = 0;
  uStack_88 = 0;
  FUN_0214e990(iVar2,&uStack_88,&uStack_84);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),uStack_98,8,uStack_94);
  piVar3 = *(int **)(*(int *)(iVar2 + 4) + 0x68);
  (**(code **)(*piVar3 + 0xac))(piVar3,0);
  FUN_02023c80(*(undefined4 *)(iVar2 + 4),uStack_98,0x494c,uStack_94);
  FUN_02023c70(*(undefined4 *)(iVar2 + 4),2);
  func_0x021b4034(*(undefined4 *)(iVar2 + 4),2);
  uStack_7c = 0;
  uStack_80 = 0x100000;
  FUN_0214e990(iVar2,&uStack_80,&uStack_7c);
  *(int *)(puVar1 + 0x48) = iVar2;
  uVar4 = func_0x021bcf1c(1,1,1,0xffffffff);
  *(undefined4 *)(puVar1 + 0x5c) = uVar4;
  FUN_0214ed1c(puVar1,puVar1[1]);
  FUN_02073ebc(2,1);
  (**(code **)(**(int **)(*(int *)(puVar1 + 0x28) + 4) + 0x148))
            (*(int **)(*(int *)(puVar1 + 0x28) + 4),0x10);
  return *(undefined4 *)(puVar1 + 4);
}

