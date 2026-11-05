
void FUN_02049324(int param_1,uint param_2)

{
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffeff | (param_2 & 1) << 8;
  return;
}

