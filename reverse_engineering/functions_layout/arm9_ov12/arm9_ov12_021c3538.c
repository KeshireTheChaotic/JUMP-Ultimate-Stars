
void FUN_021c3538(int param_1)

{
  *(byte *)(param_1 + 0xa9) = *(byte *)(param_1 + 0xa9) | 8;
  FUN_02028330(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  *(undefined1 *)(param_1 + 0x88) = 0;
  FUN_021c4d68(param_1);
  return;
}

