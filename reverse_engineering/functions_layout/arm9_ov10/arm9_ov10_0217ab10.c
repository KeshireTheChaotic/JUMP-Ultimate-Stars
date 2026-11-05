
undefined4 FUN_0217ab10(undefined4 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_02178448();
  *(undefined4 *)(iVar1 + 0x200) = 0;
  iVar1 = FUN_02178448();
  *(undefined4 *)(iVar1 + 0x1fc) = 0;
  iVar1 = FUN_02178448();
  *(undefined1 *)(iVar1 + 0x19f) = 0;
  iVar1 = FUN_02178448();
  uVar2 = FUN_02054b44();
  *(undefined8 *)(iVar1 + 0x1c4) = uVar2;
  iVar1 = FUN_02178448();
  if (*(char *)(iVar1 + 0x15) == '\0') {
    FUN_02178434(3);
    FUN_0217c498(0);
    iVar1 = FUN_021790e4();
    if (iVar1 != 0) {
      return 0;
    }
  }
  else {
    iVar1 = FUN_02178448();
    if (*(char *)(iVar1 + 0x15) == '\x01') {
      FUN_0217abc4(0,0,param_1);
      iVar1 = FUN_0217af70();
      if (iVar1 != 0) {
        return 0;
      }
    }
    else {
      iVar1 = FUN_02178448();
      if (*(char *)(iVar1 + 0x15) == '\x03') {
        FUN_0217d118(6,0xfffec5e6);
        return 0;
      }
    }
  }
  return 1;
}

