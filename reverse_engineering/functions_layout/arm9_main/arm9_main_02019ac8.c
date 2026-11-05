
void FUN_02019ac8(int param_1,uint param_2)

{
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffffbfff | (param_2 & 1) << 0xe;
  return;
}

