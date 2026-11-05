
void FUN_02167498(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  DAT_0216e874 = FUN_02166b8c(0x340,4);
  iVar3 = 0;
  iVar2 = 0;
  do {
    uVar1 = FUN_02166120(0x20,DAT_0216e874 + iVar2,0xc);
    *(undefined4 *)(DAT_0216e874 + iVar2 + 0x19c) = uVar1;
    uVar1 = FUN_021671d0();
    *(undefined4 *)(DAT_0216e874 + iVar2 + 0x198) = uVar1;
    *(undefined2 *)(DAT_0216e874 + iVar2 + 0x188) = 0x300;
    *(undefined2 *)(DAT_0216e874 + iVar2 + 0x194) = 0x400;
    FUN_0216715c(*(undefined4 *)(DAT_0216e874 + iVar2 + 0x198),DAT_0216e874 + iVar2 + 0x180);
    FUN_02167168(*(undefined4 *)(DAT_0216e874 + iVar2 + 0x198),DAT_0216e874 + iVar2 + 0x18c);
    iVar2 = iVar2 + 0x1a0;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 2);
  return;
}

