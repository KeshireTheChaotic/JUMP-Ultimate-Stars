
/* JUS-GAME VsCall::VsCall_Add [source-string] __FILE__="VsCall.cpp" __FUNCTION__="VsCall_Add"
   lines=[63] passed to 1 source-location call(s) */

undefined4 VsCall::VsCall_Add(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54 [4];
  undefined4 local_44;
  undefined4 local_40;
  int local_3c [3];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  puVar1 = (undefined4 *)thunk_FUN_0201a228(0x144,s_VsCall_cpp_0215eb44,s_VsCall_Add_0215eb38,0x3f);
  FUN_02041f7c(DAT_020a0f64,1);
  FUN_020517fc(puVar1,0,0x144);
  puVar1[0x2b] = param_1;
  puVar1[0x2f] = DAT_020afe90;
  uVar2 = ComicDeck::ComicDeckCreate(1,1);
  *puVar1 = uVar2;
  uVar2 = FUN_02076908();
  puVar1[1] = uVar2;
  for (iVar6 = 0; iVar6 < (int)puVar1[0x2f]; iVar6 = iVar6 + 1) {
    uVar2 = FUN_02070ca4(iVar6);
    FUN_020769cc(puVar1[1],uVar2);
    uVar2 = FUN_020789c0(puVar1[1]);
    puVar1[iVar6 + 0x30] = uVar2;
  }
  iVar6 = 0;
  if (puVar1[0x2b] == 1) {
    *(undefined1 *)(puVar1 + 0x50) = 0;
    for (; iVar6 < (int)puVar1[0x2f]; iVar6 = iVar6 + 1) {
      puVar1[iVar6 + 0x34] = (int)(char)(&DAT_020aff10)[iVar6];
    }
  }
  else {
    if (DAT_020afebd != '\0') {
      *(undefined1 *)(puVar1 + 0x50) = 1;
    }
    for (; iVar6 < (int)puVar1[0x2f]; iVar6 = iVar6 + 1) {
      puVar1[iVar6 + 0x34] = (int)(char)(&DAT_020afebe)[iVar6];
    }
  }
  iVar6 = FUN_02026f94();
  puVar1[6] = iVar6;
  local_28 = 0x80000;
  (**(code **)(**(int **)(iVar6 + 4) + 0xa0))(*(int **)(iVar6 + 4),&local_28);
  FUN_02028384(*(undefined4 *)(puVar1[6] + 4),FUN_0215c5a0);
  (**(code **)(**(int **)(puVar1[6] + 4) + 0x24))(*(int **)(puVar1[6] + 4),puVar1);
  iVar6 = FUN_020310f4();
  puVar1[5] = iVar6;
  DAT_02093c04 = DAT_02093c04 + -1;
  *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4) = DAT_020a0e80;
  FUN_020314a0(*(undefined4 *)(iVar6 + 4));
  uVar2 = FUN_02028920(0);
  puVar1[7] = uVar2;
  uVar2 = PopularNameData::PopularNameData_Create();
  puVar1[4] = uVar2;
  piVar3 = (int *)FUN_020101f4(s_vscall_vscall_aar_0215eb50,0);
  piVar4 = (int *)FUN_020101f4(s_Common_chr_chr_aar_0215eb64,0);
  DAT_02093c08 = DAT_02093c08 + -1;
  (&DAT_020a16d0)[DAT_02093c08] = DAT_020a0dd0;
  iVar6 = FUN_0203b414(1);
  uVar2 = FUN_0215c9e8(*(undefined4 *)(iVar6 + 0x88),1,4,0x4000,3,s_vscall_vs00_dig_0215eb78,
                       s_vscall_vs00_a_atm_0215eb88);
  puVar1[8] = uVar2;
  iVar6 = FUN_0203b424(1);
  uVar2 = FUN_0215c9e8(*(undefined4 *)(iVar6 + 0x88),1,4,0x4000,3,s_vscall_vs00_dig_0215eb78,
                       s_vscall_vs00_b_atm_0215eb9c);
  puVar1[9] = uVar2;
  (**(code **)(**(int **)(puVar1[8] + 4) + 0xd8))(*(int **)(puVar1[8] + 4),1);
  (**(code **)(**(int **)(puVar1[9] + 4) + 0xd8))(*(int **)(puVar1[9] + 4),1);
  if (puVar1[0x2b] == 2) {
    for (iVar6 = 0; iVar6 < (int)puVar1[0x2f]; iVar6 = iVar6 + 1) {
      FUN_0215c8d8(&local_7c,puVar1[iVar6 / 2 + 8]);
      FUN_0215c8b4(local_7c);
      iVar7 = FUN_0215c88c();
      FUN_02029c68(*(undefined4 *)(iVar7 + 4),&DAT_0215d7e6,(iVar6 + 0xc) * 0x10 + 4,0xc);
    }
  }
  for (iVar6 = puVar1[0x2f]; iVar6 < 4; iVar6 = iVar6 + 1) {
    FUN_0215c8d8(&local_78,puVar1[iVar6 / 2 + 8]);
    FUN_0215c8b4(local_78);
    iVar7 = FUN_0215c88c();
    FUN_02029c68(*(undefined4 *)(iVar7 + 4),&DAT_0215d7fe,(iVar6 + 0xc) * 0x10 + 4,0xc);
  }
  iVar6 = FUN_0203b414(2);
  uVar2 = FUN_0215c934(*(undefined4 *)(iVar6 + 0x88),puVar1[0x30]);
  puVar1[10] = uVar2;
  iVar6 = FUN_0203b414(3);
  uVar2 = FUN_0215c934(*(undefined4 *)(iVar6 + 0x88),puVar1[0x31]);
  puVar1[0xb] = uVar2;
  iVar6 = FUN_0203b424(2);
  uVar2 = FUN_0215c934(*(undefined4 *)(iVar6 + 0x88),puVar1[0x32]);
  puVar1[0xc] = uVar2;
  iVar6 = FUN_0203b424(3);
  uVar2 = FUN_0215c934(*(undefined4 *)(iVar6 + 0x88),puVar1[0x33]);
  puVar1[0xd] = uVar2;
  local_70 = 0;
  local_74 = 0x88000;
  FUN_0214e990(puVar1[0xb],&local_74,&local_70);
  local_68 = 0xfffd4000;
  local_6c = 0;
  FUN_0214e990(puVar1[0xc],&local_6c,&local_68);
  local_60 = 0xfffd4000;
  local_64 = 0x88000;
  FUN_0214e990(puVar1[0xd],&local_64,&local_60);
  iVar6 = FUN_0203b3e4();
  DAT_020a0dd0 = *(undefined4 *)(*(int *)(iVar6 + 0x88) + 4);
  uVar2 = FUN_020101f4(FUN_0215ebb0,0);
  puVar1[0xf] = uVar2;
  iVar6 = 0;
  do {
    uVar2 = FUN_0215cb64(puVar1,0x800000,(&DAT_0215d860)[iVar6 * 2],
                         (int)(short)(&DAT_0215d864)[iVar6 * 4],
                         (int)(short)(&DAT_0215d866)[iVar6 * 4]);
    iVar7 = iVar6 + 1;
    puVar1[iVar6 + 0x11] = uVar2;
    iVar6 = iVar7;
  } while (iVar7 < 9);
  iVar6 = FUN_0203b3f4();
  DAT_020a0dd0 = *(undefined4 *)(*(int *)(iVar6 + 0x88) + 4);
  uVar2 = FUN_020101f4(FUN_0215ebc4,0);
  puVar1[0x10] = uVar2;
  iVar6 = 0;
  do {
    uVar2 = FUN_0215cb64(puVar1,0x810000,(&DAT_0215d818)[iVar6 * 2],
                         (int)(short)(&DAT_0215d81c)[iVar6 * 4],
                         (int)(short)(&DAT_0215d81e)[iVar6 * 4]);
    iVar7 = iVar6 + 1;
    puVar1[iVar6 + 0x1a] = uVar2;
    iVar6 = iVar7;
  } while (iVar7 < 9);
  iVar6 = 0;
  do {
    FUN_0214fb44(puVar1[iVar6 + 0x13],puVar1[iVar6 / 2 + 0x17]);
    FUN_0214fb44(puVar1[iVar6 + 0x1c],puVar1[iVar6 / 2 + 0x20]);
    (**(code **)(**(int **)(puVar1[iVar6 + 0x13] + 4) + 0xd8))
              (*(int **)(puVar1[iVar6 + 0x13] + 4),0);
    (**(code **)(**(int **)(puVar1[iVar6 + 0x1c] + 4) + 0xd8))
              (*(int **)(puVar1[iVar6 + 0x1c] + 4),0);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 4);
  if (puVar1[0x2b] != 1) {
    if (*(char *)(puVar1 + 0x50) != '\0') {
      FUN_02023894(*(undefined4 *)(puVar1[0x17] + 4),puVar1[0x34] + 0x800004,0);
      FUN_02023894(*(undefined4 *)(puVar1[0x18] + 4),puVar1[0x35] + 0x800008,0);
      FUN_02023894(*(undefined4 *)(puVar1[0x20] + 4),puVar1[0x36] + 0x810004,0);
      FUN_02023894(*(undefined4 *)(puVar1[0x21] + 4),puVar1[0x37] + 0x810008,0);
    }
    goto LAB_0215beb0;
  }
  FUN_02023894(*(undefined4 *)(puVar1[0x17] + 4),0x80000b,0);
  FUN_02023894(*(undefined4 *)(puVar1[0x18] + 4),0x80000c,0);
  FUN_02023894(*(undefined4 *)(puVar1[0x20] + 4),0x81000b,0);
  FUN_02023894(*(undefined4 *)(puVar1[0x21] + 4),0x81000c,0);
  iVar6 = puVar1[0x2f];
  if (iVar6 == 2) {
LAB_0215bdf8:
    FUN_0215cc18(puVar1 + 0x15,0x800000,puVar1[0x35],0xffffffc8,0x35);
  }
  else {
    if (iVar6 == 3) {
LAB_0215bddc:
      FUN_0215cc18(puVar1 + 0x1c,0x800000,puVar1[0x36],0x50,0xffffffcd);
      goto LAB_0215bdf8;
    }
    if (iVar6 == 4) {
      FUN_0215cc18(puVar1 + 0x1e,0x810000,puVar1[0x37],0xffffffc8,0xffffffcd);
      goto LAB_0215bddc;
    }
  }
  FUN_0215cc18(puVar1 + 0x13,0x800000,puVar1[0x34],0x50,0x35);
