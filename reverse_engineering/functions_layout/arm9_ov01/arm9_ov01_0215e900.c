
/* JUS-GAME DeckSelectPersonal::DeckSelect_PersonalCreate [source-string]
   __FILE__="DeckSelectPersonal.cpp" __FUNCTION__="DeckSelect_PersonalCreate" lines=[54] passed to 1
   source-location call(s) */

int * DeckSelectPersonal::DeckSelect_PersonalCreate(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  char *pcVar9;
  int local_80;
  int local_64;
  int local_54;
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  int local_20 [3];
  
  piVar4 = (int *)thunk_FUN_0201a228(0x68,s_DeckSelectPersonal_cpp_0216cb00,
                                     s_DeckSelect_PersonalCreate_0216cae4,0x36);
  FUN_020517fc(piVar4,0,0x68);
  *piVar4 = param_1;
  piVar4[1] = param_2;
  piVar4[3] = 0;
  iVar5 = FUN_02026f94();
  piVar4[5] = iVar5;
  local_20[2] = 0x80000;
  (**(code **)(**(int **)(iVar5 + 4) + 0xa0))(*(int **)(iVar5 + 4),local_20 + 2);
  FUN_02028384(*(undefined4 *)(piVar4[5] + 4),0x215ee39);
  (**(code **)(**(int **)(piVar4[5] + 4) + 0x24))(*(int **)(piVar4[5] + 4),piVar4);
  iVar5 = LocationData::LocationData_Create();
  piVar4[2] = iVar5;
  iVar5 = PopularNameData::PopularNameData_Create();
  piVar4[4] = iVar5;
  piVar6 = (int *)FUN_020101f4(s_database_database_aar_0216cb18,0);
  if (piVar4[1] == 0) {
    iVar5 = FUN_0203b414(1);
  }
  else {
    iVar5 = FUN_0203b424(1);
  }
  iVar5 = *(int *)(iVar5 + 0x88);
  FUN_0203d0b4(*(undefined4 *)(iVar5 + 4),1);
  FUN_0203d478(*(undefined4 *)(iVar5 + 4),4);
  FUN_0203cfbc(*(undefined4 *)(iVar5 + 4),0x20,0x40);
  (**(code **)(**(int **)(iVar5 + 4) + 0x90))(*(int **)(iVar5 + 4),0x8000);
  local_40 = 0x3000;
  (**(code **)(**(int **)(iVar5 + 4) + 0x10))(*(int **)(iVar5 + 4),&local_40);
  *(undefined1 *)(*(int *)(iVar5 + 4) + 0x956) = 0;
  FUN_0215f0f4();
  DAT_020a0dd0 = *(undefined4 *)(iVar5 + 4);
  piVar7 = (int *)FUN_02035c90(s_database_personal_bg2_dig_0216cb4c);
  if (piVar7[0xe] == 0) {
    (**(code **)(*piVar7 + 0x14))();
  }
  iVar8 = piVar7[0xe];
  FUN_02036ab8();
  iVar5 = FUN_0214d37c();
  (**(code **)(**(int **)(iVar5 + 4) + 0x130))
            (*(int **)(iVar5 + 4),s_database_personal_bg2_atm_0216cb30);
  if (iVar8 != 0) {
    if (iVar8 == 0) {
      piVar7 = *(int **)(*(int *)(iVar5 + 4) + 100);
      (**(code **)(*piVar7 + 0x50))(piVar7,0,0);
    }
    else {
      piVar7 = *(int **)(*(int *)(iVar5 + 4) + 100);
      (**(code **)(*piVar7 + 0x50))(piVar7,*(undefined4 *)(iVar8 + 4),0);
    }
  }
  local_3c = 0;
  local_38 = 0;
  FUN_021511c8(iVar5,&local_38,&local_3c);
  (**(code **)(**(int **)(iVar5 + 4) + 0xd8))(*(int **)(iVar5 + 4),0);
  if (iVar8 != 0) {
    FUN_02034d7c(iVar8);
  }
  FUN_0214f834();
  piVar4[7] = iVar5;
  (**(code **)(**(int **)(iVar5 + 4) + 0xd8))(*(int **)(iVar5 + 4),1);
  if (*piVar4 == 1) {
    FUN_0215f0dc(auStack_50,piVar4[7]);
    iVar5 = FUN_0215f098(auStack_50);
    FUN_02029c68(*(undefined4 *)(iVar5 + 4),&DAT_02169dfc,0xb1,1);
    FUN_0215f0dc(auStack_4c,piVar4[7]);
    iVar5 = FUN_0215f098(auStack_4c);
    FUN_02029c68(*(undefined4 *)(iVar5 + 4),&DAT_02169dfe,0xc2,10);
  }
  else if (*piVar4 == 2) {
    FUN_0215f0dc(auStack_48,piVar4[7]);
    iVar5 = FUN_0215f098(auStack_48);
    FUN_02029c68(*(undefined4 *)(iVar5 + 4),&DAT_02169e12,0xb1,1);
    FUN_0215f0dc(auStack_44,piVar4[7]);
    iVar5 = FUN_0215f098(auStack_44);
    FUN_02029c68(*(undefined4 *)(iVar5 + 4),&DAT_02169e14,0xc2,10);
  }
  iVar5 = FUN_020101f4(DAT_0216cac4,0);
  piVar4[6] = iVar5;
  if (piVar4[1] == 0) {
    iVar5 = FUN_0203b3e4();
    iVar5 = FUN_0215f178(*(undefined4 *)(iVar5 + 0x88),0x800000,*piVar4,0x80,0,0x1f);
  }
  else {
    iVar5 = FUN_0203b3f4();
    iVar5 = FUN_0215f178(*(undefined4 *)(iVar5 + 0x88),0x800000,*piVar4,0x80,0,0x1f);
  }
  piVar4[0xe] = iVar5;
  (**(code **)(**(int **)(piVar4[0xe] + 4) + 0xd8))(*(int **)(piVar4[0xe] + 4),1);
  pcVar9 = &DAT_02169dec;
  FUN_0215f0f4();
  if (piVar4[1] == 0) {
    iVar5 = FUN_0203b3e4();
    DAT_020a0dd0 = *(undefined4 *)(*(int *)(iVar5 + 0x88) + 4);
  }
  else {
    iVar5 = FUN_0203b3f4();
    DAT_020a0dd0 = *(undefined4 *)(*(int *)(iVar5 + 0x88) + 4);
  }
  iVar5 = func_0x021caa0c(s_font_jskfont_aft_0216cb68,0,0);
  piVar4[8] = iVar5;
  iVar5 = func_0x021caa0c(s_font_DSFont_aft_0216cb7c,0,0);
  piVar4[9] = iVar5;
  FUN_0214f834();
  local_54 = 0;
  do {
    if (*pcVar9 == '\0') {
      iVar5 = piVar4[8];
    }
    else {
      iVar5 = piVar4[9];
    }
    cVar3 = pcVar9[3];
    bVar1 = pcVar9[2];
    bVar2 = pcVar9[1];
    FUN_0215f0f4();
    if (piVar4[1] == 0) {
      iVar8 = FUN_0203b3e4();
      DAT_020a0dd0 = *(undefined4 *)(*(int *)(iVar8 + 0x88) + 4);
    }
    else {
      iVar8 = FUN_0203b3f4();
      DAT_020a0dd0 = *(undefined4 *)(*(int *)(iVar8 + 0x88) + 4);
    }
    func_0x021c5fb4(*(undefined4 *)(iVar5 + 4));
    iVar5 = FUN_0214d37c();
    piVar7 = *(int **)(*(int *)(iVar5 + 4) + 100);
    (**(code **)(*piVar7 + 0xa4))(piVar7,0);
    piVar7 = *(int **)(*(int *)(iVar5 + 4) + 100);
    (**(code **)(*piVar7 + 0xa8))(piVar7,(int)cVar3);
    piVar7 = *(int **)(*(int *)(iVar5 + 4) + 100);
    (**(code **)(*piVar7 + 0x68))(piVar7,&DAT_0216cb8c);
    local_20[0] = (uint)bVar1 << 0xc;
    local_24 = (uint)bVar2 << 0xc;
    FUN_021511c8(iVar5,&local_24,local_20);
    local_20[1] = 0x7f000;
    FUN_0214e6c0(iVar5,local_20 + 1);
    (**(code **)(**(int **)(iVar5 + 4) + 0xd8))(*(int **)(iVar5 + 4),0);
    FUN_0214f834();
    piVar4[local_54 + 10] = iVar5;
    FUN_0214f7c0(iVar5,piVar4[7]);
    (**(code **)(**(int **)(piVar4[local_54 + 10] + 4) + 0xd8))
              (*(int **)(piVar4[local_54 + 10] + 4),1);
    if (*pcVar9 != '\0') {
      local_28 = 0x1000;
      local_2c = 0;
      local_30 = 0;
      local_34 = 0;
      (**(code **)(**(int **)(piVar4[local_54 + 10] + 4) + 0x100))
                (*(int **)(piVar4[local_54 + 10] + 4),&local_34,&local_30,&local_2c,&local_28);
    }
    pcVar9 = pcVar9 + 4;
    local_54 = local_54 + 1;
  } while (local_54 < 4);
  pcVar9 = &DAT_02169de0;
  local_64 = 0;
  do {
    for (iVar5 = 0; iVar5 < *pcVar9; iVar5 = iVar5 + 1) {
      if (pcVar9[3] == '\x03') {
        local_80 = 7;
      }
      else {
        local_80 = 6;
      }
      if (piVar4[1] == 0) {
        iVar8 = FUN_0203b3e4();
        iVar8 = FUN_0215f178(*(undefined4 *)(iVar8 + 0x88),0x800000,pcVar9[3],
                             (uint)(byte)pcVar9[1] + local_80 * iVar5,pcVar9[2],0x1f);
      }
      else {
        iVar8 = FUN_0203b3f4();
        iVar8 = FUN_0215f178(*(undefined4 *)(iVar8 + 0x88),0x800000,pcVar9[3],
                             (uint)(byte)pcVar9[1] + local_80 * iVar5,pcVar9[2],0x1f);
      }
      piVar4[local_64 * 5 + iVar5 + 0xf] = iVar8;
      FUN_0214f7c0(piVar4[local_64 * 5 + iVar5 + 0xf],piVar4[7]);
      (**(code **)(**(int **)(piVar4[local_64 * 5 + iVar5 + 0xf] + 4) + 0xd8))
                (*(int **)(piVar4[local_64 * 5 + iVar5 + 0xf] + 4),1);
    }
    pcVar9 = pcVar9 + 6;
    local_64 = local_64 + 1;
  } while (local_64 < 2);
  (**(code **)(*piVar6 + 0xc))();
  return piVar4;
}

