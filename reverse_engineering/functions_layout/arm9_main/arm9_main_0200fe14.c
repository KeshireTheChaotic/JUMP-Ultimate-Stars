
void FUN_0200fe14(int param_1)

{
  undefined4 uVar1;
  undefined1 auStack_20 [5];
  byte local_1b;
  ushort local_10;
  
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x14))(*(int **)(param_1 + 0x1c),auStack_20,0x12);
  if ((local_1b & 4) == 0) {
    (**(code **)(**(int **)(param_1 + 0x1c) + 0x24))(*(int **)(param_1 + 0x1c),0);
    uVar1 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x2c))(*(int **)(param_1 + 0x1c),0);
    *(undefined4 *)(param_1 + 0x34) = uVar1;
  }
  else {
    uVar1 = FUN_0201a228((uint)local_10);
    *(undefined4 *)(param_1 + 0x34) = uVar1;
    FUN_02051890(auStack_20,*(undefined4 *)(param_1 + 0x34),0x12);
    (**(code **)(**(int **)(param_1 + 0x1c) + 0x14))
              (*(int **)(param_1 + 0x1c),*(int *)(param_1 + 0x34) + 0x12,local_10 - 0x12);
    (**(code **)(**(int **)(param_1 + 0x1c) + 0x24))(*(int **)(param_1 + 0x1c),0);
  }
  return;
}

