
void FUN_021877dc(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    FUN_02175814(*(undefined4 *)(*(int *)(param_1 + 8) + 8));
    *(undefined4 *)(*(int *)(param_1 + 8) + 8) = 0;
    FUN_02175814(*(undefined4 *)(*(int *)(param_1 + 8) + 0xc));
    *(undefined4 *)(*(int *)(param_1 + 8) + 0xc) = 0;
    FUN_02175814(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  FUN_02185058(param_1);
  FUN_02175814(*(undefined4 *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_02175814(*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}

