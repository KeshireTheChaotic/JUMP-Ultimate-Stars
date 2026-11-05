
/* JUS-GAME DeckSelect::DeckSelect_InitDeckData [source-string] __FILE__="DeckSelect.cpp"
   __FUNCTION__="DeckSelect_InitDeckData" lines=[1976, 1977, 1978, 1979] passed to 4 source-location
   call(s) */

void DeckSelect::DeckSelect_InitDeckData
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 uStack_18;
  
  uStack_18 = param_4;
  iVar1 = FUN_02070c9c();
  uVar2 = jus_AllocDebug((iVar1 + 0x46) * 0x5c,s_DeckSelect_cpp_0216c6c8,
                         s_DeckSelect_InitDeckData_0216c464,0x7b8);
  *(undefined4 *)(param_1 + 0x2ac) = uVar2;
  iVar1 = FUN_02070c9c();
  uVar2 = jus_AllocDebug((iVar1 + 0x46) * 0x40,s_DeckSelect_cpp_0216c6c8,
                         s_DeckSelect_InitDeckData_0216c464,0x7b9);
  *(undefined4 *)(param_1 + 0x2b0) = uVar2;
  iVar1 = FUN_02070c9c();
  uVar2 = jus_AllocDebug((iVar1 + 0x46) * 4,s_DeckSelect_cpp_0216c6c8,
                         s_DeckSelect_InitDeckData_0216c464,0x7ba);
  *(undefined4 *)(param_1 + 0x2b4) = uVar2;
  iVar1 = FUN_02070c9c();
  uVar2 = jus_AllocDebug((iVar1 + 0x46) * 4,s_DeckSelect_cpp_0216c6c8,
                         s_DeckSelect_InitDeckData_0216c464,0x7bb);
  *(undefined4 *)(param_1 + 0x2b8) = uVar2;
  piVar3 = (int *)FUN_020101f4(s_deck_Deck_aar_0216c8f4,0);
  iVar1 = 0;
  *(undefined4 *)(param_1 + 700) = 0;
  for (uVar6 = 0; iVar4 = FUN_02070c9c(), (int)uVar6 < iVar4; uVar6 = uVar6 + 1) {
    if ((1 << (uVar6 & 0x1f) & (&DAT_020b0ca4)[uVar6 >> 5]) != 0) {
      FUN_02070c84(uVar6,*(int *)(param_1 + 0x2ac) + iVar1 * 0x5c);
      FUN_02070b5c(*(int *)(param_1 + 0x2b0) + iVar1 * 0x40,1,uVar6);
      iVar4 = iVar1 * 4;
      iVar1 = iVar1 + 1;
      *(uint *)(*(int *)(param_1 + 0x2b4) + iVar4) = uVar6;
      *(undefined4 *)(*(int *)(param_1 + 0x2b8) + iVar4) = 1;
      *(int *)(param_1 + 700) = *(int *)(param_1 + 700) + 1;
    }
  }
  uVar6 = 0;
  *(undefined4 *)(param_1 + 0x2c0) = 0;
  do {
    if ((1 << (uVar6 & 0x1f) & (&DAT_020b0cbc)[uVar6 >> 5]) != 0) {
      FUN_02070a28(*(int *)(param_1 + 0x2ac) + iVar1 * 0x5c,7,uVar6);
      FUN_02070b5c(*(int *)(param_1 + 0x2b0) + iVar1 * 0x40,7,uVar6);
      iVar4 = iVar1 * 4;
      iVar1 = iVar1 + 1;
      *(uint *)(*(int *)(param_1 + 0x2b4) + iVar4) = uVar6;
      *(undefined4 *)(*(int *)(param_1 + 0x2b8) + iVar4) = 7;
      *(int *)(param_1 + 0x2c0) = *(int *)(param_1 + 0x2c0) + 1;
    }
    uVar6 = uVar6 + 1;
  } while ((int)uVar6 < 0x32);
  uVar6 = 0;
  *(undefined4 *)(param_1 + 0x2c4) = 0;
  do {
    if ((1 << (uVar6 & 0x1f) & (&DAT_020b0ccc)[uVar6 >> 5]) != 0) {
      FUN_02070a28(*(int *)(param_1 + 0x2ac) + iVar1 * 0x5c,8,uVar6);
      FUN_02070b5c(*(int *)(param_1 + 0x2b0) + iVar1 * 0x40,8,uVar6);
      iVar4 = iVar1 * 4;
      iVar1 = iVar1 + 1;
      *(uint *)(*(int *)(param_1 + 0x2b4) + iVar4) = uVar6;
      *(undefined4 *)(*(int *)(param_1 + 0x2b8) + iVar4) = 8;
      *(int *)(param_1 + 0x2c4) = *(int *)(param_1 + 0x2c4) + 1;
    }
    uVar6 = uVar6 + 1;
  } while ((int)uVar6 < 0x14);
  (**(code **)(*piVar3 + 0xc))();
  piVar3 = *(int **)(*(int *)(param_1 + 0x5c) + 4);
  (**(code **)(*piVar3 + 0xd8))(piVar3,0);
  piVar3 = *(int **)(*(int *)(param_1 + 0x4c) + 4);
  (**(code **)(*piVar3 + 0xd8))(piVar3,0);
  piVar3 = *(int **)(*(int *)(param_1 + 0x68) + 4);
  (**(code **)(*piVar3 + 0xd8))(piVar3,0);
  piVar3 = *(int **)(*(int *)(param_1 + 0x6c) + 4);
  (**(code **)(*piVar3 + 0xd8))(piVar3,0);
  (*(code *)(&PTR_LAB_0215c580_1_02169d8c)[*(byte *)(param_1 + 0x310)])(param_1);
  if (*(int *)(param_1 + 0x304) == 7) {
    *(int *)(param_1 + 0x308) = *(int *)(param_1 + 0x308) + *(int *)(param_1 + 700);
    *(undefined4 *)(param_1 + 0x304) = 1;
  }
  else if (*(int *)(param_1 + 0x304) == 8) {
    *(int *)(param_1 + 0x308) =
         *(int *)(param_1 + 0x308) + *(int *)(param_1 + 700) + *(int *)(param_1 + 0x2c0);
    *(undefined4 *)(param_1 + 0x304) = 1;
  }
  iVar4 = 0;
  iVar7 = 0;
  iVar1 = 2;
  do {
    iVar5 = FUN_02158c08(*(undefined4 *)(param_1 + iVar1 * 4 + 0x30));
    if (iVar5 != 0) {
      iVar7 = iVar7 + 1;
      iVar4 = iVar4 + *(int *)(&DAT_02169d6c + iVar1 * 4);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 5);
  iVar4 = iVar4 / 2;
  local_28 = (0x94 - iVar4) * 0x1000;
  FUN_0214f764(*(undefined4 *)(param_1 + 0x80),&local_28);
  local_24 = (iVar4 + 0x52) * 0x1000;
  FUN_0214f764(*(undefined4 *)(param_1 + 0x88),&local_24);
  local_20 = (0x70 - iVar4) * 0x1000;
  FUN_0214f764(*(undefined4 *)(param_1 + 0x44),&local_20);
  local_1c = (iVar4 + 0x80) * 0x1000;
  FUN_0214f764(*(undefined4 *)(param_1 + 0x48),&local_1c);
  if (iVar7 < 2) {
    piVar3 = *(int **)(*(int *)(param_1 + 0x44) + 4);
    (**(code **)(*piVar3 + 0xd8))(piVar3,0);
    piVar3 = *(int **)(*(int *)(param_1 + 0x48) + 4);
    (**(code **)(*piVar3 + 0xd8))(piVar3,0);
  }
  return;
}

