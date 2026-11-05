
void FUN_02078564(int param_1,int param_2)

{
  *(uint *)(*(int *)(param_1 + 0x56c) + 0x3c) = *(uint *)(*(int *)(param_1 + 0x56c) + 0x3c) | 0x1000
  ;
  if (param_2 != 0) {
    *(uint *)(*(int *)(param_1 + 0x56c) + 0x3c) =
         *(uint *)(*(int *)(param_1 + 0x56c) + 0x3c) | 0x2000;
  }
  return;
}

