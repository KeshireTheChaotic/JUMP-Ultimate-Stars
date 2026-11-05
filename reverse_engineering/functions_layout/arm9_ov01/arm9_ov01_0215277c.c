
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-GAME JArenaMissionResult::JAMisnResult_Add [source-string] __FILE__="JArenaMissionResult.cpp"
   __FUNCTION__="JAMisnResult_Add" lines=[123] passed to 1 source-location call(s) */

undefined4 JArenaMissionResult::JAMisnResult_Add(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iStack_1c0;
  int iStack_1bc;
  int iStack_1b8;
  int iStack_1b4;
  int iStack_1b0;
  int iStack_198;
  int iStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  int iStack_184;
  int iStack_180;
  int iStack_17c;
  int iStack_178;
  int iStack_174;
  int aiStack_170 [8];
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
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
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
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
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int aiStack_2c [2];
  
  iVar5 = thunk_FUN_0201a228(0x5c,PTR_s_JArenaMissionResult_cpp_0215374c,
                             PTR_s_JAMisnResult_Add_02153750,0x7b);
  FUN_020517fc(iVar5,0,0x5c);
  iVar6 = FUN_020310f4();
  puVar1 = PTR_DAT_02153754;
  *(int *)(iVar5 + 4) = iVar6;
  puVar2 = PTR_DAT_0215375c;
  uVar12 = *(undefined4 *)PTR_DAT_02153758;
  iVar13 = *(int *)puVar1 + -1;
  *(int *)puVar1 = iVar13;
  *(undefined4 *)(puVar2 + iVar13 * 4) = uVar12;
  FUN_020314a0(*(undefined4 *)(iVar6 + 4));
  iVar6 = FUN_02020d90();
  aiStack_2c[1] = 0x85000;
  FUN_0214ffd0(iVar6,aiStack_2c + 1);
  FUN_02028384(*(undefined4 *)(iVar6 + 4),PTR_FUN_02153760);
  (**(code **)(**(int **)(iVar6 + 4) + 0x24))(*(int **)(iVar6 + 4),iVar5);
  *(int *)(iVar5 + 8) = iVar6;
  uVar12 = FUN_02028920(0);
  *(undefined4 *)(iVar5 + 0xc) = uVar12;
  uVar12 = RuleData::RuleData_Create();
  *(undefined4 *)(iVar5 + 0x4c) = uVar12;
  FUN_0203d4e4();
  iVar6 = FUN_0203b414(0);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar6 + 0x88) + 4),0);
  iVar6 = FUN_0203b414(0);
  uStack_40 = 0;
  piVar7 = *(int **)(*(int *)(iVar6 + 0x88) + 4);
  (**(code **)(*piVar7 + 0x10))(piVar7,&uStack_40);
  iVar6 = 1;
  do {
    iVar13 = FUN_0203b414(iVar6);
    FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar13 + 0x88) + 4),1);
    iVar13 = FUN_0203b414(iVar6);
    FUN_0203d478(*(undefined4 *)(*(int *)(iVar13 + 0x88) + 4),4);
    iVar13 = FUN_0203b414(iVar6);
    FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar13 + 0x88) + 4),0,0);
    iVar13 = FUN_0203b414(iVar6);
    piVar7 = *(int **)(*(int *)(iVar13 + 0x88) + 4);
    (**(code **)(*piVar7 + 0x90))(piVar7,0);
    iVar13 = FUN_0203b414(iVar6);
    aiStack_2c[0] = iVar6 << 0xc;
    piVar7 = *(int **)(*(int *)(iVar13 + 0x88) + 4);
    (**(code **)(*piVar7 + 0x10))(piVar7,aiStack_2c);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 4);
  iVar6 = FUN_0203b424(3);
  iVar6 = *(int *)(iVar6 + 0x88);
  FUN_0203d0b4(*(undefined4 *)(iVar6 + 4),1);
  FUN_0203d478(*(undefined4 *)(iVar6 + 4),4);
  FUN_0203cfbc(*(undefined4 *)(iVar6 + 4),0x20,0x20);
  (**(code **)(**(int **)(iVar6 + 4) + 0x90))(*(int **)(iVar6 + 4),0x8000);
  uStack_3c = 0x3000;
  (**(code **)(**(int **)(iVar6 + 4) + 0x10))(*(int **)(iVar6 + 4),&uStack_3c);
  (**(code **)(**(int **)(iVar6 + 4) + 0x94))(*(int **)(iVar6 + 4),1);
  iVar6 = FUN_0203b424(2);
  iVar6 = *(int *)(iVar6 + 0x88);
  FUN_0203d0b4(*(undefined4 *)(iVar6 + 4),1);
  FUN_0203d478(*(undefined4 *)(iVar6 + 4),4);
  FUN_0203cfbc(*(undefined4 *)(iVar6 + 4),0x20,0x40);
  (**(code **)(**(int **)(iVar6 + 4) + 0x90))(*(int **)(iVar6 + 4),0x8000);
  uStack_38 = 0x2000;
  (**(code **)(**(int **)(iVar6 + 4) + 0x10))(*(int **)(iVar6 + 4),&uStack_38);
  iVar6 = FUN_0203b424(0);
  iVar6 = *(int *)(iVar6 + 0x88);
  FUN_0203d0b4(*(undefined4 *)(iVar6 + 4),1);
  FUN_0203d478(*(undefined4 *)(iVar6 + 4),4);
  FUN_0203cfbc(*(undefined4 *)(iVar6 + 4),0,0);
  (**(code **)(**(int **)(iVar6 + 4) + 0x90))(*(int **)(iVar6 + 4),0);
  uStack_34 = 0x1000;
  (**(code **)(**(int **)(iVar6 + 4) + 0x10))(*(int **)(iVar6 + 4),&uStack_34);
  iVar6 = FUN_0203b424(1);
  iVar6 = *(int *)(iVar6 + 0x88);
  FUN_0203d0b4(*(undefined4 *)(iVar6 + 4),1);
  FUN_0203d478(*(undefined4 *)(iVar6 + 4),4);
  FUN_0203cfbc(*(undefined4 *)(iVar6 + 4),0,0);
  (**(code **)(**(int **)(iVar6 + 4) + 0x90))(*(int **)(iVar6 + 4),0);
  uStack_30 = 0;
  (**(code **)(**(int **)(iVar6 + 4) + 0x10))(*(int **)(iVar6 + 4),&uStack_30);
  puVar1 = PTR_PTR_02153764;
  iVar6 = 0;
  do {
    uVar12 = FUN_020101f4(*(undefined4 *)(puVar1 + iVar6 * 4),0);
    iVar13 = iVar6 * 4;
    iVar6 = iVar6 + 1;
    *(undefined4 *)(iVar5 + iVar13 + 0x10) = uVar12;
    puVar4 = PTR_DAT_02153770;
    puVar3 = PTR_DAT_0215376c;
    puVar2 = PTR_DAT_02153768;
  } while (iVar6 < 3);
  iVar6 = 0;
  do {
    iVar13 = FUN_0203b424((int)(char)puVar2[iVar6]);
    uVar12 = FUN_0214faac(*(undefined4 *)(puVar3 + iVar6 * 4),*(undefined4 *)(puVar4 + iVar6 * 4),
                          *(undefined4 *)(iVar13 + 0x88));
    iVar13 = iVar6 * 4;
    iVar6 = iVar6 + 1;
    *(undefined4 *)(iVar5 + iVar13 + 0x1c) = uVar12;
  } while (iVar6 < 2);
  iVar6 = ALWidgetBaseImp::Create(iVar5);
  (**(code **)(**(int **)(iVar6 + 4) + 0xd8))(*(int **)(iVar6 + 4),1);
  *(undefined4 *)(*(int *)(iVar6 + 4) + 0x124) = 0x100;
  *(int *)(iVar5 + 0x24) = iVar6;
  piVar7 = *(int **)(*(int *)(iVar5 + 0x1c) + 4);
  (**(code **)(*piVar7 + 0xd8))(piVar7,1);
  iVar13 = ALWidgetImp::Create(iVar6,_DAT_021d5154);
  FUN_0214e688(iVar13,*(undefined4 *)(iVar5 + 0x1c));
  FUN_02028384(*(undefined4 *)(iVar13 + 4),uRam02153778);
  uStack_44 = 0x84000;
  FUN_0214ffd0(iVar13,&uStack_44);
  (**(code **)(**(int **)(iVar13 + 4) + 0x24))(*(int **)(iVar13 + 4),iVar5);
  *(undefined4 *)(*(int *)(iVar13 + 4) + 0x124) = 0;
  (**(code **)(**(int **)(iVar13 + 4) + 0xd8))(*(int **)(iVar13 + 4),1);
  func_0x021b6214(*(undefined4 *)(iVar13 + 4),0);
  *(int *)(iVar5 + 0x30) = iVar13;
  uStack_4c = 0x80;
  uStack_48 = 0;
  iVar13 = FUN_0203b3f4();
  iVar13 = ALWidgetImp::Create(iVar6,*(undefined4 *)(iVar13 + 0x88),0x8a1000,0,0x20,&uStack_4c);
  (**(code **)(**(int **)(iVar13 + 4) + 0x24))(*(int **)(iVar13 + 4),iVar5);
  *(undefined4 *)(*(int *)(iVar13 + 4) + 0x124) = 1;
  (**(code **)(**(int **)(iVar13 + 4) + 0xd8))();
  func_0x021b6214(*(undefined4 *)(iVar13 + 4),0);
  *(int *)(iVar5 + 0x34) = iVar13;
  uStack_4c = 0x100;
  uStack_48 = 0xc0;
  iVar13 = FUN_0203b3f4();
  iVar6 = ALWidgetImp::Create(iVar6,*(undefined4 *)(iVar13 + 0x88),0x510000,0x14,0x20,&uStack_4c);
  (**(code **)(**(int **)(iVar6 + 4) + 0x24))(*(int **)(iVar6 + 4),iVar5);
  *(undefined4 *)(*(int *)(iVar6 + 4) + 0x124) = 2;
  (**(code **)(**(int **)(iVar6 + 4) + 0xd8))(*(int **)(iVar6 + 4),1);
  *(undefined1 *)(*(int *)(iVar6 + 4) + 0xaa) = 1;
  *(undefined1 *)(*(int *)(iVar6 + 4) + 0xab) = 0;
  *(undefined1 *)(*(int *)(iVar6 + 4) + 0xae) = 1;
  *(undefined1 *)(*(int *)(iVar6 + 4) + 0xaf) = 0;
  func_0x021b77a8(*(undefined4 *)(iVar6 + 4),0x10);
  (**(code **)(**(int **)(iVar6 + 4) + 0x24))(*(int **)(iVar6 + 4),iVar5);
  piVar7 = (int *)thunk_FUN_0201a228(0x70,uRam02153780,uRam02153784,uRam02153788);
  if (piVar7 != (int *)0x0) {
    func_0x021b054c(piVar7,0,PTR_DAT_0215378c);
    puVar1 = PTR_DAT_02153794;
    *piVar7 = (int)PTR_vftable_02153790;
    FUN_0214dad4(piVar7 + 0x1a,puVar1);
    *piVar7 = iRam02153798;
  }
  if (piVar7[6] == 0) {
    (**(code **)(*piVar7 + 0x14))();
  }
  FUN_02020e98(iVar6,piVar7[6]);
  func_0x021b65e8(*(undefined4 *)(iVar6 + 4),4,uRam0215379c);
  func_0x021b6760(*(undefined4 *)(iVar6 + 4),4,uRam021537a0);
  FUN_02023894(*(undefined4 *)(iVar6 + 4),uRam021537a4,0);
  func_0x021b3f78(*(undefined4 *)(iVar6 + 4),uRam021537a4);
  func_0x021b3fc4(*(undefined4 *)(iVar6 + 4),uRam021537a8);
  func_0x021b65d8(*(undefined4 *)(iVar6 + 4));
  *(int *)(iVar5 + 0x38) = iVar6;
  iVar6 = ALWidgetBaseImp::Create(iVar5);
  *(undefined4 *)(*(int *)(iVar6 + 4) + 0x124) = uRam021537ac;
  *(int *)(iVar5 + 0x28) = iVar6;
  iVar6 = ALWidgetImp::Create(iVar6,_DAT_021d5154);
  FUN_0214e688(iVar6,*(undefined4 *)(iVar5 + 0x20));
  (**(code **)(**(int **)(iVar6 + 4) + 0x24))(*(int **)(iVar6 + 4),iVar5);
  *(undefined4 *)(*(int *)(iVar6 + 4) + 0x124) = 3;
  func_0x021b65e8(*(undefined4 *)(iVar6 + 4),0x10,PTR_FUN_021537b0);
  func_0x021b6760(*(undefined4 *)(iVar6 + 4),0x10,PTR_FUN_021537b4);
  FUN_02023940(*(undefined4 *)(iVar6 + 4));
  FUN_0214f714(&uStack_6c,iVar6,PTR_s_Position_021537b8);
  uStack_60 = 0xfff40000;
  uStack_64 = 0;
  FUN_021511c8(iVar6,&uStack_64,&uStack_60);
  FUN_02023c60(*(undefined4 *)(iVar6 + 4),uStack_6c,0,uStack_68);
  uStack_58 = 0;
  uStack_5c = 0;
  FUN_021511c8(iVar6,&uStack_5c,&uStack_58);
  FUN_02023c60(*(undefined4 *)(iVar6 + 4),uStack_6c,8,uStack_68);
  piVar7 = *(int **)(*(int *)(iVar6 + 4) + 0x68);
  (**(code **)(*piVar7 + 0xac))(piVar7,0);
  FUN_02023c80(*(undefined4 *)(iVar6 + 4),uStack_6c,uRam021537bc,uStack_68);
  FUN_02023c70(*(undefined4 *)(iVar6 + 4),1);
  func_0x021b4034(*(undefined4 *)(iVar6 + 4),1);
  uStack_50 = 0xfff40000;
  uStack_54 = 0;
  FUN_021511c8(iVar6,&uStack_54,&uStack_50);
  *(int *)(iVar5 + 0x3c) = iVar6;
  iVar6 = ALWidgetBaseImp::Create(iVar5);
  *(undefined4 *)(*(int *)(iVar6 + 4) + 0x124) = uRam021537c0;
  *(undefined4 *)(*(int *)(iVar6 + 4) + 0x140) = 4;
  *(int *)(iVar5 + 0x2c) = iVar6;
  iStack_198 = 0x80;
  iStack_194 = 0x50;
  iVar13 = 0;
  do {
    iVar8 = FUN_0203b3f4();
    iVar8 = ALWidgetImp::Create(iVar6,*(undefined4 *)(iVar8 + 0x88),0x8a1000,iVar13 + 1,0xa0,
                                &iStack_198);
    (**(code **)(**(int **)(iVar8 + 4) + 0x24))(*(int **)(iVar8 + 4),iVar5);
    *(int *)(*(int *)(iVar8 + 4) + 0x124) = iVar13 + 4;
    uStack_188 = 0xa0000;
    FUN_0214e6c0(iVar8,&uStack_188);
    FUN_02023940(*(undefined4 *)(iVar8 + 4));
    FUN_0214f714(&uStack_190,iVar8,PTR_s_Position_021537b8);
    iStack_180 = iStack_194 << 0xc;
    iStack_184 = (iStack_198 + -0x100) * 0x1000;
    FUN_021511c8(iVar8,&iStack_184,&iStack_180);
    FUN_02023c60(*(undefined4 *)(iVar8 + 4),uStack_190,0,uStack_18c);
    iStack_178 = iStack_194 << 0xc;
    iStack_17c = iStack_198 << 0xc;
    FUN_021511c8(iVar8,&iStack_17c,&iStack_178);
    FUN_02023c60(*(undefined4 *)(iVar8 + 4),uStack_190,8,uStack_18c);
    piVar7 = *(int **)(*(int *)(iVar8 + 4) + 0x68);
    (**(code **)(*piVar7 + 0xac))(piVar7,0);
    FUN_02023c80(*(undefined4 *)(iVar8 + 4),uStack_190,uRam021537bc,uStack_18c);
    FUN_02023c70(*(undefined4 *)(iVar8 + 4),1);
    func_0x021b4034(*(undefined4 *)(iVar8 + 4),1);
    func_0x021b6760(*(undefined4 *)(iVar8 + 4),0x10,uRam021537c4);
    aiStack_170[0] = iStack_194 << 0xc;
    iStack_174 = (iStack_198 + -0x100) * 0x1000;
    FUN_021511c8(iVar8,&iStack_174,aiStack_170);
    *(int *)(iVar5 + iVar13 * 4 + 0x40) = iVar8;
    if (iVar13 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x18;
    }
    iVar13 = iVar13 + 1;
    iStack_194 = iStack_194 + iVar8;
  } while (iVar13 < 3);
  iVar13 = 0;
  do {
    iVar8 = ALWidgetImp::Create(iVar6,_DAT_021d5154);
    *(int *)(*(int *)(iVar8 + 4) + 0x124) = iVar13;
    aiStack_170[2] = 0;
    aiStack_170[1] = 0;
    FUN_021511c8(iVar8,aiStack_170 + 1,aiStack_170 + 2);
    (**(code **)(**(int **)(iVar8 + 4) + 0xd8))(*(int **)(iVar8 + 4),1);
    aiStack_170[3] = 0x9f000;
    FUN_0214e6c0(iVar8,aiStack_170 + 3);
    if (*(int *)(iVar5 + iVar13 * 4 + 0x40) != 0) {
      FUN_0214f7c0(iVar8);
    }
    iVar9 = FUN_021540ac(iVar13);
    iVar10 = FUN_0216446c(*(undefined4 *)(iVar5 + 0x4c),*(undefined4 *)(iRam021537c8 + 0x10));
    if (iVar10 == 0) {
      iVar15 = FUN_0200d12c(iVar9,100);
      iStack_1c0 = iVar9 + iVar15 * -100;
      iVar10 = FUN_0200d12c(iStack_1c0,10);
      iStack_1c0 = iStack_1c0 + iVar10 * -10;
      if (iVar13 == 0) {
        iVar14 = 7;
      }
      else {
        iVar14 = 0x13;
      }
      if (9 < iVar15) {
        iVar15 = 9;
        iStack_1c0 = 9;
        iVar10 = iVar15;
      }
      if (iVar9 < 0) {
        iVar10 = 10;
        iStack_1c0 = 10;
        iVar15 = iVar10;
      }
      if (iVar15 != 0) {
        iVar9 = FUN_0203b3f4();
        iVar9 = FUN_0214fba8(*(undefined4 *)(iVar9 + 0x88),0x8a1000,iVar14 + iVar15,0x9f);
        (**(code **)(**(int **)(iVar9 + 4) + 0xd8))(*(int **)(iVar9 + 4),1);
        if (iVar13 == 0) {
          uStack_11c = 0;
          uStack_118 = 0x6000;
          FUN_021511c8(iVar9,&uStack_118,&uStack_11c);
        }
        else {
          uStack_114 = 0;
          uStack_110 = 0;
          FUN_021511c8(iVar9,&uStack_110,&uStack_114);
        }
        FUN_0214e688(iVar8,iVar9);
      }
      if (iVar15 != 0 || iVar10 != 0) {
        iVar9 = FUN_0203b3f4();
        iVar9 = FUN_0214fba8(*(undefined4 *)(iVar9 + 0x88),0x8a1000,iVar14 + iVar10,0x9f);
        (**(code **)(**(int **)(iVar9 + 4) + 0xd8))(*(int **)(iVar9 + 4),1);
        if (iVar13 == 0) {
          uStack_12c = 0;
          uStack_128 = 0x12000;
          FUN_021511c8(iVar9,&uStack_128,&uStack_12c);
        }
        else {
          uStack_124 = 0;
          uStack_120 = 0xa000;
          FUN_021511c8(iVar9,&uStack_120,&uStack_124);
        }
        FUN_0214e688(iVar8,iVar9);
      }
      iVar9 = FUN_0203b3f4();
      iVar9 = FUN_0214fba8(*(undefined4 *)(iVar9 + 0x88),0x8a1000,iVar14 + iStack_1c0,0x9f);
      (**(code **)(**(int **)(iVar9 + 4) + 0xd8))(*(int **)(iVar9 + 4),1);
      if (iVar13 == 0) {
        uStack_13c = 0;
        uStack_138 = 0x1e000;
        FUN_021511c8(iVar9,&uStack_138,&uStack_13c);
      }
      else {
        uStack_134 = 0;
        uStack_130 = 0x14000;
        FUN_021511c8(iVar9,&uStack_130,&uStack_134);
      }
      FUN_0214e688(iVar8,iVar9);
      if (iVar13 == 0) {
        uVar12 = 5;
      }
      else {
        uVar12 = 6;
      }
      iVar9 = FUN_0203b3f4();
      iVar9 = FUN_0214fba8(*(undefined4 *)(iVar9 + 0x88),0x8a1000,uVar12,0x9f);
      (**(code **)(**(int **)(iVar9 + 4) + 0xd8))(*(int **)(iVar9 + 4),1);
      if (iVar13 == 0) {
        uStack_14c = 0;
        uStack_148 = 0x36000;
        FUN_021511c8(iVar9,&uStack_148,&uStack_14c);
      }
      else {
        uStack_144 = 0;
        uStack_140 = 0x28000;
        FUN_021511c8(iVar9,&uStack_140,&uStack_144);
      }
      FUN_0214e688(iVar8,iVar9);
    }
    else if (iVar10 == 1) {
      iStack_1b4 = FUN_0200d12c(iVar9,0x3c);
      uVar12 = FUN_0200c954(iVar9);
      uVar12 = FUN_0200c5ac(uVar12,iRam021537cc);
      FUN_0200c9e4(iRam021537cc + 0x3100000,uVar12);
      iVar10 = FUN_0200c8e0();
      iStack_1b0 = FUN_0200d12c(iStack_1b4,0x3c);
      iVar10 = (iVar10 + iStack_1b4 * -0x1000 + 0x14) * 100;
      iStack_1b4 = iStack_1b4 + iStack_1b0 * -0x3c;
      iStack_1bc = (int)(iVar10 + ((uint)(iVar10 >> 0xb) >> 0x14)) >> 0xc;
      uVar11 = FUN_0200d338(iStack_1b0,10);
      iStack_1b0 = iStack_1b0 + uVar11 * -10;
      iVar10 = FUN_0200d338(iStack_1b4,10);
      iStack_1b4 = iStack_1b4 + iVar10 * -10;
      iStack_1b8 = FUN_0200d338(iStack_1bc,10);
      if (iVar13 == 0) {
        iVar15 = 7;
      }
      else {
        iVar15 = 0x13;
      }
      iStack_1bc = iStack_1bc + iStack_1b8 * -10;
      if (5 < uVar11) {
        iVar10 = 5;
        uVar11 = 5;
        iStack_1bc = 9;
        iStack_1b8 = 9;
        iStack_1b4 = 9;
        iStack_1b0 = 9;
      }
      if (iVar9 < 0) {
        iStack_1bc = 10;
        iStack_1b8 = 10;
        iStack_1b4 = 10;
        iVar10 = 10;
        iStack_1b0 = 10;
        uVar11 = 10;
      }
      iVar9 = FUN_0203b3f4();
      iVar9 = FUN_0214fba8(*(undefined4 *)(iVar9 + 0x88),0x8a1000,iVar15 + uVar11,0x9f);
      (**(code **)(**(int **)(iVar9 + 4) + 0xd8))(*(int **)(iVar9 + 4),1);
      if (iVar13 == 0) {
        uStack_9c = 0;
        uStack_98 = 0xffff2000;
        FUN_021511c8(iVar9,&uStack_98,&uStack_9c);
      }
      else {
        uStack_94 = 0;
        uStack_90 = 0xffff4000;
        FUN_021511c8(iVar9,&uStack_90,&uStack_94);
      }
      FUN_0214e688(iVar8,iVar9);
      iVar9 = FUN_0203b3f4();
      iVar9 = FUN_0214fba8(*(undefined4 *)(iVar9 + 0x88),0x8a1000,iVar15 + iStack_1b0,0x9f);
      (**(code **)(**(int **)(iVar9 + 4) + 0xd8))(*(int **)(iVar9 + 4),1);
      if (iVar13 == 0) {
        uStack_ac = 0;
        uStack_a8 = 0xffffe000;
        FUN_021511c8(iVar9,&uStack_a8,&uStack_ac);
      }
      else {
        uStack_a4 = 0;
        uStack_a0 = 0xffffe000;
        FUN_021511c8(iVar9,&uStack_a0,&uStack_a4);
      }
      FUN_0214e688(iVar8,iVar9);
      if (iVar13 == 0) {
        uVar12 = 0x12;
      }
      else {
        uVar12 = 0x1e;
      }
      iVar9 = FUN_0203b3f4();
      iVar9 = FUN_0214fba8(*(undefined4 *)(iVar9 + 0x88),0x8a1000,uVar12,0x9f);
      (**(code **)(**(int **)(iVar9 + 4) + 0xd8))(*(int **)(iVar9 + 4),1);
      if (iVar13 == 0) {
        uStack_bc = 0;
        uStack_b8 = 0x9000;
        FUN_021511c8(iVar9,&uStack_b8,&uStack_bc);
      }
      else {
        uStack_b4 = 0;
        uStack_b0 = 0x7000;
        FUN_021511c8(iVar9,&uStack_b0,&uStack_b4);
      }
      FUN_0214e688(iVar8,iVar9);
      iVar9 = FUN_0203b3f4();
      iVar9 = FUN_0214fba8(*(undefined4 *)(iVar9 + 0x88),0x8a1000,iVar15 + iVar10,0x9f);
      (**(code **)(**(int **)(iVar9 + 4) + 0xd8))(*(int **)(iVar9 + 4),1);
      if (iVar13 == 0) {
        uStack_cc = 0;
        uStack_c8 = 0x13000;
        FUN_021511c8(iVar9,&uStack_c8,&uStack_cc);
      }
      else {
        uStack_c4 = 0;
        uStack_c0 = 0xf000;
        FUN_021511c8(iVar9,&uStack_c0,&uStack_c4);
      }
      FUN_0214e688(iVar8,iVar9);
      iVar9 = FUN_0203b3f4();
      iVar9 = FUN_0214fba8(*(undefined4 *)(iVar9 + 0x88),0x8a1000,iVar15 + iStack_1b4,0x9f);
      (**(code **)(**(int **)(iVar9 + 4) + 0xd8))(*(int **)(iVar9 + 4),1);
      if (iVar13 == 0) {
        uStack_dc = 0;
        uStack_d8 = 0x1f000;
        FUN_021511c8(iVar9,&uStack_d8,&uStack_dc);
      }
      else {
        uStack_d4 = 0;
        uStack_d0 = 0x19000;
        FUN_021511c8(iVar9,&uStack_d0,&uStack_d4);
      }
      FUN_0214e688(iVar8,iVar9);
      if (iVar13 == 0) {
        uVar12 = 0x12;
      }
      else {
        uVar12 = 0x1e;
      }
      iVar9 = FUN_0203b3f4();
      iVar9 = FUN_0214fba8(*(undefined4 *)(iVar9 + 0x88),0x8a1000,uVar12,0x9f);
      (**(code **)(**(int **)(iVar9 + 4) + 0xd8))(*(int **)(iVar9 + 4),1);
      if (iVar13 == 0) {
        uStack_ec = 0;
        uStack_e8 = 0x2a000;
        FUN_021511c8(iVar9,&uStack_e8,&uStack_ec);
      }
      else {
        uStack_e4 = 0;
        uStack_e0 = 0x22000;
        FUN_021511c8(iVar9,&uStack_e0,&uStack_e4);
      }
      FUN_0214e688(iVar8,iVar9);
      iVar9 = FUN_0203b3f4();
      iVar9 = FUN_0214fba8(*(undefined4 *)(iVar9 + 0x88),0x8a1000,iVar15 + iStack_1b8,0x9f);
      (**(code **)(**(int **)(iVar9 + 4) + 0xd8))(*(int **)(iVar9 + 4),1);
      if (iVar13 == 0) {
        uStack_fc = 0;
        uStack_f8 = 0x34000;
        FUN_021511c8(iVar9,&uStack_f8,&uStack_fc);
      }
      else {
        uStack_f4 = 0;
        uStack_f0 = 0x2a000;
        FUN_021511c8(iVar9,&uStack_f0,&uStack_f4);
      }
      FUN_0214e688(iVar8,iVar9);
      iVar9 = FUN_0203b3f4();
      iVar9 = FUN_0214fba8(*(undefined4 *)(iVar9 + 0x88),0x8a1000,iVar15 + iStack_1bc,0x9f);
      (**(code **)(**(int **)(iVar9 + 4) + 0xd8))(*(int **)(iVar9 + 4),1);
      if (iVar13 == 0) {
        uStack_10c = 0;
        uStack_108 = 0x40000;
        FUN_021511c8(iVar9,&uStack_108,&uStack_10c);
      }
      else {
        uStack_104 = 0;
        uStack_100 = 0x34000;
        FUN_021511c8(iVar9,&uStack_100,&uStack_104);
      }
      FUN_0214e688(iVar8,iVar9);
    }
    else if (iVar10 == 2) {
      iVar10 = FUN_0200d12c(iVar9,10);
      if (iVar13 == 0) {
        iVar15 = 7;
      }
      else {
        iVar15 = 0x13;
      }
      iVar14 = iVar9 + iVar10 * -10;
      if (9 < iVar10) {
        iVar10 = 9;
        iVar14 = iVar10;
      }
      if (iVar9 < 0) {
        iVar10 = 10;
        iVar14 = iVar10;
      }
      if (iVar10 != 0) {
        iVar9 = FUN_0203b3f4();
        iVar9 = FUN_0214fba8(*(undefined4 *)(iVar9 + 0x88),0x8a1000,iVar15 + iVar10,0x9f);
        (**(code **)(**(int **)(iVar9 + 4) + 0xd8))(*(int **)(iVar9 + 4),1);
        if (iVar13 == 0) {
          uStack_7c = 0;
          uStack_78 = 0x12000;
          FUN_021511c8(iVar9,&uStack_78,&uStack_7c);
        }
        else {
          uStack_74 = 0;
          uStack_70 = 0xa000;
          FUN_021511c8(iVar9,&uStack_70,&uStack_74);
        }
        FUN_0214e688(iVar8,iVar9);
      }
      iVar9 = FUN_0203b3f4();
      iVar9 = FUN_0214fba8(*(undefined4 *)(iVar9 + 0x88),0x8a1000,iVar15 + iVar14,0x9f);
      (**(code **)(**(int **)(iVar9 + 4) + 0xd8))(*(int **)(iVar9 + 4),1);
      if (iVar13 == 0) {
        uStack_8c = 0;
        uStack_88 = 0x1e000;
        FUN_021511c8(iVar9,&uStack_88,&uStack_8c);
      }
      else {
        uStack_84 = 0;
        uStack_80 = 0x14000;
        FUN_021511c8(iVar9,&uStack_80,&uStack_84);
      }
      FUN_0214e688(iVar8,iVar9);
    }
    iVar13 = iVar13 + 1;
  } while (iVar13 < 3);
  iVar13 = 0;
  do {
    iVar8 = FUN_02071d3c((int)DAT_020afedc,iVar13);
    if (iVar8 != 0) {
      iVar8 = ALWidgetImp::Create(iVar6,_DAT_021d5154);
      *(int *)(*(int *)(iVar8 + 4) + 0x124) = iVar13;
      aiStack_170[5] = 0;
      aiStack_170[4] = 0;
      FUN_021511c8(iVar8,aiStack_170 + 4,aiStack_170 + 5);
      FUN_02028384(*(undefined4 *)(iVar8 + 4),FUN_02154048);
      aiStack_170[6] = 0x84000;
      FUN_0214ffd0(iVar8,aiStack_170 + 6);
      (**(code **)(**(int **)(iVar8 + 4) + 0x24))(*(int **)(iVar8 + 4),iVar5);
      if (*(int *)(iVar5 + iVar13 * 4 + 0x40) != 0) {
        FUN_0214f7c0(iVar8);
      }
      iVar9 = FUN_0203b3f4();
      iVar9 = FUN_0214fba8(*(undefined4 *)(iVar9 + 0x88),0x8a1000,4,0x9e);
      (**(code **)(**(int **)(iVar9 + 4) + 0xd8))(*(int **)(iVar9 + 4),1);
      uStack_150 = 0;
      if (iVar13 == 0) {
        aiStack_170[7] = -0x60;
      }
      else {
        aiStack_170[7] = -0x50;
      }
      aiStack_170[7] = aiStack_170[7] << 0xc;
      FUN_021511c8(iVar9,aiStack_170 + 7,&uStack_150);
      FUN_0214e688(iVar8,iVar9);
    }
    iVar13 = iVar13 + 1;
  } while (iVar13 < 3);
  FUN_02073ebc(2,1);
  iVar6 = ResultMission::ResultMission_Create(1);
  *(int *)(iVar5 + 0x50) = iVar6;
  *(int *)(iVar6 + 0x44) = iVar5;
  *(undefined1 **)(*(int *)(iVar5 + 0x50) + 0x3c) = &LAB_02154098;
  piVar7 = *(int **)(*(int *)(iVar5 + 0x28) + 4);
  (**(code **)(*piVar7 + 0x148))(piVar7,0x10);
  return *(undefined4 *)(iVar5 + 4);
}

