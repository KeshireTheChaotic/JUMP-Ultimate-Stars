
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-GAME KomaEdit::KomaEdit_Create [source-string] __FILE__="KomaEdit.cpp"
   __FUNCTION__="KomaEdit_Create" lines=[183] passed to 1 source-location call(s) */

undefined4 *
KomaEdit::KomaEdit_Create(undefined4 param_1,int param_2,undefined1 param_3,undefined1 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
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
           thunk_FUN_0201a228(0x4f4,s_KomaEdit_cpp_021700d0,s_KomaEdit_Create_02170008,0xb7);
  func_0x021b65bc();
  FUN_020517fc(puVar1,0,0x4f4);
  *puVar1 = param_1;
  *(undefined1 *)((int)puVar1 + 0x4e2) = param_3;
  *(undefined1 *)((int)puVar1 + 0x4e3) = param_4;
  puVar1[0x82] = FUN_02159094;
  puVar1[0x81] = 0;
  iVar2 = FUN_02026f94();
  puVar1[0xc] = iVar2;
  local_28 = 0x80000;
  (**(code **)(**(int **)(iVar2 + 4) + 0xa0))(*(int **)(iVar2 + 4),&local_28);
  FUN_02028384(*(undefined4 *)(puVar1[0xc] + 4),FUN_02159188);
  (**(code **)(**(int **)(puVar1[0xc] + 4) + 0x24))(*(int **)(puVar1[0xc] + 4),puVar1);
  iVar2 = 0;
  do {
    if (param_2 == 0) {
      puVar1[iVar2 + 4] = 0;
    }
    else {
      puVar1[iVar2 + 4] = *(undefined4 *)(param_2 + iVar2 * 4);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 6);
  uVar3 = ComicDeckDisp::ComicDeck_DispCreate(1,1,3,1,1);
  puVar1[1] = uVar3;
  FUN_02079c30(uVar3,0x9f);
  FUN_0207903c(puVar1[1],0,0);
  FUN_0215ce18(puVar1);
  puVar1[0x12d] = FUN_0215ce14;
  piVar4 = (int *)FUN_020101f4(s_deckmake_deckmake_aar_021700e0,0);
  iVar2 = FUN_0203b424(3);
  uVar3 = FUN_0215e100(*(undefined4 *)(iVar2 + 0x88),3,8,0x2000,3,0x20,0x20,
                       s_deckmake_edit_bg_dig_021700f8,s_deckmake_edit_bg_atm_02170110,0);
  puVar1[0x11] = uVar3;
  local_48 = 0xfff40000;
  FUN_02150070(puVar1[0x11],&local_48);
  (**(code **)(**(int **)(puVar1[0x11] + 4) + 0xd8))(*(int **)(puVar1[0x11] + 4),1);
  if (puVar1[1] != 0) {
    uVar3 = FUN_02079034();
    FUN_021500cc(uVar3,puVar1[0x11]);
  }
  iVar2 = 0;
  do {
    uVar3 = FUN_020101f4((&DAT_0216fc74)[iVar2],0);
    iVar8 = iVar2 + 1;
    puVar1[iVar2 + 0xd] = uVar3;
    iVar2 = iVar8;
  } while (iVar8 < 4);
  DAT_021722b4 = 0;
  *(undefined1 *)((int)puVar1 + 0x4d6) = 0x27;
  iVar2 = thunk_FUN_0201a228(0xcc,s_ALWidget_inl_0216f484,s_Create_0216fc44,0x1de);
  if (iVar2 != 0) {
    func_0x021af26c(iVar2,ALControllerImp::Create,FUN_02159610,0);
  }
  piVar5 = (int *)FUN_021504ac();
  (**(code **)(*(int *)piVar5[1] + 0x24))((int *)piVar5[1],puVar1);
  func_0x021b3b7c(1,0,piVar5,0);
  (**(code **)(*piVar5 + 8))();
  if ((DAT_021722b0 & 1) == 0) {
    DAT_021722b0 = DAT_021722b0 | 1;
  }
  _DAT_021d5154 = 1;
  uVar3 = ALWidgetBaseImp::Create(puVar1,0x60,0);
  local_44 = 0x10000;
  local_40 = 0x100000;
  FUN_0214ce68(uVar3,&local_40,&local_44);
  piVar5 = &DAT_0216fe58;
  uVar11 = 0;
  do {
    iVar2 = FUN_0203b3f4();
    iVar2 = FUN_0215e2d4(*(undefined4 *)(iVar2 + 0x88),*piVar5,piVar5[1] - *piVar5,0,0,0x9f);
    if (iVar2 != 0) {
      (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
    }
    iVar2 = FUN_0215e9e4(uVar3,piVar5,iVar2,0x9f,0);
    puVar1[uVar11 + 0x14] = iVar2;
    *(uint *)(*(int *)(iVar2 + 4) + 0x124) = uVar11 | 0x10000000;
    (**(code **)(**(int **)(puVar1[uVar11 + 0x14] + 4) + 0x24))
              (*(int **)(puVar1[uVar11 + 0x14] + 4),puVar1);
    uVar12 = uVar11 + 1;
    *(code **)(*(int *)(puVar1[uVar11 + 0x14] + 4) + 0xec) = FUN_02159840;
    piVar5 = piVar5 + 9;
    *(code **)(*(int *)(puVar1[uVar11 + 0x14] + 4) + 0xe4) = FUN_02159af8;
    *(undefined1 *)(*(int *)(puVar1[uVar11 + 0x14] + 4) + 0xb1) = 1;
    uVar11 = uVar12;
  } while ((int)uVar12 < 5);
  func_0x021b77a8(*(undefined4 *)(puVar1[0x14] + 4),0x200);
  iVar2 = 0;
  do {
    func_0x021b400c(*(undefined4 *)(puVar1[iVar2 + 0x14] + 4),(&DAT_0216fc64)[iVar2]);
    (**(code **)(**(int **)(puVar1[iVar2 + 0x15] + 4) + 0x160))
              (*(int **)(puVar1[iVar2 + 0x15] + 4),1,*(undefined4 *)(puVar1[iVar2 + 0x14] + 4));
    (**(code **)(**(int **)(puVar1[iVar2 + 0x14] + 4) + 0x160))
              (*(int **)(puVar1[iVar2 + 0x14] + 4),2,*(undefined4 *)(puVar1[iVar2 + 0x15] + 4));
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  iVar2 = FUN_0203b3f4();
  uVar6 = FUN_0215e2d4(*(undefined4 *)(iVar2 + 0x88),0x820000,0x14,0,0,0x5f);
  puVar1[0x19] = uVar6;
  FUN_021500cc(uVar6,puVar1[0x17]);
  uVar6 = FUN_021504d4(puVar1[0x14],0x31305053);
  FUN_0215d100(puVar1 + 0x1a,uVar6,0x10);
  puVar1[0x13] = uVar3;
  FUN_021500cc(uVar3,puVar1[0x11]);
  if ((DAT_021722b8 & 1) == 0) {
    DAT_021722b8 = DAT_021722b8 | 1;
  }
  _DAT_021d5154 = 1;
  uVar3 = ALWidgetBaseImp::Create(puVar1,0x60,0);
  puVar1[0x22] = uVar3;
  FUN_02051890(&DAT_0216fca8,&DAT_02172300,0x24);
  iVar2 = 0;
  do {
    iVar8 = 0;
    do {
      DAT_02172310 = (short)iVar8 * 0x30 + 0x18;
      DAT_02172312 = (undefined2)((uint)((iVar2 * 0x30 + 0x18) * 0x10000) >> 0x10);
      iVar7 = FUN_0215e9e4(uVar3,&DAT_02172300,0,0x9f,0);
      puVar1[iVar2 * 5 + iVar8 + 0x2a] = iVar7;
      *(int *)(*(int *)(iVar7 + 4) + 0x124) = iVar8 + iVar2 * 5;
      (**(code **)(**(int **)(puVar1[iVar2 * 5 + iVar8 + 0x2a] + 4) + 0x24))
                (*(int **)(puVar1[iVar2 * 5 + iVar8 + 0x2a] + 4),puVar1);
      iVar7 = iVar8 + 1;
      *(code **)(*(int *)(puVar1[iVar2 * 5 + iVar8 + 0x2a] + 4) + 0xec) = FUN_02159d08;
      *(code **)(*(int *)(puVar1[iVar2 * 5 + iVar8 + 0x2a] + 4) + 0xf0) = FUN_02159e90;
      *(code **)(*(int *)(puVar1[iVar2 * 5 + iVar8 + 0x2a] + 4) + 0xe4) = FUN_02159fe4;
      iVar8 = iVar7;
    } while (iVar7 < 5);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  iVar2 = 0;
  do {
    iVar8 = 0;
    do {
      (**(code **)(**(int **)(puVar1[iVar2 * 5 + iVar8 + 0x2b] + 4) + 0x160))
                (*(int **)(puVar1[iVar2 * 5 + iVar8 + 0x2b] + 4),8,
                 *(undefined4 *)(puVar1[iVar2 * 5 + iVar8 + 0x2a] + 4));
      (**(code **)(**(int **)(puVar1[iVar2 * 5 + iVar8 + 0x2a] + 4) + 0x160))
                (*(int **)(puVar1[iVar2 * 5 + iVar8 + 0x2a] + 4),4,
                 *(undefined4 *)(puVar1[iVar2 * 5 + iVar8 + 0x2b] + 4));
      iVar8 = iVar8 + 1;
    } while (iVar8 < 4);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  iVar2 = 0;
  do {
    iVar8 = 0;
    do {
      (**(code **)(**(int **)(puVar1[iVar2 * 5 + iVar8 + 0x2f] + 4) + 0x160))
                (*(int **)(puVar1[iVar2 * 5 + iVar8 + 0x2f] + 4),1,
                 *(undefined4 *)(puVar1[iVar2 * 5 + iVar8 + 0x2a] + 4));
      (**(code **)(**(int **)(puVar1[iVar2 * 5 + iVar8 + 0x2a] + 4) + 0x160))
                (*(int **)(puVar1[iVar2 * 5 + iVar8 + 0x2a] + 4),2,
                 *(undefined4 *)(puVar1[iVar2 * 5 + iVar8 + 0x2f] + 4));
      iVar8 = iVar8 + 1;
    } while (iVar8 < 5);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  piVar5 = &DAT_0216ff0c;
  iVar2 = 0;
  do {
    iVar8 = FUN_0203b3f4();
    iVar8 = FUN_0215e2d4(*(undefined4 *)(iVar8 + 0x88),*piVar5,piVar5[1] - *piVar5,0,0,0x9f);
    if (iVar8 != 0) {
      (**(code **)(**(int **)(iVar8 + 4) + 0xd8))(*(int **)(iVar8 + 4),1);
    }
    iVar8 = FUN_0215e9e4(uVar3,piVar5,iVar8,0x9f,0);
    puVar1[iVar2 + 0x23] = iVar8;
    *(int *)(*(int *)(iVar8 + 4) + 0x124) = iVar2;
    (**(code **)(**(int **)(puVar1[iVar2 + 0x23] + 4) + 0x24))
              (*(int **)(puVar1[iVar2 + 0x23] + 4),puVar1);
    iVar8 = iVar2 + 1;
    *(code **)(*(int *)(puVar1[iVar2 + 0x23] + 4) + 0xec) = FUN_0215ab48;
    piVar5 = piVar5 + 9;
    *(code **)(*(int *)(puVar1[iVar2 + 0x23] + 4) + 0xe4) = FUN_0215abb0;
    iVar2 = iVar8;
  } while (iVar8 < 7);
  func_0x021b400c(*(undefined4 *)(puVar1[0x23] + 4),0x820018);
  *(undefined1 *)(*(int *)(puVar1[0x23] + 4) + 0xb1) = 1;
  puVar1[0x133] = 0x82001a;
  iVar2 = 0;
  do {
    (**(code **)(**(int **)(puVar1[iVar2 + 0x24] + 4) + 0x160))
              (*(int **)(puVar1[iVar2 + 0x24] + 4),1,*(undefined4 *)(puVar1[iVar2 + 0x23] + 4));
    (**(code **)(**(int **)(puVar1[iVar2 + 0x23] + 4) + 0x160))
              (*(int **)(puVar1[iVar2 + 0x23] + 4),2,*(undefined4 *)(puVar1[iVar2 + 0x24] + 4));
    iVar2 = iVar2 + 1;
  } while (iVar2 < 6);
  iVar2 = FUN_0203b3f4();
  uVar3 = FUN_0215e2d4(*(undefined4 *)(iVar2 + 0x88),0x810000,0,0,0,0x60);
  iVar2 = 0;
  puVar1[0x3e] = uVar3;
  do {
    iVar8 = FUN_0203b3f4();
    uVar3 = FUN_0215e2d4(*(undefined4 *)(iVar8 + 0x88),0x810000,0,0,0,0xa0);
    puVar1[iVar2 + 0x3f] = uVar3;
    FUN_021500cc(uVar3,puVar1[iVar2 + 0x24]);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 6);
  FUN_0215d100(puVar1 + 0x45,puVar1[0x3f],0);
  FUN_021500cc(puVar1[0x22],puVar1[0x11]);
  iVar8 = ALWidgetBaseImp::Create(puVar1,0x60,0,1);
  local_34 = 0x90000;
  local_30 = 0x180000;
  FUN_0214ce68(iVar8,&local_30,&local_34);
  FUN_02028384(*(undefined4 *)(iVar8 + 4),FUN_0215d140);
  (**(code **)(**(int **)(iVar8 + 4) + 0xd8))(*(int **)(iVar8 + 4),0);
  func_0x021b65d8(*(undefined4 *)(iVar8 + 4));
  puVar9 = &DAT_0216fd5c;
  iVar2 = 0;
  do {
    iVar7 = FUN_0215e9e4(iVar8,puVar9,0,0x5f,0);
    puVar1[iVar2 + 0x4e] = iVar7;
    *(int *)(*(int *)(iVar7 + 4) + 0x124) = iVar2;
    (**(code **)(**(int **)(puVar1[iVar2 + 0x4e] + 4) + 0x24))
              (*(int **)(puVar1[iVar2 + 0x4e] + 4),puVar1);
    iVar7 = iVar2 + 1;
    *(code **)(*(int *)(puVar1[iVar2 + 0x4e] + 4) + 0xec) = FUN_0215b164;
    puVar9 = puVar9 + 0x24;
    *(code **)(*(int *)(puVar1[iVar2 + 0x4e] + 4) + 0xe4) = FUN_0215b198;
    *(undefined1 *)(*(int *)(puVar1[iVar2 + 0x4e] + 4) + 0xb1) = 1;
    iVar2 = iVar7;
  } while (iVar7 < 3);
  (**(code **)(**(int **)(puVar1[0x4e] + 4) + 0x160))
            (*(int **)(puVar1[0x4e] + 4),4,*(undefined4 *)(puVar1[0x4f] + 4));
  (**(code **)(**(int **)(puVar1[0x4f] + 4) + 0x160))
            (*(int **)(puVar1[0x4f] + 4),2,*(undefined4 *)(puVar1[0x50] + 4));
  (**(code **)(**(int **)(puVar1[0x50] + 4) + 0x160))
            (*(int **)(puVar1[0x50] + 4),1,*(undefined4 *)(puVar1[0x4f] + 4));
  (**(code **)(**(int **)(puVar1[0x4f] + 4) + 0x160))
            (*(int **)(puVar1[0x4f] + 4),8,*(undefined4 *)(puVar1[0x4e] + 4));
  (**(code **)(**(int **)(puVar1[0x50] + 4) + 0x160))
            (*(int **)(puVar1[0x50] + 4),8,*(undefined4 *)(puVar1[0x4e] + 4));
  iVar2 = FUN_0215e9e4(iVar8,&DAT_0216fcf0,0,0x60,0);
  puVar1[0x51] = iVar2;
  (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),puVar1);
  *(undefined1 *)(*(int *)(puVar1[0x51] + 4) + 0xb1) = 1;
  *(undefined1 *)(*(int *)(puVar1[0x51] + 4) + 0xab) = 0;
  *(undefined1 *)(*(int *)(puVar1[0x51] + 4) + 0xaa) = 1;
  local_3c = 0xfff70000;
  local_38 = 0;
  FUN_0214ce68(puVar1[0x51],&local_38,&local_3c);
  iVar2 = FUN_0203b3f4();
  uVar3 = FUN_0215e2d4(*(undefined4 *)(iVar2 + 0x88),0x820000,0,0,0,0x60);
  puVar1[0x52] = uVar3;
  FUN_021500cc(uVar3,iVar8);
  iVar2 = 0;
  do {
    iVar7 = FUN_0203b3f4();
    uVar3 = FUN_0215e2d4(*(undefined4 *)(iVar7 + 0x88),0x820000,
                         (int)(char)(&DAT_0216d67c)[iVar2 * 3],0,0,0x60);
    puVar1[iVar2 + 0x53] = uVar3;
    FUN_021500cc(uVar3,puVar1[iVar2 + 0x4e]);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  iVar7 = FUN_0203b3f4();
  uVar3 = FUN_0215e2d4(*(undefined4 *)(iVar7 + 0x88),0x820000,(int)(char)(&DAT_0216d67e)[iVar2 * 3],
                       0xfffffffc,0xfffffffc,0x60);
  puVar1[0x56] = uVar3;
  *(undefined1 *)((int)puVar1 + 0x4db) = 0xff;
  puVar1[0x4d] = iVar8;
  iVar2 = ALWidgetBaseImp::Create(puVar1,0x60,0,0);
  FUN_02028384(*(undefined4 *)(iVar2 + 4),FUN_0215d140);
  puVar10 = &DAT_0216fdc8;
  iVar8 = 0;
  do {
    iVar7 = FUN_0215e9e4(iVar2,puVar10,0,0x5f,0);
    puVar1[iVar8 + 0x58] = iVar7;
    *(int *)(*(int *)(iVar7 + 4) + 0x124) = iVar8;
    (**(code **)(**(int **)(puVar1[iVar8 + 0x58] + 4) + 0x24))
              (*(int **)(puVar1[iVar8 + 0x58] + 4),puVar1);
    *(code **)(*(int *)(puVar1[iVar8 + 0x58] + 4) + 0xec) = FUN_0215b764;
    *(code **)(*(int *)(puVar1[iVar8 + 0x58] + 4) + 0xe4) = FUN_0215b800;
    *(undefined1 *)(*(int *)(puVar1[iVar8 + 0x58] + 4) + 0xb1) = 1;
    iVar7 = FUN_0203b3f4();
    uVar3 = FUN_0215e2d4(*(undefined4 *)(iVar7 + 0x88),*puVar10,puVar10[1],0,0,0x5f);
    puVar1[iVar8 + 0x5c] = uVar3;
    FUN_021500cc(uVar3,puVar1[iVar8 + 0x58]);
    iVar8 = iVar8 + 1;
    puVar10 = puVar10 + 9;
  } while (iVar8 < 4);
  puVar1[0x57] = iVar2;
  uVar3 = FUN_0215b6d8(puVar1[0x5c]);
  iVar2 = CommonPaletteAnime::CommonPaletteAnime_Create(uVar3,0x61,1,3,0x80);
  puVar1[0x60] = iVar2;
  *(undefined2 *)(iVar2 + 0x16) = 0x7fff;
  *(undefined1 *)(iVar2 + 0x18) = 0x14;
  *(undefined1 *)(iVar2 + 0x19) = 1;
  FUN_0215b740(puVar1[0x60],0);
  FUN_0215bb8c(puVar1,0,0,0);
  uVar3 = ALWidgetBaseImp::Create(puVar1,0x20,0,0);
  iVar2 = FUN_0215e9e4(uVar3,&DAT_0216fc84,0,0x1f,0);
  puVar1[100] = iVar2;
  (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),puVar1);
  *(code **)(*(int *)(puVar1[100] + 4) + 0xec) = FUN_0215bca8;
  *(code **)(*(int *)(puVar1[100] + 4) + 0xe4) = FUN_0215bcd8;
  func_0x021b6214(*(undefined4 *)(puVar1[100] + 4),1);
  *(undefined1 *)(*(int *)(puVar1[100] + 4) + 0xb1) = 1;
  iVar2 = FUN_0203b424(2);
  uVar6 = FUN_0215e100(*(undefined4 *)(iVar2 + 0x88),3,8,0x2000,0,0x40,0x40,
                       s_deckmake_edit_words_dig_02170128,s_deckmake_edit_words_atm_02170140,0);
  puVar1[0x12] = uVar6;
  local_2c = 0;
  FUN_02150a10(puVar1[0x12],&local_2c);
  DAT_02093c08 = DAT_02093c08 + -1;
  (&DAT_020a16d0)[DAT_02093c08] = DAT_020a0dd0;
  iVar2 = FUN_0203b3f4();
  DAT_020a0dd0 = *(undefined4 *)(*(int *)(iVar2 + 0x88) + 4);
  uVar6 = func_0x021caa0c(s_font_jskfont_aft_02170158,0,0);
  puVar1[0x65] = uVar6;
  iVar2 = 0;
  DAT_020a0dd0 = (&DAT_020a16d0)[DAT_02093c08];
  DAT_02093c08 = DAT_02093c08 + 1;
  do {
    uVar6 = FUN_0215e6d4(puVar1[0x65],&DAT_0217016c,8,iVar2 * 0x10 + 5,0x1f,6,0);
    puVar1[iVar2 + 0x66] = uVar6;
    FUN_021500cc(uVar6,puVar1[0x12]);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  iVar2 = FUN_0203b3f4();
  uVar6 = FUN_0215e2d4(*(undefined4 *)(iVar2 + 0x88),0x820000,0x2d,0,0,0x1f);
  puVar1[0x68] = uVar6;
  FUN_021500cc(uVar6,puVar1[0x12]);
  iVar2 = FUN_0203b3f4();
  iVar2 = FUN_0215e2d4(*(undefined4 *)(iVar2 + 0x88),0x820000,0x2b,0,0,0x1f);
  puVar1[0x69] = iVar2;
  (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),puVar1);
  FUN_0215c260(puVar1,0,0,0);
  puVar1[99] = uVar3;
  FUN_0215bd18(puVar1,1);
  iVar8 = ALWidgetBaseImp::Create(puVar1,0x60,0,0);
  FUN_02028384(*(undefined4 *)(iVar8 + 4),FUN_0215d140);
  func_0x021b65d8(*(undefined4 *)(iVar8 + 4));
  puVar9 = &DAT_0216fd14;
  iVar2 = 0;
  do {
    iVar7 = FUN_0215e9e4(iVar8,puVar9,0,0x5f,0);
    puVar1[iVar2 + 0x7c] = iVar7;
    *(int *)(*(int *)(iVar7 + 4) + 0x124) = iVar2;
    (**(code **)(**(int **)(puVar1[iVar2 + 0x7c] + 4) + 0x24))
              (*(int **)(puVar1[iVar2 + 0x7c] + 4),puVar1);
    iVar7 = iVar2 + 1;
    *(code **)(*(int *)(puVar1[iVar2 + 0x7c] + 4) + 0xec) = FUN_0215c4f8;
    puVar9 = puVar9 + 0x24;
    *(code **)(*(int *)(puVar1[iVar2 + 0x7c] + 4) + 0xe4) = FUN_0215c528;
    *(undefined1 *)(*(int *)(puVar1[iVar2 + 0x7c] + 4) + 0xb1) = 1;
    iVar2 = iVar7;
  } while (iVar7 < 2);
  (**(code **)(**(int **)(puVar1[0x7d] + 4) + 0x160))
            (*(int **)(puVar1[0x7d] + 4),8,*(undefined4 *)(puVar1[0x7c] + 4));
  (**(code **)(**(int **)(puVar1[0x7c] + 4) + 0x160))
            (*(int **)(puVar1[0x7c] + 4),4,*(undefined4 *)(puVar1[0x7d] + 4));
  iVar2 = FUN_0215e9e4(iVar8,&DAT_0216fccc,0,0x5f,0);
  puVar1[0x7e] = iVar2;
  *(undefined1 *)(*(int *)(iVar2 + 4) + 0xaa) = 1;
  (**(code **)(**(int **)(puVar1[0x7e] + 4) + 0x24))(*(int **)(puVar1[0x7e] + 4),puVar1);
  *(code **)(*(int *)(puVar1[0x7e] + 4) + 0xec) = FUN_0215c4f8;
  *(code **)(*(int *)(puVar1[0x7e] + 4) + 0xe4) = FUN_0215c528;
  *(undefined1 *)(*(int *)(puVar1[0x7e] + 4) + 0xb1) = 1;
  uVar3 = FUN_0215b6d8(puVar1[0x12]);
  uVar3 = CommonPaletteAnime::CommonPaletteAnime_Create(uVar3,0x213,2,5,0x80);
  puVar1[0x7f] = uVar3;
  uVar3 = FUN_0215b6d8(puVar1[0x12]);
  uVar3 = CommonPaletteAnime::CommonPaletteAnime_Create(uVar3,0x215,2,5,0x80);
  puVar1[0x80] = uVar3;
  FUN_0215c464(puVar1[0x7f],3,0x870,0x8df,0x1e);
  FUN_0215c464(puVar1[0x80],3,0x870,0x8df,0x1e);
  FUN_0215c484(puVar1[0x7f],0);
  FUN_0215c484(puVar1[0x80],0);
  puVar1[0x7b] = iVar8;
  FUN_0215c5a8(puVar1,1);
  func_0x021b65d8(*(undefined4 *)(puVar1[0x13] + 4));
  func_0x021b65d8(*(undefined4 *)(puVar1[0x22] + 4));
  (**(code **)(*piVar4 + 0xc))();
  iVar2 = FUN_0203b3f4();
  uVar6 = *(undefined4 *)(iVar2 + 0x88);
  uVar3 = FUN_0207902c(puVar1[1]);
  uVar3 = ComicDeckMakeDisp::ComicDeck_DispKomaCreate(uVar6,uVar3);
  puVar1[2] = uVar3;
  FUN_0207907c(puVar1[1],*puVar1);
  FUN_0215ce18(puVar1);
  iVar2 = 0;
  do {
    if (puVar1[iVar2 + 4] != 0) {
      FUN_0215b0b4(puVar1[iVar2 + 0x3f]);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 6);
  return puVar1;
}

