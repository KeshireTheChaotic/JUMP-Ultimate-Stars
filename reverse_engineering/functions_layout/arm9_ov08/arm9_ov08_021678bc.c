
void FUN_021678bc(void)

{
  undefined4 uVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  
  DAT_0216e8ac = FUN_02166ba8(0x80,4);
  iVar4 = 0;
  pbVar3 = &DAT_0216af08;
  iVar2 = 0;
  do {
    *(uint *)(DAT_0216e8ac + iVar2 + 0x34) = (uint)*pbVar3;
    uVar1 = FUN_02166ba8((uint)*pbVar3 * 0x14,4);
    *(undefined4 *)(DAT_0216e8ac + iVar2 + 0x3c) = uVar1;
    uVar1 = FUN_02166120(*pbVar3,*(undefined4 *)(DAT_0216e8ac + iVar2 + 0x3c),0x14);
    *(undefined4 *)(DAT_0216e8ac + iVar2) = uVar1;
    uVar1 = FUN_02166144(*pbVar3);
    *(undefined4 *)(DAT_0216e8ac + iVar2 + 4) = uVar1;
    uVar1 = FUN_021671d0();
    *(undefined4 *)(DAT_0216e8ac + iVar2 + 8) = uVar1;
    *(undefined1 *)(DAT_0216e8ac + iVar2 + 0x1c) = 0;
    *(undefined1 *)(DAT_0216e8ac + iVar2 + 0x30) = 0xff;
    FUN_0216715c(*(undefined4 *)(DAT_0216e8ac + iVar2 + 8),DAT_0216e8ac + iVar2 + 0xc);
    FUN_02167168(*(undefined4 *)(DAT_0216e8ac + iVar2 + 8),DAT_0216e8ac + iVar2 + 0x20);
    *(undefined1 *)(DAT_0216e8ac + iVar2 + 0x38) = 1;
    pbVar3 = pbVar3 + 1;
    iVar2 = iVar2 + 0x40;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 2);
  return;
}