LAB_0215beb0:
  FUN_02028384(*(undefined4 *)(puVar1[0x12] + 4),FUN_0215cd5c);
  FUN_02028384(*(undefined4 *)(puVar1[0x1b] + 4),FUN_0215cd5c);
  if (puVar1[0x2b] == 2) {
    FUN_0215c8d8(&local_5c,puVar1[0x11]);
    FUN_0215c8b4(local_5c);
    iVar6 = FUN_0215c88c();
    FUN_02029c68(*(undefined4 *)(iVar6 + 4),&DAT_0215d7c8,0x11,0xf);
    FUN_0215c8d8(&local_58,puVar1[0x1a]);
    FUN_0215c8b4(local_58);
    iVar6 = FUN_0215c88c();
    FUN_02029c68(*(undefined4 *)(iVar6 + 4),&DAT_0215d7c8,0x11,0xf);
  }
  iVar7 = FUN_02075780(puVar1[4]);
  iVar6 = 0;
  do {
    uVar2 = FUN_02070cdc(iVar6);
    FUN_02051890(uVar2,(int)puVar1 + iVar6 * 0x16 + 0xe0,0x14);
    iVar5 = FUN_02070cdc(iVar6);
    iVar8 = iVar6 + 1;
    *(ushort *)((int)puVar1 + iVar6 * 2 + 0x138) = (ushort)*(byte *)(iVar5 + 0x34);
    if (iVar7 + -1 < (int)(uint)*(ushort *)((int)puVar1 + iVar6 * 2 + 0x138)) {
      *(short *)((int)puVar1 + iVar6 * 2 + 0x138) = (short)(iVar7 + -1);
    }
    iVar6 = iVar8;
  } while (iVar8 < 4);
  (**(code **)(*piVar3 + 0xc))();
  (**(code **)(*piVar4 + 0xc))();
  iVar6 = FUN_0203b404();
  DAT_020a0dd0 = *(undefined4 *)(*(int *)(iVar6 + 0x88) + 4);
  iVar6 = func_0x021caa0c(s_font_jskfont_aft_0215ebd8,0,0);
  iVar7 = func_0x021caa0c(FUN_0215ebec,0,0);
  iVar5 = 0;
  do {
    func_0x021c5fb4(*(undefined4 *)(iVar7 + 4));
    iVar8 = FUN_0214d47c();
    puVar1[iVar5 * 2 + 0x23] = iVar8;
    piVar3 = *(int **)(*(int *)(iVar8 + 4) + 100);
    (**(code **)(*piVar3 + 0xa4))(piVar3,1);
    piVar3 = *(int **)(*(int *)(puVar1[iVar5 * 2 + 0x23] + 4) + 100);
    (**(code **)(*piVar3 + 0xa8))(piVar3,0);
    piVar3 = *(int **)(*(int *)(puVar1[iVar5 * 2 + 0x23] + 4) + 100);
    (**(code **)(*piVar3 + 0x6c))(piVar3,(int)puVar1 + iVar5 * 0x16 + 0xe0,0xffffffff);
    local_54[1] = 0xa000;
    local_54[0] = iVar5 * 0x88000;
    FUN_0214e990(puVar1[iVar5 * 2 + 0x23],local_54,local_54 + 1);
    local_54[2] = 0x20000;
    FUN_0214d52c(puVar1[iVar5 * 2 + 0x23],local_54 + 2);
    (**(code **)(**(int **)(puVar1[iVar5 * 2 + 0x23] + 4) + 0xd8))
              (*(int **)(puVar1[iVar5 * 2 + 0x23] + 4),0);
    func_0x021c5fb4(*(undefined4 *)(iVar6 + 4));
    iVar8 = FUN_0214d47c();
    puVar1[iVar5 * 2 + 0x24] = iVar8;
    piVar3 = *(int **)(*(int *)(iVar8 + 4) + 100);
    (**(code **)(*piVar3 + 0xa4))(piVar3,1);
    piVar3 = *(int **)(*(int *)(puVar1[iVar5 * 2 + 0x24] + 4) + 100);
    (**(code **)(*piVar3 + 0xa8))(piVar3,0);
    uVar2 = FUN_02075788(puVar1[4],*(undefined2 *)((int)puVar1 + iVar5 * 2 + 0x138));
    piVar3 = *(int **)(*(int *)(puVar1[iVar5 * 2 + 0x24] + 4) + 100);
    (**(code **)(*piVar3 + 0x68))(piVar3,uVar2);
    local_44 = 0x1a000;
    local_54[3] = iVar5 * 0x88000;
    FUN_0214e990(puVar1[iVar5 * 2 + 0x24],local_54 + 3,&local_44);
    local_40 = 0x20000;
    FUN_0214d52c(puVar1[iVar5 * 2 + 0x24],&local_40);
    (**(code **)(**(int **)(puVar1[iVar5 * 2 + 0x24] + 4) + 0xd8))
              (*(int **)(puVar1[iVar5 * 2 + 0x24] + 4),0);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 2);
  (**(code **)(**(int **)(iVar6 + 4) + 0xc))();
  (**(code **)(**(int **)(iVar7 + 4) + 0xc))();
  iVar6 = FUN_0203b424(0);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar6 + 0x88) + 4),1);
  iVar6 = FUN_0203b424(0);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar6 + 0x88) + 4),4);
  iVar6 = FUN_0203b424(0);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar6 + 0x88) + 4),0x20,0x20);
  iVar6 = FUN_0203b424(0);
  piVar3 = *(int **)(*(int *)(iVar6 + 0x88) + 4);
  (**(code **)(*piVar3 + 0x90))(piVar3,0x8000);
  iVar6 = FUN_0203b424(0);
  local_2c = 0;
  piVar3 = *(int **)(*(int *)(iVar6 + 0x88) + 4);
  (**(code **)(*piVar3 + 0x10))(piVar3,&local_2c);
  iVar6 = FUN_0203b424(0);
  *(undefined1 *)(*(int *)(*(int *)(iVar6 + 0x88) + 4) + 0x956) = 1;
  iVar6 = FUN_0203b424(0);
  DAT_020a0dd0 = *(undefined4 *)(*(int *)(iVar6 + 0x88) + 4);
  iVar6 = 0;
  do {
    iVar7 = func_0x021ca3a4(0x78,0x10,FUN_0215ebec,0,0);
    puVar1[iVar6 * 2 + 0x27] = iVar7;
    piVar3 = *(int **)(*(int *)(iVar7 + 4) + 100);
    (**(code **)(*piVar3 + 0xa4))(piVar3,1);
    piVar3 = *(int **)(*(int *)(puVar1[iVar6 * 2 + 0x27] + 4) + 100);
    (**(code **)(*piVar3 + 0xa8))(piVar3,0);
    piVar3 = *(int **)(*(int *)(puVar1[iVar6 * 2 + 0x27] + 4) + 100);
    (**(code **)(*piVar3 + 0x6c))(piVar3,(int)puVar1 + (iVar6 + 2) * 0x16 + 0xe0,0xffffffff);
    local_3c[1] = 0x98000;
    local_3c[0] = iVar6 * 0x88000;
    FUN_0214e990(puVar1[iVar6 * 2 + 0x27],local_3c,local_3c + 1);
    (**(code **)(**(int **)(puVar1[iVar6 * 2 + 0x27] + 4) + 0xd8))
              (*(int **)(puVar1[iVar6 * 2 + 0x27] + 4),0);
    iVar7 = func_0x021ca3a4(0x78,0x10,s_font_jskfont_aft_0215ebd8,0,0);
    puVar1[iVar6 * 2 + 0x28] = iVar7;
    piVar3 = *(int **)(*(int *)(iVar7 + 4) + 100);
    (**(code **)(*piVar3 + 0xa4))(piVar3,1);
    piVar3 = *(int **)(*(int *)(puVar1[iVar6 * 2 + 0x28] + 4) + 100);
    (**(code **)(*piVar3 + 0xa8))(piVar3,0);
    uVar2 = FUN_02075788(puVar1[4],*(undefined2 *)((int)puVar1 + iVar6 * 2 + 0x13c));
    piVar3 = *(int **)(*(int *)(puVar1[iVar6 * 2 + 0x28] + 4) + 100);
    (**(code **)(*piVar3 + 0x68))(piVar3,uVar2);
    local_30 = 0xa8000;
    local_3c[2] = iVar6 * 0x88000;
    FUN_0214e990(puVar1[iVar6 * 2 + 0x28],local_3c + 2,&local_30);
    (**(code **)(**(int **)(puVar1[iVar6 * 2 + 0x28] + 4) + 0xd8))
              (*(int **)(puVar1[iVar6 * 2 + 0x28] + 4),0);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 2);
  uVar2 = FUN_02157f9c(puVar1[0x19]);
  uVar2 = CommonPaletteAnime::CommonPaletteAnime_Create(uVar2,0x61,2,6,0x80);
  puVar1[2] = uVar2;
  uVar2 = FUN_02157f9c(puVar1[0x22]);
  uVar2 = CommonPaletteAnime::CommonPaletteAnime_Create(uVar2,0x61,2,6,0x80);
  puVar1[3] = uVar2;
  FUN_0215c8f0(puVar1[2],0x7fff,10,1);
  FUN_0215c8f0(puVar1[3],0x7fff,10,1);
  FUN_0215c910(puVar1[2],0);
  FUN_0215c910(puVar1[3],0);
  DAT_020a0dd0 = (&DAT_020a16d0)[DAT_02093c08];
  DAT_02093c08 = DAT_02093c08 + 1;
  FUN_020734e0(0x37);
  FUN_0207361c(0x37,0);
  FUN_02073ebc(2,1);
  return puVar1[5];
}

