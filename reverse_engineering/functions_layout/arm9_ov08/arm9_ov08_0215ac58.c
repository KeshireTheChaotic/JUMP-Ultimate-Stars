
void FUN_0215ac58(void)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(DAT_0216e774 + 0x38) == 0) {
    if (*(char *)(DAT_0216e774 + 0x55) != '\0') {
      *(char *)(DAT_0216e774 + 0x55) = *(char *)(DAT_0216e774 + 0x55) + -1;
    }
    uVar1 = FUN_0216163c();
    switch(uVar1) {
    case 1:
      *(undefined1 *)(DAT_0216e774 + 0x57) = 1;
      FUN_02154424();
      return;
    case 2:
      if (*(char *)(DAT_0216e774 + 0x55) == '\0') {
        FUN_021547b8();
        iVar2 = FUN_02161648();
        DAT_0216e770 = FUN_020507a8(iVar2 * (uint)*(ushort *)(DAT_0216e774 + 0x40),
                                    *(undefined1 *)(DAT_0216e774 + 0x53));
        FUN_0215a93c();
        *(undefined1 *)(DAT_0216e774 + 0x55) = 4;
        return;
      }
      break;
    case 3:
      *(undefined1 *)(DAT_0216e774 + 0x57) = 0;
      FUN_02154434();
      iVar2 = FUN_02161648();
      DAT_0216e770 = FUN_020507a8(iVar2 * (uint)*(ushort *)(DAT_0216e774 + 0x40),
                                  *(undefined1 *)(DAT_0216e774 + 0x53));
      FUN_02162378(0x13);
      FUN_0215a93c();
      iVar2 = FUN_02050750(DAT_0216e770,0x1c);
      if (iVar2 == 0) {
        FUN_0215a600();
        return;
      }
      if (iVar2 < 0xe) {
        uVar1 = FUN_02167814(0,0x215a6f1,0,0x78);
        *(undefined4 *)(DAT_0216e774 + 0x38) = uVar1;
        return;
      }
      uVar1 = FUN_02167814(0,0x215a681,0,0x78);
      *(undefined4 *)(DAT_0216e774 + 0x38) = uVar1;
      return;
    case 4:
      if (DAT_0216e770 != 0) {
        FUN_02162378(0x13);
        uVar1 = FUN_02167814(0,0x215a6f1,0,0x78);
        *(undefined4 *)(DAT_0216e774 + 0x38) = uVar1;
        return;
      }
      if (*(char *)(DAT_0216e774 + 0x58) == '\0') {
        FUN_02162378(9);
        *(undefined1 *)(DAT_0216e774 + 0x58) = 1;
        return;
      }
      break;
    case 5:
    case 7:
      *(undefined1 *)(DAT_0216e774 + 0x58) = 0;
      break;
    case 6:
      if ((4 < *(byte *)(DAT_0216e774 + 0x51)) && (DAT_0216e770 != *(short *)(DAT_0216e774 + 0x40)))
      {
        FUN_02162378(0x13);
        uVar1 = FUN_02167814(0,0x215a681,0,0x78);
        *(undefined4 *)(DAT_0216e774 + 0x38) = uVar1;
        return;
      }
      if (*(char *)(DAT_0216e774 + 0x58) == '\0') {
        FUN_02162378(9);
        *(undefined1 *)(DAT_0216e774 + 0x58) = 1;
        return;
      }
    }
  }
  return;
}

