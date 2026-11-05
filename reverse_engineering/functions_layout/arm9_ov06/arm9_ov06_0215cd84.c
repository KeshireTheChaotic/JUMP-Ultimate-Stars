
void FUN_0215cd84(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0215b158();
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0x1e8) = 0;
    *(undefined1 *)(param_1 + 0x1e7) = 1;
    *(undefined1 *)(param_1 + 0x76) = 0;
    iVar1 = *(int *)(param_1 + 0x1b4);
    *(undefined1 *)(iVar1 + 0x5f3) = 0;
    *(undefined1 *)(iVar1 + 0x5f5) = 0;
    *(undefined1 *)(iVar1 + 0x5f6) = 0;
  }
  iVar1 = FUN_0215c824(param_1);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = FUN_02087724();
  if (iVar1 == 2) {
    return;
  }
  if (*(char *)(param_1 + 0x1eb) == '\0') {
    return;
  }
  if ((*(uint *)(param_1 + 0x6c) & 0xf) == 0) {
    *(undefined1 *)(param_1 + 0x1e7) = 1;
    return;
  }
  if (*(char *)(param_1 + 0x1e7) == '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x1e7) = 0;
  FUN_02152028();
  return;
}

