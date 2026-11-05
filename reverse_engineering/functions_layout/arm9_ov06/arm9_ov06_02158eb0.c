
bool FUN_02158eb0(int param_1,uint param_2)

{
  return (*(uint *)(param_1 + (param_2 >> 5) * 4 + 8) & 1 << (param_2 & 0x1f)) != 0;
}

