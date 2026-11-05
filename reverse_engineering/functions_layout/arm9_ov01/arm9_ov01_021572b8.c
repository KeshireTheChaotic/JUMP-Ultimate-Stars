
/* JUS-GAME DeckSelect::DeckSelect_Add [source-string] __FILE__="DeckSelect.cpp"
   __FUNCTION__="DeckSelect_Add" lines=[] passed to 1 source-location call(s) */

undefined4
DeckSelect::DeckSelect_Add
          (undefined1 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  
  puVar1 = (undefined4 *)
           thunk_FUN_0201a228(0x318,s_DeckSelect_cpp_0216c6c8,s_DeckSelect_Add_0216c454,0x23b,
                              param_4);
  FUN_0214ff80(puVar1,0x318);
  *(undefined1 *)(puVar1 + 0xc4) = param_1;
  *(undefined1 *)((int)puVar1 + 0x313) = 0;
  puVar1[0xbe] = 0x215a5dd;
  puVar1[0xc3] = 0xffffffff;
  thunk_EXT_FUN_021b65bc();
  uVar2 = FUN_02026f94();
  puVar1[1] = uVar2;
  FUN_02150004(uVar2,puVar1);
  FUN_02157480(puVar1[1],0x2159f2d);
  uVar2 = FUN_020310f4();
  *puVar1 = uVar2;
  FUN_0214ff94();
  FUN_02158580(puVar1);
  uVar2 = func_0x021ba49c(1,0,0);
  puVar1[0xb6] = uVar2;
  uVar2 = FUN_021574a0(0);
  FUN_02157490(uVar2,0x40,0x40);
  uVar2 = FUN_021574a0(0);
  FUN_021574b0(uVar2,0x8000);
  FUN_0215754c(puVar1);
  uVar2 = ComicDeck::ComicDeckCreate(1,1);
  puVar1[0xb2] = uVar2;
  uVar2 = FUN_02076908(puVar1[0xb2]);
  puVar1[0xb3] = uVar2;
  uVar2 = FUN_02076908(puVar1[0xb2]);
  puVar1[0xb4] = uVar2;
  uVar2 = ComicDeckDisp::ComicDeck_DispCreate(0,1,2,1,1);
  puVar1[0xb5] = uVar2;
  FUN_0207903c(puVar1[0xb5],8,0);
  FUN_02079c30(puVar1[0xb5],0xa1);
  uVar2 = FUN_02079034(puVar1[0xb5]);
  FUN_0214f7c0(uVar2,puVar1[0x55]);
  DeckSelect_InitDeckData(puVar1);
  FUN_02158aa0(puVar1);
  FUN_021594ec(puVar1);
  FUN_021574c8(puVar1[0x18]);
  FUN_021574d8(puVar1[0x18],1);
  FUN_021574d8(puVar1[0x2b],1);
  FUN_02150094(puVar1[0x18]);
  uVar3 = FUN_021574e8(puVar1[0x2b]);
  if (uVar3 != 0) {
    if ((uint)puVar1[0xc2] < uVar3) {
      FUN_021574f4(puVar1[0x2b]);
      FUN_02157510(puVar1[0x2b],puVar1[0xc2]);
    }
    else {
      FUN_021574f4(puVar1[0x2b],0);
      FUN_02157510(puVar1[0x2b],0);
    }
  }
  FUN_02159ac4(puVar1);
  if ((puVar1[0xc1] == 0) && (*(char *)(puVar1 + 0xc4) != '\a')) {
    FUN_02159aec(puVar1);
  }
  FUN_02159bf4(puVar1);
  FUN_02073ebc(2,1);
  FUN_02158a00(puVar1);
  return *puVar1;
}

