
void FUN_0216150c(void)

{
  undefined4 uVar1;
  int iVar2;
  
  *(undefined1 *)(DAT_0216e7e8 + 0x1d) = 0;
  switch(*(undefined1 *)(DAT_0216e7e8 + 0x1c)) {
  case 0:
    if (*(char *)(DAT_0216e7e8 + 0x1e) == '\0') {
      uVar1 = FUN_02161360();
      switch(uVar1) {
      case 1:
        if (*(char *)(DAT_0216e7e8 + 0x1b) != '\0') {
          FUN_02162378(0x16);
          FUN_02162364(0);
          *(undefined1 *)(DAT_0216e7e8 + 0x1d) = 1;
          FUN_02166c80(DAT_0216e7e8 + 0x14);
          *(undefined1 *)(DAT_0216e7e8 + 0x18) = *(undefined1 *)(DAT_0216e7e8 + 0x1a);
          *(undefined1 *)(DAT_0216e7e8 + 0x1c) = 1;
          return;
        }
        break;
      case 2:
        FUN_02161408(2);
        return;
      case 3:
        FUN_02161408(3);
        return;
      case 4:
        FUN_021613bc();
        return;
      }
    }
    break;
  case 1:
    FUN_0216148c();
    return;
  case 2:
    iVar2 = FUN_02161334(2);
    if (iVar2 != 2) {
      *(undefined1 *)(DAT_0216e7e8 + 0x1d) = 5;
      *(undefined1 *)(DAT_0216e7e8 + 0x1c) = 0;
      return;
    }
    iVar2 = FUN_02161360();
    if (iVar2 == 2) {
      FUN_02161408(2);
      return;
    }
    break;
  case 3:
    iVar2 = FUN_02161334(3);
    if (iVar2 != 3) {
      *(undefined1 *)(DAT_0216e7e8 + 0x1d) = 7;
      *(undefined1 *)(DAT_0216e7e8 + 0x1c) = 0;
      return;
    }
    iVar2 = FUN_02161360();
    if (iVar2 == 3) {
      FUN_02161408(3);
    }
  }
  return;
}

