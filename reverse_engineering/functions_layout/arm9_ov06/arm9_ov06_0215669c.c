
void FUN_0215669c(int param_1,int param_2)

{
  int iVar1;
  short sVar2;
  
  if (*(char *)(param_2 + 2) != 0) {
    sVar2 = (short)((uint)((int)*(char *)(param_2 + 2) << 0x15) >> 0x10);
    iVar1 = FUN_02155c9c(*(undefined4 *)(param_1 + 0x88));
    if (iVar1 != 0) {
      sVar2 = -sVar2;
    }
    *(short *)(*(int *)(*(int *)(*(int *)(param_1 + 0x7c) + 0x10) + 0x5c) + 0x2c) = sVar2;
  }
  if (*(char *)(param_2 + 3) == '\0') {
    return;
  }
  *(short *)(*(int *)(*(int *)(*(int *)(param_1 + 0x7c) + 0x10) + 0x5c) + 0x2e) =
       *(char *)(param_2 + 3) * -0x7e;
  return;
}

