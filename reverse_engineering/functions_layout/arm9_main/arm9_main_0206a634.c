
undefined4 FUN_0206a634(int param_1)

{
  int iVar1;
  undefined1 auStack_10 [8];
  
  if (*(byte *)(param_1 + 0xe7) == 0xff) {
    return 1;
  }
  if (2 < *(byte *)(param_1 + 0xe7)) {
    return 0;
  }
  iVar1 = FUN_0206a2a8(param_1 + 0x40);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_020024cc(param_1 + 0xc0,&DAT_02092398,4);
  if (iVar1 != 0) {
    iVar1 = FUN_0206a23c(param_1 + 0xc4);
    if (iVar1 == 0) {
      return 0;
    }
    if (0x20 < *(byte *)(param_1 + 0xd0)) {
      return 0;
    }
    FUN_0206a2c0(*(byte *)(param_1 + 0xd0),auStack_10);
    iVar1 = FUN_0206a25c(param_1 + 0xc0,auStack_10);
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar1 = FUN_020024cc(param_1 + 200,&DAT_02092398,4);
  if (((iVar1 == 0) || (iVar1 = FUN_0206a23c(param_1 + 200), iVar1 != 0)) ||
     (iVar1 = FUN_0206a23c(param_1 + 0xcc), iVar1 != 0)) {
    return 1;
  }
  return 0;
}

