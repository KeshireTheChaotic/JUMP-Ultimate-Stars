
void FUN_0217a168(void)

{
  int iVar1;
  
  iVar1 = FUN_02178448();
  *(undefined4 *)(iVar1 + 0x204) = 0;
  iVar1 = FUN_02178448();
  if (*(int *)(iVar1 + 0x198) == 2) {
    FUN_0217a0cc();
    return;
  }
  iVar1 = FUN_02178448();
  *(undefined1 *)(iVar1 + 0x1a1) = 1;
  iVar1 = FUN_02178448();
  if (*(char *)(iVar1 + 0x15) == '\x03') {
    iVar1 = FUN_02178448();
    *(undefined1 *)(iVar1 + 0x1a1) = 1;
    iVar1 = FUN_02178448();
    if (*(char *)(iVar1 + 0xd) == '\0') {
      iVar1 = FUN_02178448();
      FUN_0217aad4(*(undefined4 *)(iVar1 + 0xf4));
      iVar1 = FUN_0217af70();
      if (iVar1 != 0) {
        return;
      }
    }
    else {
      iVar1 = FUN_02178448();
      FUN_0218a888(**(undefined4 **)(iVar1 + 4));
    }
    FUN_0217a0cc();
    return;
  }
  iVar1 = FUN_02178448();
  if ((((*(int *)(iVar1 + 0x198) == 4) || (iVar1 = FUN_02178448(), *(int *)(iVar1 + 0x198) == 5)) ||
      (iVar1 = FUN_02178448(), *(int *)(iVar1 + 0x198) == 6)) ||
     (((iVar1 = FUN_02178448(), *(int *)(iVar1 + 0x198) == 7 ||
       (iVar1 = FUN_02178448(), *(int *)(iVar1 + 0x198) == 0xb)) ||
      (iVar1 = FUN_02178448(), *(int *)(iVar1 + 0x198) == 0xc)))) {
    iVar1 = FUN_02178448();
    if (*(int *)(iVar1 + 0x1fc) != 0) {
      iVar1 = FUN_02178448();
      FUN_0217aad4(*(undefined4 *)(iVar1 + 0xf4));
      iVar1 = FUN_0217af70();
      if (iVar1 != 0) {
        return;
      }
    }
    FUN_0217a03c();
    iVar1 = FUN_0217af70();
    if (iVar1 != 0) {
      return;
    }
  }
  iVar1 = FUN_02178448();
  if (*(int *)(iVar1 + 0x194) != 0) {
    iVar1 = FUN_02178448();
    FUN_0218c8bc(*(undefined4 *)(iVar1 + 0x194));
    iVar1 = FUN_02178448();
    *(undefined4 *)(iVar1 + 0x194) = 0;
  }
  iVar1 = FUN_02178448();
  if (*(char *)(iVar1 + 0xd) != '\0') {
    iVar1 = FUN_02178448();
    *(undefined1 *)(iVar1 + 0x1a1) = 1;
    iVar1 = FUN_02178448();
    FUN_0218a888(**(undefined4 **)(iVar1 + 4));
  }
  FUN_0217a0cc();
  return;
}

