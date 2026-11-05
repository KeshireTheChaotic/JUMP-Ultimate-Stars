
int FUN_021cdc18(void)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = FUN_021ce650();
  if (iVar2 == 0) {
    return 0;
  }
  uVar1 = *(undefined1 *)(iVar2 + 0x11);
  iVar2 = FUN_021ce644();
  iVar5 = 0;
  if (0 < iVar2) {
    do {
      iVar3 = FUN_021ce624(uVar1);
      if (*(int *)(iVar3 + 0xc) < 2) {
        if (*(int *)(iVar3 + 0xc) == 1) {
          FUN_021ce770(*(undefined4 *)(iVar3 + 0x474),iVar3 + 0x1c,*(undefined4 *)(iVar3 + 0x14));
        }
        else {
          FUN_021ce734(*(undefined4 *)(iVar3 + 0x474),iVar3 + 0x1c,*(undefined4 *)(iVar3 + 0x14));
        }
      }
      else {
        FUN_021cca0c(*(undefined4 *)(iVar3 + 0x474),iVar3 + 0x1c,*(undefined4 *)(iVar3 + 0x14));
      }
      *(int *)(iVar3 + 0x474) = iVar3 + 0x1c;
      FUN_021ce5d0(iVar3);
      iVar4 = FUN_021ce8b4(iVar3,*(undefined1 *)(iVar3 + 0x11));
      if (iVar4 < 0) {
        FUN_021cf870(iVar3);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2);
  }
  return iVar2;
}

