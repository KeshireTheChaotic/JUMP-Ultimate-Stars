
void FUN_0216513c(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_021639d0();
  if (uVar1 < 8) {
                    /* WARNING: Switch is manually overridden */
    switch(uVar1) {
    case 0:
      iVar2 = FUN_021646ac();
      if (iVar2 == 0) {
        *(undefined1 *)(DAT_0216e82c + 0xa90) = 0x1f;
        return;
      }
      if (iVar2 == 1) {
        FUN_02164068();
        return;
      }
      if (iVar2 != 3) {
        *(undefined1 *)(DAT_0216e82c + 0xa90) = 0x1f;
      }
      break;
    case 1:
      FUN_02163f4c(DAT_0216e82c + 0xab4,*(undefined2 *)(DAT_0216e82c + 0x64a));
      return;
    case 2:
      iVar2 = FUN_0216399c(2);
      if (iVar2 != 0) {
        *(undefined1 *)(DAT_0216e82c + 0xa90) = 5;
        return;
      }
      iVar2 = FUN_0216399c(3);
      if ((iVar2 != 0) || (iVar2 = FUN_0216399c(4), iVar2 != 0)) {
        *(undefined1 *)(DAT_0216e82c + 0xa90) = 6;
        return;
      }
      if ((*(char *)(DAT_0216e82c + 0xa90) == '\x05') && (iVar2 = FUN_0216399c(2), iVar2 == 0)) {
        *(undefined1 *)(DAT_0216e82c + 0xa90) = 0xd;
        return;
      }
      break;
    case 3:
      iVar2 = FUN_02163c88();
      if (iVar2 != 0) {
        FUN_02163bf0();
        return;
      }
      if (((byte)(*(char *)(DAT_0216e82c + 0xa90) - 6U) < 2) &&
         (iVar2 = FUN_0216399c(3), iVar2 == 0)) {
        *(undefined1 *)(DAT_0216e82c + 0xa90) = 0x12;
        return;
      }
      break;
    case 5:
      *(undefined1 *)(DAT_0216e82c + 0xa90) = 7;
      return;
    case 7:
      FUN_02163bdc();
      *(undefined1 *)(DAT_0216e82c + 0xa90) = 1;
      return;
    }
  }
  return;
}

