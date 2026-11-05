
void FUN_0215e118(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0215d4e0();
  if (iVar1 != 0) {
    *(undefined2 *)(*(int *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x5c) + 0x26) = 0;
    *(undefined2 *)(*(int *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x5c) + 0x2e) = 0xc00;
    iVar1 = *(int *)(param_1 + 0x1a4);
    if ((iVar1 != 0) && (*(short *)(iVar1 + 0x50) != -1)) {
      *(short *)(iVar1 + 0x50) = *(short *)(iVar1 + 0x50) + 1;
    }
  }
  iVar1 = FUN_0215d904(*(undefined4 *)(param_1 + 0x1a8));
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0x1e6) = 1;
    FUN_0215d2e4(param_1);
    return;
  }
  iVar1 = FUN_0215e470(param_1);
  if (iVar1 != 0) {
    return;
  }
  iVar1 = FUN_0215e534(param_1);
  if (iVar1 == 0) {
    FUN_0215ef58(param_1,(int)*(short *)(param_1 + 0xb8));
    return;
  }
  return;
}

