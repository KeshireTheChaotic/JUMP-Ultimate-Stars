
void FUN_0215ae2c(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  
  if ((*(int *)(DAT_0216e774 + 0x38) == 0) && (*(char *)(DAT_0216e774 + 0x57) == '\0')) {
    iVar1 = FUN_02166d70(&DAT_0216af00);
    if (iVar1 != 0) {
      uVar3 = 0;
      *(undefined1 *)(DAT_0216e774 + 0x50) = 0xff;
      puVar4 = &DAT_0216a9a0;
      do {
        iVar1 = FUN_02166d70(puVar4);
        if (iVar1 != 0) {
          if (3 < (int)uVar3) {
            FUN_02154470(1);
            DAT_0216e76c = (char)uVar3;
            FUN_0215a600();
            return;
          }
          *(char *)(DAT_0216e774 + 0x50) = (char)uVar3;
          break;
        }
        puVar4 = puVar4 + 8;
        uVar3 = uVar3 + 1;
      } while (uVar3 < 5);
    }
    iVar1 = FUN_02166cd8(&DAT_0216af00);
    if (iVar1 != 0) {
      iVar1 = 0;
      puVar4 = &DAT_0216a9a0;
      do {
        iVar2 = FUN_02166cd8(puVar4);
        if (iVar2 != 0) {
          if (*(char *)(DAT_0216e774 + 0x50) == iVar1) {
            if (iVar1 < (int)(uint)*(byte *)(DAT_0216e774 + 0x51)) {
              FUN_02154470(1);
              DAT_0216e76c = (undefined1)iVar1;
              FUN_0215a600();
              return;
            }
            FUN_02162378(9);
          }
          break;
        }
        puVar4 = puVar4 + 8;
        iVar1 = iVar1 + 1;
      } while (iVar1 < 4);
    }
    iVar1 = FUN_02166e40(1);
    if (iVar1 != 0) {
      FUN_02154470(1);
      FUN_02161614();
      return;
    }
    iVar1 = FUN_02166e40(2);
    if (iVar1 != 0) {
      FUN_02154470(0);
      return;
    }
    iVar1 = FUN_02166e24(0x200);
    if (iVar1 != 0) {
      FUN_0215a45c();
      return;
    }
    iVar1 = FUN_02166e08(0x200);
    if (iVar1 != 0) {
      *(undefined1 *)(DAT_0216e774 + 0x59) = 0;
      return;
    }
    iVar1 = FUN_02166e24(0x100);
    if (iVar1 != 0) {
      FUN_0215a4c0();
      return;
    }
    iVar1 = FUN_02166e08(0x100);
    if (iVar1 != 0) {
      *(undefined1 *)(DAT_0216e774 + 0x59) = 0;
      return;
    }
    iVar1 = FUN_02166e24(0x40);
    if (iVar1 != 0) {
      FUN_0215a514(1);
      return;
    }
    iVar1 = FUN_02166e08(0x40);
    if (iVar1 != 0) {
      *(undefined1 *)(DAT_0216e774 + 0x59) = 0;
      return;
    }
    iVar1 = FUN_02166e24(0x80);
    if (iVar1 != 0) {
      FUN_0215a514(3);
      return;
    }
    iVar1 = FUN_02166e08(0x80);
    if (iVar1 != 0) {
      *(undefined1 *)(DAT_0216e774 + 0x59) = 0;
    }
  }
  return;
}

