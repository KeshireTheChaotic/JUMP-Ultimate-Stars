
void FUN_02180924(int param_1)

{
  if (*(short *)(param_1 + 0xd0) != 0) {
    *(short *)(param_1 + 0xd0) = *(short *)(param_1 + 0xd0) + -1;
  }
  return;
}

