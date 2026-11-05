
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-GAME Input::Input_Add [source-string] __FILE__="Input.cpp" __FUNCTION__="Input_Add"
   lines=[90] passed to 1 source-location call(s) */

undefined4 Input::Input_Add(undefined4 param_1)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  undefined *puVar11;
  int iVar12;
  undefined4 uStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_a8;
  int *piStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_68;
  int iStack_64;
  dword adStack_60 [5];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  dword adStack_2c [4];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  puVar3 = (undefined4 *)thunk_FUN_0201a228(1000,s_Input_cpp_0217106c,s_Input_Add_02170d9c,0x5a);
  FUN_020517fc(puVar3,0,1000);
  func_0x021b65bc();
  puVar3[1] = param_1;
  iVar4 = FUN_02026f94();
  puVar3[5] = iVar4;
  uStack_18 = 0x80000;
  (**(code **)(**(int **)(iVar4 + 4) + 0xa0))(*(int **)(iVar4 + 4),&uStack_18);
  FUN_02028384(*(undefined4 *)(puVar3[5] + 4),FUN_02160094 + 1);
  (**(code **)(**(int **)(puVar3[5] + 4) + 0x24))(*(int **)(puVar3[5] + 4),puVar3);
  iVar4 = FUN_020310f4();
  puVar3[4] = iVar4;
  DAT_02093c04 = DAT_02093c04 + -1;
  *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4) = DAT_020a0e80;
  FUN_020314a0(*(undefined4 *)(iVar4 + 4));
  uVar5 = func_0x021ba49c(1,0,1);
  *puVar3 = uVar5;
  iVar4 = puVar3[1] * 0x18;
  puVar11 = &DAT_0216d6c0 + iVar4;
  puVar3[3] = puVar11;
  FUN_02043264(0);
  piVar6 = (int *)FUN_020101f4(s_input_input_aar_02171078,0);
  cVar1 = *(char *)(iVar4 + 0x216d6cb) + '0';
  thunk_FUN_0207400c(&DAT_0217234c,PTR_s_input_mode_bg0_dig_02170a00);
  thunk_FUN_0207400c(&DAT_02172360,PTR_s_input_mode_bg0_atm_02170a04);
  cRam02172359 = cVar1;
  cRam0217236d = cVar1;
  iVar7 = FUN_0203b414(3);
  iVar7 = FUN_0215e100(*(undefined4 *)(iVar7 + 0x88),1,4,0x4000,0,0x20,0x20,&DAT_0217234c,
                       &DAT_02172360,0);
  puVar3[9] = iVar7;
  (**(code **)(**(int **)(iVar7 + 4) + 0xd8))(*(int **)(iVar7 + 4),1);
  adStack_60[0] = 0xfff70000;
  FUN_02150070(puVar3[9],adStack_60);
  (**(code **)(**(int **)(puVar3[9] + 4) + 0x24))(*(int **)(puVar3[9] + 4),puVar3);
  FUN_02028384(*(undefined4 *)(puVar3[9] + 4),0x21606c1);
  thunk_FUN_0207400c(&DAT_0217234c,PTR_s_input_txt_bg0_dig_02170a08);
  thunk_FUN_0207400c(&DAT_02172360,PTR_s_input_txt_bg0_atm_02170a0c);
  cRam02172358 = cVar1;
  DAT_0217236c = cVar1;
  iVar7 = FUN_0203b414(2);
  iVar7 = FUN_0215e100(*(undefined4 *)(iVar7 + 0x88),1,4,0x4000,3,0x40,0x20,&DAT_0217234c,
                       &DAT_02172360,0);
  puVar3[10] = iVar7;
  (**(code **)(**(int **)(iVar7 + 4) + 0xd8))(*(int **)(iVar7 + 4),1);
  adStack_60[1] = 0xfff00000;
  FUN_02150a10(puVar3[10],adStack_60 + 1);
  (**(code **)(**(int **)(puVar3[10] + 4) + 0x24))(*(int **)(puVar3[10] + 4),puVar3);
  FUN_02028384(*(undefined4 *)(puVar3[10] + 4),0x2160735);
  if (puVar3[1] == 4) {
    adStack_60[2] = 0x8000;
    FUN_02150070(puVar3[10],adStack_60 + 2);
  }
  iVar7 = FUN_0203b414(1);
  iVar7 = *(int *)(iVar7 + 0x88);
  FUN_0215e244(iVar7,1,4,0x2000,0,0x20,0x20);
  *(undefined1 *)(*(int *)(iVar7 + 4) + 0x956) = 1;
  if (puVar3[1] == 4) {
    iStack_bc = 0x28;
  }
  else {
    iStack_bc = 0x50;
  }
  iStack_c0 = func_0x021bad40(uVar5,*(undefined1 *)(iVar4 + 0x216d6ca));
  if (3 < iStack_c0) {
    iStack_c0 = 3;
  }
  for (iVar12 = 0; iVar12 < iStack_c0; iVar12 = iVar12 + 1) {
    uVar10 = func_0x021bad54(uVar5,*(undefined1 *)(iVar4 + 0x216d6ca),iVar12);
    uVar10 = FUN_0215e7bc(iVar7,uVar10,0x10,iStack_bc + iVar12 * 0x10,0x5e,0,0,0xd8,0);
    puVar3[iVar12 + 0x13] = uVar10;
  }
  iVar7 = 0;
  do {
    uVar5 = FUN_020101f4((&PTR_s_common_button_aar_021709f4)[iVar7],0);
    iVar12 = iVar7 + 1;
    puVar3[iVar7 + 0x97] = uVar5;
    iVar7 = iVar12;
  } while (iVar12 < 3);
  iVar7 = FUN_0203b414(0);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar7 + 0x88) + 4),0);
  iVar7 = FUN_0203b414(0);
  uStack_40 = 0x2000;
  piVar8 = *(int **)(*(int *)(iVar7 + 0x88) + 4);
  (**(code **)(*piVar8 + 0x10))(piVar8,&uStack_40);
  DAT_02093c08 = DAT_02093c08 + -1;
  (&DAT_020a16d0)[DAT_02093c08] = DAT_020a0dd0;
  iVar7 = FUN_0203b404();
  DAT_020a0dd0 = *(undefined4 *)(*(int *)(iVar7 + 0x88) + 4);
  uVar5 = func_0x021caa0c(s_font_jskfont_aft_02171088,0,0);
  puVar3[0x76] = uVar5;
  *(ushort *)(puVar3 + 0xab) = (ushort)*(byte *)(iVar4 + 0x216d6cc);
  for (iVar7 = 0; iVar7 < *(short *)(puVar3 + 0xab); iVar7 = iVar7 + 1) {
    iVar12 = iVar7 >> 0x1f;
    iVar12 = (int)((((uint)(iVar7 * 0x40000000 + iVar12) >> 0x1e | iVar12 << 2) - iVar12) *
                  0x1000000) >> 0x17;
    uVar5 = FUN_0215e660(puVar3[0x76],&DAT_0217109c,puVar11[iVar12 + 0xf],
                         (uint)(byte)puVar11[iVar12 + 0x10] +
                         ((int)(iVar7 + ((uint)(iVar7 >> 1) >> 0x1e)) >> 2) * 0x18,0x80,6,0);
    puVar3[iVar7 + 0x77] = uVar5;
    (**(code **)(**(int **)(puVar3[iVar7 + 0x77] + 4) + 0xd8))
              (*(int **)(puVar3[iVar7 + 0x77] + 4),1);
    FUN_021500cc(puVar3[iVar7 + 0x77],puVar3[10]);
  }
  DAT_020a0dd0 = (&DAT_020a16d0)[DAT_02093c08];
  DAT_02093c08 = DAT_02093c08 + 1;
  iVar7 = FUN_0203b3e4();
  uVar5 = FUN_0215e2d4(*(undefined4 *)(iVar7 + 0x88),0x800000,*(undefined1 *)(iVar4 + 0x216d6c8),
                       0x80,0,0x1d);
  puVar3[0x9a] = uVar5;
  iVar7 = FUN_0203b3e4();
  uVar5 = FUN_0215e2d4(*(undefined4 *)(iVar7 + 0x88),0x800000,*(undefined1 *)(iVar4 + 0x216d6c9),
                       0x80,0x60,0x1f);
  puVar3[0x9b] = uVar5;
  (**(code **)(**(int **)(puVar3[0x9a] + 4) + 0xd8))(*(int **)(puVar3[0x9a] + 4),1);
  (**(code **)(**(int **)(puVar3[0x9b] + 4) + 0xd8))(*(int **)(puVar3[0x9b] + 4),1);
  FUN_021500cc(puVar3[0x9b],puVar3[9]);
  iVar4 = FUN_0203b3e4();
  uVar5 = FUN_0215e2d4(*(undefined4 *)(iVar4 + 0x88),0x800000,10,0,0,0x1e);
  puVar3[0x9c] = uVar5;
  (**(code **)(**(int **)(puVar3[0x9c] + 4) + 0xd8))(*(int **)(puVar3[0x9c] + 4),1);
  FUN_021500cc(puVar3[0x9c],puVar3[10]);
  iVar4 = FUN_0203b3e4();
  uVar5 = FUN_0215e2d4(*(undefined4 *)(iVar4 + 0x88),0x800000,0xb,0xf2,0x52,0x1e);
  puVar3[0x9d] = uVar5;
  iVar4 = FUN_0203b3e4();
  uVar5 = FUN_0215e2d4(*(undefined4 *)(iVar4 + 0x88),0x800000,0xc,0xf2,0xb2,0x1e);
  puVar3[0x9e] = uVar5;
  iVar4 = 0;
  do {
    iVar7 = FUN_0203b3e4();
    iVar12 = iVar4 * 4;
    uVar5 = FUN_0215e2d4(*(undefined4 *)(iVar7 + 0x88),0x800000,*(undefined2 *)(puVar11 + iVar12),
                         puVar11[iVar12 + 2],puVar11[iVar12 + 3],0x5f);
    puVar3[iVar4 + 0x9f] = uVar5;
    (**(code **)(**(int **)(puVar3[iVar4 + 0x9f] + 4) + 0xd8))
              (*(int **)(puVar3[iVar4 + 0x9f] + 4),1);
    FUN_021500cc(puVar3[iVar4 + 0x9f],puVar3[10]);
    if (puVar3[1] == 4) {
      adStack_60[3] = 0x48000;
      FUN_02150070(puVar3[iVar4 + 0x9f],adStack_60 + 3);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 2);
  iVar4 = FUN_0203b424(2);
  iVar4 = FUN_0215e100(*(undefined4 *)(iVar4 + 0x88),1,4,0x4000,3,0x40,0x20,
                       s_input_input_bg0_dig_021710a0,s_input_input_bg0_atm_021710b4,0);
  puVar3[6] = iVar4;
  (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),1);
  iVar4 = FUN_0203b424(3);
  iVar4 = FUN_0215e100(*(undefined4 *)(iVar4 + 0x88),1,4,0x4000,3,0x20,0x20,
                       s_input_input_bg1_dig_021710c8,s_input_input_bg1_atm_021710dc,0);
  puVar3[7] = iVar4;
  (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),0);
  iVar4 = FUN_0203b424(1);
  iVar4 = FUN_0215e100(*(undefined4 *)(iVar4 + 0x88),1,4,0x8000,2,0x40,0x40,
                       s_input_input_font_dig_021710f0,s_input_input_font_atm_02171108,0);
  puVar3[8] = iVar4;
  (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),1);
  if (puVar3[1] == 3) {
    FUN_0215ced4(adStack_60 + 4,puVar3[7]);
    FUN_0215b71c(adStack_60[4]);
    iVar4 = FUN_0215b6f4();
    FUN_02051890(*(int *)(*(int *)(iVar4 + 4) + 0x10) + 0x162,puVar3 + 0xb,0x1e);
    FUN_0215ced4(&uStack_4c,puVar3[7]);
    FUN_0215b71c(uStack_4c);
    iVar4 = FUN_0215b6f4();
    FUN_02029c68(*(undefined4 *)(iVar4 + 4),puVar3 + 0xb,0xa1,0xf);
  }
  else {
    FUN_0215ced4(&uStack_48,puVar3[8]);
    FUN_0215b71c(uStack_48);
    iVar4 = FUN_0215b6f4();
    FUN_02051890(*(int *)(*(int *)(iVar4 + 4) + 0x10) + 0xc2,puVar3 + 0xb,0x1e);
    FUN_0215ced4(&uStack_44,puVar3[8]);
    FUN_0215b71c(uStack_44);
    iVar4 = FUN_0215b6f4();
    FUN_02029c68(*(undefined4 *)(iVar4 + 4),puVar3 + 0xb,0x71,0xf);
  }
  piVar8 = (int *)FUN_02160ae0(FUN_02160b50 + 1,FUN_02160c58 + 1,0);
  func_0x021b3b7c(1,0,piVar8,0);
  (**(code **)(*piVar8 + 8))();
  piVar8 = (int *)FUN_02160ae0(FUN_02160ba8 + 1,FUN_02160c58 + 1,0);
  func_0x021b3b7c(2,0,piVar8,0);
  (**(code **)(*piVar8 + 8))();
  piVar8 = (int *)FUN_02160ae0(FUN_02160c00 + 1,FUN_02160cbc + 1,0);
  func_0x021b3b7c(3,0,piVar8,0);
  iVar4 = (**(code **)(*(int *)piVar8[1] + 0xb0))((int *)piVar8[1],0x31305053);
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_021504fc();
  }
  FUN_0215b71c(*(int *)(*(int *)(iVar4 + 4) + 100) + 0x14);
  uVar5 = FUN_0215b6f4();
  uVar5 = CommonPaletteAnime::CommonPaletteAnime_Create(uVar5,0x41,1,5,0x80);
  puVar3[0xaa] = uVar5;
  iVar4 = puVar3[0xaa];
  *(undefined2 *)(iVar4 + 0x18) = 0x870;
  *(undefined2 *)(iVar4 + 0x16) = 0x8df;
  *(undefined1 *)(iVar4 + 0x1a) = 0x14;
  *(undefined1 *)(iVar4 + 0x1c) = 3;
  *(undefined1 *)(iVar4 + 0x1b) = 1;
  FUN_02028330(*(undefined4 *)(*(int *)puVar3[0xaa] + 4));
  (**(code **)(*piVar8 + 8))();
  _DAT_021d5154 = 1;
  iVar4 = ALWidgetBaseImp::Create(puVar3,0xe0,0);
  puVar3[0x17] = iVar4;
  FUN_021500cc(puVar3[6],iVar4);
  FUN_021500cc(puVar3[7],puVar3[0x17]);
  FUN_021500cc(puVar3[8],puVar3[0x17]);
  if (puVar3[1] == 3) {
    iStack_c4 = 3;
  }
  else {
    iStack_c4 = 0;
  }
  iVar7 = iStack_c4;
  piStack_9c = (int *)(&DAT_02170bc8 + iStack_c4 * 0x24);
  for (iVar12 = iStack_c4; iVar12 < 0xd; iVar12 = iVar12 + 1) {
    if ((puVar3[1] != 3) || (iVar12 != 7)) {
      if (iVar12 < 7) {
        uStack_c8 = 0x9f;
      }
      else {
        uStack_c8 = 0x7f;
      }
      iVar9 = FUN_0203b3f4();
      iVar9 = FUN_0215e2d4(*(undefined4 *)(iVar9 + 0x88),*piStack_9c,piStack_9c[1] - *piStack_9c,0,0
                           ,uStack_c8);
      if (iVar9 != 0) {
        (**(code **)(**(int **)(iVar9 + 4) + 0xd8))(*(int **)(iVar9 + 4),1);
      }
      iVar9 = FUN_0215e9e4(iVar4,piStack_9c,iVar9,uStack_c8,0);
      puVar3[iVar12 + 0x18] = iVar9;
      *(int *)(*(int *)(iVar9 + 4) + 0x124) = iVar12;
      (**(code **)(**(int **)(puVar3[iVar12 + 0x18] + 4) + 0x24))
                (*(int **)(puVar3[iVar12 + 0x18] + 4),puVar3);
      *(code **)(*(int *)(puVar3[iVar12 + 0x18] + 4) + 0xec) = FUN_02160cec + 1;
      func_0x021b7744(*(undefined4 *)(puVar3[iVar12 + 0x18] + 4),1);
      *(undefined1 *)(*(int *)(puVar3[iVar12 + 0x18] + 4) + 0xb1) = 1;
    }
    piStack_9c = piStack_9c + 9;
  }
  for (; iStack_c4 < 6; iStack_c4 = iStack_c4 + 1) {
    (**(code **)(**(int **)(puVar3[iStack_c4 + 0x19] + 4) + 0x160))
              (*(int **)(puVar3[iStack_c4 + 0x19] + 4),8,
               *(undefined4 *)(puVar3[iStack_c4 + 0x18] + 4));
    (**(code **)(**(int **)(puVar3[iStack_c4 + 0x18] + 4) + 0x160))
              (*(int **)(puVar3[iStack_c4 + 0x18] + 4),4,
               *(undefined4 *)(puVar3[iStack_c4 + 0x19] + 4));
  }
  (**(code **)(**(int **)(puVar3[iVar7 + 0x18] + 4) + 0x160))
            (*(int **)(puVar3[iVar7 + 0x18] + 4),8,*(undefined4 *)(puVar3[0x1e] + 4));
  (**(code **)(**(int **)(puVar3[0x1e] + 4) + 0x160))
            (*(int **)(puVar3[0x1e] + 4),4,*(undefined4 *)(puVar3[iVar7 + 0x18] + 4));
  *(undefined1 *)(*(int *)(puVar3[0x24] + 4) + 0xaa) = 1;
  *(undefined1 *)(*(int *)(puVar3[0x24] + 4) + 0xab) = 0;
  func_0x021b6214(*(undefined4 *)(puVar3[iVar7 + 0x18] + 4));
  FUN_02023940(*(undefined4 *)(iVar4 + 4));
  piVar8 = *(int **)(iVar4 + 4);
  uVar5 = FUN_020326b0(s_Position_02171120);
  uVar5 = (**(code **)(*piVar8 + 0x40))(piVar8,s_Position_02171120,&uStack_3c,uVar5);
  FUN_0202c4a4(adStack_2c + 3,uVar5,uStack_3c);
  adStack_2c[1] = 0;
  adStack_2c[2] = 0;
  FUN_0214ce68(iVar4,adStack_2c + 2,adStack_2c + 1);
  FUN_02023c60(*(undefined4 *)(iVar4 + 4),adStack_2c[3],0,uStack_1c);
  piVar8 = *(int **)(*(int *)(iVar4 + 4) + 0x68);
  (**(code **)(*piVar8 + 0xac))(piVar8,0);
  FUN_02023c70(*(undefined4 *)(iVar4 + 4),0x803000);
  FUN_020239a0(*(undefined4 *)(iVar4 + 4));
  uStack_30 = 0;
  adStack_2c[0] = 0xfff00000;
  FUN_0214ce68(iVar4,adStack_2c,&uStack_30);
  FUN_02023c60(*(undefined4 *)(iVar4 + 4),adStack_2c[3],0,uStack_1c);
  uStack_38 = 0;
  uStack_34 = 0;
  FUN_0214ce68(iVar4,&uStack_34,&uStack_38);
  FUN_02023c60(*(undefined4 *)(iVar4 + 4),adStack_2c[3],8,uStack_1c);
  piVar8 = *(int **)(*(int *)(iVar4 + 4) + 0x68);
  (**(code **)(*piVar8 + 0xac))(piVar8,0);
  FUN_02023c80(*(undefined4 *)(iVar4 + 4),adStack_2c[3],0x494c,uStack_1c);
  FUN_02023c70(*(undefined4 *)(iVar4 + 4),0x803001);
  func_0x021b6760(*(undefined4 *)(iVar4 + 4),0x10,0x2160d2d);
  func_0x021b4034(*(undefined4 *)(iVar4 + 4),0x803001);
  func_0x021b3f78(*(undefined4 *)(iVar4 + 4),0x803000);
  func_0x021b65e0(*(undefined4 *)(iVar4 + 4));
  func_0x021b6214(*(undefined4 *)(iVar4 + 4),1);
  (**(code **)(**(int **)(iVar4 + 4) + 0x148))(*(int **)(iVar4 + 4),0x10);
  _DAT_021d5154 = 3;
  uVar5 = ALWidgetBaseImp::Create(puVar3,0xe0,0,1);
  puVar3[0x25] = uVar5;
  FUN_02051890(0x2170a10,puVar3 + 0xa1,0x24);
  iStack_98 = 0;
  iStack_a8 = 0;
  do {
    iStack_94 = 0;
    do {
      puVar3[0xa3] = iStack_a8 + 0x801000U;
      puVar3[0xa2] = iStack_a8 + 0x801000U;
      *(short *)(puVar3 + 0xa5) = (short)iStack_94 * 0x18 + 0x10;
      *(short *)((int)puVar3 + 0x296) = (short)((uint)((iStack_98 * 0x10 + 0x30) * 0x10000) >> 0x10)
      ;
      if (4 < iStack_94) {
        *(short *)(puVar3 + 0xa5) = *(short *)(puVar3 + 0xa5) + 7;
      }
      uVar10 = FUN_0215e9e4(uVar5,puVar3 + 0xa1,0,0x5f,0);
      puVar3[iStack_98 * 10 + iStack_94 + 0x26] = uVar10;
      *(int *)(*(int *)(puVar3[iStack_98 * 10 + iStack_94 + 0x26] + 4) + 0x124) = iStack_a8;
      iStack_a8 = iStack_a8 + 1;
      (**(code **)(**(int **)(puVar3[iStack_98 * 10 + iStack_94 + 0x26] + 4) + 0x24))
                (*(int **)(puVar3[iStack_98 * 10 + iStack_94 + 0x26] + 4),puVar3);
      *(undefined1 *)(*(int *)(puVar3[iStack_98 * 10 + iStack_94 + 0x26] + 4) + 0xaa) = 1;
      *(dword *)(*(int *)(puVar3[iStack_98 * 10 + iStack_94 + 0x26] + 4) + 0xec) = 0x2160fd9;
      *(dword *)(*(int *)(puVar3[iStack_98 * 10 + iStack_94 + 0x26] + 4) + 0xe4) = 0x2161009;
      iStack_94 = iStack_94 + 1;
    } while (iStack_94 < 10);
    iStack_98 = iStack_98 + 1;
  } while (iStack_98 < 8);
  iStack_68 = 0;
  do {
    iStack_b8 = 0;
    do {
      (**(code **)(**(int **)(puVar3[iStack_68 * 10 + iStack_b8 + 0x27] + 4) + 0x160))
                (*(int **)(puVar3[iStack_68 * 10 + iStack_b8 + 0x27] + 4),8,
                 *(undefined4 *)(puVar3[iStack_68 * 10 + iStack_b8 + 0x26] + 4));
      (**(code **)(**(int **)(puVar3[iStack_68 * 10 + iStack_b8 + 0x26] + 4) + 0x160))
                (*(int **)(puVar3[iStack_68 * 10 + iStack_b8 + 0x26] + 4),4,
                 *(undefined4 *)(puVar3[iStack_68 * 10 + iStack_b8 + 0x27] + 4));
      iStack_b8 = iStack_b8 + 1;
    } while (iStack_b8 < 9);
    iStack_68 = iStack_68 + 1;
  } while (iStack_68 < 8);
  iStack_64 = 0;
  do {
    iStack_b4 = 0;
    do {
      (**(code **)(**(int **)(puVar3[iStack_64 * 10 + iStack_b4 + 0x30] + 4) + 0x160))
                (*(int **)(puVar3[iStack_64 * 10 + iStack_b4 + 0x30] + 4),1,
                 *(undefined4 *)(puVar3[iStack_64 * 10 + iStack_b4 + 0x26] + 4));
      (**(code **)(**(int **)(puVar3[iStack_64 * 10 + iStack_b4 + 0x26] + 4) + 0x160))
                (*(int **)(puVar3[iStack_64 * 10 + iStack_b4 + 0x26] + 4),2,
                 *(undefined4 *)(puVar3[iStack_64 * 10 + iStack_b4 + 0x30] + 4));
      iStack_b4 = iStack_b4 + 1;
    } while (iStack_b4 < 10);
    iStack_64 = iStack_64 + 1;
  } while (iStack_64 < 7);
  func_0x021b6214(*(undefined4 *)(puVar3[0x26] + 4),1);
  func_0x021b6214(*(undefined4 *)(puVar3[0x25] + 4),1);
  puVar3[0x16] = puVar3[0x25];
  *(undefined1 *)((int)puVar3 + 0x3e1) = 1;
  (**(code **)(*piVar6 + 0xc))();
  switch(puVar3[1]) {
  case 0:
    FUN_02070d14(0);
    FUN_02078aa0();
    break;
  case 1:
    iVar4 = FUN_02071f10(*(undefined1 *)(iRam02160088 + 4));
    FUN_02051890(iVar4 + 0x40,(int)puVar3 + iRam0216008c,0x1a);
    uVar2 = FUN_02074294(iVar4 + 0x40);
    iVar4 = iRam02160090;
    *(undefined2 *)((int)puVar3 + iRam02160090) = uVar2;
    *(undefined2 *)((int)puVar3 + iVar4 + 2) = *(undefined2 *)((int)puVar3 + iVar4);
    break;
  case 2:
    iVar4 = FUN_02070cdc(0);
    FUN_02051890(iVar4 + 0x14,(int)puVar3 + iRam0216008c,0x20);
    uVar2 = FUN_02074294(iVar4 + 0x14);
    iVar4 = iRam02160090;
    *(undefined2 *)((int)puVar3 + iRam02160090) = uVar2;
    *(undefined2 *)((int)puVar3 + iVar4 + 2) = *(undefined2 *)((int)puVar3 + iVar4);
    break;
  case 3:
    FUN_021607a4(puVar3,2,0);
  }
  FUN_02073ebc(2,1);
  return puVar3[4];
}

