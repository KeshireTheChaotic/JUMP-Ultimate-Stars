
void FUN_0205b4ec(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  FUN_02056a6c(*(undefined1 *)(param_1 + 0x3c));
  if (*(int *)(iVar2 + 0x1c) != 0) {
    FUN_02056988(*(undefined1 *)(param_1 + 0x3c),0xffff);
  }
  FUN_0205b3c4(param_1);
  uVar1 = FUN_02056da4();
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  *(undefined1 *)(param_1 + 0x2f) = 1;
  *(undefined1 *)(param_1 + 0x2c) = 1;
  return;
}

