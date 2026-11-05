
void FUN_02165f20(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  DAT_0216e834 = FUN_02166b8c(0x450,4);
  iVar4 = 0;
  iVar3 = 0;
  do {
    uVar1 = FUN_02166120(0x20,DAT_0216e834 + iVar3,0x10);
    *(undefined4 *)(DAT_0216e834 + iVar3 + 0x224) = uVar1;
    uVar1 = FUN_021671d0();
    *(undefined4 *)(DAT_0216e834 + iVar3 + 0x220) = uVar1;
    uVar1 = FUN_021671f0(iVar4,0x40);
    *(undefined4 *)(DAT_0216e834 + iVar3 + 0x208) = uVar1;
    iVar2 = FUN_021671f0(iVar4,0x7f);
    *(int *)(DAT_0216e834 + iVar3 + 0x218) = iVar2 + 8;
    FUN_0216715c(*(undefined4 *)(DAT_0216e834 + iVar3 + 0x220),DAT_0216e834 + iVar3 + 0x200);
    FUN_02167168(*(undefined4 *)(DAT_0216e834 + iVar3 + 0x220),DAT_0216e834 + iVar3 + 0x210);
    iVar3 = iVar3 + 0x228;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 2);
  return;
}

