
void FUN_02019ab0(int param_1,uint param_2)

{
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffff7fff | (param_2 & 1) << 0xf;
  return;
}

