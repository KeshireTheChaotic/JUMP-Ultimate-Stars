
void FUN_02156630(int param_1,int param_2)

{
  if (*(short *)(param_2 + 2) != 0) {
    *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) | 0x1000000;
  }
  FUN_02155604(*(undefined4 *)(param_1 + 0x7c),*(short *)(param_2 + 2) != 0);
  return;
}

