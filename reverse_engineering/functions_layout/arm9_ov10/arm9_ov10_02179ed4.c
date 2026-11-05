
undefined4 FUN_02179ed4(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_02178448();
  *(undefined1 *)(iVar1 + 0x17) = 0;
  iVar1 = FUN_02178448();
  *(undefined4 *)(iVar1 + 0x20) = 0;
  iVar1 = FUN_02178448();
  *(undefined1 *)(iVar1 + 0x1a0) = 0;
  iVar1 = FUN_02178448();
  if (*(int *)(iVar1 + 0x200) == 0) {
    FUN_02179f88(1);
  }
  else {
    iVar1 = FUN_02178448();
    if (*(char *)(iVar1 + 0x15) == '\0') {
      FUN_02178434(3);
      uVar2 = FUN_0217c498(0);
      iVar1 = FUN_021790e4();
      if (iVar1 != 0) {
        return uVar2;
      }
    }
    else {
      iVar1 = FUN_02178448();
      if (*(char *)(iVar1 + 0x15) == '\x01') {
        FUN_02178434(4);
        iVar1 = FUN_02178448();
        uVar2 = FUN_0217ae0c(*(undefined4 *)(iVar1 + 0x200),0);
        iVar1 = FUN_0217af70();
        if (iVar1 != 0) {
          return uVar2;
        }
      }
    }
  }
  return 0;
}

