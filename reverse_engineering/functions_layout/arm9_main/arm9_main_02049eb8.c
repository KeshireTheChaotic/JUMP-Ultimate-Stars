
void FUN_02049eb8(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 100) = *param_2;
  *(undefined4 *)(param_1 + 0x68) = param_2[1];
  *(undefined4 *)(param_1 + 0x6c) = param_2[2];
  *(undefined4 *)(param_1 + 0x70) = param_2[3];
  return;
}

