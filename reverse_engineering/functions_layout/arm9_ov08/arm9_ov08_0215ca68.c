
/* WARNING: Removing unreachable block (ram,0x0215ca98) */

void FUN_0215ca68(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar2 = FUN_021622d4();
  bVar1 = false;
  uVar4 = (uint)DAT_0216e784;
  if ((uVar4 == 8) && (*(char *)(iVar2 + 0xf5) == '\0')) {
    if (param_1 == 0) {
      return;
    }
    if (param_1 == 2) {
      return;
    }
  }
  if (uVar4 == 0) {
    if (param_1 == 1) {
      DAT_0216e784 = 0xb;
    }
    else if (param_1 == 3) {
      DAT_0216e78c = DAT_0216e78c + 1;
    }
    else {
      bVar1 = true;
    }
  }
  else if (uVar4 - 10 < 4) {
                    /* WARNING: Switch is manually overridden */
    switch(uVar4 - 10) {
    case 0:
      if (param_1 == 1) {
        DAT_0216e78c = DAT_0216e78c - 1;
      }
      else if (param_1 == 3) {
        DAT_0216e784 = *(byte *)(DAT_0216e794 + 0x42);
      }
      else {
        bVar1 = true;
      }
      break;
    case 1:
      if (param_1 == 1) {
        if (*(char *)(DAT_0216e794 + 0x47) == '\0') {
          FUN_02162378(9);
          *(undefined1 *)(DAT_0216e794 + 0x47) = 1;
          return;
        }
        return;
      }
      if (param_1 == 3) {
        DAT_0216e784 = 0;
        DAT_0216e78c = 0;
        DAT_0216e790 = 0;
        FUN_0215d660();
        thunk_FUN_02161290(0);
      }
      else {
        bVar1 = true;
      }
      break;
    case 2:
      *(byte *)(DAT_0216e794 + 0x42) = DAT_0216e784;
      if (param_1 == 1) {
        DAT_0216e784 = 10;
        DAT_0216e78c = 3;
        DAT_0216e790 = 0x91;
        FUN_0215d660();
        thunk_FUN_02161290(0x37);
      }
      else {
        if (param_1 == 3) {
          if (*(char *)(DAT_0216e794 + 0x47) == '\0') {
            FUN_02162378(9);
            *(undefined1 *)(DAT_0216e794 + 0x47) = 1;
            return;
          }
          return;
        }
        if (uVar4 == 0xc) {
          DAT_0216e784 = 0xd;
        }
        else {
          DAT_0216e784 = 0xc;
        }
      }
    }
  }
  else if (param_1 == 1) {
    if (DAT_0216e78c == 0) {
      FUN_02162378(0x13);
      uVar3 = FUN_02167814(0,0x215ce65,0,0x78);
      *(undefined4 *)(DAT_0216e794 + 0x38) = uVar3;
      return;
    }
    DAT_0216e78c = DAT_0216e78c - 1;
  }
  else if (param_1 == 3) {
    if (2 < DAT_0216e78c) {
      FUN_02162378(0x13);
      uVar3 = FUN_02167814(0,0x215ce01,0,0x78);
      *(undefined4 *)(DAT_0216e794 + 0x38) = uVar3;
      return;
    }
    DAT_0216e78c = DAT_0216e78c + 1;
  }
  else {
    bVar1 = true;
    if (uVar4 == 2) {
      DAT_0216e784 = 3;
    }
    else if (uVar4 == 3) {
      DAT_0216e784 = 2;
    }
    else if (uVar4 == 7) {
      DAT_0216e784 = 8;
    }
    else {
      if (uVar4 != 8) goto LAB_0215cc34;
      DAT_0216e784 = 7;
    }
    FUN_02162378(8);
    FUN_0215cd10();
  }
LAB_0215cc34:
  if (!bVar1) {
    FUN_02162378(8);
    FUN_0215cc8c();
  }
  return;
}

