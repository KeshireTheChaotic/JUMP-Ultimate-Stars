
void FUN_038019b8(int param_1,undefined4 param_2,int param_3)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x24) + param_3;
  return;
}

