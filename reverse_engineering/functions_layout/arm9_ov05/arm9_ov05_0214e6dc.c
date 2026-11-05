
/* JUS-GAME DeckMake::DeckMake_Add [source-string] __FILE__="DeckMake.cpp"
   __FUNCTION__="DeckMake_Add" lines=[83] passed to 1 source-location call(s) */

undefined4 DeckMake::DeckMake_Add(uint param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_10;
  
  puVar1 = (undefined4 *)
           thunk_FUN_0201a228(0x44,s_DeckMake_cpp_0216f3ec,s_DeckMake_Add_0216f3dc,0x53);
  FUN_020517fc(puVar1,0,0x44);
  puVar1[8] = param_1 & 0xff;
  puVar1[9] = (int)param_1 >> 8 & 0xff;
  iVar2 = FUN_02026f94();
  puVar1[0xc] = iVar2;
  local_10 = 0x80000;
  (**(code **)(**(int **)(iVar2 + 4) + 0xa0))(*(int **)(iVar2 + 4),&local_10);
  FUN_02028384(*(undefined4 *)(puVar1[0xc] + 4),FUN_0214eb04);
  (**(code **)(**(int **)(puVar1[0xc] + 4) + 0x24))(*(int **)(puVar1[0xc] + 4),puVar1);
  func_0x021b65bc();
  FUN_02041f7c(DAT_020a0f64,1);
  iVar2 = FUN_020310f4();
  puVar1[0xb] = iVar2;
  DAT_02093c04 = DAT_02093c04 + -1;
  *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4) = DAT_020a0e80;
  FUN_020314a0(*(undefined4 *)(iVar2 + 4));
  uVar3 = ComicDeck::ComicDeckCreate(1,1);
  puVar1[1] = uVar3;
  uVar3 = FUN_02076908();
  puVar1[2] = uVar3;
  if (puVar1[9] == 1) {
    uVar3 = FUN_02070d14(0);
  }
  else if (puVar1[8] == 0) {
    uVar3 = FUN_02070d14(0);
  }
  else {
    uVar3 = FUN_02071f10(DAT_020afeb4);
  }
  FUN_020769cc(puVar1[2],uVar3);
  uVar3 = KomaState::KomaState_Create(puVar1[2],0,0);
  puVar1[7] = uVar3;
  uVar3 = FUN_02070690();
  FUN_02155310(puVar1[7],uVar3);
  uVar3 = func_0x021ba49c(1,0,0);
  *puVar1 = uVar3;
  uVar3 = FUN_02070684();
  uVar4 = FUN_02070690();
  uVar3 = KomaList::KomaList_Create(0,puVar1[2],0,uVar3,uVar4,0);
  puVar1[5] = uVar3;
  FUN_0214fdb0(uVar3,FUN_0214e8e0,puVar1);
  FUN_020734e0(4);
  FUN_02073744(0x79);
  FUN_0207361c(4,0);
  FUN_02073ebc(2,1);
  return puVar1[0xb];
}

