
undefined4 FUN_0215c824(int param_1)

{
  char cVar1;
  int iVar2;
  
  if ((*(char *)(param_1 + 0x1e8) < 'V') &&
     (iVar2 = FUN_0215ba28(*(undefined4 *)(param_1 + 0x1a8)), iVar2 == 0)) {
    FUN_02157450(param_1,0x10);
    *(undefined1 *)(param_1 + 0x1e8) = 0x5a;
  }
  cVar1 = *(char *)(param_1 + 0x1e8);
  if (cVar1 < '.') {
    if (',' < cVar1) {
      FUN_02157450(param_1,0xf);
      FUN_0207ce7c(*(undefined4 *)(*(int *)(param_1 + 0x1a8) + 0x10),0x20000000);
      *(char *)(param_1 + 0x1e8) = *(char *)(param_1 + 0x1e8) + '\x01';
      return 0;
    }
    if (cVar1 < '\x01') {
      if (cVar1 == '\0') {
        iVar2 = FUN_0215ba28(*(undefined4 *)(param_1 + 0x1a8));
        if (iVar2 == 0) {
          FUN_02157450(param_1,0x10);
          *(undefined1 *)(param_1 + 0x1e8) = 0x5a;
          return 0;
        }
        FUN_02157450(param_1,0xc);
        *(undefined1 *)(param_1 + 0x1e8) = 5;
        return 0;
      }
    }
    else if (cVar1 == '\x05') {
      *(undefined1 *)(param_1 + 0x1e8) = 6;
      return 0;
    }
  }
  else if (cVar1 < '\\') {
    if ('T' < cVar1) {
      if (cVar1 == 'U') {
        iVar2 = FUN_0215aea0(*(undefined4 *)(param_1 + 0x1a8));
        if (iVar2 == 0) {
          return 1;
        }
        if ((int)*(char *)(param_1 + 0x1e0) == (uint)*(byte *)(DAT_02172968 + 0x30)) {
          *(byte *)(DAT_02172968 + 0x2e) = *(byte *)(DAT_02172968 + 0x2e) | 1;
        }
        *(undefined1 *)(param_1 + 0x1e8) = 0x5b;
        return 0;
      }
      if (cVar1 == 'Z') {
        iVar2 = FUN_0215aea0(*(undefined4 *)(param_1 + 0x1a8));
        if (iVar2 != 0) {
          if ((int)*(char *)(param_1 + 0x1e0) == (uint)*(byte *)(DAT_02172968 + 0x30)) {
            *(byte *)(DAT_02172968 + 0x2e) = *(byte *)(DAT_02172968 + 0x2e) | 1;
          }
          *(undefined1 *)(param_1 + 0x1e8) = 0x5b;
          return 0;
        }
        iVar2 = FUN_0215ba28(*(undefined4 *)(param_1 + 0x1a8));
        if (iVar2 == 0) {
          return 0;
        }
        *(undefined1 *)(param_1 + 0x1e8) = 0x2d;
        return 0;
      }
      if (cVar1 == '[') {
        *(undefined1 *)(param_1 + 0x1e8) = 0x5c;
        return 0;
      }
    }
  }
  else if (cVar1 == '|') {
    FUN_02157024(param_1);
    FUN_02161888(*(undefined4 *)(param_1 + 0x1b8));
    if ((int)*(char *)(param_1 + 0x1e0) == (uint)*(byte *)(DAT_02172968 + 0x30)) {
      *(byte *)(DAT_02172968 + 0x2e) = *(byte *)(DAT_02172968 + 0x2e) & 0xfe;
    }
    *(undefined1 *)(param_1 + 0x1e8) = 0x2d;
    return 0;
  }
  *(char *)(param_1 + 0x1e8) = *(char *)(param_1 + 0x1e8) + '\x01';
  return 0;
}

