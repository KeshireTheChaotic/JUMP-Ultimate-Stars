
undefined4 FUN_021940c4(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xc);
  FUN_0219445c();
  do {
    iVar1 = FUN_02194950(param_1);
    if (iVar1 == 9) {
      return 1;
    }
  } while ((iVar1 != 4) && (*(char *)(iVar2 + 0x31) == '\0'));
  if (*(char *)(iVar2 + 0x31) == '\0') {
    FUN_02194288(param_1);
    FUN_0219538c(iVar2);
    if (*(char *)(iVar2 + 0x30) != '\0') {
      FUN_0219627c(iVar2,*(undefined4 *)(param_1 + 0x1c),*(undefined2 *)(param_1 + 0x18));
    }
    FUN_0219520c(iVar2);
    FUN_02194580(param_1);
    iVar1 = FUN_02194258(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  else {
    FUN_0219520c(iVar2);
    iVar1 = FUN_02194258(param_1);
    if (iVar1 != 0) {
      return 1;
    }
    FUN_02194580(param_1);
  }
  *(undefined1 *)(iVar2 + 0x455) = 8;
  return 0;
}

