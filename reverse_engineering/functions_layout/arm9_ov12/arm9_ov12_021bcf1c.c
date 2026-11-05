
/* JUS-GAME CommonInfo::CommonInfo_Create [source-string] __FILE__="CommonInfo.cpp"
   __FUNCTION__="CommonInfo_Create" lines=[60] passed to 1 source-location call(s) */

int * CommonInfo::CommonInfo_Create(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int unaff_r4;
  int unaff_r6;
  undefined4 local_84;
  undefined4 local_80;
  undefined1 auStack_7c [4];
  undefined4 local_78;
  undefined4 local_74;
  undefined1 auStack_70 [4];
  undefined4 local_6c;
  int local_68 [4];
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
  undefined1 auStack_30 [24];
  int iStack_18;
  
  iStack_18 = param_4;
  piVar1 = (int *)jus_AllocDebug(0xa4,s_CommonInfo_cpp_021d3fcc,s_CommonInfo_Create_021d3fb8,0x3c);
  FUN_020517fc(piVar1,0,0xa4);
  if (param_4 == -1) {
    piVar1[0x14] = (int)DAT_020b0b96;
  }
  else {
    piVar1[0x14] = param_4;
  }
  piVar1[0x15] = param_3;
  piVar1[0x17] = param_2;
  piVar1[0x10] = param_1;
  piVar1[0x11] = -1;
  iVar2 = FUN_02026f94();
  *piVar1 = iVar2;
  local_34 = 0x80000;
  (**(code **)(**(int **)(iVar2 + 4) + 0xa0))(*(int **)(iVar2 + 4),&local_34);
  FUN_02028384(*(undefined4 *)(*piVar1 + 4),0x21bd801);
  (**(code **)(**(int **)(*piVar1 + 4) + 0x24))(*(int **)(*piVar1 + 4),piVar1);
  piVar3 = (int *)FUN_020101f4(s_bin_InfoDeck_aar_021d3fdc,0);
  iVar2 = FUN_021bd4d4(s_bin_infoname_bin_021d3ff0,0,0);
  piVar1[2] = iVar2;
  iVar2 = (**(code **)(**(int **)(iVar2 + 4) + 0x2c))(*(int **)(iVar2 + 4),0);
  piVar1[4] = iVar2;
  (**(code **)(*piVar3 + 0xc))();
  if (piVar1[0x15] == 0) {
    iVar2 = FUN_0203b414(2);
    unaff_r4 = *(int *)(iVar2 + 0x88);
    iVar2 = FUN_0203b414(1);
    unaff_r6 = *(int *)(iVar2 + 0x88);
    iVar2 = FUN_0203b414(0);
    FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar2 + 0x88) + 4),0);
    iVar2 = FUN_0203b414(0);
    local_44 = 0;
    piVar3 = *(int **)(*(int *)(iVar2 + 0x88) + 4);
    (**(code **)(*piVar3 + 0x10))(piVar3,&local_44);
  }
  else if (piVar1[0x15] == 1) {
    iVar2 = FUN_0203b424(2);
    unaff_r4 = *(int *)(iVar2 + 0x88);
    iVar2 = FUN_0203b424(1);
    unaff_r6 = *(int *)(iVar2 + 0x88);
  }
  piVar3 = (int *)FUN_020101f4(s_info_info_aar_021d4004,0);
  FUN_021bbf80();
  FUN_0203d0b4(*(undefined4 *)(unaff_r4 + 4),1);
  FUN_0203d478(*(undefined4 *)(unaff_r4 + 4),4);
  FUN_0203cfbc(*(undefined4 *)(unaff_r4 + 4),0x20,0x20);
  (**(code **)(**(int **)(unaff_r4 + 4) + 0x90))(*(int **)(unaff_r4 + 4),0x8000);
  local_40 = 0x3000;
  (**(code **)(**(int **)(unaff_r4 + 4) + 0x10))(*(int **)(unaff_r4 + 4),&local_40);
  *(undefined1 *)(*(int *)(unaff_r4 + 4) + 0x956) = 0;
  (**(code **)(**(int **)(unaff_r4 + 4) + 0x94))(*(int **)(unaff_r4 + 4),1);
  DAT_020a0dd0 = *(undefined4 *)(unaff_r4 + 4);
  thunk_FUN_0207400c(auStack_30,s_info_bg_dig_021d4014);
  uVar4 = FUN_021bdb10(auStack_30);
  FUN_02036ab8();
  iVar2 = FUN_021acab4();
  piVar1[7] = iVar2;
  (**(code **)(**(int **)(iVar2 + 4) + 0x130))(*(int **)(iVar2 + 4),s_info_bg_atm_021d4020);
  FUN_021bdb3c(piVar1[7],uVar4,0);
  local_80 = 0;
  local_84 = 0;
  FUN_021bb970(piVar1[7],&local_84,&local_80);
  (**(code **)(**(int **)(piVar1[7] + 4) + 0xd8))(*(int **)(piVar1[7] + 4),1);
  iVar2 = piVar1[0x17];
  if (iVar2 != -1) {
    FUN_021bdbc0(auStack_7c,piVar1[7]);
    iVar5 = FUN_021bdb7c(auStack_7c);
    FUN_02029c68(*(undefined4 *)(iVar5 + 4),iVar2 * 0x1e + 0x21d019a,0xd1,0xf);
  }
  FUN_02034d7c(uVar4);
  FUN_0203d0b4(*(undefined4 *)(unaff_r6 + 4),1);
  FUN_0203d478(*(undefined4 *)(unaff_r6 + 4),4);
  FUN_0203cfbc(*(undefined4 *)(unaff_r6 + 4),0x20,0x20);
  (**(code **)(**(int **)(unaff_r6 + 4) + 0x90))(*(int **)(unaff_r6 + 4),0x4000);
  local_3c = 0x2000;
  (**(code **)(**(int **)(unaff_r6 + 4) + 0x10))(*(int **)(unaff_r6 + 4),&local_3c);
  *(undefined1 *)(*(int *)(unaff_r6 + 4) + 0x956) = 0;
  DAT_020a0dd0 = *(undefined4 *)(unaff_r6 + 4);
  thunk_FUN_0207400c(auStack_30,s_info_win_dig_021d402c);
  uVar4 = FUN_021bdb10(auStack_30);
  FUN_02036ab8();
  iVar2 = FUN_021acab4();
  piVar1[6] = iVar2;
  (**(code **)(**(int **)(iVar2 + 4) + 0x130))(*(int **)(iVar2 + 4),s_info_win_atm_021d403c);
  FUN_021bdb3c(piVar1[6],uVar4,0);
  local_74 = 0xfff88000;
  local_78 = 0;
  FUN_021bb970(piVar1[6],&local_78,&local_74);
  (**(code **)(**(int **)(piVar1[6] + 4) + 0xd8))(*(int **)(piVar1[6] + 4),1);
  iVar2 = piVar1[0x17];
  if (iVar2 != -1) {
    FUN_021bdbc0(auStack_70,piVar1[6]);
    iVar5 = FUN_021bdb7c(auStack_70);
    FUN_02029c68(*(undefined4 *)(iVar5 + 4),iVar2 * 0x1e + 0x21d0140,0xe1,0xf);
  }
  FUN_02034d7c(uVar4);
  if (piVar1[0x15] == 0) {
    iVar2 = FUN_0203b404();
    DAT_020a0dd0 = *(undefined4 *)(*(int *)(iVar2 + 0x88) + 4);
    iVar2 = FUN_021caa0c(s_font_jskfont_aft_021d404c,0,0);
    piVar1[3] = iVar2;
    iVar2 = 0;
    do {
      FUN_021c5fb4(*(undefined4 *)(piVar1[3] + 4));
      iVar5 = FUN_021acab4();
      piVar1[iVar2 + 9] = iVar5;
      piVar6 = *(int **)(*(int *)(iVar5 + 4) + 100);
      (**(code **)(*piVar6 + 0xa4))(piVar6,1);
      piVar6 = *(int **)(*(int *)(piVar1[iVar2 + 9] + 4) + 100);
      (**(code **)(*piVar6 + 0xa8))(piVar6,0);
      piVar6 = *(int **)(*(int *)(piVar1[iVar2 + 9] + 4) + 100);
      (**(code **)(*piVar6 + 0x68))(piVar6,&DAT_021d4060);
      local_68[0] = (iVar2 * 0x10 + 0x82) * 0x1000;
      local_6c = 0x14000;
      FUN_021bb970(piVar1[iVar2 + 9],&local_6c,local_68);
      local_68[1] = 0x20000;
      FUN_021bbde0(piVar1[iVar2 + 9],local_68 + 1);
      (**(code **)(**(int **)(piVar1[iVar2 + 9] + 4) + 0xd8))(*(int **)(piVar1[iVar2 + 9] + 4),0);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
  }
  else if (piVar1[0x15] == 1) {
    iVar2 = FUN_0203b424(0);
    FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar2 + 0x88) + 4),1);
    iVar2 = FUN_0203b424(0);
    FUN_0203d478(*(undefined4 *)(*(int *)(iVar2 + 0x88) + 4),4);
    iVar2 = FUN_0203b424(0);
    FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar2 + 0x88) + 4),0x20,0x20);
    iVar2 = FUN_0203b424(0);
    piVar6 = *(int **)(*(int *)(iVar2 + 0x88) + 4);
    (**(code **)(*piVar6 + 0x90))(piVar6,0x4000);
    iVar2 = FUN_0203b424(0);
    local_38 = 0;
    piVar6 = *(int **)(*(int *)(iVar2 + 0x88) + 4);
    (**(code **)(*piVar6 + 0x10))(piVar6,&local_38);
    iVar2 = FUN_0203b424(0);
    *(undefined1 *)(*(int *)(*(int *)(iVar2 + 0x88) + 4) + 0x956) = 1;
    iVar2 = FUN_0203b424(0);
    DAT_020a0dd0 = *(undefined4 *)(*(int *)(iVar2 + 0x88) + 4);
    iVar2 = 0;
    do {
      iVar5 = ALTextDS::Create(0xe0,0x10,s_font_jskfont_aft_021d404c,0,0);
      piVar1[iVar2 + 9] = iVar5;
      piVar6 = *(int **)(*(int *)(iVar5 + 4) + 100);
      (**(code **)(*piVar6 + 0xa4))(piVar6,1);
      piVar6 = *(int **)(*(int *)(piVar1[iVar2 + 9] + 4) + 100);
      (**(code **)(*piVar6 + 0xa8))(piVar6,0);
      piVar6 = *(int **)(*(int *)(piVar1[iVar2 + 9] + 4) + 100);
      (**(code **)(*piVar6 + 0x68))(piVar6,&DAT_021d4060);
      local_68[3] = (iVar2 * 0x10 + 0x80) * 0x1000;
      local_68[2] = 0x10000;
      FUN_021bb970(piVar1[iVar2 + 9],local_68 + 2,local_68 + 3);
      local_58 = 0x20000;
      FUN_021bbde0(piVar1[iVar2 + 9],&local_58);
      (**(code **)(**(int **)(piVar1[iVar2 + 9] + 4) + 0xd8))(*(int **)(piVar1[iVar2 + 9] + 4),0);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
  }
  if (piVar1[0x15] == 0) {
    iVar2 = FUN_0203b3e4();
    DAT_020a0dd0 = *(undefined4 *)(*(int *)(iVar2 + 0x88) + 4);
  }
  else if (piVar1[0x15] == 1) {
    iVar2 = FUN_0203b3f4();
    DAT_020a0dd0 = *(undefined4 *)(*(int *)(iVar2 + 0x88) + 4);
  }
  iVar2 = FUN_020101f4(s_info_icon_aar_021d4064,0);
  piVar1[0xc] = iVar2;
  iVar2 = FUN_020101f4(s_info_mess_aar_021d4074,0);
  piVar1[0xd] = iVar2;
  FUN_020329ec(0x700000);
  iVar2 = FUN_021acab4();
  piVar1[0xe] = iVar2;
  local_54 = 0x20000;
  FUN_021bbde0(piVar1[0xe],&local_54);
  FUN_02023894(*(undefined4 *)(piVar1[0xe] + 4),0x700000,0);
  (**(code **)(**(int **)(*(int *)(piVar1[0xe] + 4) + 0x68) + 0x6c))();
  FUN_020282f4(*(undefined4 *)(piVar1[0xe] + 4));
  (**(code **)(**(int **)(piVar1[0xe] + 4) + 0xd8))(*(int **)(piVar1[0xe] + 4),0);
  FUN_020329ec(0x701000);
  iVar2 = FUN_021acab4();
  piVar1[0xf] = iVar2;
  local_50 = 0x60000;
  FUN_021bbde0(piVar1[0xf],&local_50);
  local_48 = 0xc0000;
  local_4c = 0x80000;
  FUN_021bb970(piVar1[0xf],&local_4c,&local_48);
  FUN_02023894(*(undefined4 *)(piVar1[0xf] + 4),0x701000,0);
  (**(code **)(**(int **)(*(int *)(piVar1[0xf] + 4) + 0x68) + 0x6c))();
  (**(code **)(**(int **)(piVar1[0xf] + 4) + 0xd8))(*(int **)(piVar1[0xf] + 4),1);
  FUN_021bc03c();
  (**(code **)(*piVar3 + 0xc))();
  FUN_021bdbd8(piVar1);
  FUN_021bda94(piVar1);
  return piVar1;
}

