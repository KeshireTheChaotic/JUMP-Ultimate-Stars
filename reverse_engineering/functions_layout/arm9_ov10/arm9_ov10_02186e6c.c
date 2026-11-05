
void FUN_02186e6c(undefined4 param_1,int param_2)

{
  FUN_02001b6c(*(undefined4 *)(param_2 + 8),2);
  FUN_02001b80(*(undefined4 *)(param_2 + 8));
  FUN_02175814(*(undefined4 *)(param_2 + 0x18));
  *(undefined4 *)(param_2 + 0x18) = 0;
  FUN_02175814(*(undefined4 *)(param_2 + 0x28));
  *(undefined4 *)(param_2 + 0x28) = 0;
  if (*(int *)(param_2 + 0x38) != 0) {
    FUN_02001320();
    *(undefined4 *)(param_2 + 0x38) = 0;
  }
  FUN_02175814(param_2);
  return;
}

