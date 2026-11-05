
void FUN_0215b40c(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x11e) == '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x11e) = 0;
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x1a0) + 0x174) + 4);
  *(undefined1 *)(iVar1 + 0x5c) = 0;
  *(undefined4 *)(iVar1 + 0x54) = 0xffffffff;
  return;
}

