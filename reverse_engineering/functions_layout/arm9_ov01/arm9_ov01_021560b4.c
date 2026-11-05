
void FUN_021560b4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  iVar1 = FUN_0203b424(0);
  iVar1 = *(int *)(iVar1 + 0x88);
  FUN_0203d0b4(*(undefined4 *)(iVar1 + 4),1);
  FUN_0203d478(*(undefined4 *)(iVar1 + 4),4);
  FUN_0203cfbc(*(undefined4 *)(iVar1 + 4),0,0);
  (**(code **)(**(int **)(iVar1 + 4) + 0x90))(*(int **)(iVar1 + 4),0);
  uStack_14 = 0x2000;
  (**(code **)(**(int **)(iVar1 + 4) + 0x10))(*(int **)(iVar1 + 4),&uStack_14);
  iVar1 = FUN_0203b424(1);
  iVar1 = *(int *)(iVar1 + 0x88);
  FUN_0203d0b4(*(undefined4 *)(iVar1 + 4),1);
  FUN_0203d478(*(undefined4 *)(iVar1 + 4),4);
  FUN_0203cfbc(*(undefined4 *)(iVar1 + 4),0,0);
  (**(code **)(**(int **)(iVar1 + 4) + 0x90))(*(int **)(iVar1 + 4),0);
  uStack_18 = 0x3000;
  (**(code **)(**(int **)(iVar1 + 4) + 0x10))(*(int **)(iVar1 + 4),&uStack_18);
  iVar1 = FUN_0203b424(3);
  iVar1 = *(int *)(iVar1 + 0x88);
  FUN_0203d0b4(*(undefined4 *)(iVar1 + 4),3);
  FUN_0203d478(*(undefined4 *)(iVar1 + 4),8);
  FUN_0203cfbc(*(undefined4 *)(iVar1 + 4),0x20,0x20);
  (**(code **)(**(int **)(iVar1 + 4) + 0x90))(*(int **)(iVar1 + 4),0x4000);
  uStack_1c = 0x1000;
  (**(code **)(**(int **)(iVar1 + 4) + 0x10))(*(int **)(iVar1 + 4),&uStack_1c);
  iVar1 = FUN_0203b424(3);
  iVar1 = FUN_0214faac(PTR_s_DeckSelect_deck_base_atm_0216c1bc,
                       PTR_s_DeckSelect_deck_base_dig_0216c1c8,*(undefined4 *)(iVar1 + 0x88));
  *(int *)(param_1 + 0x2c) = iVar1;
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
  uVar2 = ComicDeck::ComicDeckCreate(1,1);
  *(undefined4 *)(param_1 + 0xd8) = uVar2;
  uVar2 = FUN_02076908(*(undefined4 *)(param_1 + 0xd8));
  *(undefined4 *)(param_1 + 0xdc) = uVar2;
  uVar2 = ComicDeckDisp::ComicDeck_DispCreate(1,2,0,1,1);
  *(undefined4 *)(param_1 + 0xe0) = uVar2;
  FUN_0207903c(*(undefined4 *)(param_1 + 0xe0),8,0);
  FUN_0207974c(*(undefined4 *)(param_1 + 0xe0));
  *(uint *)(param_1 + 0xec) = *(uint *)(param_1 + 0xec) | 0x20;
  return;
}

