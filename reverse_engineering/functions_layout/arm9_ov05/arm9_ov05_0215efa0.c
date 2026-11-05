
/* JUS-GAME KomaIBook::KomaBook_Add [source-string] __FILE__="KomaIBook.cpp"
   __FUNCTION__="KomaBook_Add" lines=[41] passed to 1 source-location call(s) */

undefined4 KomaIBook::KomaBook_Add(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_r3;
  undefined4 local_10;
  undefined4 uStack_c;
  
  uStack_c = in_r3;
  puVar1 = (undefined4 *)
           thunk_FUN_0201a228(0x1c,s_KomaIBook_cpp_02170738,s_KomaBook_Add_02170728,0x29);
  FUN_020517fc(puVar1,0,0x1c);
  iVar2 = FUN_02026f94();
  puVar1[5] = iVar2;
  local_10 = 0x80000;
  (**(code **)(**(int **)(iVar2 + 4) + 0xa0))(*(int **)(iVar2 + 4),&local_10);
  FUN_02028384(*(undefined4 *)(puVar1[5] + 4),FUN_0215f1c4);
  (**(code **)(**(int **)(puVar1[5] + 4) + 0x24))(*(int **)(puVar1[5] + 4),puVar1);
  func_0x021b65bc();
  FUN_02041f7c(DAT_020a0f64,1);
  iVar2 = FUN_020310f4();
  puVar1[4] = iVar2;
  DAT_02093c04 = DAT_02093c04 + -1;
  *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4) = DAT_020a0e80;
  FUN_020314a0(*(undefined4 *)(iVar2 + 4));
  uVar3 = ComicDeck::ComicDeckCreate(1,1);
  *puVar1 = uVar3;
  uVar3 = FUN_02076908();
  puVar1[1] = uVar3;
  uVar3 = KomaState::KomaState_Create(uVar3,2,0);
  puVar1[3] = uVar3;
  uVar3 = KomaList::KomaList_Create(2,puVar1[1],0,0,0,0);
  puVar1[2] = uVar3;
  FUN_0214fdb0(uVar3,FUN_0215f0fc,puVar1);
  FUN_020734e0(6);
  FUN_0207361c(6,0);
  FUN_02073ebc(2,1);
  return puVar1[4];
}

