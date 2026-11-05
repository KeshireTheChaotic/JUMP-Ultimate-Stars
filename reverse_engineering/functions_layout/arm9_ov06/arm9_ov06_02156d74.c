
void FUN_02156d74(int param_1)

{
  FUN_02158978();
  thunk_FUN_0201b244(*(undefined4 *)(param_1 + 0x1b8));
  FUN_0215f090(*(undefined4 *)(param_1 + 0x1a0));
  FUN_02083648(*(undefined4 *)(param_1 + 0x1a8));
  if (*(int *)(param_1 + 0x1a4) != 0) {
    thunk_FUN_0201b244();
  }
  (**(code **)(**(int **)(param_1 + 0x1c0) + 8))();
  FUN_0201b244(param_1);
  return;
}

