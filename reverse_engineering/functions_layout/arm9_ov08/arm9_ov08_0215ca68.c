
/* WARNING: Removing unreachable block (ram,0x0215ca98) */

void FUN_0215ca68(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = FUN_021622d4();
  cVar2 = DAT_0216e784;
  bVar1 = false;
  if ((DAT_0216e784 == '\b') && (*(char *)(iVar3 + 0xf5) == '\0')) {
    if (param_1 == 0) {
      return;
    }
    if (param_1 == 2) {
      return;
    }
  }
  if (DAT_0216e784 == '\0') {
    if (param_1 == 1) {
      DAT_0216e784 = '\v';
    }
    else if (param_1 == 3) {
      DAT_0216e78c = DAT_0216e78c + 1;
    }
    else {
      bVar1 = true;
    }
  }
  else {
    switch(DAT_0216e784) {
    case '\n':
      if (param_1 == 1) {
        DAT_0216e78c = DAT_0216e78c - 1;
      }
      else if (param_1 == 3) {
        DAT_0216e784 = *(char *)(DAT_0216e794 + 0x42);
      }
      else {
        bVar1 = true;
      }
      break;
    case '\v':
      if (param_1 == 1) {
        if (*(char *)(DAT_0216e794 + 0x47) == '\0') {
          FUN_02162378(9);
          *(undefined1 *)(DAT_0216e794 + 0x47) = 1;
          return;
        }
        return;
      }
      if (param_1 == 3) {
        DAT_0216e784 = '\0';
        DAT_0216e78c = 0;
        DAT_0216e790 = 0;
        FUN_0215d660();
        thunk_FUN_02161290(0);
      }
      else {
        bVar1 = true;
      }
      break;
    case '\f':
    case '\r':
      *(char *)(DAT_0216e794 + 0x42) = DAT_0216e784;
      if (param_1 == 1) {
        DAT_0216e784 = '\n';
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
        if (cVar2 == '\f') {
          DAT_0216e784 = '\r';
        }
        else {
          DAT_0216e784 = '\f';
        }
      }
      break;
    default:
      if (param_1 == 1) {
        if (DAT_0216e78c == 0) {
          FUN_02162378(0x13);
          uVar4 = FUN_02167814(0,0x215ce65,0,0x78);
          *(undefined4 *)(DAT_0216e794 + 0x38) = uVar4;
          return;
        }
        DAT_0216e78c = DAT_0216e78c - 1;
      }
      else if (param_1 == 3) {
        if (2 < DAT_0216e78c) {
          FUN_02162378(0x13);
          uVar4 = FUN_02167814(0,0x215ce01,0,0x78);
          *(undefined4 *)(DAT_0216e794 + 0x38) = uVar4;
          return;
        }
        DAT_0216e78c = DAT_0216e78c + 1;
      }
      else {
        bVar1 = true;
        if (DAT_0216e784 == '\x02') {
          DAT_0216e784 = '\x03';
        }
        else if (DAT_0216e784 == '\x03') {
          DAT_0216e784 = '\x02';
        }
        else if (DAT_0216e784 == '\a') {
          DAT_0216e784 = '\b';
        }
        else {
          if (DAT_0216e784 != '\b') break;
          DAT_0216e784 = '\a';
        }
        FUN_02162378(8);
        FUN_0215cd10();
      }
    }
  }
  if (!bVar1) {
    FUN_02162378(8);
    FUN_0215cc8c();
  }
  return;
}

