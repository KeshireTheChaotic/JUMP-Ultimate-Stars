
/* JUS-SCENE jus_Scene11_CreateImpl [scene-map] called by scene 11 create wrapper 0206eca8 while
   overlay 6 is resident */

undefined4
jus_Scene11_CreateImpl(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  char cVar3;
  char cVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint unaff_r6;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_9c;
  char acStack_98 [4];
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
  undefined1 auStack_68 [8];
  uint uStack_60;
  undefined1 uStack_5c;
  undefined1 uStack_5b;
  undefined1 uStack_5a;
  int aiStack_58 [4];
  int aiStack_48 [4];
  int aiStack_38 [4];
  undefined4 auStack_28 [4];
  undefined4 uStack_18;
  
  uStack_ac = 0;
  uStack_9c = 0;
  uStack_b0 = 0;
  uStack_18 = param_4;
  if (DAT_020afeb9 != '\0') {
    FUN_0207367c(0);
  }
  FUN_0207379c();
  FUN_02073778();
  func_0x02087e48();
  func_0x02087f58();
  FUN_02087f48(1);
  func_0x02087f20();
  DAT_020a0c4d = 1;
  DAT_02172960 = jus_AllocDebug(0x170,s_Battle_cpp_02171ab0,s_Battle_Add_02171aa4,0x7f);
  FUN_020517fc(DAT_02172960,0,0x170);
  *(undefined4 *)(DAT_02172960 + 0x154) = param_1;
  *(undefined4 *)(DAT_02172960 + 0x164) = 0;
  func_0x02153074();
  uVar5 = FUN_02026f94();
  *(undefined4 *)(DAT_02172960 + 0x144) = uVar5;
  uStack_7c = 0x9a000;
  piVar6 = *(int **)(*(int *)(DAT_02172960 + 0x144) + 4);
  (**(code **)(*piVar6 + 0xa0))(piVar6,&uStack_7c);
  piVar6 = *(int **)(*(int *)(DAT_02172960 + 0x144) + 4);
  (**(code **)(*piVar6 + 0x94))(piVar6,0x200000);
  iVar7 = thunk_FUN_0208c51c();
  if (iVar7 == 0) {
    if ((*(int *)(DAT_02172960 + 0x154) == 6) || (*(int *)(DAT_02172960 + 0x154) == 7)) {
      *(bool *)(DAT_02172960 + 0x16e) = '\0' < DAT_020afec3;
    }
    else {
      *(undefined1 *)(DAT_02172960 + 0x16e) = 1;
    }
  }
  else {
    *(undefined1 *)(DAT_02172960 + 0x16e) = 0;
  }
  *(undefined4 *)(DAT_02172960 + 0x158) = DAT_020afe90;
  *(undefined4 *)(DAT_02172960 + 0x15c) = DAT_020afe98;
  iVar7 = *(int *)(DAT_02172960 + 0x154);
  uVar12 = 0;
  switch(iVar7) {
  case 0:
  case 2:
    unaff_r6 = (uint)(byte)PTR_DAT_0214d054[DAT_020afea0 * 2];
    uVar12 = (uint)(byte)PTR_DAT_0214d058[DAT_020afea0 * 2];
    break;
  case 1:
    uVar12 = 3;
    unaff_r6 = DAT_020afea0;
    break;
  case 3:
    uVar12 = 4;
    unaff_r6 = DAT_020afea0;
    if (DAT_020afebd != '\0') {
      unaff_r6 = DAT_020afea0 + 4;
    }
    break;
  case 4:
    unaff_r6 = 8;
    if (*(int *)(DAT_02172960 + 0x158) < 3) {
      uVar12 = 5;
    }
    else {
      uVar12 = 6;
    }
    DAT_020afeba = 1;
    break;
  case 5:
    DAT_020afeba = 1;
    *(undefined4 *)(DAT_02172960 + 0x158) = 2;
    *(undefined4 *)(DAT_02172960 + 0x15c) = 0;
    unaff_r6 = 8;
    uVar12 = 7;
    break;
  case 6:
    uVar12 = 8;
    unaff_r6 = DAT_020afea0;
    if (DAT_020afebd != '\0') {
      unaff_r6 = DAT_020afea0 + 4;
    }
    iVar7 = FUN_02087724();
    if (iVar7 == 2) {
      uVar12 = 9;
    }
    break;
  case 7:
  case 8:
  case 9:
    unaff_r6 = 3;
    if (iVar7 == 7) {
      uVar12 = 8;
    }
    else if (iVar7 == 9) {
      uVar12 = 3;
    }
    else {
      uVar12 = 4;
    }
    if (DAT_020afebd != '\0') {
      unaff_r6 = 7;
    }
  }
  uVar1 = (&DAT_02170d88)[uVar12 * 2];
  uVar2 = (&DAT_02170d89)[uVar12 * 2];
  if (*(int *)(DAT_02172960 + 0x154) == 2) {
    uVar1 = 3;
  }
  switch(*(int *)(DAT_02172960 + 0x154)) {
  case 0:
    uStack_ac = 1;
  default:
    FUN_02028384(*(undefined4 *)(*(int *)(DAT_02172960 + 0x144) + 4),&LAB_0214daa4_1);
    cVar4 = DAT_020afebd;
    *(undefined4 *)(DAT_02172960 + 0x160) = DAT_020afe9c;
    if (unaff_r6 == 0x16) {
      for (iVar7 = 0; iVar7 < *(int *)(DAT_02172960 + 0x158); iVar7 = iVar7 + 1) {
        uVar5 = func_0x02070ca4(0);
        auStack_28[iVar7] = uVar5;
      }
    }
    else {
      for (iVar7 = 0; iVar7 < *(int *)(DAT_02172960 + 0x158); iVar7 = iVar7 + 1) {
        uVar5 = func_0x02070ca4(iVar7);
        auStack_28[iVar7] = uVar5;
      }
    }
    uStack_b0 = func_0x02150f68(unaff_r6);
    break;
  case 5:
    FUN_02028384(*(undefined4 *)(*(int *)(DAT_02172960 + 0x144) + 4),PTR_FUN_0214db94_1_0214d068);
    cVar4 = '\0';
    *(undefined4 *)(DAT_02172960 + 0x160) = 0xd;
    FUN_020708e4(1,6,(int)(char)PTR_DAT_0214d06c[0xe]);
    for (iVar7 = 0; iVar7 < *(int *)(DAT_02172960 + 0x158); iVar7 = iVar7 + 1) {
      uVar5 = func_0x02070d14(iVar7);
      auStack_28[iVar7] = uVar5;
    }
    *(undefined1 *)(DAT_02172960 + iRam0214d070) = DAT_020afebb;
    DAT_020afebb = 1;
    break;
  case 7:
  case 8:
  case 9:
    FUN_02028384(*(undefined4 *)(*(int *)(DAT_02172960 + 0x144) + 4),uRam0214d074);
    cVar4 = DAT_020afebd;
    *(undefined4 *)(DAT_02172960 + 0x160) = DAT_020afe9c;
    uStack_9c = 1;
    for (iVar7 = 0; iVar7 < *(int *)(DAT_02172960 + 0x158); iVar7 = iVar7 + 1) {
      uVar5 = func_0x02070ca4(iVar7);
      auStack_28[iVar7] = uVar5;
    }
  }
  FUN_02041f60(DAT_020a0f64,1);
  iVar7 = FUN_0203b414(0);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar7 + 0x88) + 4),0);
  iVar7 = FUN_0203b414(0);
  uStack_94 = 0x1000;
  piVar6 = *(int **)(*(int *)(iVar7 + 0x88) + 4);
  (**(code **)(*piVar6 + 0x10))(piVar6,&uStack_94);
  iVar7 = FUN_0203b414(1);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar7 + 0x88) + 4),1);
  iVar7 = FUN_0203b414(1);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar7 + 0x88) + 4),4);
  iVar7 = FUN_0203b414(1);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar7 + 0x88) + 4),0x20,0x20);
  iVar7 = FUN_0203b414(1);
  piVar6 = *(int **)(*(int *)(iVar7 + 0x88) + 4);
  (**(code **)(*piVar6 + 0x90))(piVar6,0x4000);
  iVar7 = FUN_0203b414(1);
  uStack_90 = 0;
  piVar6 = *(int **)(*(int *)(iVar7 + 0x88) + 4);
  (**(code **)(*piVar6 + 0x10))(piVar6,&uStack_90);
  iVar7 = FUN_0203b414(2);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar7 + 0x88) + 4),2);
  iVar7 = FUN_0203b414(2);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar7 + 0x88) + 4),8);
  iVar7 = FUN_0203b414(2);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar7 + 0x88) + 4),0x80,0x80);
  iVar7 = FUN_0203b414(2);
  piVar6 = *(int **)(*(int *)(iVar7 + 0x88) + 4);
  (**(code **)(*piVar6 + 0x90))(piVar6,0x4000);
  iVar7 = FUN_0203b414(2);
  uStack_8c = 0x2000;
  piVar6 = *(int **)(*(int *)(iVar7 + 0x88) + 4);
  (**(code **)(*piVar6 + 0x10))(piVar6,&uStack_8c);
  iVar7 = FUN_0203b414(3);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar7 + 0x88) + 4),3);
  iVar7 = FUN_0203b414(3);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar7 + 0x88) + 4),8);
  iVar7 = FUN_0203b414(3);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar7 + 0x88) + 4),0x40,0x40);
  iVar7 = FUN_0203b414(3);
  piVar6 = *(int **)(*(int *)(iVar7 + 0x88) + 4);
  (**(code **)(*piVar6 + 0x90))(piVar6,0x10000);
  iVar7 = FUN_0203b414(3);
  uStack_88 = 0x3000;
  piVar6 = *(int **)(*(int *)(iVar7 + 0x88) + 4);
  (**(code **)(*piVar6 + 0x10))(piVar6,&uStack_88);
  iVar7 = FUN_0203b424(0);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar7 + 0x88) + 4),1);
  iVar7 = FUN_0203b424(0);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar7 + 0x88) + 4),4);
  iVar7 = FUN_0203b424(0);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar7 + 0x88) + 4),0x20,0x20);
  iVar7 = FUN_0203b424(0);
  piVar6 = *(int **)(*(int *)(iVar7 + 0x88) + 4);
  (**(code **)(*piVar6 + 0x90))(piVar6,0x6000);
  iVar7 = FUN_0203b424(0);
  uStack_84 = 0x2000;
  piVar6 = *(int **)(*(int *)(iVar7 + 0x88) + 4);
  (**(code **)(*piVar6 + 0x10))(piVar6,&uStack_84);
  iVar7 = FUN_0203b424(1);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar7 + 0x88) + 4),0,0);
  iVar7 = FUN_0203b424(1);
  piVar6 = *(int **)(*(int *)(iVar7 + 0x88) + 4);
  (**(code **)(*piVar6 + 0x90))(piVar6,0);
  iVar7 = FUN_0203b424(2);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar7 + 0x88) + 4),0,0);
  iVar7 = FUN_0203b424(2);
  piVar6 = *(int **)(*(int *)(iVar7 + 0x88) + 4);
  (**(code **)(*piVar6 + 0x90))(piVar6,0);
  iVar7 = FUN_0203b424(3);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar7 + 0x88) + 4),1);
  iVar7 = FUN_0203b424(3);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar7 + 0x88) + 4),4);
  iVar7 = FUN_0203b424(3);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar7 + 0x88) + 4),0x20,0x20);
  iVar7 = FUN_0203b424(3);
  piVar6 = *(int **)(*(int *)(iVar7 + 0x88) + 4);
  (**(code **)(*piVar6 + 0x90))(piVar6,0x1000);
  iVar7 = FUN_0203b424(3);
  uStack_80 = 0;
  piVar6 = *(int **)(*(int *)(iVar7 + 0x88) + 4);
  (**(code **)(*piVar6 + 0x10))(piVar6,&uStack_80);
  if (DAT_020afeb9 == '\0') {
    if (DAT_020aff25 == '\0') {
      FUN_020734e0((int)*(short *)(&DAT_02092d0c + *(int *)(DAT_02172960 + 0x160) * 8));
    }
    else {
      FUN_020734e0(0x25);
    }
  }
  else {
    FUN_020734e0(0x26);
  }
  FUN_02073744(0x7a);
  *(dword *)(DAT_02172960 + 0x14c) = 0x1fff;
  *(dword *)(DAT_02172960 + 0x150) = 0x1fff;
  *(dword *)(DAT_02172960 + 0x14c) = 0x1fff;
  func_0x0214e284();
  *(dword *)(DAT_02172960 + 0x150) = 0x1fff;
  func_0x0214e284();
  uVar5 = FUN_0214d934(DAT_020a0e80);
  uVar8 = FUN_020310f4();
  *(undefined4 *)(DAT_02172960 + 0x140) = uVar8;
  FUN_0214d95c(*(undefined4 *)(DAT_02172960 + 0x140));
  uVar8 = ComicDeck::ComicDeckCreate(0,*(undefined4 *)(DAT_02172960 + 0x158));
  *(undefined4 *)(DAT_02172960 + 0x114) = uVar8;
  for (iVar7 = 0; iVar7 < *(int *)(DAT_02172960 + 0x158); iVar7 = iVar7 + 1) {
    uVar8 = FUN_02076908(*(undefined4 *)(DAT_02172960 + 0x114));
    *(undefined4 *)(DAT_02172960 + iVar7 * 4 + 0x118) = uVar8;
    FUN_020769cc(*(undefined4 *)(DAT_02172960 + iVar7 * 4 + 0x118),auStack_28[iVar7]);
  }
  BattleCharaParam::Battle_CharaParamCreate();
  func_0x02151be8();
  CommonEffect::CommonEffect_Init(*(undefined4 *)(DAT_02172968 + 4));
  FUN_02153bc8(*(undefined4 *)(DAT_02172968 + 4));
  uVar8 = BattleMarker::Battle_MarkerCreate
                    (*(undefined4 *)(DAT_02172960 + 0x158),cVar4,uStack_b0,DAT_020afea4);
  *(undefined4 *)(DAT_02172960 + 0xf0) = uVar8;
  iVar7 = FUN_02087724();
  if (iVar7 != 2) {
    uVar8 = BattleComicDeck::Battle_ComicDeckCreate
                      (*(undefined4 *)(DAT_02172960 + *(int *)(DAT_02172960 + 0x15c) * 4 + 0x118),
                       *(undefined4 *)(DAT_02172960 + 0x158));
    *(undefined4 *)(DAT_02172960 + 0xf4) = uVar8;
  }
  piVar6 = (int *)FUN_020101f4(s_chr_ChrBin_aar_02171abc,0);
  uVar8 = BattleObj::Battle_ObjManCreate(0,0,0);
  *(undefined4 *)(DAT_02172960 + 0x108) = uVar8;
  uVar8 = func_0x02161cb4(*(undefined4 *)(DAT_02172960 + 0x160),uStack_9c,uStack_ac,uStack_b0);
  *(undefined4 *)(DAT_02172960 + 0x104) = uVar8;
  func_0x02161bbc(*(undefined4 *)(DAT_02172960 + 0x108),*(undefined4 *)(DAT_02172960 + 0x104));
  if (*(char *)(DAT_02172960 + 0x16e) != '\0') {
    jus_Overlay_SelectSlot2(1);
    uVar8 = func_0x02172a60(*(undefined4 *)(DAT_02172960 + 0x108));
    *(undefined4 *)(DAT_02172960 + 0x128) = uVar8;
  }
  piVar9 = (int *)FUN_020101f4(0x2171acc,0);
  if (*(int *)(DAT_02172960 + 0x154) == 5) {
    iVar7 = *(int *)(DAT_02172960 + 0x158);
    for (iVar11 = 0; iVar11 < iVar7; iVar11 = iVar11 + 1) {
      aiStack_58[iVar11] = 0;
      aiStack_38[iVar11] = aiStack_58[iVar11];
      aiStack_48[iVar11] = aiStack_38[iVar11];
    }
    acStack_98[0] = '\0';
    acStack_98[1] = 1;
  }
  else {
    iVar7 = *(int *)(DAT_02172960 + 0x158);
    for (uVar12 = 0; (int)uVar12 < iVar7; uVar12 = uVar12 + 1) {
      acStack_98[uVar12] = (1 << (uVar12 & 0xff) & (uint)DAT_020afec2) != 0;
      aiStack_48[uVar12] = (int)(char)(&DAT_020afec4)[uVar12];
      aiStack_38[uVar12] = (int)*(char *)(uVar12 + 0x20afec8);
      aiStack_58[uVar12] = *(int *)(uVar12 * 4 + 0x20afecc);
    }
  }
  for (uVar12 = 0; (int)uVar12 < *(int *)(DAT_02172960 + 0x158); uVar12 = uVar12 + 1) {
    uStack_5c = uVar12 == *(uint *)(DAT_02172960 + 0x15c);
    uStack_60 = 1 << (uVar12 & 0xff) & 0xffff;
    if (cVar4 != '\0') {
      cVar3 = (&DAT_020afebe)[uVar12];
      if (*(int *)(DAT_02172960 + 0xf0) != 0) {
        *(char *)(*(int *)(DAT_02172960 + 0xf0) + uVar12 * 0x28 + 0x25) = cVar3;
      }
      for (uVar10 = 0; (int)uVar10 < *(int *)(DAT_02172960 + 0x158); uVar10 = uVar10 + 1) {
        if (cVar3 == (&DAT_020afebe)[uVar10]) {
          uStack_60 = 1 << (uVar10 & 0xff) & 0xffffU | uStack_60;
        }
      }
    }
    uStack_5a = uStack_5c;
    func_0x02162b60(*(undefined4 *)(DAT_02172960 + 0x104),uVar12,auStack_68,&uStack_5b);
    uStack_78 = *(undefined4 *)(DAT_02172960 + uVar12 * 4 + 0x118);
    uStack_74 = *(undefined4 *)(DAT_02172968 + 4);
    cVar3 = acStack_98[uVar12];
    if ((cVar3 == '\0') || (*(char *)(DAT_02172960 + 0x16e) == '\0')) {
      iVar7 = FUN_02086bd4();
      if (iVar7 == 0) {
        uStack_70 = FUN_02028920(uVar12);
        uStack_6c = FUN_020208ec(uVar12);
      }
      else {
        uStack_70 = func_0x020875b0(uVar12);
        uStack_6c = FUN_020875d8(uVar12);
      }
    }
    else {
      uStack_70 = func_0x02173004(*(undefined4 *)(DAT_02172960 + 0x128),uVar12);
      uStack_6c = func_0x02173014(*(undefined4 *)(DAT_02172960 + 0x128),uVar12);
    }
    iVar7 = uVar12 * 4;
    uVar8 = BattleChara::Battle_CharaCreate(uVar12,&uStack_78);
    *(undefined4 *)(DAT_02172960 + iVar7 + 0xdc) = uVar8;
    if (*(int *)(DAT_02172960 + 0xf0) != 0) {
      *(undefined4 *)(*(int *)(DAT_02172960 + 0xf0) + uVar12 * 0x28 + 4) =
           *(undefined4 *)(*(int *)(DAT_02172960 + iVar7 + 0xdc) + 0x1a8);
    }
    func_0x02151ff4(uVar12,*(int *)(*(int *)(*(int *)(*(int *)(DAT_02172960 + uVar12 * 4 + 0xdc) +
                                                     0x1a8) + 0x10) + 0x5c) + 0xc);
    if (*(char *)(DAT_02172960 + 0x16e) != '\0') {
      if (cVar3 == '\0') {
        uVar8 = func_0x02173024(*(undefined4 *)(DAT_02172960 + 0x128),
                                *(undefined4 *)(DAT_02172960 + iVar7 + 0xdc),uVar12,0);
        *(undefined4 *)(DAT_02172960 + iVar7 + 300) = uVar8;
      }
      else {
        uVar8 = func_0x02173024(*(undefined4 *)(DAT_02172960 + 0x128),
                                *(undefined4 *)(DAT_02172960 + iVar7 + 0xdc),uVar12,1);
        *(undefined4 *)(DAT_02172960 + iVar7 + 300) = uVar8;
        func_0x0217319c(*(undefined4 *)(DAT_02172960 + iVar7 + 300),aiStack_48[uVar12]);
        if ((*(int *)(DAT_02172960 + 0x154) == 0) || (*(int *)(DAT_02172960 + 0x154) == 2)) {
          func_0x021731f0(*(undefined4 *)(DAT_02172960 + iVar7 + 300),1);
          func_0x0217329c(*(undefined4 *)(DAT_02172960 + iVar7 + 300),aiStack_58[uVar12],1);
        }
        else {
          func_0x021731f0(*(undefined4 *)(DAT_02172960 + iVar7 + 300),1);
          func_0x0217329c(*(undefined4 *)(DAT_02172960 + iVar7 + 300),0,0);
        }
      }
    }
  }
  (**(code **)(*piVar9 + 0xc))();
  (**(code **)(*piVar6 + 0xc))();
  FUN_0214d95c(uVar5);
  uVar5 = BattlePauseWiFi::Battle_PauseWiFiCreate();
  *(undefined4 *)(DAT_02172960 + 0xd8) = uVar5;
  uVar5 = BattlePause::Battle_PauseCreate(uVar1);
  *(undefined4 *)(DAT_02172960 + 0xd4) = uVar5;
  uVar5 = BattleDemo::Battle_DemoKoCreate();
  *(undefined4 *)(DAT_02172960 + 0xd0) = uVar5;
  FUN_0214d998();
  uVar5 = BattleWindow::Battle_WindowCreate
                    (uVar2,*(int *)(DAT_02172960 + 0x15c),*(undefined4 *)(DAT_02172960 + 0x158),
                     *(undefined4 *)(DAT_02172960 + *(int *)(DAT_02172960 + 0x15c) * 4 + 0x118));
  *(undefined4 *)(DAT_02172960 + 0xec) = uVar5;
  *(undefined4 *)(*(int *)(DAT_02172960 + 0xec) + 8) =
       *(undefined4 *)(DAT_02172960 + *(int *)(DAT_02172960 + 0x15c) * 4 + 0xdc);
  uVar5 = BattleObjCtrl::Battle_ObjCtrlManCreate();
  *(undefined4 *)(DAT_02172960 + 0x10c) = uVar5;
  uVar5 = BattleObjShot::Battle_ObjShotManCreate();
  *(undefined4 *)(DAT_02172960 + 0x110) = uVar5;
  func_0x0214f804(DAT_02172960,unaff_r6,*(undefined4 *)(DAT_02172960 + 0x158));
  *(int *)(*(int *)(DAT_02172960 + 0xec) + 4) = DAT_02172960;
  FUN_02152078(*(undefined4 *)(DAT_02172960 + 0x15c));
  iVar7 = FUN_02150318(DAT_02172960);
  if (iVar7 != 0) {
    for (iVar7 = 0; iVar7 < *(int *)(DAT_02172960 + 0x158); iVar7 = iVar7 + 1) {
      iVar13 = iVar7 * 4;
      iVar11 = DAT_02172960 + iVar13;
      if (*(int *)(iVar11 + 0x4c) == 0) {
        func_0x02156fa4(*(undefined4 *)(iVar11 + 0xdc));
        func_0x0207871c(*(undefined4 *)(DAT_02172960 + iVar13 + 0x118),1);
      }
      else {
        func_0x02156fb4(*(undefined4 *)(iVar11 + 0xdc));
        FUN_02168660(*(undefined4 *)(DAT_02172960 + 0xf0),iVar7);
        func_0x0215200c(iVar7);
        func_0x0207871c(*(undefined4 *)(DAT_02172960 + iVar13 + 0x118),0);
      }
    }
    if (*(int *)(DAT_02172960 + *(int *)(DAT_02172960 + 0x15c) * 4 + 0x4c) == 0) {
      FUN_02152078();
    }
    else {
      FUN_02152028();
    }
  }
  if (unaff_r6 == 8) {
    FUN_0214f07c(*(undefined4 *)(DAT_02172960 + 0xd4));
  }
  else if (unaff_r6 == 0xc) {
    uVar5 = BattleTutorial::Battle_TutorialCreate(DAT_020afea8);
    *(undefined4 *)(DAT_02172960 + 0x13c) = uVar5;
  }
  FUN_02073ebc(2,1);
  FUN_02087f48(0);
  func_0x02087fb8();
  return *(undefined4 *)(DAT_02172960 + 0x140);
}

