
void FUN_0205b188(int param_1)

{
  if (*(int *)(param_1 + 8) == 0) {
    return;
  }
  FUN_0205cd68();
  if (*(int *)(param_1 + 0xc) == 0) {
    FUN_0205e108(&DAT_020ada94 + *(int *)(param_1 + 0x10) * 0x24,param_1);
    return;
  }
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 8) = 0;
  return;
}

