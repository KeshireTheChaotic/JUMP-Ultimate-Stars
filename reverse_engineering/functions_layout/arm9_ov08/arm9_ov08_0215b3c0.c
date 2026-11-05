
undefined4 FUN_0215b3c0(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_10;
  int local_c [3];
  
  FUN_02157038(&local_10,local_c);
  if (local_c[0] == 1) {
    FUN_02154588(0x35,0xffffffff);
  }
  FUN_02157038(&local_10,local_c);
  if (local_10 == 0) {
    if (*(char *)(DAT_0216e778 + 8) == '\0') {
      return 0;
    }
    return 1;
  }
  if ((local_c[0] == 1) && (*(char *)(DAT_0216e778 + 8) == '\0')) {
    return 0;
  }
  iVar2 = FUN_02167538(DAT_0216e778 + 8,0x20);
  if (iVar2 < 0x11) {
    if (iVar2 < 10) {
      if (iVar2 < 1) {
        if (iVar2 == 0) {
          return 1;
        }
      }
      else if (iVar2 == 5) {
        return 1;
      }
    }
    else {
      if (iVar2 == 10) goto LAB_0215b45e;
      if (iVar2 == 0xd) {
        return 1;
      }
      if (iVar2 == 0x10) {
        return 1;
      }
    }
  }
  else if (iVar2 < 0x1b) {
    if (iVar2 == 0x1a) {
LAB_0215b45e:
      iVar4 = 0;
      if (0 < iVar2) {
        iVar3 = DAT_0216e778;
        do {
          bVar1 = *(byte *)(iVar3 + 8);
          if ((((bVar1 < 0x30) || (0x39 < bVar1)) && ((bVar1 < 0x41 || (0x46 < bVar1)))) &&
             ((bVar1 < 0x61 || (0x66 < bVar1)))) {
            return 0;
          }
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar2);
      }
      return 1;
    }
  }
  else if (iVar2 == 0x20) goto LAB_0215b45e;
  return 0;
}

