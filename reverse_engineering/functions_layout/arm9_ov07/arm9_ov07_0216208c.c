
undefined4 FUN_0216208c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0xa0) != '\0') {
    return 0;
  }
  if (*(char *)(param_1 + 0xa1) != '\0') {
    iVar2 = 0;
    iVar3 = 0;
    do {
      iVar1 = FUN_0214d7d4(iVar3);
      if (iVar1 != 0) {
        *(undefined1 *)(param_1 + iVar2 * 0x18 + 0x3c) = 1;
        FUN_02051890(iVar1,param_1 + 0x40 + iVar2 * 0x18,0x14);
        iVar2 = iVar2 + 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 4);
    for (; iVar2 < 4; iVar2 = iVar2 + 1) {
      *(undefined1 *)(iVar2 * 0x18 + param_1 + 0x3c) = 0;
    }
  }
  return 1;
}

