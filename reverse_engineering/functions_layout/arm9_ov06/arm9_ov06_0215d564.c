
void FUN_0215d564(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0215d4e0();
  if (iVar1 != 0) {
    FUN_0215d53c(param_1);
    *(undefined1 *)(param_1 + 0x1e8) = *(undefined1 *)(param_1 + 0xdb);
    *(undefined1 *)(param_1 + 0xdb) = 0;
    iVar1 = FUN_021613c4(param_1 + 0x1c,2,4);
    if (iVar1 != 0) {
      *(char *)(param_1 + 0x1e8) = *(char *)(param_1 + 0x1e8) >> 1;
      FUN_0215d6a0(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1a0) + 0x174) + 4),0x10);
    }
    *(undefined1 *)(param_1 + 0x1e9) = 4;
  }
  iVar1 = FUN_0215d6c0(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1a0) + 0x174) + 4));
  if (iVar1 != 0) {
    if (*(char *)(param_1 + 0x1e9) == '\0') {
      iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x1a0) + 0x174) + 4);
      *(undefined1 *)(iVar1 + 0x5c) = 0;
      *(undefined4 *)(iVar1 + 0x54) = 0xffffffff;
    }
    else {
      *(char *)(param_1 + 0x1e9) = *(char *)(param_1 + 0x1e9) + -1;
    }
  }
  iVar1 = FUN_0215dec8(param_1);
  if (iVar1 != 0) {
    return;
  }
  iVar1 = FUN_02159d7c(param_1,2);
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0x1e6) = 0;
    return;
  }
  iVar1 = FUN_02159d7c(param_1,0);
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0x1e6) = 0;
    return;
  }
  if (*(char *)(param_1 + 0x1e8) == '\0') {
    *(undefined1 *)(param_1 + 0x1ec) = 0;
    *(undefined1 *)(param_1 + 0x1e6) = 2;
    FUN_0215d2e4(param_1);
    return;
  }
  *(char *)(param_1 + 0x1e8) = *(char *)(param_1 + 0x1e8) + -1;
  *(undefined1 *)(param_1 + 0x1ec) = 1;
  return;
}

