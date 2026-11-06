
void FUN_02156664(int param_1,int param_2)

{
  if (*(short *)(param_2 + 2) != 0) {
    *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) | 0x800000;
  }
  FUN_0207d11c(*(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x10),*(short *)(param_2 + 2) != 0);
  return;
}

