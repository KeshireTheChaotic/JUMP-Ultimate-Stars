
void FUN_0215a058(void)

{
  int iVar1;
  
  FUN_0215a02c();
  FUN_0215a028();
  FUN_0215a008();
  iVar1 = FUN_02156eac();
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      DAT_0216e75c = 1;
      thunk_FUN_02167764(1,DAT_0216e764);
      DAT_0216e764 = 0;
      FUN_02157088(0x2159e65);
      return;
    }
    if (iVar1 != 2) {
      return;
    }
    FUN_02162338();
    FUN_02163654(0xc,1,1,0xffffffff,0);
    FUN_02162378(9);
    FUN_02154424();
    thunk_FUN_02167764(1,DAT_0216e764);
    DAT_0216e764 = 0;
    FUN_02157088(0x2159ebd);
  }
  return;
}

