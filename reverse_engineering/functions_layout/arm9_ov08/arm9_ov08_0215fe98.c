
void FUN_0215fe98(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = 0;
  iVar4 = 0;
  do {
    iVar1 = FUN_02157004(1);
    iVar1 = FUN_02166d70(iVar1 * 0x20 + 0x216ac98 + iVar4);
    if (iVar1 != 0) {
      FUN_02154470(1);
      DAT_0216e7bc = (char)uVar5;
      iVar4 = FUN_02157004(1);
      iVar1 = FUN_02157004(1);
      iVar2 = FUN_02157004(1);
      iVar3 = FUN_02157004(1);
      iVar6 = DAT_0216e7bc * 8;
      FUN_021547e4(*(undefined2 *)(&DAT_0216acd8 + iVar6 + iVar4 * 0x20),
                   *(undefined2 *)(&DAT_0216acdc + iVar6 + iVar1 * 0x20),
                   *(undefined2 *)(&DAT_0216acda + iVar6 + iVar2 * 0x20),
                   *(undefined2 *)(&DAT_0216acde + iVar6 + iVar3 * 0x20));
      return;
    }
    iVar4 = iVar4 + 8;
    uVar5 = uVar5 + 1;
  } while (uVar5 < 4);
  iVar4 = FUN_02166e40(1);
  if (iVar4 != 0) {
    FUN_02154470(1);
    return;
  }
  iVar4 = FUN_02166e40(2);
  if (iVar4 != 0) {
    FUN_02154470(0);
    return;
  }
  iVar4 = FUN_02166e24(0x40);
  if (iVar4 != 0) {
    FUN_0215fc54(1);
    return;
  }
  iVar4 = FUN_02166e24(0x80);
  if (iVar4 != 0) {
    FUN_0215fc54(3);
    return;
  }
  iVar4 = FUN_02166e24(0x20);
  if (iVar4 != 0) {
    FUN_0215fc54(0);
    return;
  }
  iVar4 = FUN_02166e24(0x10);
  if (iVar4 != 0) {
    FUN_0215fc54(2);
  }
  return;
}

