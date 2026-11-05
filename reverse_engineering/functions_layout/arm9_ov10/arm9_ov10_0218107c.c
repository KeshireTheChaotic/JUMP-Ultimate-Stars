
void FUN_0218107c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x480)) {
    iVar1 = param_1;
    do {
      FUN_021816f8(param_1,*(undefined4 *)(iVar1 + 0x84));
      iVar1 = iVar1 + 4;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x480));
  }
  *(undefined4 *)(param_1 + 0x480) = 0;
  return;
}

