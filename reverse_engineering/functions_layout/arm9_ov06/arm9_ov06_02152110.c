
/* JUS-GAME BattleComicDeck::Battle_ComicDeckCreate [source-string] __FILE__="BattleComicDeck.cpp"
   __FUNCTION__="Battle_ComicDeckCreate" lines=[61] passed to 1 source-location call(s) */

int BattleComicDeck::Battle_ComicDeckCreate(undefined4 param_1,int param_2,int param_3)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  ushort local_64 [2];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c [3];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined4 local_28;
  
  iVar3 = thunk_FUN_0201a228(0x284,s_BattleComicDeck_cpp_02171d6c,s_Battle_ComicDeckCreate_02171d54,
                             0x3d);
  FUN_020517fc(iVar3,0,0x284);
  *(undefined4 *)(iVar3 + 0x94) = param_1;
  iVar4 = FUN_02026f94();
  *(int *)(iVar3 + 0x54) = iVar4;
  local_28 = 0x98000;
  (**(code **)(**(int **)(iVar4 + 4) + 0xa0))(*(int **)(iVar4 + 4),&local_28);
  FUN_02028384(*(undefined4 *)(*(int *)(iVar3 + 0x54) + 4),FUN_021527ec);
  piVar5 = *(int **)(*(int *)(iVar3 + 0x54) + 4);
  (**(code **)(*piVar5 + 0x24))(piVar5,iVar3);
  piVar5 = *(int **)(*(int *)(iVar3 + 0x54) + 4);
  (**(code **)(*piVar5 + 0x94))(piVar5,0x100000);
  uVar6 = ComicDeckDisp::ComicDeck_DispCreate(1,0,3,0,0);
  *(undefined4 *)(iVar3 + 0x98) = uVar6;
  FUN_0207907c(uVar6,param_1);
  FUN_0207903c(*(undefined4 *)(iVar3 + 0x98),8,0);
  DAT_02093c08 = DAT_02093c08 + -1;
  (&DAT_020a16d0)[DAT_02093c08] = DAT_020a0dd0;
  piVar5 = (int *)FUN_02035c90(s_battle_deck00_dig_02171d80);
  if (piVar5[0xe] == 0) {
    (**(code **)(*piVar5 + 0x14))();
  }
  iVar10 = piVar5[0xe];
  iVar4 = FUN_0203b424(3);
  DAT_020a0dd0 = *(undefined4 *)(*(int *)(iVar4 + 0x88) + 4);
  FUN_02036ab8();
  iVar4 = FUN_02151294();
  *(int *)(iVar3 + 0x68) = iVar4;
  (**(code **)(**(int **)(iVar4 + 4) + 0x130))
            (*(int **)(iVar4 + 4),(&PTR_s_battle_deck10_atm_02171cf4)[param_3]);
  iVar4 = *(int *)(*(int *)(iVar3 + 0x68) + 4);
  if (iVar10 == 0) {
    piVar5 = *(int **)(iVar4 + 100);
    (**(code **)(*piVar5 + 0x50))(piVar5,0,0);
  }
  else {
    piVar5 = *(int **)(iVar4 + 100);
    (**(code **)(*piVar5 + 0x50))(piVar5,*(undefined4 *)(iVar10 + 4),0);
  }
  local_4c = 0;
  local_50 = 0;
  FUN_021519d0(*(undefined4 *)(iVar3 + 0x68),&local_50,&local_4c);
  piVar5 = *(int **)(*(int *)(iVar3 + 0x68) + 4);
  (**(code **)(*piVar5 + 0xd8))(piVar5,0);
  iVar9 = 0;
  *(undefined4 *)(iVar3 + 0x268) = 0;
  for (iVar4 = 0; iVar4 < param_2; iVar4 = iVar4 + 1) {
    if (iVar4 != param_3) {
      iVar7 = iVar3 + iVar9 * 2;
      *(short *)(iVar7 + 0x26c) = (short)(iVar4 << 4) + 5;
      uVar1 = *(ushort *)(iVar7 + 0x26c);
      FUN_0215305c(auStack_2c,*(undefined4 *)(iVar3 + 0x68));
      iVar7 = FUN_02153018(auStack_2c);
      FUN_02051890(*(int *)(*(int *)(iVar7 + 4) + 0x10) + (uint)uVar1 * 2,local_64,2);
      iVar7 = iVar3 + iVar9 * 3;
      iVar9 = iVar9 + 1;
      *(byte *)(iVar7 + 0x272) = (byte)local_64[0] & 0x1f;
      *(byte *)(iVar7 + 0x273) = (byte)((int)(uint)local_64[0] >> 5) & 0x1f;
      *(byte *)(iVar7 + 0x274) = (byte)((int)(uint)local_64[0] >> 10) & 0x1f;
    }
  }
  for (; iVar4 < 4; iVar4 = iVar4 + 1) {
    FUN_0215305c(auStack_30,*(undefined4 *)(iVar3 + 0x68));
    iVar7 = FUN_02153018(auStack_30);
    FUN_02029c68(*(undefined4 *)(iVar7 + 4),&DAT_02171040,iVar4 * 0x10 + 2,6);
  }
  *(int *)(iVar3 + 0x268) = iVar9;
  FUN_02034d7c(iVar10);
  iVar4 = FUN_0203b3f4();
  DAT_020a0dd0 = *(undefined4 *)(*(int *)(iVar4 + 0x88) + 4);
  uVar6 = FUN_020101f4(s_battle_hand_aar_02171d94,0);
  *(undefined4 *)(iVar3 + 0x58) = uVar6;
  FUN_020329ec(0x521000);
  uVar6 = FUN_02151294();
  *(undefined4 *)(iVar3 + 0x50) = uVar6;
  local_44 = 0x20000;
  local_48 = 0x20000;
  FUN_021519d0(*(undefined4 *)(iVar3 + 0x50),&local_48,&local_44);
  local_40 = 0x5f000;
  FUN_021512bc(*(undefined4 *)(iVar3 + 0x50),&local_40);
  FUN_02023894(*(undefined4 *)(*(int *)(iVar3 + 0x50) + 4),0x521000,0);
  (**(code **)(**(int **)(*(int *)(*(int *)(iVar3 + 0x50) + 4) + 0x68) + 0x6c))();
  FUN_020282f4(*(undefined4 *)(*(int *)(iVar3 + 0x50) + 4));
  uVar6 = FUN_020101f4(s_battle_deck_obj_aar_02171da4,0);
  *(undefined4 *)(iVar3 + 0x5c) = uVar6;
  iVar4 = 0;
  do {
    piVar5 = (int *)(iVar4 * 0x14 + iVar3);
    iVar10 = 0;
    do {
      FUN_020329ec(0x680000);
      iVar9 = FUN_02151294();
      piVar5[iVar10] = iVar9;
      local_3c[0] = iVar10 << 0xf;
      local_3c[1] = 0;
      FUN_021519d0(piVar5[iVar10],local_3c,local_3c + 1);
      local_3c[2] = 0x5f000;
      FUN_021512bc(piVar5[iVar10],local_3c + 2);
      FUN_02023894(*(undefined4 *)(piVar5[iVar10] + 4),0x680000,0);
      (**(code **)(**(int **)(*(int *)(piVar5[iVar10] + 4) + 0x68) + 0x6c))();
      FUN_020282f4(*(undefined4 *)(piVar5[iVar10] + 4));
      if (iVar10 != 0) {
        piVar8 = *(int **)(piVar5[iVar10] + 4);
        if (*piVar5 == 0) {
          (**(code **)(*piVar8 + 0xd4))(piVar8,0);
        }
        else {
          (**(code **)(*piVar8 + 0xd4))(piVar8,*(undefined4 *)(*piVar5 + 4));
        }
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < 5);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  DAT_020a0dd0 = (&DAT_020a16d0)[DAT_02093c08];
  DAT_02093c08 = DAT_02093c08 + 1;
  iVar4 = FUN_0203b3f4();
  iVar4 = *(int *)(*(int *)(iVar4 + 0x88) + 4);
  local_60 = 0x1000;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  uVar2 = FUN_0215262c(&local_54,&local_58,&local_5c,&local_60);
  *(undefined2 *)(iVar4 + 0x8b8) = uVar2;
  *(undefined1 *)(iVar4 + 0x8fc) = 1;
  return iVar3;
}

