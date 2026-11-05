
void FUN_0203254c(int param_1,int param_2)

{
  if (*(int *)(param_2 + 0x18) != 0) {
    *(undefined4 *)(*(int *)(param_2 + 0x18) + 0x14) = *(undefined4 *)(param_2 + 0x14);
  }
  if (*(int *)(param_2 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_2 + 0x14) + 0x18) = *(undefined4 *)(param_2 + 0x18);
  }
  if (*(int *)(param_1 + 0x20) == param_2) {
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x14);
  }
  *(undefined4 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
  return;
}

