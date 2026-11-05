
void FUN_0215dcdc(void)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*(int *)(DAT_0216e794 + 0x38) == 0) && (*(char *)(DAT_0216e794 + 0x45) == '\0')) &&
     (iVar1 = FUN_0215dc80(), iVar1 == 0)) {
    iVar1 = FUN_02166e40(1);
    if (iVar1 != 0) {
      FUN_0215db78(DAT_0216e784);
      return;
    }
    iVar1 = FUN_02166e40(2);
    if (iVar1 != 0) {
      FUN_02162378(7);
      *(undefined1 *)(DAT_0216e794 + 0x40) = 0xd;
      FUN_02157088(0x215d93d);
      return;
    }
    iVar1 = FUN_02166e24(0x200);
    if (iVar1 == 0) {
      iVar1 = FUN_02166e08(0x200);
      if (iVar1 != 0) {
        *(undefined1 *)(DAT_0216e794 + 0x47) = 0;
        return;
      }
      iVar1 = FUN_02166e24(0x100);
      if (iVar1 == 0) {
        iVar1 = FUN_02166e08(0x100);
        if (iVar1 != 0) {
          *(undefined1 *)(DAT_0216e794 + 0x47) = 0;
          return;
        }
        iVar1 = FUN_02166e24(0x40);
        if (iVar1 != 0) {
          FUN_0215ca68(1);
          return;
        }
        iVar1 = FUN_02166e08(0x40);
        if (iVar1 != 0) {
          *(undefined1 *)(DAT_0216e794 + 0x47) = 0;
          return;
        }
        iVar1 = FUN_02166e24(0x80);
        if (iVar1 != 0) {
          FUN_0215ca68(3);
          return;
        }
        iVar1 = FUN_02166e08(0x80);
        if (iVar1 != 0) {
          *(undefined1 *)(DAT_0216e794 + 0x47) = 0;
          return;
        }
        iVar1 = FUN_02166e24(0x20);
        if (iVar1 != 0) {
          FUN_0215ca68(0);
          return;
        }
        iVar1 = FUN_02166e24(0x10);
        if (iVar1 != 0) {
          FUN_0215ca68(2);
        }
      }
      else {
        if (DAT_0216e790 != 0) {
          FUN_02162378(0x13);
          uVar2 = FUN_02167814(0,0x215ce65,0,0x78);
          *(undefined4 *)(DAT_0216e794 + 0x38) = uVar2;
          return;
        }
        if (*(char *)(DAT_0216e794 + 0x47) == '\0') {
          FUN_02162378(9);
          *(undefined1 *)(DAT_0216e794 + 0x47) = 1;
          return;
        }
      }
    }
    else {
      if (DAT_0216e790 != 0x91) {
        FUN_02162378(0x13);
        uVar2 = FUN_02167814(0,0x215ce01,0,0x78);
        *(undefined4 *)(DAT_0216e794 + 0x38) = uVar2;
        return;
      }
      if (*(char *)(DAT_0216e794 + 0x47) == '\0') {
        FUN_02162378(9);
        *(undefined1 *)(DAT_0216e794 + 0x47) = 1;
        return;
      }
    }
  }
  return;
}

