
void FUN_0215a514(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  
  bVar1 = true;
  uVar3 = (uint)DAT_0216e76c;
  if (uVar3 < 5) {
                    /* WARNING: Switch is manually overridden */
    switch(uVar3) {
    case 0:
      if (param_1 == 1) {
        if (DAT_0216e770 != 0) {
          FUN_02162378(0x13);
          uVar2 = FUN_02167814(0,0x215a6f1,0,0x78);
          *(undefined4 *)(DAT_0216e774 + 0x38) = uVar2;
          return;
        }
        DAT_0216e76c = 4;
      }
      else if (*(byte *)(DAT_0216e774 + 0x51) < 2) {
        bVar1 = false;
      }
      else {
        DAT_0216e76c = DAT_0216e76c + 1;
      }
      break;
    default:
      if (param_1 == 1) {
        DAT_0216e76c = DAT_0216e76c - 1;
      }
      else if (uVar3 + 1 < (uint)*(byte *)(DAT_0216e774 + 0x51)) {
        DAT_0216e76c = (byte)(uVar3 + 1);
      }
      else {
        bVar1 = false;
      }
      break;
    case 3:
      if (param_1 != 1) {
        FUN_0215a45c();
        return;
      }
      DAT_0216e76c = DAT_0216e76c - 1;
      break;
    case 4:
      if (param_1 == 1) {
        bVar1 = false;
      }
      else {
        DAT_0216e770 = 0;
        DAT_0216e76c = 0;
        FUN_0215a93c();
        thunk_FUN_02161290(0);
      }
    }
  }
  if (bVar1) {
    FUN_02162378(8);
    FUN_0215a600();
  }
  else if (*(char *)(DAT_0216e774 + 0x59) == '\0') {
    FUN_02162378(9);
    *(undefined1 *)(DAT_0216e774 + 0x59) = 1;
    return;
  }
  return;
}

