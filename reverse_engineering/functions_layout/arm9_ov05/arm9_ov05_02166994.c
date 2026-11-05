
/* JUS-GAME JPowerKomaList::JPowerKomaList_Add [source-string] __FILE__="JPowerKomaList.cpp"
   __FUNCTION__="JPowerKomaList_Add" lines=[42] passed to 1 source-location call(s) */

undefined4 JPowerKomaList::JPowerKomaList_Add(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_10;
  
  puVar1 = (undefined4 *)
           thunk_FUN_0201a228(0x1c,s_JPowerKomaList_cpp_02171528,s_JPowerKomaList_Add_02171514,0x2a)
  ;
  FUN_020517fc(puVar1,0,0x1c);
  iVar2 = FUN_02026f94();
  puVar1[5] = iVar2;
  local_10 = 0x80000;
  (**(code **)(**(int **)(iVar2 + 4) + 0xa0))(*(int **)(iVar2 + 4),&local_10);
  FUN_02028384(*(undefined4 *)(puVar1[5] + 4),FUN_02166b80);
  (**(code **)(**(int **)(puVar1[5] + 4) + 0x24))(*(int **)(puVar1[5] + 4),puVar1);
  func_0x021b65bc();
  FUN_02041f7c(DAT_020a0f64,1);
  iVar2 = FUN_020310f4();
  puVar1[4] = iVar2;
  DAT_02093c04 = DAT_02093c04 + -1;
  *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4) = DAT_020a0e80;
  FUN_020314a0(*(undefined4 *)(iVar2 + 4));
  uVar3 = ComicDeck::ComicDeckCreate(1,1);
  puVar1[1] = uVar3;
  uVar3 = FUN_02076908();
  puVar1[2] = uVar3;
  uVar3 = FUN_02070684();
  uVar3 = KomaList::KomaList_Create(1,puVar1[2],param_1,uVar3,0,0);
  puVar1[3] = uVar3;
  FUN_0214fdb0(uVar3,FUN_02166b10,puVar1);
  uVar3 = func_0x021bcf1c(0x17,0xffffffff,0,0xffffffff);
  *puVar1 = uVar3;
  func_0x021bd730(uVar3,0x44,0);
  FUN_020734e0(4);
  FUN_0207361c(4,0);
  FUN_02073ebc(2,1);
  return puVar1[4];
}

