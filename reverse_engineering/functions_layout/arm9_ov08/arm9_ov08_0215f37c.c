
void FUN_0215f37c(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar1 = (uint)DAT_0216e7b0;
  iVar4 = uVar1 - 4;
  iVar2 = FUN_02163614();
  if (iVar2 == 0) {
    FUN_02162378(7);
    iVar4 = iVar4 * 4;
    uVar3 = FUN_02165d64(*(undefined4 *)(DAT_0216e7b4 + iVar4 + 0x10),0);
    FUN_02166014(0,0x11,uVar3);
    iVar2 = uVar1 - 1;
    FUN_02165bc4(*(undefined4 *)(DAT_0216e7b4 + iVar4 + 0x10),0xffffffff,(&DAT_0216abcc)[iVar2 * 2],
                 (&DAT_0216abce)[iVar2 * 2]);
    FUN_02165b80(*(undefined4 *)(DAT_0216e7b4 + iVar4 + 0x10),0xffffffff,3);
  }
  else {
    if (iVar2 != 1) {
      return;
    }
    FUN_02162378(0xe);
    FUN_02161c3c(iVar4);
    iVar2 = iVar4 * 4;
    uVar3 = FUN_02165d64(*(undefined4 *)(DAT_0216e7b4 + iVar2 + 4),0);
    FUN_02166014(0,DAT_0216aba3,uVar3);
    FUN_02165bc4(*(undefined4 *)(DAT_0216e7b4 + iVar2 + 4),0xffffffff,(&DAT_0216abcc)[iVar4 * 2],
                 (&DAT_0216abce)[iVar4 * 2]);
    FUN_02165b80(*(undefined4 *)(DAT_0216e7b4 + iVar2 + 4),0xffffffff,3);
    FUN_02165d6c(*(undefined4 *)(DAT_0216e7b4 + iVar2 + 0x10));
    *(undefined4 *)(DAT_0216e7b4 + iVar2 + 0x10) = 0;
  }
  FUN_02163624();
  FUN_02157088(0x215f35d);
  return;
}

