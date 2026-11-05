
/* JUS-GAME KomaState::KomaState_Create [source-string] __FILE__="KomaState.cpp"
   __FUNCTION__="KomaState_Create" lines=[99] passed to 1 source-location call(s) */

int KomaState::KomaState_Create(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  iVar1 = thunk_FUN_0201a228(0x46c,s_KomaState_cpp_0216fb24,s_KomaState_Create_0216fa7c,99);
  FUN_020517fc(iVar1,0,0x46c);
  uVar2 = FUN_020101f4(s_chr_ChrArc_aar_0216fb34,0);
  *(undefined4 *)(iVar1 + 0x3d4) = uVar2;
  *(undefined4 *)(iVar1 + 0x3b8) = param_1;
  *(undefined4 *)(iVar1 + 0x454) = param_2;
  iVar3 = FUN_02026f94();
  *(int *)(iVar1 + 0x3d0) = iVar3;
  local_28 = 0x80000;
  (**(code **)(**(int **)(iVar3 + 4) + 0xa0))(*(int **)(iVar3 + 4),&local_28);
  piVar4 = *(int **)(*(int *)(iVar1 + 0x3d0) + 4);
  (**(code **)(*piVar4 + 0x24))(piVar4,iVar1);
  uVar2 = ComicDeckDisp::ComicDeck_DispCreate(0,1,3,1,1);
  *(undefined4 *)(iVar1 + 0x3bc) = uVar2;
  iVar3 = FUN_0203b3e4();
  iVar3 = *(int *)(*(int *)(iVar3 + 0x88) + 4);
  *(undefined2 *)(iVar3 + 0x8b8) = 0x8000;
  *(undefined1 *)(iVar3 + 0x8fc) = 1;
  FUN_02079c30(*(undefined4 *)(iVar1 + 0x3bc),0xe0);
  FUN_0207903c(*(undefined4 *)(iVar1 + 0x3bc),0,0);
  piVar4 = (int *)FUN_020101f4(s_deckmake_deckmake_aar_0216fb44,0);
  iVar3 = FUN_0203b414(2);
  iVar3 = FUN_0215e100(*(undefined4 *)(iVar3 + 0x88),3,8,0x2000,3,0x20,0x20,
                       s_deckmake_edit_bg_dig_0216fb5c,s_deckmake_edit_bg_atm_0216fb74,0);
  *(int *)(iVar1 + 0x410) = iVar3;
  (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),1);
  if (*(int *)(iVar1 + 0x3bc) != 0) {
    uVar2 = FUN_02079034();
    FUN_021500cc(uVar2,*(undefined4 *)(iVar1 + 0x410));
  }
  iVar3 = FUN_0203b414(3);
  iVar3 = FUN_0215e100(*(undefined4 *)(iVar3 + 0x88),3,8,0x8000,2,0x80,0x80,
                       s_deckmake_state_dig_0216fb8c,s_deckmake_state_atm_0216fba0,0);
  *(int *)(iVar1 + 0x414) = iVar3;
  (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),1);
  piVar5 = *(int **)(*(int *)(iVar1 + 0x414) + 4);
  (**(code **)(*piVar5 + 0x24))(piVar5,iVar1);
  iVar3 = FUN_0203b414(0);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),0);
  iVar3 = FUN_0203b414(0);
  local_2c = 0x1000;
  piVar5 = *(int **)(*(int *)(iVar3 + 0x88) + 4);
  (**(code **)(*piVar5 + 0x10))(piVar5,&local_2c);
  iVar3 = 0;
  do {
    uVar2 = FUN_020101f4((&DAT_0216fa14)[iVar3],0);
    *(undefined4 *)(iVar1 + iVar3 * 4 + 0x3e0) = uVar2;
    iVar6 = FUN_0203b404();
    uVar2 = *(undefined4 *)(*(int *)(iVar6 + 0x88) + 4);
    FUN_021552e0();
    DAT_020a0dd0 = uVar2;
    piVar5 = (int *)FUN_02035e88((&DAT_0216fa2c)[iVar3]);
    if (piVar5[0xe] == 0) {
      (**(code **)(*piVar5 + 0x14))();
    }
    iVar6 = piVar5[0xe];
    *(int *)(iVar1 + iVar3 * 4 + 0x3f8) = iVar6;
    if (iVar6 != 0) {
      (**(code **)(**(int **)(iVar6 + 4) + 0x50))(*(int **)(iVar6 + 4),1);
    }
    FUN_0214d4cc();
    (**(code **)(**(int **)(*(int *)(iVar1 + iVar3 * 4 + 0x3e0) + 8) + 0x50))();
    iVar3 = iVar3 + 1;
  } while (iVar3 < 6);
  FUN_021552e0();
  iVar3 = FUN_0203b404();
  DAT_020a0dd0 = *(undefined4 *)(*(int *)(iVar3 + 0x88) + 4);
  uVar2 = func_0x021caa0c(s_font_jskfont_aft_0216fbb4,0,0);
  *(undefined4 *)(iVar1 + 0x3d8) = uVar2;
  uVar2 = func_0x021caa0c(s_font_js8font_aft_0216fbc8,0,0);
  *(undefined4 *)(iVar1 + 0x3dc) = uVar2;
  FUN_0214d4cc();
  iVar3 = 0;
  do {
    puVar7 = (undefined4 *)(iVar3 * 0x9c + iVar1);
    if ((&DAT_0216d618)[iVar3 * 0x10] == '\0') {
      *(undefined1 *)((int)puVar7 + 0x99) = 0;
    }
    else {
      uVar2 = FUN_0215e470((int)(short)(&DAT_0216d5f4)[iVar3 * 2],
                           (int)(short)(&DAT_0216d5f6)[iVar3 * 2],*(undefined4 *)(iVar1 + 0x414));
      *puVar7 = uVar2;
      (*(code *)(&DAT_0216d60c)[iVar3 * 4])(iVar1,puVar7);
      uVar2 = *puVar7;
      iVar6 = 0;
      do {
        if (puVar7[iVar6 + 1] != 0) {
          FUN_021500cc(puVar7[iVar6 + 1],uVar2);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < 0x10);
      iVar6 = 0;
      do {
        if (puVar7[iVar6 + 0x11] != 0) {
          FUN_021500cc(puVar7[iVar6 + 0x11],uVar2);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < 0x12);
      iVar6 = 0;
      do {
        if (puVar7[iVar6 + 0x23] != 0) {
          FUN_021500cc(puVar7[iVar6 + 0x23],uVar2);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < 3);
      FUN_02155588(puVar7);
      *(undefined1 *)((int)puVar7 + 0x99) = 1;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 6);
  iVar3 = *(int *)(iVar1 + 0x3b8);
  iVar6 = FUN_0203b3e4();
  iVar6 = FUN_0215e2d4(*(undefined4 *)(iVar6 + 0x88),0x830200,0,0x80,0,0xdf);
  *(int *)(iVar1 + 0x434) = iVar6;
  (**(code **)(**(int **)(iVar6 + 4) + 0x24))(*(int **)(iVar6 + 4),iVar1);
  piVar5 = *(int **)(*(int *)(iVar1 + 0x434) + 4);
  (**(code **)(*piVar5 + 0xd8))(piVar5,1);
  uVar2 = FUN_0215e748(*(undefined4 *)(iVar1 + 0x3d8),iVar3 + 0x5fe,0xffffff88,0,0xde,0,0);
  *(undefined4 *)(iVar1 + 0x438) = uVar2;
  FUN_021500cc(uVar2,*(undefined4 *)(iVar1 + 0x434));
  piVar5 = *(int **)(*(int *)(iVar1 + 0x438) + 4);
  (**(code **)(*piVar5 + 0xd8))(piVar5,1);
  FUN_02155458(iVar1);
  iVar3 = 0;
  do {
    iVar6 = FUN_0203b3e4();
    uVar2 = FUN_0215e2d4(*(undefined4 *)(iVar6 + 0x88),0x810000,0,0xf8,iVar3 * 0x10 + 0x68,0xdf);
    *(undefined4 *)(iVar1 + iVar3 * 4 + 0x41c) = uVar2;
    FUN_021500cc(uVar2,*(undefined4 *)(iVar1 + 0x410));
    iVar3 = iVar3 + 1;
  } while (iVar3 < 6);
  (**(code **)(*piVar4 + 0xc))();
  FUN_02154edc(iVar1);
  if (*(int *)(iVar1 + 0x454) != 2) {
    FUN_0207907c(*(undefined4 *)(iVar1 + 0x3bc),*(undefined4 *)(iVar1 + 0x3b8));
  }
  if (param_3 == 0) {
    FUN_02028384(*(undefined4 *)(*(int *)(iVar1 + 0x3d0) + 4),FUN_021550c8);
  }
  else {
    if (*(int *)(iVar1 + 0x454) == 1) {
      local_30 = 0xc0000;
      FUN_02150070(*(undefined4 *)(iVar1 + 0x410),&local_30);
    }
    FUN_02073ef0(6,0);
    FUN_02028384(*(undefined4 *)(*(int *)(iVar1 + 0x3d0) + 4),FUN_0215508c);
  }
  return iVar1;
}

