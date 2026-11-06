
/* JUS-GAME TopMenu::TopMenu_Add [source-string] __FILE__="TopMenu.cpp" __FUNCTION__="TopMenu_Add"
   lines=[320, 697, 1219] passed to 3 source-location call(s); header inlines:
   ALControllerImp.h:Create, ALNodeImp.h:Create */

int TopMenu::TopMenu_Add(int param_1)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  undefined4 uVar23;
  undefined *puStack_d8;
  uint uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  int iStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  undefined2 uStack_98;
  undefined2 uStack_96;
  undefined2 uStack_94;
  undefined2 uStack_92;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int aiStack_44 [2];
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [12];
  
  piVar6 = (int *)thunk_FUN_0201a228(0xa8,PTR_s_TopMenu_cpp_02154c1c,PTR_s_TopMenu_Add_02154c20,
                                     0x140);
  FUN_020517fc(piVar6,0,0xa8);
  piVar6[0x1f] = param_1;
  iVar7 = FUN_020310f4();
  puVar3 = PTR_DAT_02154c24;
  *piVar6 = iVar7;
  puVar4 = PTR_DAT_02154c2c;
  uVar14 = *(undefined4 *)PTR_DAT_02154c28;
  iVar15 = *(int *)puVar3 + -1;
  *(int *)puVar3 = iVar15;
  *(undefined4 *)(puVar4 + iVar15 * 4) = uVar14;
  FUN_020314a0(*(undefined4 *)(iVar7 + 4));
  iVar7 = FUN_02026f94();
  piVar6[1] = iVar7;
  FUN_02028384(*(undefined4 *)(iVar7 + 4),PTR_FUN_02154c30);
  (**(code **)(**(int **)(piVar6[1] + 4) + 0x24))(*(int **)(piVar6[1] + 4),piVar6);
  aiStack_44[1] = 0x80000;
  (**(code **)(**(int **)(piVar6[1] + 4) + 0xa0))(*(int **)(piVar6[1] + 4),aiStack_44 + 1);
  FUN_02043264(1);
  iVar7 = FUN_0203b414(0);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar7 + 0x88) + 4),0);
  iVar7 = FUN_0203b414(0);
  uStack_54 = 0x2000;
  piVar8 = *(int **)(*(int *)(iVar7 + 0x88) + 4);
  (**(code **)(*piVar8 + 0x10))(piVar8,&uStack_54);
  iVar7 = FUN_0203b414(1);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar7 + 0x88) + 4),1);
  iVar7 = FUN_0203b414(1);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar7 + 0x88) + 4),4);
  iVar7 = FUN_0203b414(1);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar7 + 0x88) + 4),0x40,0x20);
  iVar7 = FUN_0203b414(1);
  piVar8 = *(int **)(*(int *)(iVar7 + 0x88) + 4);
  (**(code **)(*piVar8 + 0x90))(piVar8,0x4000);
  iVar7 = FUN_0203b414(1);
  uStack_50 = 0;
  piVar8 = *(int **)(*(int *)(iVar7 + 0x88) + 4);
  (**(code **)(*piVar8 + 0x10))(piVar8,&uStack_50);
  iVar7 = FUN_0203b414(2);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar7 + 0x88) + 4),1);
  iVar7 = FUN_0203b414(2);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar7 + 0x88) + 4),4);
  iVar7 = FUN_0203b414(2);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar7 + 0x88) + 4),0x20,0x20);
  iVar7 = FUN_0203b414(2);
  piVar8 = *(int **)(*(int *)(iVar7 + 0x88) + 4);
  (**(code **)(*piVar8 + 0x90))(piVar8,0x4000);
  iVar7 = FUN_0203b414(2);
  uStack_4c = 0x1000;
  piVar8 = *(int **)(*(int *)(iVar7 + 0x88) + 4);
  (**(code **)(*piVar8 + 0x10))(piVar8,&uStack_4c);
  iVar7 = FUN_0203b414(3);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar7 + 0x88) + 4),1);
  iVar7 = FUN_0203b414(3);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar7 + 0x88) + 4),8);
  iVar7 = FUN_0203b414(3);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar7 + 0x88) + 4),0x40,0x40);
  iVar7 = FUN_0203b414(3);
  piVar8 = *(int **)(*(int *)(iVar7 + 0x88) + 4);
  (**(code **)(*piVar8 + 0x90))(piVar8,0x10000);
  iVar7 = FUN_0203b414(3);
  uStack_48 = 0x3000;
  piVar8 = *(int **)(*(int *)(iVar7 + 0x88) + 4);
  (**(code **)(*piVar8 + 0x10))(piVar8,&uStack_48);
  iVar7 = 0;
  do {
    iVar15 = FUN_0203b424(iVar7);
    FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar15 + 0x88) + 4),1);
    iVar15 = FUN_0203b424(iVar7);
    FUN_0203d478(*(undefined4 *)(*(int *)(iVar15 + 0x88) + 4),4);
    iVar15 = FUN_0203b424(iVar7);
    FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar15 + 0x88) + 4),0,0);
    iVar15 = FUN_0203b424(iVar7);
    piVar8 = *(int **)(*(int *)(iVar15 + 0x88) + 4);
    (**(code **)(*piVar8 + 0x90))(piVar8,0);
    iVar15 = FUN_0203b424(iVar7);
    aiStack_44[0] = iVar7 << 0xc;
    piVar8 = *(int **)(*(int *)(iVar15 + 0x88) + 4);
    (**(code **)(*piVar8 + 0x10))(piVar8,aiStack_44);
    puVar3 = PTR_PTR_02154c34;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 4);
  iVar7 = 0;
  do {
    iVar15 = FUN_020101f4(*(undefined4 *)(puVar3 + iVar7 * 4),0);
    iVar17 = iVar7 + 1;
    piVar6[iVar7 + 2] = iVar15;
    puVar5 = PTR_DAT_02154c3c;
    puVar4 = PTR_DAT_02154c38;
    iVar7 = iVar17;
  } while (iVar17 < 5);
  iVar7 = 0;
  do {
    iVar15 = FUN_0203b414(iVar7 + 2);
    uVar14 = *(undefined4 *)(puVar4 + iVar7 * 4);
    uVar23 = *(undefined4 *)(puVar5 + iVar7 * 4);
    FUN_0214ed48(*(undefined4 *)(iVar15 + 0x88));
    FUN_02035c90(uVar14);
    iVar15 = FUN_0214d908();
    FUN_02036ab8();
    iVar17 = FUN_0214ed84();
    (**(code **)(**(int **)(iVar17 + 4) + 0x130))(*(int **)(iVar17 + 4),uVar23);
    if (iVar15 == 0) {
      piVar8 = *(int **)(*(int *)(iVar17 + 4) + 100);
      (**(code **)(*piVar8 + 0x50))(piVar8,0,0);
    }
    else {
      piVar8 = *(int **)(*(int *)(iVar17 + 4) + 100);
      (**(code **)(*piVar8 + 0x50))(piVar8,*(undefined4 *)(iVar15 + 4),0);
    }
    (**(code **)(**(int **)(iVar17 + 4) + 0xd8))(*(int **)(iVar17 + 4),1);
    FUN_02034d7c(iVar15);
    FUN_0214edac();
    iVar15 = iVar7 + 1;
    piVar6[iVar7 + 7] = iVar17;
    iVar7 = iVar15;
  } while (iVar15 < 2);
  iVar7 = FUN_0203b404();
  FUN_0214ed48(*(undefined4 *)(iVar7 + 0x88));
  FUN_02035e88(0x500000);
  iVar7 = FUN_0214d908();
  piVar6[9] = iVar7;
  (**(code **)(**(int **)(iVar7 + 4) + 0x50))(*(int **)(iVar7 + 4),1);
  (**(code **)(**(int **)(piVar6[3] + 8) + 0x50))();
  FUN_0214edac();
  iVar7 = thunk_FUN_0201a228(0xcc,PTR_FUN_02154c40,PTR_s_Create_02154c44,uRam02154c48);
  if (iVar7 != 0) {
    func_0x021af26c(iVar7,uRam02154c4c,uRam02154c50,0);
  }
  piVar8 = (int *)FUN_021553e8();
  func_0x021b3b7c(1,0,piVar8,0);
  *puRam02154c54 = 1;
  iVar7 = (**(code **)(*(int *)piVar8[1] + 0xb0))((int *)piVar8[1],uRam02154c58);
  if (iVar7 != 0) {
    FUN_0214ed84(iVar7);
  }
  uVar14 = FUN_02151094();
  iVar7 = CommonPaletteAnime::CommonPaletteAnime_Create(uVar14,0x22,0xe,5,0x80);
  piVar6[0x19] = iVar7;
  *(undefined2 *)(iVar7 + 0x18) = 0;
  *(short *)(iVar7 + 0x16) = (short)uRam02154c5c;
  *(undefined1 *)(iVar7 + 0x1a) = 0x1e;
  *(undefined1 *)(iVar7 + 0x1c) = 1;
  *(undefined1 *)(iVar7 + 0x1b) = 1;
  (**(code **)(*piVar8 + 8))();
  iVar7 = ALWidgetBaseImp::Create(piVar6,0);
  piVar6[0xb] = iVar7;
  iVar7 = ALWidgetBaseImp::Create(piVar6,piVar6[0xb]);
  *(undefined4 *)(*(int *)(iVar7 + 4) + 0x140) = 4;
  func_0x021b7744(*(undefined4 *)(iVar7 + 4),1);
  iVar15 = FUN_020152d4();
  uStack_8c = 0x20000;
  FUN_0214eed0(iVar15,&uStack_8c);
  (**(code **)(**(int **)(iVar15 + 4) + 0xd8))(*(int **)(iVar15 + 4),0);
  piVar6[0x17] = iVar15;
  FUN_02023940(*(undefined4 *)(iVar7 + 4));
  piVar8 = *(int **)(*(int *)(iVar7 + 4) + 0x68);
  (**(code **)(*piVar8 + 0xac))(piVar8,0);
  FUN_02150d54(&uStack_88,iVar7,PTR_DAT_02154c60);
  FUN_02023c60(*(undefined4 *)(iVar7 + 4),uStack_88,0,uStack_84);
  FUN_02023c60(*(undefined4 *)(iVar7 + 4),uStack_88,0x3c,uStack_84);
  FUN_02023c70(*(undefined4 *)(iVar7 + 4),0);
  FUN_020239a0(*(undefined4 *)(iVar7 + 4));
  FUN_02023c60(*(undefined4 *)(iVar7 + 4),uStack_88,0,uStack_84);
  piVar8 = *(int **)(*(int *)(iVar7 + 4) + 0x68);
  (**(code **)(*piVar8 + 0xac))(piVar8,0);
  FUN_02023c70(*(undefined4 *)(iVar7 + 4),1);
  func_0x021b4034(*(undefined4 *)(iVar7 + 4),0);
  func_0x021b3fb0(*(undefined4 *)(iVar7 + 4),1);
  func_0x021b3fc4(*(undefined4 *)(iVar7 + 4),1);
  puVar3 = PTR_DAT_02154c64;
  piVar6[0xc] = iVar7;
  iVar7 = 0;
  do {
    iVar20 = iVar7 * 0x18;
    puStack_d8 = PTR_FUN_02154c68;
    iVar18 = *(int *)(puVar3 + iVar20 + 8);
    iVar9 = (**(code **)(puVar3 + iVar20 + 0x10))();
    iVar17 = iVar7;
    if (iVar9 == 0) {
      puStack_d8 = PTR_LAB_02154c6c;
      iVar18 = *(int *)(puVar3 + iVar20 + 0x14) + 0x50000c;
      iVar17 = *(int *)(puVar3 + iVar20 + 0x14);
    }
    iVar9 = FUN_0203b404();
    iVar9 = ALWidgetImp::Create(piVar6,iVar18,puVar3 + iVar20,piVar6[0xc],
                                *(undefined4 *)(iVar9 + 0x88),0x80,0x500000);
    func_0x021b4034(*(undefined4 *)(iVar9 + 4),iVar18 + -0xc);
    func_0x021b3fc4(*(undefined4 *)(iVar9 + 4),iVar18);
    uStack_c8 = 0x18000;
    iVar20 = thunk_FUN_0201a228(0x10,PTR_s_ALCollision_inl_02154c70,PTR_s_Create_02154c74,0xd7);
    uVar14 = 0;
    if (iVar20 != 0) {
      uStack_9c = uStack_c8;
      uVar14 = func_0x021b0f78(iVar20,0,&uStack_9c,PTR_DAT_02154c78);
    }
    FUN_02020e98(iVar9,uVar14);
    func_0x021b65e8(*(undefined4 *)(iVar9 + 4),4,puStack_d8);
    *(undefined **)(*(int *)(iVar9 + 4) + 0xdc) = PTR_FUN_02154c7c;
    *(undefined **)(*(int *)(iVar9 + 4) + 0xe0) = PTR_FUN_02154c80;
    *(int *)(*(int *)(iVar9 + 4) + 0x124) = iVar17;
    uStack_b0 = uRam02154c84;
    uStack_ac = uRam02154c84;
    uStack_a8 = 0;
    FUN_02151038(auStack_30,&uStack_b0,&uStack_ac,&uStack_a8);
    uStack_bc = 0x1000;
    uStack_b8 = 0x1000;
    uStack_b4 = 0;
    FUN_02151038(auStack_3c,&uStack_bc,&uStack_b8,&uStack_b4);
    FUN_02150d54(&uStack_c4,iVar9,PTR_s_Scale_02154c88);
    uVar23 = uStack_c0;
    uVar14 = uStack_c4;
    iVar17 = thunk_FUN_0201a228(0x4c,PTR_FUN_02154c8c,PTR_s_Create_02154c90,uRam02154c94);
    if (iVar17 != 0) {
      jus_TagIPCT::jus_TagIPCT(iVar17,0,uVar14,uVar23,uRam02154c98,auStack_3c,auStack_30,0x1e,0);
    }
    piVar8 = (int *)FUN_021556a0();
    (**(code **)(*piVar8 + 0x38))();
    FUN_02020f38(iVar9,piVar8);
    piVar6[iVar7 + 0xd] = iVar9;
    iVar17 = FUN_0203b404();
    uVar14 = FUN_02155334(iVar18 + 0xc,*(undefined4 *)(iVar17 + 0x88),0x20,0);
    iStack_a0 = (*(int *)(puVar3 + iVar7 * 0x18 + 4) + 0x14) * 0x1000;
    iStack_a4 = *(int *)(puVar3 + iVar7 * 0x18) << 0xc;
    FUN_0214f418(uVar14,&iStack_a4,&iStack_a0);
    FUN_021552fc(iVar15,uVar14);
    puVar4 = PTR_DAT_02154c64;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 8);
  iVar7 = 0;
  do {
    bVar1 = puVar4[iVar7 * 0x18 + 0xc];
    piVar8 = *(int **)(piVar6[iVar7 + 0xd] + 4);
    if (piVar6[bVar1 + 0xd] == 0) {
      (**(code **)(*piVar8 + 0x164))(piVar8,1);
    }
    else {
      (**(code **)(*piVar8 + 0x160))(piVar8,1,*(undefined4 *)(piVar6[bVar1 + 0xd] + 4));
    }
    piVar8 = *(int **)(piVar6[iVar7 + 0xd] + 4);
    if (piVar6[bVar1 + 0xd] == 0) {
      (**(code **)(*piVar8 + 0x164))(piVar8,2);
    }
    else {
      (**(code **)(*piVar8 + 0x160))(piVar8,2,*(undefined4 *)(piVar6[bVar1 + 0xd] + 4));
    }
    piVar8 = *(int **)(piVar6[iVar7 + 0xd] + 4);
    if (piVar6[(byte)puVar4[iVar7 * 0x18 + 0xd] + 0xd] == 0) {
      (**(code **)(*piVar8 + 0x164))(piVar8,8);
    }
    else {
      (**(code **)(*piVar8 + 0x160))
                (piVar8,8,*(undefined4 *)(piVar6[(byte)puVar4[iVar7 * 0x18 + 0xd] + 0xd] + 4));
    }
    piVar8 = *(int **)(piVar6[iVar7 + 0xd] + 4);
    if (piVar6[(byte)puVar4[iVar7 * 0x18 + 0xe] + 0xd] == 0) {
      (**(code **)(*piVar8 + 0x164))(piVar8,4);
    }
    else {
      (**(code **)(*piVar8 + 0x160))
                (piVar8,4,*(undefined4 *)(piVar6[(byte)puVar4[iVar7 * 0x18 + 0xe] + 0xd] + 4));
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 8);
  func_0x021b6760(*(undefined4 *)(piVar6[0x14] + 4),0x10,PTR_FUN_02154c9c);
  puVar3 = PTR_DAT_02154ca0;
  iVar7 = FUN_0203b3e4();
  iVar7 = ALWidgetImp::Create(piVar6,0x530000,puVar3,piVar6[0xb],*(undefined4 *)(iVar7 + 0x88),0x60,
                              0x530000);
  piVar6[0x15] = iVar7;
  uStack_90 = 0xd000;
  iVar15 = thunk_FUN_0201a228(0x10,PTR_s_ALCollision_inl_02154c70,PTR_s_Create_02154c74,0xd7);
  uVar14 = 0;
  if (iVar15 != 0) {
    uStack_cc = uStack_90;
    uVar14 = func_0x021b0f78(iVar15,0,&uStack_cc,PTR_DAT_02154c78);
  }
  FUN_02020e98(iVar7,uVar14);
  func_0x021b65e8(*(undefined4 *)(iVar7 + 4),4,PTR_FUN_02154ca4);
  *(undefined1 *)(*(int *)(iVar7 + 4) + 0xaa) = 1;
  func_0x021b4034(*(undefined4 *)(iVar7 + 4),*(undefined4 *)(puVar3 + 8));
  func_0x021b3fc4(*(undefined4 *)(iVar7 + 4),uRam02154ca8);
  func_0x021b6760(*(undefined4 *)(iVar7 + 4),4,PTR_FUN_02154cac);
  *(undefined1 *)(*(int *)(iVar7 + 4) + 0xab) = 0;
  (**(code **)(**(int **)(iVar7 + 4) + 0xd8))(*(int **)(iVar7 + 4),1);
  puVar3 = PTR_DAT_02154cb0;
  iVar7 = FUN_0203b3e4();
  iVar7 = ALWidgetImp::Create(piVar6,*(undefined4 *)(puVar3 + 8),puVar3,piVar6[0xb],
                              *(undefined4 *)(iVar7 + 0x88),0x61,0x510000);
  piVar6[0x16] = iVar7;
  uStack_98 = 0xffd0;
  uStack_96 = 0xfff0;
  uStack_94 = 0;
  uStack_92 = 0;
  piVar8 = (int *)thunk_FUN_0201a228(0x70,PTR_s_ALCollision_inl_02154cb4,PTR_s_Create_02154cb8,
                                     uRam02154cbc);
  if (piVar8 != (int *)0x0) {
    func_0x021b054c(piVar8,0,PTR_DAT_02154c78);
    *piVar8 = iRam02154cc0;
    FUN_0215115c(piVar8 + 0x1a,&uStack_98);
    *piVar8 = iRam02154cc4;
  }
  if (piVar8[6] == 0) {
    (**(code **)(*piVar8 + 0x14))();
  }
  FUN_02020e98(iVar7,piVar8[6]);
  func_0x021b6760(*(undefined4 *)(iVar7 + 4),4,uRam02154cc8);
  func_0x021b3fc4(*(undefined4 *)(iVar7 + 4),uRam02154ccc);
  func_0x021b4034(*(undefined4 *)(iVar7 + 4),0x510000);
  *(undefined1 *)(*(int *)(iVar7 + 4) + 0xaa) = 1;
  *(undefined1 *)(*(int *)(iVar7 + 4) + 0xab) = 0;
  *(undefined1 *)(*(int *)(iVar7 + 4) + 0xb1) = 1;
  func_0x021b77a8(*(undefined4 *)(iVar7 + 4),0x20);
  (**(code **)(**(int **)(iVar7 + 4) + 0xd8))(*(int **)(iVar7 + 4),1);
  iVar7 = thunk_FUN_0201a228(0x78,uRam02154cd0,uRam02154cd4,uRam02154cd8);
  if (iVar7 != 0) {
    jus_TagNDGR_0209c0b4::jus_TagNDGR_0209c0b4(iVar7,uRam02154cdc,1);
  }
  iVar7 = FUN_0214ed84();
  piVar6[10] = iVar7;
  FUN_02028384(*(undefined4 *)(iVar7 + 4),uRam02154ce0);
  (**(code **)(**(int **)(piVar6[10] + 4) + 0x24))(*(int **)(piVar6[10] + 4),piVar6);
  uStack_58 = 0xe0000;
  FUN_0214eed0(piVar6[10],&uStack_58);
  piVar6[0x20] = 0x2000;
  FUN_0214f3e0(piVar6[8],piVar6[10]);
  iVar7 = FUN_0203b404();
  uVar14 = FUN_02155334(0x520000,*(undefined4 *)(iVar7 + 0x88),0xe0,0x520000);
  FUN_021552fc(piVar6[10],uVar14);
  FUN_0214f3e0(uVar14,piVar6[10]);
  uStack_60 = 0xb8000;
  uStack_5c = 0x104000;
  FUN_0214f418(uVar14,&uStack_5c,&uStack_60);
  uStack_64 = uRam02154ce4;
  FUN_02151054(uVar14,&uStack_64);
  iVar7 = FUN_0203b404();
  uVar14 = FUN_02155334(uRam02154ce8,*(undefined4 *)(iVar7 + 0x88),0xe0,0x520000);
  FUN_021552fc(piVar6[10],uVar14);
  FUN_0214f3e0(uVar14,piVar6[10]);
  uStack_6c = 0xeb000;
  uStack_68 = 0x9f000;
  FUN_0214f418(uVar14,&uStack_68,&uStack_6c);
  uStack_70 = uRam02154ce4;
  FUN_02151054(uVar14,&uStack_70);
  iVar7 = FUN_0203b404();
  uVar14 = FUN_02155334(uRam02154cec,*(undefined4 *)(iVar7 + 0x88),0xe0,0x520000);
  FUN_021552fc(piVar6[10],uVar14);
  FUN_0214f3e0(uVar14,piVar6[10]);
  uStack_78 = 0x60000;
  uStack_74 = 0x100000;
  FUN_0214f418(uVar14,&uStack_74,&uStack_78);
  iVar7 = FUN_0203b404();
  uVar14 = FUN_02155334(uRam02154cf0,*(undefined4 *)(iVar7 + 0x88),0xe0,0x520000);
  FUN_021552fc(piVar6[10],uVar14);
  FUN_0214f3e0(uVar14,piVar6[10]);
  uStack_80 = 0x48000;
  uStack_7c = 0xc0000;
  FUN_0214f418(uVar14,&uStack_7c,&uStack_80);
  FUN_0214d908(*(undefined4 *)(*(int *)(*(int *)(piVar6[8] + 4) + 100) + 0x20));
  iVar7 = FUN_02034db8();
  (**(code **)(**(int **)(iVar7 + 4) + 100))();
  uVar23 = FUN_02150ff4();
  iVar7 = CommonPaletteAnime::CommonPaletteAnime_Load
                    (uVar23,PTR_s_topmenu_top_bg00_bin_02154cf4,0x80);
  piVar6[0x1a] = iVar7;
  uVar14 = FUN_02151094(uVar14);
  iVar7 = CommonPaletteAnime::CommonPaletteAnime_Load
                    (uVar14,PTR_s_topmenu_galaxy_obj_bin_02154cf8,0x80);
  piVar6[0x1b] = iVar7;
  iVar7 = func_0x021bcf1c(0,0xffffffff,1,0xffffffff);
  piVar6[0x18] = iVar7;
  iVar7 = func_0x021ba49c(0,1,1);
  piVar6[0x1c] = iVar7;
  iVar7 = Secret::Secret_Create();
  piVar6[0x1e] = iVar7;
  if ((*(uint *)(PTR_DAT_02154cfc + 0x8d8) & 8) != 0) {
    uStack_d0 = 0xffffffff;
    for (iVar7 = 6; iVar7 < 0xb; iVar7 = iVar7 + 1) {
      iVar15 = FUN_02075a0c(piVar6[0x1e],iVar7,&uStack_d0);
      uVar13 = uStack_d0;
      if (iVar15 != 0) {
        if ((*(uint *)(PTR_DAT_02154cfc + (uStack_d0 >> 5) * 4 + 0xa70) & 1 << (uStack_d0 & 0x1f))
            == 0) {
          FUN_02071750(uStack_d0);
          piVar8 = (int *)FUN_020101f4(PTR_s_jgalaxy_jgalaxy_aar_02154d00,0);
          piVar10 = (int *)FUN_02033410(PTR_s_jgalaxy_jgalaxy_bin_02154d04,0,0);
          if (piVar10[7] == 0) {
            (**(code **)(*piVar10 + 0x10))();
          }
          iVar16 = piVar10[7];
          iVar15 = (**(code **)(**(int **)(iVar16 + 4) + 0x2c))(*(int **)(iVar16 + 4),0);
          iVar17 = (**(code **)(**(int **)(iVar16 + 4) + 0x2c))
                             (*(int **)(iVar16 + 4),*(undefined4 *)(iVar15 + 8));
          iVar9 = (**(code **)(**(int **)(iVar16 + 4) + 0x2c))
                            (*(int **)(iVar16 + 4),*(undefined4 *)(iVar15 + 0xc));
          iVar18 = (**(code **)(**(int **)(iVar16 + 4) + 0x2c))
                             (*(int **)(iVar16 + 4),*(undefined4 *)(iVar15 + 0x10));
          iVar15 = (**(code **)(**(int **)(iVar16 + 4) + 0x2c))
                             (*(int **)(iVar16 + 4),*(undefined4 *)(iVar15 + 0x14));
          iVar17 = uVar13 * 0x3c + iVar17;
          for (iVar20 = 0; iVar20 < (int)(uint)*(byte *)(iVar17 + 0x2c); iVar20 = iVar20 + 1) {
            iVar11 = (uint)*(byte *)(iVar17 + iVar20 + 0x2d) * 0x48 + iVar9;
            for (iVar19 = 0; iVar19 < (int)(uint)*(byte *)(iVar11 + 0x44); iVar19 = iVar19 + 1) {
              iVar12 = iVar18 + (uint)*(byte *)(iVar11 + iVar19 + 0x38) * 0x40;
              for (iVar21 = 0; iVar21 < (int)(uint)*(byte *)(iVar12 + 0x30); iVar21 = iVar21 + 1) {
                uVar13 = (uint)*(byte *)(iVar12 + iVar21 + 0x31);
                iVar22 = uVar13 * 0x88 + iVar15;
                if ((((5 < *(byte *)(iVar22 + 0xb)) &&
                     ((PTR_DAT_02154cfc[uVar13 + 0x3dcc] & 0x20) == 0)) &&
                    (uVar13 = (uint)*(short *)(iVar22 + 0x76), uVar13 != 0xffffffff)) &&
                   ((*(uint *)(PTR_DAT_02154cfc + (uVar13 >> 5) * 4 + 0x8f4) & 1 << (uVar13 & 0x1f))
                    == 0)) {
                  thunk_FUN_0207400c((int)piVar6 + 0x85);
                  (**(code **)(*piVar8 + 0xc))();
                  (**(code **)(**(int **)(iVar16 + 4) + 0xc))();
                  bVar2 = true;
                  goto LAB_02154f60;
                }
              }
            }
          }
          (**(code **)(*piVar8 + 0xc))();
          (**(code **)(**(int **)(iVar16 + 4) + 0xc))();
          bVar2 = false;
        }
        else {
          bVar2 = false;
        }
LAB_02154f60:
        if (bVar2) {
          *(undefined1 *)(piVar6 + 0x21) = 1;
          break;
        }
      }
    }
  }
  FUN_02073ebc(2,1);
  FUN_020734e0(2);
  FUN_0207361c(2,0);
  func_0x021b6214(*(undefined4 *)(piVar6[0xc] + 4),1);
  if ((char)piVar6[0x21] == '\0') {
    (**(code **)(**(int **)(piVar6[0xc] + 4) + 0x148))(*(int **)(piVar6[0xc] + 4),0x10);
  }
  func_0x021b6214(*(undefined4 *)(piVar6[piVar6[0x1f] + 0xd] + 4),1);
  FUN_02155c68(piVar6,piVar6[0x1f]);
  func_0x021b65bc();
  iVar7 = TopMenuChara::TopMenu_CharaCreate();
  piVar6[0x1d] = iVar7;
  return *piVar6;
}

