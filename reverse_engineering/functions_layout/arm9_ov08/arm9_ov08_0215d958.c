
void FUN_0215d958(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(DAT_0216e794 + 0x38) == 0) {
    if (*(char *)(DAT_0216e794 + 0x41) != '\0') {
      *(char *)(DAT_0216e794 + 0x41) = *(char *)(DAT_0216e794 + 0x41) + -1;
    }
    uVar1 = FUN_0216163c();
    if (uVar1 < 8) {
                    /* WARNING: Switch is manually overridden */
      switch(uVar1) {
      case 1:
        *(undefined1 *)(DAT_0216e794 + 0x45) = 1;
        return;
      case 2:
        if (*(char *)(DAT_0216e794 + 0x41) == '\0') {
          FUN_021547b8();
          iVar2 = FUN_02161648();
          DAT_0216e790 = FUN_0200d12c(iVar2 * 0x91,0x37);
          FUN_0215d660();
          *(undefined1 *)(DAT_0216e794 + 0x41) = 4;
          return;
        }
        break;
      case 3:
        *(undefined1 *)(DAT_0216e794 + 0x45) = 0;
        iVar2 = FUN_02161648();
        DAT_0216e790 = FUN_0200d12c(iVar2 * 0x91,0x37);
        FUN_02162378(0x13);
        FUN_0215d660();
        iVar2 = FUN_02050750(DAT_0216e790,0x1d);
        if (iVar2 == 0) {
          FUN_0215cc8c();
          return;
        }
        if (iVar2 < 0x10) {
          uVar3 = FUN_02167814(0,0x215ce65,0,0x78);
          *(undefined4 *)(DAT_0216e794 + 0x38) = uVar3;
          return;
        }
        uVar3 = FUN_02167814(0,0x215ce01,0,0x78);
        *(undefined4 *)(DAT_0216e794 + 0x38) = uVar3;
        return;
      case 4:
        if (DAT_0216e790 != 0) {
          FUN_02162378(0x13);
          uVar3 = FUN_02167814(0,0x215ce65,0,0x78);
          *(undefined4 *)(DAT_0216e794 + 0x38) = uVar3;
          return;
        }
        if (*(char *)(DAT_0216e794 + 0x46) == '\0') {
          FUN_02162378(9);
          *(undefined1 *)(DAT_0216e794 + 0x46) = 1;
          return;
        }
        break;
      case 5:
        *(undefined1 *)(DAT_0216e794 + 0x46) = 0;
        break;
      case 6:
        if (DAT_0216e790 != 0x91) {
          FUN_02162378(0x13);
          uVar3 = FUN_02167814(0,0x215ce01,0,0x78);
          *(undefined4 *)(DAT_0216e794 + 0x38) = uVar3;
          return;
        }
        if (*(char *)(DAT_0216e794 + 0x46) == '\0') {
          FUN_02162378(9);
          *(undefined1 *)(DAT_0216e794 + 0x46) = 1;
          return;
        }
      }
    }
  }
  return;
}

