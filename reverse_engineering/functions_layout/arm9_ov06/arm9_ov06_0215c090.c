
void FUN_0215c090(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_0215b158();
  if (iVar2 != 0) {
    FUN_02157450(param_1,0xf);
    *(undefined1 *)(param_1 + 0x1e8) = 0;
    *(undefined1 *)(param_1 + 0x1e9) = 0;
  }
  cVar1 = *(char *)(param_1 + 0x1e8);
  if (cVar1 == '\x12') {
    FUN_0215c070(*(undefined4 *)(param_1 + 0x1a8),0);
    cVar1 = *(char *)(param_1 + 0x1e9);
    if (cVar1 == '\x01') {
      *(undefined2 *)(*(int *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x5c) + 0x2e) = 0xf500;
    }
    else if (cVar1 == '\x02') {
      iVar2 = FUN_0215b62c(*(undefined4 *)(param_1 + 0x1a8));
      if (iVar2 == 0) {
        *(undefined2 *)(*(int *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x5c) + 0x2c) = 0xc00;
      }
      else {
        *(undefined2 *)(*(int *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x5c) + 0x2c) = 0xf400
        ;
      }
    }
    else if (cVar1 == '\x03') {
      iVar2 = FUN_0215b62c(*(undefined4 *)(param_1 + 0x1a8));
      if (iVar2 == 0) {
        *(undefined2 *)(*(int *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x5c) + 0x2c) = 0xf400
        ;
      }
      else {
        *(undefined2 *)(*(int *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x5c) + 0x2c) = 0xc00;
      }
    }
    *(char *)(param_1 + 0x1e8) = *(char *)(param_1 + 0x1e8) + '\x01';
    return;
  }
  if (cVar1 == '\x1c') {
    iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x5c);
    *(undefined2 *)(iVar2 + 0x24) = 0;
    *(undefined2 *)(iVar2 + 0x26) = 0;
    FUN_0215f3c0(*(undefined4 *)(param_1 + 0x1a0),1);
    *(undefined2 *)(param_1 + 0xce) = 10;
    iVar2 = FUN_0215dec8(param_1);
    if (iVar2 == 0) {
      FUN_0215d2e4(param_1);
      return;
    }
    return;
  }
  *(char *)(param_1 + 0x1e8) = cVar1 + '\x01';
  if (*(char *)(param_1 + 0x1e8) < '\t') {
    return;
  }
  if ('\x11' < *(char *)(param_1 + 0x1e8)) {
    return;
  }
  if ((*(uint *)(param_1 + 0x6c) & 0xd) == 0) {
    return;
  }
  if ((*(uint *)(param_1 + 0x6c) & 1) != 0) {
    *(undefined1 *)(param_1 + 0x1e9) = 1;
  }
  iVar2 = FUN_0215a824(param_1);
  if (iVar2 != 0) {
    *(undefined1 *)(param_1 + 0x1e9) = 2;
  }
  iVar2 = FUN_0215a880(param_1);
  if (iVar2 != 0) {
    *(undefined1 *)(param_1 + 0x1e9) = 3;
  }
  return;
}

